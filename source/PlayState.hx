package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.input.gamepad.FlxGamepad;

class PlayState extends FlxState
{
	// player
	var playerGroup:PlayerGroup;
	var h:Float;
	var v:Float;

	override public function create()
	{
		// --- debugger (would like to have environment variable conditional here)
		FlxG.debugger.visible = true;
		FlxG.debugger.drawDebug = true;
		FlxG.log.redirectTraces = true;
		// FlxG.mouse.visible = false;

		// ---- entities (should be loaded from map eventually)
		// --- player
		playerGroup = new PlayerGroup(FlxG.width / 2, FlxG.height / 2);
		add(playerGroup);

		// --- enemies

		// --- camera
		// FlxG.camera.follow(player, TOPDOWN, 1);

		// --- HUD

		// ---
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);

		// gamepad
		var gamepad:FlxGamepad = FlxG.gamepads.lastActive;

		//
		listenForKeys(gamepad);
		playerGroup.update(elapsed);
	}

	// for the future: think about Menus
	private function listenForKeys(gamepad:FlxGamepad):Void
	{
		if (gamepad.justPressed.A)
		{
			playerGroup.dash();
		}
		else if (gamepad.justPressed.Y)
		{
			playerGroup.toggleSecondaryWeapon();
		}
		else if (gamepad.justPressed.X)
		{
			playerGroup.attack();
		}
		else if (gamepad.justPressed.B)
		{
			playerGroup.secondaryAttack();
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
}
