package;

import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;

using flixel.util.FlxSpriteUtil;

class HUD extends FlxTypedGroup<FlxSprite>
{
  var currentWeaponIcon:FlxSprite;
  var currentWeaponIconMap:Map<String, String> = [
    "sword" => "assets/images/HUD/sword.png",
    "bow"   => "assets/images/HUD/bow.png"
  ];

  public function new()
  {
    super();

    currentWeaponIcon = new FlxSprite(50, 50);
    add(currentWeaponIcon);

    // stop scrolling
    forEach(function(sprite) sprite.scrollFactor.set(0, 0));
  }

  public function updateHUD(currentWeaponName:String, enemies:Array<Witch>)
  {
    currentWeaponIcon.loadGraphic(currentWeaponIconMap[currentWeaponName]);

    // for (enemy in enemies) updateEnemyLife(enemy);
  }

  // lifebar needs to be worked on
  function updateEnemyLife(enemy:Witch)
  {
    var initialX:Float = -1 * enemy.maxHitPpoints / 2 * 8;
    var increment:Float = 8;
    var x:Float = 8;
    if (enemy.alive)
    {
      for (i in 1...enemy.maxHitPpoints)
      {
        if (i > 1)
        {
          x = enemy.x + initialX + (i * increment);
        }

        var lifebar:FlxSprite;
        if (i <= enemy.hitPoints)
        {
          trace('here?');
          lifebar = new FlxSprite(x, enemy.y - 10, "assets/images/HUD/full-life.png");
        }
        else
        {
          trace('there?');
          lifebar = new FlxSprite(x, enemy.y - 10, "assets/images/HUD/empty-life.png");
        }

        add(lifebar);
      }
    }
    else
    {
      // ... don't do anything
    }
  }
}
