#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxTypedGamepadAnalogStick
#include <flixel/input/gamepad/FlxTypedGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxTypedGamepadMapping
#include <flixel/input/gamepad/mappings/FlxTypedGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_13_new,"Player","new",0x8d5554f3,"Player.new","Player.hx",13,0xa27fc9dd)
static const int _hx_array_data_6c4d5f81_1[] = {
	(int)53,
};
static const int _hx_array_data_6c4d5f81_2[] = {
	(int)0,
};
static const int _hx_array_data_6c4d5f81_3[] = {
	(int)104,
};
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_67_update,"Player","update",0xf1f8df56,"Player.update","Player.hx",67,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_94_updateMovement,"Player","updateMovement",0xab7266a5,"Player.updateMovement","Player.hx",94,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_135_setFacingDirection,"Player","setFacingDirection",0x81edbb10,"Player.setFacingDirection","Player.hx",135,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_162_frameRangeArray,"Player","frameRangeArray",0x194d363c,"Player.frameRangeArray","Player.hx",162,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_175_attack,"Player","attack",0x4b035515,"Player.attack","Player.hx",175,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_196_knockback,"Player","knockback",0xee77c40e,"Player.knockback","Player.hx",196,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_18_boot,"Player","boot",0x156e003f,"Player.boot","Player.hx",18,0xa27fc9dd)

void Player_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_13_new)
HXLINE(  28)		this->timer = ((Float)0.0);
HXLINE(  27)		this->timeToATtack = ((Float)0.25);
HXLINE(  25)		this->weaponIndex = 0;
HXLINE(  24)		 ::haxe::ds::IntMap _g =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXDLIN(  24)		_g->set(0,HX_("SWORD",9d,ef,ff,03));
HXDLIN(  24)		_g->set(1,HX_("BOW",ea,59,32,00));
HXDLIN(  24)		this->weaponMap = _g;
HXLINE(  23)		this->attacking = false;
HXLINE(  21)		this->attackComboCounter = 0;
HXLINE(  20)		 ::haxe::ds::IntMap _g1 =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXDLIN(  20)		_g1->set(4096,HX_("d_",7b,57,00,00));
HXDLIN(  20)		_g1->set(256,HX_("u_",4a,66,00,00));
HXDLIN(  20)		_g1->set(1,HX_("s_",8c,64,00,00));
HXDLIN(  20)		_g1->set(16,HX_("s_",8c,64,00,00));
HXDLIN(  20)		this->facingMap = _g1;
HXLINE(  16)		this->SPEED = ((Float)100);
HXLINE(  15)		this->DEBUGGING = true;
HXLINE(  34)		super::__construct(x,y,null());
HXLINE(  37)		::String frontSpritesheetPath = HX_("assets/images/pixivan-free/spritesheet-combined.png",97,d6,b5,ce);
HXLINE(  38)		this->loadGraphic(frontSpritesheetPath,true,64,64,null(),null());
HXLINE(  40)		this->_facingFlip->set(1, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),true)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  41)		this->_facingFlip->set(16, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),false)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  44)		this->setSize(( (Float)(16) ),( (Float)(12) ));
HXLINE(  45)		{
HXLINE(  45)			 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN(  45)			this1->set_x(( (Float)(24) ));
HXDLIN(  45)			this1->set_y(( (Float)(32) ));
            		}
HXLINE(  48)		this->animation->add(HX_("d_idle",0f,d8,74,f4),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_1,1),null(),null(),null(),null());
HXLINE(  49)		this->animation->add(HX_("s_idle",a0,41,cf,f3),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_2,1),null(),null(),null(),null());
HXLINE(  50)		this->animation->add(HX_("u_idle",5e,fa,85,c0),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_3,1),null(),null(),null(),null());
HXLINE(  51)		 ::flixel::animation::FlxAnimationController _hx_tmp = this->animation;
HXDLIN(  51)		_hx_tmp->add(HX_("d_walk",04,8e,b3,fd),this->frameRangeArray(98,103),24,null(),null(),null());
HXLINE(  52)		 ::flixel::animation::FlxAnimationController _hx_tmp1 = this->animation;
HXDLIN(  52)		_hx_tmp1->add(HX_("s_walk",95,f7,0d,fd),this->frameRangeArray(46,51),24,null(),null(),null());
HXLINE(  53)		 ::flixel::animation::FlxAnimationController _hx_tmp2 = this->animation;
HXDLIN(  53)		_hx_tmp2->add(HX_("u_walk",53,b0,c4,c9),this->frameRangeArray(150,155),24,null(),null(),null());
HXLINE(  54)		 ::flixel::animation::FlxAnimationController _hx_tmp3 = this->animation;
HXDLIN(  54)		_hx_tmp3->add(HX_("u_slash0",1d,af,4b,fd),this->frameRangeArray(135,140),24,null(),null(),null());
HXLINE(  55)		 ::flixel::animation::FlxAnimationController _hx_tmp4 = this->animation;
HXDLIN(  55)		_hx_tmp4->add(HX_("u_slash1",1e,af,4b,fd),this->frameRangeArray(141,146),24,null(),null(),null());
HXLINE(  56)		 ::flixel::animation::FlxAnimationController _hx_tmp5 = this->animation;
HXDLIN(  56)		_hx_tmp5->add(HX_("d_slash0",0e,1b,f2,30),this->frameRangeArray(83,88),24,null(),null(),null());
HXLINE(  57)		 ::flixel::animation::FlxAnimationController _hx_tmp6 = this->animation;
HXDLIN(  57)		_hx_tmp6->add(HX_("d_slash1",0f,1b,f2,30),this->frameRangeArray(89,94),24,null(),null(),null());
HXLINE(  58)		 ::flixel::animation::FlxAnimationController _hx_tmp7 = this->animation;
HXDLIN(  58)		_hx_tmp7->add(HX_("s_slash0",df,ca,e6,8a),this->frameRangeArray(31,36),24,null(),null(),null());
HXLINE(  59)		 ::flixel::animation::FlxAnimationController _hx_tmp8 = this->animation;
HXDLIN(  59)		_hx_tmp8->add(HX_("s_slash1",e0,ca,e6,8a),this->frameRangeArray(37,42),24,null(),null(),null());
HXLINE(  62)		{
HXLINE(  62)			 ::flixel::math::FlxBasePoint this2 = this->drag;
HXDLIN(  62)			this2->set_x(this->drag->set_y(( (Float)(900) )));
            		}
            	}

Dynamic Player_obj::__CreateEmpty() { return new Player_obj; }

void *Player_obj::_hx_vtable = 0;

Dynamic Player_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Player_obj > _hx_result = new Player_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Player_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x33e526a5) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x33e526a5;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Player_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_67_update)
HXLINE(  68)		this->super::update(elapsed);
HXLINE(  71)		 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->lastActive;
HXLINE(  78)		if (!(this->attacking)) {
HXLINE(  80)			this->updateMovement(gamepad);
            		}
            		else {
HXLINE(  84)			 ::Player _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  84)			_hx_tmp->timer = (_hx_tmp->timer + elapsed);
HXLINE(  85)			if ((this->timer >= this->timeToATtack)) {
HXLINE(  87)				this->timer = ( (Float)(0) );
HXLINE(  88)				this->attacking = false;
            			}
            		}
            	}


void Player_obj::updateMovement( ::flixel::input::gamepad::FlxGamepad gamepad){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_94_updateMovement)
HXLINE(  95)		if (::hx::IsNull( gamepad )) {
HXLINE(  97)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("For some reason, gamepad here is null and this prints to JS console",bd,b9,f3,a9)));
            		}
HXLINE( 101)		Float _hx_tmp = gamepad->getAnalogXAxisValue(gamepad->mapping->getAnalogStick(19));
HXDLIN( 101)		this->h = (_hx_tmp * this->SPEED);
HXLINE( 102)		Float _hx_tmp1 = gamepad->getYAxisRaw(gamepad->mapping->getAnalogStick(19));
HXDLIN( 102)		this->v = (_hx_tmp1 * this->SPEED);
HXLINE( 104)		this->setFacingDirection(this->h,this->v);
HXLINE( 106)		::String action = HX_("idle",14,a7,b3,45);
HXLINE( 107)		bool _hx_tmp2;
HXDLIN( 107)		bool _hx_tmp3;
HXDLIN( 107)		if ((this->velocity->x == 0)) {
HXLINE( 107)			_hx_tmp3 = (this->velocity->y != 0);
            		}
            		else {
HXLINE( 107)			_hx_tmp3 = true;
            		}
HXDLIN( 107)		if (_hx_tmp3) {
HXLINE( 107)			_hx_tmp2 = (this->touching == 0);
            		}
            		else {
HXLINE( 107)			_hx_tmp2 = false;
            		}
HXDLIN( 107)		if (_hx_tmp2) {
HXLINE( 109)			action = HX_("walk",09,5d,f2,4e);
            		}
HXLINE( 113)		switch((int)(this->facing)){
            			case (int)1: case (int)16: {
HXLINE( 116)				this->animation->play((HX_("s_",8c,64,00,00) + action),null(),null(),null());
            			}
            			break;
            			case (int)256: {
HXLINE( 118)				this->animation->play((HX_("u_",4a,66,00,00) + action),null(),null(),null());
            			}
            			break;
            			case (int)4096: {
HXLINE( 120)				this->animation->play((HX_("d_",7b,57,00,00) + action),null(),null(),null());
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 126)		if (!(this->attacking)) {
HXLINE( 128)			this->velocity->set_x(this->h);
HXLINE( 129)			this->velocity->set_y(this->v);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,updateMovement,(void))

void Player_obj::setFacingDirection(Float h,Float v){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_135_setFacingDirection)
HXDLIN( 135)		if ((::Math_obj::abs(h) > ::Math_obj::abs(v))) {
HXLINE( 137)			if ((h > 0)) {
HXLINE( 139)				this->set_facing(16);
            			}
            			else {
HXLINE( 143)				this->set_facing(1);
            			}
            		}
            		else {
HXLINE( 148)			if ((v > 0)) {
HXLINE( 150)				this->set_facing(4096);
            			}
            			else {
HXLINE( 152)				if ((v < 0)) {
HXLINE( 154)					this->set_facing(256);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Player_obj,setFacingDirection,(void))

::Array< int > Player_obj::frameRangeArray(int start,int end){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_162_frameRangeArray)
HXLINE( 163)		::Array< int > output = ::Array_obj< int >::__new(0);
HXLINE( 164)		{
HXLINE( 164)			int _g = start;
HXDLIN( 164)			int _g1 = (end + 1);
HXDLIN( 164)			while((_g < _g1)){
HXLINE( 164)				_g = (_g + 1);
HXDLIN( 164)				int i = (_g - 1);
HXLINE( 166)				output->push(i);
            			}
            		}
HXLINE( 168)		return output;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Player_obj,frameRangeArray,return )

void Player_obj::attack(){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_175_attack)
HXLINE( 176)		this->attacking = true;
HXLINE( 177)		 ::flixel::animation::FlxAnimationController _hx_tmp = this->animation;
HXDLIN( 177)		::String _hx_tmp1 = (this->facingMap->get(this->facing) + HX_("slash",3d,c0,c1,7e));
HXDLIN( 177)		_hx_tmp->play((_hx_tmp1 + ::hx::Mod(this->attackComboCounter,2)),null(),null(),null());
HXLINE( 178)		this->attackComboCounter++;
HXLINE( 192)		this->knockback(10);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,attack,(void))

void Player_obj::knockback(int increment){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_196_knockback)
HXLINE( 197)		int dx = 0;
HXLINE( 198)		int dy = 0;
HXLINE( 200)		switch((int)(this->facing)){
            			case (int)1: {
HXLINE( 203)				dx = (-1 * increment);
            			}
            			break;
            			case (int)16: {
HXLINE( 205)				dx = increment;
            			}
            			break;
            			case (int)256: {
HXLINE( 207)				dy = (-1 * increment);
            			}
            			break;
            			case (int)4096: {
HXLINE( 209)				dy = increment;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 213)		::flixel::tweens::FlxTween_obj::tween(::hx::ObjectPtr<OBJ_>(this), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),(this->x + dx))
            			->setFixed(1,HX_("y",79,00,00,00),(this->y + dy))),((Float)0.1), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circOut_dyn())));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,knockback,(void))

int Player_obj::DEFAULT_SPRITE_SIZE;


::hx::ObjectPtr< Player_obj > Player_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	::hx::ObjectPtr< Player_obj > __this = new Player_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

::hx::ObjectPtr< Player_obj > Player_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	Player_obj *__this = (Player_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Player_obj), true, "Player"));
	*(void **)__this = Player_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(DEBUGGING,"DEBUGGING");
	HX_MARK_MEMBER_NAME(SPEED,"SPEED");
	HX_MARK_MEMBER_NAME(facingMap,"facingMap");
	HX_MARK_MEMBER_NAME(attackComboCounter,"attackComboCounter");
	HX_MARK_MEMBER_NAME(attacking,"attacking");
	HX_MARK_MEMBER_NAME(weaponMap,"weaponMap");
	HX_MARK_MEMBER_NAME(weaponIndex,"weaponIndex");
	HX_MARK_MEMBER_NAME(timeToATtack,"timeToATtack");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_MEMBER_NAME(v,"v");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(DEBUGGING,"DEBUGGING");
	HX_VISIT_MEMBER_NAME(SPEED,"SPEED");
	HX_VISIT_MEMBER_NAME(facingMap,"facingMap");
	HX_VISIT_MEMBER_NAME(attackComboCounter,"attackComboCounter");
	HX_VISIT_MEMBER_NAME(attacking,"attacking");
	HX_VISIT_MEMBER_NAME(weaponMap,"weaponMap");
	HX_VISIT_MEMBER_NAME(weaponIndex,"weaponIndex");
	HX_VISIT_MEMBER_NAME(timeToATtack,"timeToATtack");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(h,"h");
	HX_VISIT_MEMBER_NAME(v,"v");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Player_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return ::hx::Val( h ); }
		if (HX_FIELD_EQ(inName,"v") ) { return ::hx::Val( v ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"SPEED") ) { return ::hx::Val( SPEED ); }
		if (HX_FIELD_EQ(inName,"timer") ) { return ::hx::Val( timer ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"attack") ) { return ::hx::Val( attack_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DEBUGGING") ) { return ::hx::Val( DEBUGGING ); }
		if (HX_FIELD_EQ(inName,"facingMap") ) { return ::hx::Val( facingMap ); }
		if (HX_FIELD_EQ(inName,"attacking") ) { return ::hx::Val( attacking ); }
		if (HX_FIELD_EQ(inName,"weaponMap") ) { return ::hx::Val( weaponMap ); }
		if (HX_FIELD_EQ(inName,"knockback") ) { return ::hx::Val( knockback_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"weaponIndex") ) { return ::hx::Val( weaponIndex ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"timeToATtack") ) { return ::hx::Val( timeToATtack ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateMovement") ) { return ::hx::Val( updateMovement_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"frameRangeArray") ) { return ::hx::Val( frameRangeArray_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"attackComboCounter") ) { return ::hx::Val( attackComboCounter ); }
		if (HX_FIELD_EQ(inName,"setFacingDirection") ) { return ::hx::Val( setFacingDirection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Player_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"SPEED") ) { SPEED=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DEBUGGING") ) { DEBUGGING=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"facingMap") ) { facingMap=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"attacking") ) { attacking=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weaponMap") ) { weaponMap=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"weaponIndex") ) { weaponIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"timeToATtack") ) { timeToATtack=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"attackComboCounter") ) { attackComboCounter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("DEBUGGING",8e,ee,2f,38));
	outFields->push(HX_("SPEED",67,cf,57,ff));
	outFields->push(HX_("facingMap",a2,6f,f6,62));
	outFields->push(HX_("attackComboCounter",36,48,32,e1));
	outFields->push(HX_("attacking",1a,9e,61,c0));
	outFields->push(HX_("weaponMap",20,dd,23,5b));
	outFields->push(HX_("weaponIndex",96,16,a2,0c));
	outFields->push(HX_("timeToATtack",b0,f0,18,33));
	outFields->push(HX_("timer",c5,bf,35,10));
	outFields->push(HX_("h",68,00,00,00));
	outFields->push(HX_("v",76,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Player_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Player_obj,DEBUGGING),HX_("DEBUGGING",8e,ee,2f,38)},
	{::hx::fsFloat,(int)offsetof(Player_obj,SPEED),HX_("SPEED",67,cf,57,ff)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Player_obj,facingMap),HX_("facingMap",a2,6f,f6,62)},
	{::hx::fsInt,(int)offsetof(Player_obj,attackComboCounter),HX_("attackComboCounter",36,48,32,e1)},
	{::hx::fsBool,(int)offsetof(Player_obj,attacking),HX_("attacking",1a,9e,61,c0)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Player_obj,weaponMap),HX_("weaponMap",20,dd,23,5b)},
	{::hx::fsInt,(int)offsetof(Player_obj,weaponIndex),HX_("weaponIndex",96,16,a2,0c)},
	{::hx::fsFloat,(int)offsetof(Player_obj,timeToATtack),HX_("timeToATtack",b0,f0,18,33)},
	{::hx::fsFloat,(int)offsetof(Player_obj,timer),HX_("timer",c5,bf,35,10)},
	{::hx::fsFloat,(int)offsetof(Player_obj,h),HX_("h",68,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Player_obj,v),HX_("v",76,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Player_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Player_obj::DEFAULT_SPRITE_SIZE,HX_("DEFAULT_SPRITE_SIZE",9d,12,6b,20)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Player_obj_sMemberFields[] = {
	HX_("DEBUGGING",8e,ee,2f,38),
	HX_("SPEED",67,cf,57,ff),
	HX_("facingMap",a2,6f,f6,62),
	HX_("attackComboCounter",36,48,32,e1),
	HX_("attacking",1a,9e,61,c0),
	HX_("weaponMap",20,dd,23,5b),
	HX_("weaponIndex",96,16,a2,0c),
	HX_("timeToATtack",b0,f0,18,33),
	HX_("timer",c5,bf,35,10),
	HX_("h",68,00,00,00),
	HX_("v",76,00,00,00),
	HX_("update",09,86,05,87),
	HX_("updateMovement",58,78,61,35),
	HX_("setFacingDirection",43,22,f3,0f),
	HX_("frameRangeArray",29,a1,8d,40),
	HX_("attack",c8,fb,0f,e0),
	HX_("knockback",3b,0f,a8,38),
	::String(null()) };

static void Player_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::DEFAULT_SPRITE_SIZE,"DEFAULT_SPRITE_SIZE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Player_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::DEFAULT_SPRITE_SIZE,"DEFAULT_SPRITE_SIZE");
};

#endif

::hx::Class Player_obj::__mClass;

static ::String Player_obj_sStaticFields[] = {
	HX_("DEFAULT_SPRITE_SIZE",9d,12,6b,20),
	::String(null())
};

void Player_obj::__register()
{
	Player_obj _hx_dummy;
	Player_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Player",81,5f,4d,6c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Player_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Player_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Player_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Player_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Player_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Player_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Player_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Player_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_18_boot)
HXDLIN(  18)		DEFAULT_SPRITE_SIZE = 64;
            	}
}

