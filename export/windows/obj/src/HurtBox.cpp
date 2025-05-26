#include <hxcpp.h>

#ifndef INCLUDED_HurtBox
#include <HurtBox.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9a88b067e58f7553_12_new,"HurtBox","new",0x4bea540e,"HurtBox.new","HurtBox.hx",12,0x69f46722)
HX_LOCAL_STACK_FRAME(_hx_pos_9a88b067e58f7553_22_update,"HurtBox","update",0x2726031b,"HurtBox.update","HurtBox.hx",22,0x69f46722)

void HurtBox_obj::__construct(Float x,Float y,::hx::Null< int >  __o_playerFacing,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height){
            		int playerFacing = __o_playerFacing.Default(16);
            		int width = __o_width.Default(32);
            		int height = __o_height.Default(32);
            	HX_STACKFRAME(&_hx_pos_9a88b067e58f7553_12_new)
HXLINE(  13)		super::__construct(x,y,null());
HXLINE(  15)		this->debugBoundingBoxColor = -16711681;
HXLINE(  17)		this->setSize(( (Float)(width) ),( (Float)(height) ));
            	}

Dynamic HurtBox_obj::__CreateEmpty() { return new HurtBox_obj; }

void *HurtBox_obj::_hx_vtable = 0;

Dynamic HurtBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HurtBox_obj > _hx_result = new HurtBox_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool HurtBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x2a779a5c) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2a779a5c;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void HurtBox_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_9a88b067e58f7553_22_update)
HXDLIN(  22)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< HurtBox_obj > HurtBox_obj::__new(Float x,Float y,::hx::Null< int >  __o_playerFacing,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height) {
	::hx::ObjectPtr< HurtBox_obj > __this = new HurtBox_obj();
	__this->__construct(x,y,__o_playerFacing,__o_width,__o_height);
	return __this;
}

::hx::ObjectPtr< HurtBox_obj > HurtBox_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::hx::Null< int >  __o_playerFacing,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height) {
	HurtBox_obj *__this = (HurtBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HurtBox_obj), true, "HurtBox"));
	*(void **)__this = HurtBox_obj::_hx_vtable;
	__this->__construct(x,y,__o_playerFacing,__o_width,__o_height);
	return __this;
}

HurtBox_obj::HurtBox_obj()
{
}

::hx::Val HurtBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HurtBox_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HurtBox_obj_sStaticStorageInfo = 0;
#endif

static ::String HurtBox_obj_sMemberFields[] = {
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class HurtBox_obj::__mClass;

void HurtBox_obj::__register()
{
	HurtBox_obj _hx_dummy;
	HurtBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HurtBox",1c,f5,57,6a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HurtBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HurtBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HurtBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HurtBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

