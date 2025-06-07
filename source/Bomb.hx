package;

import flixel.FlxSprite;

class Bomb extends FlxSprite
{
  var ttl:Float;

  public function new(x:Float, y:Float, fuse:Int=3)
  {
    super(x, y);

    ttl = fuse;
  }

  override public function update(elapsed:Float)
  {
    super.update(elapsed);

    ttl -= elapsed;
    if (ttl <= 0)
    {
      trace("bomb exploded");
      destroy(); // explode animation and hitbox
    }
  }
}