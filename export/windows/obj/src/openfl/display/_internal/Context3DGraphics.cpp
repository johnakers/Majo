#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
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
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoGraphics
#include <openfl/display/_internal/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DBuffer
#include <openfl/display/_internal/Context3DBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DElementType
#include <openfl/display/_internal/Context3DElementType.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DGraphics
#include <openfl/display/_internal/Context3DGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DMaskShader
#include <openfl/display/_internal/Context3DMaskShader.h>
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
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_42_buildBuffer,"openfl.display._internal.Context3DGraphics","buildBuffer",0x4d7a46af,"openfl.display._internal.Context3DGraphics.buildBuffer","openfl/display/_internal/Context3DGraphics.hx",42,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_383_isCompatible,"openfl.display._internal.Context3DGraphics","isCompatible",0xc3dcc4dd,"openfl.display._internal.Context3DGraphics.isCompatible","openfl/display/_internal/Context3DGraphics.hx",383,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_476_render,"openfl.display._internal.Context3DGraphics","render",0x6cd95315,"openfl.display._internal.Context3DGraphics.render","openfl/display/_internal/Context3DGraphics.hx",476,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_853_renderMask,"openfl.display._internal.Context3DGraphics","renderMask",0xda186ea1,"openfl.display._internal.Context3DGraphics.renderMask","openfl/display/_internal/Context3DGraphics.hx",853,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_862_resizeIndexBuffer,"openfl.display._internal.Context3DGraphics","resizeIndexBuffer",0x673d02bf,"openfl.display._internal.Context3DGraphics.resizeIndexBuffer","openfl/display/_internal/Context3DGraphics.hx",862,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_910_resizeVertexBuffer,"openfl.display._internal.Context3DGraphics","resizeVertexBuffer",0x62dc7dd7,"openfl.display._internal.Context3DGraphics.resizeVertexBuffer","openfl/display/_internal/Context3DGraphics.hx",910,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_35_boot,"openfl.display._internal.Context3DGraphics","boot",0x906dae31,"openfl.display._internal.Context3DGraphics.boot","openfl/display/_internal/Context3DGraphics.hx",35,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_37_boot,"openfl.display._internal.Context3DGraphics","boot",0x906dae31,"openfl.display._internal.Context3DGraphics.boot","openfl/display/_internal/Context3DGraphics.hx",37,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_39_boot,"openfl.display._internal.Context3DGraphics","boot",0x906dae31,"openfl.display._internal.Context3DGraphics.boot","openfl/display/_internal/Context3DGraphics.hx",39,0x8e8e2a52)
namespace openfl{
namespace display{
namespace _internal{

void Context3DGraphics_obj::__construct() { }

Dynamic Context3DGraphics_obj::__CreateEmpty() { return new Context3DGraphics_obj; }

void *Context3DGraphics_obj::_hx_vtable = 0;

Dynamic Context3DGraphics_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DGraphics_obj > _hx_result = new Context3DGraphics_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DGraphics_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2cec42c1;
}

 ::openfl::display::BitmapData Context3DGraphics_obj::blankBitmapData;

bool Context3DGraphics_obj::maskRender;

 ::openfl::geom::ColorTransform Context3DGraphics_obj::tempColorTransform;

void Context3DGraphics_obj::buildBuffer( ::openfl::display::Graphics graphics, ::openfl::display::OpenGLRenderer renderer){
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_42_buildBuffer)
HXLINE(  43)		int quadBufferPosition = 0;
HXLINE(  44)		int triangleIndexBufferPosition = 0;
HXLINE(  45)		int vertexBufferPosition = 0;
HXLINE(  46)		int vertexBufferPositionUVT = 0;
HXLINE(  48)		 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE(  50)		 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXLINE(  52)		 ::openfl::geom::Rectangle tileRect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(  53)		 ::openfl::geom::Matrix tileTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(  55)		 ::openfl::display::BitmapData bitmap = null();
HXLINE(  57)		{
HXLINE(  57)			int _g = 0;
HXDLIN(  57)			::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN(  57)			while((_g < _g1->length)){
HXLINE(  57)				 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN(  57)				_g = (_g + 1);
HXLINE(  59)				switch((int)(type->_hx_getIndex())){
            					case (int)0: {
HXLINE(  62)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->oPos = (data1->oPos + 2);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  62)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->iPos = (data1->iPos + 1);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  62)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->oPos = (data1->oPos + 4);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  62)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  62)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  62)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->fPos = (data1->fPos + 5);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  62)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->oPos = (data1->oPos + 2);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  62)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->oPos = (data1->oPos + 4);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  62)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  62)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  62)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->oPos = (data1->oPos + 4);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  62)								data2->iPos = (data2->iPos + 1);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  62)								data3->fPos = (data3->fPos + 2);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  62)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  62)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN(  62)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  62)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  63)						bitmap = ( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) );
            					}
            					break;
            					case (int)1: {
HXLINE(  66)						bitmap = null();
HXLINE(  67)						{
HXLINE(  67)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->oPos = (data1->oPos + 2);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  67)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->iPos = (data1->iPos + 1);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  67)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->oPos = (data1->oPos + 4);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  67)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  67)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  67)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->fPos = (data1->fPos + 5);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  67)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->oPos = (data1->oPos + 2);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  67)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->oPos = (data1->oPos + 4);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  67)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  67)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  67)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->oPos = (data1->oPos + 4);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  67)									data2->iPos = (data2->iPos + 1);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  67)									data3->fPos = (data3->fPos + 2);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  67)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(  67)							data->prev = type;
            						}
            					}
            					break;
            					case (int)3: {
HXLINE(  70)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->oPos = (data1->oPos + 2);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  70)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->iPos = (data1->iPos + 1);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  70)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->oPos = (data1->oPos + 4);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  70)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  70)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  70)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->fPos = (data1->fPos + 5);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  70)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->oPos = (data1->oPos + 2);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  70)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->oPos = (data1->oPos + 4);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  70)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  70)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  70)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->oPos = (data1->oPos + 4);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  70)								data2->iPos = (data2->iPos + 1);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  70)								data3->fPos = (data3->fPos + 2);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  70)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  70)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN(  70)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  70)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  71)						 ::openfl::display::_internal::ShaderBuffer shaderBuffer = ( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) );
HXLINE(  73)						bitmap = null();
HXLINE(  75)						if (::hx::IsNotNull( shaderBuffer )) {
HXLINE(  77)							int _g = 0;
HXDLIN(  77)							int _g1 = shaderBuffer->inputCount;
HXDLIN(  77)							while((_g < _g1)){
HXLINE(  77)								_g = (_g + 1);
HXDLIN(  77)								int i = (_g - 1);
HXLINE(  79)								if ((shaderBuffer->inputRefs->__get(i).StaticCast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >()->name == HX_("bitmap",ef,0f,0c,f1))) {
HXLINE(  81)									bitmap = shaderBuffer->inputs->__get(i).StaticCast<  ::openfl::display::BitmapData >();
HXLINE(  82)									goto _hx_goto_1;
            								}
            							}
            							_hx_goto_1:;
            						}
            					}
            					break;
            					case (int)8: {
HXLINE(  90)						if (::hx::IsNotNull( bitmap )) {
HXLINE(  92)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->oPos = (data1->oPos + 2);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  92)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->iPos = (data1->iPos + 1);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  92)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->oPos = (data1->oPos + 4);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  92)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  92)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  92)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->fPos = (data1->fPos + 5);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  92)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->oPos = (data1->oPos + 2);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  92)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->oPos = (data1->oPos + 4);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  92)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  92)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  92)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->oPos = (data1->oPos + 4);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  92)									data2->iPos = (data2->iPos + 1);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  92)									data3->fPos = (data3->fPos + 2);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  92)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(  92)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn();
HXDLIN(  92)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  92)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  93)							 ::openfl::_Vector::FloatVector rects = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE(  94)							 ::openfl::_Vector::IntVector indices = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE(  95)							 ::openfl::_Vector::FloatVector transforms = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE(  98)							::Array< Float > rects1;
HXDLIN(  98)							if (::hx::IsNull( rects )) {
HXLINE(  98)								rects1 = null();
            							}
            							else {
HXLINE(  98)								rects1 = ( (::Array< Float >)(rects->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            							}
HXLINE(  99)							::Array< int > indices1;
HXDLIN(  99)							if (::hx::IsNull( indices )) {
HXLINE(  99)								indices1 = null();
            							}
            							else {
HXLINE(  99)								indices1 = ( (::Array< int >)(indices->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            							}
HXLINE( 100)							::Array< Float > transforms1;
HXDLIN( 100)							if (::hx::IsNull( transforms )) {
HXLINE( 100)								transforms1 = null();
            							}
            							else {
HXLINE( 100)								transforms1 = ( (::Array< Float >)(transforms->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            							}
HXLINE( 103)							bool hasIndices = ::hx::IsNotNull( indices1 );
HXLINE( 104)							bool transformABCD = false;
HXDLIN( 104)							bool transformXY = false;
HXLINE( 106)							int length;
HXDLIN( 106)							if (hasIndices) {
HXLINE( 106)								length = indices1->length;
            							}
            							else {
HXLINE( 106)								length = ::Math_obj::floor((( (Float)(rects1->length) ) / ( (Float)(4) )));
            							}
HXLINE( 107)							if ((length == 0)) {
HXLINE( 107)								return;
            							}
HXLINE( 109)							if (::hx::IsNotNull( transforms1 )) {
HXLINE( 111)								if ((transforms1->length >= (length * 6))) {
HXLINE( 113)									transformABCD = true;
HXLINE( 114)									transformXY = true;
            								}
            								else {
HXLINE( 116)									if ((transforms1->length >= (length * 4))) {
HXLINE( 118)										transformABCD = true;
            									}
            									else {
HXLINE( 120)										if ((transforms1->length >= (length * 2))) {
HXLINE( 122)											transformXY = true;
            										}
            									}
            								}
            							}
HXLINE( 126)							int dataPerVertex = 4;
HXLINE( 127)							int stride = (dataPerVertex * 4);
HXLINE( 129)							if (::hx::IsNull( graphics->_hx___quadBuffer )) {
HXLINE( 131)								graphics->_hx___quadBuffer =  ::openfl::display::_internal::Context3DBuffer_obj::__alloc( HX_CTX ,context,::openfl::display::_internal::Context3DElementType_obj::QUADS_dyn(),length,dataPerVertex);
            							}
            							else {
HXLINE( 135)								graphics->_hx___quadBuffer->resize((quadBufferPosition + length),dataPerVertex);
            							}
HXLINE( 138)							int vertexOffset;
HXLINE( 141)							Float tileWidth;
HXLINE( 142)							Float tileHeight;
HXLINE( 143)							Float uvX;
HXLINE( 144)							Float uvY;
HXLINE( 145)							Float uvWidth;
HXLINE( 146)							Float uvHeight;
HXLINE( 147)							Float x;
HXLINE( 148)							Float y;
HXLINE( 149)							Float x2;
HXLINE( 150)							Float y2;
HXLINE( 151)							Float x3;
HXLINE( 152)							Float y3;
HXLINE( 153)							Float x4;
HXLINE( 154)							Float y4;
HXLINE( 155)							int ri;
HXLINE( 156)							int ti;
HXLINE( 158)							 ::lime::utils::ArrayBufferView vertexBufferData = graphics->_hx___quadBuffer->vertexBufferData;
HXLINE( 139)							int bitmapWidth = bitmap->width;
HXLINE( 140)							int bitmapHeight = bitmap->height;
HXLINE( 176)							{
HXLINE( 176)								int _g = 0;
HXDLIN( 176)								int _g1 = length;
HXDLIN( 176)								while((_g < _g1)){
HXLINE( 176)									_g = (_g + 1);
HXDLIN( 176)									int i = (_g - 1);
HXLINE( 178)									vertexOffset = ((quadBufferPosition + i) * stride);
HXLINE( 180)									if (hasIndices) {
HXLINE( 180)										ri = (indices1->__get(i) * 4);
            									}
            									else {
HXLINE( 180)										ri = (i * 4);
            									}
HXLINE( 181)									if ((ri < 0)) {
HXLINE( 181)										continue;
            									}
HXLINE( 182)									tileRect->setTo(rects1->__get(ri),rects1->__get((ri + 1)),rects1->__get((ri + 2)),rects1->__get((ri + 3)));
HXLINE( 184)									tileWidth = tileRect->width;
HXLINE( 185)									tileHeight = tileRect->height;
HXLINE( 187)									bool _hx_tmp;
HXDLIN( 187)									if (!((tileWidth <= 0))) {
HXLINE( 187)										_hx_tmp = (tileHeight <= 0);
            									}
            									else {
HXLINE( 187)										_hx_tmp = true;
            									}
HXDLIN( 187)									if (_hx_tmp) {
HXLINE( 189)										continue;
            									}
HXLINE( 192)									bool _hx_tmp1;
HXDLIN( 192)									if (transformABCD) {
HXLINE( 192)										_hx_tmp1 = transformXY;
            									}
            									else {
HXLINE( 192)										_hx_tmp1 = false;
            									}
HXDLIN( 192)									if (_hx_tmp1) {
HXLINE( 194)										ti = (i * 6);
HXLINE( 195)										tileTransform->setTo(transforms1->__get(ti),transforms1->__get((ti + 1)),transforms1->__get((ti + 2)),transforms1->__get((ti + 3)),transforms1->__get((ti + 4)),transforms1->__get((ti + 5)));
            									}
            									else {
HXLINE( 198)										if (transformABCD) {
HXLINE( 200)											ti = (i * 4);
HXLINE( 201)											tileTransform->setTo(transforms1->__get(ti),transforms1->__get((ti + 1)),transforms1->__get((ti + 2)),transforms1->__get((ti + 3)),tileRect->x,tileRect->y);
            										}
            										else {
HXLINE( 203)											if (transformXY) {
HXLINE( 205)												ti = (i * 2);
HXLINE( 206)												tileTransform->tx = transforms1->__get(ti);
HXLINE( 207)												tileTransform->ty = transforms1->__get((ti + 1));
            											}
            											else {
HXLINE( 211)												tileTransform->tx = tileRect->x;
HXLINE( 212)												tileTransform->ty = tileRect->y;
            											}
            										}
            									}
HXLINE( 215)									uvX = (tileRect->x / ( (Float)(bitmapWidth) ));
HXLINE( 216)									uvY = (tileRect->y / ( (Float)(bitmapHeight) ));
HXLINE( 217)									uvWidth = (tileRect->get_right() / ( (Float)(bitmapWidth) ));
HXLINE( 218)									uvHeight = (tileRect->get_bottom() / ( (Float)(bitmapHeight) ));
HXLINE( 220)									x = (((( (Float)(0) ) * tileTransform->a) + (( (Float)(0) ) * tileTransform->c)) + tileTransform->tx);
HXLINE( 221)									y = (((( (Float)(0) ) * tileTransform->b) + (( (Float)(0) ) * tileTransform->d)) + tileTransform->ty);
HXLINE( 222)									x2 = (((tileWidth * tileTransform->a) + (( (Float)(0) ) * tileTransform->c)) + tileTransform->tx);
HXLINE( 223)									y2 = (((tileWidth * tileTransform->b) + (( (Float)(0) ) * tileTransform->d)) + tileTransform->ty);
HXLINE( 224)									x3 = (((( (Float)(0) ) * tileTransform->a) + (tileHeight * tileTransform->c)) + tileTransform->tx);
HXLINE( 225)									y3 = (((( (Float)(0) ) * tileTransform->b) + (tileHeight * tileTransform->d)) + tileTransform->ty);
HXLINE( 226)									x4 = (((tileWidth * tileTransform->a) + (tileHeight * tileTransform->c)) + tileTransform->tx);
HXLINE( 227)									y4 = (((tileWidth * tileTransform->b) + (tileHeight * tileTransform->d)) + tileTransform->ty);
HXLINE( 229)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (vertexOffset * 4)),x);
HXLINE( 230)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + 1) * 4)),y);
HXLINE( 231)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + 2) * 4)),uvX);
HXLINE( 232)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + 3) * 4)),uvY);
HXLINE( 234)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + dataPerVertex) * 4)),x2);
HXLINE( 235)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + dataPerVertex) + 1) * 4)),y2);
HXLINE( 236)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + dataPerVertex) + 2) * 4)),uvWidth);
HXLINE( 237)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + dataPerVertex) + 3) * 4)),uvY);
HXLINE( 239)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + (dataPerVertex * 2)) * 4)),x3);
HXLINE( 240)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 2)) + 1) * 4)),y3);
HXLINE( 241)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 2)) + 2) * 4)),uvX);
HXLINE( 242)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 2)) + 3) * 4)),uvHeight);
HXLINE( 244)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + (dataPerVertex * 3)) * 4)),x4);
HXLINE( 245)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 3)) + 1) * 4)),y4);
HXLINE( 246)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 3)) + 2) * 4)),uvWidth);
HXLINE( 247)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 3)) + 3) * 4)),uvHeight);
            								}
            							}
HXLINE( 250)							quadBufferPosition = (quadBufferPosition + length);
            						}
            					}
            					break;
            					case (int)12: {
HXLINE( 254)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 254)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 254)								data1->oPos = (data1->oPos + 2);
HXDLIN( 254)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 254)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 254)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 254)								data1->iPos = (data1->iPos + 1);
HXDLIN( 254)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 254)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 254)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 254)								data1->oPos = (data1->oPos + 4);
HXDLIN( 254)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 254)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 254)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 254)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 254)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 254)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 254)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 254)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 254)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 254)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 254)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 254)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 254)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 254)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 254)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 254)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 254)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 254)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 254)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 254)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 254)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 254)								data1->fPos = (data1->fPos + 5);
HXDLIN( 254)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 254)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 254)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 254)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 254)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 254)								data1->oPos = (data1->oPos + 2);
HXDLIN( 254)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 254)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 254)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 254)								data1->oPos = (data1->oPos + 4);
HXDLIN( 254)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 254)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 254)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 254)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 254)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 254)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 254)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 254)								data1->oPos = (data1->oPos + 4);
HXDLIN( 254)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 254)								data2->iPos = (data2->iPos + 1);
HXDLIN( 254)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 254)								data3->fPos = (data3->fPos + 2);
HXDLIN( 254)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 254)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 254)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 254)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 254)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 254)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 254)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 254)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 254)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 254)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 254)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn();
HXDLIN( 254)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 254)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 255)						 ::openfl::_Vector::FloatVector vertices = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE( 256)						 ::openfl::_Vector::IntVector indices = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE( 257)						 ::openfl::_Vector::FloatVector uvtData = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE( 258)						 ::Dynamic culling = c->buffer->o->__get((c->oPos + 3));
HXLINE( 260)						bool hasIndices = ::hx::IsNotNull( indices );
HXLINE( 261)						int numVertices = ::Math_obj::floor((( (Float)(vertices->get_length()) ) / ( (Float)(2) )));
HXLINE( 262)						int length;
HXDLIN( 262)						if (hasIndices) {
HXLINE( 262)							length = indices->get_length();
            						}
            						else {
HXLINE( 262)							length = numVertices;
            						}
HXLINE( 264)						bool hasUVData = ::hx::IsNotNull( uvtData );
HXLINE( 265)						bool hasUVTData;
HXDLIN( 265)						if (hasUVData) {
HXLINE( 265)							hasUVTData = (uvtData->get_length() >= (numVertices * 3));
            						}
            						else {
HXLINE( 265)							hasUVTData = false;
            						}
HXLINE( 266)						int vertLength;
HXDLIN( 266)						if (hasUVTData) {
HXLINE( 266)							vertLength = 4;
            						}
            						else {
HXLINE( 266)							vertLength = 2;
            						}
HXLINE( 267)						int uvStride;
HXDLIN( 267)						if (hasUVTData) {
HXLINE( 267)							uvStride = 3;
            						}
            						else {
HXLINE( 267)							uvStride = 2;
            						}
HXLINE( 269)						int dataPerVertex = (vertLength + 2);
HXLINE( 270)						int vertexOffset;
HXDLIN( 270)						if (hasUVTData) {
HXLINE( 270)							vertexOffset = vertexBufferPositionUVT;
            						}
            						else {
HXLINE( 270)							vertexOffset = vertexBufferPosition;
            						}
HXLINE( 275)						::openfl::display::_internal::Context3DGraphics_obj::resizeVertexBuffer(graphics,hasUVTData,(vertexOffset + (length * dataPerVertex)));
HXLINE( 278)						 ::lime::utils::ArrayBufferView vertexBufferData;
HXDLIN( 278)						if (hasUVTData) {
HXLINE( 278)							vertexBufferData = graphics->_hx___vertexBufferDataUVT;
            						}
            						else {
HXLINE( 278)							vertexBufferData = graphics->_hx___vertexBufferData;
            						}
HXLINE( 279)						int offset;
HXLINE( 280)						int vertOffset;
HXLINE( 281)						int uvOffset;
HXLINE( 282)						Float t;
HXLINE( 284)						{
HXLINE( 284)							int _g = 0;
HXDLIN( 284)							int _g1 = length;
HXDLIN( 284)							while((_g < _g1)){
HXLINE( 284)								_g = (_g + 1);
HXDLIN( 284)								int i = (_g - 1);
HXLINE( 286)								offset = (vertexOffset + (i * dataPerVertex));
HXLINE( 287)								if (hasIndices) {
HXLINE( 287)									vertOffset = (indices->get(i) * 2);
            								}
            								else {
HXLINE( 287)									vertOffset = (i * 2);
            								}
HXLINE( 288)								if (hasIndices) {
HXLINE( 288)									uvOffset = (indices->get(i) * uvStride);
            								}
            								else {
HXLINE( 288)									uvOffset = (i * uvStride);
            								}
HXLINE( 292)								if (hasUVTData) {
HXLINE( 294)									t = uvtData->get((uvOffset + 2));
HXLINE( 296)									{
HXLINE( 296)										Float val = (vertices->get(vertOffset) / t);
HXDLIN( 296)										 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (offset * 4)),val);
            									}
HXLINE( 297)									{
HXLINE( 297)										Float val1 = (vertices->get((vertOffset + 1)) / t);
HXDLIN( 297)										 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((offset + 1) * 4)),val1);
            									}
HXLINE( 298)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((offset + 2) * 4)),0);
HXLINE( 299)									{
HXLINE( 299)										Float val2 = (( (Float)(1) ) / t);
HXDLIN( 299)										 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((offset + 3) * 4)),val2);
            									}
            								}
            								else {
HXLINE( 303)									{
HXLINE( 303)										Float val = vertices->get(vertOffset);
HXDLIN( 303)										 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (offset * 4)),val);
            									}
HXLINE( 304)									{
HXLINE( 304)										Float val1 = vertices->get((vertOffset + 1));
HXDLIN( 304)										 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((offset + 1) * 4)),val1);
            									}
            								}
HXLINE( 307)								{
HXLINE( 307)									Float val;
HXDLIN( 307)									if (hasUVData) {
HXLINE( 307)										val = uvtData->get(uvOffset);
            									}
            									else {
HXLINE( 307)										val = ( (Float)(0) );
            									}
HXDLIN( 307)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((offset + vertLength) * 4)),val);
            								}
HXLINE( 308)								{
HXLINE( 308)									Float val1;
HXDLIN( 308)									if (hasUVData) {
HXLINE( 308)										val1 = uvtData->get((uvOffset + 1));
            									}
            									else {
HXLINE( 308)										val1 = ( (Float)(0) );
            									}
HXDLIN( 308)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((offset + vertLength) + 1) * 4)),val1);
            								}
            							}
            						}
HXLINE( 312)						if (hasUVTData) {
HXLINE( 314)							vertexBufferPositionUVT = (vertexBufferPositionUVT + (length * dataPerVertex));
            						}
            						else {
HXLINE( 318)							vertexBufferPosition = (vertexBufferPosition + (length * dataPerVertex));
            						}
            					}
            					break;
            					case (int)13: {
HXLINE( 322)						bitmap = null();
            					}
            					break;
            					default:{
HXLINE( 325)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 325)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 325)								data1->oPos = (data1->oPos + 2);
HXDLIN( 325)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 325)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 325)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 325)								data1->iPos = (data1->iPos + 1);
HXDLIN( 325)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 325)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 325)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 325)								data1->oPos = (data1->oPos + 4);
HXDLIN( 325)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 325)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 325)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 325)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 325)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 325)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 325)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 325)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 325)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 325)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 325)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 325)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 325)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 325)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 325)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 325)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 325)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 325)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 325)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 325)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 325)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 325)								data1->fPos = (data1->fPos + 5);
HXDLIN( 325)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 325)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 325)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 325)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 325)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 325)								data1->oPos = (data1->oPos + 2);
HXDLIN( 325)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 325)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 325)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 325)								data1->oPos = (data1->oPos + 4);
HXDLIN( 325)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 325)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 325)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 325)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 325)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 325)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 325)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 325)								data1->oPos = (data1->oPos + 4);
HXDLIN( 325)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 325)								data2->iPos = (data2->iPos + 1);
HXDLIN( 325)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 325)								data3->fPos = (data3->fPos + 2);
HXDLIN( 325)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 325)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 325)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 325)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 325)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 325)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 325)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 325)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 325)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 325)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 325)						data->prev = type;
            					}
            				}
            			}
            		}
HXLINE( 331)		if ((quadBufferPosition > 0)) {
HXLINE( 333)			graphics->_hx___quadBuffer->flushVertexBufferData();
            		}
HXLINE( 336)		if ((triangleIndexBufferPosition > 0)) {
HXLINE( 338)			 ::openfl::display3D::IndexBuffer3D buffer = graphics->_hx___triangleIndexBuffer;
HXLINE( 340)			bool _hx_tmp;
HXDLIN( 340)			if (::hx::IsNotNull( buffer )) {
HXLINE( 340)				_hx_tmp = (triangleIndexBufferPosition > graphics->_hx___triangleIndexBufferCount);
            			}
            			else {
HXLINE( 340)				_hx_tmp = true;
            			}
HXDLIN( 340)			if (_hx_tmp) {
HXLINE( 342)				buffer = context->createIndexBuffer(triangleIndexBufferPosition,0);
HXLINE( 343)				graphics->_hx___triangleIndexBuffer = buffer;
HXLINE( 344)				graphics->_hx___triangleIndexBufferCount = triangleIndexBufferPosition;
            			}
HXLINE( 347)			buffer->uploadFromTypedArray(graphics->_hx___triangleIndexBufferData,null());
            		}
HXLINE( 350)		if ((vertexBufferPosition > 0)) {
HXLINE( 352)			 ::openfl::display3D::VertexBuffer3D buffer = graphics->_hx___vertexBuffer;
HXLINE( 354)			bool _hx_tmp;
HXDLIN( 354)			if (::hx::IsNotNull( buffer )) {
HXLINE( 354)				_hx_tmp = (vertexBufferPosition > graphics->_hx___vertexBufferCount);
            			}
            			else {
HXLINE( 354)				_hx_tmp = true;
            			}
HXDLIN( 354)			if (_hx_tmp) {
HXLINE( 356)				buffer = context->createVertexBuffer(vertexBufferPosition,4,0);
HXLINE( 357)				graphics->_hx___vertexBuffer = buffer;
HXLINE( 358)				graphics->_hx___vertexBufferCount = vertexBufferPosition;
            			}
HXLINE( 361)			buffer->uploadFromTypedArray(graphics->_hx___vertexBufferData,null());
            		}
HXLINE( 364)		if ((vertexBufferPositionUVT > 0)) {
HXLINE( 366)			 ::openfl::display3D::VertexBuffer3D buffer = graphics->_hx___vertexBufferUVT;
HXLINE( 368)			bool _hx_tmp;
HXDLIN( 368)			if (::hx::IsNotNull( buffer )) {
HXLINE( 368)				_hx_tmp = (vertexBufferPositionUVT > graphics->_hx___vertexBufferCountUVT);
            			}
            			else {
HXLINE( 368)				_hx_tmp = true;
            			}
HXDLIN( 368)			if (_hx_tmp) {
HXLINE( 370)				buffer = context->createVertexBuffer(vertexBufferPositionUVT,6,0);
HXLINE( 371)				graphics->_hx___vertexBufferUVT = buffer;
HXLINE( 372)				graphics->_hx___vertexBufferCountUVT = vertexBufferPositionUVT;
            			}
HXLINE( 375)			buffer->uploadFromTypedArray(graphics->_hx___vertexBufferDataUVT,null());
            		}
HXLINE( 378)		::openfl::geom::Rectangle_obj::_hx___pool->release(tileRect);
HXLINE( 379)		::openfl::geom::Matrix_obj::_hx___pool->release(tileTransform);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DGraphics_obj,buildBuffer,(void))

bool Context3DGraphics_obj::isCompatible( ::openfl::display::Graphics graphics){
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_383_isCompatible)
HXLINE( 390)		if (::hx::IsNotNull( graphics->_hx___owner->_hx___worldScale9Grid )) {
HXLINE( 392)			return false;
            		}
HXLINE( 395)		 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE( 396)		bool hasColorFill = false;
HXDLIN( 396)		bool hasBitmapFill = false;
HXDLIN( 396)		bool hasShaderFill = false;
HXLINE( 398)		{
HXLINE( 398)			int _g = 0;
HXDLIN( 398)			::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN( 398)			while((_g < _g1->length)){
HXLINE( 398)				 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN( 398)				_g = (_g + 1);
HXLINE( 400)				switch((int)(type->_hx_getIndex())){
            					case (int)0: {
HXLINE( 403)						hasBitmapFill = true;
HXLINE( 404)						hasColorFill = false;
HXLINE( 405)						hasShaderFill = false;
HXLINE( 406)						{
HXLINE( 406)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->oPos = (data1->oPos + 2);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 406)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->iPos = (data1->iPos + 1);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 406)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->oPos = (data1->oPos + 4);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 406)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 406)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 406)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->fPos = (data1->fPos + 5);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 406)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->oPos = (data1->oPos + 2);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 406)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->oPos = (data1->oPos + 4);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 406)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 406)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 406)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->oPos = (data1->oPos + 4);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 406)									data2->iPos = (data2->iPos + 1);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 406)									data3->fPos = (data3->fPos + 2);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 406)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 406)							data->prev = type;
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 409)						hasBitmapFill = false;
HXLINE( 410)						hasColorFill = true;
HXLINE( 411)						hasShaderFill = false;
HXLINE( 412)						{
HXLINE( 412)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 412)									data1->oPos = (data1->oPos + 2);
HXDLIN( 412)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 412)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 412)									data1->iPos = (data1->iPos + 1);
HXDLIN( 412)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 412)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 412)									data1->oPos = (data1->oPos + 4);
HXDLIN( 412)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 412)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 412)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 412)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 412)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 412)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 412)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 412)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 412)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 412)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 412)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 412)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 412)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 412)									data1->fPos = (data1->fPos + 5);
HXDLIN( 412)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 412)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 412)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 412)									data1->oPos = (data1->oPos + 2);
HXDLIN( 412)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 412)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 412)									data1->oPos = (data1->oPos + 4);
HXDLIN( 412)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 412)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 412)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 412)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 412)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 412)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 412)									data1->oPos = (data1->oPos + 4);
HXDLIN( 412)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 412)									data2->iPos = (data2->iPos + 1);
HXDLIN( 412)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 412)									data3->fPos = (data3->fPos + 2);
HXDLIN( 412)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 412)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 412)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 412)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 412)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 412)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 412)							data->prev = type;
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 415)						hasBitmapFill = false;
HXLINE( 416)						hasColorFill = false;
HXLINE( 417)						hasShaderFill = true;
HXLINE( 418)						{
HXLINE( 418)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 418)									data1->oPos = (data1->oPos + 2);
HXDLIN( 418)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 418)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 418)									data1->iPos = (data1->iPos + 1);
HXDLIN( 418)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 418)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 418)									data1->oPos = (data1->oPos + 4);
HXDLIN( 418)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 418)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 418)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 418)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 418)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 418)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 418)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 418)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 418)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 418)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 418)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 418)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 418)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 418)									data1->fPos = (data1->fPos + 5);
HXDLIN( 418)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 418)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 418)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 418)									data1->oPos = (data1->oPos + 2);
HXDLIN( 418)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 418)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 418)									data1->oPos = (data1->oPos + 4);
HXDLIN( 418)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 418)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 418)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 418)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 418)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 418)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 418)									data1->oPos = (data1->oPos + 4);
HXDLIN( 418)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 418)									data2->iPos = (data2->iPos + 1);
HXDLIN( 418)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 418)									data3->fPos = (data3->fPos + 2);
HXDLIN( 418)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 418)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 418)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 418)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 418)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 418)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 418)							data->prev = type;
            						}
            					}
            					break;
            					case (int)8: {
HXLINE( 421)						bool _hx_tmp;
HXDLIN( 421)						if (!(hasBitmapFill)) {
HXLINE( 421)							_hx_tmp = hasShaderFill;
            						}
            						else {
HXLINE( 421)							_hx_tmp = true;
            						}
HXDLIN( 421)						if (_hx_tmp) {
HXLINE( 423)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 423)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 423)									data1->oPos = (data1->oPos + 2);
HXDLIN( 423)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 423)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 423)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 423)									data1->iPos = (data1->iPos + 1);
HXDLIN( 423)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 423)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 423)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 423)									data1->oPos = (data1->oPos + 4);
HXDLIN( 423)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 423)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 423)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 423)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 423)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 423)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 423)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 423)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 423)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 423)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 423)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 423)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 423)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 423)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 423)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 423)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 423)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 423)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 423)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 423)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 423)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 423)									data1->fPos = (data1->fPos + 5);
HXDLIN( 423)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 423)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 423)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 423)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 423)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 423)									data1->oPos = (data1->oPos + 2);
HXDLIN( 423)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 423)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 423)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 423)									data1->oPos = (data1->oPos + 4);
HXDLIN( 423)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 423)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 423)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 423)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 423)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 423)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 423)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 423)									data1->oPos = (data1->oPos + 4);
HXDLIN( 423)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 423)									data2->iPos = (data2->iPos + 1);
HXDLIN( 423)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 423)									data3->fPos = (data3->fPos + 2);
HXDLIN( 423)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 423)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 423)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 423)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 423)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 423)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 423)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 423)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 423)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 423)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 423)							data->prev = type;
            						}
            						else {
HXLINE( 427)							data->destroy();
HXLINE( 428)							return false;
            						}
            					}
            					break;
            					case (int)9: {
HXLINE( 432)						if (hasColorFill) {
HXLINE( 434)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 434)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 434)									data1->oPos = (data1->oPos + 2);
HXDLIN( 434)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 434)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 434)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 434)									data1->iPos = (data1->iPos + 1);
HXDLIN( 434)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 434)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 434)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 434)									data1->oPos = (data1->oPos + 4);
HXDLIN( 434)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 434)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 434)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 434)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 434)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 434)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 434)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 434)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 434)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 434)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 434)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 434)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 434)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 434)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 434)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 434)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 434)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 434)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 434)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 434)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 434)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 434)									data1->fPos = (data1->fPos + 5);
HXDLIN( 434)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 434)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 434)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 434)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 434)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 434)									data1->oPos = (data1->oPos + 2);
HXDLIN( 434)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 434)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 434)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 434)									data1->oPos = (data1->oPos + 4);
HXDLIN( 434)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 434)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 434)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 434)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 434)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 434)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 434)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 434)									data1->oPos = (data1->oPos + 4);
HXDLIN( 434)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 434)									data2->iPos = (data2->iPos + 1);
HXDLIN( 434)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 434)									data3->fPos = (data3->fPos + 2);
HXDLIN( 434)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 434)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 434)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 434)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 434)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 434)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 434)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 434)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 434)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 434)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 434)							data->prev = type;
            						}
            						else {
HXLINE( 438)							data->destroy();
HXLINE( 439)							return false;
            						}
            					}
            					break;
            					case (int)12: {
HXLINE( 443)						bool _hx_tmp;
HXDLIN( 443)						if (!(hasBitmapFill)) {
HXLINE( 443)							_hx_tmp = hasShaderFill;
            						}
            						else {
HXLINE( 443)							_hx_tmp = true;
            						}
HXDLIN( 443)						if (_hx_tmp) {
HXLINE( 445)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->oPos = (data1->oPos + 2);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 445)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->iPos = (data1->iPos + 1);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 445)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->oPos = (data1->oPos + 4);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 445)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 445)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 445)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->fPos = (data1->fPos + 5);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 445)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->oPos = (data1->oPos + 2);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 445)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->oPos = (data1->oPos + 4);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 445)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 445)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 445)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->oPos = (data1->oPos + 4);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 445)									data2->iPos = (data2->iPos + 1);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 445)									data3->fPos = (data3->fPos + 2);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 445)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 445)							data->prev = type;
            						}
            						else {
HXLINE( 449)							data->destroy();
HXLINE( 450)							return false;
            						}
            					}
            					break;
            					case (int)13: {
HXLINE( 454)						hasBitmapFill = false;
HXLINE( 455)						hasColorFill = false;
HXLINE( 456)						hasShaderFill = false;
HXLINE( 457)						{
HXLINE( 457)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 457)									data1->oPos = (data1->oPos + 2);
HXDLIN( 457)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 457)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 457)									data1->iPos = (data1->iPos + 1);
HXDLIN( 457)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 457)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 457)									data1->oPos = (data1->oPos + 4);
HXDLIN( 457)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 457)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 457)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 457)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 457)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 457)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 457)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 457)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 457)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 457)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 457)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 457)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 457)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 457)									data1->fPos = (data1->fPos + 5);
HXDLIN( 457)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 457)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 457)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 457)									data1->oPos = (data1->oPos + 2);
HXDLIN( 457)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 457)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 457)									data1->oPos = (data1->oPos + 4);
HXDLIN( 457)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 457)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 457)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 457)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 457)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 457)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 457)									data1->oPos = (data1->oPos + 4);
HXDLIN( 457)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 457)									data2->iPos = (data2->iPos + 1);
HXDLIN( 457)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 457)									data3->fPos = (data3->fPos + 2);
HXDLIN( 457)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 457)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 457)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 457)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 457)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 457)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 457)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 457)							data->prev = type;
            						}
            					}
            					break;
            					case (int)18: {
HXLINE( 460)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 460)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 460)								data1->oPos = (data1->oPos + 2);
HXDLIN( 460)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 460)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 460)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 460)								data1->iPos = (data1->iPos + 1);
HXDLIN( 460)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 460)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 460)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 460)								data1->oPos = (data1->oPos + 4);
HXDLIN( 460)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 460)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 460)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 460)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 460)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 460)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 460)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 460)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 460)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 460)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 460)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 460)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 460)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 460)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 460)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 460)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 460)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 460)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 460)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 460)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 460)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 460)								data1->fPos = (data1->fPos + 5);
HXDLIN( 460)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 460)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 460)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 460)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 460)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 460)								data1->oPos = (data1->oPos + 2);
HXDLIN( 460)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 460)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 460)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 460)								data1->oPos = (data1->oPos + 4);
HXDLIN( 460)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 460)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 460)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 460)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 460)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 460)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 460)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 460)								data1->oPos = (data1->oPos + 4);
HXDLIN( 460)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 460)								data2->iPos = (data2->iPos + 1);
HXDLIN( 460)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 460)								data3->fPos = (data3->fPos + 2);
HXDLIN( 460)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 460)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 460)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 460)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 460)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 460)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 460)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 460)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 460)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 460)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 460)						data->prev = type;
            					}
            					break;
            					case (int)19: {
HXLINE( 463)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 463)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 463)								data1->oPos = (data1->oPos + 2);
HXDLIN( 463)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 463)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 463)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 463)								data1->iPos = (data1->iPos + 1);
HXDLIN( 463)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 463)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 463)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 463)								data1->oPos = (data1->oPos + 4);
HXDLIN( 463)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 463)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 463)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 463)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 463)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 463)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 463)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 463)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 463)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 463)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 463)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 463)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 463)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 463)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 463)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 463)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 463)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 463)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 463)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 463)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 463)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 463)								data1->fPos = (data1->fPos + 5);
HXDLIN( 463)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 463)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 463)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 463)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 463)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 463)								data1->oPos = (data1->oPos + 2);
HXDLIN( 463)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 463)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 463)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 463)								data1->oPos = (data1->oPos + 4);
HXDLIN( 463)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 463)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 463)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 463)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 463)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 463)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 463)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 463)								data1->oPos = (data1->oPos + 4);
HXDLIN( 463)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 463)								data2->iPos = (data2->iPos + 1);
HXDLIN( 463)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 463)								data3->fPos = (data3->fPos + 2);
HXDLIN( 463)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 463)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 463)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 463)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 463)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 463)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 463)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 463)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 463)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 463)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 463)						data->prev = type;
            					}
            					break;
            					default:{
HXLINE( 466)						data->destroy();
HXLINE( 467)						return false;
            					}
            				}
            			}
            		}
HXLINE( 471)		data->destroy();
HXLINE( 472)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DGraphics_obj,isCompatible,return )

void Context3DGraphics_obj::render( ::openfl::display::Graphics graphics, ::openfl::display::OpenGLRenderer renderer){
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_476_render)
HXLINE( 477)		bool _hx_tmp;
HXDLIN( 477)		if (graphics->_hx___visible) {
HXLINE( 477)			_hx_tmp = (graphics->_hx___commands->get_length() == 0);
            		}
            		else {
HXLINE( 477)			_hx_tmp = true;
            		}
HXDLIN( 477)		if (_hx_tmp) {
HXLINE( 477)			return;
            		}
HXLINE( 479)		bool _hx_tmp1;
HXDLIN( 479)		bool _hx_tmp2;
HXDLIN( 479)		if (::hx::IsNotNull( graphics->_hx___bitmap )) {
HXLINE( 479)			_hx_tmp2 = !(graphics->_hx___dirty);
            		}
            		else {
HXLINE( 479)			_hx_tmp2 = false;
            		}
HXDLIN( 479)		if (!(_hx_tmp2)) {
HXLINE( 479)			_hx_tmp1 = !(::openfl::display::_internal::Context3DGraphics_obj::isCompatible(graphics));
            		}
            		else {
HXLINE( 479)			_hx_tmp1 = true;
            		}
HXDLIN( 479)		if (_hx_tmp1) {
HXLINE( 495)			renderer->_hx___softwareRenderer->_hx___pixelRatio = renderer->_hx___pixelRatio;
HXLINE( 497)			 ::openfl::geom::Matrix cacheTransform = renderer->_hx___softwareRenderer->_hx___worldTransform;
HXLINE( 501)			if ((graphics->_hx___owner->_hx___drawableType == 7)) {
HXLINE( 503)				renderer->_hx___softwareRenderer->_hx___worldTransform = ::openfl::geom::Matrix_obj::_hx___identity;
            			}
            			else {
HXLINE( 507)				renderer->_hx___softwareRenderer->_hx___worldTransform = renderer->_hx___worldTransform;
            			}
HXLINE( 513)			::openfl::display::_internal::CairoGraphics_obj::render(graphics,( ( ::openfl::display::CairoRenderer)(renderer->_hx___softwareRenderer) ));
HXLINE( 516)			renderer->_hx___softwareRenderer->_hx___worldTransform = cacheTransform;
            		}
            		else {
HXLINE( 520)			graphics->_hx___bitmap = null();
HXLINE( 525)			Float pixelRatio = renderer->_hx___pixelRatio;
HXLINE( 528)			graphics->_hx___update(renderer->_hx___worldTransform,pixelRatio);
HXLINE( 530)			 ::openfl::geom::Rectangle bounds = graphics->_hx___bounds;
HXLINE( 532)			int width = graphics->_hx___width;
HXLINE( 533)			int height = graphics->_hx___height;
HXLINE( 535)			bool _hx_tmp;
HXDLIN( 535)			bool _hx_tmp1;
HXDLIN( 535)			if (::hx::IsNotNull( bounds )) {
HXLINE( 535)				_hx_tmp1 = (width >= 1);
            			}
            			else {
HXLINE( 535)				_hx_tmp1 = false;
            			}
HXDLIN( 535)			if (_hx_tmp1) {
HXLINE( 535)				_hx_tmp = (height >= 1);
            			}
            			else {
HXLINE( 535)				_hx_tmp = false;
            			}
HXDLIN( 535)			if (_hx_tmp) {
HXLINE( 537)				bool _hx_tmp;
HXDLIN( 537)				if (!(graphics->_hx___hardwareDirty)) {
HXLINE( 538)					bool _hx_tmp1;
HXDLIN( 538)					if (::hx::IsNull( graphics->_hx___quadBuffer )) {
HXLINE( 538)						_hx_tmp1 = ::hx::IsNull( graphics->_hx___vertexBuffer );
            					}
            					else {
HXLINE( 538)						_hx_tmp1 = false;
            					}
HXDLIN( 538)					if (_hx_tmp1) {
HXLINE( 537)						_hx_tmp = ::hx::IsNull( graphics->_hx___vertexBufferUVT );
            					}
            					else {
HXLINE( 537)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 537)					_hx_tmp = true;
            				}
HXDLIN( 537)				if (_hx_tmp) {
HXLINE( 540)					::openfl::display::_internal::Context3DGraphics_obj::buildBuffer(graphics,renderer);
            				}
HXLINE( 543)				 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE( 545)				 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXLINE( 546)				 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = context->gl;
HXLINE( 548)				 ::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 550)				 ::openfl::display::_internal::ShaderBuffer shaderBuffer = null();
HXLINE( 551)				 ::openfl::display::BitmapData bitmap = null();
HXLINE( 552)				bool repeat = false;
HXLINE( 553)				bool smooth = false;
HXLINE( 554)				 ::Dynamic fill = null();
HXLINE( 556)				Float positionX = ((Float)0.0);
HXLINE( 557)				Float positionY = ((Float)0.0);
HXLINE( 559)				int quadBufferPosition = 0;
HXLINE( 560)				int shaderBufferOffset = 0;
HXLINE( 561)				int triangleIndexBufferPosition = 0;
HXLINE( 562)				int vertexBufferPosition = 0;
HXLINE( 563)				int vertexBufferPositionUVT = 0;
HXLINE( 565)				{
HXLINE( 565)					int _g = 0;
HXDLIN( 565)					::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN( 565)					while((_g < _g1->length)){
HXLINE( 565)						 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN( 565)						_g = (_g + 1);
HXLINE( 567)						switch((int)(type->_hx_getIndex())){
            							case (int)0: {
HXLINE( 570)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 570)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 570)										data1->oPos = (data1->oPos + 2);
HXDLIN( 570)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 570)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 570)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 570)										data1->iPos = (data1->iPos + 1);
HXDLIN( 570)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 570)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 570)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 570)										data1->oPos = (data1->oPos + 4);
HXDLIN( 570)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 570)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 570)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 570)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 570)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 570)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 570)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 570)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 570)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 570)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 570)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 570)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 570)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 570)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 570)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 570)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 570)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 570)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 570)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 570)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 570)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 570)										data1->fPos = (data1->fPos + 5);
HXDLIN( 570)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 570)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 570)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 570)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 570)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 570)										data1->oPos = (data1->oPos + 2);
HXDLIN( 570)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 570)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 570)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 570)										data1->oPos = (data1->oPos + 4);
HXDLIN( 570)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 570)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 570)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 570)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 570)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 570)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 570)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 570)										data1->oPos = (data1->oPos + 4);
HXDLIN( 570)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 570)										data2->iPos = (data2->iPos + 1);
HXDLIN( 570)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 570)										data3->fPos = (data3->fPos + 2);
HXDLIN( 570)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 570)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 570)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 570)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 570)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 570)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 570)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 570)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 570)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 570)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 570)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN( 570)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 570)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 571)								bitmap = ( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) );
HXLINE( 572)								repeat = c->buffer->b->__get(c->bPos);
HXLINE( 573)								smooth = c->buffer->b->__get((c->bPos + 1));
HXLINE( 574)								shaderBuffer = null();
HXLINE( 575)								fill = null();
            							}
            							break;
            							case (int)1: {
HXLINE( 578)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 578)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)										data1->oPos = (data1->oPos + 2);
HXDLIN( 578)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 578)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 578)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)										data1->iPos = (data1->iPos + 1);
HXDLIN( 578)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 578)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 578)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)										data1->oPos = (data1->oPos + 4);
HXDLIN( 578)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 578)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 578)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 578)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 578)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 578)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 578)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 578)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 578)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 578)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 578)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 578)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 578)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 578)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)										data1->fPos = (data1->fPos + 5);
HXDLIN( 578)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 578)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 578)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 578)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)										data1->oPos = (data1->oPos + 2);
HXDLIN( 578)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 578)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 578)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)										data1->oPos = (data1->oPos + 4);
HXDLIN( 578)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 578)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 578)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 578)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 578)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 578)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 578)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)										data1->oPos = (data1->oPos + 4);
HXDLIN( 578)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 578)										data2->iPos = (data2->iPos + 1);
HXDLIN( 578)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 578)										data3->fPos = (data3->fPos + 2);
HXDLIN( 578)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 578)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 578)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 578)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 578)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 578)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 578)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXDLIN( 578)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 578)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 579)								int color = ::Std_obj::_hx_int(( (Float)(c->buffer->i->__get(c->iPos)) ));
HXLINE( 580)								int alpha = ::Std_obj::_hx_int((c->buffer->f->__get(c->fPos) * ( (Float)(255) )));
HXLINE( 582)								fill = ((color & 16777215) | (alpha << 24));
HXLINE( 583)								shaderBuffer = null();
HXLINE( 584)								bitmap = null();
            							}
            							break;
            							case (int)3: {
HXLINE( 587)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 587)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 587)										data1->oPos = (data1->oPos + 2);
HXDLIN( 587)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 587)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 587)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 587)										data1->iPos = (data1->iPos + 1);
HXDLIN( 587)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 587)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 587)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 587)										data1->oPos = (data1->oPos + 4);
HXDLIN( 587)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 587)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 587)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 587)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 587)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 587)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 587)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 587)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 587)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 587)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 587)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 587)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 587)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 587)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 587)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 587)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 587)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 587)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 587)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 587)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 587)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 587)										data1->fPos = (data1->fPos + 5);
HXDLIN( 587)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 587)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 587)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 587)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 587)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 587)										data1->oPos = (data1->oPos + 2);
HXDLIN( 587)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 587)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 587)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 587)										data1->oPos = (data1->oPos + 4);
HXDLIN( 587)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 587)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 587)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 587)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 587)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 587)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 587)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 587)										data1->oPos = (data1->oPos + 4);
HXDLIN( 587)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 587)										data2->iPos = (data2->iPos + 1);
HXDLIN( 587)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 587)										data3->fPos = (data3->fPos + 2);
HXDLIN( 587)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 587)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 587)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 587)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 587)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 587)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 587)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 587)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 587)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 587)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 587)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN( 587)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 587)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 588)								shaderBuffer = ( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) );
HXLINE( 589)								shaderBufferOffset = 0;
HXLINE( 591)								bool _hx_tmp;
HXDLIN( 591)								bool _hx_tmp1;
HXDLIN( 591)								if (::hx::IsNotNull( shaderBuffer )) {
HXLINE( 591)									_hx_tmp1 = ::hx::IsNull( shaderBuffer->shader );
            								}
            								else {
HXLINE( 591)									_hx_tmp1 = true;
            								}
HXDLIN( 591)								if (!(_hx_tmp1)) {
HXLINE( 591)									_hx_tmp = ::hx::IsNull( shaderBuffer->shader->_hx___bitmap );
            								}
            								else {
HXLINE( 591)									_hx_tmp = true;
            								}
HXDLIN( 591)								if (_hx_tmp) {
HXLINE( 593)									bitmap = null();
            								}
            								else {
HXLINE( 597)									bitmap = shaderBuffer->shader->_hx___bitmap->input;
            								}
HXLINE( 600)								fill = null();
            							}
            							break;
            							case (int)8: {
HXLINE( 603)								if (::hx::IsNotNull( bitmap )) {
HXLINE( 605)									switch((int)(data->prev->_hx_getIndex())){
            										case (int)0: {
HXLINE( 605)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)											data1->oPos = (data1->oPos + 2);
HXDLIN( 605)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 605)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)1: {
HXLINE( 605)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)											data1->iPos = (data1->iPos + 1);
HXDLIN( 605)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 605)											data2->fPos = (data2->fPos + 1);
            										}
            										break;
            										case (int)2: {
HXLINE( 605)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)											data1->oPos = (data1->oPos + 4);
HXDLIN( 605)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 605)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 605)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 605)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 605)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 605)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)3: {
HXLINE( 605)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)4: {
HXLINE( 605)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)											data1->fPos = (data1->fPos + 6);
            										}
            										break;
            										case (int)5: {
HXLINE( 605)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)6: {
HXLINE( 605)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)											data1->fPos = (data1->fPos + 3);
            										}
            										break;
            										case (int)7: {
HXLINE( 605)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)8: {
HXLINE( 605)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)											data1->oPos = (data1->oPos + 3);
            										}
            										break;
            										case (int)9: {
HXLINE( 605)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)10: {
HXLINE( 605)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)											data1->fPos = (data1->fPos + 5);
HXDLIN( 605)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 605)											data2->oPos = (data2->oPos + 1);
            										}
            										break;
            										case (int)12: {
HXLINE( 605)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)											data1->oPos = (data1->oPos + 4);
            										}
            										break;
            										case (int)13: {
            										}
            										break;
            										case (int)14: {
HXLINE( 605)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)											data1->oPos = (data1->oPos + 2);
HXDLIN( 605)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 605)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)15: {
HXLINE( 605)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)											data1->oPos = (data1->oPos + 4);
HXDLIN( 605)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 605)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 605)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 605)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 605)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 605)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)16: {
HXLINE( 605)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)											data1->oPos = (data1->oPos + 4);
HXDLIN( 605)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 605)											data2->iPos = (data2->iPos + 1);
HXDLIN( 605)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 605)											data3->fPos = (data3->fPos + 2);
HXDLIN( 605)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 605)											data4->bPos = (data4->bPos + 1);
            										}
            										break;
            										case (int)17: {
HXLINE( 605)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)18: {
HXLINE( 605)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)19: {
HXLINE( 605)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)20: {
HXLINE( 605)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 605)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)21: case (int)22: {
            										}
            										break;
            										default:{
            										}
            									}
HXLINE( 605)									data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn();
HXDLIN( 605)									 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 605)									 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 606)									 ::openfl::_Vector::FloatVector rects = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE( 607)									 ::openfl::_Vector::IntVector indices = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE( 608)									 ::openfl::_Vector::FloatVector transforms = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE( 611)									::Array< Float > rects1;
HXDLIN( 611)									if (::hx::IsNull( rects )) {
HXLINE( 611)										rects1 = null();
            									}
            									else {
HXLINE( 611)										rects1 = ( (::Array< Float >)(rects->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            									}
HXLINE( 612)									::Array< int > indices1;
HXDLIN( 612)									if (::hx::IsNull( indices )) {
HXLINE( 612)										indices1 = null();
            									}
            									else {
HXLINE( 612)										indices1 = ( (::Array< int >)(indices->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            									}
HXLINE( 613)									::Array< Float > transforms1;
HXDLIN( 613)									if (::hx::IsNull( transforms )) {
HXLINE( 613)										transforms1 = null();
            									}
            									else {
HXLINE( 613)										transforms1 = ( (::Array< Float >)(transforms->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            									}
HXLINE( 616)									bool hasIndices = ::hx::IsNotNull( indices1 );
HXLINE( 617)									int length;
HXDLIN( 617)									if (hasIndices) {
HXLINE( 617)										length = indices1->length;
            									}
            									else {
HXLINE( 617)										length = ::Math_obj::floor((( (Float)(rects1->length) ) / ( (Float)(4) )));
            									}
HXLINE( 619)									::Array< Float > uMatrix = renderer->_hx___getMatrix(graphics->_hx___owner->_hx___renderTransform,1);
HXLINE( 620)									 ::openfl::display::Shader shader;
HXLINE( 622)									bool _hx_tmp;
HXDLIN( 622)									if (::hx::IsNotNull( shaderBuffer )) {
HXLINE( 622)										_hx_tmp = !(::openfl::display::_internal::Context3DGraphics_obj::maskRender);
            									}
            									else {
HXLINE( 622)										_hx_tmp = false;
            									}
HXDLIN( 622)									if (_hx_tmp) {
HXLINE( 624)										shader = renderer->_hx___initShaderBuffer(shaderBuffer);
HXLINE( 626)										renderer->_hx___setShaderBuffer(shaderBuffer);
HXLINE( 627)										renderer->applyMatrix(uMatrix);
HXLINE( 628)										renderer->applyBitmapData(bitmap,false,repeat);
HXLINE( 629)										renderer->applyAlpha(graphics->_hx___owner->_hx___worldAlpha);
HXLINE( 630)										renderer->applyColorTransform(graphics->_hx___owner->_hx___worldColorTransform);
            									}
            									else {
HXLINE( 635)										if (::openfl::display::_internal::Context3DGraphics_obj::maskRender) {
HXLINE( 635)											shader = renderer->_hx___maskShader;
            										}
            										else {
HXLINE( 635)											shader = renderer->_hx___initGraphicsShader(null());
            										}
HXLINE( 636)										renderer->setShader(shader);
HXLINE( 637)										renderer->applyMatrix(uMatrix);
HXLINE( 638)										renderer->applyBitmapData(bitmap,smooth,repeat);
HXLINE( 639)										renderer->applyAlpha(graphics->_hx___owner->_hx___worldAlpha);
HXLINE( 640)										renderer->applyColorTransform(graphics->_hx___owner->_hx___worldColorTransform);
HXLINE( 641)										renderer->updateShader();
            									}
HXLINE( 644)									int end = (quadBufferPosition + length);
HXLINE( 646)									while((quadBufferPosition < end)){
HXLINE( 648)										length = ::Std_obj::_hx_int(::Math_obj::min(( (Float)((end - quadBufferPosition)) ),( (Float)(context->_hx___quadIndexBufferElements) )));
HXLINE( 649)										if ((length <= 0)) {
HXLINE( 649)											goto _hx_goto_8;
            										}
HXLINE( 651)										bool _hx_tmp;
HXDLIN( 651)										if (::hx::IsNotNull( shaderBuffer )) {
HXLINE( 651)											_hx_tmp = !(::openfl::display::_internal::Context3DGraphics_obj::maskRender);
            										}
            										else {
HXLINE( 651)											_hx_tmp = false;
            										}
HXDLIN( 651)										if (_hx_tmp) {
HXLINE( 653)											renderer->_hx___updateShaderBuffer(shaderBufferOffset);
            										}
HXLINE( 656)										if (::hx::IsNotNull( shader->_hx___position )) {
HXLINE( 656)											context->setVertexBufferAt(( (int)(shader->_hx___position->index) ),graphics->_hx___quadBuffer->vertexBuffer,(quadBufferPosition * 16),2);
            										}
HXLINE( 658)										if (::hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE( 658)											context->setVertexBufferAt(( (int)(shader->_hx___textureCoord->index) ),graphics->_hx___quadBuffer->vertexBuffer,((quadBufferPosition * 16) + 2),2);
            										}
HXLINE( 661)										context->drawTriangles(context->_hx___quadIndexBuffer,0,(length * 2));
HXLINE( 663)										shaderBufferOffset = (shaderBufferOffset + (length * 4));
HXLINE( 664)										quadBufferPosition = (quadBufferPosition + length);
            									}
            									_hx_goto_8:;
HXLINE( 671)									renderer->_hx___clearShader();
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 675)								if (::hx::IsNotNull( fill )) {
HXLINE( 677)									switch((int)(data->prev->_hx_getIndex())){
            										case (int)0: {
HXLINE( 677)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 677)											data1->oPos = (data1->oPos + 2);
HXDLIN( 677)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 677)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)1: {
HXLINE( 677)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 677)											data1->iPos = (data1->iPos + 1);
HXDLIN( 677)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 677)											data2->fPos = (data2->fPos + 1);
            										}
            										break;
            										case (int)2: {
HXLINE( 677)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 677)											data1->oPos = (data1->oPos + 4);
HXDLIN( 677)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 677)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 677)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 677)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 677)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 677)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)3: {
HXLINE( 677)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 677)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)4: {
HXLINE( 677)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 677)											data1->fPos = (data1->fPos + 6);
            										}
            										break;
            										case (int)5: {
HXLINE( 677)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 677)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)6: {
HXLINE( 677)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 677)											data1->fPos = (data1->fPos + 3);
            										}
            										break;
            										case (int)7: {
HXLINE( 677)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 677)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)8: {
HXLINE( 677)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 677)											data1->oPos = (data1->oPos + 3);
            										}
            										break;
            										case (int)9: {
HXLINE( 677)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 677)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)10: {
HXLINE( 677)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 677)											data1->fPos = (data1->fPos + 5);
HXDLIN( 677)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 677)											data2->oPos = (data2->oPos + 1);
            										}
            										break;
            										case (int)12: {
HXLINE( 677)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 677)											data1->oPos = (data1->oPos + 4);
            										}
            										break;
            										case (int)13: {
            										}
            										break;
            										case (int)14: {
HXLINE( 677)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 677)											data1->oPos = (data1->oPos + 2);
HXDLIN( 677)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 677)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)15: {
HXLINE( 677)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 677)											data1->oPos = (data1->oPos + 4);
HXDLIN( 677)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 677)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 677)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 677)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 677)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 677)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)16: {
HXLINE( 677)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 677)											data1->oPos = (data1->oPos + 4);
HXDLIN( 677)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 677)											data2->iPos = (data2->iPos + 1);
HXDLIN( 677)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 677)											data3->fPos = (data3->fPos + 2);
HXDLIN( 677)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 677)											data4->bPos = (data4->bPos + 1);
            										}
            										break;
            										case (int)17: {
HXLINE( 677)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 677)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)18: {
HXLINE( 677)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 677)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)19: {
HXLINE( 677)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 677)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)20: {
HXLINE( 677)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 677)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)21: case (int)22: {
            										}
            										break;
            										default:{
            										}
            									}
HXLINE( 677)									data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN( 677)									 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 677)									 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 678)									Float x = c->buffer->f->__get(c->fPos);
HXLINE( 679)									Float y = c->buffer->f->__get((c->fPos + 1));
HXLINE( 680)									Float width = c->buffer->f->__get((c->fPos + 2));
HXLINE( 681)									Float height = c->buffer->f->__get((c->fPos + 3));
HXLINE( 684)									int color = ( (int)(fill) );
HXLINE( 685)									::openfl::display::_internal::Context3DGraphics_obj::tempColorTransform->redOffset = ( (Float)((::hx::UShr(color,16) & 255)) );
HXLINE( 686)									::openfl::display::_internal::Context3DGraphics_obj::tempColorTransform->greenOffset = ( (Float)((::hx::UShr(color,8) & 255)) );
HXLINE( 687)									::openfl::display::_internal::Context3DGraphics_obj::tempColorTransform->blueOffset = ( (Float)((color & 255)) );
HXLINE( 689)									::openfl::display::_internal::Context3DGraphics_obj::tempColorTransform->_hx___combine(graphics->_hx___owner->_hx___worldColorTransform);
HXLINE( 691)									matrix->identity();
HXLINE( 692)									matrix->scale(width,height);
HXLINE( 693)									matrix->tx = x;
HXLINE( 694)									matrix->ty = y;
HXLINE( 695)									matrix->concat(graphics->_hx___owner->_hx___renderTransform);
HXLINE( 697)									 ::openfl::display::Shader shader;
HXDLIN( 697)									if (::openfl::display::_internal::Context3DGraphics_obj::maskRender) {
HXLINE( 697)										shader = renderer->_hx___maskShader;
            									}
            									else {
HXLINE( 697)										shader = renderer->_hx___initGraphicsShader(null());
            									}
HXLINE( 698)									renderer->setShader(shader);
HXLINE( 699)									renderer->applyMatrix(renderer->_hx___getMatrix(matrix,1));
HXLINE( 700)									renderer->applyBitmapData(::openfl::display::_internal::Context3DGraphics_obj::blankBitmapData,true,repeat);
HXLINE( 702)									renderer->applyAlpha(((( (Float)((::hx::UShr(color,24) & 255)) ) / ( (Float)(255) )) * graphics->_hx___owner->_hx___worldAlpha));
HXLINE( 704)									renderer->applyColorTransform(::openfl::display::_internal::Context3DGraphics_obj::tempColorTransform);
HXLINE( 705)									renderer->updateShader();
HXLINE( 707)									 ::openfl::display3D::VertexBuffer3D vertexBuffer = ::openfl::display::_internal::Context3DGraphics_obj::blankBitmapData->getVertexBuffer(context,null(),null());
HXLINE( 708)									if (::hx::IsNotNull( shader->_hx___position )) {
HXLINE( 708)										context->setVertexBufferAt(( (int)(shader->_hx___position->index) ),vertexBuffer,0,3);
            									}
HXLINE( 709)									if (::hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE( 709)										context->setVertexBufferAt(( (int)(shader->_hx___textureCoord->index) ),vertexBuffer,3,2);
            									}
HXLINE( 710)									 ::openfl::display3D::IndexBuffer3D indexBuffer = ::openfl::display::_internal::Context3DGraphics_obj::blankBitmapData->getIndexBuffer(context,null());
HXLINE( 711)									context->drawTriangles(indexBuffer,null(),null());
HXLINE( 713)									shaderBufferOffset = (shaderBufferOffset + 4);
HXLINE( 719)									renderer->_hx___clearShader();
            								}
            							}
            							break;
            							case (int)12: {
HXLINE( 723)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 723)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)										data1->oPos = (data1->oPos + 2);
HXDLIN( 723)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 723)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 723)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)										data1->iPos = (data1->iPos + 1);
HXDLIN( 723)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 723)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 723)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)										data1->oPos = (data1->oPos + 4);
HXDLIN( 723)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 723)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 723)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 723)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 723)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 723)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 723)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 723)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 723)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 723)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 723)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 723)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 723)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 723)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)										data1->fPos = (data1->fPos + 5);
HXDLIN( 723)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 723)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 723)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 723)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)										data1->oPos = (data1->oPos + 2);
HXDLIN( 723)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 723)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 723)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)										data1->oPos = (data1->oPos + 4);
HXDLIN( 723)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 723)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 723)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 723)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 723)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 723)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 723)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)										data1->oPos = (data1->oPos + 4);
HXDLIN( 723)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 723)										data2->iPos = (data2->iPos + 1);
HXDLIN( 723)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 723)										data3->fPos = (data3->fPos + 2);
HXDLIN( 723)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 723)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 723)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 723)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 723)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 723)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 723)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn();
HXDLIN( 723)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 723)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 724)								 ::openfl::_Vector::FloatVector vertices = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE( 725)								 ::openfl::_Vector::IntVector indices = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE( 726)								 ::openfl::_Vector::FloatVector uvtData = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE( 727)								 ::Dynamic culling = c->buffer->o->__get((c->oPos + 3));
HXLINE( 729)								bool hasIndices = ::hx::IsNotNull( indices );
HXLINE( 730)								int numVertices = ::Math_obj::floor((( (Float)(vertices->get_length()) ) / ( (Float)(2) )));
HXLINE( 731)								int length;
HXDLIN( 731)								if (hasIndices) {
HXLINE( 731)									length = indices->get_length();
            								}
            								else {
HXLINE( 731)									length = numVertices;
            								}
HXLINE( 733)								bool hasUVData = ::hx::IsNotNull( uvtData );
HXLINE( 734)								bool hasUVTData;
HXDLIN( 734)								if (hasUVData) {
HXLINE( 734)									hasUVTData = (uvtData->get_length() >= (numVertices * 3));
            								}
            								else {
HXLINE( 734)									hasUVTData = false;
            								}
HXLINE( 735)								int vertLength;
HXDLIN( 735)								if (hasUVTData) {
HXLINE( 735)									vertLength = 4;
            								}
            								else {
HXLINE( 735)									vertLength = 2;
            								}
HXLINE( 736)								int uvStride;
HXDLIN( 736)								if (hasUVTData) {
HXLINE( 736)									uvStride = 3;
            								}
            								else {
HXLINE( 736)									uvStride = 2;
            								}
HXLINE( 738)								int dataPerVertex = (vertLength + 2);
HXLINE( 739)								 ::openfl::display3D::VertexBuffer3D vertexBuffer;
HXDLIN( 739)								if (hasUVTData) {
HXLINE( 739)									vertexBuffer = graphics->_hx___vertexBufferUVT;
            								}
            								else {
HXLINE( 739)									vertexBuffer = graphics->_hx___vertexBuffer;
            								}
HXLINE( 740)								int bufferPosition;
HXDLIN( 740)								if (hasUVTData) {
HXLINE( 740)									bufferPosition = vertexBufferPositionUVT;
            								}
            								else {
HXLINE( 740)									bufferPosition = vertexBufferPosition;
            								}
HXLINE( 742)								::Array< Float > uMatrix = renderer->_hx___getMatrix(graphics->_hx___owner->_hx___renderTransform,1);
HXLINE( 743)								 ::openfl::display::Shader shader;
HXLINE( 745)								bool _hx_tmp;
HXDLIN( 745)								if (::hx::IsNotNull( shaderBuffer )) {
HXLINE( 745)									_hx_tmp = !(::openfl::display::_internal::Context3DGraphics_obj::maskRender);
            								}
            								else {
HXLINE( 745)									_hx_tmp = false;
            								}
HXDLIN( 745)								if (_hx_tmp) {
HXLINE( 747)									shader = renderer->_hx___initShaderBuffer(shaderBuffer);
HXLINE( 749)									renderer->_hx___setShaderBuffer(shaderBuffer);
HXLINE( 750)									renderer->applyMatrix(uMatrix);
HXLINE( 751)									renderer->applyBitmapData(bitmap,false,repeat);
HXLINE( 752)									renderer->applyAlpha(( (Float)(1) ));
HXLINE( 753)									renderer->applyColorTransform(null());
HXLINE( 754)									renderer->_hx___updateShaderBuffer(shaderBufferOffset);
            								}
            								else {
HXLINE( 758)									if (::openfl::display::_internal::Context3DGraphics_obj::maskRender) {
HXLINE( 758)										shader = renderer->_hx___maskShader;
            									}
            									else {
HXLINE( 758)										shader = renderer->_hx___initGraphicsShader(null());
            									}
HXLINE( 759)									renderer->setShader(shader);
HXLINE( 760)									renderer->applyMatrix(uMatrix);
HXLINE( 761)									renderer->applyBitmapData(bitmap,smooth,repeat);
HXLINE( 762)									renderer->applyAlpha(graphics->_hx___owner->_hx___worldAlpha);
HXLINE( 763)									renderer->applyColorTransform(graphics->_hx___owner->_hx___worldColorTransform);
HXLINE( 764)									renderer->updateShader();
            								}
HXLINE( 767)								if (::hx::IsNotNull( shader->_hx___position )) {
HXLINE( 768)									 ::Dynamic _hx_tmp;
HXDLIN( 768)									if (hasUVTData) {
HXLINE( 768)										_hx_tmp = 4;
            									}
            									else {
HXLINE( 768)										_hx_tmp = 2;
            									}
HXLINE( 767)									context->setVertexBufferAt(( (int)(shader->_hx___position->index) ),vertexBuffer,bufferPosition,_hx_tmp);
            								}
HXLINE( 769)								if (::hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE( 769)									context->setVertexBufferAt(( (int)(shader->_hx___textureCoord->index) ),vertexBuffer,(bufferPosition + vertLength),2);
            								}
HXLINE( 772)								 ::Dynamic _hx_switch_0 = culling;
            								if (  (_hx_switch_0==0) ){
HXLINE( 778)									context->setCulling(0);
HXDLIN( 778)									goto _hx_goto_9;
            								}
            								if (  (_hx_switch_0==1) ){
HXLINE( 781)									context->setCulling(3);
HXDLIN( 781)									goto _hx_goto_9;
            								}
            								if (  (_hx_switch_0==2) ){
HXLINE( 775)									context->setCulling(1);
HXDLIN( 775)									goto _hx_goto_9;
            								}
            								/* default */{
            								}
            								_hx_goto_9:;
HXLINE( 793)								context->_hx___drawTriangles(0,length);
HXLINE( 797)								shaderBufferOffset = (shaderBufferOffset + length);
HXLINE( 798)								if (hasUVTData) {
HXLINE( 800)									vertexBufferPositionUVT = (vertexBufferPositionUVT + (dataPerVertex * length));
            								}
            								else {
HXLINE( 804)									vertexBufferPosition = (vertexBufferPosition + (dataPerVertex * length));
            								}
HXLINE( 809)								 ::Dynamic _hx_switch_1 = culling;
            								if (  (_hx_switch_1==1) ||  (_hx_switch_1==2) ){
HXLINE( 812)									context->setCulling(0);
HXDLIN( 812)									goto _hx_goto_10;
            								}
            								/* default */{
            								}
            								_hx_goto_10:;
HXLINE( 821)								renderer->_hx___clearShader();
            							}
            							break;
            							case (int)13: {
HXLINE( 824)								bitmap = null();
HXLINE( 825)								fill = null();
HXLINE( 826)								shaderBuffer = null();
HXLINE( 827)								{
HXLINE( 827)									switch((int)(data->prev->_hx_getIndex())){
            										case (int)0: {
HXLINE( 827)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 827)											data1->oPos = (data1->oPos + 2);
HXDLIN( 827)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 827)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)1: {
HXLINE( 827)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 827)											data1->iPos = (data1->iPos + 1);
HXDLIN( 827)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 827)											data2->fPos = (data2->fPos + 1);
            										}
            										break;
            										case (int)2: {
HXLINE( 827)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 827)											data1->oPos = (data1->oPos + 4);
HXDLIN( 827)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 827)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 827)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 827)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 827)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 827)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)3: {
HXLINE( 827)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 827)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)4: {
HXLINE( 827)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 827)											data1->fPos = (data1->fPos + 6);
            										}
            										break;
            										case (int)5: {
HXLINE( 827)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 827)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)6: {
HXLINE( 827)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 827)											data1->fPos = (data1->fPos + 3);
            										}
            										break;
            										case (int)7: {
HXLINE( 827)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 827)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)8: {
HXLINE( 827)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 827)											data1->oPos = (data1->oPos + 3);
            										}
            										break;
            										case (int)9: {
HXLINE( 827)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 827)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)10: {
HXLINE( 827)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 827)											data1->fPos = (data1->fPos + 5);
HXDLIN( 827)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 827)											data2->oPos = (data2->oPos + 1);
            										}
            										break;
            										case (int)12: {
HXLINE( 827)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 827)											data1->oPos = (data1->oPos + 4);
            										}
            										break;
            										case (int)13: {
            										}
            										break;
            										case (int)14: {
HXLINE( 827)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 827)											data1->oPos = (data1->oPos + 2);
HXDLIN( 827)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 827)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)15: {
HXLINE( 827)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 827)											data1->oPos = (data1->oPos + 4);
HXDLIN( 827)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 827)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 827)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 827)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 827)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 827)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)16: {
HXLINE( 827)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 827)											data1->oPos = (data1->oPos + 4);
HXDLIN( 827)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 827)											data2->iPos = (data2->iPos + 1);
HXDLIN( 827)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 827)											data3->fPos = (data3->fPos + 2);
HXDLIN( 827)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 827)											data4->bPos = (data4->bPos + 1);
            										}
            										break;
            										case (int)17: {
HXLINE( 827)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 827)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)18: {
HXLINE( 827)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 827)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)19: {
HXLINE( 827)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 827)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)20: {
HXLINE( 827)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 827)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)21: case (int)22: {
            										}
            										break;
            										default:{
            										}
            									}
HXLINE( 827)									data->prev = type;
            								}
HXLINE( 828)								context->setCulling(3);
            							}
            							break;
            							case (int)18: {
HXLINE( 831)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 831)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 831)										data1->oPos = (data1->oPos + 2);
HXDLIN( 831)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 831)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 831)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 831)										data1->iPos = (data1->iPos + 1);
HXDLIN( 831)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 831)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 831)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 831)										data1->oPos = (data1->oPos + 4);
HXDLIN( 831)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 831)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 831)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 831)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 831)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 831)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 831)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 831)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 831)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 831)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 831)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 831)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 831)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 831)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 831)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 831)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 831)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 831)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 831)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 831)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 831)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 831)										data1->fPos = (data1->fPos + 5);
HXDLIN( 831)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 831)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 831)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 831)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 831)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 831)										data1->oPos = (data1->oPos + 2);
HXDLIN( 831)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 831)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 831)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 831)										data1->oPos = (data1->oPos + 4);
HXDLIN( 831)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 831)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 831)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 831)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 831)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 831)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 831)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 831)										data1->oPos = (data1->oPos + 4);
HXDLIN( 831)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 831)										data2->iPos = (data2->iPos + 1);
HXDLIN( 831)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 831)										data3->fPos = (data3->fPos + 2);
HXDLIN( 831)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 831)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 831)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 831)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 831)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 831)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 831)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 831)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 831)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 831)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 831)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN( 831)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 831)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 832)								positionX = c->buffer->f->__get(c->fPos);
HXLINE( 833)								positionY = c->buffer->f->__get((c->fPos + 1));
            							}
            							break;
            							case (int)19: {
HXLINE( 836)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 836)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 836)										data1->oPos = (data1->oPos + 2);
HXDLIN( 836)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 836)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 836)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 836)										data1->iPos = (data1->iPos + 1);
HXDLIN( 836)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 836)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 836)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 836)										data1->oPos = (data1->oPos + 4);
HXDLIN( 836)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 836)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 836)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 836)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 836)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 836)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 836)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 836)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 836)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 836)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 836)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 836)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 836)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 836)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 836)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 836)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 836)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 836)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 836)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 836)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 836)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 836)										data1->fPos = (data1->fPos + 5);
HXDLIN( 836)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 836)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 836)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 836)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 836)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 836)										data1->oPos = (data1->oPos + 2);
HXDLIN( 836)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 836)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 836)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 836)										data1->oPos = (data1->oPos + 4);
HXDLIN( 836)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 836)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 836)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 836)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 836)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 836)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 836)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 836)										data1->oPos = (data1->oPos + 4);
HXDLIN( 836)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 836)										data2->iPos = (data2->iPos + 1);
HXDLIN( 836)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 836)										data3->fPos = (data3->fPos + 2);
HXDLIN( 836)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 836)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 836)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 836)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 836)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 836)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 836)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 836)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 836)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 836)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 836)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::OVERRIDE_BLEND_MODE_dyn();
HXDLIN( 836)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 836)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 837)								renderer->_hx___setBlendMode(c->buffer->o->__get(c->oPos));
            							}
            							break;
            							default:{
HXLINE( 840)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 840)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 840)										data1->oPos = (data1->oPos + 2);
HXDLIN( 840)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 840)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 840)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 840)										data1->iPos = (data1->iPos + 1);
HXDLIN( 840)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 840)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 840)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 840)										data1->oPos = (data1->oPos + 4);
HXDLIN( 840)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 840)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 840)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 840)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 840)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 840)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 840)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 840)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 840)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 840)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 840)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 840)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 840)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 840)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 840)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 840)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 840)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 840)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 840)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 840)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 840)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 840)										data1->fPos = (data1->fPos + 5);
HXDLIN( 840)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 840)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 840)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 840)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 840)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 840)										data1->oPos = (data1->oPos + 2);
HXDLIN( 840)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 840)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 840)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 840)										data1->oPos = (data1->oPos + 4);
HXDLIN( 840)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 840)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 840)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 840)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 840)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 840)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 840)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 840)										data1->oPos = (data1->oPos + 4);
HXDLIN( 840)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 840)										data2->iPos = (data2->iPos + 1);
HXDLIN( 840)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 840)										data3->fPos = (data3->fPos + 2);
HXDLIN( 840)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 840)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 840)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 840)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 840)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 840)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 840)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 840)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 840)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 840)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 840)								data->prev = type;
            							}
            						}
            					}
            				}
HXLINE( 844)				::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
            			}
HXLINE( 847)			graphics->_hx___hardwareDirty = false;
HXLINE( 848)			graphics->set___dirty(false);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DGraphics_obj,render,(void))

void Context3DGraphics_obj::renderMask( ::openfl::display::Graphics graphics, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_14098afca734a8c3_853_renderMask)
HXLINE( 856)		::openfl::display::_internal::Context3DGraphics_obj::maskRender = true;
HXLINE( 857)		::openfl::display::_internal::Context3DGraphics_obj::render(graphics,renderer);
HXLINE( 858)		::openfl::display::_internal::Context3DGraphics_obj::maskRender = false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DGraphics_obj,renderMask,(void))

void Context3DGraphics_obj::resizeIndexBuffer( ::openfl::display::Graphics graphics,bool isQuad,int length){
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_862_resizeIndexBuffer)
HXLINE( 863)		if (isQuad) {
HXLINE( 863)			return;
            		}
HXLINE( 865)		 ::lime::utils::ArrayBufferView buffer;
HXDLIN( 865)		if (isQuad) {
HXLINE( 865)			buffer = null();
            		}
            		else {
HXLINE( 865)			buffer = graphics->_hx___triangleIndexBufferData;
            		}
HXLINE( 866)		int position = 0;
HXDLIN( 866)		 ::lime::utils::ArrayBufferView newBuffer = null();
HXLINE( 869)		if (::hx::IsNull( buffer )) {
HXLINE( 871)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 871)			::cpp::VirtualArray array = null();
HXDLIN( 871)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 871)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 871)			 ::Dynamic len = null();
HXDLIN( 871)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 871)			if (::hx::IsNotNull( length )) {
HXLINE( 871)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,length,6);
            			}
            			else {
HXLINE( 871)				if (::hx::IsNotNull( array )) {
HXLINE( 871)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 871)					_this->byteOffset = 0;
HXDLIN( 871)					_this->length = array->get_length();
HXDLIN( 871)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 871)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 871)					_this->buffer = this2;
HXDLIN( 871)					_this->copyFromArray(array,null());
HXDLIN( 871)					this1 = _this;
            				}
            				else {
HXLINE( 871)					if (::hx::IsNotNull( vector )) {
HXLINE( 871)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 871)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 871)						_this->byteOffset = 0;
HXDLIN( 871)						_this->length = array->get_length();
HXDLIN( 871)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 871)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 871)						_this->buffer = this2;
HXDLIN( 871)						_this->copyFromArray(array,null());
HXDLIN( 871)						this1 = _this;
            					}
            					else {
HXLINE( 871)						if (::hx::IsNotNull( view )) {
HXLINE( 871)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 871)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 871)							int srcLength = view->length;
HXDLIN( 871)							int srcByteOffset = view->byteOffset;
HXDLIN( 871)							int srcElementSize = view->bytesPerElement;
HXDLIN( 871)							int elementSize = _this->bytesPerElement;
HXDLIN( 871)							if ((view->type == _this->type)) {
HXLINE( 871)								int srcLength = srcData->length;
HXDLIN( 871)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 871)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 871)								_this->buffer = this1;
HXDLIN( 871)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 871)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 871)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 871)							_this->byteOffset = 0;
HXDLIN( 871)							_this->length = srcLength;
HXDLIN( 871)							this1 = _this;
            						}
            						else {
HXLINE( 871)							if (::hx::IsNotNull( buffer )) {
HXLINE( 871)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 871)								int in_byteOffset = 0;
HXDLIN( 871)								if ((in_byteOffset < 0)) {
HXLINE( 871)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 871)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 871)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 871)								int bufferByteLength = buffer->length;
HXDLIN( 871)								int elementSize = _this->bytesPerElement;
HXDLIN( 871)								int newByteLength = bufferByteLength;
HXDLIN( 871)								if (::hx::IsNull( len )) {
HXLINE( 871)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 871)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 871)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 871)									if ((newByteLength < 0)) {
HXLINE( 871)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 871)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 871)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 871)									if ((newRange > bufferByteLength)) {
HXLINE( 871)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 871)								_this->buffer = buffer;
HXDLIN( 871)								_this->byteOffset = in_byteOffset;
HXDLIN( 871)								_this->byteLength = newByteLength;
HXDLIN( 871)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 871)								this1 = _this;
            							}
            							else {
HXLINE( 871)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 871)			newBuffer = this1;
            		}
            		else {
HXLINE( 873)			if ((length > buffer->length)) {
HXLINE( 875)				 ::haxe::io::Bytes buffer1 = null();
HXDLIN( 875)				::cpp::VirtualArray array = null();
HXDLIN( 875)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 875)				 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 875)				 ::Dynamic len = null();
HXDLIN( 875)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 875)				if (::hx::IsNotNull( length )) {
HXLINE( 875)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,length,6);
            				}
            				else {
HXLINE( 875)					if (::hx::IsNotNull( array )) {
HXLINE( 875)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 875)						_this->byteOffset = 0;
HXDLIN( 875)						_this->length = array->get_length();
HXDLIN( 875)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 875)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 875)						_this->buffer = this2;
HXDLIN( 875)						_this->copyFromArray(array,null());
HXDLIN( 875)						this1 = _this;
            					}
            					else {
HXLINE( 875)						if (::hx::IsNotNull( vector )) {
HXLINE( 875)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 875)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 875)							_this->byteOffset = 0;
HXDLIN( 875)							_this->length = array->get_length();
HXDLIN( 875)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 875)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 875)							_this->buffer = this2;
HXDLIN( 875)							_this->copyFromArray(array,null());
HXDLIN( 875)							this1 = _this;
            						}
            						else {
HXLINE( 875)							if (::hx::IsNotNull( view )) {
HXLINE( 875)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 875)								 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 875)								int srcLength = view->length;
HXDLIN( 875)								int srcByteOffset = view->byteOffset;
HXDLIN( 875)								int srcElementSize = view->bytesPerElement;
HXDLIN( 875)								int elementSize = _this->bytesPerElement;
HXDLIN( 875)								if ((view->type == _this->type)) {
HXLINE( 875)									int srcLength = srcData->length;
HXDLIN( 875)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 875)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 875)									_this->buffer = this1;
HXDLIN( 875)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 875)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 875)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 875)								_this->byteOffset = 0;
HXDLIN( 875)								_this->length = srcLength;
HXDLIN( 875)								this1 = _this;
            							}
            							else {
HXLINE( 875)								if (::hx::IsNotNull( buffer1 )) {
HXLINE( 875)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 875)									int in_byteOffset = 0;
HXDLIN( 875)									if ((in_byteOffset < 0)) {
HXLINE( 875)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 875)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 875)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 875)									int bufferByteLength = buffer1->length;
HXDLIN( 875)									int elementSize = _this->bytesPerElement;
HXDLIN( 875)									int newByteLength = bufferByteLength;
HXDLIN( 875)									if (::hx::IsNull( len )) {
HXLINE( 875)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 875)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 875)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 875)										if ((newByteLength < 0)) {
HXLINE( 875)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 875)										newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 875)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 875)										if ((newRange > bufferByteLength)) {
HXLINE( 875)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 875)									_this->buffer = buffer1;
HXDLIN( 875)									_this->byteOffset = in_byteOffset;
HXDLIN( 875)									_this->byteLength = newByteLength;
HXDLIN( 875)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 875)									this1 = _this;
            								}
            								else {
HXLINE( 875)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 875)				newBuffer = this1;
HXLINE( 876)				{
HXLINE( 876)					::cpp::VirtualArray array1 = null();
HXDLIN( 876)					int offset = 0;
HXDLIN( 876)					bool _hx_tmp;
HXDLIN( 876)					if (::hx::IsNotNull( buffer )) {
HXLINE( 876)						_hx_tmp = ::hx::IsNull( array1 );
            					}
            					else {
HXLINE( 876)						_hx_tmp = false;
            					}
HXDLIN( 876)					if (_hx_tmp) {
HXLINE( 876)						newBuffer->buffer->blit((offset * newBuffer->bytesPerElement),buffer->buffer,buffer->byteOffset,buffer->byteLength);
            					}
            					else {
HXLINE( 876)						bool _hx_tmp;
HXDLIN( 876)						if (::hx::IsNotNull( array1 )) {
HXLINE( 876)							_hx_tmp = ::hx::IsNull( buffer );
            						}
            						else {
HXLINE( 876)							_hx_tmp = false;
            						}
HXDLIN( 876)						if (_hx_tmp) {
HXLINE( 876)							newBuffer->copyFromArray(array1,offset);
            						}
            						else {
HXLINE( 876)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid .set call. either view, or array must be not-null.",64,ba,b7,6c)));
            						}
            					}
            				}
HXLINE( 877)				position = buffer->length;
            			}
            		}
HXLINE( 881)		if (::hx::IsNotNull( newBuffer )) {
HXLINE( 883)			if (!(isQuad)) {
HXLINE( 904)				graphics->_hx___triangleIndexBufferData = newBuffer;
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Context3DGraphics_obj,resizeIndexBuffer,(void))

void Context3DGraphics_obj::resizeVertexBuffer( ::openfl::display::Graphics graphics,bool hasUVTData,int length){
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_910_resizeVertexBuffer)
HXLINE( 911)		 ::lime::utils::ArrayBufferView buffer;
HXDLIN( 911)		if (hasUVTData) {
HXLINE( 911)			buffer = graphics->_hx___vertexBufferDataUVT;
            		}
            		else {
HXLINE( 911)			buffer = graphics->_hx___vertexBufferData;
            		}
HXLINE( 912)		 ::lime::utils::ArrayBufferView newBuffer = null();
HXLINE( 915)		if (::hx::IsNull( buffer )) {
HXLINE( 917)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 917)			::cpp::VirtualArray array = null();
HXDLIN( 917)			 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 917)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 917)			 ::Dynamic len = null();
HXDLIN( 917)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 917)			if (::hx::IsNotNull( length )) {
HXLINE( 917)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,length,8);
            			}
            			else {
HXLINE( 917)				if (::hx::IsNotNull( array )) {
HXLINE( 917)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 917)					_this->byteOffset = 0;
HXDLIN( 917)					_this->length = array->get_length();
HXDLIN( 917)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 917)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 917)					_this->buffer = this2;
HXDLIN( 917)					_this->copyFromArray(array,null());
HXDLIN( 917)					this1 = _this;
            				}
            				else {
HXLINE( 917)					if (::hx::IsNotNull( vector )) {
HXLINE( 917)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 917)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 917)						_this->byteOffset = 0;
HXDLIN( 917)						_this->length = array->get_length();
HXDLIN( 917)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 917)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 917)						_this->buffer = this2;
HXDLIN( 917)						_this->copyFromArray(array,null());
HXDLIN( 917)						this1 = _this;
            					}
            					else {
HXLINE( 917)						if (::hx::IsNotNull( view )) {
HXLINE( 917)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 917)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 917)							int srcLength = view->length;
HXDLIN( 917)							int srcByteOffset = view->byteOffset;
HXDLIN( 917)							int srcElementSize = view->bytesPerElement;
HXDLIN( 917)							int elementSize = _this->bytesPerElement;
HXDLIN( 917)							if ((view->type == _this->type)) {
HXLINE( 917)								int srcLength = srcData->length;
HXDLIN( 917)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 917)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 917)								_this->buffer = this1;
HXDLIN( 917)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 917)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 917)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 917)							_this->byteOffset = 0;
HXDLIN( 917)							_this->length = srcLength;
HXDLIN( 917)							this1 = _this;
            						}
            						else {
HXLINE( 917)							if (::hx::IsNotNull( buffer )) {
HXLINE( 917)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 917)								int in_byteOffset = 0;
HXDLIN( 917)								if ((in_byteOffset < 0)) {
HXLINE( 917)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 917)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 917)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 917)								int bufferByteLength = buffer->length;
HXDLIN( 917)								int elementSize = _this->bytesPerElement;
HXDLIN( 917)								int newByteLength = bufferByteLength;
HXDLIN( 917)								if (::hx::IsNull( len )) {
HXLINE( 917)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 917)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 917)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 917)									if ((newByteLength < 0)) {
HXLINE( 917)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 917)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 917)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 917)									if ((newRange > bufferByteLength)) {
HXLINE( 917)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 917)								_this->buffer = buffer;
HXDLIN( 917)								_this->byteOffset = in_byteOffset;
HXDLIN( 917)								_this->byteLength = newByteLength;
HXDLIN( 917)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 917)								this1 = _this;
            							}
            							else {
HXLINE( 917)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 917)			newBuffer = this1;
            		}
            		else {
HXLINE( 919)			if ((length > buffer->length)) {
HXLINE( 921)				 ::haxe::io::Bytes buffer1 = null();
HXDLIN( 921)				::cpp::VirtualArray array = null();
HXDLIN( 921)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 921)				 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 921)				 ::Dynamic len = null();
HXDLIN( 921)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 921)				if (::hx::IsNotNull( length )) {
HXLINE( 921)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,length,8);
            				}
            				else {
HXLINE( 921)					if (::hx::IsNotNull( array )) {
HXLINE( 921)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 921)						_this->byteOffset = 0;
HXDLIN( 921)						_this->length = array->get_length();
HXDLIN( 921)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 921)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 921)						_this->buffer = this2;
HXDLIN( 921)						_this->copyFromArray(array,null());
HXDLIN( 921)						this1 = _this;
            					}
            					else {
HXLINE( 921)						if (::hx::IsNotNull( vector )) {
HXLINE( 921)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 921)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 921)							_this->byteOffset = 0;
HXDLIN( 921)							_this->length = array->get_length();
HXDLIN( 921)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 921)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 921)							_this->buffer = this2;
HXDLIN( 921)							_this->copyFromArray(array,null());
HXDLIN( 921)							this1 = _this;
            						}
            						else {
HXLINE( 921)							if (::hx::IsNotNull( view )) {
HXLINE( 921)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 921)								 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 921)								int srcLength = view->length;
HXDLIN( 921)								int srcByteOffset = view->byteOffset;
HXDLIN( 921)								int srcElementSize = view->bytesPerElement;
HXDLIN( 921)								int elementSize = _this->bytesPerElement;
HXDLIN( 921)								if ((view->type == _this->type)) {
HXLINE( 921)									int srcLength = srcData->length;
HXDLIN( 921)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 921)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 921)									_this->buffer = this1;
HXDLIN( 921)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 921)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 921)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 921)								_this->byteOffset = 0;
HXDLIN( 921)								_this->length = srcLength;
HXDLIN( 921)								this1 = _this;
            							}
            							else {
HXLINE( 921)								if (::hx::IsNotNull( buffer1 )) {
HXLINE( 921)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 921)									int in_byteOffset = 0;
HXDLIN( 921)									if ((in_byteOffset < 0)) {
HXLINE( 921)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 921)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 921)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 921)									int bufferByteLength = buffer1->length;
HXDLIN( 921)									int elementSize = _this->bytesPerElement;
HXDLIN( 921)									int newByteLength = bufferByteLength;
HXDLIN( 921)									if (::hx::IsNull( len )) {
HXLINE( 921)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 921)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 921)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 921)										if ((newByteLength < 0)) {
HXLINE( 921)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 921)										newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 921)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 921)										if ((newRange > bufferByteLength)) {
HXLINE( 921)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 921)									_this->buffer = buffer1;
HXDLIN( 921)									_this->byteOffset = in_byteOffset;
HXDLIN( 921)									_this->byteLength = newByteLength;
HXDLIN( 921)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 921)									this1 = _this;
            								}
            								else {
HXLINE( 921)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 921)				newBuffer = this1;
HXLINE( 922)				{
HXLINE( 922)					::cpp::VirtualArray array1 = null();
HXDLIN( 922)					int offset = 0;
HXDLIN( 922)					bool _hx_tmp;
HXDLIN( 922)					if (::hx::IsNotNull( buffer )) {
HXLINE( 922)						_hx_tmp = ::hx::IsNull( array1 );
            					}
            					else {
HXLINE( 922)						_hx_tmp = false;
            					}
HXDLIN( 922)					if (_hx_tmp) {
HXLINE( 922)						newBuffer->buffer->blit((offset * newBuffer->bytesPerElement),buffer->buffer,buffer->byteOffset,buffer->byteLength);
            					}
            					else {
HXLINE( 922)						bool _hx_tmp;
HXDLIN( 922)						if (::hx::IsNotNull( array1 )) {
HXLINE( 922)							_hx_tmp = ::hx::IsNull( buffer );
            						}
            						else {
HXLINE( 922)							_hx_tmp = false;
            						}
HXDLIN( 922)						if (_hx_tmp) {
HXLINE( 922)							newBuffer->copyFromArray(array1,offset);
            						}
            						else {
HXLINE( 922)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid .set call. either view, or array must be not-null.",64,ba,b7,6c)));
            						}
            					}
            				}
            			}
            		}
HXLINE( 926)		if (::hx::IsNotNull( newBuffer )) {
HXLINE( 928)			if (hasUVTData) {
HXLINE( 928)				graphics->_hx___vertexBufferDataUVT = newBuffer;
            			}
            			else {
HXLINE( 928)				graphics->_hx___vertexBufferData = newBuffer;
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Context3DGraphics_obj,resizeVertexBuffer,(void))


Context3DGraphics_obj::Context3DGraphics_obj()
{
}

bool Context3DGraphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maskRender") ) { outValue = ( maskRender ); return true; }
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buildBuffer") ) { outValue = buildBuffer_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isCompatible") ) { outValue = isCompatible_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"blankBitmapData") ) { outValue = ( blankBitmapData ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resizeIndexBuffer") ) { outValue = resizeIndexBuffer_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"tempColorTransform") ) { outValue = ( tempColorTransform ); return true; }
		if (HX_FIELD_EQ(inName,"resizeVertexBuffer") ) { outValue = resizeVertexBuffer_dyn(); return true; }
	}
	return false;
}

bool Context3DGraphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"maskRender") ) { maskRender=ioValue.Cast< bool >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"blankBitmapData") ) { blankBitmapData=ioValue.Cast<  ::openfl::display::BitmapData >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"tempColorTransform") ) { tempColorTransform=ioValue.Cast<  ::openfl::geom::ColorTransform >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DGraphics_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Context3DGraphics_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(void *) &Context3DGraphics_obj::blankBitmapData,HX_("blankBitmapData",2d,8a,0b,df)},
	{::hx::fsBool,(void *) &Context3DGraphics_obj::maskRender,HX_("maskRender",62,99,0d,1a)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(void *) &Context3DGraphics_obj::tempColorTransform,HX_("tempColorTransform",bd,e9,a6,54)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Context3DGraphics_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DGraphics_obj::blankBitmapData,"blankBitmapData");
	HX_MARK_MEMBER_NAME(Context3DGraphics_obj::maskRender,"maskRender");
	HX_MARK_MEMBER_NAME(Context3DGraphics_obj::tempColorTransform,"tempColorTransform");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DGraphics_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DGraphics_obj::blankBitmapData,"blankBitmapData");
	HX_VISIT_MEMBER_NAME(Context3DGraphics_obj::maskRender,"maskRender");
	HX_VISIT_MEMBER_NAME(Context3DGraphics_obj::tempColorTransform,"tempColorTransform");
};

#endif

::hx::Class Context3DGraphics_obj::__mClass;

static ::String Context3DGraphics_obj_sStaticFields[] = {
	HX_("blankBitmapData",2d,8a,0b,df),
	HX_("maskRender",62,99,0d,1a),
	HX_("tempColorTransform",bd,e9,a6,54),
	HX_("buildBuffer",ce,a2,05,21),
	HX_("isCompatible",de,03,42,0a),
	HX_("render",56,6b,29,05),
	HX_("renderMask",62,3b,60,e5),
	HX_("resizeIndexBuffer",1e,c0,ce,b4),
	HX_("resizeVertexBuffer",98,73,d0,f4),
	::String(null())
};

void Context3DGraphics_obj::__register()
{
	Context3DGraphics_obj _hx_dummy;
	Context3DGraphics_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.Context3DGraphics",cf,76,90,23);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DGraphics_obj::__GetStatic;
	__mClass->mSetStaticField = &Context3DGraphics_obj::__SetStatic;
	__mClass->mMarkFunc = Context3DGraphics_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DGraphics_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DGraphics_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DGraphics_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DGraphics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DGraphics_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DGraphics_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_14098afca734a8c3_35_boot)
HXDLIN(  35)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_37_boot)
HXDLIN(  37)		blankBitmapData =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,1,1,false,0);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_39_boot)
HXDLIN(  39)		tempColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,1,1,1,1,0,0,0,0);
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
