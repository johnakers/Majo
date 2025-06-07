package;

import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.util.FlxDirectionFlags;

class PlayerGroup extends FlxGroup
{
	var playerSprite:PlayerSprite;
  var h:Float;
	var v:Float;
  var action:String = "idle";

  // weapon stuff
	var meleeHitboxes:FlxTypedGroup<HitBox>;
  var arrows:FlxTypedGroup<Projectile>;
  var bombs:FlxTypedGroup<Bomb>;

  // comboattacks
  var lastPrimaryAttack:Float;
  var comboAttackIndex:Int = 0;

  // NOTE: debug stuff
  var debug_StateText:FlxText;
  var debug_WeaponText:FlxText;

	public function new(x:Float, y:Float):Void
	{
		super();

		playerSprite = new PlayerSprite(x, y);
		add(playerSprite);

		meleeHitboxes = getMeleeHitboxes();
    add(meleeHitboxes);

    arrows = new FlxTypedGroup<Projectile>(30);
    add(arrows);

    bombs = new FlxTypedGroup<Bomb>(5);
    add(bombs);

    // NOTE: debug stuff
    debug_StateText = new FlxText(playerSprite.x, playerSprite.y);
    debug_StateText.text = "idle";
    debug_StateText.color = FlxColor.WHITE;
    debug_StateText.size = 8;
    add(debug_StateText);

    debug_WeaponText = new FlxText(playerSprite.x, playerSprite.y);
    debug_WeaponText.text = playerSprite.secondaryWeapon();
    debug_WeaponText.color = FlxColor.WHITE;
    debug_WeaponText.size = 8;
    add(debug_WeaponText);
	}

  // NOTE: when trying to shoot bow, for some reason we only create a new arrow every other time
  //       framerate tanks
  //       arrows don't move
  override function update(elapsed:Float):Void
  {
    playerSprite.update(elapsed);

    meleeHitboxes.update(elapsed);
    for (hitbox in meleeHitboxes)
    {
      hitbox.updatePositionOffBase(playerSprite);
    }

    if (playerSprite.action != "attack")
    {
      meleeHitboxes.killMembers();
    }

    arrows.update(elapsed);

    // NOTE: debug stuff
    debug_StateText.text = playerSprite.action;
    debug_StateText.x = playerSprite.x;
    debug_StateText.y = playerSprite.y + 12;

    debug_WeaponText.text = playerSprite.secondaryWeapon();
    debug_WeaponText.x = playerSprite.x;
    debug_WeaponText.y = playerSprite.y + 22;
  }

	public function dash():Void
  {
    playerSprite.dash();
  }

	public function toggleSecondaryWeapon():Void
	{
    playerSprite.toggleSecondaryWeapon();
  }

  public function getHitBoxByDirection(hitBoxes:FlxTypedGroup<HitBox>, facing:FlxDirectionFlags)
  {
    return hitBoxes.getFirst(function(box) {
      return box.facing == facing;
    });
  }

  public function attack(combo:Int=0):Void
  {
    trace("attack() pressed");
    if (playerSprite.inAction())
    {
      trace("if");
      // NOTE: do nothing (for now)
      // check what frame we're on and if we're like within 4 frames of next combo, load sword 2
      trace(lastPrimaryAttack);
      comboAttackIndex++;
      if
      (
        playerSprite.animation.name == playerSprite.facingMap[playerSprite.facing] + "slash" + 0
      )
      {
        trace(lastPrimaryAttack - Sys.time());
        trace("combo");
      }
    }
    else
    {
      trace("else");

      playerSprite.attack(comboAttackIndex % 2);
      lastPrimaryAttack = Sys.time(); // ignore red squiggle, this works???
      var hb:HitBox = getHitBoxByDirection(meleeHitboxes, playerSprite.facing);
      hb.revive();
    }
  }

  public function secondaryAttack():Void
  {
    switch(playerSprite.secondaryWeapon())
    {
      case "bow":
        playerSprite.secondaryAttack();
        var arrow = new Projectile(playerSprite.x, playerSprite.y, "arrow", 1, 200, playerSprite.facing);
        arrows.add(arrow);

        if (arrows.maxSize == arrows.length)
        {
          trace("FIXME: I've run out of arrows via TypedGroup");
        }
      case "bomb":
        trace("TODO: bomb attack");
      case _:
    }
  }

	private function getMeleeHitboxes():FlxTypedGroup<HitBox>
	{
		var hitBoxGroup:FlxTypedGroup<HitBox> = new FlxTypedGroup<HitBox>(4);

    // NOTE: load this from JSON or something in the future? or at least a loop?
    hitBoxGroup.add(new HitBox(playerSprite.x, playerSprite.y, 32, 32, { xOffset: -8, yOffset: -18, life: 0.5, heading: UP, type: "melee" }));
    hitBoxGroup.add(new HitBox(playerSprite.x, playerSprite.y, 32, 32, { xOffset: -8, yOffset: 0, life: 0.5, heading: DOWN, type: "melee" }));
    hitBoxGroup.add(new HitBox(playerSprite.x, playerSprite.y, 32, 32, { xOffset: 4, yOffset: -10, life: 0.5, heading: RIGHT, type: "melee" }));
    hitBoxGroup.add(new HitBox(playerSprite.x, playerSprite.y, 32, 32, { xOffset: -20, yOffset: -10, life: 0.5, heading: LEFT, type: "melee" }));

    return hitBoxGroup;
	}
}
