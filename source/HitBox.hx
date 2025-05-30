package;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.util.FlxDirectionFlags;

class HitBox extends FlxSprite
{
	var timer:Float = 0.0;
	var ttl:Float = 0.5; // maybe extend this to be changeable

	public function new(x:Float, y:Float, width:Int = 32, height:Int = 32, offsetX:Int = 0, offsetY:Int = 0):Void
	{
		debugBoundingBoxColor = FlxColor.MAGENTA;
		super(x, y);
		setSize(width, height);
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);

		timer += elapsed;
		if (timer >= ttl)
		{
			kill();
		}
	}
}
