#ifndef INCLUDED_HurtBox
#define INCLUDED_HurtBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(HurtBox)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES HurtBox_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef HurtBox_obj OBJ_;
		HurtBox_obj();

	public:
		enum { _hx_ClassId = 0x2a779a5c };

		void __construct(Float x,Float y,::hx::Null< int >  __o_playerFacing,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="HurtBox")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"HurtBox"); }
		static ::hx::ObjectPtr< HurtBox_obj > __new(Float x,Float y,::hx::Null< int >  __o_playerFacing,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height);
		static ::hx::ObjectPtr< HurtBox_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::hx::Null< int >  __o_playerFacing,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HurtBox_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HurtBox",1c,f5,57,6a); }

		void update(Float elapsed);

};


#endif /* INCLUDED_HurtBox */ 
