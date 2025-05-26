package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.input.gamepad.FlxGamepad;
import flixel.math.FlxAngle;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxDirectionFlags;

class Player extends FlxSprite
{
	final DEBUGGING:Bool = true;
	final SPEED:Float = 100;

	static inline var DEFAULT_SPRITE_SIZE:Int = 64;

	var facingMap:Map<FlxDirectionFlags, String> = [DOWN => "d_", UP => "u_", LEFT => "s_", RIGHT => "s_",];
	var attackComboCounter:Int = 0;

	public var attacking:Bool = false;
	public var weaponMap:Map<Int, String> = [0 => "SWORD", 1 => "BOW"];
	public var weaponIndex:Int = 0;

	var timeToATtack:Float = 0.25;
	var timer:Float = 0.0;
	var h:Float;
	var v:Float;

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
		animation.add("d_walk", frameRangeArray(98, 103), 24);
		animation.add("s_walk", frameRangeArray(46, 51), 24);
		animation.add("u_walk", frameRangeArray(150, 155), 24);
		animation.add("u_slash0", frameRangeArray(135, 140), 24);
		animation.add("u_slash1", frameRangeArray(141, 146), 24);
		animation.add("d_slash0", frameRangeArray(83, 88), 24);
		animation.add("d_slash1", frameRangeArray(89, 94), 24);
		animation.add("s_slash0", frameRangeArray(31, 36), 24);
		animation.add("s_slash1", frameRangeArray(37, 42), 24);

		// friction
		drag.x = drag.y = 900;
	}

	// conditional null return re: gamepad
	override function update(elapsed:Float)
	{
		super.update(elapsed);

		// gamepad is also defined in PlayState :think:
		var gamepad:FlxGamepad = FlxG.gamepads.lastActive;
		// if (gamepad == null)
		// {
		// 	throw "gamepad not found";
		// }

		// we don't move the player when attacking and we wait for the animation to complete
		if (!attacking)
		{
			updateMovement(gamepad);
		}
		else
		{
			timer += elapsed;
			if (timer >= timeToATtack)
			{
				timer = 0;
				attacking = false;
			}
		}
	}

	function updateMovement(gamepad:FlxGamepad):Void
	{
		if (gamepad == null)
		{
			throw "For some reason, gamepad here is null and this prints to JS console";
		}

		// maybe move these to instance variables if we need them for other stuff
		h = gamepad.getXAxis(LEFT_ANALOG_STICK) * SPEED;
		v = gamepad.getYAxis(LEFT_ANALOG_STICK) * SPEED;

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

	// switch weapon
	// combo if sword
	//   need a combo counter
	public function attack():Void
	{
		attacking = true;
		animation.play(facingMap[facing] + "slash" + attackComboCounter % 2);
		attackComboCounter++; // temp -> combos
		// hitbox
		// move towards enemy

		// -- the below has the right idea but moves in the wrong direction
		// -- angle for when we attack we want to move a few pixels in that direction
		// -- most likely need to normalize the angle based on the player since 0,0 is top left
		// trace('v: $v, h: $h');
		// var a = Math.atan2(v, h) * FlxAngle.TO_DEG;
		// trace(a);
		// var d = 10;
		// var dx = d * Math.sin(a);
		// var dy = d * Math.cos(a);
		// trace('dx: $dx, dy: $dy');
		var dx:Int = 0;
		var dy:Int = 0;
		var increment:Int = 10;
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
