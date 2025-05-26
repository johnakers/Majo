#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text__internal_GlyphPosition
#include <openfl/text/_internal/GlyphPosition.h>
#endif
#ifndef INCLUDED_openfl_text__internal_ShapeCache
#include <openfl/text/_internal/ShapeCache.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextEngine
#include <openfl/text/_internal/TextEngine.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextFormatRange
#include <openfl/text/_internal/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextLayout
#include <openfl/text/_internal/TextLayout.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextLayoutGroup
#include <openfl/text/_internal/TextLayoutGroup.h>
#endif
#ifndef INCLUDED_openfl_text__internal__TextEngine_DefaultFontSet
#include <openfl/text/_internal/_TextEngine/DefaultFontSet.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_81873a2f4b2980c0_114_new,"openfl.text._internal.TextEngine","new",0xa9ba7af6,"openfl.text._internal.TextEngine.new","openfl/text/_internal/TextEngine.hx",114,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_180_createRestrictRegexp,"openfl.text._internal.TextEngine","createRestrictRegexp",0x6873dceb,"openfl.text._internal.TextEngine.createRestrictRegexp","openfl/text/_internal/TextEngine.hx",180,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_174_createRestrictRegexp,"openfl.text._internal.TextEngine","createRestrictRegexp",0x6873dceb,"openfl.text._internal.TextEngine.createRestrictRegexp","openfl/text/_internal/TextEngine.hx",174,0xb85e1839)
static const ::String _hx_array_data_7e808804_3[] = {
	HX_("",00,00,00,00),
};
static const bool _hx_array_data_7e808804_4[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_269_getBounds,"openfl.text._internal.TextEngine","getBounds",0x3ac9cec1,"openfl.text._internal.TextEngine.getBounds","openfl/text/_internal/TextEngine.hx",269,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_558_getLine,"openfl.text._internal.TextEngine","getLine",0xeb547540,"openfl.text._internal.TextEngine.getLine","openfl/text/_internal/TextEngine.hx",558,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_575_getLineBreaks,"openfl.text._internal.TextEngine","getLineBreaks",0x21405c34,"openfl.text._internal.TextEngine.getLineBreaks","openfl/text/_internal/TextEngine.hx",575,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_595_getLineBreakIndex,"openfl.text._internal.TextEngine","getLineBreakIndex",0xa9a1db33,"openfl.text._internal.TextEngine.getLineBreakIndex","openfl/text/_internal/TextEngine.hx",595,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_605_getLineMeasurements,"openfl.text._internal.TextEngine","getLineMeasurements",0x50395657,"openfl.text._internal.TextEngine.getLineMeasurements","openfl/text/_internal/TextEngine.hx",605,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_767_getLayoutGroups,"openfl.text._internal.TextEngine","getLayoutGroups",0x36de2bea,"openfl.text._internal.TextEngine.getLayoutGroups","openfl/text/_internal/TextEngine.hx",767,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1702_restrictText,"openfl.text._internal.TextEngine","restrictText",0x4d5464b3,"openfl.text._internal.TextEngine.restrictText","openfl/text/_internal/TextEngine.hx",1702,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1723_setTextAlignment,"openfl.text._internal.TextEngine","setTextAlignment",0x7bf8ff1e,"openfl.text._internal.TextEngine.setTextAlignment","openfl/text/_internal/TextEngine.hx",1723,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1831_trimText,"openfl.text._internal.TextEngine","trimText",0x8f1ce459,"openfl.text._internal.TextEngine.trimText","openfl/text/_internal/TextEngine.hx",1831,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1846_update,"openfl.text._internal.TextEngine","update",0x02cb1d33,"openfl.text._internal.TextEngine.update","openfl/text/_internal/TextEngine.hx",1846,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1879_get_bottomScrollV,"openfl.text._internal.TextEngine","get_bottomScrollV",0x0563c86b,"openfl.text._internal.TextEngine.get_bottomScrollV","openfl/text/_internal/TextEngine.hx",1879,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1926_get_maxScrollV,"openfl.text._internal.TextEngine","get_maxScrollV",0x5a4206d8,"openfl.text._internal.TextEngine.get_maxScrollV","openfl/text/_internal/TextEngine.hx",1926,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1967_set_restrict,"openfl.text._internal.TextEngine","set_restrict",0xd4c7f563,"openfl.text._internal.TextEngine.set_restrict","openfl/text/_internal/TextEngine.hx",1967,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1988_get_scrollV,"openfl.text._internal.TextEngine","get_scrollV",0x1f66c456,"openfl.text._internal.TextEngine.get_scrollV","openfl/text/_internal/TextEngine.hx",1988,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_2000_set_scrollV,"openfl.text._internal.TextEngine","set_scrollV",0x29d3cb62,"openfl.text._internal.TextEngine.set_scrollV","openfl/text/_internal/TextEngine.hx",2000,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_2009_set_text,"openfl.text._internal.TextEngine","set_text",0xa4cb1754,"openfl.text._internal.TextEngine.set_text","openfl/text/_internal/TextEngine.hx",2009,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_207_findFont,"openfl.text._internal.TextEngine","findFont",0xc00da052,"openfl.text._internal.TextEngine.findFont","openfl/text/_internal/TextEngine.hx",207,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_244_findFontVariant,"openfl.text._internal.TextEngine","findFontVariant",0x8f425653,"openfl.text._internal.TextEngine.findFontVariant","openfl/text/_internal/TextEngine.hx",244,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_303_getDefaultFont,"openfl.text._internal.TextEngine","getDefaultFont",0xe66d7b64,"openfl.text._internal.TextEngine.getDefaultFont","openfl/text/_internal/TextEngine.hx",303,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_312_getDefaultFont,"openfl.text._internal.TextEngine","getDefaultFont",0xe66d7b64,"openfl.text._internal.TextEngine.getDefaultFont","openfl/text/_internal/TextEngine.hx",312,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_432_getFormatHeight,"openfl.text._internal.TextEngine","getFormatHeight",0x3ed257ca,"openfl.text._internal.TextEngine.getFormatHeight","openfl/text/_internal/TextEngine.hx",432,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_472_getFont,"openfl.text._internal.TextEngine","getFont",0xe761bb1b,"openfl.text._internal.TextEngine.getFont","openfl/text/_internal/TextEngine.hx",472,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_530_getFontInstance,"openfl.text._internal.TextEngine","getFontInstance",0x7b1da9d0,"openfl.text._internal.TextEngine.getFontInstance","openfl/text/_internal/TextEngine.hx",530,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_39_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",39,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_41_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",41,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_42_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",42,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_43_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",43,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_44_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",44,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_45_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",45,0xb85e1839)
namespace openfl{
namespace text{
namespace _internal{

void TextEngine_obj::__construct( ::openfl::text::TextField textField){
            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_114_new)
HXLINE( 116)		this->_hx___shapeCache =  ::openfl::text::_internal::ShapeCache_obj::__alloc( HX_CTX );
HXLINE( 118)		this->textField = textField;
HXLINE( 120)		this->width = ( (Float)(100) );
HXLINE( 121)		this->height = ( (Float)(100) );
HXLINE( 122)		this->set_text(HX_("",00,00,00,00));
HXLINE( 124)		this->bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,0,0);
HXLINE( 125)		this->textBounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,0,0);
HXLINE( 127)		this->type = 0;
HXLINE( 128)		this->autoSize = 2;
HXLINE( 129)		this->embedFonts = false;
HXLINE( 130)		this->selectable = true;
HXLINE( 131)		this->borderColor = 0;
HXLINE( 132)		this->border = false;
HXLINE( 133)		this->backgroundColor = 16777215;
HXLINE( 134)		this->background = false;
HXLINE( 135)		this->gridFitType = 1;
HXLINE( 136)		this->maxChars = 0;
HXLINE( 137)		this->multiline = false;
HXLINE( 138)		this->numLines = 1;
HXLINE( 139)		this->sharpness = ( (Float)(0) );
HXLINE( 140)		this->scrollH = 0;
HXLINE( 141)		this->set_scrollV(1);
HXLINE( 142)		this->wordWrap = false;
HXLINE( 144)		int length = null();
HXDLIN( 144)		bool fixed = null();
HXDLIN( 144)		::Array< Float > array = null();
HXDLIN( 144)		this->lineAscents =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 145)		int length1 = null();
HXDLIN( 145)		bool fixed1 = null();
HXDLIN( 145)		::Array< int > array1 = null();
HXDLIN( 145)		this->lineBreaks =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length1,fixed1,array1);
HXLINE( 146)		int length2 = null();
HXDLIN( 146)		bool fixed2 = null();
HXDLIN( 146)		::Array< Float > array2 = null();
HXDLIN( 146)		this->lineDescents =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length2,fixed2,array2,true);
HXLINE( 147)		int length3 = null();
HXDLIN( 147)		bool fixed3 = null();
HXDLIN( 147)		::Array< Float > array3 = null();
HXDLIN( 147)		this->lineLeadings =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length3,fixed3,array3,true);
HXLINE( 148)		int length4 = null();
HXDLIN( 148)		bool fixed4 = null();
HXDLIN( 148)		::Array< Float > array4 = null();
HXDLIN( 148)		this->lineHeights =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length4,fixed4,array4,true);
HXLINE( 149)		int length5 = null();
HXDLIN( 149)		bool fixed5 = null();
HXDLIN( 149)		::Array< Float > array5 = null();
HXDLIN( 149)		this->lineWidths =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length5,fixed5,array5,true);
HXLINE( 150)		int length6 = null();
HXDLIN( 150)		bool fixed6 = null();
HXDLIN( 150)		::Array< ::Dynamic> array6 = null();
HXDLIN( 150)		this->layoutGroups =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length6,fixed6,array6,true);
HXLINE( 151)		int length7 = null();
HXDLIN( 151)		bool fixed7 = null();
HXDLIN( 151)		::Array< ::Dynamic> array7 = null();
HXDLIN( 151)		this->textFormatRanges =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length7,fixed7,array7,true);
            	}

Dynamic TextEngine_obj::__CreateEmpty() { return new TextEngine_obj; }

void *TextEngine_obj::_hx_vtable = 0;

Dynamic TextEngine_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextEngine_obj > _hx_result = new TextEngine_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextEngine_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2dd5980a;
}

 ::EReg TextEngine_obj::createRestrictRegexp(::String restrict){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< ::String >,declined,::Array< bool >,accepting) HXARGC(1)
            		::String _hx_run( ::EReg ereg){
            			HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_180_createRestrictRegexp)
HXLINE( 181)			if (accepting->__get(0)) {
HXLINE( 183)				accepting[0] = !(accepting->__get(0));
HXLINE( 184)				return ereg->matched(1);
            			}
HXLINE( 186)			::Array< ::String > declined1 = declined;
HXDLIN( 186)			int accepted = 0;
HXDLIN( 186)			::String declined2 = declined1->__get(accepted);
HXDLIN( 186)			declined1[accepted] = (declined2 + ereg->matched(1));
HXLINE( 187)			accepting[0] = !(accepting->__get(0));
HXLINE( 188)			return HX_("",00,00,00,00);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_174_createRestrictRegexp)
HXLINE( 175)		 ::EReg declinedRange =  ::EReg_obj::__alloc( HX_CTX ,HX_("\\^([^\\^]+)",d0,bc,3c,14),HX_("gu",2e,5a,00,00));
HXLINE( 176)		::Array< ::String > declined = ::Array_obj< ::String >::fromData( _hx_array_data_7e808804_3,1);
HXLINE( 178)		::Array< bool > accepting = ::Array_obj< bool >::fromData( _hx_array_data_7e808804_4,1);
HXLINE( 179)		::String accepted = declinedRange->map(restrict, ::Dynamic(new _hx_Closure_0(declined,accepting)));
HXLINE( 191)		::Array< ::String > testRegexpParts = ::Array_obj< ::String >::__new(0);
HXLINE( 193)		if ((accepted.length > 0)) {
HXLINE( 195)			testRegexpParts->push(((HX_("[^",a3,4f,00,00) + accepted) + HX_("]",5d,00,00,00)));
            		}
HXLINE( 198)		if ((declined->__get(0).length > 0)) {
HXLINE( 200)			testRegexpParts->push(((HX_("[",5b,00,00,00) + declined->__get(0)) + HX_("]",5d,00,00,00)));
            		}
HXLINE( 203)		return  ::EReg_obj::__alloc( HX_CTX ,((HX_("(",28,00,00,00) + testRegexpParts->join(HX_("|",7c,00,00,00))) + HX_(")",29,00,00,00)),HX_("g",67,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,createRestrictRegexp,return )

void TextEngine_obj::getBounds(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_269_getBounds)
HXLINE( 270)		int padding;
HXDLIN( 270)		if (this->border) {
HXLINE( 270)			padding = 1;
            		}
            		else {
HXLINE( 270)			padding = 0;
            		}
HXLINE( 272)		this->bounds->width = (this->width + padding);
HXLINE( 273)		this->bounds->height = (this->height + padding);
HXLINE( 275)		Float x = this->width;
HXDLIN( 275)		Float y = this->height;
HXLINE( 277)		int lastIndex = (this->layoutGroups->get_length() - 1);
HXLINE( 278)		{
HXLINE( 278)			int _g = 0;
HXDLIN( 278)			int _g1 = this->layoutGroups->get_length();
HXDLIN( 278)			while((_g < _g1)){
HXLINE( 278)				_g = (_g + 1);
HXDLIN( 278)				int i = (_g - 1);
HXLINE( 280)				 ::openfl::text::_internal::TextLayoutGroup group = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE( 281)				bool _hx_tmp;
HXDLIN( 281)				bool _hx_tmp1;
HXDLIN( 281)				if ((i == lastIndex)) {
HXLINE( 281)					_hx_tmp1 = (group->startIndex == group->endIndex);
            				}
            				else {
HXLINE( 281)					_hx_tmp1 = false;
            				}
HXDLIN( 281)				if (_hx_tmp1) {
HXLINE( 281)					_hx_tmp = ::hx::IsNotEq( this->type,1 );
            				}
            				else {
HXLINE( 281)					_hx_tmp = false;
            				}
HXDLIN( 281)				if (_hx_tmp) {
HXLINE( 284)					continue;
            				}
HXLINE( 286)				if ((group->offsetX < x)) {
HXLINE( 286)					x = group->offsetX;
            				}
HXLINE( 287)				if ((group->offsetY < y)) {
HXLINE( 287)					y = group->offsetY;
            				}
            			}
            		}
HXLINE( 290)		if ((x >= this->width)) {
HXLINE( 290)			x = ( (Float)(2) );
            		}
HXLINE( 291)		if ((y >= this->height)) {
HXLINE( 291)			y = ( (Float)(2) );
            		}
HXLINE( 299)		this->textBounds->setTo(::Math_obj::max((x - ( (Float)(2) )),( (Float)(0) )),::Math_obj::max((y - ( (Float)(2) )),( (Float)(0) )),::Math_obj::min((this->textWidth + 4),this->bounds->width),::Math_obj::min((this->textHeight + 4),this->bounds->height));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getBounds,(void))

::String TextEngine_obj::getLine(int index){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_558_getLine)
HXLINE( 559)		bool _hx_tmp;
HXDLIN( 559)		if ((index >= 0)) {
HXLINE( 559)			_hx_tmp = (index > (this->lineBreaks->get_length() + 1));
            		}
            		else {
HXLINE( 559)			_hx_tmp = true;
            		}
HXDLIN( 559)		if (_hx_tmp) {
HXLINE( 561)			return null();
            		}
HXLINE( 564)		if ((this->lineBreaks->get_length() == 0)) {
HXLINE( 566)			return this->text;
            		}
            		else {
HXLINE( 570)			::String _hx_tmp = this->text;
HXDLIN( 570)			int _hx_tmp1;
HXDLIN( 570)			if ((index > 0)) {
HXLINE( 570)				_hx_tmp1 = this->lineBreaks->get((index - 1));
            			}
            			else {
HXLINE( 570)				_hx_tmp1 = 0;
            			}
HXDLIN( 570)			return _hx_tmp.substring(_hx_tmp1,this->lineBreaks->get(index));
            		}
HXLINE( 564)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getLine,return )

void TextEngine_obj::getLineBreaks(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_575_getLineBreaks)
HXLINE( 576)		this->lineBreaks->set_length(0);
HXLINE( 578)		int index = -1;
HXLINE( 580)		int cr = -1;
HXDLIN( 580)		int lf = -1;
HXLINE( 581)		while((index < this->text.length)){
HXLINE( 583)			lf = this->text.indexOf(HX_("\n",0a,00,00,00),(index + 1));
HXLINE( 584)			cr = this->text.indexOf(HX_("\r",0d,00,00,00),(index + 1));
HXLINE( 586)			if ((cr == -1)) {
HXLINE( 586)				index = lf;
            			}
            			else {
HXLINE( 586)				if ((lf == -1)) {
HXLINE( 586)					index = cr;
            				}
            				else {
HXLINE( 586)					if ((cr < lf)) {
HXLINE( 586)						index = cr;
            					}
            					else {
HXLINE( 586)						index = lf;
            					}
            				}
            			}
HXLINE( 588)			if ((index > -1)) {
HXLINE( 588)				this->lineBreaks->push(index);
            			}
            			else {
HXLINE( 590)				goto _hx_goto_8;
            			}
            		}
            		_hx_goto_8:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLineBreaks,(void))

int TextEngine_obj::getLineBreakIndex(::hx::Null< int >  __o_startIndex){
            		int startIndex = __o_startIndex.Default(0);
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_595_getLineBreakIndex)
HXLINE( 596)		{
HXLINE( 596)			 ::Dynamic lineBreak = this->lineBreaks->iterator();
HXDLIN( 596)			while(( (bool)(lineBreak->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 596)				int lineBreak1 = ( (int)(lineBreak->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 598)				if ((lineBreak1 >= startIndex)) {
HXLINE( 598)					return lineBreak1;
            				}
            			}
            		}
HXLINE( 601)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getLineBreakIndex,return )

void TextEngine_obj::getLineMeasurements(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_605_getLineMeasurements)
HXLINE( 606)		this->lineAscents->set_length(0);
HXLINE( 607)		this->lineDescents->set_length(0);
HXLINE( 608)		this->lineLeadings->set_length(0);
HXLINE( 609)		this->lineHeights->set_length(0);
HXLINE( 610)		this->lineWidths->set_length(0);
HXLINE( 612)		Float currentLineAscent = ((Float)0.0);
HXLINE( 613)		Float currentLineDescent = ((Float)0.0);
HXLINE( 614)		 ::Dynamic currentLineLeading = null();
HXLINE( 615)		Float currentLineHeight = ((Float)0.0);
HXLINE( 616)		Float currentLineWidth = ((Float)0.0);
HXLINE( 617)		Float currentTextHeight = ((Float)0.0);
HXLINE( 619)		this->textWidth = ( (Float)(0) );
HXLINE( 620)		this->textHeight = ( (Float)(0) );
HXLINE( 621)		this->numLines = 1;
HXLINE( 622)		this->maxScrollH = 0;
HXLINE( 624)		int lastIndex = (this->layoutGroups->get_length() - 1);
HXLINE( 625)		{
HXLINE( 625)			int _g = 0;
HXDLIN( 625)			int _g1 = this->layoutGroups->get_length();
HXDLIN( 625)			while((_g < _g1)){
HXLINE( 625)				_g = (_g + 1);
HXDLIN( 625)				int i = (_g - 1);
HXLINE( 627)				 ::openfl::text::_internal::TextLayoutGroup group = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE( 629)				bool _hx_tmp;
HXDLIN( 629)				bool _hx_tmp1;
HXDLIN( 629)				if ((i == lastIndex)) {
HXLINE( 629)					_hx_tmp1 = (group->startIndex == group->endIndex);
            				}
            				else {
HXLINE( 629)					_hx_tmp1 = false;
            				}
HXDLIN( 629)				if (_hx_tmp1) {
HXLINE( 629)					_hx_tmp = ::hx::IsNotEq( this->type,1 );
            				}
            				else {
HXLINE( 629)					_hx_tmp = false;
            				}
HXDLIN( 629)				if (_hx_tmp) {
HXLINE( 632)					continue;
            				}
HXLINE( 635)				while((group->lineIndex > (this->numLines - 1))){
HXLINE( 637)					this->lineAscents->push(currentLineAscent);
HXLINE( 638)					this->lineDescents->push(currentLineDescent);
HXLINE( 639)					{
HXLINE( 639)						Float _hx_tmp;
HXDLIN( 639)						if (::hx::IsNotNull( currentLineLeading )) {
HXLINE( 639)							_hx_tmp = ( (Float)(currentLineLeading) );
            						}
            						else {
HXLINE( 639)							_hx_tmp = ( (Float)(0) );
            						}
HXDLIN( 639)						this->lineLeadings->push(_hx_tmp);
            					}
HXLINE( 640)					this->lineHeights->push(currentLineHeight);
HXLINE( 641)					this->lineWidths->push(currentLineWidth);
HXLINE( 643)					currentLineAscent = ( (Float)(0) );
HXLINE( 644)					currentLineDescent = ( (Float)(0) );
HXLINE( 645)					currentLineLeading = null();
HXLINE( 646)					currentLineHeight = ( (Float)(0) );
HXLINE( 647)					currentLineWidth = ( (Float)(0) );
HXLINE( 649)					this->numLines++;
            				}
HXLINE( 652)				currentLineAscent = ::Math_obj::max(currentLineAscent,group->ascent);
HXLINE( 653)				currentLineDescent = ::Math_obj::max(currentLineDescent,group->descent);
HXLINE( 655)				if (::hx::IsNull( currentLineLeading )) {
HXLINE( 657)					currentLineLeading = group->leading;
            				}
            				else {
HXLINE( 661)					currentLineLeading = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(currentLineLeading) ),( (Float)(group->leading) )));
            				}
HXLINE( 664)				currentLineHeight = ::Math_obj::max(currentLineHeight,group->height);
HXLINE( 665)				currentLineWidth = ((group->offsetX - ( (Float)(2) )) + group->width);
HXLINE( 667)				if ((currentLineWidth > this->textWidth)) {
HXLINE( 669)					this->textWidth = currentLineWidth;
            				}
HXLINE( 672)				currentTextHeight = ( (Float)(::Math_obj::ceil((((group->offsetY - ( (Float)(2) )) + group->ascent) + group->descent))) );
HXLINE( 674)				if ((currentTextHeight > this->textHeight)) {
HXLINE( 676)					this->textHeight = currentTextHeight;
            				}
            			}
            		}
HXLINE( 680)		bool _hx_tmp;
HXDLIN( 680)		bool _hx_tmp1;
HXDLIN( 680)		if ((this->textHeight == 0)) {
HXLINE( 680)			_hx_tmp1 = ::hx::IsNotNull( this->textField );
            		}
            		else {
HXLINE( 680)			_hx_tmp1 = false;
            		}
HXDLIN( 680)		if (_hx_tmp1) {
HXLINE( 680)			_hx_tmp = ::hx::IsEq( this->type,1 );
            		}
            		else {
HXLINE( 680)			_hx_tmp = false;
            		}
HXDLIN( 680)		if (_hx_tmp) {
HXLINE( 682)			 ::openfl::text::TextFormat currentFormat = this->textField->_hx___textFormat;
HXLINE( 683)			Float ascent;
HXLINE( 684)			Float descent;
HXLINE( 688)			 ::openfl::text::Font font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXLINE( 690)			if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE( 692)				ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXLINE( 693)				descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            			}
            			else {
HXLINE( 695)				bool _hx_tmp;
HXDLIN( 695)				if (::hx::IsNotNull( font )) {
HXLINE( 695)					_hx_tmp = (font->unitsPerEM != 0);
            				}
            				else {
HXLINE( 695)					_hx_tmp = false;
            				}
HXDLIN( 695)				if (_hx_tmp) {
HXLINE( 698)					ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXLINE( 699)					descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            				}
            				else {
HXLINE( 707)					ascent = ( (Float)(currentFormat->size) );
HXLINE( 708)					descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            				}
            			}
HXLINE( 685)			int leading = ( (int)(currentFormat->leading) );
HXLINE( 686)			int heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXLINE( 715)			currentLineAscent = ascent;
HXLINE( 716)			currentLineDescent = descent;
HXLINE( 717)			currentLineLeading = leading;
HXLINE( 719)			currentTextHeight = ( (Float)(::Math_obj::ceil((ascent + descent))) );
HXLINE( 720)			this->textHeight = currentTextHeight;
            		}
HXLINE( 723)		this->lineAscents->push(currentLineAscent);
HXLINE( 724)		this->lineDescents->push(currentLineDescent);
HXLINE( 725)		{
HXLINE( 725)			Float _hx_tmp2;
HXDLIN( 725)			if (::hx::IsNotNull( currentLineLeading )) {
HXLINE( 725)				_hx_tmp2 = ( (Float)(currentLineLeading) );
            			}
            			else {
HXLINE( 725)				_hx_tmp2 = ( (Float)(0) );
            			}
HXDLIN( 725)			this->lineLeadings->push(_hx_tmp2);
            		}
HXLINE( 726)		this->lineHeights->push(currentLineHeight);
HXLINE( 727)		this->lineWidths->push(currentLineWidth);
HXLINE( 729)		if ((this->numLines == 1)) {
HXLINE( 731)			if (::hx::IsGreater( currentLineLeading,0 )) {
HXLINE( 733)				 ::openfl::text::_internal::TextEngine _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 733)				_hx_tmp->textHeight = (_hx_tmp->textHeight + currentLineLeading);
            			}
            		}
HXLINE( 737)		if (::hx::IsNotEq( this->autoSize,2 )) {
HXLINE( 739)			 ::Dynamic _hx_switch_0 = this->autoSize;
            			if (  (_hx_switch_0==0) ||  (_hx_switch_0==1) ||  (_hx_switch_0==3) ){
HXLINE( 742)				if (!(this->wordWrap)) {
HXLINE( 744)					this->width = (this->textWidth + 4);
            				}
HXLINE( 747)				this->height = (this->textHeight + 4);
HXLINE( 748)				this->bottomScrollV = this->numLines;
HXLINE( 741)				goto _hx_goto_14;
            			}
            			/* default */{
            			}
            			_hx_goto_14:;
            		}
HXLINE( 754)		if ((this->textWidth > (this->width - ( (Float)(4) )))) {
HXLINE( 756)			this->maxScrollH = ::Std_obj::_hx_int(((this->textWidth - this->width) + 4));
            		}
            		else {
HXLINE( 760)			this->maxScrollH = 0;
            		}
HXLINE( 763)		if ((this->scrollH > this->maxScrollH)) {
HXLINE( 763)			this->scrollH = this->maxScrollH;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLineMeasurements,(void))

void TextEngine_obj::getLayoutGroups(){
            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_767_getLayoutGroups)
HXDLIN( 767)		 ::openfl::text::_internal::TextEngine _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 768)		this->layoutGroups->set_length(0);
HXLINE( 770)		bool _hx_tmp;
HXDLIN( 770)		if (::hx::IsNotNull( this->text )) {
HXLINE( 770)			_hx_tmp = (this->text == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 770)			_hx_tmp = true;
            		}
HXDLIN( 770)		if (_hx_tmp) {
HXLINE( 770)			return;
            		}
HXLINE( 772)		int rangeIndex = -1;
HXLINE( 773)		 ::openfl::text::_internal::TextFormatRange formatRange = null();
HXLINE( 774)		 ::openfl::text::Font font = null();
HXLINE( 776)		 ::openfl::text::TextFormat currentFormat = ::openfl::text::TextField_obj::_hx___defaultTextFormat->clone();
HXLINE( 779)		int leading = 0;
HXLINE( 780)		Float ascent = ((Float)0.0);
HXDLIN( 780)		Float maxAscent = ((Float)0.0);
HXLINE( 781)		Float descent = ((Float)0.0);
HXLINE( 784)		 ::Dynamic align = 3;
HXLINE( 785)		int blockIndent = 0;
HXLINE( 786)		bool bullet = false;
HXLINE( 787)		int indent = 0;
HXLINE( 788)		int leftMargin = 0;
HXLINE( 789)		int rightMargin = 0;
HXLINE( 790)		bool firstLineOfParagraph = true;
HXLINE( 794)		 ::openfl::text::_internal::TextLayoutGroup layoutGroup = null();
HXDLIN( 794)		::Array< ::Dynamic> positions = null();
HXLINE( 795)		Float widthValue = ((Float)0.0);
HXDLIN( 795)		int heightValue = 0;
HXDLIN( 795)		int maxHeightValue = 0;
HXLINE( 796)		int previousSpaceIndex = -2;
HXLINE( 797)		int previousBreakIndex = -1;
HXLINE( 798)		int spaceIndex = this->text.indexOf(HX_(" ",20,00,00,00),null());
HXLINE( 799)		int breakCount = 0;
HXLINE( 800)		int breakIndex;
HXDLIN( 800)		if ((breakCount < this->lineBreaks->get_length())) {
HXLINE( 800)			breakIndex = this->lineBreaks->get(breakCount);
            		}
            		else {
HXLINE( 800)			breakIndex = -1;
            		}
HXLINE( 802)		Float offsetX = ((Float)0.0);
HXLINE( 803)		Float offsetY = ((Float)0.0);
HXLINE( 804)		int textIndex = 0;
HXLINE( 805)		int lineIndex = 0;
HXLINE(1363)		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1363)			rangeIndex = (rangeIndex + 1);
HXDLIN(1363)			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1363)			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1363)			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            		}
HXLINE(1364)		{
HXLINE(1364)			firstLineOfParagraph = true;
HXDLIN(1364)			if (::hx::IsNotNull( currentFormat->align )) {
HXLINE(1364)				align = currentFormat->align;
            			}
            			else {
HXLINE(1364)				align = 3;
            			}
HXDLIN(1364)			if (::hx::IsNotNull( currentFormat->blockIndent )) {
HXLINE(1364)				blockIndent = ( (int)(currentFormat->blockIndent) );
            			}
            			else {
HXLINE(1364)				blockIndent = 0;
            			}
HXDLIN(1364)			if (::hx::IsNotNull( currentFormat->indent )) {
HXLINE(1364)				indent = ( (int)(currentFormat->indent) );
            			}
            			else {
HXLINE(1364)				indent = 0;
            			}
HXDLIN(1364)			if (::hx::IsNotNull( currentFormat->leftMargin )) {
HXLINE(1364)				leftMargin = ( (int)(currentFormat->leftMargin) );
            			}
            			else {
HXLINE(1364)				leftMargin = 0;
            			}
HXDLIN(1364)			if (::hx::IsNotNull( currentFormat->rightMargin )) {
HXLINE(1364)				rightMargin = ( (int)(currentFormat->rightMargin) );
            			}
            			else {
HXLINE(1364)				rightMargin = 0;
            			}
HXDLIN(1364)			bool _hx_tmp1 = ::hx::IsNotNull( currentFormat->bullet );
HXDLIN(1364)			bool _hx_tmp2 = ::hx::IsNotNull( currentFormat->tabStops );
            		}
HXLINE(1365)		{
HXLINE(1365)			if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1365)				ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1365)				descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            			}
            			else {
HXLINE(1365)				bool _hx_tmp;
HXDLIN(1365)				if (::hx::IsNotNull( font )) {
HXLINE(1365)					_hx_tmp = (font->unitsPerEM != 0);
            				}
            				else {
HXLINE(1365)					_hx_tmp = false;
            				}
HXDLIN(1365)				if (_hx_tmp) {
HXLINE(1365)					ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1365)					descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            				}
            				else {
HXLINE(1365)					ascent = ( (Float)(currentFormat->size) );
HXDLIN(1365)					descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            				}
            			}
HXDLIN(1365)			leading = ( (int)(currentFormat->leading) );
HXDLIN(1365)			heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1365)			if ((heightValue > maxHeightValue)) {
HXLINE(1365)				maxHeightValue = heightValue;
            			}
HXDLIN(1365)			if ((ascent > maxAscent)) {
HXLINE(1365)				maxAscent = ascent;
            			}
            		}
HXLINE(1367)		bool wrap;
HXLINE(1368)		int maxLoops = (this->text.length + 1);
HXLINE(1372)		while((textIndex < maxLoops)){
HXLINE(1374)			bool _hx_tmp;
HXDLIN(1374)			if ((breakIndex > -1)) {
HXLINE(1374)				if ((spaceIndex != -1)) {
HXLINE(1374)					_hx_tmp = (breakIndex < spaceIndex);
            				}
            				else {
HXLINE(1374)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE(1374)				_hx_tmp = false;
            			}
HXDLIN(1374)			if (_hx_tmp) {
HXLINE(1378)				if ((textIndex <= breakIndex)) {
HXLINE(1380)					if ((textIndex >= breakIndex)) {
HXLINE(1380)						positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1380)						widthValue = ( (Float)(0) );
            					}
            					else {
HXLINE(1380)						if ((breakIndex <= formatRange->end)) {
HXLINE(1380)							::String text = _gthis->text;
HXDLIN(1380)							Float letterSpacing = ((Float)0.0);
HXDLIN(1380)							if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1380)								letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            							}
HXDLIN(1380)							if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1380)								_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            							}
HXDLIN(1380)							_gthis->_hx___textLayout->set_text(null());
HXDLIN(1380)							_gthis->_hx___textLayout->set_font(font);
HXDLIN(1380)							if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1380)								_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            							}
HXDLIN(1380)							_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1380)							bool positions1;
HXDLIN(1380)							if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1380)								positions1 = (_gthis->sharpness < 400);
            							}
            							else {
HXLINE(1380)								positions1 = true;
            							}
HXDLIN(1380)							_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1380)							 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1380)							_gthis1->set_text(text.substring(textIndex,breakIndex));
HXDLIN(1380)							if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1380)								positions = _gthis->_hx___textLayout->get_positions();
            							}
            							else {
HXLINE(1380)								positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            							}
HXDLIN(1380)							Float width = ((Float)0.0);
HXDLIN(1380)							{
HXLINE(1380)								int _g = 0;
HXDLIN(1380)								while((_g < positions->length)){
HXLINE(1380)									 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1380)									_g = (_g + 1);
HXDLIN(1380)									width = (width + position->advance->x);
            								}
            							}
HXDLIN(1380)							widthValue = width;
            						}
            						else {
HXLINE(1380)							int tempIndex = textIndex;
HXDLIN(1380)							int tempRangeEnd = formatRange->end;
HXDLIN(1380)							int countRanges = 0;
HXDLIN(1380)							positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1380)							widthValue = ( (Float)(0) );
HXDLIN(1380)							while(true){
HXLINE(1380)								if ((tempIndex != tempRangeEnd)) {
HXLINE(1380)									::String text = _gthis->text;
HXDLIN(1380)									Float letterSpacing = ((Float)0.0);
HXDLIN(1380)									if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1380)										letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            									}
HXDLIN(1380)									if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1380)										_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            									}
HXDLIN(1380)									_gthis->_hx___textLayout->set_text(null());
HXDLIN(1380)									_gthis->_hx___textLayout->set_font(font);
HXDLIN(1380)									if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1380)										_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            									}
HXDLIN(1380)									_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1380)									bool _hx_tmp;
HXDLIN(1380)									if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1380)										_hx_tmp = (_gthis->sharpness < 400);
            									}
            									else {
HXLINE(1380)										_hx_tmp = true;
            									}
HXDLIN(1380)									_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1380)									 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1380)									_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1380)									::Array< ::Dynamic> tempPositions;
HXDLIN(1380)									if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1380)										tempPositions = _gthis->_hx___textLayout->get_positions();
            									}
            									else {
HXLINE(1380)										tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            									}
HXDLIN(1380)									positions = positions->concat(tempPositions);
            								}
HXDLIN(1380)								if ((tempRangeEnd != breakIndex)) {
HXLINE(1380)									bool _hx_tmp;
HXDLIN(1380)									if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1380)										rangeIndex = (rangeIndex + 1);
HXDLIN(1380)										formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1380)										currentFormat->_hx___merge(formatRange->format);
HXDLIN(1380)										font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1380)										_hx_tmp = true;
            									}
            									else {
HXLINE(1380)										_hx_tmp = false;
            									}
HXDLIN(1380)									if (!(_hx_tmp)) {
HXLINE(1380)										::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1121,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1380)										goto _hx_goto_18;
            									}
HXDLIN(1380)									tempIndex = tempRangeEnd;
HXDLIN(1380)									if ((breakIndex < formatRange->end)) {
HXLINE(1380)										tempRangeEnd = breakIndex;
            									}
            									else {
HXLINE(1380)										tempRangeEnd = formatRange->end;
            									}
HXDLIN(1380)									countRanges = (countRanges + 1);
            								}
            								else {
HXLINE(1380)									Float width = ((Float)0.0);
HXDLIN(1380)									{
HXLINE(1380)										int _g = 0;
HXDLIN(1380)										while((_g < positions->length)){
HXLINE(1380)											 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1380)											_g = (_g + 1);
HXDLIN(1380)											width = (width + position->advance->x);
            										}
            									}
HXDLIN(1380)									widthValue = width;
HXDLIN(1380)									goto _hx_goto_18;
            								}
            							}
            							_hx_goto_18:;
HXDLIN(1380)							rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1380)							if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1380)								rangeIndex = (rangeIndex + 1);
HXDLIN(1380)								formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1380)								currentFormat->_hx___merge(formatRange->format);
HXDLIN(1380)								font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            							}
            						}
            					}
HXLINE(1381)					{
HXLINE(1381)						bool _hx_tmp;
HXDLIN(1381)						if ((_gthis->width >= 4)) {
HXLINE(1381)							_hx_tmp = _gthis->wordWrap;
            						}
            						else {
HXLINE(1381)							_hx_tmp = false;
            						}
HXDLIN(1381)						if (_hx_tmp) {
HXLINE(1381)							::Array< ::Dynamic> remainingPositions = positions;
HXDLIN(1381)							int bufferCount;
HXDLIN(1381)							int placeIndex;
HXDLIN(1381)							Float positionWidth;
HXDLIN(1381)							 ::openfl::text::_internal::GlyphPosition currentPosition;
HXDLIN(1381)							Float width = ((Float)0.0);
HXDLIN(1381)							{
HXLINE(1381)								int _g = 0;
HXDLIN(1381)								while((_g < remainingPositions->length)){
HXLINE(1381)									 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1381)									_g = (_g + 1);
HXDLIN(1381)									width = (width + position->advance->x);
            								}
            							}
HXDLIN(1381)							Float tempWidth = width;
HXDLIN(1381)							int i = (remainingPositions->length - 1);
HXDLIN(1381)							while((i >= 0)){
HXLINE(1381)								 ::Dynamic currentCharCode = _gthis->text.charCodeAt((textIndex + i));
HXDLIN(1381)								bool _hx_tmp;
HXDLIN(1381)								if (::hx::IsNotEq( currentCharCode,32 )) {
HXLINE(1381)									_hx_tmp = ::hx::IsNotEq( currentCharCode,9 );
            								}
            								else {
HXLINE(1381)									_hx_tmp = false;
            								}
HXDLIN(1381)								if (_hx_tmp) {
HXLINE(1381)									goto _hx_goto_21;
            								}
HXDLIN(1381)								 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1381)								tempWidth = (tempWidth - position->advance->x);
HXDLIN(1381)								i = (i - 1);
            							}
            							_hx_goto_21:;
HXDLIN(1381)							while(true){
HXLINE(1381)								bool _hx_tmp;
HXDLIN(1381)								if ((remainingPositions->length > 0)) {
HXLINE(1381)									int _hx_tmp1;
HXDLIN(1381)									if (firstLineOfParagraph) {
HXLINE(1381)										_hx_tmp1 = indent;
            									}
            									else {
HXLINE(1381)										_hx_tmp1 = 0;
            									}
HXDLIN(1381)									_hx_tmp = ((offsetX + tempWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            								}
            								else {
HXLINE(1381)									_hx_tmp = false;
            								}
HXDLIN(1381)								if (!(_hx_tmp)) {
HXLINE(1381)									goto _hx_goto_22;
            								}
HXDLIN(1381)								bufferCount = 0;
HXDLIN(1381)								i = bufferCount;
HXDLIN(1381)								positionWidth = ((Float)0.0);
HXDLIN(1381)								while(true){
HXLINE(1381)									int _hx_tmp;
HXDLIN(1381)									if (firstLineOfParagraph) {
HXLINE(1381)										_hx_tmp = indent;
            									}
            									else {
HXLINE(1381)										_hx_tmp = 0;
            									}
HXDLIN(1381)									if (!(((offsetX + positionWidth) < (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) ))))) {
HXLINE(1381)										goto _hx_goto_23;
            									}
HXDLIN(1381)									currentPosition = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1381)									if ((currentPosition->advance->x == ((Float)0.0))) {
HXLINE(1381)										i = (i + 1);
HXDLIN(1381)										bufferCount = (bufferCount + 1);
            									}
            									else {
HXLINE(1381)										positionWidth = (positionWidth + currentPosition->advance->x);
HXDLIN(1381)										i = (i + 1);
            									}
            								}
            								_hx_goto_23:;
HXDLIN(1381)								if ((i == bufferCount)) {
HXLINE(1381)									i = (bufferCount + 1);
            								}
            								else {
HXLINE(1381)									while(true){
HXLINE(1381)										bool _hx_tmp;
HXDLIN(1381)										if ((i > 1)) {
HXLINE(1381)											int _hx_tmp1;
HXDLIN(1381)											if (firstLineOfParagraph) {
HXLINE(1381)												_hx_tmp1 = indent;
            											}
            											else {
HXLINE(1381)												_hx_tmp1 = 0;
            											}
HXDLIN(1381)											_hx_tmp = ((offsetX + positionWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            										}
            										else {
HXLINE(1381)											_hx_tmp = false;
            										}
HXDLIN(1381)										if (!(_hx_tmp)) {
HXLINE(1381)											goto _hx_goto_24;
            										}
HXDLIN(1381)										i = (i - 1);
HXDLIN(1381)										if (((i - bufferCount) > 0)) {
HXLINE(1381)											{
HXLINE(1381)												int endIndex = ((textIndex + i) - bufferCount);
HXDLIN(1381)												if ((textIndex >= endIndex)) {
HXLINE(1381)													positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1381)													widthValue = ( (Float)(0) );
            												}
            												else {
HXLINE(1381)													if ((endIndex <= formatRange->end)) {
HXLINE(1381)														::String text = _gthis->text;
HXDLIN(1381)														Float letterSpacing = ((Float)0.0);
HXDLIN(1381)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1381)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1381)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1381)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1381)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1381)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1381)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1381)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1381)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1381)														bool positions1;
HXDLIN(1381)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1381)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1381)															positions1 = true;
            														}
HXDLIN(1381)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1381)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1381)														_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1381)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1381)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1381)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1381)														Float width = ((Float)0.0);
HXDLIN(1381)														{
HXLINE(1381)															int _g = 0;
HXDLIN(1381)															while((_g < positions->length)){
HXLINE(1381)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1381)																_g = (_g + 1);
HXDLIN(1381)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1381)														widthValue = width;
            													}
            													else {
HXLINE(1381)														int tempIndex = textIndex;
HXDLIN(1381)														int tempRangeEnd = formatRange->end;
HXDLIN(1381)														int countRanges = 0;
HXDLIN(1381)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1381)														widthValue = ( (Float)(0) );
HXDLIN(1381)														while(true){
HXLINE(1381)															if ((tempIndex != tempRangeEnd)) {
HXLINE(1381)																::String text = _gthis->text;
HXDLIN(1381)																Float letterSpacing = ((Float)0.0);
HXDLIN(1381)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1381)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1381)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1381)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1381)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1381)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1381)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1381)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1381)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1381)																bool _hx_tmp;
HXDLIN(1381)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1381)																	_hx_tmp = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1381)																	_hx_tmp = true;
            																}
HXDLIN(1381)																_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1381)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1381)																_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1381)																::Array< ::Dynamic> tempPositions;
HXDLIN(1381)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1381)																	tempPositions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1381)																	tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1381)																positions = positions->concat(tempPositions);
            															}
HXDLIN(1381)															if ((tempRangeEnd != endIndex)) {
HXLINE(1381)																bool _hx_tmp;
HXDLIN(1381)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1381)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1381)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1381)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1381)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1381)																	_hx_tmp = true;
            																}
            																else {
HXLINE(1381)																	_hx_tmp = false;
            																}
HXDLIN(1381)																if (!(_hx_tmp)) {
HXLINE(1381)																	::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1121,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1381)																	goto _hx_goto_26;
            																}
HXDLIN(1381)																tempIndex = tempRangeEnd;
HXDLIN(1381)																if ((endIndex < formatRange->end)) {
HXLINE(1381)																	tempRangeEnd = endIndex;
            																}
            																else {
HXLINE(1381)																	tempRangeEnd = formatRange->end;
            																}
HXDLIN(1381)																countRanges = (countRanges + 1);
            															}
            															else {
HXLINE(1381)																Float width = ((Float)0.0);
HXDLIN(1381)																{
HXLINE(1381)																	int _g = 0;
HXDLIN(1381)																	while((_g < positions->length)){
HXLINE(1381)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1381)																		_g = (_g + 1);
HXDLIN(1381)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1381)																widthValue = width;
HXDLIN(1381)																goto _hx_goto_26;
            															}
            														}
            														_hx_goto_26:;
HXDLIN(1381)														rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1381)														if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1381)															rangeIndex = (rangeIndex + 1);
HXDLIN(1381)															formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1381)															currentFormat->_hx___merge(formatRange->format);
HXDLIN(1381)															font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            														}
            													}
            												}
            											}
HXDLIN(1381)											positionWidth = widthValue;
            										}
            										else {
HXLINE(1381)											i = 1;
HXDLIN(1381)											bufferCount = 0;
HXDLIN(1381)											{
HXLINE(1381)												int endIndex = (textIndex + 1);
HXDLIN(1381)												if ((textIndex >= endIndex)) {
HXLINE(1381)													positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1381)													widthValue = ( (Float)(0) );
            												}
            												else {
HXLINE(1381)													if ((endIndex <= formatRange->end)) {
HXLINE(1381)														::String text = _gthis->text;
HXDLIN(1381)														Float letterSpacing = ((Float)0.0);
HXDLIN(1381)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1381)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1381)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1381)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1381)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1381)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1381)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1381)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1381)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1381)														bool positions1;
HXDLIN(1381)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1381)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1381)															positions1 = true;
            														}
HXDLIN(1381)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1381)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1381)														_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1381)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1381)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1381)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1381)														Float width = ((Float)0.0);
HXDLIN(1381)														{
HXLINE(1381)															int _g = 0;
HXDLIN(1381)															while((_g < positions->length)){
HXLINE(1381)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1381)																_g = (_g + 1);
HXDLIN(1381)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1381)														widthValue = width;
            													}
            													else {
HXLINE(1381)														int tempIndex = textIndex;
HXDLIN(1381)														int tempRangeEnd = formatRange->end;
HXDLIN(1381)														int countRanges = 0;
HXDLIN(1381)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1381)														widthValue = ( (Float)(0) );
HXDLIN(1381)														while(true){
HXLINE(1381)															if ((tempIndex != tempRangeEnd)) {
HXLINE(1381)																::String text = _gthis->text;
HXDLIN(1381)																Float letterSpacing = ((Float)0.0);
HXDLIN(1381)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1381)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1381)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1381)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1381)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1381)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1381)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1381)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1381)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1381)																bool _hx_tmp;
HXDLIN(1381)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1381)																	_hx_tmp = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1381)																	_hx_tmp = true;
            																}
HXDLIN(1381)																_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1381)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1381)																_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1381)																::Array< ::Dynamic> tempPositions;
HXDLIN(1381)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1381)																	tempPositions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1381)																	tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1381)																positions = positions->concat(tempPositions);
            															}
HXDLIN(1381)															if ((tempRangeEnd != endIndex)) {
HXLINE(1381)																bool _hx_tmp;
HXDLIN(1381)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1381)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1381)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1381)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1381)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1381)																	_hx_tmp = true;
            																}
            																else {
HXLINE(1381)																	_hx_tmp = false;
            																}
HXDLIN(1381)																if (!(_hx_tmp)) {
HXLINE(1381)																	::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1121,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1381)																	goto _hx_goto_29;
            																}
HXDLIN(1381)																tempIndex = tempRangeEnd;
HXDLIN(1381)																if ((endIndex < formatRange->end)) {
HXLINE(1381)																	tempRangeEnd = endIndex;
            																}
            																else {
HXLINE(1381)																	tempRangeEnd = formatRange->end;
            																}
HXDLIN(1381)																countRanges = (countRanges + 1);
            															}
            															else {
HXLINE(1381)																Float width = ((Float)0.0);
HXDLIN(1381)																{
HXLINE(1381)																	int _g = 0;
HXDLIN(1381)																	while((_g < positions->length)){
HXLINE(1381)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1381)																		_g = (_g + 1);
HXDLIN(1381)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1381)																widthValue = width;
HXDLIN(1381)																goto _hx_goto_29;
            															}
            														}
            														_hx_goto_29:;
HXDLIN(1381)														rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1381)														if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1381)															rangeIndex = (rangeIndex + 1);
HXDLIN(1381)															formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1381)															currentFormat->_hx___merge(formatRange->format);
HXDLIN(1381)															font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            														}
            													}
            												}
            											}
HXDLIN(1381)											positionWidth = ( (Float)(0) );
            										}
            									}
            									_hx_goto_24:;
            								}
HXDLIN(1381)								placeIndex = ((textIndex + i) - bufferCount);
HXDLIN(1381)								{
HXLINE(1381)									if ((placeIndex <= formatRange->end)) {
HXLINE(1381)										::String text = _gthis->text;
HXDLIN(1381)										Float letterSpacing = ((Float)0.0);
HXDLIN(1381)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1381)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1381)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1381)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1381)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1381)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1381)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1381)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1381)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1381)										bool positions1;
HXDLIN(1381)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1381)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1381)											positions1 = true;
            										}
HXDLIN(1381)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1381)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1381)										_gthis1->set_text(text.substring(textIndex,placeIndex));
HXDLIN(1381)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1381)											positions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1381)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXDLIN(1381)										Float width = ((Float)0.0);
HXDLIN(1381)										{
HXLINE(1381)											int _g = 0;
HXDLIN(1381)											while((_g < positions->length)){
HXLINE(1381)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1381)												_g = (_g + 1);
HXDLIN(1381)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1381)										widthValue = width;
HXDLIN(1381)										bool _hx_tmp;
HXDLIN(1381)										if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1381)											_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            										}
            										else {
HXLINE(1381)											_hx_tmp = true;
            										}
HXDLIN(1381)										if (_hx_tmp) {
HXLINE(1381)											layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,placeIndex);
HXDLIN(1381)											_gthis->layoutGroups->push(layoutGroup);
            										}
            										else {
HXLINE(1381)											layoutGroup->format = formatRange->format;
HXDLIN(1381)											layoutGroup->startIndex = textIndex;
HXDLIN(1381)											layoutGroup->endIndex = placeIndex;
            										}
HXDLIN(1381)										layoutGroup->positions = positions;
HXDLIN(1381)										int _hx_tmp1;
HXDLIN(1381)										if (firstLineOfParagraph) {
HXLINE(1381)											_hx_tmp1 = indent;
            										}
            										else {
HXLINE(1381)											_hx_tmp1 = 0;
            										}
HXDLIN(1381)										layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1381)										layoutGroup->ascent = ascent;
HXDLIN(1381)										layoutGroup->descent = descent;
HXDLIN(1381)										layoutGroup->leading = leading;
HXDLIN(1381)										layoutGroup->lineIndex = lineIndex;
HXDLIN(1381)										layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1381)										layoutGroup->width = widthValue;
HXDLIN(1381)										layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1381)										offsetX = (offsetX + widthValue);
HXDLIN(1381)										if ((placeIndex == formatRange->end)) {
HXLINE(1381)											layoutGroup = null();
HXDLIN(1381)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1381)												rangeIndex = (rangeIndex + 1);
HXDLIN(1381)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1381)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1381)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            											}
HXDLIN(1381)											{
HXLINE(1381)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1381)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1381)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1381)													bool _hx_tmp;
HXDLIN(1381)													if (::hx::IsNotNull( font )) {
HXLINE(1381)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1381)														_hx_tmp = false;
            													}
HXDLIN(1381)													if (_hx_tmp) {
HXLINE(1381)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1381)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1381)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1381)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1381)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1381)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1381)												if ((heightValue > maxHeightValue)) {
HXLINE(1381)													maxHeightValue = heightValue;
            												}
HXDLIN(1381)												if ((ascent > maxAscent)) {
HXLINE(1381)													maxAscent = ascent;
            												}
            											}
            										}
            									}
            									else {
HXLINE(1381)										while(true){
HXLINE(1381)											int tempRangeEnd;
HXDLIN(1381)											if ((placeIndex < formatRange->end)) {
HXLINE(1381)												tempRangeEnd = placeIndex;
            											}
            											else {
HXLINE(1381)												tempRangeEnd = formatRange->end;
            											}
HXDLIN(1381)											if ((textIndex != tempRangeEnd)) {
HXLINE(1381)												::String text = _gthis->text;
HXDLIN(1381)												Float letterSpacing = ((Float)0.0);
HXDLIN(1381)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1381)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1381)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1381)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1381)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1381)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1381)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1381)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1381)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1381)												bool positions1;
HXDLIN(1381)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1381)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1381)													positions1 = true;
            												}
HXDLIN(1381)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1381)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1381)												_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1381)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1381)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1381)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1381)												Float width = ((Float)0.0);
HXDLIN(1381)												{
HXLINE(1381)													int _g = 0;
HXDLIN(1381)													while((_g < positions->length)){
HXLINE(1381)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1381)														_g = (_g + 1);
HXDLIN(1381)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1381)												widthValue = width;
HXDLIN(1381)												bool _hx_tmp;
HXDLIN(1381)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1381)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1381)													_hx_tmp = true;
            												}
HXDLIN(1381)												if (_hx_tmp) {
HXLINE(1381)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1381)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1381)													layoutGroup->format = formatRange->format;
HXDLIN(1381)													layoutGroup->startIndex = textIndex;
HXDLIN(1381)													layoutGroup->endIndex = tempRangeEnd;
            												}
HXDLIN(1381)												layoutGroup->positions = positions;
HXDLIN(1381)												int _hx_tmp1;
HXDLIN(1381)												if (firstLineOfParagraph) {
HXLINE(1381)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1381)													_hx_tmp1 = 0;
            												}
HXDLIN(1381)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1381)												layoutGroup->ascent = ascent;
HXDLIN(1381)												layoutGroup->descent = descent;
HXDLIN(1381)												layoutGroup->leading = leading;
HXDLIN(1381)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1381)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1381)												layoutGroup->width = widthValue;
HXDLIN(1381)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1381)												offsetX = (offsetX + widthValue);
HXDLIN(1381)												textIndex = tempRangeEnd;
            											}
HXDLIN(1381)											if ((tempRangeEnd == formatRange->end)) {
HXLINE(1381)												layoutGroup = null();
            											}
HXDLIN(1381)											if ((tempRangeEnd == placeIndex)) {
HXLINE(1381)												goto _hx_goto_32;
            											}
HXDLIN(1381)											bool _hx_tmp;
HXDLIN(1381)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1381)												rangeIndex = (rangeIndex + 1);
HXDLIN(1381)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1381)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1381)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1381)												_hx_tmp = true;
            											}
            											else {
HXLINE(1381)												_hx_tmp = false;
            											}
HXDLIN(1381)											if (!(_hx_tmp)) {
HXLINE(1381)												::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1209,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1381)												goto _hx_goto_32;
            											}
HXDLIN(1381)											{
HXLINE(1381)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1381)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1381)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1381)													bool _hx_tmp;
HXDLIN(1381)													if (::hx::IsNotNull( font )) {
HXLINE(1381)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1381)														_hx_tmp = false;
            													}
HXDLIN(1381)													if (_hx_tmp) {
HXLINE(1381)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1381)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1381)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1381)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1381)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1381)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1381)												if ((heightValue > maxHeightValue)) {
HXLINE(1381)													maxHeightValue = heightValue;
            												}
HXDLIN(1381)												if ((ascent > maxAscent)) {
HXLINE(1381)													maxAscent = ascent;
            												}
            											}
            										}
            										_hx_goto_32:;
            									}
HXDLIN(1381)									textIndex = placeIndex;
            								}
HXDLIN(1381)								{
HXLINE(1381)									{
HXLINE(1381)										if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1381)											ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1381)											descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            										}
            										else {
HXLINE(1381)											bool _hx_tmp;
HXDLIN(1381)											if (::hx::IsNotNull( font )) {
HXLINE(1381)												_hx_tmp = (font->unitsPerEM != 0);
            											}
            											else {
HXLINE(1381)												_hx_tmp = false;
            											}
HXDLIN(1381)											if (_hx_tmp) {
HXLINE(1381)												ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1381)												descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            											}
            											else {
HXLINE(1381)												ascent = ( (Float)(currentFormat->size) );
HXDLIN(1381)												descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            											}
            										}
HXDLIN(1381)										leading = ( (int)(currentFormat->leading) );
HXDLIN(1381)										heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1381)										if ((heightValue > maxHeightValue)) {
HXLINE(1381)											maxHeightValue = heightValue;
            										}
HXDLIN(1381)										if ((ascent > maxAscent)) {
HXLINE(1381)											maxAscent = ascent;
            										}
            									}
HXDLIN(1381)									int i1 = _gthis->layoutGroups->get_length();
HXDLIN(1381)									while(true){
HXLINE(1381)										i1 = (i1 - 1);
HXDLIN(1381)										if (!((i1 > -1))) {
HXLINE(1381)											goto _hx_goto_34;
            										}
HXDLIN(1381)										 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i1).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1381)										if ((lg->lineIndex < lineIndex)) {
HXLINE(1381)											goto _hx_goto_34;
            										}
HXDLIN(1381)										if ((lg->lineIndex > lineIndex)) {
HXLINE(1381)											continue;
            										}
HXDLIN(1381)										lg->ascent = maxAscent;
HXDLIN(1381)										lg->height = ( (Float)(maxHeightValue) );
            									}
            									_hx_goto_34:;
HXDLIN(1381)									offsetY = (offsetY + maxHeightValue);
HXDLIN(1381)									maxAscent = ((Float)0.0);
HXDLIN(1381)									maxHeightValue = 0;
HXDLIN(1381)									lineIndex = (lineIndex + 1);
HXDLIN(1381)									offsetX = ( (Float)(0) );
HXDLIN(1381)									firstLineOfParagraph = false;
            								}
HXDLIN(1381)								if ((placeIndex >= breakIndex)) {
HXLINE(1381)									positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1381)									widthValue = ( (Float)(0) );
            								}
            								else {
HXLINE(1381)									if ((breakIndex <= formatRange->end)) {
HXLINE(1381)										::String text = _gthis->text;
HXDLIN(1381)										Float letterSpacing = ((Float)0.0);
HXDLIN(1381)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1381)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1381)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1381)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1381)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1381)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1381)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1381)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1381)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1381)										bool positions1;
HXDLIN(1381)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1381)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1381)											positions1 = true;
            										}
HXDLIN(1381)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1381)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1381)										_gthis1->set_text(text.substring(placeIndex,breakIndex));
HXDLIN(1381)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1381)											positions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1381)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXDLIN(1381)										Float width = ((Float)0.0);
HXDLIN(1381)										{
HXLINE(1381)											int _g = 0;
HXDLIN(1381)											while((_g < positions->length)){
HXLINE(1381)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1381)												_g = (_g + 1);
HXDLIN(1381)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1381)										widthValue = width;
            									}
            									else {
HXLINE(1381)										int tempIndex = placeIndex;
HXDLIN(1381)										int tempRangeEnd = formatRange->end;
HXDLIN(1381)										int countRanges = 0;
HXDLIN(1381)										positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1381)										widthValue = ( (Float)(0) );
HXDLIN(1381)										while(true){
HXLINE(1381)											if ((tempIndex != tempRangeEnd)) {
HXLINE(1381)												::String text = _gthis->text;
HXDLIN(1381)												Float letterSpacing = ((Float)0.0);
HXDLIN(1381)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1381)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1381)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1381)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1381)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1381)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1381)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1381)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1381)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1381)												bool _hx_tmp;
HXDLIN(1381)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1381)													_hx_tmp = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1381)													_hx_tmp = true;
            												}
HXDLIN(1381)												_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1381)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1381)												_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1381)												::Array< ::Dynamic> tempPositions;
HXDLIN(1381)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1381)													tempPositions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1381)													tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1381)												positions = positions->concat(tempPositions);
            											}
HXDLIN(1381)											if ((tempRangeEnd != breakIndex)) {
HXLINE(1381)												bool _hx_tmp;
HXDLIN(1381)												if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1381)													rangeIndex = (rangeIndex + 1);
HXDLIN(1381)													formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1381)													currentFormat->_hx___merge(formatRange->format);
HXDLIN(1381)													font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1381)													_hx_tmp = true;
            												}
            												else {
HXLINE(1381)													_hx_tmp = false;
            												}
HXDLIN(1381)												if (!(_hx_tmp)) {
HXLINE(1381)													::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1121,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1381)													goto _hx_goto_36;
            												}
HXDLIN(1381)												tempIndex = tempRangeEnd;
HXDLIN(1381)												if ((breakIndex < formatRange->end)) {
HXLINE(1381)													tempRangeEnd = breakIndex;
            												}
            												else {
HXLINE(1381)													tempRangeEnd = formatRange->end;
            												}
HXDLIN(1381)												countRanges = (countRanges + 1);
            											}
            											else {
HXLINE(1381)												Float width = ((Float)0.0);
HXDLIN(1381)												{
HXLINE(1381)													int _g = 0;
HXDLIN(1381)													while((_g < positions->length)){
HXLINE(1381)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1381)														_g = (_g + 1);
HXDLIN(1381)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1381)												widthValue = width;
HXDLIN(1381)												goto _hx_goto_36;
            											}
            										}
            										_hx_goto_36:;
HXDLIN(1381)										rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1381)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1381)											rangeIndex = (rangeIndex + 1);
HXDLIN(1381)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1381)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1381)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            										}
            									}
            								}
HXDLIN(1381)								remainingPositions = positions;
HXDLIN(1381)								tempWidth = widthValue;
            							}
            							_hx_goto_22:;
            						}
HXDLIN(1381)						{
HXLINE(1381)							if ((breakIndex <= formatRange->end)) {
HXLINE(1381)								::String text = _gthis->text;
HXDLIN(1381)								Float letterSpacing = ((Float)0.0);
HXDLIN(1381)								if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1381)									letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            								}
HXDLIN(1381)								if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1381)									_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            								}
HXDLIN(1381)								_gthis->_hx___textLayout->set_text(null());
HXDLIN(1381)								_gthis->_hx___textLayout->set_font(font);
HXDLIN(1381)								if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1381)									_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            								}
HXDLIN(1381)								_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1381)								bool positions1;
HXDLIN(1381)								if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1381)									positions1 = (_gthis->sharpness < 400);
            								}
            								else {
HXLINE(1381)									positions1 = true;
            								}
HXDLIN(1381)								_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1381)								 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1381)								_gthis1->set_text(text.substring(textIndex,breakIndex));
HXDLIN(1381)								if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1381)									positions = _gthis->_hx___textLayout->get_positions();
            								}
            								else {
HXLINE(1381)									positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            								}
HXDLIN(1381)								Float width = ((Float)0.0);
HXDLIN(1381)								{
HXLINE(1381)									int _g = 0;
HXDLIN(1381)									while((_g < positions->length)){
HXLINE(1381)										 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1381)										_g = (_g + 1);
HXDLIN(1381)										width = (width + position->advance->x);
            									}
            								}
HXDLIN(1381)								widthValue = width;
HXDLIN(1381)								bool _hx_tmp;
HXDLIN(1381)								if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1381)									_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            								}
            								else {
HXLINE(1381)									_hx_tmp = true;
            								}
HXDLIN(1381)								if (_hx_tmp) {
HXLINE(1381)									layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,breakIndex);
HXDLIN(1381)									_gthis->layoutGroups->push(layoutGroup);
            								}
            								else {
HXLINE(1381)									layoutGroup->format = formatRange->format;
HXDLIN(1381)									layoutGroup->startIndex = textIndex;
HXDLIN(1381)									layoutGroup->endIndex = breakIndex;
            								}
HXDLIN(1381)								layoutGroup->positions = positions;
HXDLIN(1381)								int _hx_tmp1;
HXDLIN(1381)								if (firstLineOfParagraph) {
HXLINE(1381)									_hx_tmp1 = indent;
            								}
            								else {
HXLINE(1381)									_hx_tmp1 = 0;
            								}
HXDLIN(1381)								layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1381)								layoutGroup->ascent = ascent;
HXDLIN(1381)								layoutGroup->descent = descent;
HXDLIN(1381)								layoutGroup->leading = leading;
HXDLIN(1381)								layoutGroup->lineIndex = lineIndex;
HXDLIN(1381)								layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1381)								layoutGroup->width = widthValue;
HXDLIN(1381)								layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1381)								offsetX = (offsetX + widthValue);
HXDLIN(1381)								if ((breakIndex == formatRange->end)) {
HXLINE(1381)									layoutGroup = null();
HXDLIN(1381)									if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1381)										rangeIndex = (rangeIndex + 1);
HXDLIN(1381)										formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1381)										currentFormat->_hx___merge(formatRange->format);
HXDLIN(1381)										font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            									}
HXDLIN(1381)									{
HXLINE(1381)										if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1381)											ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1381)											descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            										}
            										else {
HXLINE(1381)											bool _hx_tmp;
HXDLIN(1381)											if (::hx::IsNotNull( font )) {
HXLINE(1381)												_hx_tmp = (font->unitsPerEM != 0);
            											}
            											else {
HXLINE(1381)												_hx_tmp = false;
            											}
HXDLIN(1381)											if (_hx_tmp) {
HXLINE(1381)												ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1381)												descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            											}
            											else {
HXLINE(1381)												ascent = ( (Float)(currentFormat->size) );
HXDLIN(1381)												descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            											}
            										}
HXDLIN(1381)										leading = ( (int)(currentFormat->leading) );
HXDLIN(1381)										heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1381)										if ((heightValue > maxHeightValue)) {
HXLINE(1381)											maxHeightValue = heightValue;
            										}
HXDLIN(1381)										if ((ascent > maxAscent)) {
HXLINE(1381)											maxAscent = ascent;
            										}
            									}
            								}
            							}
            							else {
HXLINE(1381)								while(true){
HXLINE(1381)									int tempRangeEnd;
HXDLIN(1381)									if ((breakIndex < formatRange->end)) {
HXLINE(1381)										tempRangeEnd = breakIndex;
            									}
            									else {
HXLINE(1381)										tempRangeEnd = formatRange->end;
            									}
HXDLIN(1381)									if ((textIndex != tempRangeEnd)) {
HXLINE(1381)										::String text = _gthis->text;
HXDLIN(1381)										Float letterSpacing = ((Float)0.0);
HXDLIN(1381)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1381)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1381)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1381)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1381)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1381)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1381)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1381)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1381)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1381)										bool positions1;
HXDLIN(1381)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1381)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1381)											positions1 = true;
            										}
HXDLIN(1381)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1381)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1381)										_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1381)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1381)											positions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1381)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXDLIN(1381)										Float width = ((Float)0.0);
HXDLIN(1381)										{
HXLINE(1381)											int _g = 0;
HXDLIN(1381)											while((_g < positions->length)){
HXLINE(1381)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1381)												_g = (_g + 1);
HXDLIN(1381)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1381)										widthValue = width;
HXDLIN(1381)										bool _hx_tmp;
HXDLIN(1381)										if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1381)											_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            										}
            										else {
HXLINE(1381)											_hx_tmp = true;
            										}
HXDLIN(1381)										if (_hx_tmp) {
HXLINE(1381)											layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1381)											_gthis->layoutGroups->push(layoutGroup);
            										}
            										else {
HXLINE(1381)											layoutGroup->format = formatRange->format;
HXDLIN(1381)											layoutGroup->startIndex = textIndex;
HXDLIN(1381)											layoutGroup->endIndex = tempRangeEnd;
            										}
HXDLIN(1381)										layoutGroup->positions = positions;
HXDLIN(1381)										int _hx_tmp1;
HXDLIN(1381)										if (firstLineOfParagraph) {
HXLINE(1381)											_hx_tmp1 = indent;
            										}
            										else {
HXLINE(1381)											_hx_tmp1 = 0;
            										}
HXDLIN(1381)										layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1381)										layoutGroup->ascent = ascent;
HXDLIN(1381)										layoutGroup->descent = descent;
HXDLIN(1381)										layoutGroup->leading = leading;
HXDLIN(1381)										layoutGroup->lineIndex = lineIndex;
HXDLIN(1381)										layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1381)										layoutGroup->width = widthValue;
HXDLIN(1381)										layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1381)										offsetX = (offsetX + widthValue);
HXDLIN(1381)										textIndex = tempRangeEnd;
            									}
HXDLIN(1381)									if ((tempRangeEnd == formatRange->end)) {
HXLINE(1381)										layoutGroup = null();
            									}
HXDLIN(1381)									if ((tempRangeEnd == breakIndex)) {
HXLINE(1381)										goto _hx_goto_39;
            									}
HXDLIN(1381)									bool _hx_tmp;
HXDLIN(1381)									if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1381)										rangeIndex = (rangeIndex + 1);
HXDLIN(1381)										formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1381)										currentFormat->_hx___merge(formatRange->format);
HXDLIN(1381)										font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1381)										_hx_tmp = true;
            									}
            									else {
HXLINE(1381)										_hx_tmp = false;
            									}
HXDLIN(1381)									if (!(_hx_tmp)) {
HXLINE(1381)										::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1209,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1381)										goto _hx_goto_39;
            									}
HXDLIN(1381)									{
HXLINE(1381)										if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1381)											ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1381)											descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            										}
            										else {
HXLINE(1381)											bool _hx_tmp;
HXDLIN(1381)											if (::hx::IsNotNull( font )) {
HXLINE(1381)												_hx_tmp = (font->unitsPerEM != 0);
            											}
            											else {
HXLINE(1381)												_hx_tmp = false;
            											}
HXDLIN(1381)											if (_hx_tmp) {
HXLINE(1381)												ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1381)												descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            											}
            											else {
HXLINE(1381)												ascent = ( (Float)(currentFormat->size) );
HXDLIN(1381)												descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            											}
            										}
HXDLIN(1381)										leading = ( (int)(currentFormat->leading) );
HXDLIN(1381)										heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1381)										if ((heightValue > maxHeightValue)) {
HXLINE(1381)											maxHeightValue = heightValue;
            										}
HXDLIN(1381)										if ((ascent > maxAscent)) {
HXLINE(1381)											maxAscent = ascent;
            										}
            									}
            								}
            								_hx_goto_39:;
            							}
HXDLIN(1381)							textIndex = breakIndex;
            						}
            					}
HXLINE(1383)					layoutGroup = null();
            				}
            				else {
HXLINE(1385)					bool _hx_tmp;
HXDLIN(1385)					if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1385)						_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            					}
            					else {
HXLINE(1385)						_hx_tmp = false;
            					}
HXDLIN(1385)					if (_hx_tmp) {
HXLINE(1388)						if ((layoutGroup->endIndex == spaceIndex)) {
HXLINE(1390)							 ::openfl::text::_internal::TextLayoutGroup layoutGroup1 = layoutGroup;
HXDLIN(1390)							int index = (layoutGroup->positions->length - 1);
HXDLIN(1390)							Float _hx_tmp;
HXDLIN(1390)							bool _hx_tmp1;
HXDLIN(1390)							if ((index >= 0)) {
HXLINE(1390)								_hx_tmp1 = (index < layoutGroup->positions->length);
            							}
            							else {
HXLINE(1390)								_hx_tmp1 = false;
            							}
HXDLIN(1390)							if (_hx_tmp1) {
HXLINE(1390)								_hx_tmp = layoutGroup->positions->__get(index).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            							}
            							else {
HXLINE(1390)								_hx_tmp = ( (Float)(0) );
            							}
HXDLIN(1390)							layoutGroup1->width = (layoutGroup1->width - _hx_tmp);
            						}
HXLINE(1393)						layoutGroup = null();
            					}
            				}
HXLINE(1396)				{
HXLINE(1396)					{
HXLINE(1396)						if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1396)							ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1396)							descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            						}
            						else {
HXLINE(1396)							bool _hx_tmp;
HXDLIN(1396)							if (::hx::IsNotNull( font )) {
HXLINE(1396)								_hx_tmp = (font->unitsPerEM != 0);
            							}
            							else {
HXLINE(1396)								_hx_tmp = false;
            							}
HXDLIN(1396)							if (_hx_tmp) {
HXLINE(1396)								ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1396)								descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            							}
            							else {
HXLINE(1396)								ascent = ( (Float)(currentFormat->size) );
HXDLIN(1396)								descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            							}
            						}
HXDLIN(1396)						leading = ( (int)(currentFormat->leading) );
HXDLIN(1396)						heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1396)						if ((heightValue > maxHeightValue)) {
HXLINE(1396)							maxHeightValue = heightValue;
            						}
HXDLIN(1396)						if ((ascent > maxAscent)) {
HXLINE(1396)							maxAscent = ascent;
            						}
            					}
HXDLIN(1396)					int i = _gthis->layoutGroups->get_length();
HXDLIN(1396)					while(true){
HXLINE(1396)						i = (i - 1);
HXDLIN(1396)						if (!((i > -1))) {
HXLINE(1396)							goto _hx_goto_41;
            						}
HXDLIN(1396)						 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1396)						if ((lg->lineIndex < lineIndex)) {
HXLINE(1396)							goto _hx_goto_41;
            						}
HXDLIN(1396)						if ((lg->lineIndex > lineIndex)) {
HXLINE(1396)							continue;
            						}
HXDLIN(1396)						lg->ascent = maxAscent;
HXDLIN(1396)						lg->height = ( (Float)(maxHeightValue) );
            					}
            					_hx_goto_41:;
HXDLIN(1396)					offsetY = (offsetY + maxHeightValue);
HXDLIN(1396)					maxAscent = ((Float)0.0);
HXDLIN(1396)					maxHeightValue = 0;
HXDLIN(1396)					lineIndex = (lineIndex + 1);
HXDLIN(1396)					offsetX = ( (Float)(0) );
HXDLIN(1396)					firstLineOfParagraph = false;
            				}
HXLINE(1399)				if ((formatRange->end == breakIndex)) {
HXLINE(1401)					if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1401)						rangeIndex = (rangeIndex + 1);
HXDLIN(1401)						formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1401)						currentFormat->_hx___merge(formatRange->format);
HXDLIN(1401)						font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            					}
HXLINE(1402)					{
HXLINE(1402)						if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1402)							ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1402)							descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            						}
            						else {
HXLINE(1402)							bool _hx_tmp;
HXDLIN(1402)							if (::hx::IsNotNull( font )) {
HXLINE(1402)								_hx_tmp = (font->unitsPerEM != 0);
            							}
            							else {
HXLINE(1402)								_hx_tmp = false;
            							}
HXDLIN(1402)							if (_hx_tmp) {
HXLINE(1402)								ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1402)								descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            							}
            							else {
HXLINE(1402)								ascent = ( (Float)(currentFormat->size) );
HXDLIN(1402)								descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            							}
            						}
HXDLIN(1402)						leading = ( (int)(currentFormat->leading) );
HXDLIN(1402)						heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1402)						if ((heightValue > maxHeightValue)) {
HXLINE(1402)							maxHeightValue = heightValue;
            						}
HXDLIN(1402)						if ((ascent > maxAscent)) {
HXLINE(1402)							maxAscent = ascent;
            						}
            					}
            				}
HXLINE(1405)				textIndex = (breakIndex + 1);
HXLINE(1406)				previousBreakIndex = breakIndex;
HXLINE(1407)				breakCount = (breakCount + 1);
HXLINE(1408)				if ((breakCount < this->lineBreaks->get_length())) {
HXLINE(1408)					breakIndex = this->lineBreaks->get(breakCount);
            				}
            				else {
HXLINE(1408)					breakIndex = -1;
            				}
HXLINE(1410)				{
HXLINE(1410)					firstLineOfParagraph = true;
HXDLIN(1410)					if (::hx::IsNotNull( currentFormat->align )) {
HXLINE(1410)						align = currentFormat->align;
            					}
            					else {
HXLINE(1410)						align = 3;
            					}
HXDLIN(1410)					if (::hx::IsNotNull( currentFormat->blockIndent )) {
HXLINE(1410)						blockIndent = ( (int)(currentFormat->blockIndent) );
            					}
            					else {
HXLINE(1410)						blockIndent = 0;
            					}
HXDLIN(1410)					if (::hx::IsNotNull( currentFormat->indent )) {
HXLINE(1410)						indent = ( (int)(currentFormat->indent) );
            					}
            					else {
HXLINE(1410)						indent = 0;
            					}
HXDLIN(1410)					if (::hx::IsNotNull( currentFormat->leftMargin )) {
HXLINE(1410)						leftMargin = ( (int)(currentFormat->leftMargin) );
            					}
            					else {
HXLINE(1410)						leftMargin = 0;
            					}
HXDLIN(1410)					if (::hx::IsNotNull( currentFormat->rightMargin )) {
HXLINE(1410)						rightMargin = ( (int)(currentFormat->rightMargin) );
            					}
            					else {
HXLINE(1410)						rightMargin = 0;
            					}
HXDLIN(1410)					bool _hx_tmp = ::hx::IsNotNull( currentFormat->bullet );
HXDLIN(1410)					bool _hx_tmp1 = ::hx::IsNotNull( currentFormat->tabStops );
            				}
            			}
            			else {
HXLINE(1412)				if ((spaceIndex > -1)) {
HXLINE(1416)					bool _hx_tmp;
HXDLIN(1416)					if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1416)						_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            					}
            					else {
HXLINE(1416)						_hx_tmp = false;
            					}
HXDLIN(1416)					if (_hx_tmp) {
HXLINE(1418)						layoutGroup = null();
            					}
HXLINE(1421)					wrap = false;
HXLINE(1423)					while((textIndex < this->text.length)){
HXLINE(1427)						int endIndex = -1;
HXLINE(1429)						if ((spaceIndex == -1)) {
HXLINE(1431)							endIndex = breakIndex;
            						}
            						else {
HXLINE(1435)							endIndex = (spaceIndex + 1);
HXLINE(1437)							bool _hx_tmp;
HXDLIN(1437)							if ((breakIndex > -1)) {
HXLINE(1437)								_hx_tmp = (breakIndex < endIndex);
            							}
            							else {
HXLINE(1437)								_hx_tmp = false;
            							}
HXDLIN(1437)							if (_hx_tmp) {
HXLINE(1439)								endIndex = breakIndex;
            							}
            						}
HXLINE(1443)						if ((endIndex == -1)) {
HXLINE(1445)							endIndex = this->text.length;
            						}
HXLINE(1448)						if ((textIndex >= endIndex)) {
HXLINE(1448)							positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1448)							widthValue = ( (Float)(0) );
            						}
            						else {
HXLINE(1448)							if ((endIndex <= formatRange->end)) {
HXLINE(1448)								::String text = _gthis->text;
HXDLIN(1448)								Float letterSpacing = ((Float)0.0);
HXDLIN(1448)								if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1448)									letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            								}
HXDLIN(1448)								if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1448)									_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            								}
HXDLIN(1448)								_gthis->_hx___textLayout->set_text(null());
HXDLIN(1448)								_gthis->_hx___textLayout->set_font(font);
HXDLIN(1448)								if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1448)									_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            								}
HXDLIN(1448)								_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1448)								bool positions1;
HXDLIN(1448)								if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1448)									positions1 = (_gthis->sharpness < 400);
            								}
            								else {
HXLINE(1448)									positions1 = true;
            								}
HXDLIN(1448)								_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1448)								 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1448)								_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1448)								if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1448)									positions = _gthis->_hx___textLayout->get_positions();
            								}
            								else {
HXLINE(1448)									positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            								}
HXDLIN(1448)								Float width = ((Float)0.0);
HXDLIN(1448)								{
HXLINE(1448)									int _g = 0;
HXDLIN(1448)									while((_g < positions->length)){
HXLINE(1448)										 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1448)										_g = (_g + 1);
HXDLIN(1448)										width = (width + position->advance->x);
            									}
            								}
HXDLIN(1448)								widthValue = width;
            							}
            							else {
HXLINE(1448)								int tempIndex = textIndex;
HXDLIN(1448)								int tempRangeEnd = formatRange->end;
HXDLIN(1448)								int countRanges = 0;
HXDLIN(1448)								positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1448)								widthValue = ( (Float)(0) );
HXDLIN(1448)								while(true){
HXLINE(1448)									if ((tempIndex != tempRangeEnd)) {
HXLINE(1448)										::String text = _gthis->text;
HXDLIN(1448)										Float letterSpacing = ((Float)0.0);
HXDLIN(1448)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1448)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1448)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1448)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1448)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1448)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1448)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1448)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1448)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1448)										bool _hx_tmp;
HXDLIN(1448)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1448)											_hx_tmp = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1448)											_hx_tmp = true;
            										}
HXDLIN(1448)										_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1448)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1448)										_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1448)										::Array< ::Dynamic> tempPositions;
HXDLIN(1448)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1448)											tempPositions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1448)											tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXDLIN(1448)										positions = positions->concat(tempPositions);
            									}
HXDLIN(1448)									if ((tempRangeEnd != endIndex)) {
HXLINE(1448)										bool _hx_tmp;
HXDLIN(1448)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1448)											rangeIndex = (rangeIndex + 1);
HXDLIN(1448)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1448)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1448)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1448)											_hx_tmp = true;
            										}
            										else {
HXLINE(1448)											_hx_tmp = false;
            										}
HXDLIN(1448)										if (!(_hx_tmp)) {
HXLINE(1448)											::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1121,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1448)											goto _hx_goto_44;
            										}
HXDLIN(1448)										tempIndex = tempRangeEnd;
HXDLIN(1448)										if ((endIndex < formatRange->end)) {
HXLINE(1448)											tempRangeEnd = endIndex;
            										}
            										else {
HXLINE(1448)											tempRangeEnd = formatRange->end;
            										}
HXDLIN(1448)										countRanges = (countRanges + 1);
            									}
            									else {
HXLINE(1448)										Float width = ((Float)0.0);
HXDLIN(1448)										{
HXLINE(1448)											int _g = 0;
HXDLIN(1448)											while((_g < positions->length)){
HXLINE(1448)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1448)												_g = (_g + 1);
HXDLIN(1448)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1448)										widthValue = width;
HXDLIN(1448)										goto _hx_goto_44;
            									}
            								}
            								_hx_goto_44:;
HXDLIN(1448)								rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1448)								if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1448)									rangeIndex = (rangeIndex + 1);
HXDLIN(1448)									formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1448)									currentFormat->_hx___merge(formatRange->format);
HXDLIN(1448)									font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            								}
            							}
            						}
HXLINE(1450)						if (::hx::IsEq( align,2 )) {
HXLINE(1452)							bool _hx_tmp;
HXDLIN(1452)							if ((positions->length > 0)) {
HXLINE(1452)								_hx_tmp = (textIndex == previousSpaceIndex);
            							}
            							else {
HXLINE(1452)								_hx_tmp = false;
            							}
HXDLIN(1452)							if (_hx_tmp) {
HXLINE(1455)								textIndex = (textIndex + 1);
HXLINE(1457)								Float spaceWidth = positions->shift().StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
HXLINE(1458)								widthValue = (widthValue - spaceWidth);
HXLINE(1459)								offsetX = (offsetX + spaceWidth);
            							}
HXLINE(1462)							bool _hx_tmp1;
HXDLIN(1462)							if ((positions->length > 0)) {
HXLINE(1462)								_hx_tmp1 = (endIndex == (spaceIndex + 1));
            							}
            							else {
HXLINE(1462)								_hx_tmp1 = false;
            							}
HXDLIN(1462)							if (_hx_tmp1) {
HXLINE(1465)								endIndex = (endIndex - 1);
HXLINE(1467)								Float spaceWidth = positions->pop().StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
HXLINE(1468)								widthValue = (widthValue - spaceWidth);
            							}
            						}
HXLINE(1472)						if (this->wordWrap) {
HXLINE(1474)							int _hx_tmp;
HXDLIN(1474)							if (firstLineOfParagraph) {
HXLINE(1474)								_hx_tmp = indent;
            							}
            							else {
HXLINE(1474)								_hx_tmp = 0;
            							}
HXDLIN(1474)							if (((offsetX + widthValue) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) )))) {
HXLINE(1476)								wrap = true;
HXLINE(1478)								bool _hx_tmp;
HXDLIN(1478)								if ((positions->length > 0)) {
HXLINE(1478)									_hx_tmp = (endIndex == (spaceIndex + 1));
            								}
            								else {
HXLINE(1478)									_hx_tmp = false;
            								}
HXDLIN(1478)								if (_hx_tmp) {
HXLINE(1482)									 ::openfl::text::_internal::GlyphPosition lastPosition = positions->__get((positions->length - 1)).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXLINE(1483)									Float spaceWidth = lastPosition->advance->x;
HXLINE(1485)									int _hx_tmp;
HXDLIN(1485)									if (firstLineOfParagraph) {
HXLINE(1485)										_hx_tmp = indent;
            									}
            									else {
HXLINE(1485)										_hx_tmp = 0;
            									}
HXDLIN(1485)									if ((((offsetX + widthValue) - spaceWidth) <= (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) )))) {
HXLINE(1487)										wrap = false;
            									}
            								}
            							}
            						}
HXLINE(1493)						if (wrap) {
HXLINE(1495)							bool _hx_tmp;
HXDLIN(1495)							if (::hx::IsNotEq( align,2 )) {
HXLINE(1495)								if (::hx::IsNull( layoutGroup )) {
HXLINE(1495)									_hx_tmp = (this->layoutGroups->get_length() > 0);
            								}
            								else {
HXLINE(1495)									_hx_tmp = true;
            								}
            							}
            							else {
HXLINE(1495)								_hx_tmp = false;
            							}
HXDLIN(1495)							if (_hx_tmp) {
HXLINE(1497)								 ::openfl::text::_internal::TextLayoutGroup previous = layoutGroup;
HXLINE(1498)								if (::hx::IsNull( previous )) {
HXLINE(1500)									::Dynamic this1 = this->layoutGroups;
HXDLIN(1500)									previous = ( ( ::openfl::_Vector::ObjectVector)(this1) )->get((this->layoutGroups->get_length() - 1)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
            								}
HXLINE(1504)								 ::openfl::text::_internal::TextLayoutGroup previous1 = previous;
HXDLIN(1504)								int index = (previous->positions->length - 1);
HXDLIN(1504)								Float _hx_tmp;
HXDLIN(1504)								bool _hx_tmp1;
HXDLIN(1504)								if ((index >= 0)) {
HXLINE(1504)									_hx_tmp1 = (index < previous->positions->length);
            								}
            								else {
HXLINE(1504)									_hx_tmp1 = false;
            								}
HXDLIN(1504)								if (_hx_tmp1) {
HXLINE(1504)									_hx_tmp = previous->positions->__get(index).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            								}
            								else {
HXLINE(1504)									_hx_tmp = ( (Float)(0) );
            								}
HXDLIN(1504)								previous1->width = (previous1->width - _hx_tmp);
HXLINE(1505)								previous->endIndex--;
            							}
HXLINE(1508)							int i = (this->layoutGroups->get_length() - 1);
HXLINE(1509)							int offsetCount = 0;
HXLINE(1511)							while((i >= 0)){
HXLINE(1513)								layoutGroup = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1515)								bool _hx_tmp;
HXDLIN(1515)								if ((i > 0)) {
HXLINE(1515)									_hx_tmp = (layoutGroup->startIndex > previousSpaceIndex);
            								}
            								else {
HXLINE(1515)									_hx_tmp = false;
            								}
HXDLIN(1515)								if (_hx_tmp) {
HXLINE(1517)									offsetCount = (offsetCount + 1);
            								}
            								else {
HXLINE(1521)									goto _hx_goto_46;
            								}
HXLINE(1524)								i = (i - 1);
            							}
            							_hx_goto_46:;
HXLINE(1527)							if ((textIndex == (previousSpaceIndex + 1))) {
HXLINE(1529)								{
HXLINE(1529)									if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1529)										ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1529)										descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            									}
            									else {
HXLINE(1529)										bool _hx_tmp;
HXDLIN(1529)										if (::hx::IsNotNull( font )) {
HXLINE(1529)											_hx_tmp = (font->unitsPerEM != 0);
            										}
            										else {
HXLINE(1529)											_hx_tmp = false;
            										}
HXDLIN(1529)										if (_hx_tmp) {
HXLINE(1529)											ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1529)											descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            										}
            										else {
HXLINE(1529)											ascent = ( (Float)(currentFormat->size) );
HXDLIN(1529)											descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            										}
            									}
HXDLIN(1529)									leading = ( (int)(currentFormat->leading) );
HXDLIN(1529)									heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1529)									if ((heightValue > maxHeightValue)) {
HXLINE(1529)										maxHeightValue = heightValue;
            									}
HXDLIN(1529)									if ((ascent > maxAscent)) {
HXLINE(1529)										maxAscent = ascent;
            									}
            								}
HXDLIN(1529)								int i = _gthis->layoutGroups->get_length();
HXDLIN(1529)								while(true){
HXLINE(1529)									i = (i - 1);
HXDLIN(1529)									if (!((i > -1))) {
HXLINE(1529)										goto _hx_goto_47;
            									}
HXDLIN(1529)									 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1529)									if ((lg->lineIndex < lineIndex)) {
HXLINE(1529)										goto _hx_goto_47;
            									}
HXDLIN(1529)									if ((lg->lineIndex > lineIndex)) {
HXLINE(1529)										continue;
            									}
HXDLIN(1529)									lg->ascent = maxAscent;
HXDLIN(1529)									lg->height = ( (Float)(maxHeightValue) );
            								}
            								_hx_goto_47:;
HXDLIN(1529)								offsetY = (offsetY + maxHeightValue);
HXDLIN(1529)								maxAscent = ((Float)0.0);
HXDLIN(1529)								maxHeightValue = 0;
HXDLIN(1529)								lineIndex = (lineIndex + 1);
HXDLIN(1529)								offsetX = ( (Float)(0) );
HXDLIN(1529)								firstLineOfParagraph = false;
            							}
HXLINE(1532)							offsetX = ( (Float)(0) );
HXLINE(1534)							if ((offsetCount > 0)) {
HXLINE(1536)								::Dynamic this1 = this->layoutGroups;
HXDLIN(1536)								Float bumpX = ( ( ::openfl::_Vector::ObjectVector)(this1) )->get((this->layoutGroups->get_length() - offsetCount)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >()->offsetX;
HXLINE(1538)								{
HXLINE(1538)									int _g = (this->layoutGroups->get_length() - offsetCount);
HXDLIN(1538)									int _g1 = this->layoutGroups->get_length();
HXDLIN(1538)									while((_g < _g1)){
HXLINE(1538)										_g = (_g + 1);
HXDLIN(1538)										int i = (_g - 1);
HXLINE(1540)										layoutGroup = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1541)										 ::openfl::text::_internal::TextLayoutGroup layoutGroup1 = layoutGroup;
HXDLIN(1541)										layoutGroup1->offsetX = (layoutGroup1->offsetX - bumpX);
HXLINE(1542)										layoutGroup->offsetY = (offsetY + 2);
HXLINE(1543)										layoutGroup->lineIndex = lineIndex;
HXLINE(1544)										offsetX = (offsetX + layoutGroup->width);
            									}
            								}
            							}
HXLINE(1548)							{
HXLINE(1548)								bool _hx_tmp1;
HXDLIN(1548)								if ((_gthis->width >= 4)) {
HXLINE(1548)									_hx_tmp1 = _gthis->wordWrap;
            								}
            								else {
HXLINE(1548)									_hx_tmp1 = false;
            								}
HXDLIN(1548)								if (_hx_tmp1) {
HXLINE(1548)									::Array< ::Dynamic> remainingPositions = positions;
HXDLIN(1548)									int bufferCount;
HXDLIN(1548)									int placeIndex;
HXDLIN(1548)									Float positionWidth;
HXDLIN(1548)									 ::openfl::text::_internal::GlyphPosition currentPosition;
HXDLIN(1548)									Float width = ((Float)0.0);
HXDLIN(1548)									{
HXLINE(1548)										int _g = 0;
HXDLIN(1548)										while((_g < remainingPositions->length)){
HXLINE(1548)											 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1548)											_g = (_g + 1);
HXDLIN(1548)											width = (width + position->advance->x);
            										}
            									}
HXDLIN(1548)									Float tempWidth = width;
HXDLIN(1548)									int i = (remainingPositions->length - 1);
HXDLIN(1548)									while((i >= 0)){
HXLINE(1548)										 ::Dynamic currentCharCode = _gthis->text.charCodeAt((textIndex + i));
HXDLIN(1548)										bool _hx_tmp;
HXDLIN(1548)										if (::hx::IsNotEq( currentCharCode,32 )) {
HXLINE(1548)											_hx_tmp = ::hx::IsNotEq( currentCharCode,9 );
            										}
            										else {
HXLINE(1548)											_hx_tmp = false;
            										}
HXDLIN(1548)										if (_hx_tmp) {
HXLINE(1548)											goto _hx_goto_50;
            										}
HXDLIN(1548)										 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1548)										tempWidth = (tempWidth - position->advance->x);
HXDLIN(1548)										i = (i - 1);
            									}
            									_hx_goto_50:;
HXDLIN(1548)									while(true){
HXLINE(1548)										bool _hx_tmp;
HXDLIN(1548)										if ((remainingPositions->length > 0)) {
HXLINE(1548)											int _hx_tmp1;
HXDLIN(1548)											if (firstLineOfParagraph) {
HXLINE(1548)												_hx_tmp1 = indent;
            											}
            											else {
HXLINE(1548)												_hx_tmp1 = 0;
            											}
HXDLIN(1548)											_hx_tmp = ((offsetX + tempWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            										}
            										else {
HXLINE(1548)											_hx_tmp = false;
            										}
HXDLIN(1548)										if (!(_hx_tmp)) {
HXLINE(1548)											goto _hx_goto_51;
            										}
HXDLIN(1548)										bufferCount = 0;
HXDLIN(1548)										i = bufferCount;
HXDLIN(1548)										positionWidth = ((Float)0.0);
HXDLIN(1548)										while(true){
HXLINE(1548)											int _hx_tmp;
HXDLIN(1548)											if (firstLineOfParagraph) {
HXLINE(1548)												_hx_tmp = indent;
            											}
            											else {
HXLINE(1548)												_hx_tmp = 0;
            											}
HXDLIN(1548)											if (!(((offsetX + positionWidth) < (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) ))))) {
HXLINE(1548)												goto _hx_goto_52;
            											}
HXDLIN(1548)											currentPosition = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1548)											if ((currentPosition->advance->x == ((Float)0.0))) {
HXLINE(1548)												i = (i + 1);
HXDLIN(1548)												bufferCount = (bufferCount + 1);
            											}
            											else {
HXLINE(1548)												positionWidth = (positionWidth + currentPosition->advance->x);
HXDLIN(1548)												i = (i + 1);
            											}
            										}
            										_hx_goto_52:;
HXDLIN(1548)										if ((i == bufferCount)) {
HXLINE(1548)											i = (bufferCount + 1);
            										}
            										else {
HXLINE(1548)											while(true){
HXLINE(1548)												bool _hx_tmp;
HXDLIN(1548)												if ((i > 1)) {
HXLINE(1548)													int _hx_tmp1;
HXDLIN(1548)													if (firstLineOfParagraph) {
HXLINE(1548)														_hx_tmp1 = indent;
            													}
            													else {
HXLINE(1548)														_hx_tmp1 = 0;
            													}
HXDLIN(1548)													_hx_tmp = ((offsetX + positionWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            												}
            												else {
HXLINE(1548)													_hx_tmp = false;
            												}
HXDLIN(1548)												if (!(_hx_tmp)) {
HXLINE(1548)													goto _hx_goto_53;
            												}
HXDLIN(1548)												i = (i - 1);
HXDLIN(1548)												if (((i - bufferCount) > 0)) {
HXLINE(1548)													{
HXLINE(1548)														int endIndex = ((textIndex + i) - bufferCount);
HXDLIN(1548)														if ((textIndex >= endIndex)) {
HXLINE(1548)															positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1548)															widthValue = ( (Float)(0) );
            														}
            														else {
HXLINE(1548)															if ((endIndex <= formatRange->end)) {
HXLINE(1548)																::String text = _gthis->text;
HXDLIN(1548)																Float letterSpacing = ((Float)0.0);
HXDLIN(1548)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1548)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1548)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1548)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1548)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1548)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1548)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1548)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1548)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1548)																bool positions1;
HXDLIN(1548)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1548)																	positions1 = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1548)																	positions1 = true;
            																}
HXDLIN(1548)																_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1548)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1548)																_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1548)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1548)																	positions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1548)																	positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1548)																Float width = ((Float)0.0);
HXDLIN(1548)																{
HXLINE(1548)																	int _g = 0;
HXDLIN(1548)																	while((_g < positions->length)){
HXLINE(1548)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1548)																		_g = (_g + 1);
HXDLIN(1548)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1548)																widthValue = width;
            															}
            															else {
HXLINE(1548)																int tempIndex = textIndex;
HXDLIN(1548)																int tempRangeEnd = formatRange->end;
HXDLIN(1548)																int countRanges = 0;
HXDLIN(1548)																positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1548)																widthValue = ( (Float)(0) );
HXDLIN(1548)																while(true){
HXLINE(1548)																	if ((tempIndex != tempRangeEnd)) {
HXLINE(1548)																		::String text = _gthis->text;
HXDLIN(1548)																		Float letterSpacing = ((Float)0.0);
HXDLIN(1548)																		if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1548)																			letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																		}
HXDLIN(1548)																		if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1548)																			_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																		}
HXDLIN(1548)																		_gthis->_hx___textLayout->set_text(null());
HXDLIN(1548)																		_gthis->_hx___textLayout->set_font(font);
HXDLIN(1548)																		if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1548)																			_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																		}
HXDLIN(1548)																		_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1548)																		bool _hx_tmp;
HXDLIN(1548)																		if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1548)																			_hx_tmp = (_gthis->sharpness < 400);
            																		}
            																		else {
HXLINE(1548)																			_hx_tmp = true;
            																		}
HXDLIN(1548)																		_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1548)																		 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1548)																		_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1548)																		::Array< ::Dynamic> tempPositions;
HXDLIN(1548)																		if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1548)																			tempPositions = _gthis->_hx___textLayout->get_positions();
            																		}
            																		else {
HXLINE(1548)																			tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																		}
HXDLIN(1548)																		positions = positions->concat(tempPositions);
            																	}
HXDLIN(1548)																	if ((tempRangeEnd != endIndex)) {
HXLINE(1548)																		bool _hx_tmp;
HXDLIN(1548)																		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1548)																			rangeIndex = (rangeIndex + 1);
HXDLIN(1548)																			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1548)																			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1548)																			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1548)																			_hx_tmp = true;
            																		}
            																		else {
HXLINE(1548)																			_hx_tmp = false;
            																		}
HXDLIN(1548)																		if (!(_hx_tmp)) {
HXLINE(1548)																			::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1121,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1548)																			goto _hx_goto_55;
            																		}
HXDLIN(1548)																		tempIndex = tempRangeEnd;
HXDLIN(1548)																		if ((endIndex < formatRange->end)) {
HXLINE(1548)																			tempRangeEnd = endIndex;
            																		}
            																		else {
HXLINE(1548)																			tempRangeEnd = formatRange->end;
            																		}
HXDLIN(1548)																		countRanges = (countRanges + 1);
            																	}
            																	else {
HXLINE(1548)																		Float width = ((Float)0.0);
HXDLIN(1548)																		{
HXLINE(1548)																			int _g = 0;
HXDLIN(1548)																			while((_g < positions->length)){
HXLINE(1548)																				 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1548)																				_g = (_g + 1);
HXDLIN(1548)																				width = (width + position->advance->x);
            																			}
            																		}
HXDLIN(1548)																		widthValue = width;
HXDLIN(1548)																		goto _hx_goto_55;
            																	}
            																}
            																_hx_goto_55:;
HXDLIN(1548)																rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1548)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1548)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1548)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1548)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1548)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            																}
            															}
            														}
            													}
HXDLIN(1548)													positionWidth = widthValue;
            												}
            												else {
HXLINE(1548)													i = 1;
HXDLIN(1548)													bufferCount = 0;
HXDLIN(1548)													{
HXLINE(1548)														int endIndex = (textIndex + 1);
HXDLIN(1548)														if ((textIndex >= endIndex)) {
HXLINE(1548)															positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1548)															widthValue = ( (Float)(0) );
            														}
            														else {
HXLINE(1548)															if ((endIndex <= formatRange->end)) {
HXLINE(1548)																::String text = _gthis->text;
HXDLIN(1548)																Float letterSpacing = ((Float)0.0);
HXDLIN(1548)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1548)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1548)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1548)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1548)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1548)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1548)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1548)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1548)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1548)																bool positions1;
HXDLIN(1548)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1548)																	positions1 = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1548)																	positions1 = true;
            																}
HXDLIN(1548)																_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1548)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1548)																_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1548)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1548)																	positions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1548)																	positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1548)																Float width = ((Float)0.0);
HXDLIN(1548)																{
HXLINE(1548)																	int _g = 0;
HXDLIN(1548)																	while((_g < positions->length)){
HXLINE(1548)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1548)																		_g = (_g + 1);
HXDLIN(1548)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1548)																widthValue = width;
            															}
            															else {
HXLINE(1548)																int tempIndex = textIndex;
HXDLIN(1548)																int tempRangeEnd = formatRange->end;
HXDLIN(1548)																int countRanges = 0;
HXDLIN(1548)																positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1548)																widthValue = ( (Float)(0) );
HXDLIN(1548)																while(true){
HXLINE(1548)																	if ((tempIndex != tempRangeEnd)) {
HXLINE(1548)																		::String text = _gthis->text;
HXDLIN(1548)																		Float letterSpacing = ((Float)0.0);
HXDLIN(1548)																		if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1548)																			letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																		}
HXDLIN(1548)																		if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1548)																			_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																		}
HXDLIN(1548)																		_gthis->_hx___textLayout->set_text(null());
HXDLIN(1548)																		_gthis->_hx___textLayout->set_font(font);
HXDLIN(1548)																		if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1548)																			_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																		}
HXDLIN(1548)																		_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1548)																		bool _hx_tmp;
HXDLIN(1548)																		if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1548)																			_hx_tmp = (_gthis->sharpness < 400);
            																		}
            																		else {
HXLINE(1548)																			_hx_tmp = true;
            																		}
HXDLIN(1548)																		_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1548)																		 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1548)																		_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1548)																		::Array< ::Dynamic> tempPositions;
HXDLIN(1548)																		if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1548)																			tempPositions = _gthis->_hx___textLayout->get_positions();
            																		}
            																		else {
HXLINE(1548)																			tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																		}
HXDLIN(1548)																		positions = positions->concat(tempPositions);
            																	}
HXDLIN(1548)																	if ((tempRangeEnd != endIndex)) {
HXLINE(1548)																		bool _hx_tmp;
HXDLIN(1548)																		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1548)																			rangeIndex = (rangeIndex + 1);
HXDLIN(1548)																			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1548)																			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1548)																			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1548)																			_hx_tmp = true;
            																		}
            																		else {
HXLINE(1548)																			_hx_tmp = false;
            																		}
HXDLIN(1548)																		if (!(_hx_tmp)) {
HXLINE(1548)																			::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1121,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1548)																			goto _hx_goto_58;
            																		}
HXDLIN(1548)																		tempIndex = tempRangeEnd;
HXDLIN(1548)																		if ((endIndex < formatRange->end)) {
HXLINE(1548)																			tempRangeEnd = endIndex;
            																		}
            																		else {
HXLINE(1548)																			tempRangeEnd = formatRange->end;
            																		}
HXDLIN(1548)																		countRanges = (countRanges + 1);
            																	}
            																	else {
HXLINE(1548)																		Float width = ((Float)0.0);
HXDLIN(1548)																		{
HXLINE(1548)																			int _g = 0;
HXDLIN(1548)																			while((_g < positions->length)){
HXLINE(1548)																				 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1548)																				_g = (_g + 1);
HXDLIN(1548)																				width = (width + position->advance->x);
            																			}
            																		}
HXDLIN(1548)																		widthValue = width;
HXDLIN(1548)																		goto _hx_goto_58;
            																	}
            																}
            																_hx_goto_58:;
HXDLIN(1548)																rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1548)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1548)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1548)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1548)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1548)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            																}
            															}
            														}
            													}
HXDLIN(1548)													positionWidth = ( (Float)(0) );
            												}
            											}
            											_hx_goto_53:;
            										}
HXDLIN(1548)										placeIndex = ((textIndex + i) - bufferCount);
HXDLIN(1548)										{
HXLINE(1548)											if ((placeIndex <= formatRange->end)) {
HXLINE(1548)												::String text = _gthis->text;
HXDLIN(1548)												Float letterSpacing = ((Float)0.0);
HXDLIN(1548)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1548)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1548)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1548)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1548)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1548)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1548)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1548)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1548)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1548)												bool positions1;
HXDLIN(1548)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1548)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1548)													positions1 = true;
            												}
HXDLIN(1548)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1548)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1548)												_gthis1->set_text(text.substring(textIndex,placeIndex));
HXDLIN(1548)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1548)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1548)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1548)												Float width = ((Float)0.0);
HXDLIN(1548)												{
HXLINE(1548)													int _g = 0;
HXDLIN(1548)													while((_g < positions->length)){
HXLINE(1548)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1548)														_g = (_g + 1);
HXDLIN(1548)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1548)												widthValue = width;
HXDLIN(1548)												bool _hx_tmp;
HXDLIN(1548)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1548)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1548)													_hx_tmp = true;
            												}
HXDLIN(1548)												if (_hx_tmp) {
HXLINE(1548)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,placeIndex);
HXDLIN(1548)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1548)													layoutGroup->format = formatRange->format;
HXDLIN(1548)													layoutGroup->startIndex = textIndex;
HXDLIN(1548)													layoutGroup->endIndex = placeIndex;
            												}
HXDLIN(1548)												layoutGroup->positions = positions;
HXDLIN(1548)												int _hx_tmp1;
HXDLIN(1548)												if (firstLineOfParagraph) {
HXLINE(1548)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1548)													_hx_tmp1 = 0;
            												}
HXDLIN(1548)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1548)												layoutGroup->ascent = ascent;
HXDLIN(1548)												layoutGroup->descent = descent;
HXDLIN(1548)												layoutGroup->leading = leading;
HXDLIN(1548)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1548)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1548)												layoutGroup->width = widthValue;
HXDLIN(1548)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1548)												offsetX = (offsetX + widthValue);
HXDLIN(1548)												if ((placeIndex == formatRange->end)) {
HXLINE(1548)													layoutGroup = null();
HXDLIN(1548)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1548)														rangeIndex = (rangeIndex + 1);
HXDLIN(1548)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1548)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1548)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            													}
HXDLIN(1548)													{
HXLINE(1548)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1548)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1548)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1548)															bool _hx_tmp;
HXDLIN(1548)															if (::hx::IsNotNull( font )) {
HXLINE(1548)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1548)																_hx_tmp = false;
            															}
HXDLIN(1548)															if (_hx_tmp) {
HXLINE(1548)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1548)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1548)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1548)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1548)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1548)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1548)														if ((heightValue > maxHeightValue)) {
HXLINE(1548)															maxHeightValue = heightValue;
            														}
HXDLIN(1548)														if ((ascent > maxAscent)) {
HXLINE(1548)															maxAscent = ascent;
            														}
            													}
            												}
            											}
            											else {
HXLINE(1548)												while(true){
HXLINE(1548)													int tempRangeEnd;
HXDLIN(1548)													if ((placeIndex < formatRange->end)) {
HXLINE(1548)														tempRangeEnd = placeIndex;
            													}
            													else {
HXLINE(1548)														tempRangeEnd = formatRange->end;
            													}
HXDLIN(1548)													if ((textIndex != tempRangeEnd)) {
HXLINE(1548)														::String text = _gthis->text;
HXDLIN(1548)														Float letterSpacing = ((Float)0.0);
HXDLIN(1548)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1548)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1548)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1548)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1548)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1548)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1548)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1548)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1548)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1548)														bool positions1;
HXDLIN(1548)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1548)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1548)															positions1 = true;
            														}
HXDLIN(1548)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1548)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1548)														_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1548)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1548)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1548)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1548)														Float width = ((Float)0.0);
HXDLIN(1548)														{
HXLINE(1548)															int _g = 0;
HXDLIN(1548)															while((_g < positions->length)){
HXLINE(1548)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1548)																_g = (_g + 1);
HXDLIN(1548)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1548)														widthValue = width;
HXDLIN(1548)														bool _hx_tmp;
HXDLIN(1548)														if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1548)															_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            														}
            														else {
HXLINE(1548)															_hx_tmp = true;
            														}
HXDLIN(1548)														if (_hx_tmp) {
HXLINE(1548)															layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1548)															_gthis->layoutGroups->push(layoutGroup);
            														}
            														else {
HXLINE(1548)															layoutGroup->format = formatRange->format;
HXDLIN(1548)															layoutGroup->startIndex = textIndex;
HXDLIN(1548)															layoutGroup->endIndex = tempRangeEnd;
            														}
HXDLIN(1548)														layoutGroup->positions = positions;
HXDLIN(1548)														int _hx_tmp1;
HXDLIN(1548)														if (firstLineOfParagraph) {
HXLINE(1548)															_hx_tmp1 = indent;
            														}
            														else {
HXLINE(1548)															_hx_tmp1 = 0;
            														}
HXDLIN(1548)														layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1548)														layoutGroup->ascent = ascent;
HXDLIN(1548)														layoutGroup->descent = descent;
HXDLIN(1548)														layoutGroup->leading = leading;
HXDLIN(1548)														layoutGroup->lineIndex = lineIndex;
HXDLIN(1548)														layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1548)														layoutGroup->width = widthValue;
HXDLIN(1548)														layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1548)														offsetX = (offsetX + widthValue);
HXDLIN(1548)														textIndex = tempRangeEnd;
            													}
HXDLIN(1548)													if ((tempRangeEnd == formatRange->end)) {
HXLINE(1548)														layoutGroup = null();
            													}
HXDLIN(1548)													if ((tempRangeEnd == placeIndex)) {
HXLINE(1548)														goto _hx_goto_61;
            													}
HXDLIN(1548)													bool _hx_tmp;
HXDLIN(1548)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1548)														rangeIndex = (rangeIndex + 1);
HXDLIN(1548)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1548)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1548)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1548)														_hx_tmp = true;
            													}
            													else {
HXLINE(1548)														_hx_tmp = false;
            													}
HXDLIN(1548)													if (!(_hx_tmp)) {
HXLINE(1548)														::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1209,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1548)														goto _hx_goto_61;
            													}
HXDLIN(1548)													{
HXLINE(1548)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1548)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1548)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1548)															bool _hx_tmp;
HXDLIN(1548)															if (::hx::IsNotNull( font )) {
HXLINE(1548)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1548)																_hx_tmp = false;
            															}
HXDLIN(1548)															if (_hx_tmp) {
HXLINE(1548)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1548)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1548)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1548)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1548)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1548)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1548)														if ((heightValue > maxHeightValue)) {
HXLINE(1548)															maxHeightValue = heightValue;
            														}
HXDLIN(1548)														if ((ascent > maxAscent)) {
HXLINE(1548)															maxAscent = ascent;
            														}
            													}
            												}
            												_hx_goto_61:;
            											}
HXDLIN(1548)											textIndex = placeIndex;
            										}
HXDLIN(1548)										{
HXLINE(1548)											{
HXLINE(1548)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1548)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1548)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1548)													bool _hx_tmp;
HXDLIN(1548)													if (::hx::IsNotNull( font )) {
HXLINE(1548)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1548)														_hx_tmp = false;
            													}
HXDLIN(1548)													if (_hx_tmp) {
HXLINE(1548)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1548)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1548)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1548)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1548)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1548)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1548)												if ((heightValue > maxHeightValue)) {
HXLINE(1548)													maxHeightValue = heightValue;
            												}
HXDLIN(1548)												if ((ascent > maxAscent)) {
HXLINE(1548)													maxAscent = ascent;
            												}
            											}
HXDLIN(1548)											int i1 = _gthis->layoutGroups->get_length();
HXDLIN(1548)											while(true){
HXLINE(1548)												i1 = (i1 - 1);
HXDLIN(1548)												if (!((i1 > -1))) {
HXLINE(1548)													goto _hx_goto_63;
            												}
HXDLIN(1548)												 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i1).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1548)												if ((lg->lineIndex < lineIndex)) {
HXLINE(1548)													goto _hx_goto_63;
            												}
HXDLIN(1548)												if ((lg->lineIndex > lineIndex)) {
HXLINE(1548)													continue;
            												}
HXDLIN(1548)												lg->ascent = maxAscent;
HXDLIN(1548)												lg->height = ( (Float)(maxHeightValue) );
            											}
            											_hx_goto_63:;
HXDLIN(1548)											offsetY = (offsetY + maxHeightValue);
HXDLIN(1548)											maxAscent = ((Float)0.0);
HXDLIN(1548)											maxHeightValue = 0;
HXDLIN(1548)											lineIndex = (lineIndex + 1);
HXDLIN(1548)											offsetX = ( (Float)(0) );
HXDLIN(1548)											firstLineOfParagraph = false;
            										}
HXDLIN(1548)										if ((placeIndex >= endIndex)) {
HXLINE(1548)											positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1548)											widthValue = ( (Float)(0) );
            										}
            										else {
HXLINE(1548)											if ((endIndex <= formatRange->end)) {
HXLINE(1548)												::String text = _gthis->text;
HXDLIN(1548)												Float letterSpacing = ((Float)0.0);
HXDLIN(1548)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1548)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1548)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1548)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1548)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1548)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1548)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1548)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1548)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1548)												bool positions1;
HXDLIN(1548)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1548)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1548)													positions1 = true;
            												}
HXDLIN(1548)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1548)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1548)												_gthis1->set_text(text.substring(placeIndex,endIndex));
HXDLIN(1548)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1548)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1548)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1548)												Float width = ((Float)0.0);
HXDLIN(1548)												{
HXLINE(1548)													int _g = 0;
HXDLIN(1548)													while((_g < positions->length)){
HXLINE(1548)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1548)														_g = (_g + 1);
HXDLIN(1548)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1548)												widthValue = width;
            											}
            											else {
HXLINE(1548)												int tempIndex = placeIndex;
HXDLIN(1548)												int tempRangeEnd = formatRange->end;
HXDLIN(1548)												int countRanges = 0;
HXDLIN(1548)												positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1548)												widthValue = ( (Float)(0) );
HXDLIN(1548)												while(true){
HXLINE(1548)													if ((tempIndex != tempRangeEnd)) {
HXLINE(1548)														::String text = _gthis->text;
HXDLIN(1548)														Float letterSpacing = ((Float)0.0);
HXDLIN(1548)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1548)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1548)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1548)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1548)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1548)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1548)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1548)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1548)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1548)														bool _hx_tmp;
HXDLIN(1548)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1548)															_hx_tmp = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1548)															_hx_tmp = true;
            														}
HXDLIN(1548)														_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1548)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1548)														_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1548)														::Array< ::Dynamic> tempPositions;
HXDLIN(1548)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1548)															tempPositions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1548)															tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1548)														positions = positions->concat(tempPositions);
            													}
HXDLIN(1548)													if ((tempRangeEnd != endIndex)) {
HXLINE(1548)														bool _hx_tmp;
HXDLIN(1548)														if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1548)															rangeIndex = (rangeIndex + 1);
HXDLIN(1548)															formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1548)															currentFormat->_hx___merge(formatRange->format);
HXDLIN(1548)															font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1548)															_hx_tmp = true;
            														}
            														else {
HXLINE(1548)															_hx_tmp = false;
            														}
HXDLIN(1548)														if (!(_hx_tmp)) {
HXLINE(1548)															::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1121,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1548)															goto _hx_goto_65;
            														}
HXDLIN(1548)														tempIndex = tempRangeEnd;
HXDLIN(1548)														if ((endIndex < formatRange->end)) {
HXLINE(1548)															tempRangeEnd = endIndex;
            														}
            														else {
HXLINE(1548)															tempRangeEnd = formatRange->end;
            														}
HXDLIN(1548)														countRanges = (countRanges + 1);
            													}
            													else {
HXLINE(1548)														Float width = ((Float)0.0);
HXDLIN(1548)														{
HXLINE(1548)															int _g = 0;
HXDLIN(1548)															while((_g < positions->length)){
HXLINE(1548)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1548)																_g = (_g + 1);
HXDLIN(1548)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1548)														widthValue = width;
HXDLIN(1548)														goto _hx_goto_65;
            													}
            												}
            												_hx_goto_65:;
HXDLIN(1548)												rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1548)												if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1548)													rangeIndex = (rangeIndex + 1);
HXDLIN(1548)													formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1548)													currentFormat->_hx___merge(formatRange->format);
HXDLIN(1548)													font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            												}
            											}
            										}
HXDLIN(1548)										remainingPositions = positions;
HXDLIN(1548)										tempWidth = widthValue;
            									}
            									_hx_goto_51:;
            								}
HXDLIN(1548)								{
HXLINE(1548)									if ((endIndex <= formatRange->end)) {
HXLINE(1548)										::String text = _gthis->text;
HXDLIN(1548)										Float letterSpacing = ((Float)0.0);
HXDLIN(1548)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1548)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1548)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1548)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1548)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1548)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1548)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1548)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1548)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1548)										bool positions1;
HXDLIN(1548)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1548)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1548)											positions1 = true;
            										}
HXDLIN(1548)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1548)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1548)										_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1548)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1548)											positions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1548)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXDLIN(1548)										Float width = ((Float)0.0);
HXDLIN(1548)										{
HXLINE(1548)											int _g = 0;
HXDLIN(1548)											while((_g < positions->length)){
HXLINE(1548)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1548)												_g = (_g + 1);
HXDLIN(1548)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1548)										widthValue = width;
HXDLIN(1548)										bool _hx_tmp;
HXDLIN(1548)										if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1548)											_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            										}
            										else {
HXLINE(1548)											_hx_tmp = true;
            										}
HXDLIN(1548)										if (_hx_tmp) {
HXLINE(1548)											layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,endIndex);
HXDLIN(1548)											_gthis->layoutGroups->push(layoutGroup);
            										}
            										else {
HXLINE(1548)											layoutGroup->format = formatRange->format;
HXDLIN(1548)											layoutGroup->startIndex = textIndex;
HXDLIN(1548)											layoutGroup->endIndex = endIndex;
            										}
HXDLIN(1548)										layoutGroup->positions = positions;
HXDLIN(1548)										int _hx_tmp1;
HXDLIN(1548)										if (firstLineOfParagraph) {
HXLINE(1548)											_hx_tmp1 = indent;
            										}
            										else {
HXLINE(1548)											_hx_tmp1 = 0;
            										}
HXDLIN(1548)										layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1548)										layoutGroup->ascent = ascent;
HXDLIN(1548)										layoutGroup->descent = descent;
HXDLIN(1548)										layoutGroup->leading = leading;
HXDLIN(1548)										layoutGroup->lineIndex = lineIndex;
HXDLIN(1548)										layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1548)										layoutGroup->width = widthValue;
HXDLIN(1548)										layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1548)										offsetX = (offsetX + widthValue);
HXDLIN(1548)										if ((endIndex == formatRange->end)) {
HXLINE(1548)											layoutGroup = null();
HXDLIN(1548)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1548)												rangeIndex = (rangeIndex + 1);
HXDLIN(1548)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1548)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1548)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            											}
HXDLIN(1548)											{
HXLINE(1548)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1548)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1548)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1548)													bool _hx_tmp;
HXDLIN(1548)													if (::hx::IsNotNull( font )) {
HXLINE(1548)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1548)														_hx_tmp = false;
            													}
HXDLIN(1548)													if (_hx_tmp) {
HXLINE(1548)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1548)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1548)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1548)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1548)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1548)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1548)												if ((heightValue > maxHeightValue)) {
HXLINE(1548)													maxHeightValue = heightValue;
            												}
HXDLIN(1548)												if ((ascent > maxAscent)) {
HXLINE(1548)													maxAscent = ascent;
            												}
            											}
            										}
            									}
            									else {
HXLINE(1548)										while(true){
HXLINE(1548)											int tempRangeEnd;
HXDLIN(1548)											if ((endIndex < formatRange->end)) {
HXLINE(1548)												tempRangeEnd = endIndex;
            											}
            											else {
HXLINE(1548)												tempRangeEnd = formatRange->end;
            											}
HXDLIN(1548)											if ((textIndex != tempRangeEnd)) {
HXLINE(1548)												::String text = _gthis->text;
HXDLIN(1548)												Float letterSpacing = ((Float)0.0);
HXDLIN(1548)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1548)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1548)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1548)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1548)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1548)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1548)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1548)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1548)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1548)												bool positions1;
HXDLIN(1548)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1548)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1548)													positions1 = true;
            												}
HXDLIN(1548)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1548)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1548)												_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1548)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1548)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1548)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1548)												Float width = ((Float)0.0);
HXDLIN(1548)												{
HXLINE(1548)													int _g = 0;
HXDLIN(1548)													while((_g < positions->length)){
HXLINE(1548)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1548)														_g = (_g + 1);
HXDLIN(1548)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1548)												widthValue = width;
HXDLIN(1548)												bool _hx_tmp;
HXDLIN(1548)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1548)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1548)													_hx_tmp = true;
            												}
HXDLIN(1548)												if (_hx_tmp) {
HXLINE(1548)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1548)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1548)													layoutGroup->format = formatRange->format;
HXDLIN(1548)													layoutGroup->startIndex = textIndex;
HXDLIN(1548)													layoutGroup->endIndex = tempRangeEnd;
            												}
HXDLIN(1548)												layoutGroup->positions = positions;
HXDLIN(1548)												int _hx_tmp1;
HXDLIN(1548)												if (firstLineOfParagraph) {
HXLINE(1548)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1548)													_hx_tmp1 = 0;
            												}
HXDLIN(1548)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1548)												layoutGroup->ascent = ascent;
HXDLIN(1548)												layoutGroup->descent = descent;
HXDLIN(1548)												layoutGroup->leading = leading;
HXDLIN(1548)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1548)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1548)												layoutGroup->width = widthValue;
HXDLIN(1548)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1548)												offsetX = (offsetX + widthValue);
HXDLIN(1548)												textIndex = tempRangeEnd;
            											}
HXDLIN(1548)											if ((tempRangeEnd == formatRange->end)) {
HXLINE(1548)												layoutGroup = null();
            											}
HXDLIN(1548)											if ((tempRangeEnd == endIndex)) {
HXLINE(1548)												goto _hx_goto_68;
            											}
HXDLIN(1548)											bool _hx_tmp;
HXDLIN(1548)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1548)												rangeIndex = (rangeIndex + 1);
HXDLIN(1548)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1548)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1548)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1548)												_hx_tmp = true;
            											}
            											else {
HXLINE(1548)												_hx_tmp = false;
            											}
HXDLIN(1548)											if (!(_hx_tmp)) {
HXLINE(1548)												::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1209,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1548)												goto _hx_goto_68;
            											}
HXDLIN(1548)											{
HXLINE(1548)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1548)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1548)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1548)													bool _hx_tmp;
HXDLIN(1548)													if (::hx::IsNotNull( font )) {
HXLINE(1548)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1548)														_hx_tmp = false;
            													}
HXDLIN(1548)													if (_hx_tmp) {
HXLINE(1548)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1548)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1548)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1548)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1548)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1548)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1548)												if ((heightValue > maxHeightValue)) {
HXLINE(1548)													maxHeightValue = heightValue;
            												}
HXDLIN(1548)												if ((ascent > maxAscent)) {
HXLINE(1548)													maxAscent = ascent;
            												}
            											}
            										}
            										_hx_goto_68:;
            									}
HXDLIN(1548)									textIndex = endIndex;
            								}
            							}
HXLINE(1550)							wrap = false;
            						}
            						else {
HXLINE(1554)							bool _hx_tmp;
HXDLIN(1554)							bool _hx_tmp1;
HXDLIN(1554)							if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1554)								_hx_tmp1 = (textIndex == spaceIndex);
            							}
            							else {
HXLINE(1554)								_hx_tmp1 = false;
            							}
HXDLIN(1554)							if (_hx_tmp1) {
HXLINE(1554)								_hx_tmp = (previousSpaceIndex != (spaceIndex - 1));
            							}
            							else {
HXLINE(1554)								_hx_tmp = false;
            							}
HXDLIN(1554)							if (_hx_tmp) {
HXLINE(1557)								if (::hx::IsNotEq( align,2 )) {
HXLINE(1559)									layoutGroup->endIndex = spaceIndex;
HXLINE(1560)									layoutGroup->positions = layoutGroup->positions->concat(positions);
HXLINE(1561)									 ::openfl::text::_internal::TextLayoutGroup layoutGroup1 = layoutGroup;
HXDLIN(1561)									layoutGroup1->width = (layoutGroup1->width + widthValue);
            								}
HXLINE(1563)								offsetX = (offsetX + widthValue);
HXLINE(1565)								textIndex = endIndex;
            							}
            							else {
HXLINE(1567)								bool _hx_tmp;
HXDLIN(1567)								if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1567)									_hx_tmp = ::hx::IsEq( align,2 );
            								}
            								else {
HXLINE(1567)									_hx_tmp = true;
            								}
HXDLIN(1567)								if (_hx_tmp) {
HXLINE(1569)									{
HXLINE(1569)										bool _hx_tmp;
HXDLIN(1569)										if ((_gthis->width >= 4)) {
HXLINE(1569)											_hx_tmp = _gthis->wordWrap;
            										}
            										else {
HXLINE(1569)											_hx_tmp = false;
            										}
HXDLIN(1569)										if (_hx_tmp) {
HXLINE(1569)											::Array< ::Dynamic> remainingPositions = positions;
HXDLIN(1569)											int bufferCount;
HXDLIN(1569)											int placeIndex;
HXDLIN(1569)											Float positionWidth;
HXDLIN(1569)											 ::openfl::text::_internal::GlyphPosition currentPosition;
HXDLIN(1569)											Float width = ((Float)0.0);
HXDLIN(1569)											{
HXLINE(1569)												int _g = 0;
HXDLIN(1569)												while((_g < remainingPositions->length)){
HXLINE(1569)													 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1569)													_g = (_g + 1);
HXDLIN(1569)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1569)											Float tempWidth = width;
HXDLIN(1569)											int i = (remainingPositions->length - 1);
HXDLIN(1569)											while((i >= 0)){
HXLINE(1569)												 ::Dynamic currentCharCode = _gthis->text.charCodeAt((textIndex + i));
HXDLIN(1569)												bool _hx_tmp;
HXDLIN(1569)												if (::hx::IsNotEq( currentCharCode,32 )) {
HXLINE(1569)													_hx_tmp = ::hx::IsNotEq( currentCharCode,9 );
            												}
            												else {
HXLINE(1569)													_hx_tmp = false;
            												}
HXDLIN(1569)												if (_hx_tmp) {
HXLINE(1569)													goto _hx_goto_71;
            												}
HXDLIN(1569)												 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1569)												tempWidth = (tempWidth - position->advance->x);
HXDLIN(1569)												i = (i - 1);
            											}
            											_hx_goto_71:;
HXDLIN(1569)											while(true){
HXLINE(1569)												bool _hx_tmp;
HXDLIN(1569)												if ((remainingPositions->length > 0)) {
HXLINE(1569)													int _hx_tmp1;
HXDLIN(1569)													if (firstLineOfParagraph) {
HXLINE(1569)														_hx_tmp1 = indent;
            													}
            													else {
HXLINE(1569)														_hx_tmp1 = 0;
            													}
HXDLIN(1569)													_hx_tmp = ((offsetX + tempWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            												}
            												else {
HXLINE(1569)													_hx_tmp = false;
            												}
HXDLIN(1569)												if (!(_hx_tmp)) {
HXLINE(1569)													goto _hx_goto_72;
            												}
HXDLIN(1569)												bufferCount = 0;
HXDLIN(1569)												i = bufferCount;
HXDLIN(1569)												positionWidth = ((Float)0.0);
HXDLIN(1569)												while(true){
HXLINE(1569)													int _hx_tmp;
HXDLIN(1569)													if (firstLineOfParagraph) {
HXLINE(1569)														_hx_tmp = indent;
            													}
            													else {
HXLINE(1569)														_hx_tmp = 0;
            													}
HXDLIN(1569)													if (!(((offsetX + positionWidth) < (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) ))))) {
HXLINE(1569)														goto _hx_goto_73;
            													}
HXDLIN(1569)													currentPosition = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1569)													if ((currentPosition->advance->x == ((Float)0.0))) {
HXLINE(1569)														i = (i + 1);
HXDLIN(1569)														bufferCount = (bufferCount + 1);
            													}
            													else {
HXLINE(1569)														positionWidth = (positionWidth + currentPosition->advance->x);
HXDLIN(1569)														i = (i + 1);
            													}
            												}
            												_hx_goto_73:;
HXDLIN(1569)												if ((i == bufferCount)) {
HXLINE(1569)													i = (bufferCount + 1);
            												}
            												else {
HXLINE(1569)													while(true){
HXLINE(1569)														bool _hx_tmp;
HXDLIN(1569)														if ((i > 1)) {
HXLINE(1569)															int _hx_tmp1;
HXDLIN(1569)															if (firstLineOfParagraph) {
HXLINE(1569)																_hx_tmp1 = indent;
            															}
            															else {
HXLINE(1569)																_hx_tmp1 = 0;
            															}
HXDLIN(1569)															_hx_tmp = ((offsetX + positionWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            														}
            														else {
HXLINE(1569)															_hx_tmp = false;
            														}
HXDLIN(1569)														if (!(_hx_tmp)) {
HXLINE(1569)															goto _hx_goto_74;
            														}
HXDLIN(1569)														i = (i - 1);
HXDLIN(1569)														if (((i - bufferCount) > 0)) {
HXLINE(1569)															{
HXLINE(1569)																int endIndex = ((textIndex + i) - bufferCount);
HXDLIN(1569)																if ((textIndex >= endIndex)) {
HXLINE(1569)																	positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1569)																	widthValue = ( (Float)(0) );
            																}
            																else {
HXLINE(1569)																	if ((endIndex <= formatRange->end)) {
HXLINE(1569)																		::String text = _gthis->text;
HXDLIN(1569)																		Float letterSpacing = ((Float)0.0);
HXDLIN(1569)																		if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1569)																			letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																		}
HXDLIN(1569)																		if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1569)																			_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																		}
HXDLIN(1569)																		_gthis->_hx___textLayout->set_text(null());
HXDLIN(1569)																		_gthis->_hx___textLayout->set_font(font);
HXDLIN(1569)																		if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1569)																			_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																		}
HXDLIN(1569)																		_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1569)																		bool positions1;
HXDLIN(1569)																		if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1569)																			positions1 = (_gthis->sharpness < 400);
            																		}
            																		else {
HXLINE(1569)																			positions1 = true;
            																		}
HXDLIN(1569)																		_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1569)																		 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1569)																		_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1569)																		if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1569)																			positions = _gthis->_hx___textLayout->get_positions();
            																		}
            																		else {
HXLINE(1569)																			positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																		}
HXDLIN(1569)																		Float width = ((Float)0.0);
HXDLIN(1569)																		{
HXLINE(1569)																			int _g = 0;
HXDLIN(1569)																			while((_g < positions->length)){
HXLINE(1569)																				 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1569)																				_g = (_g + 1);
HXDLIN(1569)																				width = (width + position->advance->x);
            																			}
            																		}
HXDLIN(1569)																		widthValue = width;
            																	}
            																	else {
HXLINE(1569)																		int tempIndex = textIndex;
HXDLIN(1569)																		int tempRangeEnd = formatRange->end;
HXDLIN(1569)																		int countRanges = 0;
HXDLIN(1569)																		positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1569)																		widthValue = ( (Float)(0) );
HXDLIN(1569)																		while(true){
HXLINE(1569)																			if ((tempIndex != tempRangeEnd)) {
HXLINE(1569)																				::String text = _gthis->text;
HXDLIN(1569)																				Float letterSpacing = ((Float)0.0);
HXDLIN(1569)																				if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1569)																					letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																				}
HXDLIN(1569)																				if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1569)																					_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																				}
HXDLIN(1569)																				_gthis->_hx___textLayout->set_text(null());
HXDLIN(1569)																				_gthis->_hx___textLayout->set_font(font);
HXDLIN(1569)																				if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1569)																					_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																				}
HXDLIN(1569)																				_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1569)																				bool _hx_tmp;
HXDLIN(1569)																				if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1569)																					_hx_tmp = (_gthis->sharpness < 400);
            																				}
            																				else {
HXLINE(1569)																					_hx_tmp = true;
            																				}
HXDLIN(1569)																				_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1569)																				 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1569)																				_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1569)																				::Array< ::Dynamic> tempPositions;
HXDLIN(1569)																				if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1569)																					tempPositions = _gthis->_hx___textLayout->get_positions();
            																				}
            																				else {
HXLINE(1569)																					tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																				}
HXDLIN(1569)																				positions = positions->concat(tempPositions);
            																			}
HXDLIN(1569)																			if ((tempRangeEnd != endIndex)) {
HXLINE(1569)																				bool _hx_tmp;
HXDLIN(1569)																				if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1569)																					rangeIndex = (rangeIndex + 1);
HXDLIN(1569)																					formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1569)																					currentFormat->_hx___merge(formatRange->format);
HXDLIN(1569)																					font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1569)																					_hx_tmp = true;
            																				}
            																				else {
HXLINE(1569)																					_hx_tmp = false;
            																				}
HXDLIN(1569)																				if (!(_hx_tmp)) {
HXLINE(1569)																					::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1121,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1569)																					goto _hx_goto_76;
            																				}
HXDLIN(1569)																				tempIndex = tempRangeEnd;
HXDLIN(1569)																				if ((endIndex < formatRange->end)) {
HXLINE(1569)																					tempRangeEnd = endIndex;
            																				}
            																				else {
HXLINE(1569)																					tempRangeEnd = formatRange->end;
            																				}
HXDLIN(1569)																				countRanges = (countRanges + 1);
            																			}
            																			else {
HXLINE(1569)																				Float width = ((Float)0.0);
HXDLIN(1569)																				{
HXLINE(1569)																					int _g = 0;
HXDLIN(1569)																					while((_g < positions->length)){
HXLINE(1569)																						 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1569)																						_g = (_g + 1);
HXDLIN(1569)																						width = (width + position->advance->x);
            																					}
            																				}
HXDLIN(1569)																				widthValue = width;
HXDLIN(1569)																				goto _hx_goto_76;
            																			}
            																		}
            																		_hx_goto_76:;
HXDLIN(1569)																		rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1569)																		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1569)																			rangeIndex = (rangeIndex + 1);
HXDLIN(1569)																			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1569)																			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1569)																			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            																		}
            																	}
            																}
            															}
HXDLIN(1569)															positionWidth = widthValue;
            														}
            														else {
HXLINE(1569)															i = 1;
HXDLIN(1569)															bufferCount = 0;
HXDLIN(1569)															{
HXLINE(1569)																int endIndex = (textIndex + 1);
HXDLIN(1569)																if ((textIndex >= endIndex)) {
HXLINE(1569)																	positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1569)																	widthValue = ( (Float)(0) );
            																}
            																else {
HXLINE(1569)																	if ((endIndex <= formatRange->end)) {
HXLINE(1569)																		::String text = _gthis->text;
HXDLIN(1569)																		Float letterSpacing = ((Float)0.0);
HXDLIN(1569)																		if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1569)																			letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																		}
HXDLIN(1569)																		if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1569)																			_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																		}
HXDLIN(1569)																		_gthis->_hx___textLayout->set_text(null());
HXDLIN(1569)																		_gthis->_hx___textLayout->set_font(font);
HXDLIN(1569)																		if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1569)																			_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																		}
HXDLIN(1569)																		_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1569)																		bool positions1;
HXDLIN(1569)																		if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1569)																			positions1 = (_gthis->sharpness < 400);
            																		}
            																		else {
HXLINE(1569)																			positions1 = true;
            																		}
HXDLIN(1569)																		_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1569)																		 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1569)																		_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1569)																		if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1569)																			positions = _gthis->_hx___textLayout->get_positions();
            																		}
            																		else {
HXLINE(1569)																			positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																		}
HXDLIN(1569)																		Float width = ((Float)0.0);
HXDLIN(1569)																		{
HXLINE(1569)																			int _g = 0;
HXDLIN(1569)																			while((_g < positions->length)){
HXLINE(1569)																				 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1569)																				_g = (_g + 1);
HXDLIN(1569)																				width = (width + position->advance->x);
            																			}
            																		}
HXDLIN(1569)																		widthValue = width;
            																	}
            																	else {
HXLINE(1569)																		int tempIndex = textIndex;
HXDLIN(1569)																		int tempRangeEnd = formatRange->end;
HXDLIN(1569)																		int countRanges = 0;
HXDLIN(1569)																		positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1569)																		widthValue = ( (Float)(0) );
HXDLIN(1569)																		while(true){
HXLINE(1569)																			if ((tempIndex != tempRangeEnd)) {
HXLINE(1569)																				::String text = _gthis->text;
HXDLIN(1569)																				Float letterSpacing = ((Float)0.0);
HXDLIN(1569)																				if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1569)																					letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																				}
HXDLIN(1569)																				if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1569)																					_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																				}
HXDLIN(1569)																				_gthis->_hx___textLayout->set_text(null());
HXDLIN(1569)																				_gthis->_hx___textLayout->set_font(font);
HXDLIN(1569)																				if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1569)																					_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																				}
HXDLIN(1569)																				_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1569)																				bool _hx_tmp;
HXDLIN(1569)																				if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1569)																					_hx_tmp = (_gthis->sharpness < 400);
            																				}
            																				else {
HXLINE(1569)																					_hx_tmp = true;
            																				}
HXDLIN(1569)																				_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1569)																				 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1569)																				_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1569)																				::Array< ::Dynamic> tempPositions;
HXDLIN(1569)																				if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1569)																					tempPositions = _gthis->_hx___textLayout->get_positions();
            																				}
            																				else {
HXLINE(1569)																					tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																				}
HXDLIN(1569)																				positions = positions->concat(tempPositions);
            																			}
HXDLIN(1569)																			if ((tempRangeEnd != endIndex)) {
HXLINE(1569)																				bool _hx_tmp;
HXDLIN(1569)																				if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1569)																					rangeIndex = (rangeIndex + 1);
HXDLIN(1569)																					formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1569)																					currentFormat->_hx___merge(formatRange->format);
HXDLIN(1569)																					font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1569)																					_hx_tmp = true;
            																				}
            																				else {
HXLINE(1569)																					_hx_tmp = false;
            																				}
HXDLIN(1569)																				if (!(_hx_tmp)) {
HXLINE(1569)																					::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1121,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1569)																					goto _hx_goto_79;
            																				}
HXDLIN(1569)																				tempIndex = tempRangeEnd;
HXDLIN(1569)																				if ((endIndex < formatRange->end)) {
HXLINE(1569)																					tempRangeEnd = endIndex;
            																				}
            																				else {
HXLINE(1569)																					tempRangeEnd = formatRange->end;
            																				}
HXDLIN(1569)																				countRanges = (countRanges + 1);
            																			}
            																			else {
HXLINE(1569)																				Float width = ((Float)0.0);
HXDLIN(1569)																				{
HXLINE(1569)																					int _g = 0;
HXDLIN(1569)																					while((_g < positions->length)){
HXLINE(1569)																						 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1569)																						_g = (_g + 1);
HXDLIN(1569)																						width = (width + position->advance->x);
            																					}
            																				}
HXDLIN(1569)																				widthValue = width;
HXDLIN(1569)																				goto _hx_goto_79;
            																			}
            																		}
            																		_hx_goto_79:;
HXDLIN(1569)																		rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1569)																		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1569)																			rangeIndex = (rangeIndex + 1);
HXDLIN(1569)																			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1569)																			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1569)																			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            																		}
            																	}
            																}
            															}
HXDLIN(1569)															positionWidth = ( (Float)(0) );
            														}
            													}
            													_hx_goto_74:;
            												}
HXDLIN(1569)												placeIndex = ((textIndex + i) - bufferCount);
HXDLIN(1569)												{
HXLINE(1569)													if ((placeIndex <= formatRange->end)) {
HXLINE(1569)														::String text = _gthis->text;
HXDLIN(1569)														Float letterSpacing = ((Float)0.0);
HXDLIN(1569)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1569)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1569)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1569)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1569)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1569)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1569)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1569)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1569)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1569)														bool positions1;
HXDLIN(1569)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1569)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1569)															positions1 = true;
            														}
HXDLIN(1569)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1569)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1569)														_gthis1->set_text(text.substring(textIndex,placeIndex));
HXDLIN(1569)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1569)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1569)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1569)														Float width = ((Float)0.0);
HXDLIN(1569)														{
HXLINE(1569)															int _g = 0;
HXDLIN(1569)															while((_g < positions->length)){
HXLINE(1569)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1569)																_g = (_g + 1);
HXDLIN(1569)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1569)														widthValue = width;
HXDLIN(1569)														bool _hx_tmp;
HXDLIN(1569)														if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1569)															_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            														}
            														else {
HXLINE(1569)															_hx_tmp = true;
            														}
HXDLIN(1569)														if (_hx_tmp) {
HXLINE(1569)															layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,placeIndex);
HXDLIN(1569)															_gthis->layoutGroups->push(layoutGroup);
            														}
            														else {
HXLINE(1569)															layoutGroup->format = formatRange->format;
HXDLIN(1569)															layoutGroup->startIndex = textIndex;
HXDLIN(1569)															layoutGroup->endIndex = placeIndex;
            														}
HXDLIN(1569)														layoutGroup->positions = positions;
HXDLIN(1569)														int _hx_tmp1;
HXDLIN(1569)														if (firstLineOfParagraph) {
HXLINE(1569)															_hx_tmp1 = indent;
            														}
            														else {
HXLINE(1569)															_hx_tmp1 = 0;
            														}
HXDLIN(1569)														layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1569)														layoutGroup->ascent = ascent;
HXDLIN(1569)														layoutGroup->descent = descent;
HXDLIN(1569)														layoutGroup->leading = leading;
HXDLIN(1569)														layoutGroup->lineIndex = lineIndex;
HXDLIN(1569)														layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1569)														layoutGroup->width = widthValue;
HXDLIN(1569)														layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1569)														offsetX = (offsetX + widthValue);
HXDLIN(1569)														if ((placeIndex == formatRange->end)) {
HXLINE(1569)															layoutGroup = null();
HXDLIN(1569)															if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1569)																rangeIndex = (rangeIndex + 1);
HXDLIN(1569)																formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1569)																currentFormat->_hx___merge(formatRange->format);
HXDLIN(1569)																font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            															}
HXDLIN(1569)															{
HXLINE(1569)																if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1569)																	ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1569)																	descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            																}
            																else {
HXLINE(1569)																	bool _hx_tmp;
HXDLIN(1569)																	if (::hx::IsNotNull( font )) {
HXLINE(1569)																		_hx_tmp = (font->unitsPerEM != 0);
            																	}
            																	else {
HXLINE(1569)																		_hx_tmp = false;
            																	}
HXDLIN(1569)																	if (_hx_tmp) {
HXLINE(1569)																		ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1569)																		descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            																	}
            																	else {
HXLINE(1569)																		ascent = ( (Float)(currentFormat->size) );
HXDLIN(1569)																		descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            																	}
            																}
HXDLIN(1569)																leading = ( (int)(currentFormat->leading) );
HXDLIN(1569)																heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1569)																if ((heightValue > maxHeightValue)) {
HXLINE(1569)																	maxHeightValue = heightValue;
            																}
HXDLIN(1569)																if ((ascent > maxAscent)) {
HXLINE(1569)																	maxAscent = ascent;
            																}
            															}
            														}
            													}
            													else {
HXLINE(1569)														while(true){
HXLINE(1569)															int tempRangeEnd;
HXDLIN(1569)															if ((placeIndex < formatRange->end)) {
HXLINE(1569)																tempRangeEnd = placeIndex;
            															}
            															else {
HXLINE(1569)																tempRangeEnd = formatRange->end;
            															}
HXDLIN(1569)															if ((textIndex != tempRangeEnd)) {
HXLINE(1569)																::String text = _gthis->text;
HXDLIN(1569)																Float letterSpacing = ((Float)0.0);
HXDLIN(1569)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1569)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1569)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1569)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1569)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1569)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1569)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1569)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1569)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1569)																bool positions1;
HXDLIN(1569)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1569)																	positions1 = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1569)																	positions1 = true;
            																}
HXDLIN(1569)																_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1569)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1569)																_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1569)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1569)																	positions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1569)																	positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1569)																Float width = ((Float)0.0);
HXDLIN(1569)																{
HXLINE(1569)																	int _g = 0;
HXDLIN(1569)																	while((_g < positions->length)){
HXLINE(1569)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1569)																		_g = (_g + 1);
HXDLIN(1569)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1569)																widthValue = width;
HXDLIN(1569)																bool _hx_tmp;
HXDLIN(1569)																if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1569)																	_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            																}
            																else {
HXLINE(1569)																	_hx_tmp = true;
            																}
HXDLIN(1569)																if (_hx_tmp) {
HXLINE(1569)																	layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1569)																	_gthis->layoutGroups->push(layoutGroup);
            																}
            																else {
HXLINE(1569)																	layoutGroup->format = formatRange->format;
HXDLIN(1569)																	layoutGroup->startIndex = textIndex;
HXDLIN(1569)																	layoutGroup->endIndex = tempRangeEnd;
            																}
HXDLIN(1569)																layoutGroup->positions = positions;
HXDLIN(1569)																int _hx_tmp1;
HXDLIN(1569)																if (firstLineOfParagraph) {
HXLINE(1569)																	_hx_tmp1 = indent;
            																}
            																else {
HXLINE(1569)																	_hx_tmp1 = 0;
            																}
HXDLIN(1569)																layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1569)																layoutGroup->ascent = ascent;
HXDLIN(1569)																layoutGroup->descent = descent;
HXDLIN(1569)																layoutGroup->leading = leading;
HXDLIN(1569)																layoutGroup->lineIndex = lineIndex;
HXDLIN(1569)																layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1569)																layoutGroup->width = widthValue;
HXDLIN(1569)																layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1569)																offsetX = (offsetX + widthValue);
HXDLIN(1569)																textIndex = tempRangeEnd;
            															}
HXDLIN(1569)															if ((tempRangeEnd == formatRange->end)) {
HXLINE(1569)																layoutGroup = null();
            															}
HXDLIN(1569)															if ((tempRangeEnd == placeIndex)) {
HXLINE(1569)																goto _hx_goto_82;
            															}
HXDLIN(1569)															bool _hx_tmp;
HXDLIN(1569)															if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1569)																rangeIndex = (rangeIndex + 1);
HXDLIN(1569)																formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1569)																currentFormat->_hx___merge(formatRange->format);
HXDLIN(1569)																font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1569)																_hx_tmp = true;
            															}
            															else {
HXLINE(1569)																_hx_tmp = false;
            															}
HXDLIN(1569)															if (!(_hx_tmp)) {
HXLINE(1569)																::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1209,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1569)																goto _hx_goto_82;
            															}
HXDLIN(1569)															{
HXLINE(1569)																if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1569)																	ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1569)																	descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            																}
            																else {
HXLINE(1569)																	bool _hx_tmp;
HXDLIN(1569)																	if (::hx::IsNotNull( font )) {
HXLINE(1569)																		_hx_tmp = (font->unitsPerEM != 0);
            																	}
            																	else {
HXLINE(1569)																		_hx_tmp = false;
            																	}
HXDLIN(1569)																	if (_hx_tmp) {
HXLINE(1569)																		ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1569)																		descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            																	}
            																	else {
HXLINE(1569)																		ascent = ( (Float)(currentFormat->size) );
HXDLIN(1569)																		descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            																	}
            																}
HXDLIN(1569)																leading = ( (int)(currentFormat->leading) );
HXDLIN(1569)																heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1569)																if ((heightValue > maxHeightValue)) {
HXLINE(1569)																	maxHeightValue = heightValue;
            																}
HXDLIN(1569)																if ((ascent > maxAscent)) {
HXLINE(1569)																	maxAscent = ascent;
            																}
            															}
            														}
            														_hx_goto_82:;
            													}
HXDLIN(1569)													textIndex = placeIndex;
            												}
HXDLIN(1569)												{
HXLINE(1569)													{
HXLINE(1569)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1569)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1569)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1569)															bool _hx_tmp;
HXDLIN(1569)															if (::hx::IsNotNull( font )) {
HXLINE(1569)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1569)																_hx_tmp = false;
            															}
HXDLIN(1569)															if (_hx_tmp) {
HXLINE(1569)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1569)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1569)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1569)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1569)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1569)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1569)														if ((heightValue > maxHeightValue)) {
HXLINE(1569)															maxHeightValue = heightValue;
            														}
HXDLIN(1569)														if ((ascent > maxAscent)) {
HXLINE(1569)															maxAscent = ascent;
            														}
            													}
HXDLIN(1569)													int i1 = _gthis->layoutGroups->get_length();
HXDLIN(1569)													while(true){
HXLINE(1569)														i1 = (i1 - 1);
HXDLIN(1569)														if (!((i1 > -1))) {
HXLINE(1569)															goto _hx_goto_84;
            														}
HXDLIN(1569)														 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i1).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1569)														if ((lg->lineIndex < lineIndex)) {
HXLINE(1569)															goto _hx_goto_84;
            														}
HXDLIN(1569)														if ((lg->lineIndex > lineIndex)) {
HXLINE(1569)															continue;
            														}
HXDLIN(1569)														lg->ascent = maxAscent;
HXDLIN(1569)														lg->height = ( (Float)(maxHeightValue) );
            													}
            													_hx_goto_84:;
HXDLIN(1569)													offsetY = (offsetY + maxHeightValue);
HXDLIN(1569)													maxAscent = ((Float)0.0);
HXDLIN(1569)													maxHeightValue = 0;
HXDLIN(1569)													lineIndex = (lineIndex + 1);
HXDLIN(1569)													offsetX = ( (Float)(0) );
HXDLIN(1569)													firstLineOfParagraph = false;
            												}
HXDLIN(1569)												if ((placeIndex >= endIndex)) {
HXLINE(1569)													positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1569)													widthValue = ( (Float)(0) );
            												}
            												else {
HXLINE(1569)													if ((endIndex <= formatRange->end)) {
HXLINE(1569)														::String text = _gthis->text;
HXDLIN(1569)														Float letterSpacing = ((Float)0.0);
HXDLIN(1569)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1569)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1569)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1569)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1569)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1569)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1569)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1569)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1569)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1569)														bool positions1;
HXDLIN(1569)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1569)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1569)															positions1 = true;
            														}
HXDLIN(1569)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1569)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1569)														_gthis1->set_text(text.substring(placeIndex,endIndex));
HXDLIN(1569)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1569)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1569)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1569)														Float width = ((Float)0.0);
HXDLIN(1569)														{
HXLINE(1569)															int _g = 0;
HXDLIN(1569)															while((_g < positions->length)){
HXLINE(1569)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1569)																_g = (_g + 1);
HXDLIN(1569)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1569)														widthValue = width;
            													}
            													else {
HXLINE(1569)														int tempIndex = placeIndex;
HXDLIN(1569)														int tempRangeEnd = formatRange->end;
HXDLIN(1569)														int countRanges = 0;
HXDLIN(1569)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1569)														widthValue = ( (Float)(0) );
HXDLIN(1569)														while(true){
HXLINE(1569)															if ((tempIndex != tempRangeEnd)) {
HXLINE(1569)																::String text = _gthis->text;
HXDLIN(1569)																Float letterSpacing = ((Float)0.0);
HXDLIN(1569)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1569)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1569)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1569)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1569)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1569)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1569)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1569)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1569)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1569)																bool _hx_tmp;
HXDLIN(1569)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1569)																	_hx_tmp = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1569)																	_hx_tmp = true;
            																}
HXDLIN(1569)																_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1569)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1569)																_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1569)																::Array< ::Dynamic> tempPositions;
HXDLIN(1569)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1569)																	tempPositions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1569)																	tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1569)																positions = positions->concat(tempPositions);
            															}
HXDLIN(1569)															if ((tempRangeEnd != endIndex)) {
HXLINE(1569)																bool _hx_tmp;
HXDLIN(1569)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1569)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1569)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1569)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1569)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1569)																	_hx_tmp = true;
            																}
            																else {
HXLINE(1569)																	_hx_tmp = false;
            																}
HXDLIN(1569)																if (!(_hx_tmp)) {
HXLINE(1569)																	::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1121,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1569)																	goto _hx_goto_86;
            																}
HXDLIN(1569)																tempIndex = tempRangeEnd;
HXDLIN(1569)																if ((endIndex < formatRange->end)) {
HXLINE(1569)																	tempRangeEnd = endIndex;
            																}
            																else {
HXLINE(1569)																	tempRangeEnd = formatRange->end;
            																}
HXDLIN(1569)																countRanges = (countRanges + 1);
            															}
            															else {
HXLINE(1569)																Float width = ((Float)0.0);
HXDLIN(1569)																{
HXLINE(1569)																	int _g = 0;
HXDLIN(1569)																	while((_g < positions->length)){
HXLINE(1569)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1569)																		_g = (_g + 1);
HXDLIN(1569)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1569)																widthValue = width;
HXDLIN(1569)																goto _hx_goto_86;
            															}
            														}
            														_hx_goto_86:;
HXDLIN(1569)														rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1569)														if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1569)															rangeIndex = (rangeIndex + 1);
HXDLIN(1569)															formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1569)															currentFormat->_hx___merge(formatRange->format);
HXDLIN(1569)															font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            														}
            													}
            												}
HXDLIN(1569)												remainingPositions = positions;
HXDLIN(1569)												tempWidth = widthValue;
            											}
            											_hx_goto_72:;
            										}
HXDLIN(1569)										{
HXLINE(1569)											if ((endIndex <= formatRange->end)) {
HXLINE(1569)												::String text = _gthis->text;
HXDLIN(1569)												Float letterSpacing = ((Float)0.0);
HXDLIN(1569)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1569)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1569)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1569)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1569)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1569)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1569)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1569)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1569)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1569)												bool positions1;
HXDLIN(1569)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1569)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1569)													positions1 = true;
            												}
HXDLIN(1569)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1569)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1569)												_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1569)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1569)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1569)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1569)												Float width = ((Float)0.0);
HXDLIN(1569)												{
HXLINE(1569)													int _g = 0;
HXDLIN(1569)													while((_g < positions->length)){
HXLINE(1569)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1569)														_g = (_g + 1);
HXDLIN(1569)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1569)												widthValue = width;
HXDLIN(1569)												bool _hx_tmp;
HXDLIN(1569)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1569)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1569)													_hx_tmp = true;
            												}
HXDLIN(1569)												if (_hx_tmp) {
HXLINE(1569)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,endIndex);
HXDLIN(1569)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1569)													layoutGroup->format = formatRange->format;
HXDLIN(1569)													layoutGroup->startIndex = textIndex;
HXDLIN(1569)													layoutGroup->endIndex = endIndex;
            												}
HXDLIN(1569)												layoutGroup->positions = positions;
HXDLIN(1569)												int _hx_tmp1;
HXDLIN(1569)												if (firstLineOfParagraph) {
HXLINE(1569)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1569)													_hx_tmp1 = 0;
            												}
HXDLIN(1569)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1569)												layoutGroup->ascent = ascent;
HXDLIN(1569)												layoutGroup->descent = descent;
HXDLIN(1569)												layoutGroup->leading = leading;
HXDLIN(1569)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1569)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1569)												layoutGroup->width = widthValue;
HXDLIN(1569)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1569)												offsetX = (offsetX + widthValue);
HXDLIN(1569)												if ((endIndex == formatRange->end)) {
HXLINE(1569)													layoutGroup = null();
HXDLIN(1569)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1569)														rangeIndex = (rangeIndex + 1);
HXDLIN(1569)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1569)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1569)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            													}
HXDLIN(1569)													{
HXLINE(1569)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1569)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1569)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1569)															bool _hx_tmp;
HXDLIN(1569)															if (::hx::IsNotNull( font )) {
HXLINE(1569)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1569)																_hx_tmp = false;
            															}
HXDLIN(1569)															if (_hx_tmp) {
HXLINE(1569)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1569)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1569)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1569)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1569)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1569)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1569)														if ((heightValue > maxHeightValue)) {
HXLINE(1569)															maxHeightValue = heightValue;
            														}
HXDLIN(1569)														if ((ascent > maxAscent)) {
HXLINE(1569)															maxAscent = ascent;
            														}
            													}
            												}
            											}
            											else {
HXLINE(1569)												while(true){
HXLINE(1569)													int tempRangeEnd;
HXDLIN(1569)													if ((endIndex < formatRange->end)) {
HXLINE(1569)														tempRangeEnd = endIndex;
            													}
            													else {
HXLINE(1569)														tempRangeEnd = formatRange->end;
            													}
HXDLIN(1569)													if ((textIndex != tempRangeEnd)) {
HXLINE(1569)														::String text = _gthis->text;
HXDLIN(1569)														Float letterSpacing = ((Float)0.0);
HXDLIN(1569)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1569)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1569)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1569)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1569)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1569)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1569)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1569)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1569)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1569)														bool positions1;
HXDLIN(1569)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1569)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1569)															positions1 = true;
            														}
HXDLIN(1569)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1569)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1569)														_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1569)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1569)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1569)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1569)														Float width = ((Float)0.0);
HXDLIN(1569)														{
HXLINE(1569)															int _g = 0;
HXDLIN(1569)															while((_g < positions->length)){
HXLINE(1569)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1569)																_g = (_g + 1);
HXDLIN(1569)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1569)														widthValue = width;
HXDLIN(1569)														bool _hx_tmp;
HXDLIN(1569)														if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1569)															_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            														}
            														else {
HXLINE(1569)															_hx_tmp = true;
            														}
HXDLIN(1569)														if (_hx_tmp) {
HXLINE(1569)															layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1569)															_gthis->layoutGroups->push(layoutGroup);
            														}
            														else {
HXLINE(1569)															layoutGroup->format = formatRange->format;
HXDLIN(1569)															layoutGroup->startIndex = textIndex;
HXDLIN(1569)															layoutGroup->endIndex = tempRangeEnd;
            														}
HXDLIN(1569)														layoutGroup->positions = positions;
HXDLIN(1569)														int _hx_tmp1;
HXDLIN(1569)														if (firstLineOfParagraph) {
HXLINE(1569)															_hx_tmp1 = indent;
            														}
            														else {
HXLINE(1569)															_hx_tmp1 = 0;
            														}
HXDLIN(1569)														layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1569)														layoutGroup->ascent = ascent;
HXDLIN(1569)														layoutGroup->descent = descent;
HXDLIN(1569)														layoutGroup->leading = leading;
HXDLIN(1569)														layoutGroup->lineIndex = lineIndex;
HXDLIN(1569)														layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1569)														layoutGroup->width = widthValue;
HXDLIN(1569)														layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1569)														offsetX = (offsetX + widthValue);
HXDLIN(1569)														textIndex = tempRangeEnd;
            													}
HXDLIN(1569)													if ((tempRangeEnd == formatRange->end)) {
HXLINE(1569)														layoutGroup = null();
            													}
HXDLIN(1569)													if ((tempRangeEnd == endIndex)) {
HXLINE(1569)														goto _hx_goto_89;
            													}
HXDLIN(1569)													bool _hx_tmp;
HXDLIN(1569)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1569)														rangeIndex = (rangeIndex + 1);
HXDLIN(1569)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1569)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1569)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1569)														_hx_tmp = true;
            													}
            													else {
HXLINE(1569)														_hx_tmp = false;
            													}
HXDLIN(1569)													if (!(_hx_tmp)) {
HXLINE(1569)														::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1209,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1569)														goto _hx_goto_89;
            													}
HXDLIN(1569)													{
HXLINE(1569)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1569)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1569)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1569)															bool _hx_tmp;
HXDLIN(1569)															if (::hx::IsNotNull( font )) {
HXLINE(1569)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1569)																_hx_tmp = false;
            															}
HXDLIN(1569)															if (_hx_tmp) {
HXLINE(1569)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1569)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1569)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1569)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1569)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1569)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1569)														if ((heightValue > maxHeightValue)) {
HXLINE(1569)															maxHeightValue = heightValue;
            														}
HXDLIN(1569)														if ((ascent > maxAscent)) {
HXLINE(1569)															maxAscent = ascent;
            														}
            													}
            												}
            												_hx_goto_89:;
            											}
HXDLIN(1569)											textIndex = endIndex;
            										}
            									}
HXLINE(1570)									if ((endIndex == this->text.length)) {
HXLINE(1570)										{
HXLINE(1570)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1570)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1570)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1570)												bool _hx_tmp;
HXDLIN(1570)												if (::hx::IsNotNull( font )) {
HXLINE(1570)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1570)													_hx_tmp = false;
            												}
HXDLIN(1570)												if (_hx_tmp) {
HXLINE(1570)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1570)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1570)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1570)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1570)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1570)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1570)											if ((heightValue > maxHeightValue)) {
HXLINE(1570)												maxHeightValue = heightValue;
            											}
HXDLIN(1570)											if ((ascent > maxAscent)) {
HXLINE(1570)												maxAscent = ascent;
            											}
            										}
HXDLIN(1570)										int i = _gthis->layoutGroups->get_length();
HXDLIN(1570)										while(true){
HXLINE(1570)											i = (i - 1);
HXDLIN(1570)											if (!((i > -1))) {
HXLINE(1570)												goto _hx_goto_91;
            											}
HXDLIN(1570)											 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1570)											if ((lg->lineIndex < lineIndex)) {
HXLINE(1570)												goto _hx_goto_91;
            											}
HXDLIN(1570)											if ((lg->lineIndex > lineIndex)) {
HXLINE(1570)												continue;
            											}
HXDLIN(1570)											lg->ascent = maxAscent;
HXDLIN(1570)											lg->height = ( (Float)(maxHeightValue) );
            										}
            										_hx_goto_91:;
HXDLIN(1570)										offsetY = (offsetY + maxHeightValue);
HXDLIN(1570)										maxAscent = ((Float)0.0);
HXDLIN(1570)										maxHeightValue = 0;
HXDLIN(1570)										lineIndex = (lineIndex + 1);
HXDLIN(1570)										offsetX = ( (Float)(0) );
HXDLIN(1570)										firstLineOfParagraph = false;
            									}
            								}
            								else {
HXLINE(1574)									int tempRangeEnd;
HXDLIN(1574)									if ((endIndex < formatRange->end)) {
HXLINE(1574)										tempRangeEnd = endIndex;
            									}
            									else {
HXLINE(1574)										tempRangeEnd = formatRange->end;
            									}
HXLINE(1576)									if ((tempRangeEnd < endIndex)) {
HXLINE(1578)										::String text = this->text;
HXDLIN(1578)										Float letterSpacing = ((Float)0.0);
HXDLIN(1578)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1578)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1578)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1578)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1578)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1578)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1578)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1578)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1578)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1578)										bool positions1;
HXDLIN(1578)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1578)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1578)											positions1 = true;
            										}
HXDLIN(1578)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1578)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1578)										_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1578)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1578)											positions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1578)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXLINE(1579)										Float width = ((Float)0.0);
HXDLIN(1579)										{
HXLINE(1579)											int _g = 0;
HXDLIN(1579)											while((_g < positions->length)){
HXLINE(1579)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1579)												_g = (_g + 1);
HXDLIN(1579)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1579)										widthValue = width;
            									}
HXLINE(1582)									layoutGroup->endIndex = tempRangeEnd;
HXLINE(1583)									layoutGroup->positions = layoutGroup->positions->concat(positions);
HXLINE(1584)									 ::openfl::text::_internal::TextLayoutGroup layoutGroup1 = layoutGroup;
HXDLIN(1584)									layoutGroup1->width = (layoutGroup1->width + widthValue);
HXLINE(1586)									offsetX = (offsetX + widthValue);
HXLINE(1588)									if ((tempRangeEnd == formatRange->end)) {
HXLINE(1590)										layoutGroup = null();
HXLINE(1591)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1591)											rangeIndex = (rangeIndex + 1);
HXDLIN(1591)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1591)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1591)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            										}
HXLINE(1592)										{
HXLINE(1592)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1592)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1592)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1592)												bool _hx_tmp;
HXDLIN(1592)												if (::hx::IsNotNull( font )) {
HXLINE(1592)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1592)													_hx_tmp = false;
            												}
HXDLIN(1592)												if (_hx_tmp) {
HXLINE(1592)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1592)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1592)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1592)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1592)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1592)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1592)											if ((heightValue > maxHeightValue)) {
HXLINE(1592)												maxHeightValue = heightValue;
            											}
HXDLIN(1592)											if ((ascent > maxAscent)) {
HXLINE(1592)												maxAscent = ascent;
            											}
            										}
HXLINE(1594)										textIndex = tempRangeEnd;
HXLINE(1596)										if ((tempRangeEnd != endIndex)) {
HXLINE(1598)											if ((endIndex <= formatRange->end)) {
HXLINE(1598)												::String text = _gthis->text;
HXDLIN(1598)												Float letterSpacing = ((Float)0.0);
HXDLIN(1598)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1598)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1598)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1598)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1598)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1598)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1598)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1598)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1598)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1598)												bool positions1;
HXDLIN(1598)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1598)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1598)													positions1 = true;
            												}
HXDLIN(1598)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1598)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1598)												_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1598)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1598)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1598)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1598)												Float width = ((Float)0.0);
HXDLIN(1598)												{
HXLINE(1598)													int _g = 0;
HXDLIN(1598)													while((_g < positions->length)){
HXLINE(1598)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1598)														_g = (_g + 1);
HXDLIN(1598)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1598)												widthValue = width;
HXDLIN(1598)												bool _hx_tmp;
HXDLIN(1598)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1598)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1598)													_hx_tmp = true;
            												}
HXDLIN(1598)												if (_hx_tmp) {
HXLINE(1598)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,endIndex);
HXDLIN(1598)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1598)													layoutGroup->format = formatRange->format;
HXDLIN(1598)													layoutGroup->startIndex = textIndex;
HXDLIN(1598)													layoutGroup->endIndex = endIndex;
            												}
HXDLIN(1598)												layoutGroup->positions = positions;
HXDLIN(1598)												int _hx_tmp1;
HXDLIN(1598)												if (firstLineOfParagraph) {
HXLINE(1598)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1598)													_hx_tmp1 = 0;
            												}
HXDLIN(1598)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1598)												layoutGroup->ascent = ascent;
HXDLIN(1598)												layoutGroup->descent = descent;
HXDLIN(1598)												layoutGroup->leading = leading;
HXDLIN(1598)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1598)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1598)												layoutGroup->width = widthValue;
HXDLIN(1598)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1598)												offsetX = (offsetX + widthValue);
HXDLIN(1598)												if ((endIndex == formatRange->end)) {
HXLINE(1598)													layoutGroup = null();
HXDLIN(1598)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1598)														rangeIndex = (rangeIndex + 1);
HXDLIN(1598)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1598)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1598)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            													}
HXDLIN(1598)													{
HXLINE(1598)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1598)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1598)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1598)															bool _hx_tmp;
HXDLIN(1598)															if (::hx::IsNotNull( font )) {
HXLINE(1598)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1598)																_hx_tmp = false;
            															}
HXDLIN(1598)															if (_hx_tmp) {
HXLINE(1598)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1598)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1598)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1598)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1598)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1598)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1598)														if ((heightValue > maxHeightValue)) {
HXLINE(1598)															maxHeightValue = heightValue;
            														}
HXDLIN(1598)														if ((ascent > maxAscent)) {
HXLINE(1598)															maxAscent = ascent;
            														}
            													}
            												}
            											}
            											else {
HXLINE(1598)												while(true){
HXLINE(1598)													int tempRangeEnd;
HXDLIN(1598)													if ((endIndex < formatRange->end)) {
HXLINE(1598)														tempRangeEnd = endIndex;
            													}
            													else {
HXLINE(1598)														tempRangeEnd = formatRange->end;
            													}
HXDLIN(1598)													if ((textIndex != tempRangeEnd)) {
HXLINE(1598)														::String text = _gthis->text;
HXDLIN(1598)														Float letterSpacing = ((Float)0.0);
HXDLIN(1598)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1598)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1598)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1598)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1598)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1598)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1598)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1598)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1598)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1598)														bool positions1;
HXDLIN(1598)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1598)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1598)															positions1 = true;
            														}
HXDLIN(1598)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1598)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1598)														_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1598)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1598)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1598)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1598)														Float width = ((Float)0.0);
HXDLIN(1598)														{
HXLINE(1598)															int _g = 0;
HXDLIN(1598)															while((_g < positions->length)){
HXLINE(1598)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1598)																_g = (_g + 1);
HXDLIN(1598)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1598)														widthValue = width;
HXDLIN(1598)														bool _hx_tmp;
HXDLIN(1598)														if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1598)															_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            														}
            														else {
HXLINE(1598)															_hx_tmp = true;
            														}
HXDLIN(1598)														if (_hx_tmp) {
HXLINE(1598)															layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1598)															_gthis->layoutGroups->push(layoutGroup);
            														}
            														else {
HXLINE(1598)															layoutGroup->format = formatRange->format;
HXDLIN(1598)															layoutGroup->startIndex = textIndex;
HXDLIN(1598)															layoutGroup->endIndex = tempRangeEnd;
            														}
HXDLIN(1598)														layoutGroup->positions = positions;
HXDLIN(1598)														int _hx_tmp1;
HXDLIN(1598)														if (firstLineOfParagraph) {
HXLINE(1598)															_hx_tmp1 = indent;
            														}
            														else {
HXLINE(1598)															_hx_tmp1 = 0;
            														}
HXDLIN(1598)														layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1598)														layoutGroup->ascent = ascent;
HXDLIN(1598)														layoutGroup->descent = descent;
HXDLIN(1598)														layoutGroup->leading = leading;
HXDLIN(1598)														layoutGroup->lineIndex = lineIndex;
HXDLIN(1598)														layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1598)														layoutGroup->width = widthValue;
HXDLIN(1598)														layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1598)														offsetX = (offsetX + widthValue);
HXDLIN(1598)														textIndex = tempRangeEnd;
            													}
HXDLIN(1598)													if ((tempRangeEnd == formatRange->end)) {
HXLINE(1598)														layoutGroup = null();
            													}
HXDLIN(1598)													if ((tempRangeEnd == endIndex)) {
HXLINE(1598)														goto _hx_goto_94;
            													}
HXDLIN(1598)													bool _hx_tmp;
HXDLIN(1598)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1598)														rangeIndex = (rangeIndex + 1);
HXDLIN(1598)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1598)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1598)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1598)														_hx_tmp = true;
            													}
            													else {
HXLINE(1598)														_hx_tmp = false;
            													}
HXDLIN(1598)													if (!(_hx_tmp)) {
HXLINE(1598)														::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1209,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1598)														goto _hx_goto_94;
            													}
HXDLIN(1598)													{
HXLINE(1598)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1598)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1598)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1598)															bool _hx_tmp;
HXDLIN(1598)															if (::hx::IsNotNull( font )) {
HXLINE(1598)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1598)																_hx_tmp = false;
            															}
HXDLIN(1598)															if (_hx_tmp) {
HXLINE(1598)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1598)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1598)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1598)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1598)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1598)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1598)														if ((heightValue > maxHeightValue)) {
HXLINE(1598)															maxHeightValue = heightValue;
            														}
HXDLIN(1598)														if ((ascent > maxAscent)) {
HXLINE(1598)															maxAscent = ascent;
            														}
            													}
            												}
            												_hx_goto_94:;
            											}
HXDLIN(1598)											textIndex = endIndex;
            										}
            									}
HXLINE(1604)									if ((breakIndex == endIndex)) {
HXLINE(1604)										endIndex = (endIndex + 1);
            									}
HXLINE(1606)									textIndex = endIndex;
HXLINE(1608)									if ((endIndex == this->text.length)) {
HXLINE(1610)										{
HXLINE(1610)											{
HXLINE(1610)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1610)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1610)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1610)													bool _hx_tmp;
HXDLIN(1610)													if (::hx::IsNotNull( font )) {
HXLINE(1610)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1610)														_hx_tmp = false;
            													}
HXDLIN(1610)													if (_hx_tmp) {
HXLINE(1610)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1610)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1610)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1610)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1610)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1610)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1610)												if ((heightValue > maxHeightValue)) {
HXLINE(1610)													maxHeightValue = heightValue;
            												}
HXDLIN(1610)												if ((ascent > maxAscent)) {
HXLINE(1610)													maxAscent = ascent;
            												}
            											}
HXDLIN(1610)											int i = _gthis->layoutGroups->get_length();
HXDLIN(1610)											while(true){
HXLINE(1610)												i = (i - 1);
HXDLIN(1610)												if (!((i > -1))) {
HXLINE(1610)													goto _hx_goto_96;
            												}
HXDLIN(1610)												 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1610)												if ((lg->lineIndex < lineIndex)) {
HXLINE(1610)													goto _hx_goto_96;
            												}
HXDLIN(1610)												if ((lg->lineIndex > lineIndex)) {
HXLINE(1610)													continue;
            												}
HXDLIN(1610)												lg->ascent = maxAscent;
HXDLIN(1610)												lg->height = ( (Float)(maxHeightValue) );
            											}
            											_hx_goto_96:;
HXDLIN(1610)											offsetY = (offsetY + maxHeightValue);
HXDLIN(1610)											maxAscent = ((Float)0.0);
HXDLIN(1610)											maxHeightValue = 0;
HXDLIN(1610)											lineIndex = (lineIndex + 1);
HXDLIN(1610)											offsetX = ( (Float)(0) );
HXDLIN(1610)											firstLineOfParagraph = false;
            										}
HXLINE(1612)										if ((breakIndex != -1)) {
HXLINE(1614)											previousBreakIndex = breakIndex;
HXLINE(1615)											breakCount = (breakCount + 1);
HXLINE(1616)											if ((breakCount < this->lineBreaks->get_length())) {
HXLINE(1616)												breakIndex = this->lineBreaks->get(breakCount);
            											}
            											else {
HXLINE(1616)												breakIndex = -1;
            											}
            										}
            									}
            								}
            							}
            						}
HXLINE(1622)						int nextSpaceIndex = this->text.indexOf(HX_(" ",20,00,00,00),textIndex);
HXLINE(1627)						if ((breakIndex == previousSpaceIndex)) {
HXLINE(1629)							layoutGroup->endIndex = breakIndex;
HXLINE(1631)							if ((((breakIndex - layoutGroup->startIndex) - layoutGroup->positions->length) < 0)) {
HXLINE(1634)								layoutGroup->positions->push(null());
            							}
HXLINE(1637)							textIndex = (breakIndex + 1);
            						}
HXLINE(1640)						previousSpaceIndex = spaceIndex;
HXLINE(1641)						spaceIndex = nextSpaceIndex;
HXLINE(1643)						bool _hx_tmp;
HXDLIN(1643)						bool _hx_tmp1;
HXDLIN(1643)						bool _hx_tmp2;
HXDLIN(1643)						if ((breakIndex > -1)) {
HXLINE(1643)							_hx_tmp2 = (breakIndex <= textIndex);
            						}
            						else {
HXLINE(1643)							_hx_tmp2 = false;
            						}
HXDLIN(1643)						if (_hx_tmp2) {
HXLINE(1643)							if ((spaceIndex <= breakIndex)) {
HXLINE(1643)								_hx_tmp1 = (spaceIndex == -1);
            							}
            							else {
HXLINE(1643)								_hx_tmp1 = true;
            							}
            						}
            						else {
HXLINE(1643)							_hx_tmp1 = false;
            						}
HXDLIN(1643)						if (!(_hx_tmp1)) {
HXLINE(1643)							_hx_tmp = (textIndex > this->text.length);
            						}
            						else {
HXLINE(1643)							_hx_tmp = true;
            						}
HXDLIN(1643)						if (_hx_tmp) {
HXLINE(1646)							goto _hx_goto_42;
            						}
            					}
            					_hx_goto_42:;
            				}
            				else {
HXLINE(1652)					if ((textIndex < this->text.length)) {
HXLINE(1655)						{
HXLINE(1655)							int endIndex = this->text.length;
HXDLIN(1655)							if ((textIndex >= endIndex)) {
HXLINE(1655)								positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1655)								widthValue = ( (Float)(0) );
            							}
            							else {
HXLINE(1655)								if ((endIndex <= formatRange->end)) {
HXLINE(1655)									::String text = _gthis->text;
HXDLIN(1655)									Float letterSpacing = ((Float)0.0);
HXDLIN(1655)									if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1655)										letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            									}
HXDLIN(1655)									if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1655)										_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            									}
HXDLIN(1655)									_gthis->_hx___textLayout->set_text(null());
HXDLIN(1655)									_gthis->_hx___textLayout->set_font(font);
HXDLIN(1655)									if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1655)										_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            									}
HXDLIN(1655)									_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1655)									bool positions1;
HXDLIN(1655)									if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1655)										positions1 = (_gthis->sharpness < 400);
            									}
            									else {
HXLINE(1655)										positions1 = true;
            									}
HXDLIN(1655)									_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1655)									 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1655)									_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1655)									if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1655)										positions = _gthis->_hx___textLayout->get_positions();
            									}
            									else {
HXLINE(1655)										positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            									}
HXDLIN(1655)									Float width = ((Float)0.0);
HXDLIN(1655)									{
HXLINE(1655)										int _g = 0;
HXDLIN(1655)										while((_g < positions->length)){
HXLINE(1655)											 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1655)											_g = (_g + 1);
HXDLIN(1655)											width = (width + position->advance->x);
            										}
            									}
HXDLIN(1655)									widthValue = width;
            								}
            								else {
HXLINE(1655)									int tempIndex = textIndex;
HXDLIN(1655)									int tempRangeEnd = formatRange->end;
HXDLIN(1655)									int countRanges = 0;
HXDLIN(1655)									positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1655)									widthValue = ( (Float)(0) );
HXDLIN(1655)									while(true){
HXLINE(1655)										if ((tempIndex != tempRangeEnd)) {
HXLINE(1655)											::String text = _gthis->text;
HXDLIN(1655)											Float letterSpacing = ((Float)0.0);
HXDLIN(1655)											if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1655)												letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            											}
HXDLIN(1655)											if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1655)												_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            											}
HXDLIN(1655)											_gthis->_hx___textLayout->set_text(null());
HXDLIN(1655)											_gthis->_hx___textLayout->set_font(font);
HXDLIN(1655)											if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1655)												_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            											}
HXDLIN(1655)											_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1655)											bool _hx_tmp;
HXDLIN(1655)											if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1655)												_hx_tmp = (_gthis->sharpness < 400);
            											}
            											else {
HXLINE(1655)												_hx_tmp = true;
            											}
HXDLIN(1655)											_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1655)											 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1655)											_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1655)											::Array< ::Dynamic> tempPositions;
HXDLIN(1655)											if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1655)												tempPositions = _gthis->_hx___textLayout->get_positions();
            											}
            											else {
HXLINE(1655)												tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            											}
HXDLIN(1655)											positions = positions->concat(tempPositions);
            										}
HXDLIN(1655)										if ((tempRangeEnd != endIndex)) {
HXLINE(1655)											bool _hx_tmp;
HXDLIN(1655)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1655)												rangeIndex = (rangeIndex + 1);
HXDLIN(1655)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1655)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1655)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1655)												_hx_tmp = true;
            											}
            											else {
HXLINE(1655)												_hx_tmp = false;
            											}
HXDLIN(1655)											if (!(_hx_tmp)) {
HXLINE(1655)												::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1121,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1655)												goto _hx_goto_98;
            											}
HXDLIN(1655)											tempIndex = tempRangeEnd;
HXDLIN(1655)											if ((endIndex < formatRange->end)) {
HXLINE(1655)												tempRangeEnd = endIndex;
            											}
            											else {
HXLINE(1655)												tempRangeEnd = formatRange->end;
            											}
HXDLIN(1655)											countRanges = (countRanges + 1);
            										}
            										else {
HXLINE(1655)											Float width = ((Float)0.0);
HXDLIN(1655)											{
HXLINE(1655)												int _g = 0;
HXDLIN(1655)												while((_g < positions->length)){
HXLINE(1655)													 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1655)													_g = (_g + 1);
HXDLIN(1655)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1655)											widthValue = width;
HXDLIN(1655)											goto _hx_goto_98;
            										}
            									}
            									_hx_goto_98:;
HXDLIN(1655)									rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1655)									if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1655)										rangeIndex = (rangeIndex + 1);
HXDLIN(1655)										formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1655)										currentFormat->_hx___merge(formatRange->format);
HXDLIN(1655)										font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            									}
            								}
            							}
            						}
HXLINE(1656)						{
HXLINE(1656)							int endIndex1 = this->text.length;
HXDLIN(1656)							bool _hx_tmp;
HXDLIN(1656)							if ((_gthis->width >= 4)) {
HXLINE(1656)								_hx_tmp = _gthis->wordWrap;
            							}
            							else {
HXLINE(1656)								_hx_tmp = false;
            							}
HXDLIN(1656)							if (_hx_tmp) {
HXLINE(1656)								::Array< ::Dynamic> remainingPositions = positions;
HXDLIN(1656)								int bufferCount;
HXDLIN(1656)								int placeIndex;
HXDLIN(1656)								Float positionWidth;
HXDLIN(1656)								 ::openfl::text::_internal::GlyphPosition currentPosition;
HXDLIN(1656)								Float width = ((Float)0.0);
HXDLIN(1656)								{
HXLINE(1656)									int _g = 0;
HXDLIN(1656)									while((_g < remainingPositions->length)){
HXLINE(1656)										 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1656)										_g = (_g + 1);
HXDLIN(1656)										width = (width + position->advance->x);
            									}
            								}
HXDLIN(1656)								Float tempWidth = width;
HXDLIN(1656)								int i = (remainingPositions->length - 1);
HXDLIN(1656)								while((i >= 0)){
HXLINE(1656)									 ::Dynamic currentCharCode = _gthis->text.charCodeAt((textIndex + i));
HXDLIN(1656)									bool _hx_tmp;
HXDLIN(1656)									if (::hx::IsNotEq( currentCharCode,32 )) {
HXLINE(1656)										_hx_tmp = ::hx::IsNotEq( currentCharCode,9 );
            									}
            									else {
HXLINE(1656)										_hx_tmp = false;
            									}
HXDLIN(1656)									if (_hx_tmp) {
HXLINE(1656)										goto _hx_goto_101;
            									}
HXDLIN(1656)									 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1656)									tempWidth = (tempWidth - position->advance->x);
HXDLIN(1656)									i = (i - 1);
            								}
            								_hx_goto_101:;
HXDLIN(1656)								while(true){
HXLINE(1656)									bool _hx_tmp;
HXDLIN(1656)									if ((remainingPositions->length > 0)) {
HXLINE(1656)										int _hx_tmp1;
HXDLIN(1656)										if (firstLineOfParagraph) {
HXLINE(1656)											_hx_tmp1 = indent;
            										}
            										else {
HXLINE(1656)											_hx_tmp1 = 0;
            										}
HXDLIN(1656)										_hx_tmp = ((offsetX + tempWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            									}
            									else {
HXLINE(1656)										_hx_tmp = false;
            									}
HXDLIN(1656)									if (!(_hx_tmp)) {
HXLINE(1656)										goto _hx_goto_102;
            									}
HXDLIN(1656)									bufferCount = 0;
HXDLIN(1656)									i = bufferCount;
HXDLIN(1656)									positionWidth = ((Float)0.0);
HXDLIN(1656)									while(true){
HXLINE(1656)										int _hx_tmp;
HXDLIN(1656)										if (firstLineOfParagraph) {
HXLINE(1656)											_hx_tmp = indent;
            										}
            										else {
HXLINE(1656)											_hx_tmp = 0;
            										}
HXDLIN(1656)										if (!(((offsetX + positionWidth) < (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) ))))) {
HXLINE(1656)											goto _hx_goto_103;
            										}
HXDLIN(1656)										currentPosition = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1656)										if ((currentPosition->advance->x == ((Float)0.0))) {
HXLINE(1656)											i = (i + 1);
HXDLIN(1656)											bufferCount = (bufferCount + 1);
            										}
            										else {
HXLINE(1656)											positionWidth = (positionWidth + currentPosition->advance->x);
HXDLIN(1656)											i = (i + 1);
            										}
            									}
            									_hx_goto_103:;
HXDLIN(1656)									if ((i == bufferCount)) {
HXLINE(1656)										i = (bufferCount + 1);
            									}
            									else {
HXLINE(1656)										while(true){
HXLINE(1656)											bool _hx_tmp;
HXDLIN(1656)											if ((i > 1)) {
HXLINE(1656)												int _hx_tmp1;
HXDLIN(1656)												if (firstLineOfParagraph) {
HXLINE(1656)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1656)													_hx_tmp1 = 0;
            												}
HXDLIN(1656)												_hx_tmp = ((offsetX + positionWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            											}
            											else {
HXLINE(1656)												_hx_tmp = false;
            											}
HXDLIN(1656)											if (!(_hx_tmp)) {
HXLINE(1656)												goto _hx_goto_104;
            											}
HXDLIN(1656)											i = (i - 1);
HXDLIN(1656)											if (((i - bufferCount) > 0)) {
HXLINE(1656)												{
HXLINE(1656)													int endIndex = ((textIndex + i) - bufferCount);
HXDLIN(1656)													if ((textIndex >= endIndex)) {
HXLINE(1656)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1656)														widthValue = ( (Float)(0) );
            													}
            													else {
HXLINE(1656)														if ((endIndex <= formatRange->end)) {
HXLINE(1656)															::String text = _gthis->text;
HXDLIN(1656)															Float letterSpacing = ((Float)0.0);
HXDLIN(1656)															if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1656)																letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            															}
HXDLIN(1656)															if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1656)																_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            															}
HXDLIN(1656)															_gthis->_hx___textLayout->set_text(null());
HXDLIN(1656)															_gthis->_hx___textLayout->set_font(font);
HXDLIN(1656)															if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1656)																_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            															}
HXDLIN(1656)															_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1656)															bool positions1;
HXDLIN(1656)															if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1656)																positions1 = (_gthis->sharpness < 400);
            															}
            															else {
HXLINE(1656)																positions1 = true;
            															}
HXDLIN(1656)															_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1656)															 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1656)															_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1656)															if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1656)																positions = _gthis->_hx___textLayout->get_positions();
            															}
            															else {
HXLINE(1656)																positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            															}
HXDLIN(1656)															Float width = ((Float)0.0);
HXDLIN(1656)															{
HXLINE(1656)																int _g = 0;
HXDLIN(1656)																while((_g < positions->length)){
HXLINE(1656)																	 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1656)																	_g = (_g + 1);
HXDLIN(1656)																	width = (width + position->advance->x);
            																}
            															}
HXDLIN(1656)															widthValue = width;
            														}
            														else {
HXLINE(1656)															int tempIndex = textIndex;
HXDLIN(1656)															int tempRangeEnd = formatRange->end;
HXDLIN(1656)															int countRanges = 0;
HXDLIN(1656)															positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1656)															widthValue = ( (Float)(0) );
HXDLIN(1656)															while(true){
HXLINE(1656)																if ((tempIndex != tempRangeEnd)) {
HXLINE(1656)																	::String text = _gthis->text;
HXDLIN(1656)																	Float letterSpacing = ((Float)0.0);
HXDLIN(1656)																	if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1656)																		letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																	}
HXDLIN(1656)																	if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1656)																		_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																	}
HXDLIN(1656)																	_gthis->_hx___textLayout->set_text(null());
HXDLIN(1656)																	_gthis->_hx___textLayout->set_font(font);
HXDLIN(1656)																	if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1656)																		_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																	}
HXDLIN(1656)																	_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1656)																	bool _hx_tmp;
HXDLIN(1656)																	if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1656)																		_hx_tmp = (_gthis->sharpness < 400);
            																	}
            																	else {
HXLINE(1656)																		_hx_tmp = true;
            																	}
HXDLIN(1656)																	_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1656)																	 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1656)																	_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1656)																	::Array< ::Dynamic> tempPositions;
HXDLIN(1656)																	if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1656)																		tempPositions = _gthis->_hx___textLayout->get_positions();
            																	}
            																	else {
HXLINE(1656)																		tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																	}
HXDLIN(1656)																	positions = positions->concat(tempPositions);
            																}
HXDLIN(1656)																if ((tempRangeEnd != endIndex)) {
HXLINE(1656)																	bool _hx_tmp;
HXDLIN(1656)																	if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1656)																		rangeIndex = (rangeIndex + 1);
HXDLIN(1656)																		formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1656)																		currentFormat->_hx___merge(formatRange->format);
HXDLIN(1656)																		font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1656)																		_hx_tmp = true;
            																	}
            																	else {
HXLINE(1656)																		_hx_tmp = false;
            																	}
HXDLIN(1656)																	if (!(_hx_tmp)) {
HXLINE(1656)																		::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1121,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1656)																		goto _hx_goto_106;
            																	}
HXDLIN(1656)																	tempIndex = tempRangeEnd;
HXDLIN(1656)																	if ((endIndex < formatRange->end)) {
HXLINE(1656)																		tempRangeEnd = endIndex;
            																	}
            																	else {
HXLINE(1656)																		tempRangeEnd = formatRange->end;
            																	}
HXDLIN(1656)																	countRanges = (countRanges + 1);
            																}
            																else {
HXLINE(1656)																	Float width = ((Float)0.0);
HXDLIN(1656)																	{
HXLINE(1656)																		int _g = 0;
HXDLIN(1656)																		while((_g < positions->length)){
HXLINE(1656)																			 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1656)																			_g = (_g + 1);
HXDLIN(1656)																			width = (width + position->advance->x);
            																		}
            																	}
HXDLIN(1656)																	widthValue = width;
HXDLIN(1656)																	goto _hx_goto_106;
            																}
            															}
            															_hx_goto_106:;
HXDLIN(1656)															rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1656)															if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1656)																rangeIndex = (rangeIndex + 1);
HXDLIN(1656)																formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1656)																currentFormat->_hx___merge(formatRange->format);
HXDLIN(1656)																font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            															}
            														}
            													}
            												}
HXDLIN(1656)												positionWidth = widthValue;
            											}
            											else {
HXLINE(1656)												i = 1;
HXDLIN(1656)												bufferCount = 0;
HXDLIN(1656)												{
HXLINE(1656)													int endIndex = (textIndex + 1);
HXDLIN(1656)													if ((textIndex >= endIndex)) {
HXLINE(1656)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1656)														widthValue = ( (Float)(0) );
            													}
            													else {
HXLINE(1656)														if ((endIndex <= formatRange->end)) {
HXLINE(1656)															::String text = _gthis->text;
HXDLIN(1656)															Float letterSpacing = ((Float)0.0);
HXDLIN(1656)															if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1656)																letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            															}
HXDLIN(1656)															if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1656)																_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            															}
HXDLIN(1656)															_gthis->_hx___textLayout->set_text(null());
HXDLIN(1656)															_gthis->_hx___textLayout->set_font(font);
HXDLIN(1656)															if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1656)																_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            															}
HXDLIN(1656)															_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1656)															bool positions1;
HXDLIN(1656)															if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1656)																positions1 = (_gthis->sharpness < 400);
            															}
            															else {
HXLINE(1656)																positions1 = true;
            															}
HXDLIN(1656)															_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1656)															 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1656)															_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1656)															if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1656)																positions = _gthis->_hx___textLayout->get_positions();
            															}
            															else {
HXLINE(1656)																positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            															}
HXDLIN(1656)															Float width = ((Float)0.0);
HXDLIN(1656)															{
HXLINE(1656)																int _g = 0;
HXDLIN(1656)																while((_g < positions->length)){
HXLINE(1656)																	 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1656)																	_g = (_g + 1);
HXDLIN(1656)																	width = (width + position->advance->x);
            																}
            															}
HXDLIN(1656)															widthValue = width;
            														}
            														else {
HXLINE(1656)															int tempIndex = textIndex;
HXDLIN(1656)															int tempRangeEnd = formatRange->end;
HXDLIN(1656)															int countRanges = 0;
HXDLIN(1656)															positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1656)															widthValue = ( (Float)(0) );
HXDLIN(1656)															while(true){
HXLINE(1656)																if ((tempIndex != tempRangeEnd)) {
HXLINE(1656)																	::String text = _gthis->text;
HXDLIN(1656)																	Float letterSpacing = ((Float)0.0);
HXDLIN(1656)																	if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1656)																		letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																	}
HXDLIN(1656)																	if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1656)																		_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																	}
HXDLIN(1656)																	_gthis->_hx___textLayout->set_text(null());
HXDLIN(1656)																	_gthis->_hx___textLayout->set_font(font);
HXDLIN(1656)																	if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1656)																		_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																	}
HXDLIN(1656)																	_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1656)																	bool _hx_tmp;
HXDLIN(1656)																	if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1656)																		_hx_tmp = (_gthis->sharpness < 400);
            																	}
            																	else {
HXLINE(1656)																		_hx_tmp = true;
            																	}
HXDLIN(1656)																	_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1656)																	 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1656)																	_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1656)																	::Array< ::Dynamic> tempPositions;
HXDLIN(1656)																	if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1656)																		tempPositions = _gthis->_hx___textLayout->get_positions();
            																	}
            																	else {
HXLINE(1656)																		tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																	}
HXDLIN(1656)																	positions = positions->concat(tempPositions);
            																}
HXDLIN(1656)																if ((tempRangeEnd != endIndex)) {
HXLINE(1656)																	bool _hx_tmp;
HXDLIN(1656)																	if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1656)																		rangeIndex = (rangeIndex + 1);
HXDLIN(1656)																		formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1656)																		currentFormat->_hx___merge(formatRange->format);
HXDLIN(1656)																		font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1656)																		_hx_tmp = true;
            																	}
            																	else {
HXLINE(1656)																		_hx_tmp = false;
            																	}
HXDLIN(1656)																	if (!(_hx_tmp)) {
HXLINE(1656)																		::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1121,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1656)																		goto _hx_goto_109;
            																	}
HXDLIN(1656)																	tempIndex = tempRangeEnd;
HXDLIN(1656)																	if ((endIndex < formatRange->end)) {
HXLINE(1656)																		tempRangeEnd = endIndex;
            																	}
            																	else {
HXLINE(1656)																		tempRangeEnd = formatRange->end;
            																	}
HXDLIN(1656)																	countRanges = (countRanges + 1);
            																}
            																else {
HXLINE(1656)																	Float width = ((Float)0.0);
HXDLIN(1656)																	{
HXLINE(1656)																		int _g = 0;
HXDLIN(1656)																		while((_g < positions->length)){
HXLINE(1656)																			 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1656)																			_g = (_g + 1);
HXDLIN(1656)																			width = (width + position->advance->x);
            																		}
            																	}
HXDLIN(1656)																	widthValue = width;
HXDLIN(1656)																	goto _hx_goto_109;
            																}
            															}
            															_hx_goto_109:;
HXDLIN(1656)															rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1656)															if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1656)																rangeIndex = (rangeIndex + 1);
HXDLIN(1656)																formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1656)																currentFormat->_hx___merge(formatRange->format);
HXDLIN(1656)																font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            															}
            														}
            													}
            												}
HXDLIN(1656)												positionWidth = ( (Float)(0) );
            											}
            										}
            										_hx_goto_104:;
            									}
HXDLIN(1656)									placeIndex = ((textIndex + i) - bufferCount);
HXDLIN(1656)									{
HXLINE(1656)										if ((placeIndex <= formatRange->end)) {
HXLINE(1656)											::String text = _gthis->text;
HXDLIN(1656)											Float letterSpacing = ((Float)0.0);
HXDLIN(1656)											if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1656)												letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            											}
HXDLIN(1656)											if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1656)												_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            											}
HXDLIN(1656)											_gthis->_hx___textLayout->set_text(null());
HXDLIN(1656)											_gthis->_hx___textLayout->set_font(font);
HXDLIN(1656)											if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1656)												_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            											}
HXDLIN(1656)											_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1656)											bool positions1;
HXDLIN(1656)											if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1656)												positions1 = (_gthis->sharpness < 400);
            											}
            											else {
HXLINE(1656)												positions1 = true;
            											}
HXDLIN(1656)											_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1656)											 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1656)											_gthis1->set_text(text.substring(textIndex,placeIndex));
HXDLIN(1656)											if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1656)												positions = _gthis->_hx___textLayout->get_positions();
            											}
            											else {
HXLINE(1656)												positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            											}
HXDLIN(1656)											Float width = ((Float)0.0);
HXDLIN(1656)											{
HXLINE(1656)												int _g = 0;
HXDLIN(1656)												while((_g < positions->length)){
HXLINE(1656)													 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1656)													_g = (_g + 1);
HXDLIN(1656)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1656)											widthValue = width;
HXDLIN(1656)											bool _hx_tmp;
HXDLIN(1656)											if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1656)												_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            											}
            											else {
HXLINE(1656)												_hx_tmp = true;
            											}
HXDLIN(1656)											if (_hx_tmp) {
HXLINE(1656)												layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,placeIndex);
HXDLIN(1656)												_gthis->layoutGroups->push(layoutGroup);
            											}
            											else {
HXLINE(1656)												layoutGroup->format = formatRange->format;
HXDLIN(1656)												layoutGroup->startIndex = textIndex;
HXDLIN(1656)												layoutGroup->endIndex = placeIndex;
            											}
HXDLIN(1656)											layoutGroup->positions = positions;
HXDLIN(1656)											int _hx_tmp1;
HXDLIN(1656)											if (firstLineOfParagraph) {
HXLINE(1656)												_hx_tmp1 = indent;
            											}
            											else {
HXLINE(1656)												_hx_tmp1 = 0;
            											}
HXDLIN(1656)											layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1656)											layoutGroup->ascent = ascent;
HXDLIN(1656)											layoutGroup->descent = descent;
HXDLIN(1656)											layoutGroup->leading = leading;
HXDLIN(1656)											layoutGroup->lineIndex = lineIndex;
HXDLIN(1656)											layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1656)											layoutGroup->width = widthValue;
HXDLIN(1656)											layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1656)											offsetX = (offsetX + widthValue);
HXDLIN(1656)											if ((placeIndex == formatRange->end)) {
HXLINE(1656)												layoutGroup = null();
HXDLIN(1656)												if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1656)													rangeIndex = (rangeIndex + 1);
HXDLIN(1656)													formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1656)													currentFormat->_hx___merge(formatRange->format);
HXDLIN(1656)													font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            												}
HXDLIN(1656)												{
HXLINE(1656)													if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1656)														ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1656)														descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            													}
            													else {
HXLINE(1656)														bool _hx_tmp;
HXDLIN(1656)														if (::hx::IsNotNull( font )) {
HXLINE(1656)															_hx_tmp = (font->unitsPerEM != 0);
            														}
            														else {
HXLINE(1656)															_hx_tmp = false;
            														}
HXDLIN(1656)														if (_hx_tmp) {
HXLINE(1656)															ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1656)															descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            														}
            														else {
HXLINE(1656)															ascent = ( (Float)(currentFormat->size) );
HXDLIN(1656)															descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            														}
            													}
HXDLIN(1656)													leading = ( (int)(currentFormat->leading) );
HXDLIN(1656)													heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1656)													if ((heightValue > maxHeightValue)) {
HXLINE(1656)														maxHeightValue = heightValue;
            													}
HXDLIN(1656)													if ((ascent > maxAscent)) {
HXLINE(1656)														maxAscent = ascent;
            													}
            												}
            											}
            										}
            										else {
HXLINE(1656)											while(true){
HXLINE(1656)												int tempRangeEnd;
HXDLIN(1656)												if ((placeIndex < formatRange->end)) {
HXLINE(1656)													tempRangeEnd = placeIndex;
            												}
            												else {
HXLINE(1656)													tempRangeEnd = formatRange->end;
            												}
HXDLIN(1656)												if ((textIndex != tempRangeEnd)) {
HXLINE(1656)													::String text = _gthis->text;
HXDLIN(1656)													Float letterSpacing = ((Float)0.0);
HXDLIN(1656)													if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1656)														letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            													}
HXDLIN(1656)													if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1656)														_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            													}
HXDLIN(1656)													_gthis->_hx___textLayout->set_text(null());
HXDLIN(1656)													_gthis->_hx___textLayout->set_font(font);
HXDLIN(1656)													if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1656)														_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            													}
HXDLIN(1656)													_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1656)													bool positions1;
HXDLIN(1656)													if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1656)														positions1 = (_gthis->sharpness < 400);
            													}
            													else {
HXLINE(1656)														positions1 = true;
            													}
HXDLIN(1656)													_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1656)													 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1656)													_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1656)													if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1656)														positions = _gthis->_hx___textLayout->get_positions();
            													}
            													else {
HXLINE(1656)														positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            													}
HXDLIN(1656)													Float width = ((Float)0.0);
HXDLIN(1656)													{
HXLINE(1656)														int _g = 0;
HXDLIN(1656)														while((_g < positions->length)){
HXLINE(1656)															 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1656)															_g = (_g + 1);
HXDLIN(1656)															width = (width + position->advance->x);
            														}
            													}
HXDLIN(1656)													widthValue = width;
HXDLIN(1656)													bool _hx_tmp;
HXDLIN(1656)													if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1656)														_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            													}
            													else {
HXLINE(1656)														_hx_tmp = true;
            													}
HXDLIN(1656)													if (_hx_tmp) {
HXLINE(1656)														layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1656)														_gthis->layoutGroups->push(layoutGroup);
            													}
            													else {
HXLINE(1656)														layoutGroup->format = formatRange->format;
HXDLIN(1656)														layoutGroup->startIndex = textIndex;
HXDLIN(1656)														layoutGroup->endIndex = tempRangeEnd;
            													}
HXDLIN(1656)													layoutGroup->positions = positions;
HXDLIN(1656)													int _hx_tmp1;
HXDLIN(1656)													if (firstLineOfParagraph) {
HXLINE(1656)														_hx_tmp1 = indent;
            													}
            													else {
HXLINE(1656)														_hx_tmp1 = 0;
            													}
HXDLIN(1656)													layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1656)													layoutGroup->ascent = ascent;
HXDLIN(1656)													layoutGroup->descent = descent;
HXDLIN(1656)													layoutGroup->leading = leading;
HXDLIN(1656)													layoutGroup->lineIndex = lineIndex;
HXDLIN(1656)													layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1656)													layoutGroup->width = widthValue;
HXDLIN(1656)													layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1656)													offsetX = (offsetX + widthValue);
HXDLIN(1656)													textIndex = tempRangeEnd;
            												}
HXDLIN(1656)												if ((tempRangeEnd == formatRange->end)) {
HXLINE(1656)													layoutGroup = null();
            												}
HXDLIN(1656)												if ((tempRangeEnd == placeIndex)) {
HXLINE(1656)													goto _hx_goto_112;
            												}
HXDLIN(1656)												bool _hx_tmp;
HXDLIN(1656)												if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1656)													rangeIndex = (rangeIndex + 1);
HXDLIN(1656)													formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1656)													currentFormat->_hx___merge(formatRange->format);
HXDLIN(1656)													font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1656)													_hx_tmp = true;
            												}
            												else {
HXLINE(1656)													_hx_tmp = false;
            												}
HXDLIN(1656)												if (!(_hx_tmp)) {
HXLINE(1656)													::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1209,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1656)													goto _hx_goto_112;
            												}
HXDLIN(1656)												{
HXLINE(1656)													if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1656)														ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1656)														descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            													}
            													else {
HXLINE(1656)														bool _hx_tmp;
HXDLIN(1656)														if (::hx::IsNotNull( font )) {
HXLINE(1656)															_hx_tmp = (font->unitsPerEM != 0);
            														}
            														else {
HXLINE(1656)															_hx_tmp = false;
            														}
HXDLIN(1656)														if (_hx_tmp) {
HXLINE(1656)															ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1656)															descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            														}
            														else {
HXLINE(1656)															ascent = ( (Float)(currentFormat->size) );
HXDLIN(1656)															descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            														}
            													}
HXDLIN(1656)													leading = ( (int)(currentFormat->leading) );
HXDLIN(1656)													heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1656)													if ((heightValue > maxHeightValue)) {
HXLINE(1656)														maxHeightValue = heightValue;
            													}
HXDLIN(1656)													if ((ascent > maxAscent)) {
HXLINE(1656)														maxAscent = ascent;
            													}
            												}
            											}
            											_hx_goto_112:;
            										}
HXDLIN(1656)										textIndex = placeIndex;
            									}
HXDLIN(1656)									{
HXLINE(1656)										{
HXLINE(1656)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1656)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1656)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1656)												bool _hx_tmp;
HXDLIN(1656)												if (::hx::IsNotNull( font )) {
HXLINE(1656)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1656)													_hx_tmp = false;
            												}
HXDLIN(1656)												if (_hx_tmp) {
HXLINE(1656)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1656)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1656)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1656)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1656)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1656)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1656)											if ((heightValue > maxHeightValue)) {
HXLINE(1656)												maxHeightValue = heightValue;
            											}
HXDLIN(1656)											if ((ascent > maxAscent)) {
HXLINE(1656)												maxAscent = ascent;
            											}
            										}
HXDLIN(1656)										int i1 = _gthis->layoutGroups->get_length();
HXDLIN(1656)										while(true){
HXLINE(1656)											i1 = (i1 - 1);
HXDLIN(1656)											if (!((i1 > -1))) {
HXLINE(1656)												goto _hx_goto_114;
            											}
HXDLIN(1656)											 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i1).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1656)											if ((lg->lineIndex < lineIndex)) {
HXLINE(1656)												goto _hx_goto_114;
            											}
HXDLIN(1656)											if ((lg->lineIndex > lineIndex)) {
HXLINE(1656)												continue;
            											}
HXDLIN(1656)											lg->ascent = maxAscent;
HXDLIN(1656)											lg->height = ( (Float)(maxHeightValue) );
            										}
            										_hx_goto_114:;
HXDLIN(1656)										offsetY = (offsetY + maxHeightValue);
HXDLIN(1656)										maxAscent = ((Float)0.0);
HXDLIN(1656)										maxHeightValue = 0;
HXDLIN(1656)										lineIndex = (lineIndex + 1);
HXDLIN(1656)										offsetX = ( (Float)(0) );
HXDLIN(1656)										firstLineOfParagraph = false;
            									}
HXDLIN(1656)									if ((placeIndex >= endIndex1)) {
HXLINE(1656)										positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1656)										widthValue = ( (Float)(0) );
            									}
            									else {
HXLINE(1656)										if ((endIndex1 <= formatRange->end)) {
HXLINE(1656)											::String text = _gthis->text;
HXDLIN(1656)											Float letterSpacing = ((Float)0.0);
HXDLIN(1656)											if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1656)												letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            											}
HXDLIN(1656)											if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1656)												_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            											}
HXDLIN(1656)											_gthis->_hx___textLayout->set_text(null());
HXDLIN(1656)											_gthis->_hx___textLayout->set_font(font);
HXDLIN(1656)											if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1656)												_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            											}
HXDLIN(1656)											_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1656)											bool positions1;
HXDLIN(1656)											if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1656)												positions1 = (_gthis->sharpness < 400);
            											}
            											else {
HXLINE(1656)												positions1 = true;
            											}
HXDLIN(1656)											_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1656)											 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1656)											_gthis1->set_text(text.substring(placeIndex,endIndex1));
HXDLIN(1656)											if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1656)												positions = _gthis->_hx___textLayout->get_positions();
            											}
            											else {
HXLINE(1656)												positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            											}
HXDLIN(1656)											Float width = ((Float)0.0);
HXDLIN(1656)											{
HXLINE(1656)												int _g = 0;
HXDLIN(1656)												while((_g < positions->length)){
HXLINE(1656)													 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1656)													_g = (_g + 1);
HXDLIN(1656)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1656)											widthValue = width;
            										}
            										else {
HXLINE(1656)											int tempIndex = placeIndex;
HXDLIN(1656)											int tempRangeEnd = formatRange->end;
HXDLIN(1656)											int countRanges = 0;
HXDLIN(1656)											positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1656)											widthValue = ( (Float)(0) );
HXDLIN(1656)											while(true){
HXLINE(1656)												if ((tempIndex != tempRangeEnd)) {
HXLINE(1656)													::String text = _gthis->text;
HXDLIN(1656)													Float letterSpacing = ((Float)0.0);
HXDLIN(1656)													if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1656)														letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            													}
HXDLIN(1656)													if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1656)														_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            													}
HXDLIN(1656)													_gthis->_hx___textLayout->set_text(null());
HXDLIN(1656)													_gthis->_hx___textLayout->set_font(font);
HXDLIN(1656)													if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1656)														_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            													}
HXDLIN(1656)													_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1656)													bool _hx_tmp;
HXDLIN(1656)													if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1656)														_hx_tmp = (_gthis->sharpness < 400);
            													}
            													else {
HXLINE(1656)														_hx_tmp = true;
            													}
HXDLIN(1656)													_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1656)													 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1656)													_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1656)													::Array< ::Dynamic> tempPositions;
HXDLIN(1656)													if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1656)														tempPositions = _gthis->_hx___textLayout->get_positions();
            													}
            													else {
HXLINE(1656)														tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            													}
HXDLIN(1656)													positions = positions->concat(tempPositions);
            												}
HXDLIN(1656)												if ((tempRangeEnd != endIndex1)) {
HXLINE(1656)													bool _hx_tmp;
HXDLIN(1656)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1656)														rangeIndex = (rangeIndex + 1);
HXDLIN(1656)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1656)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1656)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1656)														_hx_tmp = true;
            													}
            													else {
HXLINE(1656)														_hx_tmp = false;
            													}
HXDLIN(1656)													if (!(_hx_tmp)) {
HXLINE(1656)														::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1121,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1656)														goto _hx_goto_116;
            													}
HXDLIN(1656)													tempIndex = tempRangeEnd;
HXDLIN(1656)													if ((endIndex1 < formatRange->end)) {
HXLINE(1656)														tempRangeEnd = endIndex1;
            													}
            													else {
HXLINE(1656)														tempRangeEnd = formatRange->end;
            													}
HXDLIN(1656)													countRanges = (countRanges + 1);
            												}
            												else {
HXLINE(1656)													Float width = ((Float)0.0);
HXDLIN(1656)													{
HXLINE(1656)														int _g = 0;
HXDLIN(1656)														while((_g < positions->length)){
HXLINE(1656)															 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1656)															_g = (_g + 1);
HXDLIN(1656)															width = (width + position->advance->x);
            														}
            													}
HXDLIN(1656)													widthValue = width;
HXDLIN(1656)													goto _hx_goto_116;
            												}
            											}
            											_hx_goto_116:;
HXDLIN(1656)											rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1656)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1656)												rangeIndex = (rangeIndex + 1);
HXDLIN(1656)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1656)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1656)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            											}
            										}
            									}
HXDLIN(1656)									remainingPositions = positions;
HXDLIN(1656)									tempWidth = widthValue;
            								}
            								_hx_goto_102:;
            							}
HXDLIN(1656)							{
HXLINE(1656)								if ((endIndex1 <= formatRange->end)) {
HXLINE(1656)									::String text = _gthis->text;
HXDLIN(1656)									Float letterSpacing = ((Float)0.0);
HXDLIN(1656)									if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1656)										letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            									}
HXDLIN(1656)									if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1656)										_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            									}
HXDLIN(1656)									_gthis->_hx___textLayout->set_text(null());
HXDLIN(1656)									_gthis->_hx___textLayout->set_font(font);
HXDLIN(1656)									if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1656)										_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            									}
HXDLIN(1656)									_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1656)									bool positions1;
HXDLIN(1656)									if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1656)										positions1 = (_gthis->sharpness < 400);
            									}
            									else {
HXLINE(1656)										positions1 = true;
            									}
HXDLIN(1656)									_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1656)									 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1656)									_gthis1->set_text(text.substring(textIndex,endIndex1));
HXDLIN(1656)									if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1656)										positions = _gthis->_hx___textLayout->get_positions();
            									}
            									else {
HXLINE(1656)										positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            									}
HXDLIN(1656)									Float width = ((Float)0.0);
HXDLIN(1656)									{
HXLINE(1656)										int _g = 0;
HXDLIN(1656)										while((_g < positions->length)){
HXLINE(1656)											 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1656)											_g = (_g + 1);
HXDLIN(1656)											width = (width + position->advance->x);
            										}
            									}
HXDLIN(1656)									widthValue = width;
HXDLIN(1656)									bool _hx_tmp;
HXDLIN(1656)									if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1656)										_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            									}
            									else {
HXLINE(1656)										_hx_tmp = true;
            									}
HXDLIN(1656)									if (_hx_tmp) {
HXLINE(1656)										layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,endIndex1);
HXDLIN(1656)										_gthis->layoutGroups->push(layoutGroup);
            									}
            									else {
HXLINE(1656)										layoutGroup->format = formatRange->format;
HXDLIN(1656)										layoutGroup->startIndex = textIndex;
HXDLIN(1656)										layoutGroup->endIndex = endIndex1;
            									}
HXDLIN(1656)									layoutGroup->positions = positions;
HXDLIN(1656)									int _hx_tmp1;
HXDLIN(1656)									if (firstLineOfParagraph) {
HXLINE(1656)										_hx_tmp1 = indent;
            									}
            									else {
HXLINE(1656)										_hx_tmp1 = 0;
            									}
HXDLIN(1656)									layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1656)									layoutGroup->ascent = ascent;
HXDLIN(1656)									layoutGroup->descent = descent;
HXDLIN(1656)									layoutGroup->leading = leading;
HXDLIN(1656)									layoutGroup->lineIndex = lineIndex;
HXDLIN(1656)									layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1656)									layoutGroup->width = widthValue;
HXDLIN(1656)									layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1656)									offsetX = (offsetX + widthValue);
HXDLIN(1656)									if ((endIndex1 == formatRange->end)) {
HXLINE(1656)										layoutGroup = null();
HXDLIN(1656)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1656)											rangeIndex = (rangeIndex + 1);
HXDLIN(1656)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1656)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1656)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            										}
HXDLIN(1656)										{
HXLINE(1656)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1656)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1656)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1656)												bool _hx_tmp;
HXDLIN(1656)												if (::hx::IsNotNull( font )) {
HXLINE(1656)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1656)													_hx_tmp = false;
            												}
HXDLIN(1656)												if (_hx_tmp) {
HXLINE(1656)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1656)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1656)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1656)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1656)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1656)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1656)											if ((heightValue > maxHeightValue)) {
HXLINE(1656)												maxHeightValue = heightValue;
            											}
HXDLIN(1656)											if ((ascent > maxAscent)) {
HXLINE(1656)												maxAscent = ascent;
            											}
            										}
            									}
            								}
            								else {
HXLINE(1656)									while(true){
HXLINE(1656)										int tempRangeEnd;
HXDLIN(1656)										if ((endIndex1 < formatRange->end)) {
HXLINE(1656)											tempRangeEnd = endIndex1;
            										}
            										else {
HXLINE(1656)											tempRangeEnd = formatRange->end;
            										}
HXDLIN(1656)										if ((textIndex != tempRangeEnd)) {
HXLINE(1656)											::String text = _gthis->text;
HXDLIN(1656)											Float letterSpacing = ((Float)0.0);
HXDLIN(1656)											if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1656)												letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            											}
HXDLIN(1656)											if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1656)												_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            											}
HXDLIN(1656)											_gthis->_hx___textLayout->set_text(null());
HXDLIN(1656)											_gthis->_hx___textLayout->set_font(font);
HXDLIN(1656)											if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1656)												_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            											}
HXDLIN(1656)											_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1656)											bool positions1;
HXDLIN(1656)											if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1656)												positions1 = (_gthis->sharpness < 400);
            											}
            											else {
HXLINE(1656)												positions1 = true;
            											}
HXDLIN(1656)											_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1656)											 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1656)											_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1656)											if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1656)												positions = _gthis->_hx___textLayout->get_positions();
            											}
            											else {
HXLINE(1656)												positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            											}
HXDLIN(1656)											Float width = ((Float)0.0);
HXDLIN(1656)											{
HXLINE(1656)												int _g = 0;
HXDLIN(1656)												while((_g < positions->length)){
HXLINE(1656)													 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1656)													_g = (_g + 1);
HXDLIN(1656)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1656)											widthValue = width;
HXDLIN(1656)											bool _hx_tmp;
HXDLIN(1656)											if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1656)												_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            											}
            											else {
HXLINE(1656)												_hx_tmp = true;
            											}
HXDLIN(1656)											if (_hx_tmp) {
HXLINE(1656)												layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1656)												_gthis->layoutGroups->push(layoutGroup);
            											}
            											else {
HXLINE(1656)												layoutGroup->format = formatRange->format;
HXDLIN(1656)												layoutGroup->startIndex = textIndex;
HXDLIN(1656)												layoutGroup->endIndex = tempRangeEnd;
            											}
HXDLIN(1656)											layoutGroup->positions = positions;
HXDLIN(1656)											int _hx_tmp1;
HXDLIN(1656)											if (firstLineOfParagraph) {
HXLINE(1656)												_hx_tmp1 = indent;
            											}
            											else {
HXLINE(1656)												_hx_tmp1 = 0;
            											}
HXDLIN(1656)											layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1656)											layoutGroup->ascent = ascent;
HXDLIN(1656)											layoutGroup->descent = descent;
HXDLIN(1656)											layoutGroup->leading = leading;
HXDLIN(1656)											layoutGroup->lineIndex = lineIndex;
HXDLIN(1656)											layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1656)											layoutGroup->width = widthValue;
HXDLIN(1656)											layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1656)											offsetX = (offsetX + widthValue);
HXDLIN(1656)											textIndex = tempRangeEnd;
            										}
HXDLIN(1656)										if ((tempRangeEnd == formatRange->end)) {
HXLINE(1656)											layoutGroup = null();
            										}
HXDLIN(1656)										if ((tempRangeEnd == endIndex1)) {
HXLINE(1656)											goto _hx_goto_119;
            										}
HXDLIN(1656)										bool _hx_tmp;
HXDLIN(1656)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1656)											rangeIndex = (rangeIndex + 1);
HXDLIN(1656)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1656)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1656)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1656)											_hx_tmp = true;
            										}
            										else {
HXLINE(1656)											_hx_tmp = false;
            										}
HXDLIN(1656)										if (!(_hx_tmp)) {
HXLINE(1656)											::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1209,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1656)											goto _hx_goto_119;
            										}
HXDLIN(1656)										{
HXLINE(1656)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1656)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1656)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1656)												bool _hx_tmp;
HXDLIN(1656)												if (::hx::IsNotNull( font )) {
HXLINE(1656)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1656)													_hx_tmp = false;
            												}
HXDLIN(1656)												if (_hx_tmp) {
HXLINE(1656)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1656)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1656)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1656)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1656)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1656)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1656)											if ((heightValue > maxHeightValue)) {
HXLINE(1656)												maxHeightValue = heightValue;
            											}
HXDLIN(1656)											if ((ascent > maxAscent)) {
HXLINE(1656)												maxAscent = ascent;
            											}
            										}
            									}
            									_hx_goto_119:;
            								}
HXDLIN(1656)								textIndex = endIndex1;
            							}
            						}
HXLINE(1658)						{
HXLINE(1658)							{
HXLINE(1658)								if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1658)									ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1658)									descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            								}
            								else {
HXLINE(1658)									bool _hx_tmp;
HXDLIN(1658)									if (::hx::IsNotNull( font )) {
HXLINE(1658)										_hx_tmp = (font->unitsPerEM != 0);
            									}
            									else {
HXLINE(1658)										_hx_tmp = false;
            									}
HXDLIN(1658)									if (_hx_tmp) {
HXLINE(1658)										ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1658)										descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            									}
            									else {
HXLINE(1658)										ascent = ( (Float)(currentFormat->size) );
HXDLIN(1658)										descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            									}
            								}
HXDLIN(1658)								leading = ( (int)(currentFormat->leading) );
HXDLIN(1658)								heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1658)								if ((heightValue > maxHeightValue)) {
HXLINE(1658)									maxHeightValue = heightValue;
            								}
HXDLIN(1658)								if ((ascent > maxAscent)) {
HXLINE(1658)									maxAscent = ascent;
            								}
            							}
HXDLIN(1658)							int i = _gthis->layoutGroups->get_length();
HXDLIN(1658)							while(true){
HXLINE(1658)								i = (i - 1);
HXDLIN(1658)								if (!((i > -1))) {
HXLINE(1658)									goto _hx_goto_121;
            								}
HXDLIN(1658)								 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1658)								if ((lg->lineIndex < lineIndex)) {
HXLINE(1658)									goto _hx_goto_121;
            								}
HXDLIN(1658)								if ((lg->lineIndex > lineIndex)) {
HXLINE(1658)									continue;
            								}
HXDLIN(1658)								lg->ascent = maxAscent;
HXDLIN(1658)								lg->height = ( (Float)(maxHeightValue) );
            							}
            							_hx_goto_121:;
HXDLIN(1658)							offsetY = (offsetY + maxHeightValue);
HXDLIN(1658)							maxAscent = ((Float)0.0);
HXDLIN(1658)							maxHeightValue = 0;
HXDLIN(1658)							lineIndex = (lineIndex + 1);
HXDLIN(1658)							offsetX = ( (Float)(0) );
HXDLIN(1658)							firstLineOfParagraph = false;
            						}
            					}
HXLINE(1661)					textIndex = (textIndex + 1);
            				}
            			}
            		}
HXLINE(1666)		bool _hx_tmp3;
HXDLIN(1666)		if ((previousBreakIndex == (textIndex - 2))) {
HXLINE(1666)			_hx_tmp3 = (previousBreakIndex > -1);
            		}
            		else {
HXLINE(1666)			_hx_tmp3 = false;
            		}
HXDLIN(1666)		if (_hx_tmp3) {
HXLINE(1668)			{
HXLINE(1668)				int startIndex = (textIndex - 1);
HXDLIN(1668)				int endIndex = (textIndex - 1);
HXDLIN(1668)				bool _hx_tmp;
HXDLIN(1668)				if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1668)					_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            				}
            				else {
HXLINE(1668)					_hx_tmp = true;
            				}
HXDLIN(1668)				if (_hx_tmp) {
HXLINE(1668)					layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,startIndex,endIndex);
HXDLIN(1668)					_gthis->layoutGroups->push(layoutGroup);
            				}
            				else {
HXLINE(1668)					layoutGroup->format = formatRange->format;
HXDLIN(1668)					layoutGroup->startIndex = startIndex;
HXDLIN(1668)					layoutGroup->endIndex = endIndex;
            				}
            			}
HXLINE(1670)			layoutGroup->positions = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1671)			layoutGroup->ascent = ascent;
HXLINE(1672)			layoutGroup->descent = descent;
HXLINE(1673)			layoutGroup->leading = leading;
HXLINE(1674)			layoutGroup->lineIndex = lineIndex;
HXLINE(1675)			int _hx_tmp1;
HXDLIN(1675)			if (firstLineOfParagraph) {
HXLINE(1675)				_hx_tmp1 = indent;
            			}
            			else {
HXLINE(1675)				_hx_tmp1 = 0;
            			}
HXDLIN(1675)			layoutGroup->offsetX = ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) );
HXLINE(1676)			layoutGroup->offsetY = (offsetY + 2);
HXLINE(1677)			layoutGroup->width = ( (Float)(0) );
HXLINE(1678)			layoutGroup->height = ( (Float)(heightValue) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLayoutGroups,(void))

::String TextEngine_obj::restrictText(::String value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1702_restrictText)
HXLINE(1703)		if (::hx::IsNull( value )) {
HXLINE(1705)			return value;
            		}
HXLINE(1708)		if (::hx::IsNotNull( this->_hx___restrictRegexp )) {
HXLINE(1710)			value = this->_hx___restrictRegexp->split(value)->join(HX_("",00,00,00,00));
            		}
HXLINE(1719)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,restrictText,return )

void TextEngine_obj::setTextAlignment(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1723_setTextAlignment)
HXLINE(1724)		int lineIndex = -1;
HXLINE(1725)		Float offsetX = ((Float)0.0);
HXLINE(1726)		Float totalWidth = (this->width - ( (Float)(4) ));
HXLINE(1727)		 ::openfl::text::_internal::TextLayoutGroup group;
HXLINE(1728)		int lineLength;
HXLINE(1729)		bool lineMeasurementsDirty = false;
HXLINE(1731)		{
HXLINE(1731)			int _g = 0;
HXDLIN(1731)			int _g1 = this->layoutGroups->get_length();
HXDLIN(1731)			while((_g < _g1)){
HXLINE(1731)				_g = (_g + 1);
HXDLIN(1731)				int i = (_g - 1);
HXLINE(1733)				group = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1735)				if ((group->lineIndex != lineIndex)) {
HXLINE(1737)					lineIndex = group->lineIndex;
HXLINE(1738)					totalWidth = ((this->width - ( (Float)(4) )) - ( (Float)(group->format->rightMargin) ));
HXLINE(1740)					 ::Dynamic _hx_switch_0 = group->format->align;
            					if (  (_hx_switch_0==0) ){
HXLINE(1743)						if ((this->lineWidths->get(lineIndex) < totalWidth)) {
HXLINE(1745)							offsetX = ( (Float)(::Math_obj::round(((totalWidth - this->lineWidths->get(lineIndex)) / ( (Float)(2) )))) );
            						}
            						else {
HXLINE(1749)							offsetX = ( (Float)(0) );
            						}
HXLINE(1743)						goto _hx_goto_125;
            					}
            					if (  (_hx_switch_0==2) ){
HXLINE(1763)						if ((this->lineWidths->get(lineIndex) < totalWidth)) {
HXLINE(1765)							lineLength = 1;
HXLINE(1767)							{
HXLINE(1767)								int _g = (i + 1);
HXDLIN(1767)								int _g1 = this->layoutGroups->get_length();
HXDLIN(1767)								while((_g < _g1)){
HXLINE(1767)									_g = (_g + 1);
HXDLIN(1767)									int j = (_g - 1);
HXLINE(1769)									if ((this->layoutGroups->get(j).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >()->lineIndex == lineIndex)) {
HXLINE(1771)										bool _hx_tmp;
HXDLIN(1771)										if ((j != 0)) {
HXLINE(1771)											::String _hx_tmp1 = this->text;
HXDLIN(1771)											_hx_tmp = ::hx::IsEq( _hx_tmp1.charCodeAt((this->layoutGroups->get(j).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >()->startIndex - 1)),32 );
            										}
            										else {
HXLINE(1771)											_hx_tmp = true;
            										}
HXDLIN(1771)										if (_hx_tmp) {
HXLINE(1773)											lineLength = (lineLength + 1);
            										}
            									}
            									else {
HXLINE(1778)										goto _hx_goto_126;
            									}
            								}
            								_hx_goto_126:;
            							}
HXLINE(1782)							if ((lineLength > 1)) {
HXLINE(1784)								group = this->layoutGroups->get(((i + lineLength) - 1)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1786)								 ::Dynamic endChar = this->text.charCodeAt(group->endIndex);
HXLINE(1787)								bool _hx_tmp;
HXDLIN(1787)								bool _hx_tmp1;
HXDLIN(1787)								if ((group->endIndex < this->text.length)) {
HXLINE(1787)									_hx_tmp1 = ::hx::IsNotEq( endChar,10 );
            								}
            								else {
HXLINE(1787)									_hx_tmp1 = false;
            								}
HXDLIN(1787)								if (_hx_tmp1) {
HXLINE(1787)									_hx_tmp = ::hx::IsNotEq( endChar,13 );
            								}
            								else {
HXLINE(1787)									_hx_tmp = false;
            								}
HXDLIN(1787)								if (_hx_tmp) {
HXLINE(1789)									offsetX = ((totalWidth - this->lineWidths->get(lineIndex)) / ( (Float)((lineLength - 1)) ));
HXLINE(1790)									lineMeasurementsDirty = true;
HXLINE(1792)									int j = 1;
HXLINE(1793)									while(true){
HXLINE(1802)										 ::openfl::text::_internal::TextLayoutGroup fh = this->layoutGroups->get((i + j)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1802)										fh->offsetX = (fh->offsetX + (offsetX * ( (Float)(j) )));
HXLINE(1804)										j = (j + 1);
HXLINE(1793)										if (!((j < lineLength))) {
HXLINE(1793)											goto _hx_goto_127;
            										}
            									}
            									_hx_goto_127:;
            								}
            							}
            						}
HXLINE(1809)						offsetX = ( (Float)(0) );
HXLINE(1762)						goto _hx_goto_125;
            					}
            					if (  (_hx_switch_0==4) ){
HXLINE(1753)						if ((this->lineWidths->get(lineIndex) < totalWidth)) {
HXLINE(1755)							offsetX = ( (Float)(::Math_obj::round((totalWidth - this->lineWidths->get(lineIndex)))) );
            						}
            						else {
HXLINE(1759)							offsetX = ( (Float)(0) );
            						}
HXLINE(1753)						goto _hx_goto_125;
            					}
            					/* default */{
HXLINE(1812)						offsetX = ( (Float)(0) );
            					}
            					_hx_goto_125:;
            				}
HXLINE(1816)				if ((offsetX > 0)) {
HXLINE(1818)					 ::openfl::text::_internal::TextLayoutGroup group1 = group;
HXDLIN(1818)					group1->offsetX = (group1->offsetX + offsetX);
            				}
            			}
            		}
HXLINE(1822)		if (lineMeasurementsDirty) {
HXLINE(1826)			this->getLineMeasurements();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,setTextAlignment,(void))

::String TextEngine_obj::trimText(::String value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1831_trimText)
HXLINE(1832)		if (::hx::IsNull( value )) {
HXLINE(1834)			return value;
            		}
HXLINE(1837)		bool _hx_tmp;
HXDLIN(1837)		if ((this->maxChars > 0)) {
HXLINE(1837)			_hx_tmp = (value.length > this->maxChars);
            		}
            		else {
HXLINE(1837)			_hx_tmp = false;
            		}
HXDLIN(1837)		if (_hx_tmp) {
HXLINE(1839)			value = value.substr(0,this->maxChars);
            		}
HXLINE(1842)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,trimText,return )

void TextEngine_obj::update(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1846_update)
HXLINE(1847)		bool _hx_tmp;
HXDLIN(1847)		if (::hx::IsNotNull( this->text )) {
HXLINE(1847)			_hx_tmp = (this->textFormatRanges->get_length() == 0);
            		}
            		else {
HXLINE(1847)			_hx_tmp = true;
            		}
HXDLIN(1847)		if (_hx_tmp) {
HXLINE(1849)			this->lineAscents->set_length(0);
HXLINE(1850)			this->lineBreaks->set_length(0);
HXLINE(1851)			this->lineDescents->set_length(0);
HXLINE(1852)			this->lineLeadings->set_length(0);
HXLINE(1853)			this->lineHeights->set_length(0);
HXLINE(1854)			this->lineWidths->set_length(0);
HXLINE(1855)			this->layoutGroups->set_length(0);
HXLINE(1857)			this->textWidth = ( (Float)(0) );
HXLINE(1858)			this->textHeight = ( (Float)(0) );
HXLINE(1859)			this->numLines = 1;
HXLINE(1860)			this->maxScrollH = 0;
HXLINE(1861)			this->maxScrollV = 1;
HXLINE(1862)			this->bottomScrollV = 1;
            		}
            		else {
HXLINE(1866)			this->getLineBreaks();
HXLINE(1867)			this->getLayoutGroups();
HXLINE(1868)			this->getLineMeasurements();
HXLINE(1869)			this->setTextAlignment();
            		}
HXLINE(1872)		this->getBounds();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,update,(void))

int TextEngine_obj::get_bottomScrollV(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1879_get_bottomScrollV)
HXDLIN(1879)		bool _hx_tmp;
HXDLIN(1879)		if ((this->numLines != 1)) {
HXDLIN(1879)			_hx_tmp = ::hx::IsNull( this->lineHeights );
            		}
            		else {
HXDLIN(1879)			_hx_tmp = true;
            		}
HXDLIN(1879)		if (_hx_tmp) {
HXLINE(1881)			return 1;
            		}
            		else {
HXLINE(1885)			int ret = this->lineHeights->get_length();
HXLINE(1887)			Float tempHeight;
HXDLIN(1887)			if ((this->lineLeadings->get_length() == ret)) {
HXLINE(1887)				tempHeight = -(this->lineLeadings->get((ret - 1)));
            			}
            			else {
HXLINE(1887)				tempHeight = ((Float)0.0);
            			}
HXLINE(1889)			{
HXLINE(1889)				int _g;
HXDLIN(1889)				if ((this->get_scrollV() > 0)) {
HXLINE(1889)					_g = this->get_scrollV();
            				}
            				else {
HXLINE(1889)					_g = 1;
            				}
HXDLIN(1889)				int _g1 = (_g - 1);
HXDLIN(1889)				int _g2 = this->lineHeights->get_length();
HXDLIN(1889)				while((_g1 < _g2)){
HXLINE(1889)					_g1 = (_g1 + 1);
HXDLIN(1889)					int i = (_g1 - 1);
HXLINE(1891)					Float lineHeight = this->lineHeights->get(i);
HXLINE(1893)					tempHeight = (tempHeight + lineHeight);
HXLINE(1895)					if ((tempHeight > (this->height - ( (Float)(4) )))) {
HXLINE(1897)						int ret1;
HXDLIN(1897)						if (((tempHeight - this->height) >= 0)) {
HXLINE(1897)							ret1 = 0;
            						}
            						else {
HXLINE(1897)							ret1 = 1;
            						}
HXDLIN(1897)						ret = (i + ret1);
HXLINE(1898)						goto _hx_goto_131;
            					}
            				}
            				_hx_goto_131:;
            			}
HXLINE(1913)			if ((ret < this->get_scrollV())) {
HXLINE(1913)				return this->get_scrollV();
            			}
HXLINE(1919)			return ret;
            		}
HXLINE(1879)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,get_bottomScrollV,return )

int TextEngine_obj::get_maxScrollV(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1926_get_maxScrollV)
HXDLIN(1926)		bool _hx_tmp;
HXDLIN(1926)		if ((this->numLines != 1)) {
HXDLIN(1926)			_hx_tmp = ::hx::IsNull( this->lineHeights );
            		}
            		else {
HXDLIN(1926)			_hx_tmp = true;
            		}
HXDLIN(1926)		if (_hx_tmp) {
HXLINE(1928)			return 1;
            		}
            		else {
HXLINE(1932)			int i = (this->numLines - 1);
HXDLIN(1932)			Float tempHeight = ((Float)0.0);
HXLINE(1933)			int j = i;
HXLINE(1936)			while((i >= 0)){
HXLINE(1938)				tempHeight = (tempHeight + this->lineHeights->get(i));
HXLINE(1940)				if ((tempHeight > (this->height - ( (Float)(4) )))) {
HXLINE(1942)					int i1;
HXDLIN(1942)					if (((tempHeight - this->height) < 0)) {
HXLINE(1942)						i1 = 1;
            					}
            					else {
HXLINE(1942)						i1 = 2;
            					}
HXDLIN(1942)					i = (i + i1);
HXLINE(1943)					goto _hx_goto_133;
            				}
HXLINE(1945)				i = (i - 1);
            			}
            			_hx_goto_133:;
HXLINE(1961)			if ((i < 1)) {
HXLINE(1961)				return 1;
            			}
HXLINE(1962)			return i;
            		}
HXLINE(1926)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,get_maxScrollV,return )

::String TextEngine_obj::set_restrict(::String value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1967_set_restrict)
HXLINE(1968)		if ((this->restrict == value)) {
HXLINE(1970)			return this->restrict;
            		}
HXLINE(1973)		this->restrict = value;
HXLINE(1975)		bool _hx_tmp;
HXDLIN(1975)		if (::hx::IsNotNull( this->restrict )) {
HXLINE(1975)			_hx_tmp = (this->restrict.length == 0);
            		}
            		else {
HXLINE(1975)			_hx_tmp = true;
            		}
HXDLIN(1975)		if (_hx_tmp) {
HXLINE(1977)			this->_hx___restrictRegexp = null();
            		}
            		else {
HXLINE(1981)			this->_hx___restrictRegexp = this->createRestrictRegexp(value);
            		}
HXLINE(1984)		return this->restrict;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,set_restrict,return )

int TextEngine_obj::get_scrollV(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1988_get_scrollV)
HXLINE(1989)		bool _hx_tmp;
HXDLIN(1989)		if ((this->numLines != 1)) {
HXLINE(1989)			_hx_tmp = ::hx::IsNull( this->lineHeights );
            		}
            		else {
HXLINE(1989)			_hx_tmp = true;
            		}
HXDLIN(1989)		if (_hx_tmp) {
HXLINE(1989)			return 1;
            		}
HXLINE(1991)		int max = this->get_maxScrollV();
HXLINE(1994)		if ((this->scrollV > max)) {
HXLINE(1994)			return max;
            		}
HXLINE(1996)		return this->scrollV;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,get_scrollV,return )

int TextEngine_obj::set_scrollV(int value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_2000_set_scrollV)
HXLINE(2001)		if ((value < 1)) {
HXLINE(2001)			value = 1;
            		}
            		else {
HXLINE(2002)			if ((value > this->get_maxScrollV())) {
HXLINE(2002)				value = this->get_maxScrollV();
            			}
            		}
HXLINE(2004)		return (this->scrollV = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,set_scrollV,return )

::String TextEngine_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_2009_set_text)
HXDLIN(2009)		return (this->text = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,set_text,return )

int TextEngine_obj::GUTTER;

int TextEngine_obj::UTF8_TAB;

int TextEngine_obj::UTF8_ENDLINE;

int TextEngine_obj::UTF8_SPACE;

int TextEngine_obj::UTF8_HYPHEN;

 ::haxe::ds::StringMap TextEngine_obj::_hx___defaultFonts;

 ::openfl::text::Font TextEngine_obj::findFont(::String name){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_207_findFont)
HXLINE( 211)		{
HXLINE( 211)			int _g = 0;
HXDLIN( 211)			::Array< ::Dynamic> _g1 = ::openfl::text::Font_obj::_hx___registeredFonts;
HXDLIN( 211)			while((_g < _g1->length)){
HXLINE( 211)				 ::openfl::text::Font registeredFont = _g1->__get(_g).StaticCast<  ::openfl::text::Font >();
HXDLIN( 211)				_g = (_g + 1);
HXLINE( 213)				if (::hx::IsNull( registeredFont )) {
HXLINE( 213)					continue;
            				}
HXLINE( 215)				bool _hx_tmp;
HXDLIN( 215)				if ((registeredFont->name != name)) {
HXLINE( 216)					if (::hx::IsNotNull( registeredFont->_hx___fontPath )) {
HXLINE( 217)						if ((registeredFont->_hx___fontPath != name)) {
HXLINE( 215)							_hx_tmp = (registeredFont->_hx___fontPathWithoutDirectory == name);
            						}
            						else {
HXLINE( 215)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 215)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 215)					_hx_tmp = true;
            				}
HXDLIN( 215)				if (_hx_tmp) {
HXLINE( 219)					if (registeredFont->_hx___initialize()) {
HXLINE( 221)						return registeredFont;
            					}
            				}
            			}
            		}
HXLINE( 230)		 ::openfl::text::Font font = ::openfl::text::Font_obj::fromFile(name);
HXLINE( 232)		if (::hx::IsNotNull( font )) {
HXLINE( 234)			::openfl::text::Font_obj::_hx___registeredFonts->push(font);
HXLINE( 235)			::openfl::text::Font_obj::_hx___fontByName->set(font->name,font);
HXLINE( 236)			return font;
            		}
HXLINE( 240)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,findFont,return )

 ::openfl::text::Font TextEngine_obj::findFontVariant( ::openfl::text::TextFormat format){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_244_findFontVariant)
HXLINE( 245)		::String fontName = format->font;
HXLINE( 246)		 ::Dynamic bold = format->bold;
HXLINE( 247)		 ::Dynamic italic = format->italic;
HXLINE( 249)		if (::hx::IsNull( fontName )) {
HXLINE( 249)			fontName = HX_("_serif",be,66,15,76);
            		}
HXLINE( 250)		::String fontNamePrefix = ::StringTools_obj::replace(::StringTools_obj::replace(fontName,HX_(" Normal",67,be,ac,97),HX_("",00,00,00,00)),HX_(" Regular",1c,be,27,76),HX_("",00,00,00,00));
HXLINE( 252)		bool _hx_tmp;
HXDLIN( 252)		bool _hx_tmp1;
HXDLIN( 252)		if (( (bool)(bold) )) {
HXLINE( 252)			_hx_tmp1 = ( (bool)(italic) );
            		}
            		else {
HXLINE( 252)			_hx_tmp1 = false;
            		}
HXDLIN( 252)		if (_hx_tmp1) {
HXLINE( 252)			_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Bold Italic",0b,b0,c3,94)));
            		}
            		else {
HXLINE( 252)			_hx_tmp = false;
            		}
HXDLIN( 252)		if (_hx_tmp) {
HXLINE( 254)			return ::openfl::text::_internal::TextEngine_obj::findFont((fontNamePrefix + HX_(" Bold Italic",0b,b0,c3,94)));
            		}
            		else {
HXLINE( 256)			bool _hx_tmp;
HXDLIN( 256)			if (( (bool)(bold) )) {
HXLINE( 256)				_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Bold",c5,3d,c7,98)));
            			}
            			else {
HXLINE( 256)				_hx_tmp = false;
            			}
HXDLIN( 256)			if (_hx_tmp) {
HXLINE( 258)				return ::openfl::text::_internal::TextEngine_obj::findFont((fontNamePrefix + HX_(" Bold",c5,3d,c7,98)));
            			}
            			else {
HXLINE( 260)				bool _hx_tmp;
HXDLIN( 260)				if (( (bool)(italic) )) {
HXLINE( 260)					_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Italic",30,7b,a7,6d)));
            				}
            				else {
HXLINE( 260)					_hx_tmp = false;
            				}
HXDLIN( 260)				if (_hx_tmp) {
HXLINE( 262)					return ::openfl::text::_internal::TextEngine_obj::findFont((fontNamePrefix + HX_(" Italic",30,7b,a7,6d)));
            				}
            			}
            		}
HXLINE( 265)		return ::openfl::text::_internal::TextEngine_obj::findFont(fontName);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,findFontVariant,return )

 ::openfl::text::Font TextEngine_obj::getDefaultFont(::String name,bool bold,bool italic){
            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_303_getDefaultFont)
HXLINE( 304)		if (::hx::IsNull( ::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			 ::openfl::text::Font _hx_run(::Array< ::String > list){
            				HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_312_getDefaultFont)
HXLINE( 313)				 ::openfl::text::Font font = null();
HXLINE( 314)				{
HXLINE( 314)					int _g = 0;
HXDLIN( 314)					while((_g < list->length)){
HXLINE( 314)						::String path = list->__get(_g);
HXDLIN( 314)						_g = (_g + 1);
HXLINE( 316)						font = ::openfl::text::_internal::TextEngine_obj::findFont(path);
HXLINE( 317)						if (::hx::IsNotNull( font )) {
HXLINE( 317)							goto _hx_goto_142;
            						}
            					}
            					_hx_goto_142:;
            				}
HXLINE( 319)				return font;
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 306)			::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 309)			::String systemFontDirectory = ::lime::_hx_system::System_obj::get_fontsDirectory();
HXLINE( 311)			 ::Dynamic processFontList =  ::Dynamic(new _hx_Closure_0());
HXLINE( 323)			{
HXLINE( 323)				::Dynamic this1 = ::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts;
HXLINE( 324)				 ::openfl::text::Font value = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/arial.ttf",2c,34,8e,d8)));
HXDLIN( 324)				 ::openfl::text::Font value1 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/arialbd.ttf",ee,27,90,25)));
HXLINE( 325)				 ::openfl::text::Font value2 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/ariali.ttf",2d,c9,3e,6e)));
HXLINE( 323)				( ( ::haxe::ds::StringMap)(this1) )->set(HX_("_sans",32,a0,5e,ff), ::openfl::text::_internal::_TextEngine::DefaultFontSet_obj::__alloc( HX_CTX ,value,value1,value2,::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/arialbi.ttf",73,0e,91,06)))));
            			}
HXLINE( 327)			{
HXLINE( 327)				::Dynamic this2 = ::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts;
HXLINE( 328)				 ::openfl::text::Font value3 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/times.ttf",2f,58,44,c5)));
HXDLIN( 328)				 ::openfl::text::Font value4 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/timesbd.ttf",b1,92,19,47)));
HXLINE( 329)				 ::openfl::text::Font value5 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/timesi.ttf",ca,27,e8,a0)));
HXLINE( 327)				( ( ::haxe::ds::StringMap)(this2) )->set(HX_("_serif",be,66,15,76), ::openfl::text::_internal::_TextEngine::DefaultFontSet_obj::__alloc( HX_CTX ,value3,value4,value5,::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/timesbi.ttf",36,79,1a,28)))));
            			}
HXLINE( 331)			{
HXLINE( 331)				::Dynamic this3 = ::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts;
HXLINE( 332)				 ::openfl::text::Font value6 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/cour.ttf",30,7b,d2,6a)));
HXDLIN( 332)				 ::openfl::text::Font value7 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/courbd.ttf",f2,37,b7,06)));
HXLINE( 333)				 ::openfl::text::Font value8 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/couri.ttf",a9,a5,b8,d7)));
HXLINE( 331)				( ( ::haxe::ds::StringMap)(this3) )->set(HX_("_typewriter",0c,5e,52,94), ::openfl::text::_internal::_TextEngine::DefaultFontSet_obj::__alloc( HX_CTX ,value6,value7,value8,::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/courbi.ttf",77,1e,b8,e7)))));
            			}
            		}
HXLINE( 425)		 ::openfl::text::_internal::_TextEngine::DefaultFontSet fontSet = ( ( ::openfl::text::_internal::_TextEngine::DefaultFontSet)(::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts->get(name)) );
HXLINE( 426)		if (::hx::IsNull( fontSet )) {
HXLINE( 426)			return null();
            		}
HXLINE( 428)		bool _hx_tmp;
HXDLIN( 428)		bool _hx_tmp1;
HXDLIN( 428)		if (bold) {
HXLINE( 428)			_hx_tmp1 = italic;
            		}
            		else {
HXLINE( 428)			_hx_tmp1 = false;
            		}
HXDLIN( 428)		if (_hx_tmp1) {
HXLINE( 428)			_hx_tmp = ::hx::IsNotNull( fontSet->boldItalic );
            		}
            		else {
HXLINE( 428)			_hx_tmp = false;
            		}
HXDLIN( 428)		if (_hx_tmp) {
HXLINE( 428)			return fontSet->boldItalic;
            		}
            		else {
HXLINE( 428)			bool _hx_tmp;
HXDLIN( 428)			if (italic) {
HXLINE( 428)				_hx_tmp = ::hx::IsNotNull( fontSet->italic );
            			}
            			else {
HXLINE( 428)				_hx_tmp = false;
            			}
HXDLIN( 428)			if (_hx_tmp) {
HXLINE( 428)				return fontSet->italic;
            			}
            			else {
HXLINE( 428)				bool _hx_tmp;
HXDLIN( 428)				if (bold) {
HXLINE( 428)					_hx_tmp = ::hx::IsNotNull( fontSet->bold );
            				}
            				else {
HXLINE( 428)					_hx_tmp = false;
            				}
HXDLIN( 428)				if (_hx_tmp) {
HXLINE( 428)					return fontSet->bold;
            				}
            				else {
HXLINE( 428)					return fontSet->normal;
            				}
            			}
            		}
HXDLIN( 428)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TextEngine_obj,getDefaultFont,return )

Float TextEngine_obj::getFormatHeight( ::openfl::text::TextFormat format){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_432_getFormatHeight)
HXLINE( 433)		Float ascent;
HXDLIN( 433)		Float descent;
HXLINE( 443)		 ::openfl::text::Font font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(format);
HXLINE( 445)		if (::hx::IsNotNull( format->_hx___ascent )) {
HXLINE( 447)			ascent = (( (Float)(format->size) ) * ( (Float)(format->_hx___ascent) ));
HXLINE( 448)			descent = (( (Float)(format->size) ) * ( (Float)(format->_hx___descent) ));
            		}
            		else {
HXLINE( 450)			bool _hx_tmp;
HXDLIN( 450)			if (::hx::IsNotNull( font )) {
HXLINE( 450)				_hx_tmp = (font->unitsPerEM != 0);
            			}
            			else {
HXLINE( 450)				_hx_tmp = false;
            			}
HXDLIN( 450)			if (_hx_tmp) {
HXLINE( 453)				ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(format->size) ));
HXLINE( 454)				descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(format->size) )));
            			}
            			else {
HXLINE( 462)				ascent = ( (Float)(format->size) );
HXLINE( 463)				descent = (( (Float)(format->size) ) * ((Float)0.185));
            			}
            		}
HXLINE( 433)		int leading = ( (int)(format->leading) );
HXLINE( 468)		return ((ascent + descent) + leading);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFormatHeight,return )

::String TextEngine_obj::getFont( ::openfl::text::TextFormat format){
            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_472_getFont)
HXLINE( 473)		::String fontName = format->font;
HXLINE( 474)		 ::Dynamic bold = format->bold;
HXLINE( 475)		 ::Dynamic italic = format->italic;
HXLINE( 477)		if (::hx::IsNull( fontName )) {
HXLINE( 477)			fontName = HX_("_serif",be,66,15,76);
            		}
HXLINE( 478)		::String fontNamePrefix = ::StringTools_obj::replace(::StringTools_obj::replace(fontName,HX_(" Normal",67,be,ac,97),HX_("",00,00,00,00)),HX_(" Regular",1c,be,27,76),HX_("",00,00,00,00));
HXLINE( 480)		bool _hx_tmp;
HXDLIN( 480)		bool _hx_tmp1;
HXDLIN( 480)		if (( (bool)(bold) )) {
HXLINE( 480)			_hx_tmp1 = ( (bool)(italic) );
            		}
            		else {
HXLINE( 480)			_hx_tmp1 = false;
            		}
HXDLIN( 480)		if (_hx_tmp1) {
HXLINE( 480)			_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Bold Italic",0b,b0,c3,94)));
            		}
            		else {
HXLINE( 480)			_hx_tmp = false;
            		}
HXDLIN( 480)		if (_hx_tmp) {
HXLINE( 482)			fontName = (fontNamePrefix + HX_(" Bold Italic",0b,b0,c3,94));
HXLINE( 483)			bold = false;
HXLINE( 484)			italic = false;
            		}
            		else {
HXLINE( 486)			bool _hx_tmp;
HXDLIN( 486)			if (( (bool)(bold) )) {
HXLINE( 486)				_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Bold",c5,3d,c7,98)));
            			}
            			else {
HXLINE( 486)				_hx_tmp = false;
            			}
HXDLIN( 486)			if (_hx_tmp) {
HXLINE( 488)				fontName = (fontNamePrefix + HX_(" Bold",c5,3d,c7,98));
HXLINE( 489)				bold = false;
            			}
            			else {
HXLINE( 491)				bool _hx_tmp;
HXDLIN( 491)				if (( (bool)(italic) )) {
HXLINE( 491)					_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Italic",30,7b,a7,6d)));
            				}
            				else {
HXLINE( 491)					_hx_tmp = false;
            				}
HXDLIN( 491)				if (_hx_tmp) {
HXLINE( 493)					fontName = (fontNamePrefix + HX_(" Italic",30,7b,a7,6d));
HXLINE( 494)					italic = false;
            				}
            				else {
HXLINE( 500)					bool _hx_tmp;
HXDLIN( 500)					if (( (bool)(bold) )) {
HXLINE( 500)						if ((fontName.indexOf(HX_(" Bold ",bb,ce,8e,15),null()) <= -1)) {
HXLINE( 500)							_hx_tmp = ::StringTools_obj::endsWith(fontName,HX_(" Bold",c5,3d,c7,98));
            						}
            						else {
HXLINE( 500)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 500)						_hx_tmp = false;
            					}
HXDLIN( 500)					if (_hx_tmp) {
HXLINE( 502)						bold = false;
            					}
HXLINE( 505)					bool _hx_tmp1;
HXDLIN( 505)					if (( (bool)(italic) )) {
HXLINE( 505)						if ((fontName.indexOf(HX_(" Italic ",f0,4e,e4,84),null()) <= -1)) {
HXLINE( 505)							_hx_tmp1 = ::StringTools_obj::endsWith(fontName,HX_(" Italic",30,7b,a7,6d));
            						}
            						else {
HXLINE( 505)							_hx_tmp1 = true;
            						}
            					}
            					else {
HXLINE( 505)						_hx_tmp1 = false;
            					}
HXDLIN( 505)					if (_hx_tmp1) {
HXLINE( 507)						italic = false;
            					}
            				}
            			}
            		}
HXLINE( 511)		::String font;
HXDLIN( 511)		if (( (bool)(italic) )) {
HXLINE( 511)			font = HX_("italic ",30,e3,44,91);
            		}
            		else {
HXLINE( 511)			font = HX_("normal ",19,70,da,2b);
            		}
HXLINE( 512)		font = (font + HX_("normal ",19,70,da,2b));
HXLINE( 513)		::String font1;
HXDLIN( 513)		if (( (bool)(bold) )) {
HXLINE( 513)			font1 = HX_("bold ",fb,d2,f5,b6);
            		}
            		else {
HXLINE( 513)			font1 = HX_("normal ",19,70,da,2b);
            		}
HXDLIN( 513)		font = (font + font1);
HXLINE( 514)		font = (font + (format->size + HX_("px",08,62,00,00)));
HXLINE( 516)		font = (font + ((HX_("/",2f,00,00,00) + (format->size + 3)) + HX_("px ",18,65,55,00)));
HXLINE( 518)		::String font2;
HXDLIN( 518)		::String _hx_switch_0 = fontName;
            		if (  (_hx_switch_0==HX_("_sans",32,a0,5e,ff)) ){
HXLINE( 518)			font2 = HX_("sans-serif",c3,60,fb,08);
HXDLIN( 518)			goto _hx_goto_146;
            		}
            		if (  (_hx_switch_0==HX_("_serif",be,66,15,76)) ){
HXLINE( 518)			font2 = HX_("serif",7d,1f,2e,7a);
HXDLIN( 518)			goto _hx_goto_146;
            		}
            		if (  (_hx_switch_0==HX_("_typewriter",0c,5e,52,94)) ){
HXLINE( 518)			font2 = HX_("monospace",c3,d1,e5,5e);
HXDLIN( 518)			goto _hx_goto_146;
            		}
            		/* default */{
HXLINE( 518)			font2 = ((HX_("'",27,00,00,00) +  ::EReg_obj::__alloc( HX_CTX ,HX_("^[\\s'\"]+(.*)[\\s'\"]+$",eb,e4,eb,f5),HX_("",00,00,00,00))->replace(fontName,HX_("$1",8d,1f,00,00))) + HX_("'",27,00,00,00));
            		}
            		_hx_goto_146:;
HXDLIN( 518)		font = (font + (HX_("",00,00,00,00) + font2));
HXLINE( 526)		return font;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFont,return )

 ::openfl::text::Font TextEngine_obj::getFontInstance( ::openfl::text::TextFormat format){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_530_getFontInstance)
HXLINE( 534)		 ::openfl::text::Font instance = null();
HXLINE( 536)		bool _hx_tmp;
HXDLIN( 536)		if (::hx::IsNotNull( format )) {
HXLINE( 536)			_hx_tmp = ::hx::IsNotNull( format->font );
            		}
            		else {
HXLINE( 536)			_hx_tmp = false;
            		}
HXDLIN( 536)		if (_hx_tmp) {
HXLINE( 538)			::String _hx_switch_0 = format->font;
            			if (  (_hx_switch_0==HX_("_sans",32,a0,5e,ff)) ||  (_hx_switch_0==HX_("_serif",be,66,15,76)) ||  (_hx_switch_0==HX_("_typewriter",0c,5e,52,94)) ){
HXLINE( 541)				instance = ::openfl::text::_internal::TextEngine_obj::getDefaultFont(format->font,( (bool)(format->bold) ),( (bool)(format->italic) ));
HXLINE( 542)				if (::hx::IsNotNull( instance )) {
HXLINE( 542)					return instance;
            				}
HXLINE( 540)				goto _hx_goto_148;
            			}
            			/* default */{
            			}
            			_hx_goto_148:;
HXLINE( 546)			instance = ::openfl::text::_internal::TextEngine_obj::findFontVariant(format);
HXLINE( 547)			if (::hx::IsNotNull( instance )) {
HXLINE( 547)				return instance;
            			}
            		}
HXLINE( 550)		instance = ::openfl::text::_internal::TextEngine_obj::getDefaultFont(HX_("_serif",be,66,15,76),( (bool)(format->bold) ),( (bool)(format->italic) ));
HXLINE( 551)		if (::hx::IsNotNull( instance )) {
HXLINE( 551)			return instance;
            		}
HXLINE( 554)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFontInstance,return )


::hx::ObjectPtr< TextEngine_obj > TextEngine_obj::__new( ::openfl::text::TextField textField) {
	::hx::ObjectPtr< TextEngine_obj > __this = new TextEngine_obj();
	__this->__construct(textField);
	return __this;
}

::hx::ObjectPtr< TextEngine_obj > TextEngine_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::text::TextField textField) {
	TextEngine_obj *__this = (TextEngine_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextEngine_obj), true, "openfl.text._internal.TextEngine"));
	*(void **)__this = TextEngine_obj::_hx_vtable;
	__this->__construct(textField);
	return __this;
}

TextEngine_obj::TextEngine_obj()
{
}

void TextEngine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEngine);
	HX_MARK_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_MARK_MEMBER_NAME(autoSize,"autoSize");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(caretIndex,"caretIndex");
	HX_MARK_MEMBER_NAME(embedFonts,"embedFonts");
	HX_MARK_MEMBER_NAME(gridFitType,"gridFitType");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(layoutGroups,"layoutGroups");
	HX_MARK_MEMBER_NAME(lineAscents,"lineAscents");
	HX_MARK_MEMBER_NAME(lineBreaks,"lineBreaks");
	HX_MARK_MEMBER_NAME(lineDescents,"lineDescents");
	HX_MARK_MEMBER_NAME(lineLeadings,"lineLeadings");
	HX_MARK_MEMBER_NAME(lineHeights,"lineHeights");
	HX_MARK_MEMBER_NAME(lineWidths,"lineWidths");
	HX_MARK_MEMBER_NAME(maxChars,"maxChars");
	HX_MARK_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_MARK_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_MARK_MEMBER_NAME(multiline,"multiline");
	HX_MARK_MEMBER_NAME(numLines,"numLines");
	HX_MARK_MEMBER_NAME(restrict,"restrict");
	HX_MARK_MEMBER_NAME(scrollH,"scrollH");
	HX_MARK_MEMBER_NAME(scrollV,"scrollV");
	HX_MARK_MEMBER_NAME(selectable,"selectable");
	HX_MARK_MEMBER_NAME(sharpness,"sharpness");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(textBounds,"textBounds");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(textFormatRanges,"textFormatRanges");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(wordWrap,"wordWrap");
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(_hx___cursorTimer,"__cursorTimer");
	HX_MARK_MEMBER_NAME(_hx___hasFocus,"__hasFocus");
	HX_MARK_MEMBER_NAME(_hx___isKeyDown,"__isKeyDown");
	HX_MARK_MEMBER_NAME(_hx___measuredHeight,"__measuredHeight");
	HX_MARK_MEMBER_NAME(_hx___measuredWidth,"__measuredWidth");
	HX_MARK_MEMBER_NAME(_hx___restrictRegexp,"__restrictRegexp");
	HX_MARK_MEMBER_NAME(_hx___selectionStart,"__selectionStart");
	HX_MARK_MEMBER_NAME(_hx___shapeCache,"__shapeCache");
	HX_MARK_MEMBER_NAME(_hx___showCursor,"__showCursor");
	HX_MARK_MEMBER_NAME(_hx___textFormat,"__textFormat");
	HX_MARK_MEMBER_NAME(_hx___textLayout,"__textLayout");
	HX_MARK_MEMBER_NAME(_hx___texture,"__texture");
	HX_MARK_MEMBER_NAME(_hx___useIntAdvances,"__useIntAdvances");
	HX_MARK_MEMBER_NAME(_hx___cairoFont,"__cairoFont");
	HX_MARK_MEMBER_NAME(_hx___font,"__font");
	HX_MARK_END_CLASS();
}

void TextEngine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_VISIT_MEMBER_NAME(autoSize,"autoSize");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(caretIndex,"caretIndex");
	HX_VISIT_MEMBER_NAME(embedFonts,"embedFonts");
	HX_VISIT_MEMBER_NAME(gridFitType,"gridFitType");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(layoutGroups,"layoutGroups");
	HX_VISIT_MEMBER_NAME(lineAscents,"lineAscents");
	HX_VISIT_MEMBER_NAME(lineBreaks,"lineBreaks");
	HX_VISIT_MEMBER_NAME(lineDescents,"lineDescents");
	HX_VISIT_MEMBER_NAME(lineLeadings,"lineLeadings");
	HX_VISIT_MEMBER_NAME(lineHeights,"lineHeights");
	HX_VISIT_MEMBER_NAME(lineWidths,"lineWidths");
	HX_VISIT_MEMBER_NAME(maxChars,"maxChars");
	HX_VISIT_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_VISIT_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_VISIT_MEMBER_NAME(multiline,"multiline");
	HX_VISIT_MEMBER_NAME(numLines,"numLines");
	HX_VISIT_MEMBER_NAME(restrict,"restrict");
	HX_VISIT_MEMBER_NAME(scrollH,"scrollH");
	HX_VISIT_MEMBER_NAME(scrollV,"scrollV");
	HX_VISIT_MEMBER_NAME(selectable,"selectable");
	HX_VISIT_MEMBER_NAME(sharpness,"sharpness");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(textBounds,"textBounds");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(textFormatRanges,"textFormatRanges");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(wordWrap,"wordWrap");
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(_hx___cursorTimer,"__cursorTimer");
	HX_VISIT_MEMBER_NAME(_hx___hasFocus,"__hasFocus");
	HX_VISIT_MEMBER_NAME(_hx___isKeyDown,"__isKeyDown");
	HX_VISIT_MEMBER_NAME(_hx___measuredHeight,"__measuredHeight");
	HX_VISIT_MEMBER_NAME(_hx___measuredWidth,"__measuredWidth");
	HX_VISIT_MEMBER_NAME(_hx___restrictRegexp,"__restrictRegexp");
	HX_VISIT_MEMBER_NAME(_hx___selectionStart,"__selectionStart");
	HX_VISIT_MEMBER_NAME(_hx___shapeCache,"__shapeCache");
	HX_VISIT_MEMBER_NAME(_hx___showCursor,"__showCursor");
	HX_VISIT_MEMBER_NAME(_hx___textFormat,"__textFormat");
	HX_VISIT_MEMBER_NAME(_hx___textLayout,"__textLayout");
	HX_VISIT_MEMBER_NAME(_hx___texture,"__texture");
	HX_VISIT_MEMBER_NAME(_hx___useIntAdvances,"__useIntAdvances");
	HX_VISIT_MEMBER_NAME(_hx___cairoFont,"__cairoFont");
	HX_VISIT_MEMBER_NAME(_hx___font,"__font");
}

::hx::Val TextEngine_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return ::hx::Val( border ); }
		if (HX_FIELD_EQ(inName,"bounds") ) { return ::hx::Val( bounds ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"__font") ) { return ::hx::Val( _hx___font ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { return ::hx::Val( scrollH ); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_scrollV() : scrollV ); }
		if (HX_FIELD_EQ(inName,"getLine") ) { return ::hx::Val( getLine_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return ::hx::Val( autoSize ); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { return ::hx::Val( maxChars ); }
		if (HX_FIELD_EQ(inName,"numLines") ) { return ::hx::Val( numLines ); }
		if (HX_FIELD_EQ(inName,"restrict") ) { return ::hx::Val( restrict ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return ::hx::Val( wordWrap ); }
		if (HX_FIELD_EQ(inName,"trimText") ) { return ::hx::Val( trimText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { return ::hx::Val( multiline ); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { return ::hx::Val( sharpness ); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return ::hx::Val( textWidth ); }
		if (HX_FIELD_EQ(inName,"textField") ) { return ::hx::Val( textField ); }
		if (HX_FIELD_EQ(inName,"__texture") ) { return ::hx::Val( _hx___texture ); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { return ::hx::Val( caretIndex ); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { return ::hx::Val( embedFonts ); }
		if (HX_FIELD_EQ(inName,"lineBreaks") ) { return ::hx::Val( lineBreaks ); }
		if (HX_FIELD_EQ(inName,"lineWidths") ) { return ::hx::Val( lineWidths ); }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { return ::hx::Val( maxScrollH ); }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_maxScrollV() : maxScrollV ); }
		if (HX_FIELD_EQ(inName,"selectable") ) { return ::hx::Val( selectable ); }
		if (HX_FIELD_EQ(inName,"textBounds") ) { return ::hx::Val( textBounds ); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return ::hx::Val( textHeight ); }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { return ::hx::Val( _hx___hasFocus ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return ::hx::Val( borderColor ); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { return ::hx::Val( gridFitType ); }
		if (HX_FIELD_EQ(inName,"lineAscents") ) { return ::hx::Val( lineAscents ); }
		if (HX_FIELD_EQ(inName,"lineHeights") ) { return ::hx::Val( lineHeights ); }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { return ::hx::Val( _hx___isKeyDown ); }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { return ::hx::Val( _hx___cairoFont ); }
		if (HX_FIELD_EQ(inName,"get_scrollV") ) { return ::hx::Val( get_scrollV_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scrollV") ) { return ::hx::Val( set_scrollV_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layoutGroups") ) { return ::hx::Val( layoutGroups ); }
		if (HX_FIELD_EQ(inName,"lineDescents") ) { return ::hx::Val( lineDescents ); }
		if (HX_FIELD_EQ(inName,"lineLeadings") ) { return ::hx::Val( lineLeadings ); }
		if (HX_FIELD_EQ(inName,"__shapeCache") ) { return ::hx::Val( _hx___shapeCache ); }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { return ::hx::Val( _hx___showCursor ); }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { return ::hx::Val( _hx___textFormat ); }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { return ::hx::Val( _hx___textLayout ); }
		if (HX_FIELD_EQ(inName,"restrictText") ) { return ::hx::Val( restrictText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_restrict") ) { return ::hx::Val( set_restrict_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { return ::hx::Val( antiAliasType ); }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_bottomScrollV() : bottomScrollV ); }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { return ::hx::Val( _hx___cursorTimer ); }
		if (HX_FIELD_EQ(inName,"getLineBreaks") ) { return ::hx::Val( getLineBreaks_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_maxScrollV") ) { return ::hx::Val( get_maxScrollV_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return ::hx::Val( backgroundColor ); }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { return ::hx::Val( _hx___measuredWidth ); }
		if (HX_FIELD_EQ(inName,"getLayoutGroups") ) { return ::hx::Val( getLayoutGroups_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textFormatRanges") ) { return ::hx::Val( textFormatRanges ); }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { return ::hx::Val( _hx___measuredHeight ); }
		if (HX_FIELD_EQ(inName,"__restrictRegexp") ) { return ::hx::Val( _hx___restrictRegexp ); }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { return ::hx::Val( _hx___selectionStart ); }
		if (HX_FIELD_EQ(inName,"__useIntAdvances") ) { return ::hx::Val( _hx___useIntAdvances ); }
		if (HX_FIELD_EQ(inName,"setTextAlignment") ) { return ::hx::Val( setTextAlignment_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getLineBreakIndex") ) { return ::hx::Val( getLineBreakIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bottomScrollV") ) { return ::hx::Val( get_bottomScrollV_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getLineMeasurements") ) { return ::hx::Val( getLineMeasurements_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createRestrictRegexp") ) { return ::hx::Val( createRestrictRegexp_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextEngine_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"findFont") ) { outValue = findFont_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultFonts") ) { outValue = ( _hx___defaultFonts ); return true; }
		if (HX_FIELD_EQ(inName,"getDefaultFont") ) { outValue = getDefaultFont_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"findFontVariant") ) { outValue = findFontVariant_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getFormatHeight") ) { outValue = getFormatHeight_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getFontInstance") ) { outValue = getFontInstance_dyn(); return true; }
	}
	return false;
}

::hx::Val TextEngine_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) );text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__font") ) { _hx___font=inValue.Cast<  ::openfl::text::Font >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { scrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollV") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollV(inValue.Cast< int >()) );scrollV=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { autoSize=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxChars") ) { maxChars=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLines") ) { numLines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"restrict") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_restrict(inValue.Cast< ::String >()) );restrict=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { wordWrap=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { multiline=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sharpness") ) { sharpness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { _hx___texture=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { embedFonts=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineBreaks") ) { lineBreaks=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineWidths") ) { lineWidths=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { maxScrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { maxScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectable") ) { selectable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textBounds") ) { textBounds=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { _hx___hasFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { gridFitType=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineAscents") ) { lineAscents=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineHeights") ) { lineHeights=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { _hx___isKeyDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { _hx___cairoFont=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layoutGroups") ) { layoutGroups=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineDescents") ) { lineDescents=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineLeadings") ) { lineLeadings=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__shapeCache") ) { _hx___shapeCache=inValue.Cast<  ::openfl::text::_internal::ShapeCache >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { _hx___showCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { _hx___textFormat=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { _hx___textLayout=inValue.Cast<  ::openfl::text::_internal::TextLayout >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { antiAliasType=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { bottomScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { _hx___cursorTimer=inValue.Cast<  ::haxe::Timer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { _hx___measuredWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textFormatRanges") ) { textFormatRanges=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { _hx___measuredHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__restrictRegexp") ) { _hx___restrictRegexp=inValue.Cast<  ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { _hx___selectionStart=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__useIntAdvances") ) { _hx___useIntAdvances=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextEngine_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultFonts") ) { _hx___defaultFonts=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void TextEngine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("antiAliasType",68,c4,fa,e7));
	outFields->push(HX_("autoSize",d0,8f,79,2f));
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("backgroundColor",95,4e,47,0d));
	outFields->push(HX_("border",ec,4c,1a,64));
	outFields->push(HX_("borderColor",d7,3c,d5,d6));
	outFields->push(HX_("bottomScrollV",fe,f7,87,8b));
	outFields->push(HX_("bounds",75,86,1d,66));
	outFields->push(HX_("caretIndex",8f,b6,5b,dd));
	outFields->push(HX_("embedFonts",2b,c7,e1,8e));
	outFields->push(HX_("gridFitType",05,f3,13,b4));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("layoutGroups",9e,a2,6c,37));
	outFields->push(HX_("lineAscents",45,0c,c2,3e));
	outFields->push(HX_("lineBreaks",e8,fd,5b,ea));
	outFields->push(HX_("lineDescents",0d,ad,64,49));
	outFields->push(HX_("lineLeadings",01,23,97,76));
	outFields->push(HX_("lineHeights",18,99,8e,3e));
	outFields->push(HX_("lineWidths",c1,8a,a4,20));
	outFields->push(HX_("maxChars",99,ef,d0,ef));
	outFields->push(HX_("maxScrollH",57,ad,fc,9a));
	outFields->push(HX_("maxScrollV",65,ad,fc,9a));
	outFields->push(HX_("multiline",ed,d2,11,9e));
	outFields->push(HX_("numLines",d9,f1,11,32));
	outFields->push(HX_("restrict",3c,cb,9e,f1));
	outFields->push(HX_("scrollH",9b,33,d8,30));
	outFields->push(HX_("scrollV",a9,33,d8,30));
	outFields->push(HX_("selectable",96,b6,2a,c4));
	outFields->push(HX_("sharpness",81,22,25,1b));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("textBounds",02,07,0e,9d));
	outFields->push(HX_("textHeight",74,88,3c,39));
	outFields->push(HX_("textFormatRanges",fa,0e,49,a2));
	outFields->push(HX_("textWidth",19,46,50,63));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("wordWrap",b4,14,db,00));
	outFields->push(HX_("textField",cd,24,81,99));
	outFields->push(HX_("__cursorTimer",ef,59,8f,e1));
	outFields->push(HX_("__hasFocus",3e,1d,1a,34));
	outFields->push(HX_("__isKeyDown",b7,2f,72,ce));
	outFields->push(HX_("__measuredHeight",ed,b6,23,42));
	outFields->push(HX_("__measuredWidth",c0,49,ec,02));
	outFields->push(HX_("__restrictRegexp",45,9f,ae,a9));
	outFields->push(HX_("__selectionStart",96,e3,b9,43));
	outFields->push(HX_("__shapeCache",81,aa,e8,5f));
	outFields->push(HX_("__showCursor",d3,ae,f0,e0));
	outFields->push(HX_("__textFormat",e4,8a,12,6d));
	outFields->push(HX_("__textLayout",57,aa,3c,c8));
	outFields->push(HX_("__texture",bb,19,2f,20));
	outFields->push(HX_("__useIntAdvances",d9,17,72,7d));
	outFields->push(HX_("__cairoFont",57,e7,b5,28));
	outFields->push(HX_("__font",ef,c0,b8,f2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextEngine_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,antiAliasType),HX_("antiAliasType",68,c4,fa,e7)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,autoSize),HX_("autoSize",d0,8f,79,2f)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,backgroundColor),HX_("backgroundColor",95,4e,47,0d)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,border),HX_("border",ec,4c,1a,64)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,borderColor),HX_("borderColor",d7,3c,d5,d6)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,bottomScrollV),HX_("bottomScrollV",fe,f7,87,8b)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(TextEngine_obj,bounds),HX_("bounds",75,86,1d,66)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,caretIndex),HX_("caretIndex",8f,b6,5b,dd)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,embedFonts),HX_("embedFonts",2b,c7,e1,8e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,gridFitType),HX_("gridFitType",05,f3,13,b4)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(TextEngine_obj,layoutGroups),HX_("layoutGroups",9e,a2,6c,37)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineAscents),HX_("lineAscents",45,0c,c2,3e)},
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(int)offsetof(TextEngine_obj,lineBreaks),HX_("lineBreaks",e8,fd,5b,ea)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineDescents),HX_("lineDescents",0d,ad,64,49)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineLeadings),HX_("lineLeadings",01,23,97,76)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineHeights),HX_("lineHeights",18,99,8e,3e)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineWidths),HX_("lineWidths",c1,8a,a4,20)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,maxChars),HX_("maxChars",99,ef,d0,ef)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,maxScrollH),HX_("maxScrollH",57,ad,fc,9a)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,maxScrollV),HX_("maxScrollV",65,ad,fc,9a)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,multiline),HX_("multiline",ed,d2,11,9e)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,numLines),HX_("numLines",d9,f1,11,32)},
	{::hx::fsString,(int)offsetof(TextEngine_obj,restrict),HX_("restrict",3c,cb,9e,f1)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,scrollH),HX_("scrollH",9b,33,d8,30)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,scrollV),HX_("scrollV",a9,33,d8,30)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,selectable),HX_("selectable",96,b6,2a,c4)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,sharpness),HX_("sharpness",81,22,25,1b)},
	{::hx::fsString,(int)offsetof(TextEngine_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(TextEngine_obj,textBounds),HX_("textBounds",02,07,0e,9d)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,textHeight),HX_("textHeight",74,88,3c,39)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(TextEngine_obj,textFormatRanges),HX_("textFormatRanges",fa,0e,49,a2)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,textWidth),HX_("textWidth",19,46,50,63)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,wordWrap),HX_("wordWrap",b4,14,db,00)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(TextEngine_obj,textField),HX_("textField",cd,24,81,99)},
	{::hx::fsObject /*  ::haxe::Timer */ ,(int)offsetof(TextEngine_obj,_hx___cursorTimer),HX_("__cursorTimer",ef,59,8f,e1)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,_hx___hasFocus),HX_("__hasFocus",3e,1d,1a,34)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,_hx___isKeyDown),HX_("__isKeyDown",b7,2f,72,ce)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,_hx___measuredHeight),HX_("__measuredHeight",ed,b6,23,42)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,_hx___measuredWidth),HX_("__measuredWidth",c0,49,ec,02)},
	{::hx::fsObject /*  ::EReg */ ,(int)offsetof(TextEngine_obj,_hx___restrictRegexp),HX_("__restrictRegexp",45,9f,ae,a9)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,_hx___selectionStart),HX_("__selectionStart",96,e3,b9,43)},
	{::hx::fsObject /*  ::openfl::text::_internal::ShapeCache */ ,(int)offsetof(TextEngine_obj,_hx___shapeCache),HX_("__shapeCache",81,aa,e8,5f)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,_hx___showCursor),HX_("__showCursor",d3,ae,f0,e0)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(TextEngine_obj,_hx___textFormat),HX_("__textFormat",e4,8a,12,6d)},
	{::hx::fsObject /*  ::openfl::text::_internal::TextLayout */ ,(int)offsetof(TextEngine_obj,_hx___textLayout),HX_("__textLayout",57,aa,3c,c8)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(TextEngine_obj,_hx___texture),HX_("__texture",bb,19,2f,20)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,_hx___useIntAdvances),HX_("__useIntAdvances",d9,17,72,7d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,_hx___cairoFont),HX_("__cairoFont",57,e7,b5,28)},
	{::hx::fsObject /*  ::openfl::text::Font */ ,(int)offsetof(TextEngine_obj,_hx___font),HX_("__font",ef,c0,b8,f2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TextEngine_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &TextEngine_obj::GUTTER,HX_("GUTTER",1b,d3,2b,8c)},
	{::hx::fsInt,(void *) &TextEngine_obj::UTF8_TAB,HX_("UTF8_TAB",07,d5,41,1d)},
	{::hx::fsInt,(void *) &TextEngine_obj::UTF8_ENDLINE,HX_("UTF8_ENDLINE",01,29,41,cf)},
	{::hx::fsInt,(void *) &TextEngine_obj::UTF8_SPACE,HX_("UTF8_SPACE",f8,7b,a9,c7)},
	{::hx::fsInt,(void *) &TextEngine_obj::UTF8_HYPHEN,HX_("UTF8_HYPHEN",60,3c,3f,bf)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &TextEngine_obj::_hx___defaultFonts,HX_("__defaultFonts",63,76,ad,da)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TextEngine_obj_sMemberFields[] = {
	HX_("antiAliasType",68,c4,fa,e7),
	HX_("autoSize",d0,8f,79,2f),
	HX_("background",ee,93,1d,26),
	HX_("backgroundColor",95,4e,47,0d),
	HX_("border",ec,4c,1a,64),
	HX_("borderColor",d7,3c,d5,d6),
	HX_("bottomScrollV",fe,f7,87,8b),
	HX_("bounds",75,86,1d,66),
	HX_("caretIndex",8f,b6,5b,dd),
	HX_("embedFonts",2b,c7,e1,8e),
	HX_("gridFitType",05,f3,13,b4),
	HX_("height",e7,07,4c,02),
	HX_("layoutGroups",9e,a2,6c,37),
	HX_("lineAscents",45,0c,c2,3e),
	HX_("lineBreaks",e8,fd,5b,ea),
	HX_("lineDescents",0d,ad,64,49),
	HX_("lineLeadings",01,23,97,76),
	HX_("lineHeights",18,99,8e,3e),
	HX_("lineWidths",c1,8a,a4,20),
	HX_("maxChars",99,ef,d0,ef),
	HX_("maxScrollH",57,ad,fc,9a),
	HX_("maxScrollV",65,ad,fc,9a),
	HX_("multiline",ed,d2,11,9e),
	HX_("numLines",d9,f1,11,32),
	HX_("restrict",3c,cb,9e,f1),
	HX_("scrollH",9b,33,d8,30),
	HX_("scrollV",a9,33,d8,30),
	HX_("selectable",96,b6,2a,c4),
	HX_("sharpness",81,22,25,1b),
	HX_("text",ad,cc,f9,4c),
	HX_("textBounds",02,07,0e,9d),
	HX_("textHeight",74,88,3c,39),
	HX_("textFormatRanges",fa,0e,49,a2),
	HX_("textWidth",19,46,50,63),
	HX_("type",ba,f2,08,4d),
	HX_("width",06,b6,62,ca),
	HX_("wordWrap",b4,14,db,00),
	HX_("textField",cd,24,81,99),
	HX_("__cursorTimer",ef,59,8f,e1),
	HX_("__hasFocus",3e,1d,1a,34),
	HX_("__isKeyDown",b7,2f,72,ce),
	HX_("__measuredHeight",ed,b6,23,42),
	HX_("__measuredWidth",c0,49,ec,02),
	HX_("__restrictRegexp",45,9f,ae,a9),
	HX_("__selectionStart",96,e3,b9,43),
	HX_("__shapeCache",81,aa,e8,5f),
	HX_("__showCursor",d3,ae,f0,e0),
	HX_("__textFormat",e4,8a,12,6d),
	HX_("__textLayout",57,aa,3c,c8),
	HX_("__texture",bb,19,2f,20),
	HX_("__useIntAdvances",d9,17,72,7d),
	HX_("__cairoFont",57,e7,b5,28),
	HX_("__font",ef,c0,b8,f2),
	HX_("createRestrictRegexp",41,d0,6b,e1),
	HX_("getBounds",ab,0f,74,e2),
	HX_("getLine",aa,c7,35,1a),
	HX_("getLineBreaks",1e,5a,ce,46),
	HX_("getLineBreakIndex",1d,16,36,36),
	HX_("getLineMeasurements",c1,9f,81,56),
	HX_("getLayoutGroups",54,f8,56,5a),
	HX_("restrictText",09,12,3e,34),
	HX_("setTextAlignment",74,0f,33,62),
	HX_("trimText",af,ae,63,65),
	HX_("update",09,86,05,87),
	HX_("get_bottomScrollV",55,03,f8,91),
	HX_("get_maxScrollV",ae,35,f2,10),
	HX_("set_restrict",b9,a2,b1,bb),
	HX_("get_scrollV",c0,93,d2,b6),
	HX_("set_scrollV",cc,9a,3f,c1),
	HX_("set_text",aa,e1,11,7b),
	::String(null()) };

static void TextEngine_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEngine_obj::GUTTER,"GUTTER");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_TAB,"UTF8_TAB");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_ENDLINE,"UTF8_ENDLINE");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_SPACE,"UTF8_SPACE");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_HYPHEN,"UTF8_HYPHEN");
	HX_MARK_MEMBER_NAME(TextEngine_obj::_hx___defaultFonts,"__defaultFonts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextEngine_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEngine_obj::GUTTER,"GUTTER");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_TAB,"UTF8_TAB");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_ENDLINE,"UTF8_ENDLINE");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_SPACE,"UTF8_SPACE");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_HYPHEN,"UTF8_HYPHEN");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::_hx___defaultFonts,"__defaultFonts");
};

#endif

::hx::Class TextEngine_obj::__mClass;

static ::String TextEngine_obj_sStaticFields[] = {
	HX_("GUTTER",1b,d3,2b,8c),
	HX_("UTF8_TAB",07,d5,41,1d),
	HX_("UTF8_ENDLINE",01,29,41,cf),
	HX_("UTF8_SPACE",f8,7b,a9,c7),
	HX_("UTF8_HYPHEN",60,3c,3f,bf),
	HX_("__defaultFonts",63,76,ad,da),
	HX_("findFont",a8,6a,54,96),
	HX_("findFontVariant",bd,22,bb,b2),
	HX_("getDefaultFont",3a,aa,1d,9d),
	HX_("getFormatHeight",34,24,4b,62),
	HX_("getFont",85,0d,43,16),
	HX_("getFontInstance",3a,76,96,9e),
	::String(null())
};

void TextEngine_obj::__register()
{
	TextEngine_obj _hx_dummy;
	TextEngine_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text._internal.TextEngine",04,88,80,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextEngine_obj::__GetStatic;
	__mClass->mSetStaticField = &TextEngine_obj::__SetStatic;
	__mClass->mMarkFunc = TextEngine_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TextEngine_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextEngine_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextEngine_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextEngine_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextEngine_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextEngine_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextEngine_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_39_boot)
HXDLIN(  39)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("__cairoFont",57,e7,b5,28), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))))
            			->setFixed(1,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_41_boot)
HXDLIN(  41)		GUTTER = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_42_boot)
HXDLIN(  42)		UTF8_TAB = 9;
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_43_boot)
HXDLIN(  43)		UTF8_ENDLINE = 10;
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_44_boot)
HXDLIN(  44)		UTF8_SPACE = 32;
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_45_boot)
HXDLIN(  45)		UTF8_HYPHEN = 45;
            	}
}

} // end namespace openfl
} // end namespace text
} // end namespace _internal
