package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.input.gamepad.FlxGamepad;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxDirectionFlags;

class PlayerSprite extends FlxSprite
{
	// life
	public var maxHp:Int = 3;
	public var currentHp:Int = 2;

	// state
	public var action:String = "idle";

	// weapons
	public var mainWeapon:String = "sword";
	public var secondaryWeapons:Array<String> = ["bow", "bomb"];
	public var secondaryWeaponIndex:Int = 0;

	// animations
	var default_sprite_size:Int = 64;
	var animationTimer:Float = 0.5;
	var timer:Float = 0;

	// movement
	public var speed:Float = 100;
	public var facingMap:Map<FlxDirectionFlags, String> = [DOWN => "d_", UP => "u_", LEFT => "s_", RIGHT => "s_",];
	var h:Float;
	var v:Float;

	public function new(x:Float = 0, y:Float = 0)
	{
		super(x, y);

		// sprite
		loadGraphic("assets/images/pixivan-free/spritesheet-combined.png", true, default_sprite_size, default_sprite_size);

		setFacingFlip(LEFT, true, false);
		setFacingFlip(RIGHT, false, false);

		// default hitboxes
		setSize(16, 12);
		offset.set(24, 32);

		// animations
		animation.add("d_idle_sword", [53]);
		animation.add("s_idle_sword", [0]);
		animation.add("u_idle_sword", [104]);

		animation.add("d_idle_bow", [52]);
		animation.add("s_idle_bow", [10]);
		animation.add("u_idle_bow", [114]);

		animation.add("d_walk_sword", frameRangeArray(98, 103), 6);
		animation.add("s_walk_sword", frameRangeArray(46, 51), 6);
		animation.add("u_walk_sword", frameRangeArray(150, 155), 6);

		animation.add("d_walk_bow", frameRangeArray(98, 103), 6);
		animation.add("s_walk_bow", frameRangeArray(46, 51), 6);
		animation.add("u_walk_bow", frameRangeArray(150, 155), 6);

		// change to be more dynamic, eventually
		animation.add("u_slash0", frameRangeArray(135, 140), 6);
		animation.add("u_slash1", frameRangeArray(141, 146), 6);
		animation.add("d_slash0", frameRangeArray(83, 88), 6);
		animation.add("d_slash1", frameRangeArray(89, 94), 6);
		animation.add("s_slash0", frameRangeArray(31, 36), 6);
		animation.add("s_slash1", frameRangeArray(37, 42), 6);

		animation.add("u_bow_attack", frameRangeArray(105, 113), 16);
		animation.add("d_bow_attack", frameRangeArray(54, 61), 16);
		animation.add("s_bow_attack", frameRangeArray(1, 9), 18);

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

		var gamepad:FlxGamepad = FlxG.gamepads.lastActive;

		// TODO: for non-half second animations this will need to be reset based on the current animation
		if (timer >= animationTimer)
		{
			timer = 0;
			action = "idle";
		}
		else if (inAction())
		{
			timer += elapsed;
		}
		else
		{
			updateMovement(gamepad);
		}
	}

	function updateMovement(gamepad:FlxGamepad):Void
	{
		h = gamepad.getXAxis(LEFT_ANALOG_STICK) * speed;
		v = gamepad.getYAxis(LEFT_ANALOG_STICK) * speed;

		setFacingDirection();

		action = "idle";
		if ((velocity.x != 0 || velocity.y != 0) && touching == NONE)
		{
			action = "walk";
			animation.play(facingMap[facing] + "walk_sword");
		}
		else
		{
			animation.play(facingMap[facing] + "idle_sword");
		}

		if (!inAction())
		{
			velocity.x = h;
			velocity.y = v;
		}
	}

	public function attack(comboAction:Int = 0):Void
	{
		action = "attack";

		// TODO: need combos for sword attacks
		if (mainWeapon == "sword")
		{
			animation.play(facingMap[facing] + "slash" + comboAction);
			knockbackOrForward(10);
		}
	}

	public function secondaryAttack():Void
	{
		action = "secondary_attack";

		if (secondaryWeapon() == "bow")
		{
			animation.play(facingMap[facing] + "bow_attack");
		}
	}

	public function dash():Void
	{
		trace('DASH');
	}

	public function toggleSecondaryWeapon():Void
	{
		// NOTE: could also do this with % weapon length which is interesting to track weapon switches
		secondaryWeaponIndex++;
		if (secondaryWeaponIndex >= secondaryWeapons.length)
		{
			secondaryWeaponIndex = 0;
		}
	}

	// NOTE: quasi getters
	public function inAction():Bool
	{
		return action == "attack" || action == "dash" || action == "secondary_attack";
	}

	public function secondaryWeapon():String
	{
		return secondaryWeapons[secondaryWeaponIndex];
	}

	private function frameRangeArray(start:Int, end:Int):Array<Int>
	{
		var output:Array<Int> = [];
		for (i in start...end + 1)
		{
			output.push(i);
		}
		return output;
	}

	private function knockbackOrForward(increment:Int):Void
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

	private function setFacingDirection():Void
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
}
