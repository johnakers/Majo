#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
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
#ifndef INCLUDED_lime_math__Matrix3_Matrix3_Impl_
#include <lime/math/_Matrix3/Matrix3_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
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
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
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
#ifndef INCLUDED_openfl_display__internal_CairoGraphics
#include <openfl/display/_internal/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandType
#include <openfl/display/_internal/DrawCommandType.h>
#endif
#ifndef INCLUDED_openfl_display__internal_ShaderBuffer
#include <openfl/display/_internal/ShaderBuffer.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_62_closePath,"openfl.display._internal.CairoGraphics","closePath",0x1c630b46,"openfl.display._internal.CairoGraphics.closePath","openfl/display/_internal/CairoGraphics.hx",62,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_86_createGradientPattern,"openfl.display._internal.CairoGraphics","createGradientPattern",0x2e8d9ded,"openfl.display._internal.CairoGraphics.createGradientPattern","openfl/display/_internal/CairoGraphics.hx",86,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_159_createImagePattern,"openfl.display._internal.CairoGraphics","createImagePattern",0xd4969668,"openfl.display._internal.CairoGraphics.createImagePattern","openfl/display/_internal/CairoGraphics.hx",159,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_174_drawRoundRect,"openfl.display._internal.CairoGraphics","drawRoundRect",0x0d2e8237,"openfl.display._internal.CairoGraphics.drawRoundRect","openfl/display/_internal/CairoGraphics.hx",174,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_206_endFill,"openfl.display._internal.CairoGraphics","endFill",0xd8fcf987,"openfl.display._internal.CairoGraphics.endFill","openfl/display/_internal/CairoGraphics.hx",206,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_213_endStroke,"openfl.display._internal.CairoGraphics","endStroke",0x5959a7bc,"openfl.display._internal.CairoGraphics.endStroke","openfl/display/_internal/CairoGraphics.hx",213,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_222_hitTest,"openfl.display._internal.CairoGraphics","hitTest",0x959bd1ce,"openfl.display._internal.CairoGraphics.hitTest","openfl/display/_internal/CairoGraphics.hx",222,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_446_isCCW,"openfl.display._internal.CairoGraphics","isCCW",0x84e15156,"openfl.display._internal.CairoGraphics.isCCW","openfl/display/_internal/CairoGraphics.hx",446,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_450_normalizeUVT,"openfl.display._internal.CairoGraphics","normalizeUVT",0xe93d673d,"openfl.display._internal.CairoGraphics.normalizeUVT","openfl/display/_internal/CairoGraphics.hx",450,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_491_playCommands,"openfl.display._internal.CairoGraphics","playCommands",0xebfd0cb3,"openfl.display._internal.CairoGraphics.playCommands","openfl/display/_internal/CairoGraphics.hx",491,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_1175_quadraticCurveTo,"openfl.display._internal.CairoGraphics","quadraticCurveTo",0x52eadd69,"openfl.display._internal.CairoGraphics.quadraticCurveTo","openfl/display/_internal/CairoGraphics.hx",1175,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_1198_render,"openfl.display._internal.CairoGraphics","render",0x66653ded,"openfl.display._internal.CairoGraphics.render","openfl/display/_internal/CairoGraphics.hx",1198,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_1506_renderMask,"openfl.display._internal.CairoGraphics","renderMask",0x176ea579,"openfl.display._internal.CairoGraphics.renderMask","openfl/display/_internal/CairoGraphics.hx",1506,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_37_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",37,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_40_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",40,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_41_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",41,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_47_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",47,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_56_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",56,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_58_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",58,0x56494baa)
namespace openfl{
namespace display{
namespace _internal{

void CairoGraphics_obj::__construct() { }

Dynamic CairoGraphics_obj::__CreateEmpty() { return new CairoGraphics_obj; }

void *CairoGraphics_obj::_hx_vtable = 0;

Dynamic CairoGraphics_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoGraphics_obj > _hx_result = new CairoGraphics_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoGraphics_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3a660be9;
}

Float CairoGraphics_obj::SIN45;

Float CairoGraphics_obj::TAN22;

bool CairoGraphics_obj::allowSmoothing;

 ::openfl::display::BitmapData CairoGraphics_obj::bitmapFill;

bool CairoGraphics_obj::bitmapRepeat;

 ::openfl::geom::Rectangle CairoGraphics_obj::bounds;

 ::lime::graphics::cairo::Cairo CairoGraphics_obj::cairo;

 ::openfl::display::_internal::DrawCommandBuffer CairoGraphics_obj::fillCommands;

 ::Dynamic CairoGraphics_obj::fillPattern;

 ::openfl::geom::Matrix CairoGraphics_obj::fillPatternMatrix;

 ::openfl::display::Graphics CairoGraphics_obj::graphics;

bool CairoGraphics_obj::hasFill;

bool CairoGraphics_obj::hasStroke;

bool CairoGraphics_obj::hitTesting;

 ::openfl::geom::Matrix CairoGraphics_obj::inversePendingMatrix;

 ::openfl::geom::Matrix CairoGraphics_obj::pendingMatrix;

 ::openfl::display::_internal::DrawCommandBuffer CairoGraphics_obj::strokeCommands;

 ::Dynamic CairoGraphics_obj::strokePattern;

 ::lime::utils::ArrayBufferView CairoGraphics_obj::tempMatrix3;

Float CairoGraphics_obj::worldAlpha;

void CairoGraphics_obj::closePath(::hx::Null< bool >  __o_strokeBefore){
            		bool strokeBefore = __o_strokeBefore.Default(false);
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_62_closePath)
HXLINE(  63)		if (::hx::IsNull( ::openfl::display::_internal::CairoGraphics_obj::strokePattern )) {
HXLINE(  65)			return;
            		}
HXLINE(  68)		if (!(strokeBefore)) {
HXLINE(  70)			::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
            		}
HXLINE(  73)		::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::strokePattern);
HXLINE(  74)		if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE(  74)			::openfl::display::_internal::CairoGraphics_obj::cairo->strokePreserve();
            		}
HXLINE(  76)		if (strokeBefore) {
HXLINE(  78)			::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
            		}
HXLINE(  81)		::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoGraphics_obj,closePath,(void))

 ::Dynamic CairoGraphics_obj::createGradientPattern( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,Float focalPointRatio){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_86_createGradientPattern)
HXLINE(  87)		 ::Dynamic pattern = null();
HXDLIN(  87)		 ::openfl::geom::Point point = null();
HXDLIN(  87)		 ::openfl::geom::Point point2 = null();
HXDLIN(  87)		bool releaseMatrix = false;
HXLINE(  92)		if (::hx::IsNull( matrix )) {
HXLINE(  94)			matrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(  95)			releaseMatrix = true;
            		}
HXLINE(  98)		 ::Dynamic _hx_switch_0 = type;
            		if (  (_hx_switch_0==0) ){
HXLINE( 111)			point = ::openfl::geom::Point_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Point >();
HXLINE( 112)			point->setTo(((Float)-819.2),( (Float)(0) ));
HXLINE( 113)			{
HXLINE( 113)				Float px = point->x;
HXDLIN( 113)				Float py = point->y;
HXDLIN( 113)				point->x = (((px * matrix->a) + (py * matrix->c)) + matrix->tx);
HXDLIN( 113)				point->y = (((px * matrix->b) + (py * matrix->d)) + matrix->ty);
            			}
HXLINE( 115)			point2 = ::openfl::geom::Point_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Point >();
HXLINE( 116)			point2->setTo(((Float)819.2),( (Float)(0) ));
HXLINE( 117)			{
HXLINE( 117)				Float px1 = point2->x;
HXDLIN( 117)				Float py1 = point2->y;
HXDLIN( 117)				point2->x = (((px1 * matrix->a) + (py1 * matrix->c)) + matrix->tx);
HXDLIN( 117)				point2->y = (((px1 * matrix->b) + (py1 * matrix->d)) + matrix->ty);
            			}
HXLINE( 119)			 ::openfl::geom::Point point1 = point;
HXDLIN( 119)			point1->x = (point1->x + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->x);
HXLINE( 120)			 ::openfl::geom::Point point21 = point2;
HXDLIN( 120)			point21->x = (point21->x + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->x);
HXLINE( 121)			 ::openfl::geom::Point point3 = point;
HXDLIN( 121)			point3->y = (point3->y + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->y);
HXLINE( 122)			 ::openfl::geom::Point point22 = point2;
HXDLIN( 122)			point22->y = (point22->y + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->y);
HXLINE( 124)			pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createLinear(point->x,point->y,point2->x,point2->y);
HXLINE( 110)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE( 101)			point = ::openfl::geom::Point_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Point >();
HXLINE( 102)			point->setTo(((Float)1638.4),( (Float)(0) ));
HXLINE( 103)			{
HXLINE( 103)				Float px = point->x;
HXDLIN( 103)				Float py = point->y;
HXDLIN( 103)				point->x = (((px * matrix->a) + (py * matrix->c)) + matrix->tx);
HXDLIN( 103)				point->y = (((px * matrix->b) + (py * matrix->d)) + matrix->ty);
            			}
HXLINE( 105)			Float x = (matrix->tx + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->x);
HXLINE( 106)			Float y = (matrix->ty + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->y);
HXLINE( 108)			pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRadial(x,y,( (Float)(0) ),x,y,::Math_obj::abs(((point->x - matrix->tx) / ( (Float)(2) ))));
HXLINE( 100)			goto _hx_goto_1;
            		}
            		_hx_goto_1:;
HXLINE( 127)		int rgb;
HXDLIN( 127)		Float alpha;
HXDLIN( 127)		Float r;
HXDLIN( 127)		Float g;
HXDLIN( 127)		Float b;
HXDLIN( 127)		Float ratio;
HXLINE( 129)		{
HXLINE( 129)			int _g = 0;
HXDLIN( 129)			int _g1 = colors->length;
HXDLIN( 129)			while((_g < _g1)){
HXLINE( 129)				_g = (_g + 1);
HXDLIN( 129)				int i = (_g - 1);
HXLINE( 131)				rgb = colors->__get(i);
HXLINE( 132)				alpha = alphas->__get(i);
HXLINE( 133)				r = (( (Float)(::hx::UShr((rgb & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 134)				g = (( (Float)(::hx::UShr((rgb & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 135)				b = (( (Float)((rgb & 255)) ) / ( (Float)(255) ));
HXLINE( 137)				ratio = (( (Float)(ratios->__get(i)) ) / ( (Float)(255) ));
HXLINE( 138)				if ((ratio < 0)) {
HXLINE( 138)					ratio = ( (Float)(0) );
            				}
            				else {
HXLINE( 139)					if ((ratio > 1)) {
HXLINE( 139)						ratio = ( (Float)(1) );
            					}
            				}
HXLINE( 141)				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::addColorStopRGBA(pattern,ratio,r,g,b,alpha);
            			}
            		}
HXLINE( 144)		if (::hx::IsNotNull( point )) {
HXLINE( 144)			::openfl::geom::Point_obj::_hx___pool->release(point);
            		}
HXLINE( 145)		if (::hx::IsNotNull( point2 )) {
HXLINE( 145)			::openfl::geom::Point_obj::_hx___pool->release(point2);
            		}
HXLINE( 146)		if (releaseMatrix) {
HXLINE( 146)			::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
            		}
HXLINE( 148)		 ::lime::utils::ArrayBufferView mat = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::get_matrix(pattern);
HXLINE( 150)		{
HXLINE( 150)			Float value = ::openfl::display::_internal::CairoGraphics_obj::bounds->x;
HXDLIN( 150)			 ::__hxcpp_memory_set_float(mat->buffer->b,(mat->byteOffset + 24),value);
            		}
HXLINE( 151)		{
HXLINE( 151)			Float value1 = ::openfl::display::_internal::CairoGraphics_obj::bounds->y;
HXDLIN( 151)			 ::__hxcpp_memory_set_float(mat->buffer->b,(mat->byteOffset + 28),value1);
            		}
HXLINE( 153)		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(pattern,mat);
HXLINE( 155)		return pattern;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(CairoGraphics_obj,createGradientPattern,return )

 ::Dynamic CairoGraphics_obj::createImagePattern( ::openfl::display::BitmapData bitmapFill, ::openfl::geom::Matrix matrix,bool bitmapRepeat,bool smooth){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_159_createImagePattern)
HXLINE( 160)		 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(bitmapFill->getSurface());
HXLINE( 161)		int _hx_tmp;
HXDLIN( 161)		bool _hx_tmp1;
HXDLIN( 161)		if (smooth) {
HXLINE( 161)			_hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::allowSmoothing;
            		}
            		else {
HXLINE( 161)			_hx_tmp1 = false;
            		}
HXDLIN( 161)		if (_hx_tmp1) {
HXLINE( 161)			_hx_tmp = 1;
            		}
            		else {
HXLINE( 161)			_hx_tmp = 3;
            		}
HXDLIN( 161)		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXLINE( 163)		if (bitmapRepeat) {
HXLINE( 165)			::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_extend(pattern,1);
            		}
HXLINE( 168)		::openfl::display::_internal::CairoGraphics_obj::fillPatternMatrix = matrix;
HXLINE( 170)		return pattern;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoGraphics_obj,createImagePattern,return )

void CairoGraphics_obj::drawRoundRect(Float x,Float y,Float width,Float height,Float ellipseWidth, ::Dynamic ellipseHeight){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_174_drawRoundRect)
HXLINE( 175)		if (::hx::IsNull( ellipseHeight )) {
HXLINE( 175)			ellipseHeight = ellipseWidth;
            		}
HXLINE( 177)		ellipseWidth = (ellipseWidth * ((Float)0.5));
HXLINE( 178)		ellipseHeight = (ellipseHeight * ((Float)0.5));
HXLINE( 180)		if ((ellipseWidth > (width / ( (Float)(2) )))) {
HXLINE( 180)			ellipseWidth = (width / ( (Float)(2) ));
            		}
HXLINE( 181)		if (::hx::IsGreater( ellipseHeight,(height / ( (Float)(2) )) )) {
HXLINE( 181)			ellipseHeight = (height / ( (Float)(2) ));
            		}
HXLINE( 183)		Float xe = (x + width);
HXDLIN( 183)		Float ye = (y + height);
HXDLIN( 183)		Float cx1 = (-(ellipseWidth) + (ellipseWidth * ::openfl::display::_internal::CairoGraphics_obj::SIN45));
HXDLIN( 183)		Float cx2 = (-(ellipseWidth) + (ellipseWidth * ::openfl::display::_internal::CairoGraphics_obj::TAN22));
HXDLIN( 183)		Float cy1 = (-(ellipseHeight) + (( (Float)(ellipseHeight) ) * ::openfl::display::_internal::CairoGraphics_obj::SIN45));
HXDLIN( 183)		Float cy2 = (-(ellipseHeight) + (( (Float)(ellipseHeight) ) * ::openfl::display::_internal::CairoGraphics_obj::TAN22));
HXLINE( 190)		::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(xe,(ye - ( (Float)(ellipseHeight) )));
HXLINE( 191)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo(xe,(ye + cy2),(xe + cx1),(ye + cy1));
HXLINE( 192)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((xe + cx2),ye,(xe - ellipseWidth),ye);
HXLINE( 193)		::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo((x + ellipseWidth),ye);
HXLINE( 194)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((x - cx2),ye,(x - cx1),(ye + cy1));
HXLINE( 195)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo(x,(ye + cy2),x,(ye - ( (Float)(ellipseHeight) )));
HXLINE( 196)		::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(x,(y + ellipseHeight));
HXLINE( 197)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo(x,(y - cy2),(x - cx1),(y - cy1));
HXLINE( 198)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((x - cx2),y,(x + ellipseWidth),y);
HXLINE( 199)		::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo((xe - ellipseWidth),y);
HXLINE( 200)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((xe + cx2),y,(xe + cx1),(y - cy1));
HXLINE( 201)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo(xe,(y - cy2),xe,(y + ellipseHeight));
HXLINE( 202)		::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(xe,(ye - ( (Float)(ellipseHeight) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,drawRoundRect,(void))

void CairoGraphics_obj::endFill(){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_206_endFill)
HXLINE( 207)		::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE( 208)		::openfl::display::_internal::CairoGraphics_obj::playCommands(::openfl::display::_internal::CairoGraphics_obj::fillCommands,false);
HXLINE( 209)		::openfl::display::_internal::CairoGraphics_obj::fillCommands->clear();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endFill,(void))

void CairoGraphics_obj::endStroke(){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_213_endStroke)
HXLINE( 214)		::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE( 215)		::openfl::display::_internal::CairoGraphics_obj::playCommands(::openfl::display::_internal::CairoGraphics_obj::strokeCommands,true);
HXLINE( 216)		::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
HXLINE( 217)		::openfl::display::_internal::CairoGraphics_obj::strokeCommands->clear();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endStroke,(void))

bool CairoGraphics_obj::hitTest( ::openfl::display::Graphics graphics,Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_222_hitTest)
HXLINE( 224)		::openfl::display::_internal::CairoGraphics_obj::graphics = graphics;
HXLINE( 225)		::openfl::display::_internal::CairoGraphics_obj::bounds = graphics->_hx___bounds;
HXLINE( 227)		bool _hx_tmp;
HXDLIN( 227)		bool _hx_tmp1;
HXDLIN( 227)		bool _hx_tmp2;
HXDLIN( 227)		bool _hx_tmp3;
HXDLIN( 227)		if ((graphics->_hx___commands->get_length() != 0)) {
HXLINE( 227)			_hx_tmp3 = ::hx::IsNull( ::openfl::display::_internal::CairoGraphics_obj::bounds );
            		}
            		else {
HXLINE( 227)			_hx_tmp3 = true;
            		}
HXDLIN( 227)		if (!(_hx_tmp3)) {
HXLINE( 227)			_hx_tmp2 = (::openfl::display::_internal::CairoGraphics_obj::bounds->width == 0);
            		}
            		else {
HXLINE( 227)			_hx_tmp2 = true;
            		}
HXDLIN( 227)		if (!(_hx_tmp2)) {
HXLINE( 227)			_hx_tmp1 = (::openfl::display::_internal::CairoGraphics_obj::bounds->height == 0);
            		}
            		else {
HXLINE( 227)			_hx_tmp1 = true;
            		}
HXDLIN( 227)		if (!(_hx_tmp1)) {
HXLINE( 227)			_hx_tmp = !(::openfl::display::_internal::CairoGraphics_obj::bounds->contains(x,y));
            		}
            		else {
HXLINE( 227)			_hx_tmp = true;
            		}
HXDLIN( 227)		if (_hx_tmp) {
HXLINE( 229)			::openfl::display::_internal::CairoGraphics_obj::graphics = null();
HXLINE( 230)			return false;
            		}
            		else {
HXLINE( 234)			::openfl::display::_internal::CairoGraphics_obj::hitTesting = true;
HXLINE( 236)			x = (x - ::openfl::display::_internal::CairoGraphics_obj::bounds->x);
HXLINE( 237)			y = (y - ::openfl::display::_internal::CairoGraphics_obj::bounds->y);
HXLINE( 239)			if (::hx::IsNull( graphics->_hx___cairo )) {
HXLINE( 241)				 ::openfl::display::BitmapData bitmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,::Math_obj::floor(::Math_obj::max(( (Float)(1) ),::openfl::display::_internal::CairoGraphics_obj::bounds->width)),::Math_obj::floor(::Math_obj::max(( (Float)(1) ),::openfl::display::_internal::CairoGraphics_obj::bounds->height)),true,0);
HXLINE( 242)				 ::Dynamic surface = bitmap->getSurface();
HXLINE( 243)				graphics->_hx___cairo =  ::lime::graphics::cairo::Cairo_obj::__alloc( HX_CTX ,surface);
            			}
HXLINE( 247)			::openfl::display::_internal::CairoGraphics_obj::cairo = graphics->_hx___cairo;
HXLINE( 249)			::openfl::display::_internal::CairoGraphics_obj::fillCommands->clear();
HXLINE( 250)			::openfl::display::_internal::CairoGraphics_obj::strokeCommands->clear();
HXLINE( 252)			::openfl::display::_internal::CairoGraphics_obj::hasFill = false;
HXLINE( 253)			::openfl::display::_internal::CairoGraphics_obj::hasStroke = false;
HXLINE( 255)			::openfl::display::_internal::CairoGraphics_obj::fillPattern = null();
HXLINE( 256)			::openfl::display::_internal::CairoGraphics_obj::strokePattern = null();
HXLINE( 258)			::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE( 259)			::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(1);
HXLINE( 261)			 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE( 263)			{
HXLINE( 263)				int _g = 0;
HXDLIN( 263)				::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN( 263)				while((_g < _g1->length)){
HXLINE( 263)					 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN( 263)					_g = (_g + 1);
HXLINE( 265)					switch((int)(type->_hx_getIndex())){
            						case (int)0: case (int)1: case (int)2: case (int)3: {
HXLINE( 333)							::openfl::display::_internal::CairoGraphics_obj::endFill();
HXLINE( 335)							bool _hx_tmp;
HXDLIN( 335)							if (::openfl::display::_internal::CairoGraphics_obj::hasFill) {
HXLINE( 335)								_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo->inFill(x,y);
            							}
            							else {
HXLINE( 335)								_hx_tmp = false;
            							}
HXDLIN( 335)							if (_hx_tmp) {
HXLINE( 337)								data->destroy();
HXLINE( 338)								::openfl::display::_internal::CairoGraphics_obj::graphics = null();
HXLINE( 339)								return true;
            							}
HXLINE( 342)							::openfl::display::_internal::CairoGraphics_obj::endStroke();
HXLINE( 344)							bool _hx_tmp1;
HXDLIN( 344)							if (::openfl::display::_internal::CairoGraphics_obj::hasStroke) {
HXLINE( 344)								_hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::cairo->inStroke(x,y);
            							}
            							else {
HXLINE( 344)								_hx_tmp1 = false;
            							}
HXDLIN( 344)							if (_hx_tmp1) {
HXLINE( 346)								data->destroy();
HXLINE( 347)								::openfl::display::_internal::CairoGraphics_obj::graphics = null();
HXLINE( 348)								return true;
            							}
HXLINE( 351)							if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn() )) {
HXLINE( 353)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 353)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)										data1->oPos = (data1->oPos + 2);
HXDLIN( 353)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 353)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 353)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)										data1->iPos = (data1->iPos + 1);
HXDLIN( 353)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 353)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 353)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)										data1->oPos = (data1->oPos + 4);
HXDLIN( 353)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 353)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 353)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 353)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 353)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 353)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 353)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 353)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 353)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 353)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 353)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 353)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 353)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 353)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)										data1->fPos = (data1->fPos + 5);
HXDLIN( 353)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 353)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 353)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 353)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)										data1->oPos = (data1->oPos + 2);
HXDLIN( 353)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 353)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 353)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)										data1->oPos = (data1->oPos + 4);
HXDLIN( 353)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 353)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 353)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 353)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 353)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 353)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 353)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)										data1->oPos = (data1->oPos + 4);
HXDLIN( 353)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 353)										data2->iPos = (data2->iPos + 1);
HXDLIN( 353)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 353)										data3->fPos = (data3->fPos + 2);
HXDLIN( 353)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 353)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 353)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 353)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 353)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 353)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 353)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN( 353)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 353)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 354)								::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginBitmapFill(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
HXLINE( 355)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginBitmapFill(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            							}
            							else {
HXLINE( 357)								if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn() )) {
HXLINE( 359)									switch((int)(data->prev->_hx_getIndex())){
            										case (int)0: {
HXLINE( 359)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)											data1->oPos = (data1->oPos + 2);
HXDLIN( 359)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 359)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)1: {
HXLINE( 359)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)											data1->iPos = (data1->iPos + 1);
HXDLIN( 359)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 359)											data2->fPos = (data2->fPos + 1);
            										}
            										break;
            										case (int)2: {
HXLINE( 359)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)											data1->oPos = (data1->oPos + 4);
HXDLIN( 359)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 359)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 359)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 359)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 359)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 359)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)3: {
HXLINE( 359)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)4: {
HXLINE( 359)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)											data1->fPos = (data1->fPos + 6);
            										}
            										break;
            										case (int)5: {
HXLINE( 359)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)6: {
HXLINE( 359)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)											data1->fPos = (data1->fPos + 3);
            										}
            										break;
            										case (int)7: {
HXLINE( 359)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)8: {
HXLINE( 359)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)											data1->oPos = (data1->oPos + 3);
            										}
            										break;
            										case (int)9: {
HXLINE( 359)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)10: {
HXLINE( 359)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)											data1->fPos = (data1->fPos + 5);
HXDLIN( 359)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 359)											data2->oPos = (data2->oPos + 1);
            										}
            										break;
            										case (int)12: {
HXLINE( 359)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)											data1->oPos = (data1->oPos + 4);
            										}
            										break;
            										case (int)13: {
            										}
            										break;
            										case (int)14: {
HXLINE( 359)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)											data1->oPos = (data1->oPos + 2);
HXDLIN( 359)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 359)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)15: {
HXLINE( 359)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)											data1->oPos = (data1->oPos + 4);
HXDLIN( 359)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 359)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 359)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 359)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 359)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 359)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)16: {
HXLINE( 359)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)											data1->oPos = (data1->oPos + 4);
HXDLIN( 359)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 359)											data2->iPos = (data2->iPos + 1);
HXDLIN( 359)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 359)											data3->fPos = (data3->fPos + 2);
HXDLIN( 359)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 359)											data4->bPos = (data4->bPos + 1);
            										}
            										break;
            										case (int)17: {
HXLINE( 359)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)18: {
HXLINE( 359)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)19: {
HXLINE( 359)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)20: {
HXLINE( 359)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)21: case (int)22: {
            										}
            										break;
            										default:{
            										}
            									}
HXLINE( 359)									data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn();
HXDLIN( 359)									 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 359)									 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 360)									::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginGradientFill(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
HXLINE( 362)									::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginGradientFill(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
            								}
            								else {
HXLINE( 365)									if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn() )) {
HXLINE( 367)										switch((int)(data->prev->_hx_getIndex())){
            											case (int)0: {
HXLINE( 367)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 367)												data1->oPos = (data1->oPos + 2);
HXDLIN( 367)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 367)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)1: {
HXLINE( 367)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 367)												data1->iPos = (data1->iPos + 1);
HXDLIN( 367)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 367)												data2->fPos = (data2->fPos + 1);
            											}
            											break;
            											case (int)2: {
HXLINE( 367)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 367)												data1->oPos = (data1->oPos + 4);
HXDLIN( 367)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 367)												data2->iiPos = (data2->iiPos + 2);
HXDLIN( 367)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 367)												data3->ffPos = (data3->ffPos + 1);
HXDLIN( 367)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 367)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)3: {
HXLINE( 367)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 367)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)4: {
HXLINE( 367)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 367)												data1->fPos = (data1->fPos + 6);
            											}
            											break;
            											case (int)5: {
HXLINE( 367)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 367)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)6: {
HXLINE( 367)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 367)												data1->fPos = (data1->fPos + 3);
            											}
            											break;
            											case (int)7: {
HXLINE( 367)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 367)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)8: {
HXLINE( 367)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 367)												data1->oPos = (data1->oPos + 3);
            											}
            											break;
            											case (int)9: {
HXLINE( 367)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 367)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)10: {
HXLINE( 367)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 367)												data1->fPos = (data1->fPos + 5);
HXDLIN( 367)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 367)												data2->oPos = (data2->oPos + 1);
            											}
            											break;
            											case (int)12: {
HXLINE( 367)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 367)												data1->oPos = (data1->oPos + 4);
            											}
            											break;
            											case (int)13: {
            											}
            											break;
            											case (int)14: {
HXLINE( 367)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 367)												data1->oPos = (data1->oPos + 2);
HXDLIN( 367)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 367)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)15: {
HXLINE( 367)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 367)												data1->oPos = (data1->oPos + 4);
HXDLIN( 367)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 367)												data2->iiPos = (data2->iiPos + 2);
HXDLIN( 367)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 367)												data3->ffPos = (data3->ffPos + 1);
HXDLIN( 367)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 367)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)16: {
HXLINE( 367)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 367)												data1->oPos = (data1->oPos + 4);
HXDLIN( 367)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 367)												data2->iPos = (data2->iPos + 1);
HXDLIN( 367)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 367)												data3->fPos = (data3->fPos + 2);
HXDLIN( 367)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 367)												data4->bPos = (data4->bPos + 1);
            											}
            											break;
            											case (int)17: {
HXLINE( 367)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 367)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)18: {
HXLINE( 367)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 367)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)19: {
HXLINE( 367)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 367)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)20: {
HXLINE( 367)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 367)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)21: case (int)22: {
            											}
            											break;
            											default:{
            											}
            										}
HXLINE( 367)										data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN( 367)										 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 367)										 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 368)										::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginShaderFill(( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) ));
HXLINE( 369)										::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginShaderFill(( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) ));
            									}
            									else {
HXLINE( 373)										switch((int)(data->prev->_hx_getIndex())){
            											case (int)0: {
HXLINE( 373)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 373)												data1->oPos = (data1->oPos + 2);
HXDLIN( 373)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 373)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)1: {
HXLINE( 373)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 373)												data1->iPos = (data1->iPos + 1);
HXDLIN( 373)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 373)												data2->fPos = (data2->fPos + 1);
            											}
            											break;
            											case (int)2: {
HXLINE( 373)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 373)												data1->oPos = (data1->oPos + 4);
HXDLIN( 373)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 373)												data2->iiPos = (data2->iiPos + 2);
HXDLIN( 373)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 373)												data3->ffPos = (data3->ffPos + 1);
HXDLIN( 373)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 373)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)3: {
HXLINE( 373)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 373)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)4: {
HXLINE( 373)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 373)												data1->fPos = (data1->fPos + 6);
            											}
            											break;
            											case (int)5: {
HXLINE( 373)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 373)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)6: {
HXLINE( 373)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 373)												data1->fPos = (data1->fPos + 3);
            											}
            											break;
            											case (int)7: {
HXLINE( 373)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 373)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)8: {
HXLINE( 373)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 373)												data1->oPos = (data1->oPos + 3);
            											}
            											break;
            											case (int)9: {
HXLINE( 373)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 373)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)10: {
HXLINE( 373)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 373)												data1->fPos = (data1->fPos + 5);
HXDLIN( 373)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 373)												data2->oPos = (data2->oPos + 1);
            											}
            											break;
            											case (int)12: {
HXLINE( 373)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 373)												data1->oPos = (data1->oPos + 4);
            											}
            											break;
            											case (int)13: {
            											}
            											break;
            											case (int)14: {
HXLINE( 373)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 373)												data1->oPos = (data1->oPos + 2);
HXDLIN( 373)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 373)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)15: {
HXLINE( 373)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 373)												data1->oPos = (data1->oPos + 4);
HXDLIN( 373)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 373)												data2->iiPos = (data2->iiPos + 2);
HXDLIN( 373)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 373)												data3->ffPos = (data3->ffPos + 1);
HXDLIN( 373)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 373)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)16: {
HXLINE( 373)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 373)												data1->oPos = (data1->oPos + 4);
HXDLIN( 373)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 373)												data2->iPos = (data2->iPos + 1);
HXDLIN( 373)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 373)												data3->fPos = (data3->fPos + 2);
HXDLIN( 373)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 373)												data4->bPos = (data4->bPos + 1);
            											}
            											break;
            											case (int)17: {
HXLINE( 373)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 373)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)18: {
HXLINE( 373)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 373)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)19: {
HXLINE( 373)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 373)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)20: {
HXLINE( 373)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 373)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)21: case (int)22: {
            											}
            											break;
            											default:{
            											}
            										}
HXLINE( 373)										data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXDLIN( 373)										 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 373)										 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 374)										::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginFill(c->buffer->i->__get(c->iPos),( (Float)(1) ));
HXLINE( 375)										::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginFill(c->buffer->i->__get(c->iPos),( (Float)(1) ));
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 268)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->oPos = (data1->oPos + 2);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 268)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->iPos = (data1->iPos + 1);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 268)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->oPos = (data1->oPos + 4);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 268)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 268)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 268)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->fPos = (data1->fPos + 5);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 268)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->oPos = (data1->oPos + 2);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 268)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->oPos = (data1->oPos + 4);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 268)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 268)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 268)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->oPos = (data1->oPos + 4);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 268)									data2->iPos = (data2->iPos + 1);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 268)									data3->fPos = (data3->fPos + 2);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 268)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 268)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXDLIN( 268)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 268)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 269)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->cubicCurveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->f->__get((c->fPos + 5)));
HXLINE( 270)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->cubicCurveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->f->__get((c->fPos + 5)));
            						}
            						break;
            						case (int)5: {
HXLINE( 273)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->oPos = (data1->oPos + 2);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 273)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->iPos = (data1->iPos + 1);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 273)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->oPos = (data1->oPos + 4);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 273)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 273)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 273)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->fPos = (data1->fPos + 5);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 273)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->oPos = (data1->oPos + 2);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 273)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->oPos = (data1->oPos + 4);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 273)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 273)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 273)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->oPos = (data1->oPos + 4);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 273)									data2->iPos = (data2->iPos + 1);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 273)									data3->fPos = (data3->fPos + 2);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 273)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 273)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXDLIN( 273)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 273)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 274)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->curveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE( 275)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->curveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            						}
            						break;
            						case (int)6: {
HXLINE( 379)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->oPos = (data1->oPos + 2);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 379)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->iPos = (data1->iPos + 1);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 379)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->oPos = (data1->oPos + 4);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 379)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 379)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 379)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->fPos = (data1->fPos + 5);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 379)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->oPos = (data1->oPos + 2);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 379)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->oPos = (data1->oPos + 4);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 379)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 379)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 379)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->oPos = (data1->oPos + 4);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 379)									data2->iPos = (data2->iPos + 1);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 379)									data3->fPos = (data3->fPos + 2);
HXDLIN( 379)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 379)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 379)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 379)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 379)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXDLIN( 379)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 379)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 380)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawCircle(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)));
HXLINE( 381)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawCircle(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)));
            						}
            						break;
            						case (int)7: {
HXLINE( 384)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 384)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)									data1->oPos = (data1->oPos + 2);
HXDLIN( 384)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 384)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 384)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)									data1->iPos = (data1->iPos + 1);
HXDLIN( 384)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 384)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 384)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)									data1->oPos = (data1->oPos + 4);
HXDLIN( 384)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 384)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 384)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 384)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 384)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 384)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 384)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 384)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 384)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 384)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 384)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 384)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 384)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 384)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)									data1->fPos = (data1->fPos + 5);
HXDLIN( 384)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 384)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 384)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 384)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)									data1->oPos = (data1->oPos + 2);
HXDLIN( 384)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 384)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 384)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)									data1->oPos = (data1->oPos + 4);
HXDLIN( 384)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 384)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 384)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 384)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 384)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 384)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 384)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)									data1->oPos = (data1->oPos + 4);
HXDLIN( 384)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 384)									data2->iPos = (data2->iPos + 1);
HXDLIN( 384)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 384)									data3->fPos = (data3->fPos + 2);
HXDLIN( 384)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 384)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 384)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 384)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 384)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 384)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 384)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 384)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXDLIN( 384)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 384)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 385)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawEllipse(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE( 386)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawEllipse(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            						}
            						break;
            						case (int)9: {
HXLINE( 389)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)									data1->oPos = (data1->oPos + 2);
HXDLIN( 389)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 389)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)									data1->iPos = (data1->iPos + 1);
HXDLIN( 389)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 389)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)									data1->oPos = (data1->oPos + 4);
HXDLIN( 389)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 389)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 389)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 389)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 389)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 389)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)									data1->fPos = (data1->fPos + 5);
HXDLIN( 389)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 389)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)									data1->oPos = (data1->oPos + 2);
HXDLIN( 389)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 389)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)									data1->oPos = (data1->oPos + 4);
HXDLIN( 389)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 389)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 389)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 389)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 389)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 389)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)									data1->oPos = (data1->oPos + 4);
HXDLIN( 389)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 389)									data2->iPos = (data2->iPos + 1);
HXDLIN( 389)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 389)									data3->fPos = (data3->fPos + 2);
HXDLIN( 389)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 389)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 389)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN( 389)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 389)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 390)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE( 391)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            						}
            						break;
            						case (int)10: {
HXLINE( 394)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->oPos = (data1->oPos + 2);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 394)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->iPos = (data1->iPos + 1);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 394)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->oPos = (data1->oPos + 4);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 394)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 394)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 394)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->fPos = (data1->fPos + 5);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 394)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->oPos = (data1->oPos + 2);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 394)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->oPos = (data1->oPos + 4);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 394)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 394)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 394)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->oPos = (data1->oPos + 4);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 394)									data2->iPos = (data2->iPos + 1);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 394)									data3->fPos = (data3->fPos + 2);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 394)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 394)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXDLIN( 394)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 394)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 395)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawRoundRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
HXLINE( 396)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawRoundRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
            						}
            						break;
            						case (int)13: {
HXLINE( 310)							{
HXLINE( 310)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 310)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 310)										data1->oPos = (data1->oPos + 2);
HXDLIN( 310)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 310)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 310)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 310)										data1->iPos = (data1->iPos + 1);
HXDLIN( 310)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 310)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 310)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 310)										data1->oPos = (data1->oPos + 4);
HXDLIN( 310)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 310)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 310)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 310)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 310)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 310)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 310)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 310)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 310)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 310)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 310)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 310)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 310)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 310)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 310)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 310)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 310)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 310)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 310)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 310)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 310)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 310)										data1->fPos = (data1->fPos + 5);
HXDLIN( 310)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 310)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 310)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 310)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 310)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 310)										data1->oPos = (data1->oPos + 2);
HXDLIN( 310)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 310)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 310)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 310)										data1->oPos = (data1->oPos + 4);
HXDLIN( 310)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 310)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 310)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 310)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 310)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 310)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 310)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 310)										data1->oPos = (data1->oPos + 4);
HXDLIN( 310)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 310)										data2->iPos = (data2->iPos + 1);
HXDLIN( 310)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 310)										data3->fPos = (data3->fPos + 2);
HXDLIN( 310)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 310)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 310)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 310)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 310)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 310)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 310)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 310)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 310)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 310)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 310)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::END_FILL_dyn();
HXDLIN( 310)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE( 311)							::openfl::display::_internal::CairoGraphics_obj::endFill();
HXLINE( 313)							bool _hx_tmp;
HXDLIN( 313)							if (::openfl::display::_internal::CairoGraphics_obj::hasFill) {
HXLINE( 313)								_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo->inFill(x,y);
            							}
            							else {
HXLINE( 313)								_hx_tmp = false;
            							}
HXDLIN( 313)							if (_hx_tmp) {
HXLINE( 315)								data->destroy();
HXLINE( 316)								::openfl::display::_internal::CairoGraphics_obj::graphics = null();
HXLINE( 317)								return true;
            							}
HXLINE( 320)							::openfl::display::_internal::CairoGraphics_obj::endStroke();
HXLINE( 322)							bool _hx_tmp1;
HXDLIN( 322)							if (::openfl::display::_internal::CairoGraphics_obj::hasStroke) {
HXLINE( 322)								_hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::cairo->inStroke(x,y);
            							}
            							else {
HXLINE( 322)								_hx_tmp1 = false;
            							}
HXDLIN( 322)							if (_hx_tmp1) {
HXLINE( 324)								data->destroy();
HXLINE( 325)								::openfl::display::_internal::CairoGraphics_obj::graphics = null();
HXLINE( 326)								return true;
            							}
HXLINE( 329)							::openfl::display::_internal::CairoGraphics_obj::hasFill = false;
HXLINE( 330)							::openfl::display::_internal::CairoGraphics_obj::bitmapFill = null();
            						}
            						break;
            						case (int)14: {
HXLINE( 306)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 306)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 306)									data1->oPos = (data1->oPos + 2);
HXDLIN( 306)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 306)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 306)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 306)									data1->iPos = (data1->iPos + 1);
HXDLIN( 306)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 306)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 306)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 306)									data1->oPos = (data1->oPos + 4);
HXDLIN( 306)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 306)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 306)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 306)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 306)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 306)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 306)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 306)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 306)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 306)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 306)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 306)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 306)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 306)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 306)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 306)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 306)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 306)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 306)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 306)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 306)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 306)									data1->fPos = (data1->fPos + 5);
HXDLIN( 306)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 306)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 306)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 306)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 306)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 306)									data1->oPos = (data1->oPos + 2);
HXDLIN( 306)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 306)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 306)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 306)									data1->oPos = (data1->oPos + 4);
HXDLIN( 306)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 306)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 306)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 306)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 306)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 306)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 306)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 306)									data1->oPos = (data1->oPos + 4);
HXDLIN( 306)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 306)									data2->iPos = (data2->iPos + 1);
HXDLIN( 306)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 306)									data3->fPos = (data3->fPos + 2);
HXDLIN( 306)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 306)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 306)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 306)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 306)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 306)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 306)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 306)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 306)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 306)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 306)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn();
HXDLIN( 306)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 306)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 307)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineBitmapStyle(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            						}
            						break;
            						case (int)15: {
HXLINE( 301)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)									data1->oPos = (data1->oPos + 2);
HXDLIN( 301)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 301)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)									data1->iPos = (data1->iPos + 1);
HXDLIN( 301)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 301)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)									data1->oPos = (data1->oPos + 4);
HXDLIN( 301)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 301)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 301)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 301)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 301)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 301)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)									data1->fPos = (data1->fPos + 5);
HXDLIN( 301)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 301)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)									data1->oPos = (data1->oPos + 2);
HXDLIN( 301)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 301)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)									data1->oPos = (data1->oPos + 4);
HXDLIN( 301)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 301)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 301)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 301)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 301)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 301)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)									data1->oPos = (data1->oPos + 4);
HXDLIN( 301)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 301)									data2->iPos = (data2->iPos + 1);
HXDLIN( 301)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 301)									data3->fPos = (data3->fPos + 2);
HXDLIN( 301)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 301)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 301)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 301)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn();
HXDLIN( 301)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 301)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 302)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineGradientStyle(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
            						}
            						break;
            						case (int)16: {
HXLINE( 288)							::openfl::display::_internal::CairoGraphics_obj::endStroke();
HXLINE( 290)							bool _hx_tmp;
HXDLIN( 290)							if (::openfl::display::_internal::CairoGraphics_obj::hasStroke) {
HXLINE( 290)								_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo->inStroke(x,y);
            							}
            							else {
HXLINE( 290)								_hx_tmp = false;
            							}
HXDLIN( 290)							if (_hx_tmp) {
HXLINE( 292)								data->destroy();
HXLINE( 293)								::openfl::display::_internal::CairoGraphics_obj::graphics = null();
HXLINE( 294)								return true;
            							}
HXLINE( 297)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->oPos = (data1->oPos + 2);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 297)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->iPos = (data1->iPos + 1);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 297)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->oPos = (data1->oPos + 4);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 297)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 297)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 297)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->fPos = (data1->fPos + 5);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 297)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->oPos = (data1->oPos + 2);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 297)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->oPos = (data1->oPos + 4);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 297)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 297)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 297)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->oPos = (data1->oPos + 4);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 297)									data2->iPos = (data2->iPos + 1);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 297)									data3->fPos = (data3->fPos + 2);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 297)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 297)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn();
HXDLIN( 297)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 297)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 298)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineStyle(c->buffer->o->__get(c->oPos),c->buffer->i->__get(c->iPos),( (Float)(1) ),c->buffer->b->__get(c->bPos),c->buffer->o->__get((c->oPos + 1)),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get((c->fPos + 1)));
            						}
            						break;
            						case (int)17: {
HXLINE( 278)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->oPos = (data1->oPos + 2);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 278)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->iPos = (data1->iPos + 1);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 278)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->oPos = (data1->oPos + 4);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 278)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 278)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 278)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->fPos = (data1->fPos + 5);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 278)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->oPos = (data1->oPos + 2);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 278)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->oPos = (data1->oPos + 4);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 278)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 278)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 278)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->oPos = (data1->oPos + 4);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 278)									data2->iPos = (data2->iPos + 1);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 278)									data3->fPos = (data3->fPos + 2);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 278)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 278)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXDLIN( 278)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 278)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 279)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->lineTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
HXLINE( 280)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            						}
            						break;
            						case (int)18: {
HXLINE( 283)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->oPos = (data1->oPos + 2);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 283)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->iPos = (data1->iPos + 1);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 283)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->oPos = (data1->oPos + 4);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 283)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 283)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 283)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->fPos = (data1->fPos + 5);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 283)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->oPos = (data1->oPos + 2);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 283)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->oPos = (data1->oPos + 4);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 283)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 283)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 283)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->oPos = (data1->oPos + 4);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 283)									data2->iPos = (data2->iPos + 1);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 283)									data3->fPos = (data3->fPos + 2);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 283)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 283)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN( 283)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 283)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 284)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->moveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
HXLINE( 285)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->moveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            						}
            						break;
            						case (int)21: {
HXLINE( 399)							{
HXLINE( 399)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 399)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)										data1->oPos = (data1->oPos + 2);
HXDLIN( 399)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 399)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 399)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)										data1->iPos = (data1->iPos + 1);
HXDLIN( 399)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 399)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 399)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)										data1->oPos = (data1->oPos + 4);
HXDLIN( 399)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 399)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 399)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 399)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 399)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 399)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 399)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 399)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 399)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 399)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 399)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 399)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 399)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 399)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)										data1->fPos = (data1->fPos + 5);
HXDLIN( 399)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 399)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 399)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 399)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)										data1->oPos = (data1->oPos + 2);
HXDLIN( 399)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 399)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 399)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)										data1->oPos = (data1->oPos + 4);
HXDLIN( 399)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 399)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 399)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 399)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 399)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 399)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 399)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)										data1->oPos = (data1->oPos + 4);
HXDLIN( 399)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 399)										data2->iPos = (data2->iPos + 1);
HXDLIN( 399)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 399)										data3->fPos = (data3->fPos + 2);
HXDLIN( 399)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 399)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 399)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 399)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 399)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 399)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 399)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_EVEN_ODD_dyn();
HXDLIN( 399)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE( 400)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(1);
            						}
            						break;
            						case (int)22: {
HXLINE( 403)							{
HXLINE( 403)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 403)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 403)										data1->oPos = (data1->oPos + 2);
HXDLIN( 403)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 403)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 403)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 403)										data1->iPos = (data1->iPos + 1);
HXDLIN( 403)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 403)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 403)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 403)										data1->oPos = (data1->oPos + 4);
HXDLIN( 403)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 403)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 403)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 403)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 403)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 403)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 403)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 403)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 403)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 403)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 403)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 403)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 403)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 403)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 403)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 403)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 403)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 403)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 403)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 403)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 403)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 403)										data1->fPos = (data1->fPos + 5);
HXDLIN( 403)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 403)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 403)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 403)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 403)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 403)										data1->oPos = (data1->oPos + 2);
HXDLIN( 403)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 403)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 403)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 403)										data1->oPos = (data1->oPos + 4);
HXDLIN( 403)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 403)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 403)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 403)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 403)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 403)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 403)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 403)										data1->oPos = (data1->oPos + 4);
HXDLIN( 403)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 403)										data2->iPos = (data2->iPos + 1);
HXDLIN( 403)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 403)										data3->fPos = (data3->fPos + 2);
HXDLIN( 403)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 403)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 403)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 403)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 403)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 403)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 403)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 403)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 403)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 403)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 403)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_NON_ZERO_dyn();
HXDLIN( 403)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE( 404)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(0);
            						}
            						break;
            						default:{
HXLINE( 407)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 407)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 407)									data1->oPos = (data1->oPos + 2);
HXDLIN( 407)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 407)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 407)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 407)									data1->iPos = (data1->iPos + 1);
HXDLIN( 407)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 407)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 407)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 407)									data1->oPos = (data1->oPos + 4);
HXDLIN( 407)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 407)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 407)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 407)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 407)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 407)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 407)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 407)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 407)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 407)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 407)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 407)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 407)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 407)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 407)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 407)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 407)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 407)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 407)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 407)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 407)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 407)									data1->fPos = (data1->fPos + 5);
HXDLIN( 407)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 407)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 407)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 407)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 407)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 407)									data1->oPos = (data1->oPos + 2);
HXDLIN( 407)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 407)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 407)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 407)									data1->oPos = (data1->oPos + 4);
HXDLIN( 407)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 407)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 407)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 407)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 407)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 407)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 407)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 407)									data1->oPos = (data1->oPos + 4);
HXDLIN( 407)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 407)									data2->iPos = (data2->iPos + 1);
HXDLIN( 407)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 407)									data3->fPos = (data3->fPos + 2);
HXDLIN( 407)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 407)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 407)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 407)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 407)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 407)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 407)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 407)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 407)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 407)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 407)							data->prev = type;
            						}
            					}
            				}
            			}
HXLINE( 411)			bool hitTest = false;
HXLINE( 413)			if ((::openfl::display::_internal::CairoGraphics_obj::fillCommands->get_length() > 0)) {
HXLINE( 415)				::openfl::display::_internal::CairoGraphics_obj::endFill();
            			}
HXLINE( 418)			bool _hx_tmp;
HXDLIN( 418)			if (::openfl::display::_internal::CairoGraphics_obj::hasFill) {
HXLINE( 418)				_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo->inFill(x,y);
            			}
            			else {
HXLINE( 418)				_hx_tmp = false;
            			}
HXDLIN( 418)			if (_hx_tmp) {
HXLINE( 420)				hitTest = true;
            			}
HXLINE( 423)			if ((::openfl::display::_internal::CairoGraphics_obj::strokeCommands->get_length() > 0)) {
HXLINE( 425)				::openfl::display::_internal::CairoGraphics_obj::endStroke();
            			}
HXLINE( 428)			bool _hx_tmp1;
HXDLIN( 428)			if (::openfl::display::_internal::CairoGraphics_obj::hasStroke) {
HXLINE( 428)				_hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::cairo->inStroke(x,y);
            			}
            			else {
HXLINE( 428)				_hx_tmp1 = false;
            			}
HXDLIN( 428)			if (_hx_tmp1) {
HXLINE( 430)				hitTest = true;
            			}
HXLINE( 433)			data->destroy();
HXLINE( 435)			::openfl::display::_internal::CairoGraphics_obj::graphics = null();
HXLINE( 436)			return hitTest;
            		}
HXLINE( 227)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoGraphics_obj,hitTest,return )

bool CairoGraphics_obj::isCCW(Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_446_isCCW)
HXDLIN( 446)		return ((((x2 - x1) * (y3 - y1)) - ((y2 - y1) * (x3 - x1))) < 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,isCCW,return )

 ::Dynamic CairoGraphics_obj::normalizeUVT( ::openfl::_Vector::FloatVector uvt,::hx::Null< bool >  __o_skipT){
            		bool skipT = __o_skipT.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_450_normalizeUVT)
HXLINE( 451)		Float max = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 452)		Float tmp = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 453)		int len = uvt->get_length();
HXLINE( 455)		{
HXLINE( 455)			int _g = 1;
HXDLIN( 455)			int _g1 = (len + 1);
HXDLIN( 455)			while((_g < _g1)){
HXLINE( 455)				_g = (_g + 1);
HXDLIN( 455)				int t = (_g - 1);
HXLINE( 457)				bool _hx_tmp;
HXDLIN( 457)				if (skipT) {
HXLINE( 457)					_hx_tmp = (::hx::Mod(t,3) == 0);
            				}
            				else {
HXLINE( 457)					_hx_tmp = false;
            				}
HXDLIN( 457)				if (_hx_tmp) {
HXLINE( 459)					continue;
            				}
HXLINE( 462)				tmp = uvt->get((t - 1));
HXLINE( 464)				if ((max < tmp)) {
HXLINE( 466)					max = tmp;
            				}
            			}
            		}
HXLINE( 470)		if (!(skipT)) {
HXLINE( 472)			return  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("max",a4,0a,53,00),max)
            				->setFixed(1,HX_("uvt",f3,2e,59,00),uvt));
            		}
HXLINE( 475)		int length = null();
HXDLIN( 475)		bool fixed = null();
HXDLIN( 475)		::Array< Float > array = null();
HXDLIN( 475)		 ::openfl::_Vector::FloatVector result =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 477)		{
HXLINE( 477)			int _g2 = 1;
HXDLIN( 477)			int _g3 = (len + 1);
HXDLIN( 477)			while((_g2 < _g3)){
HXLINE( 477)				_g2 = (_g2 + 1);
HXDLIN( 477)				int t = (_g2 - 1);
HXLINE( 479)				bool _hx_tmp;
HXDLIN( 479)				if (skipT) {
HXLINE( 479)					_hx_tmp = (::hx::Mod(t,3) == 0);
            				}
            				else {
HXLINE( 479)					_hx_tmp = false;
            				}
HXDLIN( 479)				if (_hx_tmp) {
HXLINE( 481)					continue;
            				}
HXLINE( 484)				result->push(uvt->get((t - 1)));
            			}
            		}
HXLINE( 487)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("max",a4,0a,53,00),max)
            			->setFixed(1,HX_("uvt",f3,2e,59,00),result));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,normalizeUVT,return )

void CairoGraphics_obj::playCommands( ::openfl::display::_internal::DrawCommandBuffer commands,::hx::Null< bool >  __o_stroke){
            		bool stroke = __o_stroke.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_491_playCommands)
HXLINE( 492)		if ((commands->get_length() == 0)) {
HXLINE( 492)			return;
            		}
HXLINE( 494)		::openfl::display::_internal::CairoGraphics_obj::bounds = ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds;
HXLINE( 496)		Float offsetX = ::openfl::display::_internal::CairoGraphics_obj::bounds->x;
HXLINE( 497)		Float offsetY = ::openfl::display::_internal::CairoGraphics_obj::bounds->y;
HXLINE( 499)		Float positionX = ((Float)0.0);
HXLINE( 500)		Float positionY = ((Float)0.0);
HXLINE( 502)		bool closeGap = false;
HXLINE( 503)		Float startX = ((Float)0.0);
HXLINE( 504)		Float startY = ((Float)0.0);
HXLINE( 505)		bool setStart = false;
HXLINE( 507)		::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(1);
HXLINE( 508)		::openfl::display::_internal::CairoGraphics_obj::cairo->set_antialias(3);
HXLINE( 510)		bool hasPath = false;
HXLINE( 512)		 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,commands);
HXLINE( 514)		Float x;
HXLINE( 515)		Float y;
HXLINE( 516)		Float width;
HXLINE( 517)		Float height;
HXLINE( 518)		Float kappa = ((Float)0.5522848);
HXLINE( 519)		Float ox;
HXLINE( 520)		Float oy;
HXLINE( 521)		Float xe;
HXLINE( 522)		Float ye;
HXLINE( 523)		Float xm;
HXLINE( 524)		Float ym;
HXLINE( 525)		Float r;
HXLINE( 526)		Float g;
HXLINE( 527)		Float b;
HXLINE( 529)		{
HXLINE( 529)			int _g = 0;
HXDLIN( 529)			::Array< ::Dynamic> _g1 = commands->types;
HXDLIN( 529)			while((_g < _g1->length)){
HXLINE( 529)				 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN( 529)				_g = (_g + 1);
HXLINE( 531)				switch((int)(type->_hx_getIndex())){
            					case (int)0: {
HXLINE( 726)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 726)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 726)								data1->oPos = (data1->oPos + 2);
HXDLIN( 726)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 726)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 726)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 726)								data1->iPos = (data1->iPos + 1);
HXDLIN( 726)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 726)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 726)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 726)								data1->oPos = (data1->oPos + 4);
HXDLIN( 726)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 726)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 726)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 726)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 726)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 726)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 726)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 726)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 726)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 726)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 726)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 726)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 726)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 726)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 726)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 726)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 726)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 726)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 726)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 726)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 726)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 726)								data1->fPos = (data1->fPos + 5);
HXDLIN( 726)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 726)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 726)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 726)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 726)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 726)								data1->oPos = (data1->oPos + 2);
HXDLIN( 726)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 726)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 726)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 726)								data1->oPos = (data1->oPos + 4);
HXDLIN( 726)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 726)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 726)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 726)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 726)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 726)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 726)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 726)								data1->oPos = (data1->oPos + 4);
HXDLIN( 726)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 726)								data2->iPos = (data2->iPos + 1);
HXDLIN( 726)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 726)								data3->fPos = (data3->fPos + 2);
HXDLIN( 726)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 726)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 726)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 726)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 726)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 726)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 726)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 726)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 726)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 726)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 726)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN( 726)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 726)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 728)						if (( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) )->readable) {
HXLINE( 730)							::openfl::display::_internal::CairoGraphics_obj::fillPattern = ::openfl::display::_internal::CairoGraphics_obj::createImagePattern(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            						}
            						else {
HXLINE( 737)							::openfl::display::_internal::CairoGraphics_obj::fillPattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGB(( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
            						}
HXLINE( 740)						::openfl::display::_internal::CairoGraphics_obj::bitmapFill = ( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) );
HXLINE( 741)						::openfl::display::_internal::CairoGraphics_obj::bitmapRepeat = c->buffer->b->__get(c->bPos);
HXLINE( 743)						::openfl::display::_internal::CairoGraphics_obj::hasFill = true;
            					}
            					break;
            					case (int)1: {
HXLINE( 746)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 746)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 746)								data1->oPos = (data1->oPos + 2);
HXDLIN( 746)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 746)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 746)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 746)								data1->iPos = (data1->iPos + 1);
HXDLIN( 746)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 746)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 746)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 746)								data1->oPos = (data1->oPos + 4);
HXDLIN( 746)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 746)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 746)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 746)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 746)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 746)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 746)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 746)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 746)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 746)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 746)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 746)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 746)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 746)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 746)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 746)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 746)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 746)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 746)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 746)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 746)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 746)								data1->fPos = (data1->fPos + 5);
HXDLIN( 746)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 746)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 746)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 746)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 746)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 746)								data1->oPos = (data1->oPos + 2);
HXDLIN( 746)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 746)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 746)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 746)								data1->oPos = (data1->oPos + 4);
HXDLIN( 746)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 746)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 746)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 746)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 746)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 746)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 746)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 746)								data1->oPos = (data1->oPos + 4);
HXDLIN( 746)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 746)								data2->iPos = (data2->iPos + 1);
HXDLIN( 746)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 746)								data3->fPos = (data3->fPos + 2);
HXDLIN( 746)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 746)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 746)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 746)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 746)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 746)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 746)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 746)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 746)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 746)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 746)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXDLIN( 746)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 746)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 747)						if ((c->buffer->f->__get(c->fPos) < ((Float)0.005))) {
HXLINE( 749)							::openfl::display::_internal::CairoGraphics_obj::hasFill = false;
            						}
            						else {
HXLINE( 753)							if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::fillPattern )) {
HXLINE( 755)								::openfl::display::_internal::CairoGraphics_obj::fillPatternMatrix = null();
            							}
HXLINE( 758)							::openfl::display::_internal::CairoGraphics_obj::fillPattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA((( (Float)(::hx::UShr((c->buffer->i->__get(c->iPos) & 16711680),16)) ) / ( (Float)(255) )),(( (Float)(::hx::UShr((c->buffer->i->__get(c->iPos) & 65280),8)) ) / ( (Float)(255) )),(( (Float)((c->buffer->i->__get(c->iPos) & 255)) ) / ( (Float)(255) )),c->buffer->f->__get(c->fPos));
HXLINE( 760)							::openfl::display::_internal::CairoGraphics_obj::hasFill = true;
            						}
HXLINE( 763)						::openfl::display::_internal::CairoGraphics_obj::bitmapFill = null();
            					}
            					break;
            					case (int)2: {
HXLINE( 766)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 766)								data1->oPos = (data1->oPos + 2);
HXDLIN( 766)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 766)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 766)								data1->iPos = (data1->iPos + 1);
HXDLIN( 766)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 766)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 766)								data1->oPos = (data1->oPos + 4);
HXDLIN( 766)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 766)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 766)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 766)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 766)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 766)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 766)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 766)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 766)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 766)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 766)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 766)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 766)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 766)								data1->fPos = (data1->fPos + 5);
HXDLIN( 766)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 766)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 766)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 766)								data1->oPos = (data1->oPos + 2);
HXDLIN( 766)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 766)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 766)								data1->oPos = (data1->oPos + 4);
HXDLIN( 766)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 766)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 766)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 766)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 766)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 766)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 766)								data1->oPos = (data1->oPos + 4);
HXDLIN( 766)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 766)								data2->iPos = (data2->iPos + 1);
HXDLIN( 766)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 766)								data3->fPos = (data3->fPos + 2);
HXDLIN( 766)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 766)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 766)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 766)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 766)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 766)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 766)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn();
HXDLIN( 766)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 766)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 767)						if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::fillPattern )) {
HXLINE( 769)							::openfl::display::_internal::CairoGraphics_obj::fillPatternMatrix = null();
            						}
HXLINE( 772)						::openfl::display::_internal::CairoGraphics_obj::fillPattern = ::openfl::display::_internal::CairoGraphics_obj::createGradientPattern(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
HXLINE( 775)						::openfl::display::_internal::CairoGraphics_obj::hasFill = true;
HXLINE( 776)						::openfl::display::_internal::CairoGraphics_obj::bitmapFill = null();
            					}
            					break;
            					case (int)3: {
HXLINE( 779)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 779)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 779)								data1->oPos = (data1->oPos + 2);
HXDLIN( 779)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 779)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 779)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 779)								data1->iPos = (data1->iPos + 1);
HXDLIN( 779)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 779)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 779)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 779)								data1->oPos = (data1->oPos + 4);
HXDLIN( 779)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 779)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 779)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 779)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 779)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 779)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 779)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 779)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 779)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 779)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 779)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 779)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 779)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 779)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 779)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 779)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 779)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 779)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 779)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 779)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 779)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 779)								data1->fPos = (data1->fPos + 5);
HXDLIN( 779)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 779)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 779)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 779)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 779)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 779)								data1->oPos = (data1->oPos + 2);
HXDLIN( 779)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 779)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 779)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 779)								data1->oPos = (data1->oPos + 4);
HXDLIN( 779)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 779)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 779)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 779)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 779)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 779)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 779)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 779)								data1->oPos = (data1->oPos + 4);
HXDLIN( 779)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 779)								data2->iPos = (data2->iPos + 1);
HXDLIN( 779)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 779)								data3->fPos = (data3->fPos + 2);
HXDLIN( 779)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 779)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 779)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 779)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 779)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 779)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 779)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 779)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 779)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 779)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 779)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN( 779)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 779)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 780)						 ::openfl::display::_internal::ShaderBuffer shaderBuffer = ( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) );
HXLINE( 782)						if ((shaderBuffer->inputCount > 0)) {
HXLINE( 784)							 ::openfl::display::BitmapData bitmap = shaderBuffer->inputs->__get(0).StaticCast<  ::openfl::display::BitmapData >();
HXLINE( 785)							if (bitmap->readable) {
HXLINE( 787)								::openfl::display::_internal::CairoGraphics_obj::fillPattern = ::openfl::display::_internal::CairoGraphics_obj::createImagePattern(bitmap,null(),::hx::IsNotEq( shaderBuffer->inputWrap->__get(0),0 ),::hx::IsNotEq( shaderBuffer->inputFilter->__get(0),5 ));
            							}
            							else {
HXLINE( 795)								::openfl::display::_internal::CairoGraphics_obj::fillPattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGB(( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
            							}
HXLINE( 798)							::openfl::display::_internal::CairoGraphics_obj::bitmapFill = bitmap;
HXLINE( 799)							::openfl::display::_internal::CairoGraphics_obj::bitmapRepeat = false;
HXLINE( 801)							::openfl::display::_internal::CairoGraphics_obj::hasFill = true;
            						}
            					}
            					break;
            					case (int)4: {
HXLINE( 534)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 534)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 534)								data1->oPos = (data1->oPos + 2);
HXDLIN( 534)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 534)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 534)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 534)								data1->iPos = (data1->iPos + 1);
HXDLIN( 534)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 534)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 534)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 534)								data1->oPos = (data1->oPos + 4);
HXDLIN( 534)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 534)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 534)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 534)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 534)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 534)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 534)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 534)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 534)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 534)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 534)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 534)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 534)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 534)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 534)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 534)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 534)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 534)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 534)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 534)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 534)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 534)								data1->fPos = (data1->fPos + 5);
HXDLIN( 534)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 534)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 534)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 534)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 534)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 534)								data1->oPos = (data1->oPos + 2);
HXDLIN( 534)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 534)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 534)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 534)								data1->oPos = (data1->oPos + 4);
HXDLIN( 534)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 534)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 534)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 534)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 534)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 534)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 534)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 534)								data1->oPos = (data1->oPos + 4);
HXDLIN( 534)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 534)								data2->iPos = (data2->iPos + 1);
HXDLIN( 534)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 534)								data3->fPos = (data3->fPos + 2);
HXDLIN( 534)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 534)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 534)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 534)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 534)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 534)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 534)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 534)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 534)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 534)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 534)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXDLIN( 534)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 534)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 535)						hasPath = true;
HXLINE( 536)						::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY),(c->buffer->f->__get((c->fPos + 2)) - offsetX),(c->buffer->f->__get((c->fPos + 3)) - offsetY),(c->buffer->f->__get((c->fPos + 4)) - offsetX),(c->buffer->f->__get((c->fPos + 5)) - offsetY));
HXLINE( 545)						positionX = c->buffer->f->__get((c->fPos + 4));
HXLINE( 546)						positionY = c->buffer->f->__get((c->fPos + 5));
            					}
            					break;
            					case (int)5: {
HXLINE( 549)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 549)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 549)								data1->oPos = (data1->oPos + 2);
HXDLIN( 549)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 549)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 549)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 549)								data1->iPos = (data1->iPos + 1);
HXDLIN( 549)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 549)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 549)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 549)								data1->oPos = (data1->oPos + 4);
HXDLIN( 549)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 549)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 549)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 549)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 549)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 549)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 549)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 549)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 549)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 549)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 549)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 549)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 549)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 549)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 549)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 549)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 549)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 549)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 549)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 549)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 549)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 549)								data1->fPos = (data1->fPos + 5);
HXDLIN( 549)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 549)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 549)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 549)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 549)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 549)								data1->oPos = (data1->oPos + 2);
HXDLIN( 549)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 549)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 549)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 549)								data1->oPos = (data1->oPos + 4);
HXDLIN( 549)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 549)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 549)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 549)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 549)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 549)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 549)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 549)								data1->oPos = (data1->oPos + 4);
HXDLIN( 549)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 549)								data2->iPos = (data2->iPos + 1);
HXDLIN( 549)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 549)								data3->fPos = (data3->fPos + 2);
HXDLIN( 549)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 549)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 549)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 549)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 549)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 549)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 549)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 549)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 549)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 549)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 549)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXDLIN( 549)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 549)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 550)						hasPath = true;
HXLINE( 551)						::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY),(c->buffer->f->__get((c->fPos + 2)) - offsetX),(c->buffer->f->__get((c->fPos + 3)) - offsetY));
HXLINE( 553)						positionX = c->buffer->f->__get((c->fPos + 2));
HXLINE( 554)						positionY = c->buffer->f->__get((c->fPos + 3));
            					}
            					break;
            					case (int)6: {
HXLINE( 557)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 557)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 557)								data1->oPos = (data1->oPos + 2);
HXDLIN( 557)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 557)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 557)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 557)								data1->iPos = (data1->iPos + 1);
HXDLIN( 557)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 557)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 557)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 557)								data1->oPos = (data1->oPos + 4);
HXDLIN( 557)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 557)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 557)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 557)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 557)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 557)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 557)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 557)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 557)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 557)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 557)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 557)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 557)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 557)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 557)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 557)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 557)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 557)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 557)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 557)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 557)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 557)								data1->fPos = (data1->fPos + 5);
HXDLIN( 557)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 557)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 557)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 557)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 557)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 557)								data1->oPos = (data1->oPos + 2);
HXDLIN( 557)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 557)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 557)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 557)								data1->oPos = (data1->oPos + 4);
HXDLIN( 557)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 557)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 557)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 557)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 557)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 557)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 557)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 557)								data1->oPos = (data1->oPos + 4);
HXDLIN( 557)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 557)								data2->iPos = (data2->iPos + 1);
HXDLIN( 557)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 557)								data3->fPos = (data3->fPos + 2);
HXDLIN( 557)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 557)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 557)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 557)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 557)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 557)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 557)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 557)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 557)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 557)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 557)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXDLIN( 557)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 557)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 558)						hasPath = true;
HXLINE( 559)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(((c->buffer->f->__get(c->fPos) - offsetX) + c->buffer->f->__get((c->fPos + 2))),(c->buffer->f->__get((c->fPos + 1)) - offsetY));
HXLINE( 560)						::openfl::display::_internal::CairoGraphics_obj::cairo->arc((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY),c->buffer->f->__get((c->fPos + 2)),( (Float)(0) ),(::Math_obj::PI * ( (Float)(2) )));
            					}
            					break;
            					case (int)7: {
HXLINE( 568)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 568)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 568)								data1->oPos = (data1->oPos + 2);
HXDLIN( 568)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 568)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 568)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 568)								data1->iPos = (data1->iPos + 1);
HXDLIN( 568)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 568)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 568)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 568)								data1->oPos = (data1->oPos + 4);
HXDLIN( 568)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 568)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 568)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 568)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 568)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 568)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 568)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 568)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 568)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 568)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 568)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 568)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 568)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 568)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 568)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 568)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 568)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 568)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 568)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 568)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 568)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 568)								data1->fPos = (data1->fPos + 5);
HXDLIN( 568)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 568)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 568)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 568)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 568)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 568)								data1->oPos = (data1->oPos + 2);
HXDLIN( 568)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 568)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 568)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 568)								data1->oPos = (data1->oPos + 4);
HXDLIN( 568)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 568)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 568)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 568)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 568)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 568)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 568)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 568)								data1->oPos = (data1->oPos + 4);
HXDLIN( 568)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 568)								data2->iPos = (data2->iPos + 1);
HXDLIN( 568)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 568)								data3->fPos = (data3->fPos + 2);
HXDLIN( 568)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 568)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 568)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 568)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 568)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 568)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 568)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 568)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 568)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 568)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 568)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXDLIN( 568)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 568)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 569)						hasPath = true;
HXLINE( 571)						x = c->buffer->f->__get(c->fPos);
HXLINE( 572)						y = c->buffer->f->__get((c->fPos + 1));
HXLINE( 573)						width = c->buffer->f->__get((c->fPos + 2));
HXLINE( 574)						height = c->buffer->f->__get((c->fPos + 3));
HXLINE( 576)						x = (x - offsetX);
HXLINE( 577)						y = (y - offsetY);
HXLINE( 579)						ox = ((width / ( (Float)(2) )) * kappa);
HXLINE( 580)						oy = ((height / ( (Float)(2) )) * kappa);
HXLINE( 581)						xe = (x + width);
HXLINE( 582)						ye = (y + height);
HXLINE( 583)						xm = (x + (width / ( (Float)(2) )));
HXLINE( 584)						ym = (y + (height / ( (Float)(2) )));
HXLINE( 586)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(x,ym);
HXLINE( 587)						::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo(x,(ym - oy),(xm - ox),y,xm,y);
HXLINE( 588)						::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((xm + ox),y,xe,(ym - oy),xe,ym);
HXLINE( 589)						::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo(xe,(ym + oy),(xm + ox),ye,xm,ye);
HXLINE( 590)						::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((xm - ox),ye,x,(ym + oy),x,ym);
            					}
            					break;
            					case (int)8: {
HXLINE( 805)						int cacheExtend = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::get_extend(::openfl::display::_internal::CairoGraphics_obj::fillPattern);
HXLINE( 806)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_extend(::openfl::display::_internal::CairoGraphics_obj::fillPattern,0);
HXLINE( 808)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)								data1->oPos = (data1->oPos + 2);
HXDLIN( 808)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 808)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)								data1->iPos = (data1->iPos + 1);
HXDLIN( 808)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 808)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)								data1->oPos = (data1->oPos + 4);
HXDLIN( 808)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 808)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 808)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 808)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 808)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 808)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)								data1->fPos = (data1->fPos + 5);
HXDLIN( 808)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 808)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)								data1->oPos = (data1->oPos + 2);
HXDLIN( 808)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 808)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)								data1->oPos = (data1->oPos + 4);
HXDLIN( 808)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 808)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 808)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 808)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 808)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 808)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)								data1->oPos = (data1->oPos + 4);
HXDLIN( 808)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 808)								data2->iPos = (data2->iPos + 1);
HXDLIN( 808)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 808)								data3->fPos = (data3->fPos + 2);
HXDLIN( 808)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 808)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 808)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn();
HXDLIN( 808)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 808)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 809)						 ::openfl::_Vector::FloatVector rects = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE( 810)						 ::openfl::_Vector::IntVector indices = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE( 811)						 ::openfl::_Vector::FloatVector transforms = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE( 813)						bool hasIndices = ::hx::IsNotNull( indices );
HXLINE( 814)						bool transformABCD = false;
HXDLIN( 814)						bool transformXY = false;
HXLINE( 816)						int length;
HXDLIN( 816)						if (hasIndices) {
HXLINE( 816)							length = indices->get_length();
            						}
            						else {
HXLINE( 816)							length = ::Math_obj::floor((( (Float)(rects->get_length()) ) / ( (Float)(4) )));
            						}
HXLINE( 817)						if ((length == 0)) {
HXLINE( 817)							return;
            						}
HXLINE( 819)						if (::hx::IsNotNull( transforms )) {
HXLINE( 821)							if ((transforms->get_length() >= (length * 6))) {
HXLINE( 823)								transformABCD = true;
HXLINE( 824)								transformXY = true;
            							}
            							else {
HXLINE( 826)								if ((transforms->get_length() >= (length * 4))) {
HXLINE( 828)									transformABCD = true;
            								}
            								else {
HXLINE( 830)									if ((transforms->get_length() >= (length * 2))) {
HXLINE( 832)										transformXY = true;
            									}
            								}
            							}
            						}
HXLINE( 836)						 ::openfl::geom::Rectangle tileRect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 837)						 ::openfl::geom::Matrix tileTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 839)						 ::openfl::geom::Rectangle sourceRect;
HXDLIN( 839)						if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::bitmapFill )) {
HXLINE( 839)							sourceRect = ::openfl::display::_internal::CairoGraphics_obj::bitmapFill->rect;
            						}
            						else {
HXLINE( 839)							sourceRect = null();
            						}
HXLINE( 840)						::lime::math::_Matrix3::Matrix3_Impl__obj::identity(::openfl::display::_internal::CairoGraphics_obj::tempMatrix3);
HXLINE( 842)						 ::openfl::geom::Matrix transform = ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___renderTransform;
HXLINE( 844)						Float alpha = ::openfl::display::_internal::CairoGraphics_obj::worldAlpha;
HXLINE( 846)						int ri;
HXLINE( 847)						int ti;
HXLINE( 849)						{
HXLINE( 849)							int _g = 0;
HXDLIN( 849)							int _g1 = length;
HXDLIN( 849)							while((_g < _g1)){
HXLINE( 849)								_g = (_g + 1);
HXDLIN( 849)								int i = (_g - 1);
HXLINE( 851)								if (hasIndices) {
HXLINE( 851)									ri = (indices->get(i) * 4);
            								}
            								else {
HXLINE( 851)									ri = (i * 4);
            								}
HXLINE( 852)								if ((ri < 0)) {
HXLINE( 852)									continue;
            								}
HXLINE( 853)								Float _hx_tmp = rects->get(ri);
HXDLIN( 853)								Float _hx_tmp1 = rects->get((ri + 1));
HXDLIN( 853)								Float _hx_tmp2 = rects->get((ri + 2));
HXDLIN( 853)								tileRect->setTo(_hx_tmp,_hx_tmp1,_hx_tmp2,rects->get((ri + 3)));
HXLINE( 855)								bool _hx_tmp3;
HXDLIN( 855)								if (!((tileRect->width <= 0))) {
HXLINE( 855)									_hx_tmp3 = (tileRect->height <= 0);
            								}
            								else {
HXLINE( 855)									_hx_tmp3 = true;
            								}
HXDLIN( 855)								if (_hx_tmp3) {
HXLINE( 857)									continue;
            								}
HXLINE( 860)								bool _hx_tmp4;
HXDLIN( 860)								if (transformABCD) {
HXLINE( 860)									_hx_tmp4 = transformXY;
            								}
            								else {
HXLINE( 860)									_hx_tmp4 = false;
            								}
HXDLIN( 860)								if (_hx_tmp4) {
HXLINE( 862)									ti = (i * 6);
HXLINE( 863)									Float _hx_tmp = transforms->get(ti);
HXDLIN( 863)									Float _hx_tmp1 = transforms->get((ti + 1));
HXDLIN( 863)									Float _hx_tmp2 = transforms->get((ti + 2));
HXDLIN( 863)									Float _hx_tmp3 = transforms->get((ti + 3));
HXDLIN( 863)									Float _hx_tmp4 = transforms->get((ti + 4));
HXDLIN( 863)									tileTransform->setTo(_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3,_hx_tmp4,transforms->get((ti + 5)));
            								}
            								else {
HXLINE( 866)									if (transformABCD) {
HXLINE( 868)										ti = (i * 4);
HXLINE( 869)										Float _hx_tmp = transforms->get(ti);
HXDLIN( 869)										Float _hx_tmp1 = transforms->get((ti + 1));
HXDLIN( 869)										Float _hx_tmp2 = transforms->get((ti + 2));
HXDLIN( 869)										tileTransform->setTo(_hx_tmp,_hx_tmp1,_hx_tmp2,transforms->get((ti + 3)),tileRect->x,tileRect->y);
            									}
            									else {
HXLINE( 871)										if (transformXY) {
HXLINE( 873)											ti = (i * 2);
HXLINE( 874)											tileTransform->tx = transforms->get(ti);
HXLINE( 875)											tileTransform->ty = transforms->get((ti + 1));
            										}
            										else {
HXLINE( 879)											tileTransform->tx = tileRect->x;
HXLINE( 880)											tileTransform->ty = tileRect->y;
            										}
            									}
            								}
HXLINE( 883)								 ::openfl::geom::Matrix tileTransform1 = tileTransform;
HXDLIN( 883)								tileTransform1->tx = (tileTransform1->tx + (positionX - offsetX));
HXLINE( 884)								 ::openfl::geom::Matrix tileTransform2 = tileTransform;
HXDLIN( 884)								tileTransform2->ty = (tileTransform2->ty + (positionY - offsetY));
HXLINE( 885)								tileTransform->concat(transform);
HXLINE( 894)								 ::lime::graphics::cairo::Cairo _hx_tmp5 = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN( 894)								_hx_tmp5->set_matrix(tileTransform->_hx___toMatrix3());
HXLINE( 896)								{
HXLINE( 896)									 ::lime::utils::ArrayBufferView this1 = ::openfl::display::_internal::CairoGraphics_obj::tempMatrix3;
HXDLIN( 896)									Float value = tileRect->x;
HXDLIN( 896)									 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),value);
            								}
HXLINE( 897)								{
HXLINE( 897)									 ::lime::utils::ArrayBufferView this2 = ::openfl::display::_internal::CairoGraphics_obj::tempMatrix3;
HXDLIN( 897)									Float value1 = tileRect->y;
HXDLIN( 897)									 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 28),value1);
            								}
HXLINE( 898)								::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(::openfl::display::_internal::CairoGraphics_obj::fillPattern,::openfl::display::_internal::CairoGraphics_obj::tempMatrix3);
HXLINE( 899)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::fillPattern);
HXLINE( 901)								if (::hx::IsInstanceNotEq( tileRect,sourceRect )) {
HXLINE( 903)									::openfl::display::_internal::CairoGraphics_obj::cairo->save();
HXLINE( 905)									::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE( 906)									::openfl::display::_internal::CairoGraphics_obj::cairo->rectangle(( (Float)(0) ),( (Float)(0) ),tileRect->width,tileRect->height);
HXLINE( 907)									::openfl::display::_internal::CairoGraphics_obj::cairo->clip();
            								}
HXLINE( 910)								if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE( 912)									if ((alpha == 1)) {
HXLINE( 914)										::openfl::display::_internal::CairoGraphics_obj::cairo->paint();
            									}
            									else {
HXLINE( 918)										::openfl::display::_internal::CairoGraphics_obj::cairo->paintWithAlpha(alpha);
            									}
            								}
HXLINE( 922)								if (::hx::IsInstanceNotEq( tileRect,sourceRect )) {
HXLINE( 924)									::openfl::display::_internal::CairoGraphics_obj::cairo->restore();
            								}
            							}
            						}
HXLINE( 928)						::openfl::geom::Rectangle_obj::_hx___pool->release(tileRect);
HXLINE( 929)						::openfl::geom::Matrix_obj::_hx___pool->release(tileTransform);
HXLINE( 931)						 ::lime::graphics::cairo::Cairo _hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN( 931)						_hx_tmp->set_matrix(::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___renderTransform->_hx___toMatrix3());
HXLINE( 932)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_extend(::openfl::display::_internal::CairoGraphics_obj::fillPattern,cacheExtend);
            					}
            					break;
            					case (int)9: {
HXLINE( 563)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 563)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 563)								data1->oPos = (data1->oPos + 2);
HXDLIN( 563)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 563)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 563)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 563)								data1->iPos = (data1->iPos + 1);
HXDLIN( 563)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 563)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 563)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 563)								data1->oPos = (data1->oPos + 4);
HXDLIN( 563)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 563)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 563)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 563)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 563)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 563)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 563)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 563)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 563)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 563)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 563)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 563)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 563)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 563)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 563)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 563)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 563)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 563)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 563)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 563)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 563)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 563)								data1->fPos = (data1->fPos + 5);
HXDLIN( 563)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 563)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 563)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 563)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 563)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 563)								data1->oPos = (data1->oPos + 2);
HXDLIN( 563)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 563)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 563)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 563)								data1->oPos = (data1->oPos + 4);
HXDLIN( 563)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 563)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 563)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 563)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 563)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 563)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 563)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 563)								data1->oPos = (data1->oPos + 4);
HXDLIN( 563)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 563)								data2->iPos = (data2->iPos + 1);
HXDLIN( 563)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 563)								data3->fPos = (data3->fPos + 2);
HXDLIN( 563)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 563)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 563)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 563)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 563)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 563)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 563)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 563)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 563)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 563)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 563)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN( 563)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 563)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 564)						hasPath = true;
HXLINE( 565)						::openfl::display::_internal::CairoGraphics_obj::cairo->rectangle((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            					}
            					break;
            					case (int)10: {
HXLINE( 593)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 593)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)								data1->oPos = (data1->oPos + 2);
HXDLIN( 593)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 593)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 593)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)								data1->iPos = (data1->iPos + 1);
HXDLIN( 593)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 593)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 593)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)								data1->oPos = (data1->oPos + 4);
HXDLIN( 593)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 593)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 593)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 593)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 593)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 593)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 593)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 593)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 593)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 593)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 593)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 593)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 593)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 593)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)								data1->fPos = (data1->fPos + 5);
HXDLIN( 593)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 593)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 593)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 593)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)								data1->oPos = (data1->oPos + 2);
HXDLIN( 593)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 593)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 593)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)								data1->oPos = (data1->oPos + 4);
HXDLIN( 593)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 593)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 593)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 593)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 593)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 593)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 593)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)								data1->oPos = (data1->oPos + 4);
HXDLIN( 593)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 593)								data2->iPos = (data2->iPos + 1);
HXDLIN( 593)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 593)								data3->fPos = (data3->fPos + 2);
HXDLIN( 593)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 593)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 593)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 593)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 593)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 593)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 593)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXDLIN( 593)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 593)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 594)						hasPath = true;
HXLINE( 595)						::openfl::display::_internal::CairoGraphics_obj::drawRoundRect((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
            					}
            					break;
            					case (int)12: {
HXLINE( 935)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 935)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 935)								data1->oPos = (data1->oPos + 2);
HXDLIN( 935)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 935)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 935)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 935)								data1->iPos = (data1->iPos + 1);
HXDLIN( 935)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 935)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 935)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 935)								data1->oPos = (data1->oPos + 4);
HXDLIN( 935)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 935)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 935)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 935)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 935)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 935)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 935)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 935)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 935)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 935)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 935)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 935)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 935)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 935)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 935)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 935)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 935)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 935)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 935)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 935)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 935)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 935)								data1->fPos = (data1->fPos + 5);
HXDLIN( 935)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 935)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 935)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 935)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 935)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 935)								data1->oPos = (data1->oPos + 2);
HXDLIN( 935)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 935)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 935)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 935)								data1->oPos = (data1->oPos + 4);
HXDLIN( 935)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 935)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 935)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 935)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 935)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 935)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 935)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 935)								data1->oPos = (data1->oPos + 4);
HXDLIN( 935)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 935)								data2->iPos = (data2->iPos + 1);
HXDLIN( 935)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 935)								data3->fPos = (data3->fPos + 2);
HXDLIN( 935)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 935)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 935)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 935)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 935)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 935)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 935)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 935)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 935)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 935)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 935)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn();
HXDLIN( 935)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 935)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 936)						 ::openfl::_Vector::FloatVector v = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE( 937)						 ::openfl::_Vector::IntVector ind = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE( 938)						 ::openfl::_Vector::FloatVector uvt = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE( 939)						bool colorFill = ::hx::IsNull( ::openfl::display::_internal::CairoGraphics_obj::bitmapFill );
HXLINE( 941)						bool _hx_tmp;
HXDLIN( 941)						if (colorFill) {
HXLINE( 941)							_hx_tmp = ::hx::IsNotNull( uvt );
            						}
            						else {
HXLINE( 941)							_hx_tmp = false;
            						}
HXDLIN( 941)						if (_hx_tmp) {
HXLINE( 943)							goto _hx_goto_14;
            						}
HXLINE( 946)						int width = 0;
HXLINE( 947)						int height = 0;
HXLINE( 948)						 ::lime::utils::ArrayBufferView currentMatrix = ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___renderTransform->_hx___toMatrix3();
HXLINE( 950)						if (!(colorFill)) {
HXLINE( 954)							if (::hx::IsNull( uvt )) {
HXLINE( 956)								int length = null();
HXDLIN( 956)								bool fixed = null();
HXDLIN( 956)								::Array< Float > array = null();
HXDLIN( 956)								uvt =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 958)								{
HXLINE( 958)									int _g = 0;
HXDLIN( 958)									int _g1 = ::Std_obj::_hx_int((( (Float)(v->get_length()) ) / ( (Float)(2) )));
HXDLIN( 958)									while((_g < _g1)){
HXLINE( 958)										_g = (_g + 1);
HXDLIN( 958)										int i = (_g - 1);
HXLINE( 960)										{
HXLINE( 960)											Float value = v->get((i * 2));
HXDLIN( 960)											uvt->push((value - (offsetX / ( (Float)(::openfl::display::_internal::CairoGraphics_obj::bitmapFill->width) ))));
            										}
HXLINE( 961)										{
HXLINE( 961)											Float value1 = v->get(((i * 2) + 1));
HXDLIN( 961)											uvt->push((value1 - (offsetY / ( (Float)(::openfl::display::_internal::CairoGraphics_obj::bitmapFill->height) ))));
            										}
            									}
            								}
            							}
HXLINE( 965)							int skipT = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) )->get_length();
HXDLIN( 965)							bool skipT1 = (skipT != v->get_length());
HXLINE( 966)							 ::Dynamic normalizedUVT = ::openfl::display::_internal::CairoGraphics_obj::normalizeUVT(uvt,skipT1);
HXLINE( 967)							Float maxUVT = ( (Float)(normalizedUVT->__Field(HX_("max",a4,0a,53,00),::hx::paccDynamic)) );
HXLINE( 968)							uvt = ( ( ::openfl::_Vector::FloatVector)(normalizedUVT->__Field(HX_("uvt",f3,2e,59,00),::hx::paccDynamic)) );
HXLINE( 970)							if ((maxUVT > 1)) {
HXLINE( 972)								width = ::Std_obj::_hx_int(::openfl::display::_internal::CairoGraphics_obj::bounds->width);
HXLINE( 973)								height = ::Std_obj::_hx_int(::openfl::display::_internal::CairoGraphics_obj::bounds->height);
            							}
            							else {
HXLINE( 977)								width = ::openfl::display::_internal::CairoGraphics_obj::bitmapFill->width;
HXLINE( 978)								height = ::openfl::display::_internal::CairoGraphics_obj::bitmapFill->height;
            							}
            						}
HXLINE( 982)						int i = 0;
HXLINE( 983)						int l = ind->get_length();
HXLINE( 985)						int a_;
HXDLIN( 985)						int b_;
HXDLIN( 985)						int c_;
HXLINE( 986)						int iax;
HXDLIN( 986)						int iay;
HXDLIN( 986)						int ibx;
HXDLIN( 986)						int iby;
HXDLIN( 986)						int icx;
HXDLIN( 986)						int icy;
HXLINE( 987)						Float x1;
HXDLIN( 987)						Float y1;
HXDLIN( 987)						Float x2;
HXDLIN( 987)						Float y2;
HXDLIN( 987)						Float x3;
HXDLIN( 987)						Float y3;
HXLINE( 988)						Float uvx1;
HXDLIN( 988)						Float uvy1;
HXDLIN( 988)						Float uvx2;
HXDLIN( 988)						Float uvy2;
HXDLIN( 988)						Float uvx3;
HXDLIN( 988)						Float uvy3;
HXLINE( 989)						Float denom;
HXLINE( 990)						Float t1;
HXDLIN( 990)						Float t2;
HXDLIN( 990)						Float t3;
HXDLIN( 990)						Float t4;
HXLINE( 991)						Float dx;
HXDLIN( 991)						Float dy;
HXLINE( 993)						::openfl::display::_internal::CairoGraphics_obj::cairo->set_antialias(1);
HXLINE( 995)						while((i < l)){
HXLINE( 997)							a_ = i;
HXLINE( 998)							b_ = (i + 1);
HXLINE( 999)							c_ = (i + 2);
HXLINE(1001)							iax = (ind->get(a_) * 2);
HXLINE(1002)							iay = ((ind->get(a_) * 2) + 1);
HXLINE(1003)							ibx = (ind->get(b_) * 2);
HXLINE(1004)							iby = ((ind->get(b_) * 2) + 1);
HXLINE(1005)							icx = (ind->get(c_) * 2);
HXLINE(1006)							icy = ((ind->get(c_) * 2) + 1);
HXLINE(1008)							x1 = (v->get(iax) - offsetX);
HXLINE(1009)							y1 = (v->get(iay) - offsetY);
HXLINE(1010)							x2 = (v->get(ibx) - offsetX);
HXLINE(1011)							y2 = (v->get(iby) - offsetY);
HXLINE(1012)							x3 = (v->get(icx) - offsetX);
HXLINE(1013)							y3 = (v->get(icy) - offsetY);
HXLINE(1015)							 ::Dynamic _hx_switch_0 = c->buffer->o->__get((c->oPos + 3));
            							if (  (_hx_switch_0==0) ){
HXLINE(1025)								if (((((x2 - x1) * (y3 - y1)) - ((y2 - y1) * (x3 - x1))) < 0)) {
HXLINE(1027)									i = (i + 3);
HXLINE(1028)									continue;
            								}
HXLINE(1025)								goto _hx_goto_18;
            							}
            							if (  (_hx_switch_0==2) ){
HXLINE(1018)								if (!(((((x2 - x1) * (y3 - y1)) - ((y2 - y1) * (x3 - x1))) < 0))) {
HXLINE(1020)									i = (i + 3);
HXLINE(1021)									continue;
            								}
HXLINE(1018)								goto _hx_goto_18;
            							}
            							/* default */{
            							}
            							_hx_goto_18:;
HXLINE(1034)							if (colorFill) {
HXLINE(1036)								::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE(1037)								::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(x1,y1);
HXLINE(1038)								::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(x2,y2);
HXLINE(1039)								::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(x3,y3);
HXLINE(1040)								::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
HXLINE(1041)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::fillPattern);
HXLINE(1042)								if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE(1042)									::openfl::display::_internal::CairoGraphics_obj::cairo->fillPreserve();
            								}
HXLINE(1043)								i = (i + 3);
HXLINE(1044)								continue;
            							}
HXLINE(1047)							 ::lime::graphics::cairo::Cairo _hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN(1047)							_hx_tmp->set_matrix(::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___renderTransform->_hx___toMatrix3());
HXLINE(1051)							uvx1 = (uvt->get(iax) * ( (Float)(width) ));
HXLINE(1052)							uvx2 = (uvt->get(ibx) * ( (Float)(width) ));
HXLINE(1053)							uvx3 = (uvt->get(icx) * ( (Float)(width) ));
HXLINE(1054)							uvy1 = (uvt->get(iay) * ( (Float)(height) ));
HXLINE(1055)							uvy2 = (uvt->get(iby) * ( (Float)(height) ));
HXLINE(1056)							uvy3 = (uvt->get(icy) * ( (Float)(height) ));
HXLINE(1058)							denom = ((((uvx1 * (uvy3 - uvy2)) - (uvx2 * uvy3)) + (uvx3 * uvy2)) + ((uvx2 - uvx3) * uvy1));
HXLINE(1060)							if ((denom == 0)) {
HXLINE(1062)								i = (i + 3);
HXLINE(1063)								continue;
            							}
HXLINE(1066)							::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE(1067)							::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(x1,y1);
HXLINE(1068)							::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(x2,y2);
HXLINE(1069)							::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(x3,y3);
HXLINE(1070)							::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
HXLINE(1073)							x1 = (x1 *  ::__hxcpp_memory_get_float(currentMatrix->buffer->b,currentMatrix->byteOffset));
HXLINE(1074)							x2 = (x2 *  ::__hxcpp_memory_get_float(currentMatrix->buffer->b,currentMatrix->byteOffset));
HXLINE(1075)							x3 = (x3 *  ::__hxcpp_memory_get_float(currentMatrix->buffer->b,currentMatrix->byteOffset));
HXLINE(1076)							y1 = (y1 *  ::__hxcpp_memory_get_float(currentMatrix->buffer->b,(currentMatrix->byteOffset + 16)));
HXLINE(1077)							y2 = (y2 *  ::__hxcpp_memory_get_float(currentMatrix->buffer->b,(currentMatrix->byteOffset + 16)));
HXLINE(1078)							y3 = (y3 *  ::__hxcpp_memory_get_float(currentMatrix->buffer->b,(currentMatrix->byteOffset + 16)));
HXLINE(1080)							t1 = (-(((((uvy1 * (x3 - x2)) - (uvy2 * x3)) + (uvy3 * x2)) + ((uvy2 - uvy3) * x1))) / denom);
HXLINE(1081)							t2 = (((((uvy2 * y3) + (uvy1 * (y2 - y3))) - (uvy3 * y2)) + ((uvy3 - uvy2) * y1)) / denom);
HXLINE(1082)							t3 = (((((uvx1 * (x3 - x2)) - (uvx2 * x3)) + (uvx3 * x2)) + ((uvx2 - uvx3) * x1)) / denom);
HXLINE(1083)							t4 = (-(((((uvx2 * y3) + (uvx1 * (y2 - y3))) - (uvx3 * y2)) + ((uvx3 - uvx2) * y1))) / denom);
HXLINE(1084)							dx = ((((uvx1 * ((uvy3 * x2) - (uvy2 * x3))) + (uvy1 * ((uvx2 * x3) - (uvx3 * x2)))) + (((uvx3 * uvy2) - (uvx2 * uvy3)) * x1)) / denom);
HXLINE(1085)							dy = ((((uvx1 * ((uvy3 * y2) - (uvy2 * y3))) + (uvy1 * ((uvx2 * y3) - (uvx3 * y2)))) + (((uvx3 * uvy2) - (uvx2 * uvy3)) * y1)) / denom);
HXLINE(1087)							{
HXLINE(1087)								 ::lime::utils::ArrayBufferView this1 = ::openfl::display::_internal::CairoGraphics_obj::tempMatrix3;
HXDLIN(1087)								 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,t1);
HXDLIN(1087)								 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),t2);
HXDLIN(1087)								 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),t3);
HXDLIN(1087)								 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),t4);
HXDLIN(1087)								 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),dx);
HXDLIN(1087)								 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),dy);
            							}
HXLINE(1088)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_matrix(::openfl::display::_internal::CairoGraphics_obj::tempMatrix3);
HXLINE(1089)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::fillPattern);
HXLINE(1090)							if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE(1090)								::openfl::display::_internal::CairoGraphics_obj::cairo->fill();
            							}
HXLINE(1092)							i = (i + 3);
            						}
HXLINE(1095)						 ::lime::graphics::cairo::Cairo _hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN(1095)						_hx_tmp1->set_matrix(::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___renderTransform->_hx___toMatrix3());
            					}
            					break;
            					case (int)14: {
HXLINE( 703)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->oPos = (data1->oPos + 2);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 703)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->iPos = (data1->iPos + 1);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 703)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->oPos = (data1->oPos + 4);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 703)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 703)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 703)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->fPos = (data1->fPos + 5);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 703)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->oPos = (data1->oPos + 2);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 703)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->oPos = (data1->oPos + 4);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 703)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 703)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 703)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->oPos = (data1->oPos + 4);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 703)								data2->iPos = (data2->iPos + 1);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 703)								data3->fPos = (data3->fPos + 2);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 703)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 703)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn();
HXDLIN( 703)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 703)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 704)						bool _hx_tmp;
HXDLIN( 704)						if (stroke) {
HXLINE( 704)							_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::hasStroke;
            						}
            						else {
HXLINE( 704)							_hx_tmp = false;
            						}
HXDLIN( 704)						if (_hx_tmp) {
HXLINE( 706)							::openfl::display::_internal::CairoGraphics_obj::closePath(true);
            						}
HXLINE( 709)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo((positionX - offsetX),(positionY - offsetY));
HXLINE( 711)						if (( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) )->readable) {
HXLINE( 713)							::openfl::display::_internal::CairoGraphics_obj::strokePattern = ::openfl::display::_internal::CairoGraphics_obj::createImagePattern(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            						}
            						else {
HXLINE( 720)							::openfl::display::_internal::CairoGraphics_obj::strokePattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGB(( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
            						}
HXLINE( 723)						::openfl::display::_internal::CairoGraphics_obj::hasStroke = true;
            					}
            					break;
            					case (int)15: {
HXLINE( 690)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 690)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 690)								data1->oPos = (data1->oPos + 2);
HXDLIN( 690)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 690)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 690)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 690)								data1->iPos = (data1->iPos + 1);
HXDLIN( 690)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 690)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 690)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 690)								data1->oPos = (data1->oPos + 4);
HXDLIN( 690)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 690)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 690)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 690)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 690)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 690)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 690)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 690)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 690)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 690)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 690)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 690)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 690)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 690)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 690)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 690)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 690)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 690)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 690)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 690)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 690)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 690)								data1->fPos = (data1->fPos + 5);
HXDLIN( 690)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 690)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 690)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 690)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 690)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 690)								data1->oPos = (data1->oPos + 2);
HXDLIN( 690)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 690)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 690)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 690)								data1->oPos = (data1->oPos + 4);
HXDLIN( 690)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 690)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 690)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 690)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 690)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 690)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 690)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 690)								data1->oPos = (data1->oPos + 4);
HXDLIN( 690)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 690)								data2->iPos = (data2->iPos + 1);
HXDLIN( 690)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 690)								data3->fPos = (data3->fPos + 2);
HXDLIN( 690)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 690)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 690)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 690)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 690)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 690)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 690)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 690)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 690)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 690)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 690)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn();
HXDLIN( 690)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 690)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 691)						bool _hx_tmp;
HXDLIN( 691)						if (stroke) {
HXLINE( 691)							_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::hasStroke;
            						}
            						else {
HXLINE( 691)							_hx_tmp = false;
            						}
HXDLIN( 691)						if (_hx_tmp) {
HXLINE( 693)							::openfl::display::_internal::CairoGraphics_obj::closePath(true);
            						}
HXLINE( 696)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo((positionX - offsetX),(positionY - offsetY));
HXLINE( 697)						::openfl::display::_internal::CairoGraphics_obj::strokePattern = ::openfl::display::_internal::CairoGraphics_obj::createGradientPattern(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
HXLINE( 700)						::openfl::display::_internal::CairoGraphics_obj::hasStroke = true;
            					}
            					break;
            					case (int)16: {
HXLINE( 627)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 627)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 627)								data1->oPos = (data1->oPos + 2);
HXDLIN( 627)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 627)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 627)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 627)								data1->iPos = (data1->iPos + 1);
HXDLIN( 627)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 627)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 627)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 627)								data1->oPos = (data1->oPos + 4);
HXDLIN( 627)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 627)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 627)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 627)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 627)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 627)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 627)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 627)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 627)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 627)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 627)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 627)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 627)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 627)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 627)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 627)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 627)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 627)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 627)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 627)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 627)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 627)								data1->fPos = (data1->fPos + 5);
HXDLIN( 627)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 627)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 627)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 627)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 627)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 627)								data1->oPos = (data1->oPos + 2);
HXDLIN( 627)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 627)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 627)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 627)								data1->oPos = (data1->oPos + 4);
HXDLIN( 627)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 627)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 627)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 627)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 627)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 627)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 627)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 627)								data1->oPos = (data1->oPos + 4);
HXDLIN( 627)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 627)								data2->iPos = (data2->iPos + 1);
HXDLIN( 627)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 627)								data3->fPos = (data3->fPos + 2);
HXDLIN( 627)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 627)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 627)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 627)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 627)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 627)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 627)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 627)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 627)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 627)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 627)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn();
HXDLIN( 627)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 627)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 628)						bool _hx_tmp;
HXDLIN( 628)						if (stroke) {
HXLINE( 628)							_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::hasStroke;
            						}
            						else {
HXLINE( 628)							_hx_tmp = false;
            						}
HXDLIN( 628)						if (_hx_tmp) {
HXLINE( 630)							::openfl::display::_internal::CairoGraphics_obj::closePath(true);
            						}
HXLINE( 633)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo((positionX - offsetX),(positionY - offsetY));
HXLINE( 635)						if (::hx::IsNull( c->buffer->o->__get(c->oPos) )) {
HXLINE( 637)							::openfl::display::_internal::CairoGraphics_obj::hasStroke = false;
            						}
            						else {
HXLINE( 641)							::openfl::display::_internal::CairoGraphics_obj::hasStroke = true;
HXLINE( 643)							Float _hx_tmp;
HXDLIN( 643)							if (::hx::IsGreater( c->buffer->o->__get(c->oPos),0 )) {
HXLINE( 643)								_hx_tmp = ( (Float)(c->buffer->o->__get(c->oPos)) );
            							}
            							else {
HXLINE( 643)								_hx_tmp = ( (Float)(1) );
            							}
HXDLIN( 643)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_lineWidth(_hx_tmp);
HXLINE( 645)							if (::hx::IsNull( c->buffer->o->__get((c->oPos + 3)) )) {
HXLINE( 647)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_lineJoin(1);
            							}
            							else {
HXLINE( 651)								int _hx_tmp;
HXDLIN( 651)								 ::Dynamic _hx_switch_1 = c->buffer->o->__get((c->oPos + 3));
            								if (  (_hx_switch_1==0) ){
HXLINE( 651)									_hx_tmp = 2;
HXDLIN( 651)									goto _hx_goto_19;
            								}
            								if (  (_hx_switch_1==1) ){
HXLINE( 651)									_hx_tmp = 0;
HXDLIN( 651)									goto _hx_goto_19;
            								}
            								/* default */{
HXLINE( 651)									_hx_tmp = 1;
            								}
            								_hx_goto_19:;
HXDLIN( 651)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_lineJoin(_hx_tmp);
            							}
HXLINE( 659)							if (::hx::IsNull( c->buffer->o->__get((c->oPos + 2)) )) {
HXLINE( 661)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_lineCap(1);
            							}
            							else {
HXLINE( 665)								int _hx_tmp;
HXDLIN( 665)								 ::Dynamic _hx_switch_2 = c->buffer->o->__get((c->oPos + 2));
            								if (  (_hx_switch_2==0) ){
HXLINE( 665)									_hx_tmp = 0;
HXDLIN( 665)									goto _hx_goto_20;
            								}
            								if (  (_hx_switch_2==2) ){
HXLINE( 665)									_hx_tmp = 2;
HXDLIN( 665)									goto _hx_goto_20;
            								}
            								/* default */{
HXLINE( 665)									_hx_tmp = 1;
            								}
            								_hx_goto_20:;
HXDLIN( 665)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_lineCap(_hx_tmp);
            							}
HXLINE( 673)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_miterLimit(c->buffer->f->__get((c->fPos + 1)));
HXLINE( 675)							r = (( (Float)(::hx::UShr((c->buffer->i->__get(c->iPos) & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 676)							g = (( (Float)(::hx::UShr((c->buffer->i->__get(c->iPos) & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 677)							b = (( (Float)((c->buffer->i->__get(c->iPos) & 255)) ) / ( (Float)(255) ));
HXLINE( 679)							if ((c->buffer->f->__get(c->fPos) == 1)) {
HXLINE( 681)								::openfl::display::_internal::CairoGraphics_obj::strokePattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGB(r,g,b);
            							}
            							else {
HXLINE( 685)								::openfl::display::_internal::CairoGraphics_obj::strokePattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA(r,g,b,c->buffer->f->__get(c->fPos));
            							}
            						}
            					}
            					break;
            					case (int)17: {
HXLINE( 598)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 598)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 598)								data1->oPos = (data1->oPos + 2);
HXDLIN( 598)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 598)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 598)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 598)								data1->iPos = (data1->iPos + 1);
HXDLIN( 598)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 598)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 598)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 598)								data1->oPos = (data1->oPos + 4);
HXDLIN( 598)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 598)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 598)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 598)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 598)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 598)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 598)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 598)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 598)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 598)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 598)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 598)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 598)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 598)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 598)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 598)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 598)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 598)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 598)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 598)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 598)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 598)								data1->fPos = (data1->fPos + 5);
HXDLIN( 598)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 598)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 598)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 598)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 598)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 598)								data1->oPos = (data1->oPos + 2);
HXDLIN( 598)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 598)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 598)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 598)								data1->oPos = (data1->oPos + 4);
HXDLIN( 598)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 598)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 598)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 598)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 598)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 598)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 598)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 598)								data1->oPos = (data1->oPos + 4);
HXDLIN( 598)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 598)								data2->iPos = (data2->iPos + 1);
HXDLIN( 598)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 598)								data3->fPos = (data3->fPos + 2);
HXDLIN( 598)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 598)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 598)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 598)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 598)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 598)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 598)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 598)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 598)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 598)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 598)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXDLIN( 598)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 598)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 599)						hasPath = true;
HXLINE( 600)						::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY));
HXLINE( 602)						positionX = c->buffer->f->__get(c->fPos);
HXLINE( 603)						positionY = c->buffer->f->__get((c->fPos + 1));
HXLINE( 605)						bool _hx_tmp;
HXDLIN( 605)						if ((positionX == startX)) {
HXLINE( 605)							_hx_tmp = (positionY == startY);
            						}
            						else {
HXLINE( 605)							_hx_tmp = false;
            						}
HXDLIN( 605)						if (_hx_tmp) {
HXLINE( 607)							closeGap = true;
            						}
            					}
            					break;
            					case (int)18: {
HXLINE( 611)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 611)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 611)								data1->oPos = (data1->oPos + 2);
HXDLIN( 611)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 611)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 611)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 611)								data1->iPos = (data1->iPos + 1);
HXDLIN( 611)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 611)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 611)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 611)								data1->oPos = (data1->oPos + 4);
HXDLIN( 611)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 611)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 611)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 611)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 611)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 611)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 611)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 611)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 611)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 611)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 611)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 611)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 611)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 611)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 611)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 611)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 611)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 611)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 611)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 611)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 611)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 611)								data1->fPos = (data1->fPos + 5);
HXDLIN( 611)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 611)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 611)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 611)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 611)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 611)								data1->oPos = (data1->oPos + 2);
HXDLIN( 611)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 611)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 611)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 611)								data1->oPos = (data1->oPos + 4);
HXDLIN( 611)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 611)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 611)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 611)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 611)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 611)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 611)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 611)								data1->oPos = (data1->oPos + 4);
HXDLIN( 611)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 611)								data2->iPos = (data2->iPos + 1);
HXDLIN( 611)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 611)								data3->fPos = (data3->fPos + 2);
HXDLIN( 611)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 611)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 611)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 611)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 611)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 611)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 611)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 611)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 611)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 611)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 611)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN( 611)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 611)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 612)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY));
HXLINE( 614)						positionX = c->buffer->f->__get(c->fPos);
HXLINE( 615)						positionY = c->buffer->f->__get((c->fPos + 1));
HXLINE( 617)						bool _hx_tmp;
HXDLIN( 617)						bool _hx_tmp1;
HXDLIN( 617)						if (setStart) {
HXLINE( 617)							_hx_tmp1 = (c->buffer->f->__get(c->fPos) != startX);
            						}
            						else {
HXLINE( 617)							_hx_tmp1 = false;
            						}
HXDLIN( 617)						if (_hx_tmp1) {
HXLINE( 617)							_hx_tmp = (c->buffer->f->__get((c->fPos + 1)) != startY);
            						}
            						else {
HXLINE( 617)							_hx_tmp = false;
            						}
HXDLIN( 617)						if (_hx_tmp) {
HXLINE( 619)							closeGap = true;
            						}
HXLINE( 622)						startX = c->buffer->f->__get(c->fPos);
HXLINE( 623)						startY = c->buffer->f->__get((c->fPos + 1));
HXLINE( 624)						setStart = true;
            					}
            					break;
            					case (int)21: {
HXLINE(1098)						{
HXLINE(1098)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1098)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1098)									data1->oPos = (data1->oPos + 2);
HXDLIN(1098)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1098)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1098)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1098)									data1->iPos = (data1->iPos + 1);
HXDLIN(1098)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1098)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1098)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1098)									data1->oPos = (data1->oPos + 4);
HXDLIN(1098)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1098)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1098)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1098)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1098)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1098)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1098)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1098)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1098)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1098)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1098)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1098)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1098)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1098)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1098)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1098)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1098)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1098)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1098)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1098)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1098)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1098)									data1->fPos = (data1->fPos + 5);
HXDLIN(1098)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1098)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1098)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1098)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1098)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1098)									data1->oPos = (data1->oPos + 2);
HXDLIN(1098)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1098)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1098)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1098)									data1->oPos = (data1->oPos + 4);
HXDLIN(1098)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1098)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1098)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1098)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1098)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1098)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1098)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1098)									data1->oPos = (data1->oPos + 4);
HXDLIN(1098)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1098)									data2->iPos = (data2->iPos + 1);
HXDLIN(1098)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1098)									data3->fPos = (data3->fPos + 2);
HXDLIN(1098)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1098)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1098)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1098)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1098)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1098)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1098)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1098)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1098)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1098)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1098)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_EVEN_ODD_dyn();
HXDLIN(1098)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
            						}
HXLINE(1099)						::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(1);
            					}
            					break;
            					case (int)22: {
HXLINE(1102)						{
HXLINE(1102)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1102)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1102)									data1->oPos = (data1->oPos + 2);
HXDLIN(1102)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1102)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1102)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1102)									data1->iPos = (data1->iPos + 1);
HXDLIN(1102)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1102)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1102)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1102)									data1->oPos = (data1->oPos + 4);
HXDLIN(1102)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1102)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1102)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1102)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1102)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1102)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1102)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1102)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1102)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1102)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1102)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1102)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1102)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1102)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1102)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1102)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1102)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1102)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1102)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1102)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1102)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1102)									data1->fPos = (data1->fPos + 5);
HXDLIN(1102)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1102)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1102)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1102)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1102)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1102)									data1->oPos = (data1->oPos + 2);
HXDLIN(1102)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1102)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1102)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1102)									data1->oPos = (data1->oPos + 4);
HXDLIN(1102)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1102)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1102)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1102)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1102)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1102)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1102)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1102)									data1->oPos = (data1->oPos + 4);
HXDLIN(1102)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1102)									data2->iPos = (data2->iPos + 1);
HXDLIN(1102)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1102)									data3->fPos = (data3->fPos + 2);
HXDLIN(1102)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1102)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1102)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1102)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1102)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1102)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1102)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1102)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1102)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1102)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1102)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_NON_ZERO_dyn();
HXDLIN(1102)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
            						}
HXLINE(1103)						::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(0);
            					}
            					break;
            					default:{
HXLINE(1106)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1106)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1106)								data1->oPos = (data1->oPos + 2);
HXDLIN(1106)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1106)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1106)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1106)								data1->iPos = (data1->iPos + 1);
HXDLIN(1106)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1106)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1106)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1106)								data1->oPos = (data1->oPos + 4);
HXDLIN(1106)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1106)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1106)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1106)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1106)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1106)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1106)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1106)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1106)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1106)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1106)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1106)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1106)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1106)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1106)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1106)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1106)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1106)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1106)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1106)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1106)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1106)								data1->fPos = (data1->fPos + 5);
HXDLIN(1106)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1106)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1106)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1106)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1106)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1106)								data1->oPos = (data1->oPos + 2);
HXDLIN(1106)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1106)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1106)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1106)								data1->oPos = (data1->oPos + 4);
HXDLIN(1106)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1106)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1106)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1106)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1106)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1106)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1106)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1106)								data1->oPos = (data1->oPos + 4);
HXDLIN(1106)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1106)								data2->iPos = (data2->iPos + 1);
HXDLIN(1106)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1106)								data3->fPos = (data3->fPos + 2);
HXDLIN(1106)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1106)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1106)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1106)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1106)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1106)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1106)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1106)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1106)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1106)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1106)						data->prev = type;
            					}
            				}
            			}
            			_hx_goto_14:;
            		}
HXLINE(1110)		data->destroy();
HXLINE(1112)		if (hasPath) {
HXLINE(1114)			bool _hx_tmp;
HXDLIN(1114)			if (stroke) {
HXLINE(1114)				_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::hasStroke;
            			}
            			else {
HXLINE(1114)				_hx_tmp = false;
            			}
HXDLIN(1114)			if (_hx_tmp) {
HXLINE(1116)				if (::openfl::display::_internal::CairoGraphics_obj::hasFill) {
HXLINE(1118)					bool _hx_tmp;
HXDLIN(1118)					if ((positionX == startX)) {
HXLINE(1118)						_hx_tmp = (positionY != startY);
            					}
            					else {
HXLINE(1118)						_hx_tmp = true;
            					}
HXDLIN(1118)					if (_hx_tmp) {
HXLINE(1120)						::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo((startX - offsetX),(startY - offsetY));
HXLINE(1121)						closeGap = true;
            					}
HXLINE(1124)					if (closeGap) {
HXLINE(1124)						::openfl::display::_internal::CairoGraphics_obj::closePath(true);
            					}
            				}
            				else {
HXLINE(1126)					bool _hx_tmp;
HXDLIN(1126)					bool _hx_tmp1;
HXDLIN(1126)					if (closeGap) {
HXLINE(1126)						_hx_tmp1 = (positionX == startX);
            					}
            					else {
HXLINE(1126)						_hx_tmp1 = false;
            					}
HXDLIN(1126)					if (_hx_tmp1) {
HXLINE(1126)						_hx_tmp = (positionY == startY);
            					}
            					else {
HXLINE(1126)						_hx_tmp = false;
            					}
HXDLIN(1126)					if (_hx_tmp) {
HXLINE(1128)						::openfl::display::_internal::CairoGraphics_obj::closePath(true);
            					}
            				}
HXLINE(1131)				::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::strokePattern);
HXLINE(1132)				if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE(1132)					::openfl::display::_internal::CairoGraphics_obj::cairo->strokePreserve();
            				}
            			}
HXLINE(1135)			bool _hx_tmp1;
HXDLIN(1135)			if (!(stroke)) {
HXLINE(1135)				_hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::hasFill;
            			}
            			else {
HXLINE(1135)				_hx_tmp1 = false;
            			}
HXDLIN(1135)			if (_hx_tmp1) {
HXLINE(1137)				::openfl::display::_internal::CairoGraphics_obj::cairo->translate(-(::openfl::display::_internal::CairoGraphics_obj::bounds->x),-(::openfl::display::_internal::CairoGraphics_obj::bounds->y));
HXLINE(1139)				if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::fillPatternMatrix )) {
HXLINE(1141)					 ::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(1142)					matrix->copyFrom(::openfl::display::_internal::CairoGraphics_obj::fillPatternMatrix);
HXLINE(1143)					matrix->invert();
HXLINE(1145)					if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::pendingMatrix )) {
HXLINE(1147)						matrix->concat(::openfl::display::_internal::CairoGraphics_obj::pendingMatrix);
            					}
HXLINE(1150)					 ::Dynamic _hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::fillPattern;
HXDLIN(1150)					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(_hx_tmp,matrix->_hx___toMatrix3());
HXLINE(1152)					::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
            				}
HXLINE(1155)				::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::fillPattern);
HXLINE(1157)				if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::pendingMatrix )) {
HXLINE(1159)					 ::lime::graphics::cairo::Cairo _hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN(1159)					_hx_tmp->transform(::openfl::display::_internal::CairoGraphics_obj::pendingMatrix->_hx___toMatrix3());
HXLINE(1160)					if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE(1160)						::openfl::display::_internal::CairoGraphics_obj::cairo->fillPreserve();
            					}
HXLINE(1161)					 ::lime::graphics::cairo::Cairo _hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN(1161)					_hx_tmp1->transform(::openfl::display::_internal::CairoGraphics_obj::inversePendingMatrix->_hx___toMatrix3());
            				}
            				else {
HXLINE(1165)					if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE(1165)						::openfl::display::_internal::CairoGraphics_obj::cairo->fillPreserve();
            					}
            				}
HXLINE(1168)				::openfl::display::_internal::CairoGraphics_obj::cairo->translate(::openfl::display::_internal::CairoGraphics_obj::bounds->x,::openfl::display::_internal::CairoGraphics_obj::bounds->y);
HXLINE(1169)				::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,playCommands,(void))

void CairoGraphics_obj::quadraticCurveTo(Float cx,Float cy,Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_1175_quadraticCurveTo)
HXLINE(1176)		 ::lime::math::Vector2 current = null();
HXLINE(1178)		if (!(::openfl::display::_internal::CairoGraphics_obj::cairo->get_hasCurrentPoint())) {
HXLINE(1180)			::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(cx,cy);
HXLINE(1181)			current =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,cx,cy);
            		}
            		else {
HXLINE(1185)			current = ::openfl::display::_internal::CairoGraphics_obj::cairo->get_currentPoint();
            		}
HXLINE(1188)		Float cx1 = (current->x + (((Float)0.66666666666666663) * (cx - current->x)));
HXLINE(1189)		Float cy1 = (current->y + (((Float)0.66666666666666663) * (cy - current->y)));
HXLINE(1190)		Float cx2 = (x + (((Float)0.66666666666666663) * (cx - x)));
HXLINE(1191)		Float cy2 = (y + (((Float)0.66666666666666663) * (cy - y)));
HXLINE(1193)		::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo(cx1,cy1,cx2,cy2,x,y);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoGraphics_obj,quadraticCurveTo,(void))

void CairoGraphics_obj::render( ::openfl::display::Graphics graphics, ::openfl::display::CairoRenderer renderer){
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_1198_render)
HXLINE(1200)		::openfl::display::_internal::CairoGraphics_obj::graphics = graphics;
HXLINE(1201)		::openfl::display::_internal::CairoGraphics_obj::allowSmoothing = renderer->_hx___allowSmoothing;
HXLINE(1202)		::openfl::display::_internal::CairoGraphics_obj::worldAlpha = renderer->_hx___getAlpha(graphics->_hx___owner->_hx___worldAlpha);
HXLINE(1207)		Float pixelRatio = renderer->_hx___pixelRatio;
HXLINE(1210)		graphics->_hx___update(renderer->_hx___worldTransform,pixelRatio);
HXLINE(1212)		bool _hx_tmp;
HXDLIN(1212)		if (graphics->_hx___softwareDirty) {
HXLINE(1212)			_hx_tmp = graphics->_hx___managed;
            		}
            		else {
HXLINE(1212)			_hx_tmp = true;
            		}
HXDLIN(1212)		if (_hx_tmp) {
HXLINE(1214)			::openfl::display::_internal::CairoGraphics_obj::graphics = null();
HXLINE(1215)			return;
            		}
HXLINE(1218)		::openfl::display::_internal::CairoGraphics_obj::bounds = graphics->_hx___bounds;
HXLINE(1220)		int width = graphics->_hx___width;
HXLINE(1221)		int height = graphics->_hx___height;
HXLINE(1223)		bool _hx_tmp1;
HXDLIN(1223)		bool _hx_tmp2;
HXDLIN(1223)		bool _hx_tmp3;
HXDLIN(1223)		bool _hx_tmp4;
HXDLIN(1223)		if (graphics->_hx___visible) {
HXLINE(1223)			_hx_tmp4 = (graphics->_hx___commands->get_length() == 0);
            		}
            		else {
HXLINE(1223)			_hx_tmp4 = true;
            		}
HXDLIN(1223)		if (!(_hx_tmp4)) {
HXLINE(1223)			_hx_tmp3 = ::hx::IsNull( ::openfl::display::_internal::CairoGraphics_obj::bounds );
            		}
            		else {
HXLINE(1223)			_hx_tmp3 = true;
            		}
HXDLIN(1223)		if (!(_hx_tmp3)) {
HXLINE(1223)			_hx_tmp2 = (width < 1);
            		}
            		else {
HXLINE(1223)			_hx_tmp2 = true;
            		}
HXDLIN(1223)		if (!(_hx_tmp2)) {
HXLINE(1223)			_hx_tmp1 = (height < 1);
            		}
            		else {
HXLINE(1223)			_hx_tmp1 = true;
            		}
HXDLIN(1223)		if (_hx_tmp1) {
HXLINE(1225)			graphics->_hx___cairo = null();
HXLINE(1226)			graphics->_hx___bitmap = null();
            		}
            		else {
HXLINE(1230)			::openfl::display::_internal::CairoGraphics_obj::hitTesting = false;
HXLINE(1231)			bool needsUpscaling = false;
HXLINE(1233)			if (::hx::IsNotNull( graphics->_hx___cairo )) {
HXLINE(1235)				 ::Dynamic surface = graphics->_hx___cairo->get_target();
HXLINE(1237)				bool _hx_tmp;
HXDLIN(1237)				if ((width <= ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_width(surface))) {
HXLINE(1237)					_hx_tmp = (height > ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_height(surface));
            				}
            				else {
HXLINE(1237)					_hx_tmp = true;
            				}
HXDLIN(1237)				if (_hx_tmp) {
HXLINE(1239)					graphics->_hx___cairo = null();
HXLINE(1240)					needsUpscaling = true;
            				}
            			}
HXLINE(1244)			bool _hx_tmp;
HXDLIN(1244)			if (::hx::IsNotNull( graphics->_hx___cairo )) {
HXLINE(1244)				_hx_tmp = ::hx::IsNull( graphics->_hx___bitmap );
            			}
            			else {
HXLINE(1244)				_hx_tmp = true;
            			}
HXDLIN(1244)			if (_hx_tmp) {
HXLINE(1246)				 ::openfl::display::BitmapData bitmap;
HXDLIN(1246)				if (needsUpscaling) {
HXLINE(1246)					int bitmap1 = ::Std_obj::_hx_int((( (Float)(width) ) * ((Float)1.25)));
HXDLIN(1246)					bitmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmap1,::Std_obj::_hx_int((( (Float)(height) ) * ((Float)1.25))),true,0);
            				}
            				else {
HXLINE(1246)					bitmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,width,height,true,0);
            				}
HXLINE(1247)				 ::Dynamic surface = bitmap->getSurface();
HXLINE(1248)				graphics->_hx___cairo =  ::lime::graphics::cairo::Cairo_obj::__alloc( HX_CTX ,surface);
HXLINE(1249)				graphics->_hx___bitmap = bitmap;
            			}
HXLINE(1252)			::openfl::display::_internal::CairoGraphics_obj::cairo = graphics->_hx___cairo;
HXLINE(1254)			renderer->_hx___setBlendModeCairo(::openfl::display::_internal::CairoGraphics_obj::cairo,10);
HXLINE(1255)			renderer->applyMatrix(graphics->_hx___renderTransform,::openfl::display::_internal::CairoGraphics_obj::cairo);
HXLINE(1257)			::openfl::display::_internal::CairoGraphics_obj::cairo->setOperator(0);
HXLINE(1258)			::openfl::display::_internal::CairoGraphics_obj::cairo->paint();
HXLINE(1259)			::openfl::display::_internal::CairoGraphics_obj::cairo->setOperator(2);
HXLINE(1261)			::openfl::display::_internal::CairoGraphics_obj::fillCommands->clear();
HXLINE(1262)			::openfl::display::_internal::CairoGraphics_obj::strokeCommands->clear();
HXLINE(1264)			::openfl::display::_internal::CairoGraphics_obj::hasFill = false;
HXLINE(1265)			::openfl::display::_internal::CairoGraphics_obj::hasStroke = false;
HXLINE(1267)			::openfl::display::_internal::CairoGraphics_obj::fillPattern = null();
HXLINE(1268)			::openfl::display::_internal::CairoGraphics_obj::strokePattern = null();
HXLINE(1270)			bool hasLineStyle = false;
HXLINE(1271)			Float initStrokeX = ((Float)0.0);
HXLINE(1272)			Float initStrokeY = ((Float)0.0);
HXLINE(1274)			 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE(1276)			{
HXLINE(1276)				int _g = 0;
HXDLIN(1276)				::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN(1276)				while((_g < _g1->length)){
HXLINE(1276)					 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN(1276)					_g = (_g + 1);
HXLINE(1278)					switch((int)(type->_hx_getIndex())){
            						case (int)0: case (int)1: case (int)2: case (int)3: {
HXLINE(1390)							::openfl::display::_internal::CairoGraphics_obj::endFill();
HXLINE(1391)							::openfl::display::_internal::CairoGraphics_obj::endStroke();
HXLINE(1393)							if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn() )) {
HXLINE(1395)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE(1395)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1395)										data1->oPos = (data1->oPos + 2);
HXDLIN(1395)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1395)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE(1395)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1395)										data1->iPos = (data1->iPos + 1);
HXDLIN(1395)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1395)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE(1395)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1395)										data1->oPos = (data1->oPos + 4);
HXDLIN(1395)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1395)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1395)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1395)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1395)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1395)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE(1395)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1395)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE(1395)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1395)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE(1395)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1395)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE(1395)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1395)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE(1395)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1395)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE(1395)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1395)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE(1395)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1395)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE(1395)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1395)										data1->fPos = (data1->fPos + 5);
HXDLIN(1395)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1395)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE(1395)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1395)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE(1395)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1395)										data1->oPos = (data1->oPos + 2);
HXDLIN(1395)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1395)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE(1395)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1395)										data1->oPos = (data1->oPos + 4);
HXDLIN(1395)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1395)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1395)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1395)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1395)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1395)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE(1395)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1395)										data1->oPos = (data1->oPos + 4);
HXDLIN(1395)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1395)										data2->iPos = (data2->iPos + 1);
HXDLIN(1395)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1395)										data3->fPos = (data3->fPos + 2);
HXDLIN(1395)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1395)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE(1395)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1395)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE(1395)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1395)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE(1395)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1395)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE(1395)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1395)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE(1395)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN(1395)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1395)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1396)								::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginBitmapFill(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
HXLINE(1397)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginBitmapFill(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            							}
            							else {
HXLINE(1399)								if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn() )) {
HXLINE(1401)									switch((int)(data->prev->_hx_getIndex())){
            										case (int)0: {
HXLINE(1401)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)											data1->oPos = (data1->oPos + 2);
HXDLIN(1401)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1401)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)1: {
HXLINE(1401)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)											data1->iPos = (data1->iPos + 1);
HXDLIN(1401)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1401)											data2->fPos = (data2->fPos + 1);
            										}
            										break;
            										case (int)2: {
HXLINE(1401)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)											data1->oPos = (data1->oPos + 4);
HXDLIN(1401)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1401)											data2->iiPos = (data2->iiPos + 2);
HXDLIN(1401)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1401)											data3->ffPos = (data3->ffPos + 1);
HXDLIN(1401)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1401)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)3: {
HXLINE(1401)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)4: {
HXLINE(1401)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)											data1->fPos = (data1->fPos + 6);
            										}
            										break;
            										case (int)5: {
HXLINE(1401)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)6: {
HXLINE(1401)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)											data1->fPos = (data1->fPos + 3);
            										}
            										break;
            										case (int)7: {
HXLINE(1401)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)8: {
HXLINE(1401)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)											data1->oPos = (data1->oPos + 3);
            										}
            										break;
            										case (int)9: {
HXLINE(1401)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)10: {
HXLINE(1401)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)											data1->fPos = (data1->fPos + 5);
HXDLIN(1401)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1401)											data2->oPos = (data2->oPos + 1);
            										}
            										break;
            										case (int)12: {
HXLINE(1401)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)											data1->oPos = (data1->oPos + 4);
            										}
            										break;
            										case (int)13: {
            										}
            										break;
            										case (int)14: {
HXLINE(1401)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)											data1->oPos = (data1->oPos + 2);
HXDLIN(1401)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1401)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)15: {
HXLINE(1401)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)											data1->oPos = (data1->oPos + 4);
HXDLIN(1401)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1401)											data2->iiPos = (data2->iiPos + 2);
HXDLIN(1401)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1401)											data3->ffPos = (data3->ffPos + 1);
HXDLIN(1401)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1401)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)16: {
HXLINE(1401)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)											data1->oPos = (data1->oPos + 4);
HXDLIN(1401)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1401)											data2->iPos = (data2->iPos + 1);
HXDLIN(1401)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1401)											data3->fPos = (data3->fPos + 2);
HXDLIN(1401)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1401)											data4->bPos = (data4->bPos + 1);
            										}
            										break;
            										case (int)17: {
HXLINE(1401)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)18: {
HXLINE(1401)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)19: {
HXLINE(1401)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)20: {
HXLINE(1401)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1401)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)21: case (int)22: {
            										}
            										break;
            										default:{
            										}
            									}
HXLINE(1401)									data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn();
HXDLIN(1401)									 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1401)									 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1402)									::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginGradientFill(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
HXLINE(1404)									::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginGradientFill(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
            								}
            								else {
HXLINE(1407)									if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn() )) {
HXLINE(1409)										switch((int)(data->prev->_hx_getIndex())){
            											case (int)0: {
HXLINE(1409)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)												data1->oPos = (data1->oPos + 2);
HXDLIN(1409)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1409)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)1: {
HXLINE(1409)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)												data1->iPos = (data1->iPos + 1);
HXDLIN(1409)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1409)												data2->fPos = (data2->fPos + 1);
            											}
            											break;
            											case (int)2: {
HXLINE(1409)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)												data1->oPos = (data1->oPos + 4);
HXDLIN(1409)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1409)												data2->iiPos = (data2->iiPos + 2);
HXDLIN(1409)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1409)												data3->ffPos = (data3->ffPos + 1);
HXDLIN(1409)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1409)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)3: {
HXLINE(1409)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)4: {
HXLINE(1409)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)												data1->fPos = (data1->fPos + 6);
            											}
            											break;
            											case (int)5: {
HXLINE(1409)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)6: {
HXLINE(1409)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)												data1->fPos = (data1->fPos + 3);
            											}
            											break;
            											case (int)7: {
HXLINE(1409)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)8: {
HXLINE(1409)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)												data1->oPos = (data1->oPos + 3);
            											}
            											break;
            											case (int)9: {
HXLINE(1409)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)10: {
HXLINE(1409)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)												data1->fPos = (data1->fPos + 5);
HXDLIN(1409)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1409)												data2->oPos = (data2->oPos + 1);
            											}
            											break;
            											case (int)12: {
HXLINE(1409)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)												data1->oPos = (data1->oPos + 4);
            											}
            											break;
            											case (int)13: {
            											}
            											break;
            											case (int)14: {
HXLINE(1409)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)												data1->oPos = (data1->oPos + 2);
HXDLIN(1409)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1409)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)15: {
HXLINE(1409)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)												data1->oPos = (data1->oPos + 4);
HXDLIN(1409)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1409)												data2->iiPos = (data2->iiPos + 2);
HXDLIN(1409)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1409)												data3->ffPos = (data3->ffPos + 1);
HXDLIN(1409)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1409)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)16: {
HXLINE(1409)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)												data1->oPos = (data1->oPos + 4);
HXDLIN(1409)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1409)												data2->iPos = (data2->iPos + 1);
HXDLIN(1409)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1409)												data3->fPos = (data3->fPos + 2);
HXDLIN(1409)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1409)												data4->bPos = (data4->bPos + 1);
            											}
            											break;
            											case (int)17: {
HXLINE(1409)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)18: {
HXLINE(1409)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)19: {
HXLINE(1409)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)20: {
HXLINE(1409)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1409)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)21: case (int)22: {
            											}
            											break;
            											default:{
            											}
            										}
HXLINE(1409)										data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN(1409)										 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1409)										 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1410)										::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginShaderFill(( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) ));
HXLINE(1411)										::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginShaderFill(( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) ));
            									}
            									else {
HXLINE(1415)										switch((int)(data->prev->_hx_getIndex())){
            											case (int)0: {
HXLINE(1415)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1415)												data1->oPos = (data1->oPos + 2);
HXDLIN(1415)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1415)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)1: {
HXLINE(1415)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1415)												data1->iPos = (data1->iPos + 1);
HXDLIN(1415)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1415)												data2->fPos = (data2->fPos + 1);
            											}
            											break;
            											case (int)2: {
HXLINE(1415)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1415)												data1->oPos = (data1->oPos + 4);
HXDLIN(1415)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1415)												data2->iiPos = (data2->iiPos + 2);
HXDLIN(1415)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1415)												data3->ffPos = (data3->ffPos + 1);
HXDLIN(1415)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1415)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)3: {
HXLINE(1415)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1415)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)4: {
HXLINE(1415)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1415)												data1->fPos = (data1->fPos + 6);
            											}
            											break;
            											case (int)5: {
HXLINE(1415)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1415)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)6: {
HXLINE(1415)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1415)												data1->fPos = (data1->fPos + 3);
            											}
            											break;
            											case (int)7: {
HXLINE(1415)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1415)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)8: {
HXLINE(1415)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1415)												data1->oPos = (data1->oPos + 3);
            											}
            											break;
            											case (int)9: {
HXLINE(1415)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1415)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)10: {
HXLINE(1415)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1415)												data1->fPos = (data1->fPos + 5);
HXDLIN(1415)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1415)												data2->oPos = (data2->oPos + 1);
            											}
            											break;
            											case (int)12: {
HXLINE(1415)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1415)												data1->oPos = (data1->oPos + 4);
            											}
            											break;
            											case (int)13: {
            											}
            											break;
            											case (int)14: {
HXLINE(1415)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1415)												data1->oPos = (data1->oPos + 2);
HXDLIN(1415)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1415)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)15: {
HXLINE(1415)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1415)												data1->oPos = (data1->oPos + 4);
HXDLIN(1415)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1415)												data2->iiPos = (data2->iiPos + 2);
HXDLIN(1415)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1415)												data3->ffPos = (data3->ffPos + 1);
HXDLIN(1415)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1415)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)16: {
HXLINE(1415)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1415)												data1->oPos = (data1->oPos + 4);
HXDLIN(1415)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1415)												data2->iPos = (data2->iPos + 1);
HXDLIN(1415)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1415)												data3->fPos = (data3->fPos + 2);
HXDLIN(1415)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1415)												data4->bPos = (data4->bPos + 1);
            											}
            											break;
            											case (int)17: {
HXLINE(1415)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1415)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)18: {
HXLINE(1415)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1415)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)19: {
HXLINE(1415)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1415)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)20: {
HXLINE(1415)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1415)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)21: case (int)22: {
            											}
            											break;
            											default:{
            											}
            										}
HXLINE(1415)										data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXDLIN(1415)										 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1415)										 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1416)										::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginFill(c->buffer->i->__get(c->iPos),c->buffer->f->__get(c->fPos));
HXLINE(1417)										::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginFill(c->buffer->i->__get(c->iPos),c->buffer->f->__get(c->fPos));
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE(1281)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1281)									data1->oPos = (data1->oPos + 2);
HXDLIN(1281)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1281)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1281)									data1->iPos = (data1->iPos + 1);
HXDLIN(1281)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1281)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1281)									data1->oPos = (data1->oPos + 4);
HXDLIN(1281)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1281)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1281)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1281)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1281)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1281)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1281)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1281)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1281)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1281)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1281)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1281)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1281)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1281)									data1->fPos = (data1->fPos + 5);
HXDLIN(1281)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1281)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1281)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1281)									data1->oPos = (data1->oPos + 2);
HXDLIN(1281)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1281)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1281)									data1->oPos = (data1->oPos + 4);
HXDLIN(1281)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1281)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1281)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1281)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1281)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1281)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1281)									data1->oPos = (data1->oPos + 4);
HXDLIN(1281)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1281)									data2->iPos = (data2->iPos + 1);
HXDLIN(1281)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1281)									data3->fPos = (data3->fPos + 2);
HXDLIN(1281)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1281)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1281)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1281)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1281)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1281)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1281)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1281)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXDLIN(1281)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1281)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1282)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->cubicCurveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->f->__get((c->fPos + 5)));
HXLINE(1284)							if (hasLineStyle) {
HXLINE(1286)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->cubicCurveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->f->__get((c->fPos + 5)));
            							}
            							else {
HXLINE(1290)								initStrokeX = c->buffer->f->__get((c->fPos + 4));
HXLINE(1291)								initStrokeY = c->buffer->f->__get((c->fPos + 5));
            							}
            						}
            						break;
            						case (int)5: {
HXLINE(1295)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1295)									data1->oPos = (data1->oPos + 2);
HXDLIN(1295)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1295)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1295)									data1->iPos = (data1->iPos + 1);
HXDLIN(1295)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1295)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1295)									data1->oPos = (data1->oPos + 4);
HXDLIN(1295)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1295)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1295)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1295)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1295)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1295)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1295)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1295)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1295)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1295)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1295)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1295)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1295)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1295)									data1->fPos = (data1->fPos + 5);
HXDLIN(1295)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1295)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1295)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1295)									data1->oPos = (data1->oPos + 2);
HXDLIN(1295)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1295)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1295)									data1->oPos = (data1->oPos + 4);
HXDLIN(1295)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1295)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1295)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1295)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1295)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1295)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1295)									data1->oPos = (data1->oPos + 4);
HXDLIN(1295)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1295)									data2->iPos = (data2->iPos + 1);
HXDLIN(1295)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1295)									data3->fPos = (data3->fPos + 2);
HXDLIN(1295)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1295)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1295)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1295)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1295)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1295)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1295)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1295)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXDLIN(1295)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1295)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1296)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->curveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE(1298)							if (hasLineStyle) {
HXLINE(1300)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->curveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            							}
            							else {
HXLINE(1304)								initStrokeX = c->buffer->f->__get((c->fPos + 2));
HXLINE(1305)								initStrokeY = c->buffer->f->__get((c->fPos + 3));
            							}
            						}
            						break;
            						case (int)6: {
HXLINE(1421)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1421)									data1->oPos = (data1->oPos + 2);
HXDLIN(1421)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1421)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1421)									data1->iPos = (data1->iPos + 1);
HXDLIN(1421)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1421)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1421)									data1->oPos = (data1->oPos + 4);
HXDLIN(1421)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1421)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1421)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1421)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1421)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1421)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1421)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1421)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1421)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1421)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1421)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1421)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1421)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1421)									data1->fPos = (data1->fPos + 5);
HXDLIN(1421)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1421)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1421)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1421)									data1->oPos = (data1->oPos + 2);
HXDLIN(1421)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1421)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1421)									data1->oPos = (data1->oPos + 4);
HXDLIN(1421)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1421)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1421)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1421)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1421)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1421)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1421)									data1->oPos = (data1->oPos + 4);
HXDLIN(1421)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1421)									data2->iPos = (data2->iPos + 1);
HXDLIN(1421)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1421)									data3->fPos = (data3->fPos + 2);
HXDLIN(1421)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1421)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1421)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1421)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1421)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1421)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1421)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXDLIN(1421)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1421)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1422)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawCircle(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)));
HXLINE(1424)							if (hasLineStyle) {
HXLINE(1426)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawCircle(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)));
            							}
            						}
            						break;
            						case (int)7: {
HXLINE(1430)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1430)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1430)									data1->oPos = (data1->oPos + 2);
HXDLIN(1430)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1430)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1430)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1430)									data1->iPos = (data1->iPos + 1);
HXDLIN(1430)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1430)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1430)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1430)									data1->oPos = (data1->oPos + 4);
HXDLIN(1430)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1430)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1430)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1430)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1430)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1430)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1430)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1430)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1430)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1430)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1430)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1430)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1430)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1430)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1430)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1430)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1430)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1430)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1430)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1430)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1430)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1430)									data1->fPos = (data1->fPos + 5);
HXDLIN(1430)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1430)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1430)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1430)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1430)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1430)									data1->oPos = (data1->oPos + 2);
HXDLIN(1430)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1430)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1430)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1430)									data1->oPos = (data1->oPos + 4);
HXDLIN(1430)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1430)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1430)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1430)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1430)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1430)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1430)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1430)									data1->oPos = (data1->oPos + 4);
HXDLIN(1430)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1430)									data2->iPos = (data2->iPos + 1);
HXDLIN(1430)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1430)									data3->fPos = (data3->fPos + 2);
HXDLIN(1430)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1430)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1430)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1430)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1430)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1430)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1430)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1430)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1430)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1430)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1430)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXDLIN(1430)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1430)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1431)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawEllipse(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE(1433)							if (hasLineStyle) {
HXLINE(1435)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawEllipse(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            							}
            						}
            						break;
            						case (int)8: {
HXLINE(1457)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1457)									data1->oPos = (data1->oPos + 2);
HXDLIN(1457)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1457)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1457)									data1->iPos = (data1->iPos + 1);
HXDLIN(1457)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1457)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1457)									data1->oPos = (data1->oPos + 4);
HXDLIN(1457)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1457)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1457)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1457)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1457)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1457)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1457)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1457)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1457)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1457)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1457)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1457)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1457)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1457)									data1->fPos = (data1->fPos + 5);
HXDLIN(1457)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1457)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1457)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1457)									data1->oPos = (data1->oPos + 2);
HXDLIN(1457)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1457)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1457)									data1->oPos = (data1->oPos + 4);
HXDLIN(1457)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1457)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1457)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1457)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1457)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1457)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1457)									data1->oPos = (data1->oPos + 4);
HXDLIN(1457)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1457)									data2->iPos = (data2->iPos + 1);
HXDLIN(1457)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1457)									data3->fPos = (data3->fPos + 2);
HXDLIN(1457)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1457)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1457)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1457)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1457)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1457)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1457)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn();
HXDLIN(1457)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1457)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1458)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawQuads(( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) ),( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) ));
            						}
            						break;
            						case (int)9: {
HXLINE(1439)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1439)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1439)									data1->oPos = (data1->oPos + 2);
HXDLIN(1439)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1439)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1439)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1439)									data1->iPos = (data1->iPos + 1);
HXDLIN(1439)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1439)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1439)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1439)									data1->oPos = (data1->oPos + 4);
HXDLIN(1439)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1439)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1439)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1439)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1439)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1439)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1439)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1439)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1439)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1439)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1439)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1439)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1439)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1439)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1439)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1439)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1439)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1439)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1439)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1439)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1439)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1439)									data1->fPos = (data1->fPos + 5);
HXDLIN(1439)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1439)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1439)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1439)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1439)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1439)									data1->oPos = (data1->oPos + 2);
HXDLIN(1439)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1439)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1439)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1439)									data1->oPos = (data1->oPos + 4);
HXDLIN(1439)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1439)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1439)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1439)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1439)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1439)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1439)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1439)									data1->oPos = (data1->oPos + 4);
HXDLIN(1439)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1439)									data2->iPos = (data2->iPos + 1);
HXDLIN(1439)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1439)									data3->fPos = (data3->fPos + 2);
HXDLIN(1439)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1439)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1439)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1439)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1439)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1439)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1439)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1439)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1439)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1439)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1439)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN(1439)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1439)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1440)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE(1442)							if (hasLineStyle) {
HXLINE(1444)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            							}
            						}
            						break;
            						case (int)10: {
HXLINE(1448)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1448)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1448)									data1->oPos = (data1->oPos + 2);
HXDLIN(1448)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1448)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1448)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1448)									data1->iPos = (data1->iPos + 1);
HXDLIN(1448)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1448)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1448)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1448)									data1->oPos = (data1->oPos + 4);
HXDLIN(1448)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1448)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1448)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1448)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1448)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1448)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1448)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1448)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1448)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1448)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1448)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1448)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1448)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1448)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1448)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1448)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1448)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1448)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1448)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1448)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1448)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1448)									data1->fPos = (data1->fPos + 5);
HXDLIN(1448)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1448)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1448)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1448)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1448)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1448)									data1->oPos = (data1->oPos + 2);
HXDLIN(1448)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1448)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1448)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1448)									data1->oPos = (data1->oPos + 4);
HXDLIN(1448)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1448)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1448)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1448)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1448)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1448)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1448)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1448)									data1->oPos = (data1->oPos + 4);
HXDLIN(1448)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1448)									data2->iPos = (data2->iPos + 1);
HXDLIN(1448)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1448)									data3->fPos = (data3->fPos + 2);
HXDLIN(1448)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1448)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1448)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1448)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1448)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1448)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1448)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1448)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1448)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1448)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1448)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXDLIN(1448)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1448)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1449)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawRoundRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
HXLINE(1451)							if (hasLineStyle) {
HXLINE(1453)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawRoundRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
            							}
            						}
            						break;
            						case (int)12: {
HXLINE(1461)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1461)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1461)									data1->oPos = (data1->oPos + 2);
HXDLIN(1461)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1461)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1461)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1461)									data1->iPos = (data1->iPos + 1);
HXDLIN(1461)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1461)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1461)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1461)									data1->oPos = (data1->oPos + 4);
HXDLIN(1461)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1461)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1461)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1461)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1461)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1461)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1461)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1461)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1461)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1461)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1461)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1461)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1461)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1461)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1461)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1461)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1461)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1461)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1461)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1461)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1461)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1461)									data1->fPos = (data1->fPos + 5);
HXDLIN(1461)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1461)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1461)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1461)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1461)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1461)									data1->oPos = (data1->oPos + 2);
HXDLIN(1461)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1461)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1461)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1461)									data1->oPos = (data1->oPos + 4);
HXDLIN(1461)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1461)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1461)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1461)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1461)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1461)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1461)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1461)									data1->oPos = (data1->oPos + 4);
HXDLIN(1461)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1461)									data2->iPos = (data2->iPos + 1);
HXDLIN(1461)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1461)									data3->fPos = (data3->fPos + 2);
HXDLIN(1461)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1461)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1461)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1461)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1461)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1461)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1461)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1461)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1461)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1461)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1461)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn();
HXDLIN(1461)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1461)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1462)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawTriangles(( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) ),( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) ),c->buffer->o->__get((c->oPos + 3)));
            						}
            						break;
            						case (int)13: {
HXLINE(1337)							{
HXLINE(1337)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE(1337)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1337)										data1->oPos = (data1->oPos + 2);
HXDLIN(1337)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1337)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE(1337)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1337)										data1->iPos = (data1->iPos + 1);
HXDLIN(1337)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1337)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE(1337)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1337)										data1->oPos = (data1->oPos + 4);
HXDLIN(1337)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1337)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1337)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1337)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1337)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1337)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE(1337)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1337)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE(1337)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1337)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE(1337)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1337)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE(1337)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1337)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE(1337)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1337)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE(1337)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1337)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE(1337)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1337)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE(1337)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1337)										data1->fPos = (data1->fPos + 5);
HXDLIN(1337)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1337)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE(1337)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1337)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE(1337)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1337)										data1->oPos = (data1->oPos + 2);
HXDLIN(1337)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1337)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE(1337)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1337)										data1->oPos = (data1->oPos + 4);
HXDLIN(1337)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1337)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1337)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1337)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1337)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1337)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE(1337)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1337)										data1->oPos = (data1->oPos + 4);
HXDLIN(1337)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1337)										data2->iPos = (data2->iPos + 1);
HXDLIN(1337)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1337)										data3->fPos = (data3->fPos + 2);
HXDLIN(1337)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1337)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE(1337)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1337)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE(1337)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1337)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE(1337)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1337)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE(1337)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1337)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE(1337)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::END_FILL_dyn();
HXDLIN(1337)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE(1338)							::openfl::display::_internal::CairoGraphics_obj::endFill();
HXLINE(1339)							::openfl::display::_internal::CairoGraphics_obj::endStroke();
HXLINE(1340)							::openfl::display::_internal::CairoGraphics_obj::hasFill = false;
HXLINE(1341)							hasLineStyle = false;
HXLINE(1342)							::openfl::display::_internal::CairoGraphics_obj::bitmapFill = null();
HXLINE(1343)							initStrokeX = ( (Float)(0) );
HXLINE(1344)							initStrokeY = ( (Float)(0) );
            						}
            						break;
            						case (int)14: {
HXLINE(1361)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->oPos = (data1->oPos + 2);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1361)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->iPos = (data1->iPos + 1);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1361)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->oPos = (data1->oPos + 4);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1361)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1361)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1361)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->fPos = (data1->fPos + 5);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1361)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->oPos = (data1->oPos + 2);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1361)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->oPos = (data1->oPos + 4);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1361)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1361)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1361)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->oPos = (data1->oPos + 4);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1361)									data2->iPos = (data2->iPos + 1);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1361)									data3->fPos = (data3->fPos + 2);
HXDLIN(1361)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1361)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1361)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1361)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1361)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn();
HXDLIN(1361)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1361)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1363)							bool _hx_tmp;
HXDLIN(1363)							if (!(hasLineStyle)) {
HXLINE(1363)								if ((initStrokeX == 0)) {
HXLINE(1363)									_hx_tmp = (initStrokeY != 0);
            								}
            								else {
HXLINE(1363)									_hx_tmp = true;
            								}
            							}
            							else {
HXLINE(1363)								_hx_tmp = false;
            							}
HXDLIN(1363)							if (_hx_tmp) {
HXLINE(1365)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->moveTo(initStrokeX,initStrokeY);
HXLINE(1366)								initStrokeX = ( (Float)(0) );
HXLINE(1367)								initStrokeY = ( (Float)(0) );
            							}
HXLINE(1370)							hasLineStyle = true;
HXLINE(1371)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineBitmapStyle(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            						}
            						break;
            						case (int)15: {
HXLINE(1347)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1347)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1347)									data1->oPos = (data1->oPos + 2);
HXDLIN(1347)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1347)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1347)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1347)									data1->iPos = (data1->iPos + 1);
HXDLIN(1347)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1347)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1347)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1347)									data1->oPos = (data1->oPos + 4);
HXDLIN(1347)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1347)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1347)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1347)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1347)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1347)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1347)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1347)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1347)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1347)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1347)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1347)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1347)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1347)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1347)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1347)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1347)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1347)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1347)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1347)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1347)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1347)									data1->fPos = (data1->fPos + 5);
HXDLIN(1347)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1347)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1347)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1347)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1347)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1347)									data1->oPos = (data1->oPos + 2);
HXDLIN(1347)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1347)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1347)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1347)									data1->oPos = (data1->oPos + 4);
HXDLIN(1347)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1347)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1347)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1347)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1347)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1347)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1347)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1347)									data1->oPos = (data1->oPos + 4);
HXDLIN(1347)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1347)									data2->iPos = (data2->iPos + 1);
HXDLIN(1347)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1347)									data3->fPos = (data3->fPos + 2);
HXDLIN(1347)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1347)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1347)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1347)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1347)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1347)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1347)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1347)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1347)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1347)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1347)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn();
HXDLIN(1347)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1347)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1349)							bool _hx_tmp;
HXDLIN(1349)							if (!(hasLineStyle)) {
HXLINE(1349)								if ((initStrokeX == 0)) {
HXLINE(1349)									_hx_tmp = (initStrokeY != 0);
            								}
            								else {
HXLINE(1349)									_hx_tmp = true;
            								}
            							}
            							else {
HXLINE(1349)								_hx_tmp = false;
            							}
HXDLIN(1349)							if (_hx_tmp) {
HXLINE(1351)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->moveTo(initStrokeX,initStrokeY);
HXLINE(1352)								initStrokeX = ( (Float)(0) );
HXLINE(1353)								initStrokeY = ( (Float)(0) );
            							}
HXLINE(1356)							hasLineStyle = true;
HXLINE(1357)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineGradientStyle(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
            						}
            						break;
            						case (int)16: {
HXLINE(1374)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1374)									data1->oPos = (data1->oPos + 2);
HXDLIN(1374)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1374)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1374)									data1->iPos = (data1->iPos + 1);
HXDLIN(1374)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1374)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1374)									data1->oPos = (data1->oPos + 4);
HXDLIN(1374)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1374)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1374)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1374)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1374)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1374)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1374)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1374)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1374)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1374)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1374)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1374)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1374)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1374)									data1->fPos = (data1->fPos + 5);
HXDLIN(1374)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1374)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1374)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1374)									data1->oPos = (data1->oPos + 2);
HXDLIN(1374)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1374)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1374)									data1->oPos = (data1->oPos + 4);
HXDLIN(1374)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1374)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1374)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1374)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1374)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1374)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1374)									data1->oPos = (data1->oPos + 4);
HXDLIN(1374)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1374)									data2->iPos = (data2->iPos + 1);
HXDLIN(1374)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1374)									data3->fPos = (data3->fPos + 2);
HXDLIN(1374)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1374)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1374)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1374)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1374)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1374)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1374)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1374)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn();
HXDLIN(1374)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1374)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1376)							bool _hx_tmp;
HXDLIN(1376)							if (!(hasLineStyle)) {
HXLINE(1376)								_hx_tmp = ::hx::IsNotNull( c->buffer->o->__get(c->oPos) );
            							}
            							else {
HXLINE(1376)								_hx_tmp = false;
            							}
HXDLIN(1376)							if (_hx_tmp) {
HXLINE(1378)								bool _hx_tmp;
HXDLIN(1378)								if ((initStrokeX == 0)) {
HXLINE(1378)									_hx_tmp = (initStrokeY != 0);
            								}
            								else {
HXLINE(1378)									_hx_tmp = true;
            								}
HXDLIN(1378)								if (_hx_tmp) {
HXLINE(1380)									::openfl::display::_internal::CairoGraphics_obj::strokeCommands->moveTo(initStrokeX,initStrokeY);
HXLINE(1381)									initStrokeX = ( (Float)(0) );
HXLINE(1382)									initStrokeY = ( (Float)(0) );
            								}
            							}
HXLINE(1386)							hasLineStyle = ::hx::IsNotNull( c->buffer->o->__get(c->oPos) );
HXLINE(1387)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineStyle(c->buffer->o->__get(c->oPos),c->buffer->i->__get(c->iPos),c->buffer->f->__get(c->fPos),c->buffer->b->__get(c->bPos),c->buffer->o->__get((c->oPos + 1)),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get((c->fPos + 1)));
            						}
            						break;
            						case (int)17: {
HXLINE(1309)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1309)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1309)									data1->oPos = (data1->oPos + 2);
HXDLIN(1309)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1309)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1309)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1309)									data1->iPos = (data1->iPos + 1);
HXDLIN(1309)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1309)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1309)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1309)									data1->oPos = (data1->oPos + 4);
HXDLIN(1309)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1309)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1309)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1309)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1309)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1309)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1309)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1309)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1309)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1309)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1309)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1309)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1309)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1309)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1309)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1309)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1309)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1309)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1309)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1309)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1309)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1309)									data1->fPos = (data1->fPos + 5);
HXDLIN(1309)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1309)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1309)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1309)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1309)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1309)									data1->oPos = (data1->oPos + 2);
HXDLIN(1309)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1309)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1309)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1309)									data1->oPos = (data1->oPos + 4);
HXDLIN(1309)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1309)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1309)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1309)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1309)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1309)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1309)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1309)									data1->oPos = (data1->oPos + 4);
HXDLIN(1309)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1309)									data2->iPos = (data2->iPos + 1);
HXDLIN(1309)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1309)									data3->fPos = (data3->fPos + 2);
HXDLIN(1309)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1309)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1309)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1309)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1309)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1309)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1309)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1309)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1309)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1309)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1309)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXDLIN(1309)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1309)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1310)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->lineTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
HXLINE(1312)							if (hasLineStyle) {
HXLINE(1314)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            							}
            							else {
HXLINE(1318)								initStrokeX = c->buffer->f->__get(c->fPos);
HXLINE(1319)								initStrokeY = c->buffer->f->__get((c->fPos + 1));
            							}
            						}
            						break;
            						case (int)18: {
HXLINE(1323)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1323)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1323)									data1->oPos = (data1->oPos + 2);
HXDLIN(1323)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1323)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1323)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1323)									data1->iPos = (data1->iPos + 1);
HXDLIN(1323)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1323)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1323)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1323)									data1->oPos = (data1->oPos + 4);
HXDLIN(1323)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1323)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1323)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1323)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1323)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1323)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1323)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1323)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1323)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1323)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1323)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1323)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1323)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1323)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1323)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1323)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1323)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1323)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1323)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1323)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1323)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1323)									data1->fPos = (data1->fPos + 5);
HXDLIN(1323)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1323)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1323)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1323)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1323)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1323)									data1->oPos = (data1->oPos + 2);
HXDLIN(1323)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1323)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1323)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1323)									data1->oPos = (data1->oPos + 4);
HXDLIN(1323)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1323)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1323)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1323)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1323)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1323)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1323)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1323)									data1->oPos = (data1->oPos + 4);
HXDLIN(1323)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1323)									data2->iPos = (data2->iPos + 1);
HXDLIN(1323)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1323)									data3->fPos = (data3->fPos + 2);
HXDLIN(1323)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1323)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1323)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1323)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1323)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1323)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1323)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1323)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1323)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1323)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1323)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN(1323)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1323)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1324)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->moveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
HXLINE(1326)							if (hasLineStyle) {
HXLINE(1328)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->moveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            							}
            							else {
HXLINE(1332)								initStrokeX = c->buffer->f->__get(c->fPos);
HXLINE(1333)								initStrokeY = c->buffer->f->__get((c->fPos + 1));
            							}
            						}
            						break;
            						case (int)19: {
HXLINE(1465)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->oPos = (data1->oPos + 2);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1465)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->iPos = (data1->iPos + 1);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1465)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->oPos = (data1->oPos + 4);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1465)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1465)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1465)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->fPos = (data1->fPos + 5);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1465)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->oPos = (data1->oPos + 2);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1465)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->oPos = (data1->oPos + 4);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1465)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1465)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1465)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->oPos = (data1->oPos + 4);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1465)									data2->iPos = (data2->iPos + 1);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1465)									data3->fPos = (data3->fPos + 2);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1465)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1465)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::OVERRIDE_BLEND_MODE_dyn();
HXDLIN(1465)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1465)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1466)							renderer->_hx___setBlendModeCairo(::openfl::display::_internal::CairoGraphics_obj::cairo,c->buffer->o->__get(c->oPos));
            						}
            						break;
            						case (int)21: {
HXLINE(1469)							{
HXLINE(1469)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE(1469)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1469)										data1->oPos = (data1->oPos + 2);
HXDLIN(1469)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1469)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE(1469)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1469)										data1->iPos = (data1->iPos + 1);
HXDLIN(1469)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1469)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE(1469)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1469)										data1->oPos = (data1->oPos + 4);
HXDLIN(1469)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1469)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1469)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1469)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1469)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1469)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE(1469)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1469)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE(1469)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1469)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE(1469)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1469)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE(1469)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1469)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE(1469)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1469)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE(1469)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1469)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE(1469)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1469)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE(1469)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1469)										data1->fPos = (data1->fPos + 5);
HXDLIN(1469)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1469)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE(1469)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1469)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE(1469)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1469)										data1->oPos = (data1->oPos + 2);
HXDLIN(1469)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1469)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE(1469)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1469)										data1->oPos = (data1->oPos + 4);
HXDLIN(1469)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1469)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1469)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1469)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1469)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1469)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE(1469)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1469)										data1->oPos = (data1->oPos + 4);
HXDLIN(1469)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1469)										data2->iPos = (data2->iPos + 1);
HXDLIN(1469)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1469)										data3->fPos = (data3->fPos + 2);
HXDLIN(1469)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1469)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE(1469)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1469)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE(1469)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1469)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE(1469)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1469)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE(1469)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1469)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE(1469)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_EVEN_ODD_dyn();
HXDLIN(1469)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE(1470)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->windingEvenOdd();
            						}
            						break;
            						case (int)22: {
HXLINE(1473)							{
HXLINE(1473)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE(1473)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1473)										data1->oPos = (data1->oPos + 2);
HXDLIN(1473)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1473)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE(1473)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1473)										data1->iPos = (data1->iPos + 1);
HXDLIN(1473)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1473)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE(1473)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1473)										data1->oPos = (data1->oPos + 4);
HXDLIN(1473)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1473)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1473)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1473)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1473)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1473)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE(1473)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1473)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE(1473)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1473)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE(1473)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1473)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE(1473)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1473)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE(1473)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1473)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE(1473)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1473)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE(1473)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1473)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE(1473)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1473)										data1->fPos = (data1->fPos + 5);
HXDLIN(1473)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1473)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE(1473)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1473)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE(1473)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1473)										data1->oPos = (data1->oPos + 2);
HXDLIN(1473)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1473)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE(1473)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1473)										data1->oPos = (data1->oPos + 4);
HXDLIN(1473)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1473)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1473)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1473)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1473)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1473)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE(1473)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1473)										data1->oPos = (data1->oPos + 4);
HXDLIN(1473)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1473)										data2->iPos = (data2->iPos + 1);
HXDLIN(1473)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1473)										data3->fPos = (data3->fPos + 2);
HXDLIN(1473)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1473)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE(1473)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1473)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE(1473)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1473)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE(1473)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1473)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE(1473)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1473)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE(1473)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_NON_ZERO_dyn();
HXDLIN(1473)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE(1474)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->windingNonZero();
            						}
            						break;
            						default:{
HXLINE(1477)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->oPos = (data1->oPos + 2);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1477)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->iPos = (data1->iPos + 1);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1477)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->oPos = (data1->oPos + 4);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1477)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1477)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1477)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->fPos = (data1->fPos + 5);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1477)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->oPos = (data1->oPos + 2);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1477)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->oPos = (data1->oPos + 4);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1477)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1477)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1477)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->oPos = (data1->oPos + 4);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1477)									data2->iPos = (data2->iPos + 1);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1477)									data3->fPos = (data3->fPos + 2);
HXDLIN(1477)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1477)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1477)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1477)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1477)							data->prev = type;
            						}
            					}
            				}
            			}
HXLINE(1481)			if ((::openfl::display::_internal::CairoGraphics_obj::fillCommands->get_length() > 0)) {
HXLINE(1483)				::openfl::display::_internal::CairoGraphics_obj::endFill();
            			}
HXLINE(1486)			if ((::openfl::display::_internal::CairoGraphics_obj::strokeCommands->get_length() > 0)) {
HXLINE(1488)				::openfl::display::_internal::CairoGraphics_obj::endStroke();
            			}
HXLINE(1491)			data->destroy();
HXLINE(1493)			graphics->_hx___bitmap->image->dirty = true;
HXLINE(1494)			graphics->_hx___bitmap->image->version++;
            		}
HXLINE(1497)		graphics->_hx___softwareDirty = false;
HXLINE(1498)		graphics->set___dirty(false);
HXLINE(1499)		::openfl::display::_internal::CairoGraphics_obj::graphics = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,render,(void))

void CairoGraphics_obj::renderMask( ::openfl::display::Graphics graphics, ::openfl::display::CairoRenderer renderer){
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_1506_renderMask)
HXDLIN(1506)		if ((graphics->_hx___commands->get_length() != 0)) {
HXLINE(1508)			::openfl::display::_internal::CairoGraphics_obj::cairo = renderer->cairo;
HXLINE(1510)			Float positionX = ((Float)0.0);
HXLINE(1511)			Float positionY = ((Float)0.0);
HXLINE(1513)			int offsetX = 0;
HXLINE(1514)			int offsetY = 0;
HXLINE(1516)			 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE(1518)			Float x;
HXLINE(1519)			Float y;
HXLINE(1520)			Float width;
HXLINE(1521)			Float height;
HXLINE(1522)			Float kappa = ((Float)0.5522848);
HXLINE(1523)			Float ox;
HXLINE(1524)			Float oy;
HXLINE(1525)			Float xe;
HXLINE(1526)			Float ye;
HXLINE(1527)			Float xm;
HXLINE(1528)			Float ym;
HXLINE(1530)			{
HXLINE(1530)				int _g = 0;
HXDLIN(1530)				::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN(1530)				while((_g < _g1->length)){
HXLINE(1530)					 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN(1530)					_g = (_g + 1);
HXLINE(1532)					switch((int)(type->_hx_getIndex())){
            						case (int)4: {
HXLINE(1535)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->oPos = (data1->oPos + 2);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1535)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->iPos = (data1->iPos + 1);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1535)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->oPos = (data1->oPos + 4);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1535)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1535)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1535)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->fPos = (data1->fPos + 5);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1535)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->oPos = (data1->oPos + 2);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1535)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->oPos = (data1->oPos + 4);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1535)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1535)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1535)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->oPos = (data1->oPos + 4);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1535)									data2->iPos = (data2->iPos + 1);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1535)									data3->fPos = (data3->fPos + 2);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1535)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1535)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXDLIN(1535)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1535)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1536)							::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )),(c->buffer->f->__get((c->fPos + 2)) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 3)) - ( (Float)(offsetY) )),(c->buffer->f->__get((c->fPos + 4)) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 5)) - ( (Float)(offsetY) )));
HXLINE(1544)							positionX = c->buffer->f->__get((c->fPos + 4));
HXLINE(1545)							positionY = c->buffer->f->__get((c->fPos + 5));
            						}
            						break;
            						case (int)5: {
HXLINE(1548)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1548)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1548)									data1->oPos = (data1->oPos + 2);
HXDLIN(1548)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1548)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1548)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1548)									data1->iPos = (data1->iPos + 1);
HXDLIN(1548)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1548)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1548)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1548)									data1->oPos = (data1->oPos + 4);
HXDLIN(1548)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1548)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1548)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1548)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1548)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1548)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1548)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1548)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1548)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1548)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1548)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1548)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1548)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1548)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1548)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1548)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1548)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1548)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1548)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1548)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1548)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1548)									data1->fPos = (data1->fPos + 5);
HXDLIN(1548)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1548)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1548)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1548)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1548)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1548)									data1->oPos = (data1->oPos + 2);
HXDLIN(1548)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1548)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1548)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1548)									data1->oPos = (data1->oPos + 4);
HXDLIN(1548)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1548)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1548)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1548)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1548)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1548)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1548)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1548)									data1->oPos = (data1->oPos + 4);
HXDLIN(1548)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1548)									data2->iPos = (data2->iPos + 1);
HXDLIN(1548)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1548)									data3->fPos = (data3->fPos + 2);
HXDLIN(1548)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1548)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1548)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1548)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1548)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1548)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1548)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1548)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1548)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1548)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1548)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXDLIN(1548)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1548)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1549)							::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )),(c->buffer->f->__get((c->fPos + 2)) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 3)) - ( (Float)(offsetY) )));
HXLINE(1550)							positionX = c->buffer->f->__get((c->fPos + 2));
HXLINE(1551)							positionY = c->buffer->f->__get((c->fPos + 3));
            						}
            						break;
            						case (int)6: {
HXLINE(1554)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1554)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1554)									data1->oPos = (data1->oPos + 2);
HXDLIN(1554)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1554)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1554)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1554)									data1->iPos = (data1->iPos + 1);
HXDLIN(1554)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1554)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1554)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1554)									data1->oPos = (data1->oPos + 4);
HXDLIN(1554)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1554)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1554)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1554)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1554)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1554)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1554)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1554)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1554)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1554)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1554)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1554)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1554)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1554)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1554)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1554)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1554)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1554)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1554)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1554)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1554)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1554)									data1->fPos = (data1->fPos + 5);
HXDLIN(1554)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1554)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1554)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1554)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1554)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1554)									data1->oPos = (data1->oPos + 2);
HXDLIN(1554)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1554)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1554)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1554)									data1->oPos = (data1->oPos + 4);
HXDLIN(1554)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1554)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1554)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1554)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1554)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1554)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1554)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1554)									data1->oPos = (data1->oPos + 4);
HXDLIN(1554)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1554)									data2->iPos = (data2->iPos + 1);
HXDLIN(1554)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1554)									data3->fPos = (data3->fPos + 2);
HXDLIN(1554)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1554)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1554)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1554)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1554)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1554)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1554)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1554)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1554)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1554)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1554)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXDLIN(1554)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1554)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1555)							::openfl::display::_internal::CairoGraphics_obj::cairo->arc((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )),c->buffer->f->__get((c->fPos + 2)),( (Float)(0) ),(::Math_obj::PI * ( (Float)(2) )));
            						}
            						break;
            						case (int)7: {
HXLINE(1558)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1558)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1558)									data1->oPos = (data1->oPos + 2);
HXDLIN(1558)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1558)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1558)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1558)									data1->iPos = (data1->iPos + 1);
HXDLIN(1558)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1558)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1558)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1558)									data1->oPos = (data1->oPos + 4);
HXDLIN(1558)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1558)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1558)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1558)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1558)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1558)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1558)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1558)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1558)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1558)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1558)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1558)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1558)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1558)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1558)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1558)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1558)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1558)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1558)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1558)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1558)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1558)									data1->fPos = (data1->fPos + 5);
HXDLIN(1558)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1558)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1558)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1558)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1558)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1558)									data1->oPos = (data1->oPos + 2);
HXDLIN(1558)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1558)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1558)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1558)									data1->oPos = (data1->oPos + 4);
HXDLIN(1558)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1558)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1558)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1558)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1558)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1558)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1558)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1558)									data1->oPos = (data1->oPos + 4);
HXDLIN(1558)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1558)									data2->iPos = (data2->iPos + 1);
HXDLIN(1558)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1558)									data3->fPos = (data3->fPos + 2);
HXDLIN(1558)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1558)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1558)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1558)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1558)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1558)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1558)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1558)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1558)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1558)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1558)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXDLIN(1558)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1558)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1560)							x = c->buffer->f->__get(c->fPos);
HXLINE(1561)							y = c->buffer->f->__get((c->fPos + 1));
HXLINE(1562)							width = c->buffer->f->__get((c->fPos + 2));
HXLINE(1563)							height = c->buffer->f->__get((c->fPos + 3));
HXLINE(1565)							x = (x - ( (Float)(offsetX) ));
HXLINE(1566)							y = (y - ( (Float)(offsetY) ));
HXLINE(1568)							ox = ((width / ( (Float)(2) )) * kappa);
HXLINE(1569)							oy = ((height / ( (Float)(2) )) * kappa);
HXLINE(1570)							xe = (x + width);
HXLINE(1571)							ye = (y + height);
HXLINE(1572)							xm = (x + (width / ( (Float)(2) )));
HXLINE(1573)							ym = (y + (height / ( (Float)(2) )));
HXLINE(1577)							::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(x,ym);
HXLINE(1578)							::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo(x,(ym - oy),(xm - ox),y,xm,y);
HXLINE(1579)							::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((xm + ox),y,xe,(ym - oy),xe,ym);
HXLINE(1580)							::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo(xe,(ym + oy),(xm + ox),ye,xm,ye);
HXLINE(1581)							::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((xm - ox),ye,x,(ym + oy),x,ym);
            						}
            						break;
            						case (int)9: {
HXLINE(1585)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1585)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1585)									data1->oPos = (data1->oPos + 2);
HXDLIN(1585)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1585)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1585)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1585)									data1->iPos = (data1->iPos + 1);
HXDLIN(1585)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1585)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1585)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1585)									data1->oPos = (data1->oPos + 4);
HXDLIN(1585)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1585)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1585)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1585)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1585)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1585)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1585)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1585)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1585)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1585)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1585)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1585)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1585)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1585)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1585)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1585)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1585)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1585)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1585)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1585)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1585)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1585)									data1->fPos = (data1->fPos + 5);
HXDLIN(1585)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1585)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1585)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1585)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1585)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1585)									data1->oPos = (data1->oPos + 2);
HXDLIN(1585)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1585)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1585)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1585)									data1->oPos = (data1->oPos + 4);
HXDLIN(1585)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1585)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1585)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1585)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1585)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1585)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1585)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1585)									data1->oPos = (data1->oPos + 4);
HXDLIN(1585)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1585)									data2->iPos = (data2->iPos + 1);
HXDLIN(1585)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1585)									data3->fPos = (data3->fPos + 2);
HXDLIN(1585)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1585)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1585)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1585)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1585)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1585)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1585)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1585)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1585)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1585)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1585)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN(1585)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1585)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1586)							::openfl::display::_internal::CairoGraphics_obj::cairo->rectangle((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            						}
            						break;
            						case (int)10: {
HXLINE(1589)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1589)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1589)									data1->oPos = (data1->oPos + 2);
HXDLIN(1589)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1589)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1589)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1589)									data1->iPos = (data1->iPos + 1);
HXDLIN(1589)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1589)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1589)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1589)									data1->oPos = (data1->oPos + 4);
HXDLIN(1589)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1589)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1589)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1589)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1589)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1589)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1589)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1589)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1589)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1589)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1589)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1589)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1589)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1589)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1589)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1589)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1589)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1589)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1589)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1589)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1589)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1589)									data1->fPos = (data1->fPos + 5);
HXDLIN(1589)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1589)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1589)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1589)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1589)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1589)									data1->oPos = (data1->oPos + 2);
HXDLIN(1589)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1589)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1589)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1589)									data1->oPos = (data1->oPos + 4);
HXDLIN(1589)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1589)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1589)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1589)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1589)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1589)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1589)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1589)									data1->oPos = (data1->oPos + 4);
HXDLIN(1589)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1589)									data2->iPos = (data2->iPos + 1);
HXDLIN(1589)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1589)									data3->fPos = (data3->fPos + 2);
HXDLIN(1589)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1589)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1589)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1589)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1589)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1589)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1589)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1589)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1589)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1589)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1589)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXDLIN(1589)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1589)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1590)							::openfl::display::_internal::CairoGraphics_obj::drawRoundRect((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
            						}
            						break;
            						case (int)17: {
HXLINE(1593)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1593)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1593)									data1->oPos = (data1->oPos + 2);
HXDLIN(1593)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1593)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1593)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1593)									data1->iPos = (data1->iPos + 1);
HXDLIN(1593)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1593)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1593)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1593)									data1->oPos = (data1->oPos + 4);
HXDLIN(1593)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1593)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1593)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1593)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1593)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1593)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1593)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1593)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1593)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1593)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1593)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1593)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1593)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1593)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1593)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1593)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1593)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1593)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1593)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1593)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1593)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1593)									data1->fPos = (data1->fPos + 5);
HXDLIN(1593)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1593)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1593)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1593)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1593)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1593)									data1->oPos = (data1->oPos + 2);
HXDLIN(1593)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1593)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1593)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1593)									data1->oPos = (data1->oPos + 4);
HXDLIN(1593)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1593)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1593)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1593)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1593)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1593)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1593)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1593)									data1->oPos = (data1->oPos + 4);
HXDLIN(1593)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1593)									data2->iPos = (data2->iPos + 1);
HXDLIN(1593)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1593)									data3->fPos = (data3->fPos + 2);
HXDLIN(1593)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1593)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1593)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1593)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1593)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1593)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1593)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1593)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1593)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1593)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1593)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXDLIN(1593)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1593)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1594)							::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )));
HXLINE(1595)							positionX = c->buffer->f->__get(c->fPos);
HXLINE(1596)							positionY = c->buffer->f->__get((c->fPos + 1));
            						}
            						break;
            						case (int)18: {
HXLINE(1599)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1599)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1599)									data1->oPos = (data1->oPos + 2);
HXDLIN(1599)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1599)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1599)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1599)									data1->iPos = (data1->iPos + 1);
HXDLIN(1599)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1599)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1599)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1599)									data1->oPos = (data1->oPos + 4);
HXDLIN(1599)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1599)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1599)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1599)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1599)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1599)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1599)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1599)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1599)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1599)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1599)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1599)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1599)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1599)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1599)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1599)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1599)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1599)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1599)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1599)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1599)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1599)									data1->fPos = (data1->fPos + 5);
HXDLIN(1599)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1599)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1599)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1599)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1599)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1599)									data1->oPos = (data1->oPos + 2);
HXDLIN(1599)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1599)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1599)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1599)									data1->oPos = (data1->oPos + 4);
HXDLIN(1599)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1599)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1599)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1599)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1599)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1599)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1599)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1599)									data1->oPos = (data1->oPos + 4);
HXDLIN(1599)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1599)									data2->iPos = (data2->iPos + 1);
HXDLIN(1599)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1599)									data3->fPos = (data3->fPos + 2);
HXDLIN(1599)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1599)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1599)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1599)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1599)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1599)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1599)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1599)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1599)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1599)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1599)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN(1599)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1599)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1600)							::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )));
HXLINE(1601)							positionX = c->buffer->f->__get(c->fPos);
HXLINE(1602)							positionY = c->buffer->f->__get((c->fPos + 1));
            						}
            						break;
            						default:{
HXLINE(1605)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1605)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1605)									data1->oPos = (data1->oPos + 2);
HXDLIN(1605)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1605)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1605)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1605)									data1->iPos = (data1->iPos + 1);
HXDLIN(1605)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1605)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1605)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1605)									data1->oPos = (data1->oPos + 4);
HXDLIN(1605)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1605)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1605)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1605)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1605)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1605)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1605)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1605)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1605)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1605)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1605)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1605)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1605)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1605)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1605)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1605)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1605)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1605)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1605)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1605)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1605)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1605)									data1->fPos = (data1->fPos + 5);
HXDLIN(1605)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1605)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1605)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1605)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1605)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1605)									data1->oPos = (data1->oPos + 2);
HXDLIN(1605)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1605)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1605)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1605)									data1->oPos = (data1->oPos + 4);
HXDLIN(1605)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1605)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1605)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1605)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1605)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1605)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1605)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1605)									data1->oPos = (data1->oPos + 4);
HXDLIN(1605)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1605)									data2->iPos = (data2->iPos + 1);
HXDLIN(1605)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1605)									data3->fPos = (data3->fPos + 2);
HXDLIN(1605)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1605)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1605)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1605)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1605)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1605)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1605)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1605)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1605)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1605)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1605)							data->prev = type;
            						}
            					}
            				}
            			}
HXLINE(1609)			data->destroy();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,renderMask,(void))


CairoGraphics_obj::CairoGraphics_obj()
{
}

bool CairoGraphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { outValue = ( SIN45 ); return true; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { outValue = ( TAN22 ); return true; }
		if (HX_FIELD_EQ(inName,"cairo") ) { outValue = ( cairo ); return true; }
		if (HX_FIELD_EQ(inName,"isCCW") ) { outValue = isCCW_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { outValue = ( bounds ); return true; }
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { outValue = ( hasFill ); return true; }
		if (HX_FIELD_EQ(inName,"endFill") ) { outValue = endFill_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hitTest") ) { outValue = hitTest_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { outValue = ( graphics ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { outValue = ( hasStroke ); return true; }
		if (HX_FIELD_EQ(inName,"closePath") ) { outValue = closePath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"endStroke") ) { outValue = endStroke_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { outValue = ( bitmapFill ); return true; }
		if (HX_FIELD_EQ(inName,"hitTesting") ) { outValue = ( hitTesting ); return true; }
		if (HX_FIELD_EQ(inName,"worldAlpha") ) { outValue = ( worldAlpha ); return true; }
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { outValue = ( fillPattern ); return true; }
		if (HX_FIELD_EQ(inName,"tempMatrix3") ) { outValue = ( tempMatrix3 ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { outValue = ( bitmapRepeat ); return true; }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { outValue = ( fillCommands ); return true; }
		if (HX_FIELD_EQ(inName,"normalizeUVT") ) { outValue = normalizeUVT_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"playCommands") ) { outValue = playCommands_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { outValue = ( pendingMatrix ); return true; }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { outValue = ( strokePattern ); return true; }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { outValue = drawRoundRect_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSmoothing") ) { outValue = ( allowSmoothing ); return true; }
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { outValue = ( strokeCommands ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"quadraticCurveTo") ) { outValue = quadraticCurveTo_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fillPatternMatrix") ) { outValue = ( fillPatternMatrix ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createImagePattern") ) { outValue = createImagePattern_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { outValue = ( inversePendingMatrix ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createGradientPattern") ) { outValue = createGradientPattern_dyn(); return true; }
	}
	return false;
}

bool CairoGraphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { SIN45=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { TAN22=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=ioValue.Cast<  ::lime::graphics::cairo::Cairo >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=ioValue.Cast<  ::openfl::geom::Rectangle >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { hasFill=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=ioValue.Cast<  ::openfl::display::Graphics >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { hasStroke=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { bitmapFill=ioValue.Cast<  ::openfl::display::BitmapData >(); return true; }
		if (HX_FIELD_EQ(inName,"hitTesting") ) { hitTesting=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"worldAlpha") ) { worldAlpha=ioValue.Cast< Float >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { fillPattern=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"tempMatrix3") ) { tempMatrix3=ioValue.Cast<  ::lime::utils::ArrayBufferView >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { bitmapRepeat=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { fillCommands=ioValue.Cast<  ::openfl::display::_internal::DrawCommandBuffer >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { pendingMatrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { strokePattern=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSmoothing") ) { allowSmoothing=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { strokeCommands=ioValue.Cast<  ::openfl::display::_internal::DrawCommandBuffer >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fillPatternMatrix") ) { fillPatternMatrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { inversePendingMatrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CairoGraphics_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CairoGraphics_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &CairoGraphics_obj::SIN45,HX_("SIN45",79,16,be,fa)},
	{::hx::fsFloat,(void *) &CairoGraphics_obj::TAN22,HX_("TAN22",41,f4,da,88)},
	{::hx::fsBool,(void *) &CairoGraphics_obj::allowSmoothing,HX_("allowSmoothing",ab,b7,66,68)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(void *) &CairoGraphics_obj::bitmapFill,HX_("bitmapFill",12,2e,19,35)},
	{::hx::fsBool,(void *) &CairoGraphics_obj::bitmapRepeat,HX_("bitmapRepeat",aa,38,9c,11)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(void *) &CairoGraphics_obj::bounds,HX_("bounds",75,86,1d,66)},
	{::hx::fsObject /*  ::lime::graphics::cairo::Cairo */ ,(void *) &CairoGraphics_obj::cairo,HX_("cairo",88,30,19,41)},
	{::hx::fsObject /*  ::openfl::display::_internal::DrawCommandBuffer */ ,(void *) &CairoGraphics_obj::fillCommands,HX_("fillCommands",6b,f6,c9,c2)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &CairoGraphics_obj::fillPattern,HX_("fillPattern",0d,86,12,35)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(void *) &CairoGraphics_obj::fillPatternMatrix,HX_("fillPatternMatrix",2e,b8,ae,97)},
	{::hx::fsObject /*  ::openfl::display::Graphics */ ,(void *) &CairoGraphics_obj::graphics,HX_("graphics",cb,f8,67,12)},
	{::hx::fsBool,(void *) &CairoGraphics_obj::hasFill,HX_("hasFill",fd,ee,ff,12)},
	{::hx::fsBool,(void *) &CairoGraphics_obj::hasStroke,HX_("hasStroke",b2,66,1d,52)},
	{::hx::fsBool,(void *) &CairoGraphics_obj::hitTesting,HX_("hitTesting",bd,65,48,19)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(void *) &CairoGraphics_obj::inversePendingMatrix,HX_("inversePendingMatrix",28,14,8c,bb)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(void *) &CairoGraphics_obj::pendingMatrix,HX_("pendingMatrix",f8,9d,96,b5)},
	{::hx::fsObject /*  ::openfl::display::_internal::DrawCommandBuffer */ ,(void *) &CairoGraphics_obj::strokeCommands,HX_("strokeCommands",a0,98,2a,67)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &CairoGraphics_obj::strokePattern,HX_("strokePattern",78,e1,21,7e)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(void *) &CairoGraphics_obj::tempMatrix3,HX_("tempMatrix3",1e,f2,bd,79)},
	{::hx::fsFloat,(void *) &CairoGraphics_obj::worldAlpha,HX_("worldAlpha",ac,57,43,8d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CairoGraphics_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::allowSmoothing,"allowSmoothing");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hitTesting,"hitTesting");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::tempMatrix3,"tempMatrix3");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::worldAlpha,"worldAlpha");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CairoGraphics_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::allowSmoothing,"allowSmoothing");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hitTesting,"hitTesting");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::tempMatrix3,"tempMatrix3");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::worldAlpha,"worldAlpha");
};

#endif

::hx::Class CairoGraphics_obj::__mClass;

static ::String CairoGraphics_obj_sStaticFields[] = {
	HX_("SIN45",79,16,be,fa),
	HX_("TAN22",41,f4,da,88),
	HX_("allowSmoothing",ab,b7,66,68),
	HX_("bitmapFill",12,2e,19,35),
	HX_("bitmapRepeat",aa,38,9c,11),
	HX_("bounds",75,86,1d,66),
	HX_("cairo",88,30,19,41),
	HX_("fillCommands",6b,f6,c9,c2),
	HX_("fillPattern",0d,86,12,35),
	HX_("fillPatternMatrix",2e,b8,ae,97),
	HX_("graphics",cb,f8,67,12),
	HX_("hasFill",fd,ee,ff,12),
	HX_("hasStroke",b2,66,1d,52),
	HX_("hitTesting",bd,65,48,19),
	HX_("inversePendingMatrix",28,14,8c,bb),
	HX_("pendingMatrix",f8,9d,96,b5),
	HX_("strokeCommands",a0,98,2a,67),
	HX_("strokePattern",78,e1,21,7e),
	HX_("tempMatrix3",1e,f2,bd,79),
	HX_("worldAlpha",ac,57,43,8d),
	HX_("closePath",7d,65,20,14),
	HX_("createGradientPattern",a4,ee,44,f6),
	HX_("createImagePattern",51,bd,5d,fb),
	HX_("drawRoundRect",ee,c3,aa,e2),
	HX_("endFill",fe,87,e0,25),
	HX_("endStroke",f3,01,17,51),
	HX_("hitTest",45,60,7f,e2),
	HX_("isCCW",0d,84,49,c1),
	HX_("normalizeUVT",66,09,2f,47),
	HX_("playCommands",dc,ae,ee,49),
	HX_("quadraticCurveTo",12,48,c3,82),
	HX_("render",56,6b,29,05),
	HX_("renderMask",62,3b,60,e5),
	::String(null())
};

void CairoGraphics_obj::__register()
{
	CairoGraphics_obj _hx_dummy;
	CairoGraphics_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CairoGraphics",f7,a0,7f,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoGraphics_obj::__GetStatic;
	__mClass->mSetStaticField = &CairoGraphics_obj::__SetStatic;
	__mClass->mMarkFunc = CairoGraphics_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoGraphics_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoGraphics_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CairoGraphics_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoGraphics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoGraphics_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CairoGraphics_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_37_boot)
HXDLIN(  37)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_40_boot)
HXDLIN(  40)		SIN45 = ((Float)0.70710678118654752440084436210485);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_41_boot)
HXDLIN(  41)		TAN22 = ((Float)0.4142135623730950488016887242097);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_47_boot)
HXDLIN(  47)		fillCommands =  ::openfl::display::_internal::DrawCommandBuffer_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_56_boot)
HXDLIN(  56)		strokeCommands =  ::openfl::display::_internal::DrawCommandBuffer_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_58_boot)
HXDLIN(  58)		tempMatrix3 = ::lime::math::_Matrix3::Matrix3_Impl__obj::_new(null(),null(),null(),null(),null(),null());
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
