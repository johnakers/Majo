package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.input.gamepad.FlxGamepad;

class PlayState extends FlxState
{
	var player:Player;
	var playerSwordHitBox:HitBox;
	var witch:Witch;
	var witchHurtBox:HurtBox;

	var hud:HUD;

	override public function create()
	{
		// --- debugger (would like to have environment variable conditional here)
		FlxG.debugger.visible = true;
		FlxG.debugger.drawDebug = true;
		FlxG.log.redirectTraces = true;
		// FlxG.mouse.visible = false;

		// TODO: MAKE A PLAYER CONTROLLER WITH A FLX TYPED GROUP!!!!

		// ---- entities (should be loaded from map)
		// --- player
		player = new Player(FlxG.width / 2, FlxG.height / 2);
		add(player);

		// --- witch
		witch = new Witch(FlxG.width / 3, FlxG.height / 2);
		witchHurtBox = new HurtBox(witch.x, witch.y - 14, RIGHT, 14, 28);
		add(witch);
		add(witchHurtBox);

		// --- camera
		FlxG.camera.follow(player, TOPDOWN, 1);

		// --- HUD
		hud = new HUD();
		add(hud);

		// ---
		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);

		var gamepad:FlxGamepad = FlxG.gamepads.lastActive;

		updateWitch();
		listenForKeys(gamepad);
		//
		hud.updateHUD(player.currentWeapon(), [witch]);
	}

	// for the future: think about Menus
	private function listenForKeys(gamepad:FlxGamepad):Void
	{
		if (gamepad.justPressed.A)
		{
			dash();
		}
		else if (gamepad.justPressed.Y)
		{
			player.toggleWeapon();
		}
		else if (gamepad.justPressed.X)
		{
			if (player.attacking)
			{
				// wait for animation and combo
			}
			else
			{
				if (player.currentWeapon() == "sword")
				{
					trace("sword indeed");
					swordAttack();
				}
			}
		}
		else if (gamepad.justPressed.B)
		{
			trace("O pressed");
		}
		else if (gamepad.justPressed.RIGHT_SHOULDER)
		{
			trace("RB pressed");
		}
		else if (gamepad.justPressed.RIGHT_TRIGGER)
		{
			trace("RT pressed");
		}
		else if (gamepad.justPressed.LEFT_SHOULDER)
		{
			trace("LB pressed");
		}
		else if (gamepad.justPressed.LEFT_TRIGGER)
		{
			trace("LT pressed");
		}
	}

	private function updateWitch()
	{
		witchHurtBox.x = witch.x;
		witchHurtBox.y = witch.y - 14;
	}

	// sword attacks only, for now
	// eventually put hitboxes into typed group
	private function swordAttack()
	{
		var hbWidth = 32;
		var hbHeight = 32;
		var xAdjust = 0;
		var yAdjust = 0;

		player.attack();
		trace(player.facing);
		switch (player.facing)
		{
			case RIGHT:
				xAdjust = 8;
				yAdjust = -10;
			case LEFT:
				xAdjust = -24;
				yAdjust = -10;
			case UP:
				xAdjust = -8;
				yAdjust = -20;
			case DOWN:
				trace('here>>>>');
				xAdjust = -8;
				yAdjust = 0;
			case _:
		}
		playerSwordHitBox = new HitBox(player.x + xAdjust, player.y + yAdjust, hbWidth, hbHeight);
		playerSwordHitBox.loadGraphic("assets/images/invisible32x32.png");
		playerSwordHitBox.alpha = 0.1;
		add(playerSwordHitBox);

		var isEnemyHit = FlxG.overlap(witchHurtBox, playerSwordHitBox, notifyHit, processHit);
		if (isEnemyHit)
		{
			witch.hitBy(player.facing);
		}
	}

	private function notifyHit(witchHurtBox:HurtBox, playerSwordHitBox:HitBox):Void {}

	private function processHit(witchHurtBox:HurtBox, playerSwordHitBox:HitBox):Bool
	{
		return true;
	}

	private function dash()
	{
		trace("Dash pressed");
		// player.dash();
	}
}
