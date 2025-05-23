package;

import flixel.FlxSprite;
import flixel.util.FlxDirectionFlags;

class HitBox extends FlxSprite
{
	var timer:Float = 0.0;
	var ttl:Float = 0.5;

	public function new(x:Float, y:Float, playerFacing:FlxDirectionFlags, width:Float = 32, height:Float = 32):Void
	{
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
