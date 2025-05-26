package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.input.FlxAccelerometer;
import flixel.input.gamepad.FlxGamepad;

class PlayState extends FlxState
{
	var player:Player;
	var playerSwordHitBox:HitBox;
	var witch:Witch;
	var witchHurtBox:HurtBox;

	override public function create()
	{
		// --- debugger (would like to have environment variable conditional here)
		FlxG.debugger.visible = true;
		FlxG.debugger.drawDebug = true;
		FlxG.log.redirectTraces = true;
		FlxG.mouse.visible = false;

		// ---- entities (should be loaded from map)
		// --- player
		player = new Player(FlxG.width / 2, FlxG.height / 2);
		add(player);

		// --- witch
		witch = new Witch(FlxG.width / 3, FlxG.height / 2);
		var witchHurtBox = new HurtBox(witch.x, witch.y - 14, RIGHT, 14, 28);
		add(witch);
		add(witchHurtBox);

		// --- camera
		FlxG.camera.follow(player, TOPDOWN, 1);

		// ---
		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);

		var gamepad:FlxGamepad = FlxG.gamepads.lastActive;

		if (gamepad == null)
		{
			throw "No gamepad connected";
		}
		else
		{
			listenForKeys(gamepad);
		}
		updateWitch();
	}

	// for the future: think about Menus
	private function listenForKeys(gamepad:FlxGamepad):Void
	{
		if (gamepad.justPressed.A)
		{
			trace("X pressed");
		}
		else if (gamepad.justPressed.Y)
		{
			trace("Triangle pressed");
		}
		else if (gamepad.justPressed.X)
		{
			if (player.attacking)
			{
				// wait for animation and combo ?
			}
			else
			{
				playerAttack();
				// FlxG.collide(playerSwordHitBox, witchHurtBox, swordAttackCollision);
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
		// witchHurtBox.x = witch.x;
		// witchHurtBox.y = witch.y - 14;
	}

	private function playerAttack()
	{
		player.attack();
		playerSwordHitBox = new HitBox(player.x, player.y, player.facing);
		add(playerSwordHitBox); // calls kill() on self after 0.5s

		// ? this crashes
		var isEnemyHit = FlxG.pixelPerfectOverlap(witchHurtBox, playerSwordHitBox);
		trace(isEnemyHit);
	}
}
