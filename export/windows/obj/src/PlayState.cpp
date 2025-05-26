#include <hxcpp.h>

#ifndef INCLUDED_HitBox
#include <HitBox.h>
#endif
#ifndef INCLUDED_HurtBox
#include <HurtBox.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Witch
#include <Witch.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedContainer
#include <flixel/group/FlxTypedContainer.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxTypedGamepadMapping
#include <flixel/input/gamepad/mappings/FlxTypedGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af23706db05c7feb_8_new,"PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",8,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_16_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",16,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_42_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",42,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_61_listenForKeys,"PlayState","listenForKeys",0x80e65b45,"PlayState.listenForKeys","PlayState.hx",61,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_104_updateWitch,"PlayState","updateWitch",0xb95581ed,"PlayState.updateWitch","PlayState.hx",104,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_110_playerAttack,"PlayState","playerAttack",0xf7370dba,"PlayState.playerAttack","PlayState.hx",110,0xb30d7781)

void PlayState_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_8_new)
HXDLIN(   8)		super::__construct();
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x563293a6) {
			if (inClassId<=(int)0x0a05f89d) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0a05f89d;
			} else {
				return inClassId==(int)0x563293a6;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void PlayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_16_create)
HXLINE(  18)		::flixel::FlxG_obj::debugger->set_visible(true);
HXLINE(  19)		::flixel::FlxG_obj::debugger->set_drawDebug(true);
HXLINE(  20)		{
HXLINE(  20)			 ::flixel::_hx_system::frontEnds::LogFrontEnd _this = ::flixel::FlxG_obj::log;
HXDLIN(  20)			::haxe::Log_obj::trace = _this->processTraceData_dyn();
HXDLIN(  20)			_this->redirectTraces = true;
            		}
HXLINE(  21)		::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE(  25)		this->player =  ::Player_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )),(( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )));
HXLINE(  26)		this->add(this->player);
HXLINE(  29)		this->witch =  ::Witch_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(3) )),(( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )));
HXLINE(  30)		 ::HurtBox witchHurtBox =  ::HurtBox_obj::__alloc( HX_CTX ,this->witch->x,(this->witch->y - ( (Float)(14) )),16,14,28);
HXLINE(  31)		this->add(this->witch);
HXLINE(  32)		this->add(witchHurtBox);
HXLINE(  35)		::flixel::FlxG_obj::camera->follow(this->player,::flixel::FlxCameraFollowStyle_obj::TOPDOWN_dyn(),1);
HXLINE(  38)		this->super::create();
            	}


void PlayState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_42_update)
HXLINE(  43)		this->super::update(elapsed);
HXLINE(  45)		 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->lastActive;
HXLINE(  47)		if (::hx::IsNull( gamepad )) {
HXLINE(  49)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("No gamepad connected",0b,ff,98,87)));
            		}
            		else {
HXLINE(  53)			this->listenForKeys(gamepad);
            		}
HXLINE(  55)		this->updateWitch();
            	}


void PlayState_obj::listenForKeys( ::flixel::input::gamepad::FlxGamepad gamepad){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_61_listenForKeys)
HXDLIN(  61)		 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN(  61)		int id = 0;
HXDLIN(  61)		 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN(  61)		int Status = _this->status;
HXDLIN(  61)		bool _hx_tmp;
HXDLIN(  61)		switch((int)(id)){
            			case (int)-2: {
HXDLIN(  61)				_hx_tmp = _this1->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN(  61)				_hx_tmp = !(_this1->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN(  61)				int RawID = ( (int)(_this1->mapping->getRawID(id)) );
HXDLIN(  61)				 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  61)				if (::hx::IsNotNull( button )) {
HXDLIN(  61)					_hx_tmp = button->hasState(Status);
            				}
            				else {
HXDLIN(  61)					_hx_tmp = false;
            				}
            			}
            		}
HXDLIN(  61)		if (_hx_tmp) {
HXLINE(  63)			::haxe::Log_obj::trace(HX_("X pressed",da,2e,31,e3),::hx::SourceInfo(HX_("source/PlayState.hx",75,24,2b,b8),63,HX_("PlayState",5d,83,c2,46),HX_("listenForKeys",16,94,56,cd)));
            		}
            		else {
HXLINE(  65)			 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN(  65)			int id = 3;
HXDLIN(  65)			 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN(  65)			int Status = _this->status;
HXDLIN(  65)			bool _hx_tmp;
HXDLIN(  65)			switch((int)(id)){
            				case (int)-2: {
HXLINE(  65)					_hx_tmp = _this1->anyButton(Status);
            				}
            				break;
            				case (int)-1: {
HXLINE(  65)					_hx_tmp = !(_this1->anyButton(Status));
            				}
            				break;
            				default:{
HXLINE(  65)					int RawID = ( (int)(_this1->mapping->getRawID(id)) );
HXDLIN(  65)					 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  65)					if (::hx::IsNotNull( button )) {
HXLINE(  65)						_hx_tmp = button->hasState(Status);
            					}
            					else {
HXLINE(  65)						_hx_tmp = false;
            					}
            				}
            			}
HXDLIN(  65)			if (_hx_tmp) {
HXLINE(  67)				::haxe::Log_obj::trace(HX_("Triangle pressed",6a,b9,7d,cd),::hx::SourceInfo(HX_("source/PlayState.hx",75,24,2b,b8),67,HX_("PlayState",5d,83,c2,46),HX_("listenForKeys",16,94,56,cd)));
            			}
            			else {
HXLINE(  69)				 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN(  69)				int id = 2;
HXDLIN(  69)				 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN(  69)				int Status = _this->status;
HXDLIN(  69)				bool _hx_tmp;
HXDLIN(  69)				switch((int)(id)){
            					case (int)-2: {
HXLINE(  69)						_hx_tmp = _this1->anyButton(Status);
            					}
            					break;
            					case (int)-1: {
HXLINE(  69)						_hx_tmp = !(_this1->anyButton(Status));
            					}
            					break;
            					default:{
HXLINE(  69)						int RawID = ( (int)(_this1->mapping->getRawID(id)) );
HXDLIN(  69)						 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  69)						if (::hx::IsNotNull( button )) {
HXLINE(  69)							_hx_tmp = button->hasState(Status);
            						}
            						else {
HXLINE(  69)							_hx_tmp = false;
            						}
            					}
            				}
HXDLIN(  69)				if (_hx_tmp) {
HXLINE(  71)					if (!(this->player->attacking)) {
HXLINE(  77)						this->playerAttack();
            					}
            				}
            				else {
HXLINE(  81)					 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN(  81)					int id = 1;
HXDLIN(  81)					 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN(  81)					int Status = _this->status;
HXDLIN(  81)					bool _hx_tmp;
HXDLIN(  81)					switch((int)(id)){
            						case (int)-2: {
HXLINE(  81)							_hx_tmp = _this1->anyButton(Status);
            						}
            						break;
            						case (int)-1: {
HXLINE(  81)							_hx_tmp = !(_this1->anyButton(Status));
            						}
            						break;
            						default:{
HXLINE(  81)							int RawID = ( (int)(_this1->mapping->getRawID(id)) );
HXDLIN(  81)							 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  81)							if (::hx::IsNotNull( button )) {
HXLINE(  81)								_hx_tmp = button->hasState(Status);
            							}
            							else {
HXLINE(  81)								_hx_tmp = false;
            							}
            						}
            					}
HXDLIN(  81)					if (_hx_tmp) {
HXLINE(  83)						::haxe::Log_obj::trace(HX_("O pressed",d1,7d,b4,78),::hx::SourceInfo(HX_("source/PlayState.hx",75,24,2b,b8),83,HX_("PlayState",5d,83,c2,46),HX_("listenForKeys",16,94,56,cd)));
            					}
            					else {
HXLINE(  85)						 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN(  85)						int id = 5;
HXDLIN(  85)						 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN(  85)						int Status = _this->status;
HXDLIN(  85)						bool _hx_tmp;
HXDLIN(  85)						switch((int)(id)){
            							case (int)-2: {
HXLINE(  85)								_hx_tmp = _this1->anyButton(Status);
            							}
            							break;
            							case (int)-1: {
HXLINE(  85)								_hx_tmp = !(_this1->anyButton(Status));
            							}
            							break;
            							default:{
HXLINE(  85)								int RawID = ( (int)(_this1->mapping->getRawID(id)) );
HXDLIN(  85)								 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  85)								if (::hx::IsNotNull( button )) {
HXLINE(  85)									_hx_tmp = button->hasState(Status);
            								}
            								else {
HXLINE(  85)									_hx_tmp = false;
            								}
            							}
            						}
HXDLIN(  85)						if (_hx_tmp) {
HXLINE(  87)							::haxe::Log_obj::trace(HX_("RB pressed",32,8e,4c,5a),::hx::SourceInfo(HX_("source/PlayState.hx",75,24,2b,b8),87,HX_("PlayState",5d,83,c2,46),HX_("listenForKeys",16,94,56,cd)));
            						}
            						else {
HXLINE(  89)							 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN(  89)							int id = 18;
HXDLIN(  89)							 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN(  89)							int Status = _this->status;
HXDLIN(  89)							bool _hx_tmp;
HXDLIN(  89)							switch((int)(id)){
            								case (int)-2: {
HXLINE(  89)									_hx_tmp = _this1->anyButton(Status);
            								}
            								break;
            								case (int)-1: {
HXLINE(  89)									_hx_tmp = !(_this1->anyButton(Status));
            								}
            								break;
            								default:{
HXLINE(  89)									int RawID = ( (int)(_this1->mapping->getRawID(id)) );
HXDLIN(  89)									 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  89)									if (::hx::IsNotNull( button )) {
HXLINE(  89)										_hx_tmp = button->hasState(Status);
            									}
            									else {
HXLINE(  89)										_hx_tmp = false;
            									}
            								}
            							}
HXDLIN(  89)							if (_hx_tmp) {
HXLINE(  91)								::haxe::Log_obj::trace(HX_("RT pressed",44,f0,45,2f),::hx::SourceInfo(HX_("source/PlayState.hx",75,24,2b,b8),91,HX_("PlayState",5d,83,c2,46),HX_("listenForKeys",16,94,56,cd)));
            							}
            							else {
HXLINE(  93)								 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN(  93)								int id = 4;
HXDLIN(  93)								 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN(  93)								int Status = _this->status;
HXDLIN(  93)								bool _hx_tmp;
HXDLIN(  93)								switch((int)(id)){
            									case (int)-2: {
HXLINE(  93)										_hx_tmp = _this1->anyButton(Status);
            									}
            									break;
            									case (int)-1: {
HXLINE(  93)										_hx_tmp = !(_this1->anyButton(Status));
            									}
            									break;
            									default:{
HXLINE(  93)										int RawID = ( (int)(_this1->mapping->getRawID(id)) );
HXDLIN(  93)										 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  93)										if (::hx::IsNotNull( button )) {
HXLINE(  93)											_hx_tmp = button->hasState(Status);
            										}
            										else {
HXLINE(  93)											_hx_tmp = false;
            										}
            									}
            								}
HXDLIN(  93)								if (_hx_tmp) {
HXLINE(  95)									::haxe::Log_obj::trace(HX_("LB pressed",f8,be,8d,d8),::hx::SourceInfo(HX_("source/PlayState.hx",75,24,2b,b8),95,HX_("PlayState",5d,83,c2,46),HX_("listenForKeys",16,94,56,cd)));
            								}
            								else {
HXLINE(  97)									 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN(  97)									int id = 17;
HXDLIN(  97)									 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN(  97)									int Status = _this->status;
HXDLIN(  97)									bool _hx_tmp;
HXDLIN(  97)									switch((int)(id)){
            										case (int)-2: {
HXLINE(  97)											_hx_tmp = _this1->anyButton(Status);
            										}
            										break;
            										case (int)-1: {
HXLINE(  97)											_hx_tmp = !(_this1->anyButton(Status));
            										}
            										break;
            										default:{
HXLINE(  97)											int RawID = ( (int)(_this1->mapping->getRawID(id)) );
HXDLIN(  97)											 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  97)											if (::hx::IsNotNull( button )) {
HXLINE(  97)												_hx_tmp = button->hasState(Status);
            											}
            											else {
HXLINE(  97)												_hx_tmp = false;
            											}
            										}
            									}
HXDLIN(  97)									if (_hx_tmp) {
HXLINE(  99)										::haxe::Log_obj::trace(HX_("LT pressed",0a,21,87,ad),::hx::SourceInfo(HX_("source/PlayState.hx",75,24,2b,b8),99,HX_("PlayState",5d,83,c2,46),HX_("listenForKeys",16,94,56,cd)));
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,listenForKeys,(void))

void PlayState_obj::updateWitch(){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_104_updateWitch)
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,updateWitch,(void))

void PlayState_obj::playerAttack(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_110_playerAttack)
HXLINE( 111)		::haxe::Log_obj::trace(HX_("player attacking",9b,e8,23,d8),::hx::SourceInfo(HX_("source/PlayState.hx",75,24,2b,b8),111,HX_("PlayState",5d,83,c2,46),HX_("playerAttack",09,9a,01,dc)));
HXLINE( 112)		this->player->attack();
HXLINE( 113)		this->playerSwordHitBox =  ::HitBox_obj::__alloc( HX_CTX ,this->player->x,this->player->y,this->player->facing,null(),null());
HXLINE( 114)		this->add(this->playerSwordHitBox);
HXLINE( 117)		 ::flixel::FlxCamera camera = null();
HXDLIN( 117)		bool isEnemyHit = ::flixel::util::FlxCollision_obj::pixelPerfectCheck(( ( ::flixel::FlxSprite)(this->witchHurtBox) ),( ( ::flixel::FlxSprite)(this->playerSwordHitBox) ),255,camera);
HXLINE( 118)		::haxe::Log_obj::trace(isEnemyHit,::hx::SourceInfo(HX_("source/PlayState.hx",75,24,2b,b8),118,HX_("PlayState",5d,83,c2,46),HX_("playerAttack",09,9a,01,dc)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,playerAttack,(void))


::hx::ObjectPtr< PlayState_obj > PlayState_obj::__new() {
	::hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PlayState_obj *__this = (PlayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(playerSwordHitBox,"playerSwordHitBox");
	HX_MARK_MEMBER_NAME(witch,"witch");
	HX_MARK_MEMBER_NAME(witchHurtBox,"witchHurtBox");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(playerSwordHitBox,"playerSwordHitBox");
	HX_VISIT_MEMBER_NAME(witch,"witch");
	HX_VISIT_MEMBER_NAME(witchHurtBox,"witchHurtBox");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PlayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"witch") ) { return ::hx::Val( witch ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return ::hx::Val( player ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateWitch") ) { return ::hx::Val( updateWitch_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"witchHurtBox") ) { return ::hx::Val( witchHurtBox ); }
		if (HX_FIELD_EQ(inName,"playerAttack") ) { return ::hx::Val( playerAttack_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"listenForKeys") ) { return ::hx::Val( listenForKeys_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"playerSwordHitBox") ) { return ::hx::Val( playerSwordHitBox ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PlayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"witch") ) { witch=inValue.Cast<  ::Witch >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast<  ::Player >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"witchHurtBox") ) { witchHurtBox=inValue.Cast<  ::HurtBox >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"playerSwordHitBox") ) { playerSwordHitBox=inValue.Cast<  ::HitBox >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("player",61,eb,b8,37));
	outFields->push(HX_("playerSwordHitBox",34,d3,55,7a));
	outFields->push(HX_("witch",47,cb,6e,ca));
	outFields->push(HX_("witchHurtBox",b5,30,26,c7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Player */ ,(int)offsetof(PlayState_obj,player),HX_("player",61,eb,b8,37)},
	{::hx::fsObject /*  ::HitBox */ ,(int)offsetof(PlayState_obj,playerSwordHitBox),HX_("playerSwordHitBox",34,d3,55,7a)},
	{::hx::fsObject /*  ::Witch */ ,(int)offsetof(PlayState_obj,witch),HX_("witch",47,cb,6e,ca)},
	{::hx::fsObject /*  ::HurtBox */ ,(int)offsetof(PlayState_obj,witchHurtBox),HX_("witchHurtBox",b5,30,26,c7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PlayState_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_("player",61,eb,b8,37),
	HX_("playerSwordHitBox",34,d3,55,7a),
	HX_("witch",47,cb,6e,ca),
	HX_("witchHurtBox",b5,30,26,c7),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("listenForKeys",16,94,56,cd),
	HX_("updateWitch",7e,34,07,b0),
	HX_("playerAttack",09,9a,01,dc),
	::String(null()) };

::hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	PlayState_obj _hx_dummy;
	PlayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayState",5d,83,c2,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

