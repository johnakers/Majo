package;

import haxe.io.Bytes;
import haxe.io.Path;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

#if disable_preloader_assets
@:dox(hide) class ManifestResources {
	public static var preloadLibraries:Array<Dynamic>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;

	public static function init (config:Dynamic):Void {
		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();
	}
}
#else
@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

			if(!StringTools.endsWith (rootPath, "/")) {

				rootPath += "/";

			}

		}

		if (rootPath == null) {

			#if (ios || tvos || webassembly)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif (console || sys)
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		#end

		var data, manifest, library, bundle;

		data = '{"name":null,"assets":"aoy4:pathy34:assets%2Fdata%2Fdata-goes-here.txty4:sizezy4:typey4:TEXTy2:idR1y7:preloadtgoR0y36:assets%2Fimages%2Fimages-go-here.txtR2zR3R4R5R7R6tgoR0y48:assets%2Fimages%2Fpixivan-free%2FBack%2FBase.pngR2i350R3y5:IMAGER5R8R6tgoR0y56:assets%2Fimages%2Fpixivan-free%2FBack%2FBow%20Attack.pngR2i1467R3R9R5R10R6tgoR0y54:assets%2Fimages%2Fpixivan-free%2FBack%2FBow%20Base.pngR2i439R3R9R5R11R6tgoR0y48:assets%2Fimages%2Fpixivan-free%2FBack%2FDash.pngR2i628R3R9R5R12R6tgoR0y47:assets%2Fimages%2Fpixivan-free%2FBack%2FHit.pngR2i763R3R9R5R13R6tgoR0y48:assets%2Fimages%2Fpixivan-free%2FBack%2FRoll.pngR2i1467R3R9R5R14R6tgoR0y50:assets%2Fimages%2Fpixivan-free%2FBack%2FSheate.pngR2i530R3R9R5R15R6tgoR0y53:assets%2Fimages%2Fpixivan-free%2FBack%2FSlash%201.pngR2i1472R3R9R5R16R6tgoR0y53:assets%2Fimages%2Fpixivan-free%2FBack%2FSlash%202.pngR2i1593R3R9R5R17R6tgoR0y52:assets%2Fimages%2Fpixivan-free%2FBack%2FUnsheate.pngR2i744R3R9R5R18R6tgoR0y48:assets%2Fimages%2Fpixivan-free%2FBack%2FWalk.pngR2i926R3R9R5R19R6tgoR0y55:assets%2Fimages%2Fpixivan-free%2FBack%20Spritesheet.pngR2i10898R3R9R5R20R6tgoR0y56:assets%2Fimages%2Fpixivan-free%2FFront%2FBase%20Base.pngR2i595R3R9R5R21R6tgoR0y49:assets%2Fimages%2Fpixivan-free%2FFront%2FBase.pngR2i468R3R9R5R22R6tgoR0y57:assets%2Fimages%2Fpixivan-free%2FFront%2FBow%20Attack.pngR2i2057R3R9R5R23R6tgoR0y49:assets%2Fimages%2Fpixivan-free%2FFront%2FDash.pngR2i881R3R9R5R24R6tgoR0y48:assets%2Fimages%2Fpixivan-free%2FFront%2FHit.pngR2i1135R3R9R5R25R6tgoR0y49:assets%2Fimages%2Fpixivan-free%2FFront%2FRoll.pngR2i1903R3R9R5R26R6tgoR0y51:assets%2Fimages%2Fpixivan-free%2FFront%2FSheate.pngR2i733R3R9R5R27R6tgoR0y54:assets%2Fimages%2Fpixivan-free%2FFront%2FSlash%201.pngR2i1839R3R9R5R28R6tgoR0y54:assets%2Fimages%2Fpixivan-free%2FFront%2FSlash%202.pngR2i1927R3R9R5R29R6tgoR0y53:assets%2Fimages%2Fpixivan-free%2FFront%2FUnsheate.pngR2i1068R3R9R5R30R6tgoR0y49:assets%2Fimages%2Fpixivan-free%2FFront%2FWalk.pngR2i1340R3R9R5R31R6tgoR0y56:assets%2Fimages%2Fpixivan-free%2FFront%20Spritesheet.pngR2i14883R3R9R5R32R6tgoR0y61:assets%2Fimages%2Fpixivan-free%2FLegacy%20Red%20Back.asepriteR2i17071R3y6:BINARYR5R33R6tgoR0y62:assets%2Fimages%2Fpixivan-free%2FLegacy%20Red%20Front.asepriteR2i19507R3R34R5R35R6tgoR0y61:assets%2Fimages%2Fpixivan-free%2FLegacy%20Red%20Side.asepriteR2i18192R3R34R5R36R6tgoR0y48:assets%2Fimages%2Fpixivan-free%2FSide%2FBase.pngR2i463R3R9R5R37R6tgoR0y56:assets%2Fimages%2Fpixivan-free%2FSide%2FBow%20Attack.pngR2i2110R3R9R5R38R6tgoR0y54:assets%2Fimages%2Fpixivan-free%2FSide%2FBow%20Base.pngR2i554R3R9R5R39R6tgoR0y48:assets%2Fimages%2Fpixivan-free%2FSide%2FDash.pngR2i840R3R9R5R40R6tgoR0y47:assets%2Fimages%2Fpixivan-free%2FSide%2FHit.pngR2i1012R3R9R5R41R6tgoR0y48:assets%2Fimages%2Fpixivan-free%2FSide%2FRoll.pngR2i1982R3R9R5R42R6tgoR0y50:assets%2Fimages%2Fpixivan-free%2FSide%2FSheate.pngR2i701R3R9R5R43R6tgoR0y53:assets%2Fimages%2Fpixivan-free%2FSide%2FSlash%201.pngR2i1704R3R9R5R44R6tgoR0y53:assets%2Fimages%2Fpixivan-free%2FSide%2FSlash%202.pngR2i1541R3R9R5R45R6tgoR0y52:assets%2Fimages%2Fpixivan-free%2FSide%2FUnsheate.pngR2i794R3R9R5R46R6tgoR0y48:assets%2Fimages%2Fpixivan-free%2FSide%2FWalk.pngR2i1193R3R9R5R47R6tgoR0y55:assets%2Fimages%2Fpixivan-free%2FSide%20Spritesheet.pngR2i13527R3R9R5R48R6tgoR0y75:assets%2Fimages%2Fpixivan-free%2Fspritesheet-combined%20-%20with%20nums.pngR2i27576R3R9R5R49R6tgoR0y57:assets%2Fimages%2Fpixivan-free%2Fspritesheet-combined.pngR2i38280R3R9R5R50R6tgoR0y69:assets%2Fimages%2Fpixivan-traders%2F%40Aseprite%2FBlacksmith.asepriteR2i15899R3R34R5R51R6tgoR0y70:assets%2Fimages%2Fpixivan-traders%2F%40Aseprite%2FDecorations.asepriteR2i8866R3R34R5R52R6tgoR0y68:assets%2Fimages%2Fpixivan-traders%2F%40Aseprite%2FFisherman.asepriteR2i1393R3R34R5R53R6tgoR0y68:assets%2Fimages%2Fpixivan-traders%2F%40Aseprite%2FHerbalist.asepriteR2i8086R3R34R5R54R6tgoR0y70:assets%2Fimages%2Fpixivan-traders%2F%40Aseprite%2FMerchandise.asepriteR2i1635R3R34R5R55R6tgoR0y67:assets%2Fimages%2Fpixivan-traders%2F%40Aseprite%2FMiner%20.asepriteR2i1850R3R34R5R56R6tgoR0y68:assets%2Fimages%2Fpixivan-traders%2F%40Aseprite%2FPotion%20Maker.aseR2i21283R3R34R5R57R6tgoR0y68:assets%2Fimages%2Fpixivan-traders%2FBlacksmith%2FIdle%20Checking.pngR2i2673R3R9R5R58R6tgoR0y67:assets%2Fimages%2Fpixivan-traders%2FBlacksmith%2FIdle%20Working.pngR2i2258R3R9R5R59R6tgoR0y51:assets%2Fimages%2Fpixivan-traders%2FDecorations.pngR2i14782R3R9R5R60R6tgoR0y65:assets%2Fimages%2Fpixivan-traders%2FHerbalist%2FIdle%20Adding.pngR2i1560R3R9R5R61R6tgoR0y65:assets%2Fimages%2Fpixivan-traders%2FHerbalist%2FIdle%20Mixing.pngR2i1283R3R9R5R62R6tgoR0y69:assets%2Fimages%2Fpixivan-traders%2FPotion%20Maker%2FIdle%20Bored.pngR2i1548R3R9R5R63R6tgoR0y72:assets%2Fimages%2Fpixivan-traders%2FPotion%20Maker%2FIdle%20Research.pngR2i2538R3R9R5R64R6tgoR0y64:assets%2Fimages%2Fpixivan-traders%2FSimple%20NPC%2FFisherman.pngR2i611R3R9R5R65R6tgoR0y66:assets%2Fimages%2Fpixivan-traders%2FSimple%20NPC%2FMerchandise.pngR2i781R3R9R5R66R6tgoR0y60:assets%2Fimages%2Fpixivan-traders%2FSimple%20NPC%2FMiner.pngR2i1043R3R9R5R67R6tgoR0y36:assets%2Fmusic%2Fmusic-goes-here.txtR2zR3R4R5R68R6tgoR0y36:assets%2Fsounds%2Fsounds-go-here.txtR2zR3R4R5R69R6tgoR2i17437R3y5:SOUNDR5y33:assets%2Fsounds%2Fsword-swipe.wavy9:pathGroupaR71hR6tgoR2i8220R3y5:MUSICR5y26:flixel%2Fsounds%2Fbeep.mp3R72aR74y26:flixel%2Fsounds%2Fbeep.ogghR6tgoR2i39706R3R73R5y28:flixel%2Fsounds%2Fflixel.mp3R72aR76y28:flixel%2Fsounds%2Fflixel.ogghR6tgoR2i6840R3R70R5R75R72aR74R75hgoR2i33629R3R70R5R77R72aR76R77hgoR2i15744R3y4:FONTy9:classNamey35:__ASSET__flixel_fonts_nokiafc22_ttfR5y30:flixel%2Ffonts%2Fnokiafc22.ttfR6tgoR2i29724R3R78R79y36:__ASSET__flixel_fonts_monsterrat_ttfR5y31:flixel%2Ffonts%2Fmonsterrat.ttfR6tgoR0y33:flixel%2Fimages%2Fui%2Fbutton.pngR2i222R3R9R5R84R6tgoR0y36:flixel%2Fimages%2Flogo%2Fdefault.pngR2i484R3R9R5R85R6tgoR0y42:flixel%2Fimages%2Ftransitions%2Fcircle.pngR2i299R3R9R5R86R6tgoR0y53:flixel%2Fimages%2Ftransitions%2Fdiagonal_gradient.pngR2i730R3R9R5R87R6tgoR0y43:flixel%2Fimages%2Ftransitions%2Fdiamond.pngR2i236R3R9R5R88R6tgoR0y42:flixel%2Fimages%2Ftransitions%2Fsquare.pngR2i209R3R9R5R89R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

	}


}

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_images_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_base_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_bow_attack_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_bow_base_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_dash_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_hit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_roll_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_sheate_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_slash_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_slash_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_unsheate_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_walk_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_spritesheet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_base_base_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_base_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_bow_attack_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_dash_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_hit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_roll_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_sheate_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_slash_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_slash_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_unsheate_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_walk_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_spritesheet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_legacy_red_back_aseprite extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_legacy_red_front_aseprite extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_legacy_red_side_aseprite extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_base_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_bow_attack_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_bow_base_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_dash_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_hit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_roll_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_sheate_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_slash_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_slash_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_unsheate_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_walk_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_spritesheet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_spritesheet_combined___with_nums_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_spritesheet_combined_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders__aseprite_blacksmith_aseprite extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders__aseprite_decorations_aseprite extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders__aseprite_fisherman_aseprite extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders__aseprite_herbalist_aseprite extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders__aseprite_merchandise_aseprite extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders__aseprite_miner__aseprite extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders__aseprite_potion_maker_ase extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders_blacksmith_idle_checking_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders_blacksmith_idle_working_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders_decorations_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders_herbalist_idle_adding_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders_herbalist_idle_mixing_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders_potion_maker_idle_bored_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders_potion_maker_idle_research_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders_simple_npc_fisherman_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders_simple_npc_merchandise_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders_simple_npc_miner_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_music_goes_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_sword_swipe_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_circle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_diagonal_gradient_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_diamond_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_square_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:file("assets/data/data-goes-here.txt") @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/images/images-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_images_images_go_here_txt extends haxe.io.Bytes {}
@:keep @:image("assets/images/pixivan-free/Back/Base.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_base_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Back/Bow Attack.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_bow_attack_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Back/Bow Base.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_bow_base_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Back/Dash.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_dash_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Back/Hit.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_hit_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Back/Roll.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_roll_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Back/Sheate.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_sheate_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Back/Slash 1.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_slash_1_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Back/Slash 2.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_slash_2_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Back/Unsheate.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_unsheate_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Back/Walk.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_walk_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Back Spritesheet.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_back_spritesheet_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Front/Base Base.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_base_base_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Front/Base.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_base_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Front/Bow Attack.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_bow_attack_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Front/Dash.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_dash_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Front/Hit.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_hit_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Front/Roll.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_roll_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Front/Sheate.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_sheate_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Front/Slash 1.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_slash_1_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Front/Slash 2.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_slash_2_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Front/Unsheate.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_unsheate_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Front/Walk.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_walk_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Front Spritesheet.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_front_spritesheet_png extends lime.graphics.Image {}
@:keep @:file("assets/images/pixivan-free/Legacy Red Back.aseprite") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_legacy_red_back_aseprite extends haxe.io.Bytes {}
@:keep @:file("assets/images/pixivan-free/Legacy Red Front.aseprite") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_legacy_red_front_aseprite extends haxe.io.Bytes {}
@:keep @:file("assets/images/pixivan-free/Legacy Red Side.aseprite") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_legacy_red_side_aseprite extends haxe.io.Bytes {}
@:keep @:image("assets/images/pixivan-free/Side/Base.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_base_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Side/Bow Attack.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_bow_attack_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Side/Bow Base.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_bow_base_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Side/Dash.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_dash_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Side/Hit.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_hit_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Side/Roll.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_roll_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Side/Sheate.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_sheate_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Side/Slash 1.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_slash_1_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Side/Slash 2.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_slash_2_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Side/Unsheate.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_unsheate_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Side/Walk.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_walk_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/Side Spritesheet.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_side_spritesheet_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/spritesheet-combined - with nums.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_spritesheet_combined___with_nums_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-free/spritesheet-combined.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_free_spritesheet_combined_png extends lime.graphics.Image {}
@:keep @:file("assets/images/pixivan-traders/@Aseprite/Blacksmith.aseprite") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders__aseprite_blacksmith_aseprite extends haxe.io.Bytes {}
@:keep @:file("assets/images/pixivan-traders/@Aseprite/Decorations.aseprite") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders__aseprite_decorations_aseprite extends haxe.io.Bytes {}
@:keep @:file("assets/images/pixivan-traders/@Aseprite/Fisherman.aseprite") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders__aseprite_fisherman_aseprite extends haxe.io.Bytes {}
@:keep @:file("assets/images/pixivan-traders/@Aseprite/Herbalist.aseprite") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders__aseprite_herbalist_aseprite extends haxe.io.Bytes {}
@:keep @:file("assets/images/pixivan-traders/@Aseprite/Merchandise.aseprite") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders__aseprite_merchandise_aseprite extends haxe.io.Bytes {}
@:keep @:file("assets/images/pixivan-traders/@Aseprite/Miner .aseprite") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders__aseprite_miner__aseprite extends haxe.io.Bytes {}
@:keep @:file("assets/images/pixivan-traders/@Aseprite/Potion Maker.ase") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders__aseprite_potion_maker_ase extends haxe.io.Bytes {}
@:keep @:image("assets/images/pixivan-traders/Blacksmith/Idle Checking.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders_blacksmith_idle_checking_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-traders/Blacksmith/Idle Working.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders_blacksmith_idle_working_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-traders/Decorations.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders_decorations_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-traders/Herbalist/Idle Adding.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders_herbalist_idle_adding_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-traders/Herbalist/Idle Mixing.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders_herbalist_idle_mixing_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-traders/Potion Maker/Idle Bored.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders_potion_maker_idle_bored_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-traders/Potion Maker/Idle Research.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders_potion_maker_idle_research_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-traders/Simple NPC/Fisherman.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders_simple_npc_fisherman_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-traders/Simple NPC/Merchandise.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders_simple_npc_merchandise_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pixivan-traders/Simple NPC/Miner.png") @:noCompletion #if display private #end class __ASSET__assets_images_pixivan_traders_simple_npc_miner_png extends lime.graphics.Image {}
@:keep @:file("assets/music/music-goes-here.txt") @:noCompletion #if display private #end class __ASSET__assets_music_music_goes_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/sounds-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/sword-swipe.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_sword_swipe_wav extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/6,1,0/assets/sounds/beep.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/6,1,0/assets/sounds/flixel.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/6,1,0/assets/sounds/beep.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/6,1,0/assets/sounds/flixel.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends haxe.io.Bytes {}
@:keep @:font("export/html5/obj/webfont/nokiafc22.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:keep @:font("export/html5/obj/webfont/monsterrat.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/6,1,0/assets/images/ui/button.png") @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/6,1,0/assets/images/logo/default.png") @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-addons/3,3,2/assets/images/transitions/circle.png") @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_circle_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-addons/3,3,2/assets/images/transitions/diagonal_gradient.png") @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_diagonal_gradient_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-addons/3,3,2/assets/images/transitions/diamond.png") @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_diamond_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-addons/3,3,2/assets/images/transitions/square.png") @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_square_png extends lime.graphics.Image {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/nokiafc22"; #else ascender = 2048; descender = -512; height = 2816; numGlyphs = 172; underlinePosition = -640; underlineThickness = 256; unitsPerEM = 2048; #end name = "Nokia Cellphone FC Small"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/monsterrat"; #else ascender = 968; descender = -251; height = 1219; numGlyphs = 263; underlinePosition = -150; underlineThickness = 50; unitsPerEM = 1000; #end name = "Monsterrat"; super (); }}


#end

#if (openfl && !flash)

#if html5
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#end

#end
#end

#end