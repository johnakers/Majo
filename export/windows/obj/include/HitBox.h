#ifndef INCLUDED_HitBox
#define INCLUDED_HitBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(HitBox)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES HitBox_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef HitBox_obj OBJ_;
		HitBox_obj();

	public:
		enum { _hx_ClassId = 0x533be0bc };

		void __construct(Float x,Float y,int playerFacing,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="HitBox")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"HitBox"); }
		static ::hx::ObjectPtr< HitBox_obj > __new(Float x,Float y,int playerFacing,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height);
		static ::hx::ObjectPtr< HitBox_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,int playerFacing,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HitBox_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HitBox",98,19,a4,8b); }

		Float timer;
		Float ttl;
		void update(Float elapsed);

};


#endif /* INCLUDED_HitBox */ 
