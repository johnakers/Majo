package;

import flixel.FlxSprite;
import flixel.util.FlxColor;

class HitBox extends FlxSprite
{
	var data:Dynamic;

	public function new(x:Float, y:Float, width:Float, height:Float, options)
	{
		super(x, y);
		loadGraphic("assets/images/invisible32x32.png", false, cast(width, Int), cast(height, Int));
		setSize(width, height);
		data = options;
		offset.set(data.xOffset, data.yOffset);
		facing = data.heading;

		kill();
	}

	override function update(elapsed:Float):Void
	{
		super.update(elapsed);
		debugBoundingBoxColor = FlxColor.MAGENTA;
	}

	public function updatePositionOffBase(baseSprite:FlxSprite)
	{
		x = baseSprite.x + data.xOffset;
		y = baseSprite.y + data.yOffset;
	}
}
