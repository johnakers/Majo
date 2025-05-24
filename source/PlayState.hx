package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.input.gamepad.FlxGamepad;

class PlayState extends FlxState
{
	var player:Player;

	override public function create()
	{
		// --- debugger (would like to have environment variable conditional here)
		FlxG.debugger.visible = true;
		FlxG.debugger.drawDebug = true;
		FlxG.log.redirectTraces = true;
		FlxG.mouse.visible = false;

		// --- player
		player = new Player(FlxG.width / 2, FlxG.height / 2);
		add(player);

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
			trace("△ pressed");
		}
		else if (gamepad.justPressed.X)
		{
			trace("□ pressed");
			if (player.attacking)
			{
				// wait for animation and combo ?
			}
			else
			{
				playerAttack();
			}
		}
		else if (gamepad.justPressed.B)
		{
			trace("○ pressed");
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

	private function playerAttack()
	{
		player.attack();
		// which way is player facing
		// create hitbox
		var hb = new HitBox(player.x, player.y, player.facing);
		add(hb);
	}
}
