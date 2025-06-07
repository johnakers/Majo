package;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.util.FlxDirectionFlags;

class Projectile extends FlxSprite
{
  public var type:String;
  public var damage:Int;
  public var speed:Float; // NOTE: make public in the future, perhaps?

  private var default_sprite_size:Int = 8;

  var facingMap:Map<FlxDirectionFlags, String> = [DOWN => "v", UP => "v", LEFT => "h", RIGHT => "h",];
  var typeSpritesheetMap:Map<String, Dynamic> = [
    "arrow" => "assets/images/arrows/spritesheet.png",
  ];
  var animationTimer:Float = 0.5;
  var timer:Float = 0;

  public function new(x:Float, y:Float, t:String, d:Int, s:Float, dir:FlxDirectionFlags):Void
  {
    super(x, y);
    type = t;
    damage = d;
    speed = s;
    facing = dir;
    drag.x = drag.y = 0;

    // FIXME: change this to "projectiles" eventually and not just "arrows"
    loadGraphic(typeSpritesheetMap[type], true, default_sprite_size, default_sprite_size);

    // BUG: this doesn't seem to be working?
		setFacingFlip(LEFT, true, false);
		setFacingFlip(RIGHT, false, false);
		setFacingFlip(UP, false, false);
		setFacingFlip(DOWN, false, true);

    // FIXME: maybe a param in the future
    setSize(default_sprite_size, default_sprite_size);

    if (type == "arrow")
    {
      animation.add("v_arrow", [0, 1], 4);
      animation.add("h_arrow", [2, 3], 4);
    }

    switch(facing)
    {
      case RIGHT:
        velocity.x = speed;
      case LEFT:
        velocity.x = speed *= -1;
      case DOWN:
        velocity.y = speed;
      case UP:
        velocity.y = speed *= -1;
      case _:
    }

    animation.play(facingMap[facing] + "_" + type);

    debugBoundingBoxColor = FlxColor.MAGENTA;
  }

  override public function update(elapsed:Float):Void
  {
    super.update(elapsed);

    facing = facing;

    if (!isOnScreen())
    {
      kill();
    }
  }
}
