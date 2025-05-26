#include <hxcpp.h>

#ifndef INCLUDED_HitBox
#include <HitBox.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f8fafb3aed409713_7_new,"HitBox","new",0xd5c8668a,"HitBox.new","HitBox.hx",7,0x3dcd3826)
HX_LOCAL_STACK_FRAME(_hx_pos_f8fafb3aed409713_33_update,"HitBox","update",0xd3d5a61f,"HitBox.update","HitBox.hx",33,0x3dcd3826)

void HitBox_obj::__construct(Float x,Float y,int playerFacing,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height){
            		int width = __o_width.Default(32);
            		int height = __o_height.Default(32);
            	HX_STACKFRAME(&_hx_pos_f8fafb3aed409713_7_new)
HXLINE(  10)		this->ttl = ((Float)0.5);
HXLINE(   9)		this->timer = ((Float)0.0);
HXLINE(  14)		switch((int)(playerFacing)){
            			case (int)1: {
HXLINE(  20)				super::__construct((x - ( (Float)(24) )),(y - ( (Float)(8) )),null());
HXLINE(  21)				this->setSize(( (Float)(width) ),( (Float)(height) ));
            			}
            			break;
            			case (int)16: {
HXLINE(  17)				super::__construct((x + 8),(y - ( (Float)(8) )),null());
HXLINE(  18)				this->setSize(( (Float)(width) ),( (Float)(height) ));
            			}
            			break;
            			case (int)256: {
HXLINE(  23)				super::__construct((x - ( (Float)(8) )),(y - ( (Float)(20) )),null());
HXLINE(  24)				this->setSize(( (Float)(width) ),( (Float)(height) ));
            			}
            			break;
            			case (int)4096: {
HXLINE(  26)				super::__construct((x - ( (Float)(8) )),y,null());
HXLINE(  27)				this->setSize(( (Float)(width) ),( (Float)(height) ));
            			}
            			break;
            			default:{
            			}
            		}
            	}

Dynamic HitBox_obj::__CreateEmpty() { return new HitBox_obj; }

void *HitBox_obj::_hx_vtable = 0;

Dynamic HitBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HitBox_obj > _hx_result = new HitBox_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool HitBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x533be0bc) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x533be0bc;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void HitBox_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_f8fafb3aed409713_33_update)
HXLINE(  34)		this->super::update(elapsed);
HXLINE(  36)		 ::HitBox _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  36)		_hx_tmp->timer = (_hx_tmp->timer + elapsed);
HXLINE(  37)		if ((this->timer >= this->ttl)) {
HXLINE(  39)			this->kill();
            		}
            	}



::hx::ObjectPtr< HitBox_obj > HitBox_obj::__new(Float x,Float y,int playerFacing,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height) {
	::hx::ObjectPtr< HitBox_obj > __this = new HitBox_obj();
	__this->__construct(x,y,playerFacing,__o_width,__o_height);
	return __this;
}

::hx::ObjectPtr< HitBox_obj > HitBox_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,int playerFacing,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height) {
	HitBox_obj *__this = (HitBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HitBox_obj), true, "HitBox"));
	*(void **)__this = HitBox_obj::_hx_vtable;
	__this->__construct(x,y,playerFacing,__o_width,__o_height);
	return __this;
}

HitBox_obj::HitBox_obj()
{
}

::hx::Val HitBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ttl") ) { return ::hx::Val( ttl ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return ::hx::Val( timer ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HitBox_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ttl") ) { ttl=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HitBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("timer",c5,bf,35,10));
	outFields->push(HX_("ttl",ec,6a,58,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HitBox_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(HitBox_obj,timer),HX_("timer",c5,bf,35,10)},
	{::hx::fsFloat,(int)offsetof(HitBox_obj,ttl),HX_("ttl",ec,6a,58,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HitBox_obj_sStaticStorageInfo = 0;
#endif

static ::String HitBox_obj_sMemberFields[] = {
	HX_("timer",c5,bf,35,10),
	HX_("ttl",ec,6a,58,00),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class HitBox_obj::__mClass;

void HitBox_obj::__register()
{
	HitBox_obj _hx_dummy;
	HitBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HitBox",98,19,a4,8b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HitBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HitBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HitBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HitBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

