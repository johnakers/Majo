package;

import flixel.FlxSprite;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxDirectionFlags;

// NOTE: this needs to be turned into EnemyContoller:FlxTypedGruop<Sprite>
class Enemy extends FlxSprite
{
	public var life:Int;
	public var hitPoints:Int;

  var types:Array<String> = ["melee", "thrower"];
	var typeIndex:Int;

	public function new(x:Float, y:Float, type:Int, hp:Int = 3, type:Int = 0)
	{
		super(x, y);

		life = hitPoints = hp;

		typeIndex = type;

		var enemySpritesheet = "assets/images/pixivan-traders/Simple NPC/Merchandise.png";
		loadGraphic(enemySpritesheet, true, 14, 28);

		setSize(14, 14);
		offset.set(0, 14);
	}

	override function update(elapsed:Float):Void {}

	public function getType():String
	{
		return types[typeIndex];
	}

	public function hit(direction:FlxDirectionFlags, damage:Int = 1):Void
	{
		hitPoints -= damage;
		knockback(20, direction);
	}

	private function knockback(increment:Int, direction:FlxDirectionFlags):Void
	{
		var dx:Int = 0;
		var dy:Int = 0;

		switch (direction)
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
}
