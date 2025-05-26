#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_CairoGlyph
#include <lime/graphics/cairo/CairoGlyph.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFTFontFace_CairoFTFontFace_Impl_
#include <lime/graphics/cairo/_CairoFTFontFace/CairoFTFontFace_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFontOptions_CairoFontOptions_Impl_
#include <lime/graphics/cairo/_CairoFontOptions/CairoFontOptions_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoDisplayObject
#include <openfl/display/_internal/CairoDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoGraphics
#include <openfl/display/_internal/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoTextField
#include <openfl/display/_internal/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
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
#ifndef INCLUDED_openfl_text__internal_TextEngine
#include <openfl/text/_internal/TextEngine.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextLayoutGroup
#include <openfl/text/_internal/TextLayoutGroup.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a654946cfcca811d_34_render,"openfl.display._internal.CairoTextField","render",0x63933503,"openfl.display._internal.CairoTextField.render","openfl/display/_internal/CairoTextField.hx",34,0xd777675a)
HX_LOCAL_STACK_FRAME(_hx_pos_a654946cfcca811d_462_renderDrawable,"openfl.display._internal.CairoTextField","renderDrawable",0x65cf17c1,"openfl.display._internal.CairoTextField.renderDrawable","openfl/display/_internal/CairoTextField.hx",462,0xd777675a)
HX_LOCAL_STACK_FRAME(_hx_pos_a654946cfcca811d_482_renderDrawableMask,"openfl.display._internal.CairoTextField","renderDrawableMask",0x842bf94d,"openfl.display._internal.CairoTextField.renderDrawableMask","openfl/display/_internal/CairoTextField.hx",482,0xd777675a)
HX_LOCAL_STACK_FRAME(_hx_pos_a654946cfcca811d_31_boot,"openfl.display._internal.CairoTextField","boot",0x2185989f,"openfl.display._internal.CairoTextField.boot","openfl/display/_internal/CairoTextField.hx",31,0xd777675a)
namespace openfl{
namespace display{
namespace _internal{

void CairoTextField_obj::__construct() { }

Dynamic CairoTextField_obj::__CreateEmpty() { return new CairoTextField_obj; }

void *CairoTextField_obj::_hx_vtable = 0;

Dynamic CairoTextField_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoTextField_obj > _hx_result = new CairoTextField_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoTextField_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6fd3cbef;
}

void CairoTextField_obj::render( ::openfl::text::TextField textField, ::openfl::display::CairoRenderer renderer, ::openfl::geom::Matrix transform){
            	HX_GC_STACKFRAME(&_hx_pos_a654946cfcca811d_34_render)
HXLINE(  36)		 ::openfl::text::_internal::TextEngine textEngine = textField->_hx___textEngine;
HXLINE(  39)		bool useTextBounds;
HXDLIN(  39)		if (!(textEngine->background)) {
HXLINE(  39)			useTextBounds = textEngine->border;
            		}
            		else {
HXLINE(  39)			useTextBounds = true;
            		}
HXDLIN(  39)		bool useTextBounds1 = !(useTextBounds);
HXLINE(  40)		 ::openfl::geom::Rectangle bounds;
HXDLIN(  40)		if (useTextBounds1) {
HXLINE(  40)			bounds = textEngine->textBounds;
            		}
            		else {
HXLINE(  40)			bounds = textEngine->bounds;
            		}
HXLINE(  41)		 ::openfl::display::Graphics graphics = textField->_hx___graphics;
HXLINE(  42)		 ::lime::graphics::cairo::Cairo cairo = graphics->_hx___cairo;
HXLINE(  43)		Float cursorOffsetX = ((Float)0.0);
HXLINE(  45)		if (textField->_hx___dirty) {
HXLINE(  47)			textField->_hx___updateLayout();
HXLINE(  49)			if (::hx::IsNull( graphics->_hx___bounds )) {
HXLINE(  51)				graphics->_hx___bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXLINE(  54)			if ((textField->get_text().length == 0)) {
HXLINE(  56)				Float boundsWidth = (textEngine->bounds->width - ( (Float)(4) ));
HXLINE(  57)				 ::Dynamic align = textField->get_defaultTextFormat()->align;
HXLINE(  58)				if (::hx::IsEq( align,3 )) {
HXLINE(  58)					cursorOffsetX = ( (Float)(0) );
            				}
            				else {
HXLINE(  58)					if (::hx::IsEq( align,4 )) {
HXLINE(  58)						cursorOffsetX = boundsWidth;
            					}
            					else {
HXLINE(  58)						cursorOffsetX = (boundsWidth / ( (Float)(2) ));
            					}
            				}
HXLINE(  59)				 ::Dynamic _hx_switch_0 = align;
            				if (  (_hx_switch_0==0) ){
HXLINE(  68)					cursorOffsetX = (cursorOffsetX + (( (Float)(textField->get_defaultTextFormat()->leftMargin) ) / ( (Float)(2) )));
HXLINE(  69)					cursorOffsetX = (cursorOffsetX - (( (Float)(textField->get_defaultTextFormat()->rightMargin) ) / ( (Float)(2) )));
HXLINE(  70)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->indent);
HXLINE(  71)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->blockIndent);
HXLINE(  67)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==1) ){
HXLINE(  78)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==2) ){
HXLINE(  75)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->leftMargin);
HXLINE(  76)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->indent);
HXLINE(  77)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->blockIndent);
HXLINE(  74)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==3) ){
HXLINE(  62)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->leftMargin);
HXLINE(  63)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->indent);
HXLINE(  64)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->blockIndent);
HXLINE(  61)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==4) ){
HXLINE(  66)					cursorOffsetX = (cursorOffsetX - ( (Float)(textField->get_defaultTextFormat()->rightMargin) ));
HXDLIN(  66)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==5) ){
HXLINE(  72)					goto _hx_goto_0;
            				}
            				_hx_goto_0:;
HXLINE(  81)				if (useTextBounds1) {
HXLINE(  83)					bounds->y = textEngine->bounds->y;
HXLINE(  84)					bounds->x = cursorOffsetX;
            				}
            			}
HXLINE(  88)			graphics->_hx___bounds->copyFrom(bounds);
            		}
HXLINE(  97)		Float pixelRatio = renderer->_hx___pixelRatio;
HXLINE( 100)		graphics->_hx___update(renderer->_hx___worldTransform,pixelRatio);
HXLINE( 102)		int width = ::Math_obj::round((( (Float)(graphics->_hx___width) ) * pixelRatio));
HXLINE( 103)		int height = ::Math_obj::round((( (Float)(graphics->_hx___height) ) * pixelRatio));
HXLINE( 105)		bool renderable;
HXDLIN( 105)		bool renderable1;
HXDLIN( 105)		if (!(textEngine->border)) {
HXLINE( 105)			renderable1 = textEngine->background;
            		}
            		else {
HXLINE( 105)			renderable1 = true;
            		}
HXDLIN( 105)		if (!(renderable1)) {
HXLINE( 105)			renderable = ::hx::IsNotNull( textEngine->text );
            		}
            		else {
HXLINE( 105)			renderable = true;
            		}
HXLINE( 106)		bool needsUpscaling = false;
HXLINE( 108)		if (::hx::IsNotNull( cairo )) {
HXLINE( 111)			 ::Dynamic surface = graphics->_hx___bitmap->getSurface();
HXLINE( 113)			bool _hx_tmp;
HXDLIN( 113)			if (graphics->_hx___softwareDirty) {
HXLINE( 113)				if ((width <= ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_width(surface))) {
HXLINE( 113)					_hx_tmp = (height > ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_height(surface));
            				}
            				else {
HXLINE( 113)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 113)				_hx_tmp = false;
            			}
HXDLIN( 113)			if (_hx_tmp) {
HXLINE( 115)				needsUpscaling = true;
            			}
HXLINE( 118)			bool _hx_tmp1;
HXDLIN( 118)			if (renderable) {
HXLINE( 118)				_hx_tmp1 = needsUpscaling;
            			}
            			else {
HXLINE( 118)				_hx_tmp1 = true;
            			}
HXDLIN( 118)			if (_hx_tmp1) {
HXLINE( 120)				graphics->_hx___cairo = null();
HXLINE( 121)				graphics->_hx___bitmap = null();
HXLINE( 122)				graphics->_hx___visible = false;
HXLINE( 123)				cairo = null();
            			}
            		}
HXLINE( 127)		bool _hx_tmp;
HXDLIN( 127)		bool _hx_tmp1;
HXDLIN( 127)		bool _hx_tmp2;
HXDLIN( 127)		if ((width > 0)) {
HXLINE( 127)			_hx_tmp2 = (height <= 0);
            		}
            		else {
HXLINE( 127)			_hx_tmp2 = true;
            		}
HXDLIN( 127)		if (!(_hx_tmp2)) {
HXLINE( 129)			bool _hx_tmp;
HXDLIN( 129)			if (!(textField->_hx___dirty)) {
HXLINE( 129)				_hx_tmp = !(graphics->_hx___softwareDirty);
            			}
            			else {
HXLINE( 129)				_hx_tmp = false;
            			}
HXDLIN( 129)			if (_hx_tmp) {
HXLINE( 129)				if (graphics->_hx___visible) {
HXLINE( 127)					_hx_tmp1 = ::hx::IsNotNull( graphics->_hx___bitmap );
            				}
            				else {
HXLINE( 127)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE( 127)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE( 127)			_hx_tmp1 = true;
            		}
HXDLIN( 127)		if (!(_hx_tmp1)) {
HXLINE( 127)			_hx_tmp = !(renderable);
            		}
            		else {
HXLINE( 127)			_hx_tmp = true;
            		}
HXDLIN( 127)		if (_hx_tmp) {
HXLINE( 132)			textField->_hx___dirty = false;
HXLINE( 133)			return;
            		}
HXLINE( 136)		if (::hx::IsNull( cairo )) {
HXLINE( 138)			int bitmapWidth;
HXDLIN( 138)			if (needsUpscaling) {
HXLINE( 138)				bitmapWidth = ::Std_obj::_hx_int((( (Float)(width) ) * ((Float)1.25)));
            			}
            			else {
HXLINE( 138)				bitmapWidth = width;
            			}
HXLINE( 139)			int bitmapHeight;
HXDLIN( 139)			if (needsUpscaling) {
HXLINE( 139)				bitmapHeight = ::Std_obj::_hx_int((( (Float)(height) ) * ((Float)1.25)));
            			}
            			else {
HXLINE( 139)				bitmapHeight = height;
            			}
HXLINE( 141)			bool _hx_tmp;
HXDLIN( 141)			if (::hx::IsNotNull( ::openfl::display::Graphics_obj::maxTextureWidth )) {
HXLINE( 141)				_hx_tmp = ::hx::IsGreater( bitmapWidth,::openfl::display::Graphics_obj::maxTextureWidth );
            			}
            			else {
HXLINE( 141)				_hx_tmp = false;
            			}
HXDLIN( 141)			if (_hx_tmp) {
HXLINE( 143)				bitmapWidth = ( (int)(::openfl::display::Graphics_obj::maxTextureWidth) );
            			}
HXLINE( 146)			bool _hx_tmp1;
HXDLIN( 146)			if (::hx::IsNotNull( ::openfl::display::Graphics_obj::maxTextureHeight )) {
HXLINE( 146)				_hx_tmp1 = ::hx::IsGreater( bitmapHeight,::openfl::display::Graphics_obj::maxTextureHeight );
            			}
            			else {
HXLINE( 146)				_hx_tmp1 = false;
            			}
HXDLIN( 146)			if (_hx_tmp1) {
HXLINE( 148)				bitmapHeight = ( (int)(::openfl::display::Graphics_obj::maxTextureHeight) );
            			}
HXLINE( 151)			 ::openfl::display::BitmapData bitmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapWidth,bitmapHeight,true,0);
HXLINE( 152)			 ::Dynamic surface = bitmap->getSurface();
HXLINE( 153)			graphics->_hx___cairo =  ::lime::graphics::cairo::Cairo_obj::__alloc( HX_CTX ,surface);
HXLINE( 154)			graphics->_hx___visible = true;
HXLINE( 155)			graphics->_hx___managed = true;
HXLINE( 157)			graphics->_hx___bitmap = bitmap;
HXLINE( 158)			graphics->_hx___bitmapScale = pixelRatio;
HXLINE( 160)			cairo = graphics->_hx___cairo;
HXLINE( 162)			 ::Dynamic options = ::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::_new();
HXLINE( 164)			bool _hx_tmp2;
HXDLIN( 164)			if (::hx::IsEq( textEngine->antiAliasType,0 )) {
HXLINE( 164)				_hx_tmp2 = (textEngine->sharpness == 400);
            			}
            			else {
HXLINE( 164)				_hx_tmp2 = false;
            			}
HXDLIN( 164)			if (_hx_tmp2) {
HXLINE( 166)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintStyle(options,1);
HXLINE( 167)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintMetrics(options,1);
HXLINE( 168)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_antialias(options,1);
            			}
            			else {
HXLINE( 172)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintStyle(options,2);
HXLINE( 173)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintMetrics(options,1);
HXLINE( 174)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_antialias(options,5);
            			}
HXLINE( 177)			cairo->set_fontOptions(options);
            		}
            		else {
HXLINE( 181)			cairo->identityMatrix();
HXLINE( 182)			cairo->resetClip();
HXLINE( 184)			cairo->setOperator(0);
HXLINE( 185)			cairo->paint();
HXLINE( 186)			cairo->setOperator(2);
            		}
HXLINE( 189)		 ::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 190)		matrix->copyFrom(graphics->_hx___renderTransform);
HXLINE( 191)		matrix->scale(pixelRatio,pixelRatio);
HXLINE( 193)		renderer->applyMatrix(matrix,cairo);
HXLINE( 195)		::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
HXLINE( 197)		if (textEngine->border) {
HXLINE( 199)			int _hx_tmp = ::Std_obj::_hx_int((bounds->width - ( (Float)(1) )));
HXDLIN( 199)			cairo->rectangle(((Float)0.5),((Float)0.5),( (Float)(_hx_tmp) ),( (Float)(::Std_obj::_hx_int((bounds->height - ( (Float)(1) )))) ));
            		}
            		else {
HXLINE( 203)			cairo->rectangle(( (Float)(0) ),( (Float)(0) ),bounds->width,bounds->height);
            		}
HXLINE( 206)		if (textEngine->background) {
HXLINE( 208)			int color = textEngine->backgroundColor;
HXLINE( 209)			Float r = (( (Float)(::hx::UShr((color & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 210)			Float g = (( (Float)(::hx::UShr((color & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 211)			Float b = (( (Float)((color & 255)) ) / ( (Float)(255) ));
HXLINE( 213)			cairo->setSourceRGB(r,g,b);
HXLINE( 214)			cairo->fillPreserve();
            		}
HXLINE( 217)		if (textEngine->border) {
HXLINE( 219)			int color = textEngine->borderColor;
HXLINE( 220)			Float r = (( (Float)(::hx::UShr((color & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 221)			Float g = (( (Float)(::hx::UShr((color & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 222)			Float b = (( (Float)((color & 255)) ) / ( (Float)(255) ));
HXLINE( 224)			cairo->setSourceRGB(r,g,b);
HXLINE( 225)			cairo->set_lineWidth(( (Float)(1) ));
HXLINE( 226)			cairo->stroke();
            		}
HXLINE( 229)		bool _hx_tmp3;
HXDLIN( 229)		if (::hx::IsNotNull( textEngine->text )) {
HXLINE( 229)			_hx_tmp3 = (textEngine->text != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 229)			_hx_tmp3 = false;
            		}
HXDLIN( 229)		if (_hx_tmp3) {
HXLINE( 231)			Float bounds1 = bounds->width;
HXDLIN( 231)			int _hx_tmp;
HXDLIN( 231)			if (textField->get_border()) {
HXLINE( 231)				_hx_tmp = 1;
            			}
            			else {
HXLINE( 231)				_hx_tmp = 0;
            			}
HXDLIN( 231)			Float bounds2 = bounds->height;
HXDLIN( 231)			int _hx_tmp1;
HXDLIN( 231)			if (textField->get_border()) {
HXLINE( 231)				_hx_tmp1 = 1;
            			}
            			else {
HXLINE( 231)				_hx_tmp1 = 0;
            			}
HXDLIN( 231)			cairo->rectangle(( (Float)(0) ),( (Float)(0) ),(bounds1 - ( (Float)(_hx_tmp) )),(bounds2 - ( (Float)(_hx_tmp1) )));
HXLINE( 232)			cairo->clip();
HXLINE( 234)			::String text = textEngine->text;
HXLINE( 236)			int scrollX = -(textField->get_scrollH());
HXLINE( 237)			Float scrollY = ((Float)0.0);
HXLINE( 239)			{
HXLINE( 239)				int _g = 0;
HXDLIN( 239)				int _g1 = (textField->get_scrollV() - 1);
HXDLIN( 239)				while((_g < _g1)){
HXLINE( 239)					_g = (_g + 1);
HXDLIN( 239)					int i = (_g - 1);
HXLINE( 241)					scrollY = (scrollY - textEngine->lineHeights->get(i));
            				}
            			}
HXLINE( 244)			int color;
HXLINE( 245)			Float r;
HXLINE( 246)			Float g;
HXLINE( 247)			Float b;
HXLINE( 248)			 ::openfl::text::Font font;
HXLINE( 249)			int size;
HXLINE( 250)			Float advance;
HXLINE( 252)			{
HXLINE( 252)				 ::Dynamic group = textEngine->layoutGroups->iterator();
HXDLIN( 252)				while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 252)					 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 254)					int group2 = group1->lineIndex;
HXDLIN( 254)					if ((group2 < (textField->get_scrollV() - 1))) {
HXLINE( 254)						continue;
            					}
HXLINE( 255)					int group3 = group1->lineIndex;
HXDLIN( 255)					if ((group3 > (textEngine->get_bottomScrollV() - 1))) {
HXLINE( 255)						goto _hx_goto_2;
            					}
HXLINE( 257)					color = ( (int)(group1->format->color) );
HXLINE( 258)					r = (( (Float)(::hx::UShr((color & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 259)					g = (( (Float)(::hx::UShr((color & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 260)					b = (( (Float)((color & 255)) ) / ( (Float)(255) ));
HXLINE( 262)					cairo->setSourceRGB(r,g,b);
HXLINE( 264)					font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(group1->format);
HXLINE( 266)					bool _hx_tmp;
HXDLIN( 266)					if (::hx::IsNotNull( font )) {
HXLINE( 266)						_hx_tmp = ::hx::IsNotNull( group1->format->size );
            					}
            					else {
HXLINE( 266)						_hx_tmp = false;
            					}
HXDLIN( 266)					if (_hx_tmp) {
HXLINE( 268)						if (::hx::IsNotNull( textEngine->_hx___cairoFont )) {
HXLINE( 270)							if (::hx::IsInstanceNotEq( textEngine->_hx___font,font )) {
HXLINE( 272)								textEngine->_hx___cairoFont = null();
            							}
            						}
HXLINE( 276)						if (::hx::IsNull( textEngine->_hx___cairoFont )) {
HXLINE( 278)							textEngine->_hx___font = font;
HXLINE( 279)							textEngine->_hx___cairoFont = ::lime::graphics::cairo::_CairoFTFontFace::CairoFTFontFace_Impl__obj::create(font,0);
            						}
HXLINE( 282)						cairo->set_fontFace(textEngine->_hx___cairoFont);
HXLINE( 284)						size = ::Std_obj::_hx_int(( (Float)(group1->format->size) ));
HXLINE( 285)						cairo->setFontSize(( (Float)(size) ));
HXLINE( 287)						cairo->moveTo(((group1->offsetX + scrollX) - bounds->x),(((group1->offsetY + group1->ascent) + scrollY) - bounds->y));
HXLINE( 294)						cairo->translate(( (Float)(0) ),( (Float)(0) ));
HXLINE( 296)						::Array< ::Dynamic> glyphs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 297)						Float x = ((group1->offsetX + scrollX) - bounds->x);
HXLINE( 298)						Float y = (((group1->offsetY + group1->ascent) + scrollY) - bounds->y);
HXLINE( 300)						{
HXLINE( 300)							int _g = 0;
HXDLIN( 300)							::Array< ::Dynamic> _g1 = group1->positions;
HXDLIN( 300)							while((_g < _g1->length)){
HXLINE( 300)								 ::openfl::text::_internal::GlyphPosition position = _g1->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN( 300)								_g = (_g + 1);
HXLINE( 302)								bool _hx_tmp;
HXDLIN( 302)								if (::hx::IsNotNull( position )) {
HXLINE( 302)									_hx_tmp = (position->glyph == 0);
            								}
            								else {
HXLINE( 302)									_hx_tmp = true;
            								}
HXDLIN( 302)								if (_hx_tmp) {
HXLINE( 302)									continue;
            								}
HXLINE( 303)								glyphs->push( ::lime::graphics::cairo::CairoGlyph_obj::__alloc( HX_CTX ,position->glyph,((x + position->offset->x) + ((Float)0.5)),((y - position->offset->y) + ((Float)0.5))));
HXLINE( 304)								x = (x + position->advance->x);
HXLINE( 305)								y = (y - position->advance->y);
            							}
            						}
HXLINE( 308)						cairo->showGlyphs(glyphs);
HXLINE( 311)						bool _hx_tmp;
HXDLIN( 311)						if ((textField->_hx___caretIndex > -1)) {
HXLINE( 311)							_hx_tmp = textEngine->selectable;
            						}
            						else {
HXLINE( 311)							_hx_tmp = false;
            						}
HXDLIN( 311)						if (_hx_tmp) {
HXLINE( 313)							if ((textField->_hx___selectionIndex == textField->_hx___caretIndex)) {
HXLINE( 315)								bool _hx_tmp;
HXDLIN( 315)								bool _hx_tmp1;
HXDLIN( 315)								if (textField->_hx___showCursor) {
HXLINE( 315)									_hx_tmp1 = (group1->startIndex <= textField->_hx___caretIndex);
            								}
            								else {
HXLINE( 315)									_hx_tmp1 = false;
            								}
HXDLIN( 315)								if (_hx_tmp1) {
HXLINE( 315)									_hx_tmp = (group1->endIndex >= textField->_hx___caretIndex);
            								}
            								else {
HXLINE( 315)									_hx_tmp = false;
            								}
HXDLIN( 315)								if (_hx_tmp) {
HXLINE( 319)									advance = ((Float)0.0);
HXLINE( 321)									{
HXLINE( 321)										int _g = 0;
HXDLIN( 321)										int _g1 = (textField->_hx___caretIndex - group1->startIndex);
HXDLIN( 321)										while((_g < _g1)){
HXLINE( 321)											_g = (_g + 1);
HXDLIN( 321)											int i = (_g - 1);
HXLINE( 323)											if ((group1->positions->length <= i)) {
HXLINE( 323)												goto _hx_goto_4;
            											}
HXLINE( 324)											Float advance1;
HXDLIN( 324)											bool advance2;
HXDLIN( 324)											if ((i >= 0)) {
HXLINE( 324)												advance2 = (i < group1->positions->length);
            											}
            											else {
HXLINE( 324)												advance2 = false;
            											}
HXDLIN( 324)											if (advance2) {
HXLINE( 324)												advance1 = group1->positions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            											}
            											else {
HXLINE( 324)												advance1 = ( (Float)(0) );
            											}
HXDLIN( 324)											advance = (advance + advance1);
            										}
            										_hx_goto_4:;
            									}
HXLINE( 327)									Float scrollY = ((Float)0.0);
HXLINE( 329)									{
HXLINE( 329)										int _g2 = textField->get_scrollV();
HXDLIN( 329)										int _g3 = (group1->lineIndex + 1);
HXDLIN( 329)										while((_g2 < _g3)){
HXLINE( 329)											_g2 = (_g2 + 1);
HXDLIN( 329)											int i = (_g2 - 1);
HXLINE( 331)											scrollY = (scrollY + textEngine->lineHeights->get((i - 1)));
            										}
            									}
HXLINE( 334)									Float _hx_tmp = (::Math_obj::floor((group1->offsetX + advance)) + ((Float)0.5));
HXDLIN( 334)									Float _hx_tmp1 = (_hx_tmp - ( (Float)(textField->get_scrollH()) ));
HXDLIN( 334)									cairo->moveTo((_hx_tmp1 - bounds->x),((scrollY + ((Float)2.5)) - bounds->y));
HXLINE( 335)									cairo->set_lineWidth(( (Float)(1) ));
HXLINE( 336)									Float _hx_tmp2 = (::Math_obj::floor((group1->offsetX + advance)) + ((Float)0.5));
HXDLIN( 336)									Float _hx_tmp3 = (_hx_tmp2 - ( (Float)(textField->get_scrollH()) ));
HXDLIN( 336)									Float _hx_tmp4 = (_hx_tmp3 - bounds->x);
HXLINE( 340)									Float _hx_tmp5 = ((scrollY + ::openfl::text::_internal::TextEngine_obj::getFormatHeight(textField->get_defaultTextFormat())) - ( (Float)(1) ));
HXLINE( 336)									cairo->lineTo(_hx_tmp4,(_hx_tmp5 - bounds->y));
HXLINE( 344)									cairo->stroke();
            								}
            							}
            							else {
HXLINE( 347)								bool _hx_tmp;
HXDLIN( 347)								bool _hx_tmp1;
HXDLIN( 347)								bool _hx_tmp2;
HXDLIN( 347)								bool _hx_tmp3;
HXDLIN( 347)								if ((group1->startIndex <= textField->_hx___caretIndex)) {
HXLINE( 347)									_hx_tmp3 = (group1->endIndex >= textField->_hx___caretIndex);
            								}
            								else {
HXLINE( 347)									_hx_tmp3 = false;
            								}
HXDLIN( 347)								if (!(_hx_tmp3)) {
HXLINE( 348)									if ((group1->startIndex <= textField->_hx___selectionIndex)) {
HXLINE( 347)										_hx_tmp2 = (group1->endIndex >= textField->_hx___selectionIndex);
            									}
            									else {
HXLINE( 347)										_hx_tmp2 = false;
            									}
            								}
            								else {
HXLINE( 347)									_hx_tmp2 = true;
            								}
HXDLIN( 347)								if (!(_hx_tmp2)) {
HXLINE( 349)									if ((group1->startIndex > textField->_hx___caretIndex)) {
HXLINE( 347)										_hx_tmp1 = (group1->endIndex < textField->_hx___selectionIndex);
            									}
            									else {
HXLINE( 347)										_hx_tmp1 = false;
            									}
            								}
            								else {
HXLINE( 347)									_hx_tmp1 = true;
            								}
HXDLIN( 347)								if (!(_hx_tmp1)) {
HXLINE( 350)									if ((group1->startIndex > textField->_hx___selectionIndex)) {
HXLINE( 347)										_hx_tmp = (group1->endIndex < textField->_hx___caretIndex);
            									}
            									else {
HXLINE( 347)										_hx_tmp = false;
            									}
            								}
            								else {
HXLINE( 347)									_hx_tmp = true;
            								}
HXDLIN( 347)								if (_hx_tmp) {
HXLINE( 352)									int selectionStart = ::Std_obj::_hx_int(::Math_obj::min(( (Float)(textField->_hx___selectionIndex) ),( (Float)(textField->_hx___caretIndex) )));
HXLINE( 353)									int selectionEnd = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(textField->_hx___selectionIndex) ),( (Float)(textField->_hx___caretIndex) )));
HXLINE( 355)									if ((group1->startIndex > selectionStart)) {
HXLINE( 357)										selectionStart = group1->startIndex;
            									}
HXLINE( 360)									if ((group1->endIndex < selectionEnd)) {
HXLINE( 362)										selectionEnd = group1->endIndex;
            									}
HXLINE( 366)									 ::openfl::geom::Rectangle end;
HXLINE( 365)									 ::openfl::geom::Rectangle start = textField->getCharBoundaries(selectionStart);
HXLINE( 370)									if ((selectionEnd >= group1->endIndex)) {
HXLINE( 372)										end = textField->getCharBoundaries((group1->endIndex - 1));
HXLINE( 374)										if (::hx::IsNotNull( end )) {
HXLINE( 376)											 ::openfl::geom::Rectangle end1 = end;
HXDLIN( 376)											end1->x = (end1->x + (end->width + 2));
            										}
            									}
            									else {
HXLINE( 381)										end = textField->getCharBoundaries(selectionEnd);
            									}
HXLINE( 384)									bool _hx_tmp;
HXDLIN( 384)									if (::hx::IsNotNull( start )) {
HXLINE( 384)										_hx_tmp = ::hx::IsNotNull( end );
            									}
            									else {
HXLINE( 384)										_hx_tmp = false;
            									}
HXDLIN( 384)									if (_hx_tmp) {
HXLINE( 386)										cairo->setSourceRGB(( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXLINE( 387)										cairo->rectangle(((scrollX + start->x) - bounds->x),(start->y + scrollY),(end->x - start->x),group1->height);
HXLINE( 388)										cairo->fill();
HXLINE( 389)										cairo->setSourceRGB(( (Float)(1) ),( (Float)(1) ),( (Float)(1) ));
HXLINE( 393)										::Array< ::Dynamic> selectedGylphs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 395)										selectionStart = (selectionStart - group1->startIndex);
HXLINE( 396)										selectionEnd = (selectionEnd - group1->startIndex);
HXLINE( 397)										if ((selectionEnd > glyphs->length)) {
HXLINE( 399)											selectionEnd = glyphs->length;
            										}
HXLINE( 402)										{
HXLINE( 402)											int _g = selectionStart;
HXDLIN( 402)											int _g1 = selectionEnd;
HXDLIN( 402)											while((_g < _g1)){
HXLINE( 402)												_g = (_g + 1);
HXDLIN( 402)												int i = (_g - 1);
HXLINE( 403)												selectedGylphs->push(glyphs->__get(i).StaticCast<  ::lime::graphics::cairo::CairoGlyph >());
            											}
            										}
HXLINE( 404)										cairo->showGlyphs(selectedGylphs);
            									}
            								}
            							}
            						}
HXLINE( 411)						if (( (bool)(group1->format->underline) )) {
HXLINE( 415)							cairo->newPath();
HXLINE( 416)							cairo->set_lineWidth(( (Float)(1) ));
HXLINE( 417)							int descent = ::Math_obj::floor((group1->ascent * ((Float)0.185)));
HXLINE( 418)							Float x = ((group1->offsetX + scrollX) - bounds->x);
HXLINE( 419)							Float y = ((::Math_obj::ceil((((group1->offsetY + scrollY) + group1->ascent) - bounds->y)) + descent) + ((Float)0.5));
HXLINE( 420)							cairo->moveTo(x,y);
HXLINE( 421)							cairo->lineTo((x + group1->width),y);
HXLINE( 422)							cairo->stroke();
HXLINE( 423)							cairo->closePath();
            						}
            					}
            				}
            				_hx_goto_2:;
            			}
            		}
            		else {
HXLINE( 428)			bool _hx_tmp;
HXDLIN( 428)			bool _hx_tmp1;
HXDLIN( 428)			if ((textField->_hx___caretIndex > -1)) {
HXLINE( 428)				_hx_tmp1 = textEngine->selectable;
            			}
            			else {
HXLINE( 428)				_hx_tmp1 = false;
            			}
HXDLIN( 428)			if (_hx_tmp1) {
HXLINE( 428)				_hx_tmp = textField->_hx___showCursor;
            			}
            			else {
HXLINE( 428)				_hx_tmp = false;
            			}
HXDLIN( 428)			if (_hx_tmp) {
HXLINE( 430)				Float scrollX;
HXDLIN( 430)				if (useTextBounds1) {
HXLINE( 430)					scrollX = ( (Float)(0) );
            				}
            				else {
HXLINE( 430)					scrollX = cursorOffsetX;
            				}
HXDLIN( 430)				Float scrollX1 = (-(textField->get_scrollH()) + scrollX);
HXLINE( 431)				Float scrollY = ((Float)0.0);
HXLINE( 433)				{
HXLINE( 433)					int _g = 0;
HXDLIN( 433)					int _g1 = (textField->get_scrollV() - 1);
HXDLIN( 433)					while((_g < _g1)){
HXLINE( 433)						_g = (_g + 1);
HXDLIN( 433)						int i = (_g - 1);
HXLINE( 435)						scrollY = (scrollY + textEngine->lineHeights->get(i));
            					}
            				}
HXLINE( 438)				 ::Dynamic color = textField->get_defaultTextFormat()->color;
HXLINE( 439)				Float r = (( (Float)(::hx::UShr((( (int)(color) ) & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 440)				Float g = (( (Float)(::hx::UShr((( (int)(color) ) & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 441)				Float b = (( (Float)((( (int)(color) ) & 255)) ) / ( (Float)(255) ));
HXLINE( 443)				cairo->setSourceRGB(r,g,b);
HXLINE( 445)				cairo->newPath();
HXLINE( 446)				cairo->moveTo((scrollX1 + ((Float)2.5)),(scrollY + ((Float)2.5)));
HXLINE( 447)				cairo->set_lineWidth(( (Float)(1) ));
HXLINE( 448)				cairo->lineTo((scrollX1 + ((Float)2.5)),((scrollY + ::openfl::text::_internal::TextEngine_obj::getFormatHeight(textField->get_defaultTextFormat())) - ( (Float)(1) )));
HXLINE( 449)				cairo->stroke();
HXLINE( 450)				cairo->closePath();
            			}
            		}
HXLINE( 453)		graphics->_hx___bitmap->image->dirty = true;
HXLINE( 454)		graphics->_hx___bitmap->image->version++;
HXLINE( 455)		textField->_hx___dirty = false;
HXLINE( 456)		graphics->_hx___softwareDirty = false;
HXLINE( 457)		graphics->set___dirty(false);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoTextField_obj,render,(void))

void CairoTextField_obj::renderDrawable( ::openfl::text::TextField textField, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_a654946cfcca811d_462_renderDrawable)
HXLINE( 464)		renderer->_hx___updateCacheBitmap(textField,textField->_hx___dirty);
HXLINE( 466)		bool _hx_tmp;
HXDLIN( 466)		if (::hx::IsNotNull( textField->_hx___cacheBitmap )) {
HXLINE( 466)			_hx_tmp = !(textField->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE( 466)			_hx_tmp = false;
            		}
HXDLIN( 466)		if (_hx_tmp) {
HXLINE( 468)			 ::openfl::display::Bitmap bitmap = textField->_hx___cacheBitmap;
HXDLIN( 468)			if (bitmap->_hx___renderable) {
HXLINE( 468)				Float alpha = renderer->_hx___getAlpha(bitmap->_hx___worldAlpha);
HXDLIN( 468)				bool _hx_tmp;
HXDLIN( 468)				bool _hx_tmp1;
HXDLIN( 468)				if ((alpha > 0)) {
HXLINE( 468)					_hx_tmp1 = ::hx::IsNotNull( bitmap->_hx___bitmapData );
            				}
            				else {
HXLINE( 468)					_hx_tmp1 = false;
            				}
HXDLIN( 468)				if (_hx_tmp1) {
HXLINE( 468)					_hx_tmp = bitmap->_hx___bitmapData->_hx___isValid;
            				}
            				else {
HXLINE( 468)					_hx_tmp = false;
            				}
HXDLIN( 468)				if (_hx_tmp) {
HXLINE( 468)					 ::lime::graphics::cairo::Cairo cairo = renderer->cairo;
HXDLIN( 468)					renderer->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXDLIN( 468)					renderer->_hx___pushMaskObject(bitmap,null());
HXDLIN( 468)					renderer->applyMatrix(bitmap->_hx___renderTransform,cairo);
HXDLIN( 468)					 ::Dynamic surface = bitmap->_hx___bitmapData->getSurface();
HXDLIN( 468)					if (::hx::IsNotNull( surface )) {
HXLINE( 468)						 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN( 468)						int _hx_tmp;
HXDLIN( 468)						bool _hx_tmp1;
HXDLIN( 468)						if (renderer->_hx___allowSmoothing) {
HXLINE( 468)							_hx_tmp1 = bitmap->smoothing;
            						}
            						else {
HXLINE( 468)							_hx_tmp1 = false;
            						}
HXDLIN( 468)						if (_hx_tmp1) {
HXLINE( 468)							_hx_tmp = 1;
            						}
            						else {
HXLINE( 468)							_hx_tmp = 3;
            						}
HXDLIN( 468)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXDLIN( 468)						cairo->set_source(pattern);
HXDLIN( 468)						if ((alpha == 1)) {
HXLINE( 468)							cairo->paint();
            						}
            						else {
HXLINE( 468)							cairo->paintWithAlpha(alpha);
            						}
            					}
HXDLIN( 468)					renderer->_hx___popMaskObject(bitmap,null());
HXDLIN( 468)					renderer->_hx___setBlendMode(10);
            				}
            			}
            		}
            		else {
HXLINE( 472)			::openfl::display::_internal::CairoTextField_obj::render(textField,renderer,textField->_hx___worldTransform);
HXLINE( 473)			::openfl::display::_internal::CairoDisplayObject_obj::render(textField,renderer);
            		}
HXLINE( 476)		renderer->_hx___renderEvent(textField);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,renderDrawable,(void))

void CairoTextField_obj::renderDrawableMask( ::openfl::text::TextField textField, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_a654946cfcca811d_482_renderDrawableMask)
HXDLIN( 482)		if (::hx::IsNotNull( textField->_hx___graphics )) {
HXDLIN( 482)			::openfl::display::_internal::CairoGraphics_obj::renderMask(textField->_hx___graphics,renderer);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,renderDrawableMask,(void))


CairoTextField_obj::CairoTextField_obj()
{
}

bool CairoTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CairoTextField_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CairoTextField_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CairoTextField_obj::__mClass;

static ::String CairoTextField_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void CairoTextField_obj::__register()
{
	CairoTextField_obj _hx_dummy;
	CairoTextField_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CairoTextField",21,a3,1c,94);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoTextField_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoTextField_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoTextField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoTextField_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CairoTextField_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a654946cfcca811d_31_boot)
HXDLIN(  31)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
