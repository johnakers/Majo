package;

import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxDirectionFlags;

class Witch extends FlxSprite
{
	public var maxHitPpoints:Int = 3;
	public var hitPoints:Int = 3;

	public function new(x:Float, y:Float)
	{
		super(x, y);

		// sprite
		var witchSpritesheet = "assets/images/pixivan-traders/Simple NPC/Merchandise.png";
		loadGraphic(witchSpritesheet, true, 14, 28);

		// default hitboxes
		setSize(14, 14);
		offset.set(0, 14);

		animation.add("idle", [0, 1, 2, 3]);
		animation.play("idle");
	}

	override function update(elapsed:Float)
	{
		var text:FlxText = new FlxText(x, y + 20, 32);
		text.color = FlxColor.WHITE;
		text.text = 'HP: $hitPoints';
		text.setBorderStyle(OUTLINE, FlxColor.RED);
	}

	public function hitBy(playerFacing:FlxDirectionFlags)
	{
		knockback(20, playerFacing);
		hitPoints--;
	}

	private function knockback(increment:Int, playerFacing:FlxDirectionFlags)
	{
		var dx:Int = 0;
		var dy:Int = 0;

		switch (playerFacing)
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
