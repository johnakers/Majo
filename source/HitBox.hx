package;

import flixel.FlxObject;
import flixel.util.FlxDirectionFlags;

class HitBox extends FlxObject
{
	var timer:Float = 0.0;
	var ttl:Float = 0.5;

	public function new(x:Float, y:Float, playerFacing:FlxDirectionFlags, width:Int = 32, height:Int = 32):Void
	{
		switch (playerFacing)
		{
			case RIGHT:
				super(x + 8, y - 8);
				setSize(32, 32);
			case LEFT:
				super(x - 24, y - 8);
				setSize(32, 32);
			case UP:
				super(x - 8, y - 20);
				setSize(32, 32);
			case DOWN:
				super(x - 8, y);
				setSize(32, 32);
			case _:
		}
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
