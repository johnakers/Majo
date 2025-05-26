package;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.util.FlxColor;
import flixel.util.FlxDirectionFlags;

class HurtBox extends FlxSprite
{
	public function new(x:Float, y:Float, playerFacing:FlxDirectionFlags = RIGHT, width:Int = 32, height:Int = 32):Void
	{
		super(x, y);

		debugBoundingBoxColor = FlxColor.CYAN;

		setSize(width, height);
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
