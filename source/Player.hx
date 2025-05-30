package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.input.gamepad.FlxGamepad;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxDirectionFlags;

class Player extends FlxSprite
{
	var speed:Float = 100;

	static inline var DEFAULT_SPRITE_SIZE:Int = 64;

	public var attacking:Bool = false;
	public var dashing:Bool = false;
	public var attackComboCounter:Int = 0;
	public var maxHp:Int = 3;
	public var currentHp:Int = 2;

	var facingMap:Map<FlxDirectionFlags, String> = [DOWN => "d_", UP => "u_", LEFT => "s_", RIGHT => "s_",];
	var weapons:Array<String> = ["sword", "bow"];
	var weaponIndex:Int = 0;
	var dashTimer:Float = 0.5;
	var timeToATtack:Float = 0.5;
	var timer:Float = 0.0;
	var h:Float;
	var v:Float;

	// quasi getter
	public function currentWeapon()
	{
		return weapons[weaponIndex % weapons.length];
	}

	public function new(x:Float = 0, y:Float = 0)
	{
		super(x, y);

		// sprite
		var frontSpritesheetPath = "assets/images/pixivan-free/spritesheet-combined.png";
		loadGraphic(frontSpritesheetPath, true, DEFAULT_SPRITE_SIZE, DEFAULT_SPRITE_SIZE);

		setFacingFlip(LEFT, true, false);
		setFacingFlip(RIGHT, false, false);

		// default hitboxes
		setSize(16, 12);
		offset.set(24, 32);

		// animation
		animation.add("d_idle", [53]);
		animation.add("s_idle", [0]);
		animation.add("u_idle", [104]);
		animation.add("d_walk", frameRangeArray(98, 103));
		animation.add("s_walk", frameRangeArray(46, 51));
		animation.add("u_walk", frameRangeArray(150, 155));

		animation.add("u_slash0", frameRangeArray(135, 140));
		animation.add("u_slash1", frameRangeArray(141, 146));
		animation.add("d_slash0", frameRangeArray(83, 88));
		animation.add("d_slash1", frameRangeArray(89, 94));
		animation.add("s_slash0", frameRangeArray(31, 36));
		animation.add("s_slash1", frameRangeArray(37, 42));

		animation.add("u_dash", frameRangeArray(115, 118));
		animation.add("s_dash", frameRangeArray(11, 14));
		animation.add("d_dash", frameRangeArray(63, 66));

		// friction
		drag.x = drag.y = 900;
	}

	// conditional null return re: gamepad
	override function update(elapsed:Float)
	{
		super.update(elapsed);

		// gamepad is also defined in PlayState......................
		var gamepad:FlxGamepad = FlxG.gamepads.lastActive;

		// we don't move the player when doing another "action" and we wait for the animation to complete
		timer += elapsed;
		if (!attacking)
		{
			updateMovement(gamepad);
		}
		else if (timer >= timeToATtack)
		{
			timer = 0;
			attacking = false;
		}
	}

	function updateMovement(gamepad:FlxGamepad):Void
	{
		h = gamepad.getXAxis(LEFT_ANALOG_STICK) * speed;
		v = gamepad.getYAxis(LEFT_ANALOG_STICK) * speed;

		setFacingDirection(h, v);

		var action:String = "idle";
		if ((velocity.x != 0 || velocity.y != 0) && touching == NONE)
		{
			action = "walk";
		}

		// walking / idle
		switch (facing)
		{
			case LEFT, RIGHT:
				animation.play("s_" + action);
			case UP:
				animation.play("u_" + action);
			case DOWN:
				animation.play("d_" + action);
			case _:
		}

		// move player
		// extend !attacking !rolling !etc.
		if (!attacking)
		{
			velocity.x = h;
			velocity.y = v;
		}
	}

	// pending weapon
	public function attack():Void
	{
		attacking = true;
		if (currentWeapon() == "sword")
		{
			animation.play(facingMap[facing] + "slash" + attackComboCounter % 2);
			attackComboCounter++;
			knockback(10);
		}
	}

	public function dash()
	{
		dashing = true;
		animation.play(facingMap[facing] + "dash");
		speed = 300;
	}

	public function toggleWeapon()
	{
		trace('Switch Weapon pressed');
		weaponIndex++;
	}

	private function setFacingDirection(h:Float, v:Float):Void
	{
		if (Math.abs(h) > Math.abs(v))
		{
			if (h > 0)
			{
				facing = RIGHT;
			}
			else
			{
				facing = LEFT;
			}
		}
		else
		{
			if (v > 0)
			{
				facing = DOWN;
			}
			else if (v < 0)
			{
				facing = UP;
			}
		}
	}

	// accepts a "start" and "end" and returns an Array of Integers
	// with the range
	private function frameRangeArray(start:Int, end:Int):Array<Int>
	{
		var output:Array<Int> = [];
		for (i in start...end + 1)
		{
			output.push(i);
		}
		return output;
	}

	private function knockback(increment:Int)
	{
		var dx:Int = 0;
		var dy:Int = 0;

		switch (facing)
		{
			case LEFT:
				dx = -1 * increment;
			case RIGHT:
				dx = increment;
			case UP:
				dy = -1 * increment;
			case DOWN:
				dy = increment;
			case _:
		}

		FlxTween.tween(this, {
			x: x + dx,
			y: y + dy
		}, 0.1, {
			ease: FlxEase.circOut,
		});
	}
}
