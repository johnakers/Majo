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
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_103_updateWitch,"PlayState","updateWitch",0xb95581ed,"PlayState.updateWitch","PlayState.hx",103,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_109_playerAttack,"PlayState","playerAttack",0xf7370dba,"PlayState.playerAttack","PlayState.hx",109,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_121_notifyHit,"PlayState","notifyHit",0x8b310ab9,"PlayState.notifyHit","PlayState.hx",121,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_125_processHit,"PlayState","processHit",0x6334c095,"PlayState.processHit","PlayState.hx",125,0xb30d7781)

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
HXLINE(  30)		this->witchHurtBox =  ::HurtBox_obj::__alloc( HX_CTX ,this->witch->x,(this->witch->y - ( (Float)(14) )),16,14,28);
HXLINE(  31)		this->add(this->witch);
HXLINE(  32)		this->add(this->witchHurtBox);
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
HXLINE(  53)			this->updateWitch();
HXLINE(  54)			this->listenForKeys(gamepad);
            		}
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
HXLINE(  80)					 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN(  80)					int id = 1;
HXDLIN(  80)					 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN(  80)					int Status = _this->status;
HXDLIN(  80)					bool _hx_tmp;
HXDLIN(  80)					switch((int)(id)){
            						case (int)-2: {
HXLINE(  80)							_hx_tmp = _this1->anyButton(Status);
            						}
            						break;
            						case (int)-1: {
HXLINE(  80)							_hx_tmp = !(_this1->anyButton(Status));
            						}
            						break;
            						default:{
HXLINE(  80)							int RawID = ( (int)(_this1->mapping->getRawID(id)) );
HXDLIN(  80)							 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  80)							if (::hx::IsNotNull( button )) {
HXLINE(  80)								_hx_tmp = button->hasState(Status);
            							}
            							else {
HXLINE(  80)								_hx_tmp = false;
            							}
            						}
            					}
HXDLIN(  80)					if (_hx_tmp) {
HXLINE(  82)						::haxe::Log_obj::trace(HX_("O pressed",d1,7d,b4,78),::hx::SourceInfo(HX_("source/PlayState.hx",75,24,2b,b8),82,HX_("PlayState",5d,83,c2,46),HX_("listenForKeys",16,94,56,cd)));
            					}
            					else {
HXLINE(  84)						 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN(  84)						int id = 5;
HXDLIN(  84)						 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN(  84)						int Status = _this->status;
HXDLIN(  84)						bool _hx_tmp;
HXDLIN(  84)						switch((int)(id)){
            							case (int)-2: {
HXLINE(  84)								_hx_tmp = _this1->anyButton(Status);
            							}
            							break;
            							case (int)-1: {
HXLINE(  84)								_hx_tmp = !(_this1->anyButton(Status));
            							}
            							break;
            							default:{
HXLINE(  84)								int RawID = ( (int)(_this1->mapping->getRawID(id)) );
HXDLIN(  84)								 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  84)								if (::hx::IsNotNull( button )) {
HXLINE(  84)									_hx_tmp = button->hasState(Status);
            								}
            								else {
HXLINE(  84)									_hx_tmp = false;
            								}
            							}
            						}
HXDLIN(  84)						if (_hx_tmp) {
HXLINE(  86)							::haxe::Log_obj::trace(HX_("RB pressed",32,8e,4c,5a),::hx::SourceInfo(HX_("source/PlayState.hx",75,24,2b,b8),86,HX_("PlayState",5d,83,c2,46),HX_("listenForKeys",16,94,56,cd)));
            						}
            						else {
HXLINE(  88)							 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN(  88)							int id = 18;
HXDLIN(  88)							 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN(  88)							int Status = _this->status;
HXDLIN(  88)							bool _hx_tmp;
HXDLIN(  88)							switch((int)(id)){
            								case (int)-2: {
HXLINE(  88)									_hx_tmp = _this1->anyButton(Status);
            								}
            								break;
            								case (int)-1: {
HXLINE(  88)									_hx_tmp = !(_this1->anyButton(Status));
            								}
            								break;
            								default:{
HXLINE(  88)									int RawID = ( (int)(_this1->mapping->getRawID(id)) );
HXDLIN(  88)									 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  88)									if (::hx::IsNotNull( button )) {
HXLINE(  88)										_hx_tmp = button->hasState(Status);
            									}
            									else {
HXLINE(  88)										_hx_tmp = false;
            									}
            								}
            							}
HXDLIN(  88)							if (_hx_tmp) {
HXLINE(  90)								::haxe::Log_obj::trace(HX_("RT pressed",44,f0,45,2f),::hx::SourceInfo(HX_("source/PlayState.hx",75,24,2b,b8),90,HX_("PlayState",5d,83,c2,46),HX_("listenForKeys",16,94,56,cd)));
            							}
            							else {
HXLINE(  92)								 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN(  92)								int id = 4;
HXDLIN(  92)								 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN(  92)								int Status = _this->status;
HXDLIN(  92)								bool _hx_tmp;
HXDLIN(  92)								switch((int)(id)){
            									case (int)-2: {
HXLINE(  92)										_hx_tmp = _this1->anyButton(Status);
            									}
            									break;
            									case (int)-1: {
HXLINE(  92)										_hx_tmp = !(_this1->anyButton(Status));
            									}
            									break;
            									default:{
HXLINE(  92)										int RawID = ( (int)(_this1->mapping->getRawID(id)) );
HXDLIN(  92)										 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  92)										if (::hx::IsNotNull( button )) {
HXLINE(  92)											_hx_tmp = button->hasState(Status);
            										}
            										else {
HXLINE(  92)											_hx_tmp = false;
            										}
            									}
            								}
HXDLIN(  92)								if (_hx_tmp) {
HXLINE(  94)									::haxe::Log_obj::trace(HX_("LB pressed",f8,be,8d,d8),::hx::SourceInfo(HX_("source/PlayState.hx",75,24,2b,b8),94,HX_("PlayState",5d,83,c2,46),HX_("listenForKeys",16,94,56,cd)));
            								}
            								else {
HXLINE(  96)									 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN(  96)									int id = 17;
HXDLIN(  96)									 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN(  96)									int Status = _this->status;
HXDLIN(  96)									bool _hx_tmp;
HXDLIN(  96)									switch((int)(id)){
            										case (int)-2: {
HXLINE(  96)											_hx_tmp = _this1->anyButton(Status);
            										}
            										break;
            										case (int)-1: {
HXLINE(  96)											_hx_tmp = !(_this1->anyButton(Status));
            										}
            										break;
            										default:{
HXLINE(  96)											int RawID = ( (int)(_this1->mapping->getRawID(id)) );
HXDLIN(  96)											 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  96)											if (::hx::IsNotNull( button )) {
HXLINE(  96)												_hx_tmp = button->hasState(Status);
            											}
            											else {
HXLINE(  96)												_hx_tmp = false;
            											}
            										}
            									}
HXDLIN(  96)									if (_hx_tmp) {
HXLINE(  98)										::haxe::Log_obj::trace(HX_("LT pressed",0a,21,87,ad),::hx::SourceInfo(HX_("source/PlayState.hx",75,24,2b,b8),98,HX_("PlayState",5d,83,c2,46),HX_("listenForKeys",16,94,56,cd)));
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
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_103_updateWitch)
HXLINE( 104)		this->witchHurtBox->set_x(this->witch->x);
HXLINE( 105)		this->witchHurtBox->set_y((this->witch->y - ( (Float)(14) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,updateWitch,(void))

void PlayState_obj::playerAttack(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_109_playerAttack)
HXLINE( 110)		this->player->attack();
HXLINE( 111)		this->playerSwordHitBox =  ::HitBox_obj::__alloc( HX_CTX ,this->player->x,this->player->y,this->player->facing,null(),null());
HXLINE( 112)		this->add(this->playerSwordHitBox);
HXLINE( 114)		bool isEnemyHit = ::flixel::FlxG_obj::overlap(this->witchHurtBox,this->playerSwordHitBox,this->notifyHit_dyn(),this->processHit_dyn());
HXLINE( 115)		if (isEnemyHit) {
HXLINE( 117)			this->witch->hitBy(this->player->facing);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,playerAttack,(void))

void PlayState_obj::notifyHit( ::HurtBox witchHurtBox, ::HitBox playerSwordHitBox){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_121_notifyHit)
            	}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,notifyHit,(void))

bool PlayState_obj::processHit( ::HurtBox witchHurtBox, ::HitBox playerSwordHitBox){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_125_processHit)
HXDLIN( 125)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,processHit,return )


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
	case 9:
		if (HX_FIELD_EQ(inName,"notifyHit") ) { return ::hx::Val( notifyHit_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"processHit") ) { return ::hx::Val( processHit_dyn() ); }
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
	HX_("notifyHit",0a,47,de,4e),
	HX_("processHit",24,4b,1c,d7),
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

