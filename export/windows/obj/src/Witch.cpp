#include <hxcpp.h>

#ifndef INCLUDED_Witch
#include <Witch.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c44161496fd20d3a_10_new,"Witch","new",0x9331fb99,"Witch.new","Witch.hx",10,0x256539f7)
static const int _hx_array_data_5d9c3b27_1[] = {
	(int)0,(int)1,(int)2,(int)3,
};
HX_LOCAL_STACK_FRAME(_hx_pos_c44161496fd20d3a_31_update,"Witch","update",0x24c16470,"Witch.update","Witch.hx",31,0x256539f7)
HX_LOCAL_STACK_FRAME(_hx_pos_c44161496fd20d3a_39_hitBy,"Witch","hitBy",0xce962683,"Witch.hitBy","Witch.hx",39,0x256539f7)

void Witch_obj::__construct(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_c44161496fd20d3a_10_new)
HXLINE(  12)		this->hitPoints = 3;
HXLINE(  16)		super::__construct(x,y,null());
HXLINE(  19)		::String witchSpritesheet = HX_("assets/images/pixivan-traders/Simple NPC/Merchandise.png",eb,b4,f3,8a);
HXLINE(  20)		this->loadGraphic(witchSpritesheet,true,14,28,null(),null());
HXLINE(  23)		this->setSize(( (Float)(14) ),( (Float)(14) ));
HXLINE(  24)		{
HXLINE(  24)			 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN(  24)			this1->set_x(( (Float)(0) ));
HXDLIN(  24)			this1->set_y(( (Float)(14) ));
            		}
HXLINE(  26)		this->animation->add(HX_("idle",14,a7,b3,45),::Array_obj< int >::fromData( _hx_array_data_5d9c3b27_1,4),null(),null(),null(),null());
HXLINE(  27)		this->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            	}

Dynamic Witch_obj::__CreateEmpty() { return new Witch_obj; }

void *Witch_obj::_hx_vtable = 0;

Dynamic Witch_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Witch_obj > _hx_result = new Witch_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Witch_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x51e0a483) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x51e0a483;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Witch_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_c44161496fd20d3a_31_update)
HXLINE(  32)		 ::flixel::text::FlxText text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->x,(this->y + 20),32,null(),null(),null());
HXLINE(  33)		text->set_color(-1);
HXLINE(  34)		text->set_text((HX_("HP: ",ae,43,d4,2f) + this->hitPoints));
HXLINE(  35)		{
HXLINE(  35)			text->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN(  35)			text->set_borderColor(-65536);
HXDLIN(  35)			text->set_borderSize(( (Float)(1) ));
HXDLIN(  35)			text->set_borderQuality(( (Float)(1) ));
            		}
            	}


void Witch_obj::hitBy(int playerFacing){
            	HX_STACKFRAME(&_hx_pos_c44161496fd20d3a_39_hitBy)
HXLINE(  40)		int dx = 0;
HXLINE(  41)		int dy = 0;
HXLINE(  42)		int increment = 20;
HXLINE(  43)		switch((int)(playerFacing)){
            			case (int)1: {
HXLINE(  46)				dx = (-1 * increment);
            			}
            			break;
            			case (int)16: {
HXLINE(  48)				dx = increment;
            			}
            			break;
            			case (int)256: {
HXLINE(  50)				dy = (-1 * increment);
            			}
            			break;
            			case (int)4096: {
HXLINE(  52)				dy = increment;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE(  56)		::flixel::tweens::FlxTween_obj::tween(::hx::ObjectPtr<OBJ_>(this), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),(this->x + dx))
            			->setFixed(1,HX_("y",79,00,00,00),(this->y + dy))),((Float)0.1), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circOut_dyn())));
HXLINE(  63)		this->hitPoints--;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Witch_obj,hitBy,(void))


::hx::ObjectPtr< Witch_obj > Witch_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< Witch_obj > __this = new Witch_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< Witch_obj > Witch_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	Witch_obj *__this = (Witch_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Witch_obj), true, "Witch"));
	*(void **)__this = Witch_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

Witch_obj::Witch_obj()
{
}

::hx::Val Witch_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"hitBy") ) { return ::hx::Val( hitBy_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hitPoints") ) { return ::hx::Val( hitPoints ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Witch_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"hitPoints") ) { hitPoints=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Witch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("hitPoints",d6,cc,3f,2b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Witch_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Witch_obj,hitPoints),HX_("hitPoints",d6,cc,3f,2b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Witch_obj_sStaticStorageInfo = 0;
#endif

static ::String Witch_obj_sMemberFields[] = {
	HX_("hitPoints",d6,cc,3f,2b),
	HX_("update",09,86,05,87),
	HX_("hitBy",0a,fb,6b,27),
	::String(null()) };

::hx::Class Witch_obj::__mClass;

void Witch_obj::__register()
{
	Witch_obj _hx_dummy;
	Witch_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Witch",27,3b,9c,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Witch_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Witch_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Witch_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Witch_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

