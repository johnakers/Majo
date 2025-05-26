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
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListNode
#include <haxe/ds/_List/ListNode.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
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
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsBitmapFill
#include <openfl/display/GraphicsBitmapFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsEndFill
#include <openfl/display/GraphicsEndFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsGradientFill
#include <openfl/display/GraphicsGradientFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPath
#include <openfl/display/GraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsQuadPath
#include <openfl/display/GraphicsQuadPath.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShaderFill
#include <openfl/display/GraphicsShaderFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsSolidFill
#include <openfl/display/GraphicsSolidFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsStroke
#include <openfl/display/GraphicsStroke.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsTrianglePath
#include <openfl/display/GraphicsTrianglePath.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsPath
#include <openfl/display/IGraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsStroke
#include <openfl/display/IGraphicsStroke.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoGraphics
#include <openfl/display/_internal/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DBuffer
#include <openfl/display/_internal/Context3DBuffer.h>
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
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_043516e11ce5c7d5_119_new,"openfl.display.Graphics","new",0x7fd846a7,"openfl.display.Graphics.new","openfl/display/Graphics.hx",119,0x8d299ce7)
HX_DEFINE_STACK_FRAME(_hx_pos_043516e11ce5c7d5_60_new,"openfl.display.Graphics","new",0x7fd846a7,"openfl.display.Graphics.new","openfl/display/Graphics.hx",60,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_176_beginBitmapFill,"openfl.display.Graphics","beginBitmapFill",0x31c80e62,"openfl.display.Graphics.beginBitmapFill","openfl/display/Graphics.hx",176,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_197_beginFill,"openfl.display.Graphics","beginFill",0xf44a92d3,"openfl.display.Graphics.beginFill","openfl/display/Graphics.hx",197,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_300_beginGradientFill,"openfl.display.Graphics","beginGradientFill",0x99f380e3,"openfl.display.Graphics.beginGradientFill","openfl/display/Graphics.hx",300,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_391_beginShaderFill,"openfl.display.Graphics","beginShaderFill",0x2f039098,"openfl.display.Graphics.beginShaderFill","openfl/display/Graphics.hx",391,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_409_clear,"openfl.display.Graphics","clear",0x0a9f4794,"openfl.display.Graphics.clear","openfl/display/Graphics.hx",409,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_445_copyFrom,"openfl.display.Graphics","copyFrom",0x0a477418,"openfl.display.Graphics.copyFrom","openfl/display/Graphics.hx",445,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_498_cubicCurveTo,"openfl.display.Graphics","cubicCurveTo",0x467410b9,"openfl.display.Graphics.cubicCurveTo","openfl/display/Graphics.hx",498,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_548_curveTo,"openfl.display.Graphics","curveTo",0x89f305d1,"openfl.display.Graphics.curveTo","openfl/display/Graphics.hx",548,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_594_drawCircle,"openfl.display.Graphics","drawCircle",0xee64ddcd,"openfl.display.Graphics.drawCircle","openfl/display/Graphics.hx",594,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_624_drawEllipse,"openfl.display.Graphics","drawEllipse",0xbfad1a81,"openfl.display.Graphics.drawEllipse","openfl/display/Graphics.hx",624,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_648_drawGraphicsData,"openfl.display.Graphics","drawGraphicsData",0x60ea9412,"openfl.display.Graphics.drawGraphicsData","openfl/display/Graphics.hx",648,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_781_drawPath,"openfl.display.Graphics","drawPath",0xa0a1f822,"openfl.display.Graphics.drawPath","openfl/display/Graphics.hx",781,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_854_drawQuads,"openfl.display.Graphics","drawQuads",0x8da790af,"openfl.display.Graphics.drawQuads","openfl/display/Graphics.hx",854,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_964_drawRect,"openfl.display.Graphics","drawRect",0xa1f75fa1,"openfl.display.Graphics.drawRect","openfl/display/Graphics.hx",964,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1007_drawRoundRect,"openfl.display.Graphics","drawRoundRect",0xb24e78f5,"openfl.display.Graphics.drawRoundRect","openfl/display/Graphics.hx",1007,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1026_drawRoundRectComplex,"openfl.display.Graphics","drawRoundRectComplex",0x06fa4dbb,"openfl.display.Graphics.drawRoundRectComplex","openfl/display/Graphics.hx",1026,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1093_drawTriangles,"openfl.display.Graphics","drawTriangles",0xae0bf90e,"openfl.display.Graphics.drawTriangles","openfl/display/Graphics.hx",1093,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1160_endFill,"openfl.display.Graphics","endFill",0xe14b2dc5,"openfl.display.Graphics.endFill","openfl/display/Graphics.hx",1160,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1194_lineBitmapStyle,"openfl.display.Graphics","lineBitmapStyle",0x0ce183f5,"openfl.display.Graphics.lineBitmapStyle","openfl/display/Graphics.hx",1194,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1274_lineGradientStyle,"openfl.display.Graphics","lineGradientStyle",0x2de26914,"openfl.display.Graphics.lineGradientStyle","openfl/display/Graphics.hx",1274,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1478_lineStyle,"openfl.display.Graphics","lineStyle",0x32cd8e24,"openfl.display.Graphics.lineStyle","openfl/display/Graphics.hx",1478,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1525_lineTo,"openfl.display.Graphics","lineTo",0x25b7b6a8,"openfl.display.Graphics.lineTo","openfl/display/Graphics.hx",1525,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1558_moveTo,"openfl.display.Graphics","moveTo",0x05c44305,"openfl.display.Graphics.moveTo","openfl/display/Graphics.hx",1558,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1567_overrideBlendMode,"openfl.display.Graphics","overrideBlendMode",0x65da3cef,"openfl.display.Graphics.overrideBlendMode","openfl/display/Graphics.hx",1567,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1624_readGraphicsData,"openfl.display.Graphics","readGraphicsData",0x877c6664,"openfl.display.Graphics.readGraphicsData","openfl/display/Graphics.hx",1624,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1632___calculateBezierCubicPoint,"openfl.display.Graphics","__calculateBezierCubicPoint",0xb6679552,"openfl.display.Graphics.__calculateBezierCubicPoint","openfl/display/Graphics.hx",1632,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1639___calculateBezierQuadPoint,"openfl.display.Graphics","__calculateBezierQuadPoint",0x2414b8dd,"openfl.display.Graphics.__calculateBezierQuadPoint","openfl/display/Graphics.hx",1639,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1645___cleanup,"openfl.display.Graphics","__cleanup",0x9445428b,"openfl.display.Graphics.__cleanup","openfl/display/Graphics.hx",1645,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1671___getBounds,"openfl.display.Graphics","__getBounds",0x7b7eedd2,"openfl.display.Graphics.__getBounds","openfl/display/Graphics.hx",1671,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1681___hitTest,"openfl.display.Graphics","__hitTest",0xcb8296ac,"openfl.display.Graphics.__hitTest","openfl/display/Graphics.hx",1681,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1705___findExtrema,"openfl.display.Graphics","__findExtrema",0x90f47d96,"openfl.display.Graphics.__findExtrema","openfl/display/Graphics.hx",1705,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1756___inflateBounds,"openfl.display.Graphics","__inflateBounds",0x7eaeb403,"openfl.display.Graphics.__inflateBounds","openfl/display/Graphics.hx",1756,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1790___readGraphicsData,"openfl.display.Graphics","__readGraphicsData",0xf8dcc1c4,"openfl.display.Graphics.__readGraphicsData","openfl/display/Graphics.hx",1790,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1901___update,"openfl.display.Graphics","__update",0x711b5982,"openfl.display.Graphics.__update","openfl/display/Graphics.hx",1901,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_2055_set___dirty,"openfl.display.Graphics","set___dirty",0x3f74a55c,"openfl.display.Graphics.set___dirty","openfl/display/Graphics.hx",2055,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_60_boot,"openfl.display.Graphics","boot",0x557e8c0b,"openfl.display.Graphics.boot","openfl/display/Graphics.hx",60,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_62_boot,"openfl.display.Graphics","boot",0x557e8c0b,"openfl.display.Graphics.boot","openfl/display/Graphics.hx",62,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_63_boot,"openfl.display.Graphics","boot",0x557e8c0b,"openfl.display.Graphics.boot","openfl/display/Graphics.hx",63,0x8d299ce7)
namespace openfl{
namespace display{

void Graphics_obj::__construct( ::openfl::display::DisplayObject owner){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::display::_internal::ShaderBuffer _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_043516e11ce5c7d5_119_new)
HXLINE( 119)			return  ::openfl::display::_internal::ShaderBuffer_obj::__alloc( HX_CTX );
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_GC_STACKFRAME(&_hx_pos_043516e11ce5c7d5_60_new)
HXLINE(  67)		this->_hx___dirty = true;
HXLINE( 105)		this->_hx___owner = owner;
HXLINE( 107)		this->_hx___commands =  ::openfl::display::_internal::DrawCommandBuffer_obj::__alloc( HX_CTX );
HXLINE( 108)		this->_hx___strokePadding = ( (Float)(0) );
HXLINE( 109)		this->_hx___positionX = ( (Float)(0) );
HXLINE( 110)		this->_hx___positionY = ( (Float)(0) );
HXLINE( 111)		this->_hx___renderTransform =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 112)		this->_hx___usedShaderBuffers =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 113)		this->_hx___worldTransform =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 114)		this->_hx___width = 0;
HXLINE( 115)		this->_hx___height = 0;
HXLINE( 117)		this->_hx___bitmapScale = ( (Float)(1) );
HXLINE( 119)		this->_hx___shaderBufferPool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()),null(),null());
            	}

Dynamic Graphics_obj::__CreateEmpty() { return new Graphics_obj; }

void *Graphics_obj::_hx_vtable = 0;

Dynamic Graphics_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Graphics_obj > _hx_result = new Graphics_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Graphics_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4e198379;
}

void Graphics_obj::beginBitmapFill( ::openfl::display::BitmapData bitmap, ::openfl::geom::Matrix matrix,::hx::Null< bool >  __o_repeat,::hx::Null< bool >  __o_smooth){
            		bool repeat = __o_repeat.Default(true);
            		bool smooth = __o_smooth.Default(false);
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_176_beginBitmapFill)
HXLINE( 177)		 ::openfl::display::_internal::DrawCommandBuffer _hx_tmp = this->_hx___commands;
HXDLIN( 177)		 ::openfl::geom::Matrix _hx_tmp1;
HXDLIN( 177)		if (::hx::IsNotNull( matrix )) {
HXLINE( 177)			_hx_tmp1 = matrix->clone();
            		}
            		else {
HXLINE( 177)			_hx_tmp1 = null();
            		}
HXDLIN( 177)		_hx_tmp->beginBitmapFill(bitmap,_hx_tmp1,repeat,smooth);
HXLINE( 179)		this->_hx___visible = true;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,beginBitmapFill,(void))

void Graphics_obj::beginFill(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha){
            		int color = __o_color.Default(0);
            		Float alpha = __o_alpha.Default(1);
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_197_beginFill)
HXLINE( 198)		this->_hx___commands->beginFill((color & 16777215),alpha);
HXLINE( 200)		if ((alpha > 0)) {
HXLINE( 200)			this->_hx___visible = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,beginFill,(void))

void Graphics_obj::beginGradientFill( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic __o_spreadMethod, ::Dynamic __o_interpolationMethod,::hx::Null< Float >  __o_focalPointRatio){
            		 ::Dynamic spreadMethod = __o_spreadMethod;
            		if (::hx::IsNull(__o_spreadMethod)) spreadMethod = 0;
            		 ::Dynamic interpolationMethod = __o_interpolationMethod;
            		if (::hx::IsNull(__o_interpolationMethod)) interpolationMethod = 1;
            		Float focalPointRatio = __o_focalPointRatio.Default(0);
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_300_beginGradientFill)
HXLINE( 301)		bool _hx_tmp;
HXDLIN( 301)		if (::hx::IsNotNull( colors )) {
HXLINE( 301)			_hx_tmp = (colors->length == 0);
            		}
            		else {
HXLINE( 301)			_hx_tmp = true;
            		}
HXDLIN( 301)		if (_hx_tmp) {
HXLINE( 301)			return;
            		}
HXLINE( 303)		if (::hx::IsNull( alphas )) {
HXLINE( 305)			alphas = ::Array_obj< Float >::__new(0);
HXLINE( 307)			{
HXLINE( 307)				int _g = 0;
HXDLIN( 307)				int _g1 = colors->length;
HXDLIN( 307)				while((_g < _g1)){
HXLINE( 307)					_g = (_g + 1);
HXDLIN( 307)					int i = (_g - 1);
HXLINE( 309)					alphas->push(1);
            				}
            			}
            		}
HXLINE( 313)		if (::hx::IsNull( ratios )) {
HXLINE( 315)			ratios = ::Array_obj< int >::__new(0);
HXLINE( 317)			{
HXLINE( 317)				int _g = 0;
HXDLIN( 317)				int _g1 = colors->length;
HXDLIN( 317)				while((_g < _g1)){
HXLINE( 317)					_g = (_g + 1);
HXDLIN( 317)					int i = (_g - 1);
HXLINE( 319)					ratios->push(::Math_obj::ceil(((( (Float)(i) ) / ( (Float)((colors->length - 1)) )) * ( (Float)(255) ))));
            				}
            			}
            		}
HXLINE( 323)		bool _hx_tmp1;
HXDLIN( 323)		if ((alphas->length >= colors->length)) {
HXLINE( 323)			_hx_tmp1 = (ratios->length < colors->length);
            		}
            		else {
HXLINE( 323)			_hx_tmp1 = true;
            		}
HXDLIN( 323)		if (_hx_tmp1) {
HXLINE( 323)			return;
            		}
HXLINE( 325)		this->_hx___commands->beginGradientFill(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,focalPointRatio);
HXLINE( 327)		{
HXLINE( 327)			int _g = 0;
HXDLIN( 327)			while((_g < alphas->length)){
HXLINE( 327)				Float alpha = alphas->__get(_g);
HXDLIN( 327)				_g = (_g + 1);
HXLINE( 329)				if ((alpha > 0)) {
HXLINE( 331)					this->_hx___visible = true;
HXLINE( 332)					goto _hx_goto_6;
            				}
            			}
            			_hx_goto_6:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,beginGradientFill,(void))

void Graphics_obj::beginShaderFill( ::openfl::display::Shader shader, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_391_beginShaderFill)
HXDLIN( 391)		if (::hx::IsNotNull( shader )) {
HXLINE( 394)			 ::openfl::display::_internal::ShaderBuffer shaderBuffer = this->_hx___shaderBufferPool->get().StaticCast<  ::openfl::display::_internal::ShaderBuffer >();
HXLINE( 395)			this->_hx___usedShaderBuffers->add(shaderBuffer);
HXLINE( 396)			shaderBuffer->update(( ( ::openfl::display::GraphicsShader)(shader) ));
HXLINE( 398)			this->_hx___commands->beginShaderFill(shaderBuffer);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,beginShaderFill,(void))

void Graphics_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_409_clear)
HXLINE( 411)		{
HXLINE( 411)			 ::haxe::ds::_List::ListNode _g_head = this->_hx___usedShaderBuffers->h;
HXDLIN( 411)			while(::hx::IsNotNull( _g_head )){
HXLINE( 411)				 ::openfl::display::_internal::ShaderBuffer val = ( ( ::openfl::display::_internal::ShaderBuffer)(_g_head->item) );
HXDLIN( 411)				_g_head = _g_head->next;
HXDLIN( 411)				 ::openfl::display::_internal::ShaderBuffer shaderBuffer = val;
HXLINE( 413)				this->_hx___shaderBufferPool->release(shaderBuffer);
            			}
            		}
HXLINE( 417)		this->_hx___usedShaderBuffers->clear();
HXLINE( 418)		this->_hx___commands->clear();
HXLINE( 419)		this->_hx___strokePadding = ( (Float)(0) );
HXLINE( 421)		if (::hx::IsNotNull( this->_hx___bounds )) {
HXLINE( 423)			this->set___dirty(true);
HXLINE( 424)			this->_hx___transformDirty = true;
HXLINE( 425)			this->_hx___bounds = null();
            		}
HXLINE( 428)		this->_hx___visible = false;
HXLINE( 429)		this->_hx___positionX = ( (Float)(0) );
HXLINE( 430)		this->_hx___positionY = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,clear,(void))

void Graphics_obj::copyFrom( ::openfl::display::Graphics sourceGraphics){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_445_copyFrom)
HXLINE( 446)		 ::openfl::geom::Rectangle _hx_tmp;
HXDLIN( 446)		if (::hx::IsNotNull( sourceGraphics->_hx___bounds )) {
HXLINE( 446)			_hx_tmp = sourceGraphics->_hx___bounds->clone();
            		}
            		else {
HXLINE( 446)			_hx_tmp = null();
            		}
HXDLIN( 446)		this->_hx___bounds = _hx_tmp;
HXLINE( 447)		this->_hx___commands = sourceGraphics->_hx___commands->copy();
HXLINE( 448)		this->set___dirty(true);
HXLINE( 449)		this->_hx___strokePadding = sourceGraphics->_hx___strokePadding;
HXLINE( 450)		this->_hx___positionX = sourceGraphics->_hx___positionX;
HXLINE( 451)		this->_hx___positionY = sourceGraphics->_hx___positionY;
HXLINE( 452)		this->_hx___transformDirty = true;
HXLINE( 453)		this->_hx___visible = sourceGraphics->_hx___visible;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,copyFrom,(void))

void Graphics_obj::cubicCurveTo(Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_498_cubicCurveTo)
HXLINE( 499)		 ::Dynamic xs = this->_hx___findExtrema(this->_hx___positionX,controlX1,controlX2,anchorX);
HXLINE( 500)		 ::Dynamic ys = this->_hx___findExtrema(this->_hx___positionY,controlY1,controlY2,anchorY);
HXLINE( 502)		this->_hx___inflateBounds((( (Float)(xs->__Field(HX_("min",92,11,53,00),::hx::paccDynamic)) ) - this->_hx___strokePadding),(( (Float)(ys->__Field(HX_("min",92,11,53,00),::hx::paccDynamic)) ) - this->_hx___strokePadding));
HXLINE( 503)		this->_hx___inflateBounds(( (Float)((xs->__Field(HX_("max",a4,0a,53,00),::hx::paccDynamic) + this->_hx___strokePadding)) ),( (Float)((ys->__Field(HX_("max",a4,0a,53,00),::hx::paccDynamic) + this->_hx___strokePadding)) ));
HXLINE( 505)		this->_hx___positionX = anchorX;
HXLINE( 506)		this->_hx___positionY = anchorY;
HXLINE( 508)		this->_hx___commands->cubicCurveTo(controlX1,controlY1,controlX2,controlY2,anchorX,anchorY);
HXLINE( 510)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,cubicCurveTo,(void))

void Graphics_obj::curveTo(Float controlX,Float controlY,Float anchorX,Float anchorY){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_548_curveTo)
HXLINE( 549)		this->_hx___inflateBounds((this->_hx___positionX - this->_hx___strokePadding),(this->_hx___positionY - this->_hx___strokePadding));
HXLINE( 550)		this->_hx___inflateBounds((this->_hx___positionX + this->_hx___strokePadding),(this->_hx___positionY + this->_hx___strokePadding));
HXLINE( 552)		Float ix;
HXLINE( 553)		Float iy;
HXLINE( 555)		bool _hx_tmp;
HXDLIN( 555)		bool _hx_tmp1;
HXDLIN( 555)		if ((controlX < anchorX)) {
HXLINE( 555)			_hx_tmp1 = (controlX > this->_hx___positionX);
            		}
            		else {
HXLINE( 555)			_hx_tmp1 = false;
            		}
HXDLIN( 555)		if (!(_hx_tmp1)) {
HXLINE( 555)			if ((controlX > anchorX)) {
HXLINE( 555)				_hx_tmp = (controlX < this->_hx___positionX);
            			}
            			else {
HXLINE( 555)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 555)			_hx_tmp = true;
            		}
HXDLIN( 555)		if (_hx_tmp) {
HXLINE( 557)			ix = anchorX;
            		}
            		else {
HXLINE( 561)			Float tx = ((this->_hx___positionX - controlX) / ((this->_hx___positionX - (( (Float)(2) ) * controlX)) + anchorX));
HXLINE( 562)			Float iT = (( (Float)(1) ) - tx);
HXDLIN( 562)			ix = ((((iT * iT) * this->_hx___positionX) + (((( (Float)(2) ) * iT) * tx) * controlX)) + ((tx * tx) * anchorX));
            		}
HXLINE( 565)		bool _hx_tmp2;
HXDLIN( 565)		bool _hx_tmp3;
HXDLIN( 565)		if ((controlY < anchorY)) {
HXLINE( 565)			_hx_tmp3 = (controlY > this->_hx___positionY);
            		}
            		else {
HXLINE( 565)			_hx_tmp3 = false;
            		}
HXDLIN( 565)		if (!(_hx_tmp3)) {
HXLINE( 565)			if ((controlY > anchorY)) {
HXLINE( 565)				_hx_tmp2 = (controlY < this->_hx___positionY);
            			}
            			else {
HXLINE( 565)				_hx_tmp2 = false;
            			}
            		}
            		else {
HXLINE( 565)			_hx_tmp2 = true;
            		}
HXDLIN( 565)		if (_hx_tmp2) {
HXLINE( 567)			iy = anchorY;
            		}
            		else {
HXLINE( 571)			Float ty = ((this->_hx___positionY - controlY) / ((this->_hx___positionY - (( (Float)(2) ) * controlY)) + anchorY));
HXLINE( 572)			Float iT = (( (Float)(1) ) - ty);
HXDLIN( 572)			iy = ((((iT * iT) * this->_hx___positionY) + (((( (Float)(2) ) * iT) * ty) * controlY)) + ((ty * ty) * anchorY));
            		}
HXLINE( 575)		this->_hx___inflateBounds((ix - this->_hx___strokePadding),(iy - this->_hx___strokePadding));
HXLINE( 576)		this->_hx___inflateBounds((ix + this->_hx___strokePadding),(iy + this->_hx___strokePadding));
HXLINE( 578)		this->_hx___positionX = anchorX;
HXLINE( 579)		this->_hx___positionY = anchorY;
HXLINE( 581)		this->_hx___inflateBounds((this->_hx___positionX - this->_hx___strokePadding),(this->_hx___positionY - this->_hx___strokePadding));
HXLINE( 582)		this->_hx___inflateBounds((this->_hx___positionX + this->_hx___strokePadding),(this->_hx___positionY + this->_hx___strokePadding));
HXLINE( 584)		this->_hx___commands->curveTo(controlX,controlY,anchorX,anchorY);
HXLINE( 586)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,curveTo,(void))

void Graphics_obj::drawCircle(Float x,Float y,Float radius){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_594_drawCircle)
HXLINE( 595)		if ((radius <= 0)) {
HXLINE( 595)			return;
            		}
HXLINE( 597)		this->_hx___inflateBounds(((x - radius) - this->_hx___strokePadding),((y - radius) - this->_hx___strokePadding));
HXLINE( 598)		this->_hx___inflateBounds(((x + radius) + this->_hx___strokePadding),((y + radius) + this->_hx___strokePadding));
HXLINE( 600)		this->_hx___commands->drawCircle(x,y,radius);
HXLINE( 602)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawCircle,(void))

void Graphics_obj::drawEllipse(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_624_drawEllipse)
HXLINE( 625)		bool _hx_tmp;
HXDLIN( 625)		if (!((width <= 0))) {
HXLINE( 625)			_hx_tmp = (height <= 0);
            		}
            		else {
HXLINE( 625)			_hx_tmp = true;
            		}
HXDLIN( 625)		if (_hx_tmp) {
HXLINE( 625)			return;
            		}
HXLINE( 627)		this->_hx___inflateBounds((x - this->_hx___strokePadding),(y - this->_hx___strokePadding));
HXLINE( 628)		this->_hx___inflateBounds(((x + width) + this->_hx___strokePadding),((y + height) + this->_hx___strokePadding));
HXLINE( 630)		this->_hx___commands->drawEllipse(x,y,width,height);
HXLINE( 632)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawEllipse,(void))

void Graphics_obj::drawGraphicsData( ::openfl::_Vector::ObjectVector graphicsData){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_648_drawGraphicsData)
HXLINE( 649)		 ::openfl::display::GraphicsSolidFill fill;
HXLINE( 650)		 ::openfl::display::GraphicsBitmapFill bitmapFill;
HXLINE( 651)		 ::openfl::display::GraphicsGradientFill gradientFill;
HXLINE( 652)		 ::openfl::display::GraphicsShaderFill shaderFill;
HXLINE( 653)		 ::openfl::display::GraphicsStroke stroke;
HXLINE( 654)		 ::openfl::display::GraphicsPath path;
HXLINE( 655)		 ::openfl::display::GraphicsTrianglePath trianglePath;
HXLINE( 656)		 ::openfl::display::GraphicsQuadPath quadPath;
HXLINE( 658)		{
HXLINE( 658)			 ::Dynamic graphics = graphicsData->iterator();
HXDLIN( 658)			while(( (bool)(graphics->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 658)				::Dynamic graphics1 = graphics->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 660)				switch((int)(( (int)(graphics1->__Field(HX_("__graphicsDataType",0f,5d,4d,46),::hx::paccDynamic)) ))){
            					case (int)0: {
HXLINE( 680)						stroke = ( ( ::openfl::display::GraphicsStroke)(graphics1) );
HXLINE( 682)						if (::hx::IsNotNull( stroke->fill )) {
HXLINE( 684)							 ::Dynamic thickness = stroke->thickness;
HXLINE( 686)							if (::Math_obj::isNaN(( (Float)(thickness) ))) {
HXLINE( 688)								thickness = null();
            							}
HXLINE( 691)							switch((int)(( (int)(stroke->fill->__Field(HX_("__graphicsFillType",e8,75,eb,27),::hx::paccDynamic)) ))){
            								case (int)0: {
HXLINE( 694)									fill = ( ( ::openfl::display::GraphicsSolidFill)(stroke->fill) );
HXLINE( 695)									this->lineStyle(thickness,fill->color,fill->alpha,stroke->pixelHinting,stroke->scaleMode,stroke->caps,stroke->joints,stroke->miterLimit);
            								}
            								break;
            								case (int)1: {
HXLINE( 704)									gradientFill = ( ( ::openfl::display::GraphicsGradientFill)(stroke->fill) );
HXLINE( 705)									this->lineStyle(thickness,0,1,stroke->pixelHinting,stroke->scaleMode,stroke->caps,stroke->joints,stroke->miterLimit);
HXLINE( 706)									this->lineGradientStyle(gradientFill->type,gradientFill->colors,gradientFill->alphas,gradientFill->ratios,gradientFill->matrix,gradientFill->spreadMethod,gradientFill->interpolationMethod,gradientFill->focalPointRatio);
            								}
            								break;
            								case (int)2: {
HXLINE( 699)									bitmapFill = ( ( ::openfl::display::GraphicsBitmapFill)(stroke->fill) );
HXLINE( 700)									this->lineStyle(thickness,0,1,stroke->pixelHinting,stroke->scaleMode,stroke->caps,stroke->joints,stroke->miterLimit);
HXLINE( 701)									this->lineBitmapStyle(bitmapFill->bitmapData,bitmapFill->matrix,bitmapFill->repeat,bitmapFill->smooth);
            								}
            								break;
            								default:{
            								}
            							}
            						}
            						else {
HXLINE( 714)							this->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 663)						fill = ( ( ::openfl::display::GraphicsSolidFill)(graphics1) );
HXLINE( 664)						this->beginFill(fill->color,fill->alpha);
            					}
            					break;
            					case (int)2: {
HXLINE( 671)						gradientFill = ( ( ::openfl::display::GraphicsGradientFill)(graphics1) );
HXLINE( 672)						this->beginGradientFill(gradientFill->type,gradientFill->colors,gradientFill->alphas,gradientFill->ratios,gradientFill->matrix,gradientFill->spreadMethod,gradientFill->interpolationMethod,gradientFill->focalPointRatio);
            					}
            					break;
            					case (int)3: {
HXLINE( 718)						path = ( ( ::openfl::display::GraphicsPath)(graphics1) );
HXLINE( 719)						this->drawPath(path->commands,path->data,path->winding);
            					}
            					break;
            					case (int)4: {
HXLINE( 667)						bitmapFill = ( ( ::openfl::display::GraphicsBitmapFill)(graphics1) );
HXLINE( 668)						this->beginBitmapFill(bitmapFill->bitmapData,bitmapFill->matrix,bitmapFill->repeat,bitmapFill->smooth);
            					}
            					break;
            					case (int)5: {
HXLINE( 726)						this->endFill();
            					}
            					break;
            					case (int)6: {
HXLINE( 729)						quadPath = ( ( ::openfl::display::GraphicsQuadPath)(graphics1) );
HXLINE( 730)						this->drawQuads(quadPath->rects,quadPath->indices,quadPath->transforms);
            					}
            					break;
            					case (int)7: {
HXLINE( 722)						trianglePath = ( ( ::openfl::display::GraphicsTrianglePath)(graphics1) );
HXLINE( 723)						this->drawTriangles(trianglePath->vertices,trianglePath->indices,trianglePath->uvtData,trianglePath->culling);
            					}
            					break;
            					case (int)8: {
HXLINE( 676)						shaderFill = ( ( ::openfl::display::GraphicsShaderFill)(graphics1) );
HXLINE( 677)						this->beginShaderFill(shaderFill->shader,shaderFill->matrix);
            					}
            					break;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,drawGraphicsData,(void))

void Graphics_obj::drawPath( ::openfl::_Vector::IntVector commands, ::openfl::_Vector::FloatVector data, ::Dynamic __o_winding){
            		 ::Dynamic winding = __o_winding;
            		if (::hx::IsNull(__o_winding)) winding = 0;
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_781_drawPath)
HXLINE( 782)		int dataIndex = 0;
HXLINE( 784)		if (::hx::IsEq( winding,1 )) {
HXLINE( 784)			this->_hx___commands->windingNonZero();
            		}
HXLINE( 786)		{
HXLINE( 786)			 ::Dynamic command = commands->iterator();
HXDLIN( 786)			while(( (bool)(command->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 786)				int command1 = ( (int)(command->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 788)				switch((int)(command1)){
            					case (int)1: {
HXLINE( 791)						Float _hx_tmp = data->get(dataIndex);
HXDLIN( 791)						this->moveTo(_hx_tmp,data->get((dataIndex + 1)));
HXLINE( 792)						dataIndex = (dataIndex + 2);
            					}
            					break;
            					case (int)2: {
HXLINE( 795)						Float _hx_tmp = data->get(dataIndex);
HXDLIN( 795)						this->lineTo(_hx_tmp,data->get((dataIndex + 1)));
HXLINE( 796)						dataIndex = (dataIndex + 2);
            					}
            					break;
            					case (int)3: {
HXLINE( 809)						Float _hx_tmp = data->get(dataIndex);
HXDLIN( 809)						Float _hx_tmp1 = data->get((dataIndex + 1));
HXDLIN( 809)						Float _hx_tmp2 = data->get((dataIndex + 2));
HXDLIN( 809)						this->curveTo(_hx_tmp,_hx_tmp1,_hx_tmp2,data->get((dataIndex + 3)));
HXLINE( 810)						dataIndex = (dataIndex + 4);
            					}
            					break;
            					case (int)4: {
HXLINE( 799)						Float _hx_tmp = data->get((dataIndex + 2));
HXDLIN( 799)						this->moveTo(_hx_tmp,data->get((dataIndex + 3)));
HXLINE( 800)						goto _hx_goto_18;
            					}
            					break;
            					case (int)5: {
HXLINE( 804)						Float _hx_tmp = data->get((dataIndex + 2));
HXDLIN( 804)						this->lineTo(_hx_tmp,data->get((dataIndex + 3)));
HXLINE( 805)						goto _hx_goto_18;
            					}
            					break;
            					case (int)6: {
HXLINE( 813)						Float _hx_tmp = data->get(dataIndex);
HXDLIN( 813)						Float _hx_tmp1 = data->get((dataIndex + 1));
HXDLIN( 813)						Float _hx_tmp2 = data->get((dataIndex + 2));
HXDLIN( 813)						Float _hx_tmp3 = data->get((dataIndex + 3));
HXDLIN( 813)						Float _hx_tmp4 = data->get((dataIndex + 4));
HXDLIN( 813)						this->cubicCurveTo(_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3,_hx_tmp4,data->get((dataIndex + 5)));
HXLINE( 814)						dataIndex = (dataIndex + 6);
            					}
            					break;
            					default:{
            					}
            				}
            			}
            			_hx_goto_18:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawPath,(void))

void Graphics_obj::drawQuads( ::openfl::_Vector::FloatVector rects, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector transforms){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_854_drawQuads)
HXLINE( 855)		if (::hx::IsNull( rects )) {
HXLINE( 855)			return;
            		}
HXLINE( 857)		bool hasIndices = ::hx::IsNotNull( indices );
HXLINE( 858)		bool transformABCD = false;
HXDLIN( 858)		bool transformXY = false;
HXLINE( 860)		int length;
HXDLIN( 860)		if (hasIndices) {
HXLINE( 860)			length = indices->get_length();
            		}
            		else {
HXLINE( 860)			length = ::Math_obj::floor((( (Float)(rects->get_length()) ) / ( (Float)(4) )));
            		}
HXLINE( 861)		if ((length == 0)) {
HXLINE( 861)			return;
            		}
HXLINE( 863)		if (::hx::IsNotNull( transforms )) {
HXLINE( 865)			if ((transforms->get_length() >= (length * 6))) {
HXLINE( 867)				transformABCD = true;
HXLINE( 868)				transformXY = true;
            			}
            			else {
HXLINE( 870)				if ((transforms->get_length() >= (length * 4))) {
HXLINE( 872)					transformABCD = true;
            				}
            				else {
HXLINE( 874)					if ((transforms->get_length() >= (length * 2))) {
HXLINE( 876)						transformXY = true;
            					}
            				}
            			}
            		}
HXLINE( 880)		 ::openfl::geom::Rectangle tileRect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 881)		 ::openfl::geom::Matrix tileTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 883)		Float minX = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 884)		Float minY = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 885)		Float maxX = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 886)		Float maxY = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 888)		int ri;
HXLINE( 889)		int ti;
HXLINE( 891)		{
HXLINE( 891)			int _g = 0;
HXDLIN( 891)			int _g1 = length;
HXDLIN( 891)			while((_g < _g1)){
HXLINE( 891)				_g = (_g + 1);
HXDLIN( 891)				int i = (_g - 1);
HXLINE( 893)				if (hasIndices) {
HXLINE( 893)					ri = (indices->get(i) * 4);
            				}
            				else {
HXLINE( 893)					ri = (i * 4);
            				}
HXLINE( 894)				if ((ri < 0)) {
HXLINE( 894)					continue;
            				}
HXLINE( 895)				Float _hx_tmp = rects->get((ri + 2));
HXDLIN( 895)				tileRect->setTo(( (Float)(0) ),( (Float)(0) ),_hx_tmp,rects->get((ri + 3)));
HXLINE( 897)				bool _hx_tmp1;
HXDLIN( 897)				if (!((tileRect->width <= 0))) {
HXLINE( 897)					_hx_tmp1 = (tileRect->height <= 0);
            				}
            				else {
HXLINE( 897)					_hx_tmp1 = true;
            				}
HXDLIN( 897)				if (_hx_tmp1) {
HXLINE( 899)					continue;
            				}
HXLINE( 902)				bool _hx_tmp2;
HXDLIN( 902)				if (transformABCD) {
HXLINE( 902)					_hx_tmp2 = transformXY;
            				}
            				else {
HXLINE( 902)					_hx_tmp2 = false;
            				}
HXDLIN( 902)				if (_hx_tmp2) {
HXLINE( 904)					ti = (i * 6);
HXLINE( 905)					Float _hx_tmp = transforms->get(ti);
HXDLIN( 905)					Float _hx_tmp1 = transforms->get((ti + 1));
HXDLIN( 905)					Float _hx_tmp2 = transforms->get((ti + 2));
HXDLIN( 905)					Float _hx_tmp3 = transforms->get((ti + 3));
HXDLIN( 905)					Float _hx_tmp4 = transforms->get((ti + 4));
HXDLIN( 905)					tileTransform->setTo(_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3,_hx_tmp4,transforms->get((ti + 5)));
            				}
            				else {
HXLINE( 907)					if (transformABCD) {
HXLINE( 909)						ti = (i * 4);
HXLINE( 910)						Float _hx_tmp = transforms->get(ti);
HXDLIN( 910)						Float _hx_tmp1 = transforms->get((ti + 1));
HXDLIN( 910)						Float _hx_tmp2 = transforms->get((ti + 2));
HXDLIN( 910)						tileTransform->setTo(_hx_tmp,_hx_tmp1,_hx_tmp2,transforms->get((ti + 3)),tileRect->x,tileRect->y);
            					}
            					else {
HXLINE( 912)						if (transformXY) {
HXLINE( 914)							ti = (i * 2);
HXLINE( 915)							tileTransform->tx = transforms->get(ti);
HXLINE( 916)							tileTransform->ty = transforms->get((ti + 1));
            						}
            						else {
HXLINE( 920)							tileTransform->tx = tileRect->x;
HXLINE( 921)							tileTransform->ty = tileRect->y;
            						}
            					}
            				}
HXLINE( 924)				tileRect->_hx___transform(tileRect,tileTransform);
HXLINE( 926)				if ((minX > tileRect->x)) {
HXLINE( 926)					minX = tileRect->x;
            				}
HXLINE( 927)				if ((minY > tileRect->y)) {
HXLINE( 927)					minY = tileRect->y;
            				}
HXLINE( 928)				if ((maxX < tileRect->get_right())) {
HXLINE( 928)					maxX = tileRect->get_right();
            				}
HXLINE( 929)				if ((maxY < tileRect->get_bottom())) {
HXLINE( 929)					maxY = tileRect->get_bottom();
            				}
            			}
            		}
HXLINE( 932)		this->_hx___inflateBounds(minX,minY);
HXLINE( 933)		this->_hx___inflateBounds(maxX,maxY);
HXLINE( 935)		this->_hx___commands->drawQuads(rects,indices,transforms);
HXLINE( 937)		this->set___dirty(true);
HXLINE( 938)		this->_hx___visible = true;
HXLINE( 940)		::openfl::geom::Rectangle_obj::_hx___pool->release(tileRect);
HXLINE( 941)		::openfl::geom::Matrix_obj::_hx___pool->release(tileTransform);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawQuads,(void))

void Graphics_obj::drawRect(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_964_drawRect)
HXLINE( 965)		bool _hx_tmp;
HXDLIN( 965)		if ((width == 0)) {
HXLINE( 965)			_hx_tmp = (height == 0);
            		}
            		else {
HXLINE( 965)			_hx_tmp = false;
            		}
HXDLIN( 965)		if (_hx_tmp) {
HXLINE( 965)			return;
            		}
HXLINE( 967)		int xSign;
HXDLIN( 967)		if ((width < 0)) {
HXLINE( 967)			xSign = -1;
            		}
            		else {
HXLINE( 967)			xSign = 1;
            		}
HXLINE( 968)		int ySign;
HXDLIN( 968)		if ((height < 0)) {
HXLINE( 968)			ySign = -1;
            		}
            		else {
HXLINE( 968)			ySign = 1;
            		}
HXLINE( 970)		this->_hx___inflateBounds((x - (this->_hx___strokePadding * ( (Float)(xSign) ))),(y - (this->_hx___strokePadding * ( (Float)(ySign) ))));
HXLINE( 971)		this->_hx___inflateBounds(((x + width) + (this->_hx___strokePadding * ( (Float)(xSign) ))),((y + height) + (this->_hx___strokePadding * ( (Float)(ySign) ))));
HXLINE( 973)		this->_hx___commands->drawRect(x,y,width,height);
HXLINE( 975)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawRect,(void))

void Graphics_obj::drawRoundRect(Float x,Float y,Float width,Float height,Float ellipseWidth, ::Dynamic ellipseHeight){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1007_drawRoundRect)
HXLINE(1008)		bool _hx_tmp;
HXDLIN(1008)		if ((width == 0)) {
HXLINE(1008)			_hx_tmp = (height == 0);
            		}
            		else {
HXLINE(1008)			_hx_tmp = false;
            		}
HXDLIN(1008)		if (_hx_tmp) {
HXLINE(1008)			return;
            		}
HXLINE(1010)		int xSign;
HXDLIN(1010)		if ((width < 0)) {
HXLINE(1010)			xSign = -1;
            		}
            		else {
HXLINE(1010)			xSign = 1;
            		}
HXLINE(1011)		int ySign;
HXDLIN(1011)		if ((height < 0)) {
HXLINE(1011)			ySign = -1;
            		}
            		else {
HXLINE(1011)			ySign = 1;
            		}
HXLINE(1013)		this->_hx___inflateBounds((x - (this->_hx___strokePadding * ( (Float)(xSign) ))),(y - (this->_hx___strokePadding * ( (Float)(ySign) ))));
HXLINE(1014)		this->_hx___inflateBounds(((x + width) + (this->_hx___strokePadding * ( (Float)(xSign) ))),((y + height) + (this->_hx___strokePadding * ( (Float)(ySign) ))));
HXLINE(1016)		this->_hx___commands->drawRoundRect(x,y,width,height,ellipseWidth,ellipseHeight);
HXLINE(1018)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawRoundRect,(void))

void Graphics_obj::drawRoundRectComplex(Float x,Float y,Float width,Float height,Float topLeftRadius,Float topRightRadius,Float bottomLeftRadius,Float bottomRightRadius){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1026_drawRoundRectComplex)
HXLINE(1027)		bool _hx_tmp;
HXDLIN(1027)		if (!((width <= 0))) {
HXLINE(1027)			_hx_tmp = (height <= 0);
            		}
            		else {
HXLINE(1027)			_hx_tmp = true;
            		}
HXDLIN(1027)		if (_hx_tmp) {
HXLINE(1027)			return;
            		}
HXLINE(1029)		this->_hx___inflateBounds((x - this->_hx___strokePadding),(y - this->_hx___strokePadding));
HXLINE(1030)		this->_hx___inflateBounds(((x + width) + this->_hx___strokePadding),((y + height) + this->_hx___strokePadding));
HXLINE(1032)		Float xw = (x + width);
HXLINE(1033)		Float yh = (y + height);
HXLINE(1034)		Float minSize;
HXDLIN(1034)		if ((width < height)) {
HXLINE(1034)			minSize = (width * ( (Float)(2) ));
            		}
            		else {
HXLINE(1034)			minSize = (height * ( (Float)(2) ));
            		}
HXLINE(1035)		if (!((topLeftRadius < minSize))) {
HXLINE(1035)			topLeftRadius = minSize;
            		}
HXLINE(1036)		if (!((topRightRadius < minSize))) {
HXLINE(1036)			topRightRadius = minSize;
            		}
HXLINE(1037)		if (!((bottomLeftRadius < minSize))) {
HXLINE(1037)			bottomLeftRadius = minSize;
            		}
HXLINE(1038)		if (!((bottomRightRadius < minSize))) {
HXLINE(1038)			bottomRightRadius = minSize;
            		}
HXLINE(1040)		Float anchor = (( (Float)(1) ) - ::Math_obj::sin((( (Float)(45) ) * (::Math_obj::PI / ( (Float)(180) )))));
HXLINE(1041)		Float control = (( (Float)(1) ) - ::Math_obj::tan((((Float)22.5) * (::Math_obj::PI / ( (Float)(180) )))));
HXLINE(1043)		Float a = (bottomRightRadius * anchor);
HXLINE(1044)		Float s = (bottomRightRadius * control);
HXLINE(1045)		this->moveTo(xw,(yh - bottomRightRadius));
HXLINE(1046)		this->curveTo(xw,(yh - s),(xw - a),(yh - a));
HXLINE(1047)		this->curveTo((xw - s),yh,(xw - bottomRightRadius),yh);
HXLINE(1049)		a = (bottomLeftRadius * anchor);
HXLINE(1050)		s = (bottomLeftRadius * control);
HXLINE(1051)		this->lineTo((x + bottomLeftRadius),yh);
HXLINE(1052)		this->curveTo((x + s),yh,(x + a),(yh - a));
HXLINE(1053)		this->curveTo(x,(yh - s),x,(yh - bottomLeftRadius));
HXLINE(1055)		a = (topLeftRadius * anchor);
HXLINE(1056)		s = (topLeftRadius * control);
HXLINE(1057)		this->lineTo(x,(y + topLeftRadius));
HXLINE(1058)		this->curveTo(x,(y + s),(x + a),(y + a));
HXLINE(1059)		this->curveTo((x + s),y,(x + topLeftRadius),y);
HXLINE(1061)		a = (topRightRadius * anchor);
HXLINE(1062)		s = (topRightRadius * control);
HXLINE(1063)		this->lineTo((xw - topRightRadius),y);
HXLINE(1064)		this->curveTo((xw - s),y,(xw - a),(y + a));
HXLINE(1065)		this->curveTo(xw,(y + s),xw,(y + topRightRadius));
HXLINE(1066)		this->lineTo(xw,(yh - bottomRightRadius));
HXLINE(1068)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,drawRoundRectComplex,(void))

void Graphics_obj::drawTriangles( ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvtData, ::Dynamic __o_culling){
            		 ::Dynamic culling = __o_culling;
            		if (::hx::IsNull(__o_culling)) culling = 1;
            	HX_GC_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1093_drawTriangles)
HXLINE(1094)		bool _hx_tmp;
HXDLIN(1094)		if (::hx::IsNotNull( vertices )) {
HXLINE(1094)			_hx_tmp = (vertices->get_length() == 0);
            		}
            		else {
HXLINE(1094)			_hx_tmp = true;
            		}
HXDLIN(1094)		if (_hx_tmp) {
HXLINE(1094)			return;
            		}
HXLINE(1096)		int vertLength = ::Std_obj::_hx_int((( (Float)(vertices->get_length()) ) / ( (Float)(2) )));
HXLINE(1098)		if (::hx::IsNull( indices )) {
HXLINE(1102)			if ((::hx::Mod(vertLength,3) != 0)) {
HXLINE(1104)				HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("Not enough vertices to close a triangle.",fe,c6,58,0d)));
            			}
HXLINE(1107)			int length = null();
HXDLIN(1107)			bool fixed = null();
HXDLIN(1107)			::Array< int > array = null();
HXDLIN(1107)			indices =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,array);
HXLINE(1109)			{
HXLINE(1109)				int _g = 0;
HXDLIN(1109)				int _g1 = vertLength;
HXDLIN(1109)				while((_g < _g1)){
HXLINE(1109)					_g = (_g + 1);
HXDLIN(1109)					int i = (_g - 1);
HXLINE(1111)					indices->push(i);
            				}
            			}
            		}
HXLINE(1115)		if (::hx::IsNull( culling )) {
HXLINE(1117)			culling = 1;
            		}
HXLINE(1120)		Float x;
HXLINE(1121)		Float y;
HXLINE(1122)		Float minX = ::Math_obj::POSITIVE_INFINITY;
HXLINE(1123)		Float minY = ::Math_obj::POSITIVE_INFINITY;
HXLINE(1124)		Float maxX = ::Math_obj::NEGATIVE_INFINITY;
HXLINE(1125)		Float maxY = ::Math_obj::NEGATIVE_INFINITY;
HXLINE(1127)		{
HXLINE(1127)			int _g = 0;
HXDLIN(1127)			int _g1 = vertLength;
HXDLIN(1127)			while((_g < _g1)){
HXLINE(1127)				_g = (_g + 1);
HXDLIN(1127)				int i = (_g - 1);
HXLINE(1129)				x = vertices->get((i * 2));
HXLINE(1130)				y = vertices->get(((i * 2) + 1));
HXLINE(1132)				if ((minX > x)) {
HXLINE(1132)					minX = x;
            				}
HXLINE(1133)				if ((minY > y)) {
HXLINE(1133)					minY = y;
            				}
HXLINE(1134)				if ((maxX < x)) {
HXLINE(1134)					maxX = x;
            				}
HXLINE(1135)				if ((maxY < y)) {
HXLINE(1135)					maxY = y;
            				}
            			}
            		}
HXLINE(1138)		this->_hx___inflateBounds(minX,minY);
HXLINE(1139)		this->_hx___inflateBounds(maxX,maxY);
HXLINE(1141)		this->_hx___commands->drawTriangles(vertices,indices,uvtData,culling);
HXLINE(1143)		this->set___dirty(true);
HXLINE(1144)		this->_hx___visible = true;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawTriangles,(void))

void Graphics_obj::endFill(){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1160_endFill)
HXDLIN(1160)		this->_hx___commands->endFill();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,endFill,(void))

void Graphics_obj::lineBitmapStyle( ::openfl::display::BitmapData bitmap, ::openfl::geom::Matrix matrix,::hx::Null< bool >  __o_repeat,::hx::Null< bool >  __o_smooth){
            		bool repeat = __o_repeat.Default(true);
            		bool smooth = __o_smooth.Default(false);
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1194_lineBitmapStyle)
HXDLIN(1194)		 ::openfl::display::_internal::DrawCommandBuffer _hx_tmp = this->_hx___commands;
HXDLIN(1194)		 ::openfl::geom::Matrix _hx_tmp1;
HXDLIN(1194)		if (::hx::IsNotNull( matrix )) {
HXDLIN(1194)			_hx_tmp1 = matrix->clone();
            		}
            		else {
HXDLIN(1194)			_hx_tmp1 = null();
            		}
HXDLIN(1194)		_hx_tmp->lineBitmapStyle(bitmap,_hx_tmp1,repeat,smooth);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,lineBitmapStyle,(void))

void Graphics_obj::lineGradientStyle( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic __o_spreadMethod, ::Dynamic __o_interpolationMethod,::hx::Null< Float >  __o_focalPointRatio){
            		 ::Dynamic spreadMethod = __o_spreadMethod;
            		if (::hx::IsNull(__o_spreadMethod)) spreadMethod = 0;
            		 ::Dynamic interpolationMethod = __o_interpolationMethod;
            		if (::hx::IsNull(__o_interpolationMethod)) interpolationMethod = 1;
            		Float focalPointRatio = __o_focalPointRatio.Default(0);
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1274_lineGradientStyle)
HXLINE(1275)		if (::hx::IsNull( alphas )) {
HXLINE(1277)			alphas = ::Array_obj< Float >::__new(0);
HXLINE(1279)			{
HXLINE(1279)				int _g = 0;
HXDLIN(1279)				int _g1 = colors->length;
HXDLIN(1279)				while((_g < _g1)){
HXLINE(1279)					_g = (_g + 1);
HXDLIN(1279)					int i = (_g - 1);
HXLINE(1281)					alphas->push(1);
            				}
            			}
            		}
HXLINE(1285)		if (::hx::IsNull( ratios )) {
HXLINE(1287)			ratios = ::Array_obj< int >::__new(0);
HXLINE(1289)			{
HXLINE(1289)				int _g = 0;
HXDLIN(1289)				int _g1 = colors->length;
HXDLIN(1289)				while((_g < _g1)){
HXLINE(1289)					_g = (_g + 1);
HXDLIN(1289)					int i = (_g - 1);
HXLINE(1291)					ratios->push(::Math_obj::ceil(((( (Float)(i) ) / ( (Float)((colors->length - 1)) )) * ( (Float)(255) ))));
            				}
            			}
            		}
HXLINE(1294)		this->_hx___commands->lineGradientStyle(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,focalPointRatio);
            	}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineGradientStyle,(void))

void Graphics_obj::lineStyle( ::Dynamic thickness,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha,::hx::Null< bool >  __o_pixelHinting, ::Dynamic __o_scaleMode, ::Dynamic caps, ::Dynamic joints,::hx::Null< Float >  __o_miterLimit){
            		int color = __o_color.Default(0);
            		Float alpha = __o_alpha.Default(1);
            		bool pixelHinting = __o_pixelHinting.Default(false);
            		 ::Dynamic scaleMode = __o_scaleMode;
            		if (::hx::IsNull(__o_scaleMode)) scaleMode = 2;
            		Float miterLimit = __o_miterLimit.Default(3);
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1478_lineStyle)
HXLINE(1479)		if (::hx::IsNull( caps )) {
HXLINE(1481)			caps = 1;
            		}
HXLINE(1484)		if (::hx::IsNull( joints )) {
HXLINE(1486)			joints = 2;
            		}
HXLINE(1489)		if (::hx::IsNotNull( thickness )) {
HXLINE(1491)			if (::hx::IsEq( joints,1 )) {
HXLINE(1493)				if (::hx::IsGreater( thickness,this->_hx___strokePadding )) {
HXLINE(1493)					this->_hx___strokePadding = ( (Float)(::Math_obj::ceil(( (Float)(thickness) ))) );
            				}
            			}
            			else {
HXLINE(1497)				if (((( (Float)(thickness) ) / ( (Float)(2) )) > this->_hx___strokePadding)) {
HXLINE(1497)					this->_hx___strokePadding = ( (Float)(::Math_obj::ceil((( (Float)(thickness) ) / ( (Float)(2) )))) );
            				}
            			}
            		}
HXLINE(1501)		this->_hx___commands->lineStyle(thickness,color,alpha,pixelHinting,scaleMode,caps,joints,miterLimit);
HXLINE(1503)		if (::hx::IsNotNull( thickness )) {
HXLINE(1503)			this->_hx___visible = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineStyle,(void))

void Graphics_obj::lineTo(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1525_lineTo)
HXLINE(1526)		bool _hx_tmp;
HXDLIN(1526)		if (::Math_obj::isFinite(x)) {
HXLINE(1526)			_hx_tmp = !(::Math_obj::isFinite(y));
            		}
            		else {
HXLINE(1526)			_hx_tmp = true;
            		}
HXDLIN(1526)		if (_hx_tmp) {
HXLINE(1528)			return;
            		}
HXLINE(1533)		this->_hx___inflateBounds((this->_hx___positionX - this->_hx___strokePadding),(this->_hx___positionY - this->_hx___strokePadding));
HXLINE(1534)		this->_hx___inflateBounds((this->_hx___positionX + this->_hx___strokePadding),(this->_hx___positionY + this->_hx___strokePadding));
HXLINE(1536)		this->_hx___positionX = x;
HXLINE(1537)		this->_hx___positionY = y;
HXLINE(1539)		this->_hx___inflateBounds((this->_hx___positionX - this->_hx___strokePadding),(this->_hx___positionY - this->_hx___strokePadding));
HXLINE(1540)		this->_hx___inflateBounds((this->_hx___positionX + (this->_hx___strokePadding * ( (Float)(2) ))),(this->_hx___positionY + this->_hx___strokePadding));
HXLINE(1542)		this->_hx___commands->lineTo(x,y);
HXLINE(1544)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,lineTo,(void))

void Graphics_obj::moveTo(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1558_moveTo)
HXLINE(1559)		this->_hx___positionX = x;
HXLINE(1560)		this->_hx___positionY = y;
HXLINE(1562)		this->_hx___commands->moveTo(x,y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,moveTo,(void))

void Graphics_obj::overrideBlendMode( ::Dynamic blendMode){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1567_overrideBlendMode)
HXLINE(1568)		if (::hx::IsNull( blendMode )) {
HXLINE(1568)			blendMode = 10;
            		}
HXLINE(1569)		this->_hx___commands->overrideBlendMode(blendMode);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,overrideBlendMode,(void))

 ::openfl::_Vector::ObjectVector Graphics_obj::readGraphicsData(::hx::Null< bool >  __o_recurse){
            		bool recurse = __o_recurse.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1624_readGraphicsData)
HXLINE(1625)		int length = null();
HXDLIN(1625)		bool fixed = null();
HXDLIN(1625)		::Array< ::Dynamic> array = null();
HXDLIN(1625)		 ::openfl::_Vector::ObjectVector graphicsData =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(1626)		this->_hx___owner->_hx___readGraphicsData(graphicsData,recurse);
HXLINE(1627)		return graphicsData;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,readGraphicsData,return )

Float Graphics_obj::_hx___calculateBezierCubicPoint(Float t,Float p1,Float p2,Float p3,Float p4){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1632___calculateBezierCubicPoint)
HXLINE(1633)		Float iT = (( (Float)(1) ) - t);
HXLINE(1634)		return ((((p1 * ((iT * iT) * iT)) + (((( (Float)(3) ) * p2) * t) * (iT * iT))) + (((( (Float)(3) ) * p3) * iT) * (t * t))) + (p4 * ((t * t) * t)));
            	}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,_hx___calculateBezierCubicPoint,return )

Float Graphics_obj::_hx___calculateBezierQuadPoint(Float t,Float p1,Float p2,Float p3){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1639___calculateBezierQuadPoint)
HXLINE(1640)		Float iT = (( (Float)(1) ) - t);
HXLINE(1641)		return ((((iT * iT) * p1) + (((( (Float)(2) ) * iT) * t) * p2)) + ((t * t) * p3));
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,_hx___calculateBezierQuadPoint,return )

void Graphics_obj::_hx___cleanup(){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1645___cleanup)
HXLINE(1653)		if (::hx::IsNotNull( this->_hx___bounds )) {
HXLINE(1655)			this->set___dirty(true);
HXLINE(1656)			this->_hx___transformDirty = true;
            		}
HXLINE(1660)		this->_hx___bitmap = null();
HXLINE(1666)		this->_hx___cairo = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,_hx___cleanup,(void))

void Graphics_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1671___getBounds)
HXLINE(1672)		if (::hx::IsNull( this->_hx___bounds )) {
HXLINE(1672)			return;
            		}
HXLINE(1674)		 ::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(1675)		this->_hx___bounds->_hx___transform(bounds,matrix);
HXLINE(1676)		rect->_hx___expand(bounds->x,bounds->y,bounds->width,bounds->height);
HXLINE(1677)		::openfl::geom::Rectangle_obj::_hx___pool->release(bounds);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,_hx___getBounds,(void))

bool Graphics_obj::_hx___hitTest(Float x,Float y,bool shapeFlag, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1681___hitTest)
HXLINE(1682)		if (::hx::IsNull( this->_hx___bounds )) {
HXLINE(1682)			return false;
            		}
HXLINE(1684)		Float norm = ((matrix->a * matrix->d) - (matrix->b * matrix->c));
HXDLIN(1684)		Float px;
HXDLIN(1684)		if ((norm == 0)) {
HXLINE(1684)			px = -(matrix->tx);
            		}
            		else {
HXLINE(1684)			px = ((((Float)1.0) / norm) * ((matrix->c * (matrix->ty - y)) + (matrix->d * (x - matrix->tx))));
            		}
HXLINE(1685)		Float norm1 = ((matrix->a * matrix->d) - (matrix->b * matrix->c));
HXDLIN(1685)		Float py;
HXDLIN(1685)		if ((norm1 == 0)) {
HXLINE(1685)			py = -(matrix->ty);
            		}
            		else {
HXLINE(1685)			py = ((((Float)1.0) / norm1) * ((matrix->a * (y - matrix->ty)) + (matrix->b * (matrix->tx - x))));
            		}
HXLINE(1687)		bool _hx_tmp;
HXDLIN(1687)		bool _hx_tmp1;
HXDLIN(1687)		if ((px > this->_hx___bounds->x)) {
HXLINE(1687)			_hx_tmp1 = (py > this->_hx___bounds->y);
            		}
            		else {
HXLINE(1687)			_hx_tmp1 = false;
            		}
HXDLIN(1687)		if (_hx_tmp1) {
HXLINE(1687)			_hx_tmp = this->_hx___bounds->contains(px,py);
            		}
            		else {
HXLINE(1687)			_hx_tmp = false;
            		}
HXDLIN(1687)		if (_hx_tmp) {
HXLINE(1689)			if (shapeFlag) {
HXLINE(1694)				return ::openfl::display::_internal::CairoGraphics_obj::hitTest(::hx::ObjectPtr<OBJ_>(this),px,py);
            			}
HXLINE(1698)			return true;
            		}
HXLINE(1701)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,_hx___hitTest,return )

 ::Dynamic Graphics_obj::_hx___findExtrema(Float p1,Float p2,Float p3,Float p4){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1705___findExtrema)
HXLINE(1706)		::Array< Float > solutions = ::Array_obj< Float >::__new(0);
HXLINE(1707)		bool _hx_tmp;
HXDLIN(1707)		bool _hx_tmp1;
HXDLIN(1707)		bool _hx_tmp2;
HXDLIN(1707)		if ((p2 < p4)) {
HXLINE(1707)			_hx_tmp2 = (p2 > p1);
            		}
            		else {
HXLINE(1707)			_hx_tmp2 = false;
            		}
HXDLIN(1707)		if (!(_hx_tmp2)) {
HXLINE(1707)			if ((p2 > p4)) {
HXLINE(1707)				_hx_tmp1 = (p2 < p1);
            			}
            			else {
HXLINE(1707)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE(1707)			_hx_tmp1 = true;
            		}
HXDLIN(1707)		if (_hx_tmp1) {
HXLINE(1707)			bool _hx_tmp1;
HXDLIN(1707)			if ((p3 < p4)) {
HXLINE(1707)				_hx_tmp1 = (p3 > p1);
            			}
            			else {
HXLINE(1707)				_hx_tmp1 = false;
            			}
HXDLIN(1707)			if (!(_hx_tmp1)) {
HXLINE(1707)				if ((p3 > p4)) {
HXLINE(1707)					_hx_tmp = (p3 < p1);
            				}
            				else {
HXLINE(1707)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE(1707)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(1707)			_hx_tmp = false;
            		}
HXDLIN(1707)		if (!(_hx_tmp)) {
HXLINE(1711)			Float a = (((-(p1) + (( (Float)(3) ) * p2)) + p4) - (( (Float)(3) ) * p3));
HXLINE(1712)			Float b = (((( (Float)(2) ) * p1) - (( (Float)(4) ) * p2)) + (( (Float)(2) ) * p3));
HXLINE(1713)			Float c = (p2 - p1);
HXLINE(1715)			Float d = ((b * b) - ((( (Float)(4) ) * a) * c));
HXLINE(1716)			if ((a == 0)) {
HXLINE(1718)				Float t = (-(c) / b);
HXLINE(1719)				bool _hx_tmp;
HXDLIN(1719)				if ((t > 0)) {
HXLINE(1719)					_hx_tmp = (t < 1);
            				}
            				else {
HXLINE(1719)					_hx_tmp = false;
            				}
HXDLIN(1719)				if (_hx_tmp) {
HXLINE(1721)					Float iT = (( (Float)(1) ) - t);
HXDLIN(1721)					solutions->push(((((p1 * ((iT * iT) * iT)) + (((( (Float)(3) ) * p2) * t) * (iT * iT))) + (((( (Float)(3) ) * p3) * iT) * (t * t))) + (p4 * ((t * t) * t))));
            				}
            			}
            			else {
HXLINE(1724)				if ((d >= 0)) {
HXLINE(1726)					Float t1 = ((-(b) + ::Math_obj::sqrt(d)) / (( (Float)(2) ) * a));
HXLINE(1727)					Float t2 = ((-(b) - ::Math_obj::sqrt(d)) / (( (Float)(2) ) * a));
HXLINE(1728)					bool _hx_tmp;
HXDLIN(1728)					if ((t1 > 0)) {
HXLINE(1728)						_hx_tmp = (t1 < 1);
            					}
            					else {
HXLINE(1728)						_hx_tmp = false;
            					}
HXDLIN(1728)					if (_hx_tmp) {
HXLINE(1730)						Float iT = (( (Float)(1) ) - t1);
HXDLIN(1730)						solutions->push(((((p1 * ((iT * iT) * iT)) + (((( (Float)(3) ) * p2) * t1) * (iT * iT))) + (((( (Float)(3) ) * p3) * iT) * (t1 * t1))) + (p4 * ((t1 * t1) * t1))));
            					}
HXLINE(1732)					bool _hx_tmp1;
HXDLIN(1732)					if ((t2 > 0)) {
HXLINE(1732)						_hx_tmp1 = (t2 < 1);
            					}
            					else {
HXLINE(1732)						_hx_tmp1 = false;
            					}
HXDLIN(1732)					if (_hx_tmp1) {
HXLINE(1734)						Float iT = (( (Float)(1) ) - t2);
HXDLIN(1734)						solutions->push(((((p1 * ((iT * iT) * iT)) + (((( (Float)(3) ) * p2) * t2) * (iT * iT))) + (((( (Float)(3) ) * p3) * iT) * (t2 * t2))) + (p4 * ((t2 * t2) * t2))));
            					}
            				}
            			}
            		}
HXLINE(1738)		Float min = p1;
HXLINE(1739)		Float max = p1;
HXLINE(1740)		solutions->push(p4);
HXLINE(1741)		{
HXLINE(1741)			int _g = 0;
HXDLIN(1741)			while((_g < solutions->length)){
HXLINE(1741)				Float val = solutions->__get(_g);
HXDLIN(1741)				_g = (_g + 1);
HXLINE(1743)				if ((val < min)) {
HXLINE(1745)					min = val;
            				}
HXLINE(1747)				if ((val > max)) {
HXLINE(1749)					max = val;
            				}
            			}
            		}
HXLINE(1752)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("max",a4,0a,53,00),max)
            			->setFixed(1,HX_("min",92,11,53,00),min));
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,_hx___findExtrema,return )

void Graphics_obj::_hx___inflateBounds(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1756___inflateBounds)
HXLINE(1757)		if (::hx::IsNull( this->_hx___bounds )) {
HXLINE(1759)			this->_hx___bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,x,y,0,0);
HXLINE(1760)			this->_hx___transformDirty = true;
HXLINE(1761)			return;
            		}
HXLINE(1764)		if ((x < this->_hx___bounds->x)) {
HXLINE(1766)			 ::openfl::geom::Rectangle fh = this->_hx___bounds;
HXDLIN(1766)			fh->width = (fh->width + (this->_hx___bounds->x - x));
HXLINE(1767)			this->_hx___bounds->x = x;
HXLINE(1768)			this->_hx___transformDirty = true;
            		}
HXLINE(1771)		if ((y < this->_hx___bounds->y)) {
HXLINE(1773)			 ::openfl::geom::Rectangle fh = this->_hx___bounds;
HXDLIN(1773)			fh->height = (fh->height + (this->_hx___bounds->y - y));
HXLINE(1774)			this->_hx___bounds->y = y;
HXLINE(1775)			this->_hx___transformDirty = true;
            		}
HXLINE(1778)		if ((x > (this->_hx___bounds->x + this->_hx___bounds->width))) {
HXLINE(1780)			this->_hx___bounds->width = (x - this->_hx___bounds->x);
            		}
HXLINE(1783)		if ((y > (this->_hx___bounds->y + this->_hx___bounds->height))) {
HXLINE(1785)			this->_hx___bounds->height = (y - this->_hx___bounds->y);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,_hx___inflateBounds,(void))

void Graphics_obj::_hx___readGraphicsData( ::openfl::_Vector::ObjectVector graphicsData){
            	HX_GC_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1790___readGraphicsData)
HXLINE(1791)		 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,this->_hx___commands);
HXLINE(1792)		 ::openfl::display::GraphicsPath path = null();
HXLINE(1793)		 ::openfl::display::GraphicsStroke stroke;
HXLINE(1795)		{
HXLINE(1795)			int _g = 0;
HXDLIN(1795)			::Array< ::Dynamic> _g1 = this->_hx___commands->types;
HXDLIN(1795)			while((_g < _g1->length)){
HXLINE(1795)				 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN(1795)				_g = (_g + 1);
HXLINE(1797)				switch((int)(type->_hx_getIndex())){
            					case (int)4: case (int)5: case (int)6: case (int)7: case (int)9: case (int)10: case (int)17: case (int)18: {
HXLINE(1800)						if (::hx::IsNull( path )) {
HXLINE(1802)							path =  ::openfl::display::GraphicsPath_obj::__alloc( HX_CTX ,null(),null(),null());
            						}
            					}
            					break;
            					default:{
HXLINE(1806)						if (::hx::IsNotNull( path )) {
HXLINE(1808)							graphicsData->push(path);
HXLINE(1809)							path = null();
            						}
            					}
            				}
HXLINE(1813)				switch((int)(type->_hx_getIndex())){
            					case (int)0: {
HXLINE(1875)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1875)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1875)								data1->oPos = (data1->oPos + 2);
HXDLIN(1875)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1875)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1875)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1875)								data1->iPos = (data1->iPos + 1);
HXDLIN(1875)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1875)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1875)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1875)								data1->oPos = (data1->oPos + 4);
HXDLIN(1875)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1875)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1875)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1875)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1875)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1875)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1875)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1875)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1875)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1875)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1875)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1875)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1875)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1875)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1875)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1875)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1875)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1875)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1875)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1875)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1875)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1875)								data1->fPos = (data1->fPos + 5);
HXDLIN(1875)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1875)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1875)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1875)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1875)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1875)								data1->oPos = (data1->oPos + 2);
HXDLIN(1875)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1875)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1875)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1875)								data1->oPos = (data1->oPos + 4);
HXDLIN(1875)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1875)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1875)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1875)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1875)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1875)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1875)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1875)								data1->oPos = (data1->oPos + 4);
HXDLIN(1875)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1875)								data2->iPos = (data2->iPos + 1);
HXDLIN(1875)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1875)								data3->fPos = (data3->fPos + 2);
HXDLIN(1875)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1875)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1875)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1875)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1875)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1875)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1875)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1875)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1875)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1875)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1875)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN(1875)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1875)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1876)						graphicsData->push( ::openfl::display::GraphicsBitmapFill_obj::__alloc( HX_CTX ,( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1))));
            					}
            					break;
            					case (int)1: {
HXLINE(1879)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1879)								data1->oPos = (data1->oPos + 2);
HXDLIN(1879)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1879)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1879)								data1->iPos = (data1->iPos + 1);
HXDLIN(1879)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1879)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1879)								data1->oPos = (data1->oPos + 4);
HXDLIN(1879)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1879)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1879)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1879)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1879)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1879)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1879)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1879)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1879)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1879)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1879)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1879)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1879)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1879)								data1->fPos = (data1->fPos + 5);
HXDLIN(1879)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1879)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1879)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1879)								data1->oPos = (data1->oPos + 2);
HXDLIN(1879)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1879)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1879)								data1->oPos = (data1->oPos + 4);
HXDLIN(1879)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1879)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1879)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1879)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1879)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1879)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1879)								data1->oPos = (data1->oPos + 4);
HXDLIN(1879)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1879)								data2->iPos = (data2->iPos + 1);
HXDLIN(1879)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1879)								data3->fPos = (data3->fPos + 2);
HXDLIN(1879)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1879)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1879)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1879)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1879)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1879)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1879)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1879)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXDLIN(1879)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1879)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1880)						graphicsData->push( ::openfl::display::GraphicsSolidFill_obj::__alloc( HX_CTX ,c->buffer->i->__get(c->iPos),1));
            					}
            					break;
            					case (int)2: {
HXLINE(1883)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1883)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1883)								data1->oPos = (data1->oPos + 2);
HXDLIN(1883)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1883)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1883)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1883)								data1->iPos = (data1->iPos + 1);
HXDLIN(1883)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1883)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1883)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1883)								data1->oPos = (data1->oPos + 4);
HXDLIN(1883)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1883)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1883)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1883)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1883)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1883)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1883)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1883)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1883)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1883)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1883)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1883)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1883)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1883)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1883)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1883)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1883)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1883)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1883)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1883)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1883)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1883)								data1->fPos = (data1->fPos + 5);
HXDLIN(1883)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1883)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1883)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1883)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1883)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1883)								data1->oPos = (data1->oPos + 2);
HXDLIN(1883)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1883)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1883)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1883)								data1->oPos = (data1->oPos + 4);
HXDLIN(1883)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1883)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1883)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1883)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1883)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1883)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1883)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1883)								data1->oPos = (data1->oPos + 4);
HXDLIN(1883)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1883)								data2->iPos = (data2->iPos + 1);
HXDLIN(1883)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1883)								data3->fPos = (data3->fPos + 2);
HXDLIN(1883)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1883)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1883)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1883)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1883)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1883)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1883)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1883)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1883)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1883)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1883)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn();
HXDLIN(1883)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1883)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1884)						graphicsData->push( ::openfl::display::GraphicsGradientFill_obj::__alloc( HX_CTX ,c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos)));
            					}
            					break;
            					case (int)3: {
            					}
            					break;
            					case (int)4: {
HXLINE(1816)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->oPos = (data1->oPos + 2);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1816)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->iPos = (data1->iPos + 1);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1816)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->oPos = (data1->oPos + 4);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1816)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1816)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1816)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->fPos = (data1->fPos + 5);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1816)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->oPos = (data1->oPos + 2);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1816)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->oPos = (data1->oPos + 4);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1816)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1816)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1816)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->oPos = (data1->oPos + 4);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1816)								data2->iPos = (data2->iPos + 1);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1816)								data3->fPos = (data3->fPos + 2);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1816)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1816)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXDLIN(1816)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1816)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1817)						path->cubicCurveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->f->__get((c->fPos + 5)));
            					}
            					break;
            					case (int)5: {
HXLINE(1820)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1820)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1820)								data1->oPos = (data1->oPos + 2);
HXDLIN(1820)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1820)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1820)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1820)								data1->iPos = (data1->iPos + 1);
HXDLIN(1820)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1820)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1820)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1820)								data1->oPos = (data1->oPos + 4);
HXDLIN(1820)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1820)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1820)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1820)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1820)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1820)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1820)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1820)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1820)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1820)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1820)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1820)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1820)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1820)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1820)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1820)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1820)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1820)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1820)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1820)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1820)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1820)								data1->fPos = (data1->fPos + 5);
HXDLIN(1820)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1820)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1820)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1820)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1820)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1820)								data1->oPos = (data1->oPos + 2);
HXDLIN(1820)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1820)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1820)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1820)								data1->oPos = (data1->oPos + 4);
HXDLIN(1820)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1820)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1820)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1820)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1820)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1820)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1820)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1820)								data1->oPos = (data1->oPos + 4);
HXDLIN(1820)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1820)								data2->iPos = (data2->iPos + 1);
HXDLIN(1820)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1820)								data3->fPos = (data3->fPos + 2);
HXDLIN(1820)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1820)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1820)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1820)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1820)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1820)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1820)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1820)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1820)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1820)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1820)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXDLIN(1820)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1820)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1821)						path->curveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            					}
            					break;
            					case (int)6: {
HXLINE(1832)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1832)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1832)								data1->oPos = (data1->oPos + 2);
HXDLIN(1832)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1832)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1832)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1832)								data1->iPos = (data1->iPos + 1);
HXDLIN(1832)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1832)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1832)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1832)								data1->oPos = (data1->oPos + 4);
HXDLIN(1832)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1832)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1832)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1832)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1832)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1832)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1832)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1832)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1832)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1832)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1832)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1832)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1832)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1832)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1832)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1832)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1832)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1832)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1832)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1832)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1832)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1832)								data1->fPos = (data1->fPos + 5);
HXDLIN(1832)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1832)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1832)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1832)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1832)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1832)								data1->oPos = (data1->oPos + 2);
HXDLIN(1832)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1832)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1832)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1832)								data1->oPos = (data1->oPos + 4);
HXDLIN(1832)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1832)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1832)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1832)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1832)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1832)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1832)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1832)								data1->oPos = (data1->oPos + 4);
HXDLIN(1832)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1832)								data2->iPos = (data2->iPos + 1);
HXDLIN(1832)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1832)								data3->fPos = (data3->fPos + 2);
HXDLIN(1832)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1832)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1832)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1832)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1832)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1832)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1832)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1832)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1832)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1832)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1832)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXDLIN(1832)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1832)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1833)						path->_hx___drawCircle(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)));
            					}
            					break;
            					case (int)7: {
HXLINE(1836)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1836)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1836)								data1->oPos = (data1->oPos + 2);
HXDLIN(1836)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1836)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1836)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1836)								data1->iPos = (data1->iPos + 1);
HXDLIN(1836)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1836)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1836)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1836)								data1->oPos = (data1->oPos + 4);
HXDLIN(1836)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1836)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1836)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1836)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1836)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1836)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1836)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1836)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1836)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1836)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1836)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1836)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1836)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1836)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1836)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1836)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1836)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1836)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1836)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1836)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1836)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1836)								data1->fPos = (data1->fPos + 5);
HXDLIN(1836)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1836)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1836)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1836)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1836)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1836)								data1->oPos = (data1->oPos + 2);
HXDLIN(1836)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1836)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1836)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1836)								data1->oPos = (data1->oPos + 4);
HXDLIN(1836)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1836)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1836)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1836)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1836)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1836)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1836)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1836)								data1->oPos = (data1->oPos + 4);
HXDLIN(1836)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1836)								data2->iPos = (data2->iPos + 1);
HXDLIN(1836)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1836)								data3->fPos = (data3->fPos + 2);
HXDLIN(1836)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1836)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1836)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1836)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1836)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1836)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1836)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1836)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1836)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1836)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1836)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXDLIN(1836)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1836)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1837)						path->_hx___drawEllipse(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            					}
            					break;
            					case (int)9: {
HXLINE(1840)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1840)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1840)								data1->oPos = (data1->oPos + 2);
HXDLIN(1840)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1840)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1840)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1840)								data1->iPos = (data1->iPos + 1);
HXDLIN(1840)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1840)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1840)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1840)								data1->oPos = (data1->oPos + 4);
HXDLIN(1840)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1840)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1840)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1840)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1840)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1840)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1840)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1840)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1840)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1840)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1840)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1840)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1840)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1840)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1840)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1840)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1840)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1840)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1840)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1840)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1840)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1840)								data1->fPos = (data1->fPos + 5);
HXDLIN(1840)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1840)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1840)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1840)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1840)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1840)								data1->oPos = (data1->oPos + 2);
HXDLIN(1840)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1840)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1840)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1840)								data1->oPos = (data1->oPos + 4);
HXDLIN(1840)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1840)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1840)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1840)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1840)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1840)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1840)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1840)								data1->oPos = (data1->oPos + 4);
HXDLIN(1840)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1840)								data2->iPos = (data2->iPos + 1);
HXDLIN(1840)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1840)								data3->fPos = (data3->fPos + 2);
HXDLIN(1840)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1840)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1840)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1840)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1840)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1840)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1840)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1840)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1840)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1840)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1840)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN(1840)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1840)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1841)						path->_hx___drawRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            					}
            					break;
            					case (int)10: {
HXLINE(1844)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1844)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1844)								data1->oPos = (data1->oPos + 2);
HXDLIN(1844)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1844)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1844)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1844)								data1->iPos = (data1->iPos + 1);
HXDLIN(1844)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1844)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1844)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1844)								data1->oPos = (data1->oPos + 4);
HXDLIN(1844)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1844)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1844)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1844)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1844)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1844)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1844)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1844)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1844)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1844)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1844)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1844)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1844)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1844)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1844)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1844)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1844)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1844)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1844)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1844)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1844)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1844)								data1->fPos = (data1->fPos + 5);
HXDLIN(1844)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1844)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1844)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1844)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1844)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1844)								data1->oPos = (data1->oPos + 2);
HXDLIN(1844)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1844)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1844)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1844)								data1->oPos = (data1->oPos + 4);
HXDLIN(1844)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1844)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1844)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1844)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1844)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1844)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1844)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1844)								data1->oPos = (data1->oPos + 4);
HXDLIN(1844)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1844)								data2->iPos = (data2->iPos + 1);
HXDLIN(1844)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1844)								data3->fPos = (data3->fPos + 2);
HXDLIN(1844)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1844)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1844)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1844)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1844)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1844)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1844)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1844)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1844)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1844)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1844)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXDLIN(1844)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1844)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1845)						Float _hx_tmp;
HXDLIN(1845)						if (::hx::IsNotNull( c->buffer->o->__get(c->oPos) )) {
HXLINE(1845)							_hx_tmp = ( (Float)(c->buffer->o->__get(c->oPos)) );
            						}
            						else {
HXLINE(1845)							_hx_tmp = c->buffer->f->__get((c->fPos + 4));
            						}
HXDLIN(1845)						path->_hx___drawRoundRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),_hx_tmp);
            					}
            					break;
            					case (int)13: {
HXLINE(1871)						{
HXLINE(1871)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1871)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1871)									data1->oPos = (data1->oPos + 2);
HXDLIN(1871)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1871)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1871)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1871)									data1->iPos = (data1->iPos + 1);
HXDLIN(1871)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1871)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1871)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1871)									data1->oPos = (data1->oPos + 4);
HXDLIN(1871)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1871)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1871)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1871)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1871)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1871)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1871)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1871)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1871)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1871)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1871)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1871)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1871)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1871)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1871)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1871)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1871)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1871)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1871)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1871)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1871)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1871)									data1->fPos = (data1->fPos + 5);
HXDLIN(1871)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1871)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1871)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1871)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1871)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1871)									data1->oPos = (data1->oPos + 2);
HXDLIN(1871)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1871)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1871)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1871)									data1->oPos = (data1->oPos + 4);
HXDLIN(1871)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1871)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1871)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1871)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1871)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1871)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1871)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1871)									data1->oPos = (data1->oPos + 4);
HXDLIN(1871)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1871)									data2->iPos = (data2->iPos + 1);
HXDLIN(1871)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1871)									data3->fPos = (data3->fPos + 2);
HXDLIN(1871)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1871)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1871)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1871)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1871)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1871)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1871)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1871)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1871)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1871)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1871)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::END_FILL_dyn();
HXDLIN(1871)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
            						}
HXLINE(1872)						graphicsData->push( ::openfl::display::GraphicsEndFill_obj::__alloc( HX_CTX ));
            					}
            					break;
            					case (int)14: {
HXLINE(1858)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1858)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1858)								data1->oPos = (data1->oPos + 2);
HXDLIN(1858)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1858)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1858)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1858)								data1->iPos = (data1->iPos + 1);
HXDLIN(1858)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1858)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1858)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1858)								data1->oPos = (data1->oPos + 4);
HXDLIN(1858)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1858)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1858)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1858)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1858)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1858)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1858)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1858)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1858)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1858)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1858)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1858)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1858)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1858)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1858)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1858)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1858)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1858)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1858)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1858)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1858)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1858)								data1->fPos = (data1->fPos + 5);
HXDLIN(1858)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1858)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1858)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1858)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1858)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1858)								data1->oPos = (data1->oPos + 2);
HXDLIN(1858)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1858)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1858)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1858)								data1->oPos = (data1->oPos + 4);
HXDLIN(1858)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1858)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1858)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1858)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1858)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1858)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1858)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1858)								data1->oPos = (data1->oPos + 4);
HXDLIN(1858)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1858)								data2->iPos = (data2->iPos + 1);
HXDLIN(1858)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1858)								data3->fPos = (data3->fPos + 2);
HXDLIN(1858)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1858)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1858)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1858)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1858)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1858)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1858)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1858)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1858)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1858)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1858)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn();
HXDLIN(1858)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1858)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1859)						path = null();
            					}
            					break;
            					case (int)15: {
HXLINE(1850)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1850)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1850)								data1->oPos = (data1->oPos + 2);
HXDLIN(1850)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1850)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1850)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1850)								data1->iPos = (data1->iPos + 1);
HXDLIN(1850)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1850)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1850)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1850)								data1->oPos = (data1->oPos + 4);
HXDLIN(1850)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1850)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1850)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1850)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1850)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1850)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1850)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1850)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1850)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1850)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1850)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1850)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1850)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1850)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1850)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1850)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1850)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1850)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1850)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1850)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1850)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1850)								data1->fPos = (data1->fPos + 5);
HXDLIN(1850)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1850)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1850)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1850)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1850)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1850)								data1->oPos = (data1->oPos + 2);
HXDLIN(1850)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1850)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1850)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1850)								data1->oPos = (data1->oPos + 4);
HXDLIN(1850)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1850)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1850)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1850)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1850)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1850)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1850)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1850)								data1->oPos = (data1->oPos + 4);
HXDLIN(1850)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1850)								data2->iPos = (data2->iPos + 1);
HXDLIN(1850)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1850)								data3->fPos = (data3->fPos + 2);
HXDLIN(1850)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1850)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1850)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1850)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1850)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1850)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1850)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1850)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1850)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1850)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1850)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn();
HXDLIN(1850)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1850)						 ::openfl::display::_internal::DrawCommandReader c = this1;
            					}
            					break;
            					case (int)16: {
HXLINE(1865)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1865)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1865)								data1->oPos = (data1->oPos + 2);
HXDLIN(1865)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1865)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1865)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1865)								data1->iPos = (data1->iPos + 1);
HXDLIN(1865)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1865)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1865)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1865)								data1->oPos = (data1->oPos + 4);
HXDLIN(1865)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1865)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1865)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1865)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1865)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1865)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1865)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1865)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1865)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1865)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1865)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1865)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1865)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1865)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1865)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1865)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1865)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1865)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1865)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1865)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1865)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1865)								data1->fPos = (data1->fPos + 5);
HXDLIN(1865)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1865)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1865)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1865)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1865)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1865)								data1->oPos = (data1->oPos + 2);
HXDLIN(1865)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1865)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1865)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1865)								data1->oPos = (data1->oPos + 4);
HXDLIN(1865)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1865)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1865)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1865)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1865)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1865)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1865)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1865)								data1->oPos = (data1->oPos + 4);
HXDLIN(1865)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1865)								data2->iPos = (data2->iPos + 1);
HXDLIN(1865)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1865)								data3->fPos = (data3->fPos + 2);
HXDLIN(1865)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1865)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1865)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1865)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1865)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1865)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1865)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1865)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1865)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1865)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1865)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn();
HXDLIN(1865)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1865)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1866)						stroke =  ::openfl::display::GraphicsStroke_obj::__alloc( HX_CTX ,c->buffer->o->__get(c->oPos),c->buffer->b->__get(c->bPos),c->buffer->o->__get((c->oPos + 1)),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get((c->fPos + 1)),null());
HXLINE(1867)						stroke->fill =  ::openfl::display::GraphicsSolidFill_obj::__alloc( HX_CTX ,c->buffer->i->__get(c->iPos),c->buffer->f->__get(c->fPos));
HXLINE(1868)						graphicsData->push(stroke);
            					}
            					break;
            					case (int)17: {
HXLINE(1824)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->oPos = (data1->oPos + 2);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1824)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->iPos = (data1->iPos + 1);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1824)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->oPos = (data1->oPos + 4);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1824)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1824)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1824)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->fPos = (data1->fPos + 5);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1824)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->oPos = (data1->oPos + 2);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1824)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->oPos = (data1->oPos + 4);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1824)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1824)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1824)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->oPos = (data1->oPos + 4);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1824)								data2->iPos = (data2->iPos + 1);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1824)								data3->fPos = (data3->fPos + 2);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1824)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1824)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXDLIN(1824)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1824)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1825)						path->lineTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            					}
            					break;
            					case (int)18: {
HXLINE(1828)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1828)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1828)								data1->oPos = (data1->oPos + 2);
HXDLIN(1828)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1828)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1828)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1828)								data1->iPos = (data1->iPos + 1);
HXDLIN(1828)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1828)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1828)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1828)								data1->oPos = (data1->oPos + 4);
HXDLIN(1828)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1828)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1828)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1828)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1828)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1828)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1828)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1828)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1828)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1828)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1828)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1828)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1828)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1828)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1828)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1828)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1828)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1828)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1828)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1828)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1828)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1828)								data1->fPos = (data1->fPos + 5);
HXDLIN(1828)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1828)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1828)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1828)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1828)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1828)								data1->oPos = (data1->oPos + 2);
HXDLIN(1828)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1828)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1828)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1828)								data1->oPos = (data1->oPos + 4);
HXDLIN(1828)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1828)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1828)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1828)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1828)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1828)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1828)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1828)								data1->oPos = (data1->oPos + 4);
HXDLIN(1828)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1828)								data2->iPos = (data2->iPos + 1);
HXDLIN(1828)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1828)								data3->fPos = (data3->fPos + 2);
HXDLIN(1828)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1828)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1828)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1828)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1828)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1828)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1828)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1828)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1828)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1828)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1828)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN(1828)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1828)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1829)						path->moveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            					}
            					break;
            					default:{
HXLINE(1890)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1890)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1890)								data1->oPos = (data1->oPos + 2);
HXDLIN(1890)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1890)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1890)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1890)								data1->iPos = (data1->iPos + 1);
HXDLIN(1890)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1890)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1890)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1890)								data1->oPos = (data1->oPos + 4);
HXDLIN(1890)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1890)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1890)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1890)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1890)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1890)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1890)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1890)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1890)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1890)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1890)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1890)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1890)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1890)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1890)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1890)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1890)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1890)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1890)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1890)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1890)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1890)								data1->fPos = (data1->fPos + 5);
HXDLIN(1890)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1890)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1890)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1890)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1890)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1890)								data1->oPos = (data1->oPos + 2);
HXDLIN(1890)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1890)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1890)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1890)								data1->oPos = (data1->oPos + 4);
HXDLIN(1890)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1890)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1890)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1890)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1890)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1890)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1890)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1890)								data1->oPos = (data1->oPos + 4);
HXDLIN(1890)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1890)								data2->iPos = (data2->iPos + 1);
HXDLIN(1890)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1890)								data3->fPos = (data3->fPos + 2);
HXDLIN(1890)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1890)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1890)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1890)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1890)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1890)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1890)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1890)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1890)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1890)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1890)						data->prev = type;
            					}
            				}
            			}
            		}
HXLINE(1894)		if (::hx::IsNotNull( path )) {
HXLINE(1896)			graphicsData->push(path);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,_hx___readGraphicsData,(void))

void Graphics_obj::_hx___update( ::openfl::geom::Matrix displayMatrix,Float pixelRatio){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1901___update)
HXLINE(1902)		bool _hx_tmp;
HXDLIN(1902)		bool _hx_tmp1;
HXDLIN(1902)		if (::hx::IsNotNull( this->_hx___bounds )) {
HXLINE(1902)			_hx_tmp1 = (this->_hx___bounds->width <= 0);
            		}
            		else {
HXLINE(1902)			_hx_tmp1 = true;
            		}
HXDLIN(1902)		if (!(_hx_tmp1)) {
HXLINE(1902)			_hx_tmp = (this->_hx___bounds->height <= 0);
            		}
            		else {
HXLINE(1902)			_hx_tmp = true;
            		}
HXDLIN(1902)		if (_hx_tmp) {
HXLINE(1902)			return;
            		}
HXLINE(1904)		 ::openfl::geom::Matrix parentTransform = this->_hx___owner->_hx___renderTransform;
HXLINE(1905)		if (::hx::IsNull( parentTransform )) {
HXLINE(1905)			return;
            		}
HXLINE(1907)		Float scaleX = pixelRatio;
HXDLIN(1907)		Float scaleY = pixelRatio;
HXLINE(1909)		if (::hx::IsNull( this->_hx___owner->_hx___worldScale9Grid )) {
HXLINE(1911)			if ((parentTransform->b == 0)) {
HXLINE(1913)				scaleX = ::Math_obj::abs(parentTransform->a);
            			}
            			else {
HXLINE(1917)				scaleX = ::Math_obj::sqrt(((parentTransform->a * parentTransform->a) + (parentTransform->b * parentTransform->b)));
            			}
HXLINE(1920)			if ((parentTransform->c == 0)) {
HXLINE(1922)				scaleY = ::Math_obj::abs(parentTransform->d);
            			}
            			else {
HXLINE(1926)				scaleY = ::Math_obj::sqrt(((parentTransform->c * parentTransform->c) + (parentTransform->d * parentTransform->d)));
            			}
HXLINE(1929)			if (::hx::IsNotNull( displayMatrix )) {
HXLINE(1931)				if ((displayMatrix->b == 0)) {
HXLINE(1933)					scaleX = (scaleX * displayMatrix->a);
            				}
            				else {
HXLINE(1937)					scaleX = (scaleX * ::Math_obj::sqrt(((displayMatrix->a * displayMatrix->a) + (displayMatrix->b * displayMatrix->b))));
            				}
HXLINE(1940)				if ((displayMatrix->c == 0)) {
HXLINE(1942)					scaleY = (scaleY * displayMatrix->d);
            				}
            				else {
HXLINE(1946)					scaleY = (scaleY * ::Math_obj::sqrt(((displayMatrix->c * displayMatrix->c) + (displayMatrix->d * displayMatrix->d))));
            				}
            			}
            		}
HXLINE(1956)		Float width = (this->_hx___bounds->width * scaleX);
HXLINE(1957)		Float height = (this->_hx___bounds->height * scaleY);
HXLINE(1959)		bool _hx_tmp2;
HXDLIN(1959)		if (!((width < 1))) {
HXLINE(1959)			_hx_tmp2 = (height < 1);
            		}
            		else {
HXLINE(1959)			_hx_tmp2 = true;
            		}
HXDLIN(1959)		if (_hx_tmp2) {
HXLINE(1961)			bool _hx_tmp;
HXDLIN(1961)			if ((this->_hx___width < 1)) {
HXLINE(1961)				_hx_tmp = (this->_hx___height >= 1);
            			}
            			else {
HXLINE(1961)				_hx_tmp = true;
            			}
HXDLIN(1961)			if (_hx_tmp) {
HXLINE(1961)				this->set___dirty(true);
            			}
HXLINE(1962)			this->_hx___width = 0;
HXLINE(1963)			this->_hx___height = 0;
HXLINE(1964)			return;
            		}
HXLINE(1967)		bool _hx_tmp3;
HXDLIN(1967)		if (::hx::IsNotNull( ::openfl::display::Graphics_obj::maxTextureWidth )) {
HXLINE(1967)			_hx_tmp3 = ::hx::IsGreater( width,::openfl::display::Graphics_obj::maxTextureWidth );
            		}
            		else {
HXLINE(1967)			_hx_tmp3 = false;
            		}
HXDLIN(1967)		if (_hx_tmp3) {
HXLINE(1969)			width = ( (Float)(::openfl::display::Graphics_obj::maxTextureWidth) );
HXLINE(1970)			scaleX = (( (Float)(::openfl::display::Graphics_obj::maxTextureWidth) ) / this->_hx___bounds->width);
            		}
HXLINE(1973)		bool _hx_tmp4;
HXDLIN(1973)		if (::hx::IsNotNull( ::openfl::display::Graphics_obj::maxTextureWidth )) {
HXLINE(1973)			_hx_tmp4 = ::hx::IsGreater( height,::openfl::display::Graphics_obj::maxTextureHeight );
            		}
            		else {
HXLINE(1973)			_hx_tmp4 = false;
            		}
HXDLIN(1973)		if (_hx_tmp4) {
HXLINE(1975)			height = ( (Float)(::openfl::display::Graphics_obj::maxTextureHeight) );
HXLINE(1976)			scaleY = (( (Float)(::openfl::display::Graphics_obj::maxTextureHeight) ) / this->_hx___bounds->height);
            		}
HXLINE(1979)		Float inverseA;
HXLINE(1980)		Float inverseD;
HXLINE(1982)		if (::hx::IsNotNull( this->_hx___owner->_hx___worldScale9Grid )) {
HXLINE(1984)			this->_hx___renderTransform->a = pixelRatio;
HXLINE(1985)			this->_hx___renderTransform->d = pixelRatio;
HXLINE(1986)			inverseA = (( (Float)(1) ) / pixelRatio);
HXLINE(1987)			inverseD = (( (Float)(1) ) / pixelRatio);
            		}
            		else {
HXLINE(1991)			this->_hx___renderTransform->a = (width / this->_hx___bounds->width);
HXLINE(1992)			this->_hx___renderTransform->d = (height / this->_hx___bounds->height);
HXLINE(1993)			inverseA = (( (Float)(1) ) / this->_hx___renderTransform->a);
HXLINE(1994)			inverseD = (( (Float)(1) ) / this->_hx___renderTransform->d);
            		}
HXLINE(1998)		this->_hx___worldTransform->a = (inverseA * parentTransform->a);
HXLINE(1999)		this->_hx___worldTransform->b = (inverseA * parentTransform->b);
HXLINE(2000)		this->_hx___worldTransform->c = (inverseD * parentTransform->c);
HXLINE(2001)		this->_hx___worldTransform->d = (inverseD * parentTransform->d);
HXLINE(2003)		Float x = this->_hx___bounds->x;
HXLINE(2004)		Float y = this->_hx___bounds->y;
HXLINE(2005)		Float tx = (((x * parentTransform->a) + (y * parentTransform->c)) + parentTransform->tx);
HXLINE(2006)		Float ty = (((x * parentTransform->b) + (y * parentTransform->d)) + parentTransform->ty);
HXLINE(2013)		if ((pixelRatio > ((Float)1.0))) {
HXLINE(2019)			Float nativePixelSize = (( (Float)(1) ) / pixelRatio);
HXLINE(2020)			this->_hx___worldTransform->tx = (::Math_obj::fround((tx / nativePixelSize)) * nativePixelSize);
HXLINE(2021)			this->_hx___worldTransform->ty = (::Math_obj::fround((ty / nativePixelSize)) * nativePixelSize);
            		}
            		else {
HXLINE(2025)			this->_hx___worldTransform->tx = ::Math_obj::fround(tx);
HXLINE(2026)			this->_hx___worldTransform->ty = ::Math_obj::fround(ty);
            		}
HXLINE(2030)		 ::openfl::geom::Matrix _this = this->_hx___worldTransform;
HXDLIN(2030)		Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN(2030)		Float _hx_tmp5;
HXDLIN(2030)		if ((norm == 0)) {
HXLINE(2030)			_hx_tmp5 = -(_this->tx);
            		}
            		else {
HXLINE(2030)			_hx_tmp5 = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - ty)) + (_this->d * (tx - _this->tx))));
            		}
HXDLIN(2030)		this->_hx___renderTransform->tx = _hx_tmp5;
HXLINE(2031)		 ::openfl::geom::Matrix _this1 = this->_hx___worldTransform;
HXDLIN(2031)		Float norm1 = ((_this1->a * _this1->d) - (_this1->b * _this1->c));
HXDLIN(2031)		Float _hx_tmp6;
HXDLIN(2031)		if ((norm1 == 0)) {
HXLINE(2031)			_hx_tmp6 = -(_this1->ty);
            		}
            		else {
HXLINE(2031)			_hx_tmp6 = ((((Float)1.0) / norm1) * ((_this1->a * (ty - _this1->ty)) + (_this1->b * (_this1->tx - tx))));
            		}
HXDLIN(2031)		this->_hx___renderTransform->ty = _hx_tmp6;
HXLINE(2038)		int newWidth = ::Math_obj::ceil((width + ((Float)1.0)));
HXLINE(2039)		int newHeight = ::Math_obj::ceil((height + ((Float)1.0)));
HXLINE(2042)		bool _hx_tmp7;
HXDLIN(2042)		if ((newWidth == this->_hx___width)) {
HXLINE(2042)			_hx_tmp7 = (newHeight != this->_hx___height);
            		}
            		else {
HXLINE(2042)			_hx_tmp7 = true;
            		}
HXDLIN(2042)		if (_hx_tmp7) {
HXLINE(2045)			this->set___dirty(true);
            		}
HXLINE(2049)		this->_hx___width = newWidth;
HXLINE(2050)		this->_hx___height = newHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,_hx___update,(void))

bool Graphics_obj::set___dirty(bool value){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_2055_set___dirty)
HXLINE(2056)		bool _hx_tmp;
HXDLIN(2056)		if (value) {
HXLINE(2056)			_hx_tmp = ::hx::IsNotNull( this->_hx___owner );
            		}
            		else {
HXLINE(2056)			_hx_tmp = false;
            		}
HXDLIN(2056)		if (_hx_tmp) {
HXLINE(2058)			 ::openfl::display::DisplayObject _this = this->_hx___owner;
HXDLIN(2058)			if (!(_this->_hx___renderDirty)) {
HXLINE(2058)				_this->_hx___renderDirty = true;
HXDLIN(2058)				_this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2061)		if (value) {
HXLINE(2063)			this->_hx___softwareDirty = true;
HXLINE(2064)			this->_hx___hardwareDirty = true;
            		}
HXLINE(2067)		return (this->_hx___dirty = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,set___dirty,return )

 ::Dynamic Graphics_obj::maxTextureHeight;

 ::Dynamic Graphics_obj::maxTextureWidth;


::hx::ObjectPtr< Graphics_obj > Graphics_obj::__new( ::openfl::display::DisplayObject owner) {
	::hx::ObjectPtr< Graphics_obj > __this = new Graphics_obj();
	__this->__construct(owner);
	return __this;
}

::hx::ObjectPtr< Graphics_obj > Graphics_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObject owner) {
	Graphics_obj *__this = (Graphics_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Graphics_obj), true, "openfl.display.Graphics"));
	*(void **)__this = Graphics_obj::_hx_vtable;
	__this->__construct(owner);
	return __this;
}

Graphics_obj::Graphics_obj()
{
}

void Graphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphics);
	HX_MARK_MEMBER_NAME(_hx___bounds,"__bounds");
	HX_MARK_MEMBER_NAME(_hx___commands,"__commands");
	HX_MARK_MEMBER_NAME(_hx___dirty,"__dirty");
	HX_MARK_MEMBER_NAME(_hx___hardwareDirty,"__hardwareDirty");
	HX_MARK_MEMBER_NAME(_hx___height,"__height");
	HX_MARK_MEMBER_NAME(_hx___managed,"__managed");
	HX_MARK_MEMBER_NAME(_hx___positionX,"__positionX");
	HX_MARK_MEMBER_NAME(_hx___positionY,"__positionY");
	HX_MARK_MEMBER_NAME(_hx___quadBuffer,"__quadBuffer");
	HX_MARK_MEMBER_NAME(_hx___renderTransform,"__renderTransform");
	HX_MARK_MEMBER_NAME(_hx___shaderBufferPool,"__shaderBufferPool");
	HX_MARK_MEMBER_NAME(_hx___softwareDirty,"__softwareDirty");
	HX_MARK_MEMBER_NAME(_hx___strokePadding,"__strokePadding");
	HX_MARK_MEMBER_NAME(_hx___transformDirty,"__transformDirty");
	HX_MARK_MEMBER_NAME(_hx___triangleIndexBuffer,"__triangleIndexBuffer");
	HX_MARK_MEMBER_NAME(_hx___triangleIndexBufferCount,"__triangleIndexBufferCount");
	HX_MARK_MEMBER_NAME(_hx___triangleIndexBufferData,"__triangleIndexBufferData");
	HX_MARK_MEMBER_NAME(_hx___usedShaderBuffers,"__usedShaderBuffers");
	HX_MARK_MEMBER_NAME(_hx___vertexBuffer,"__vertexBuffer");
	HX_MARK_MEMBER_NAME(_hx___vertexBufferCount,"__vertexBufferCount");
	HX_MARK_MEMBER_NAME(_hx___vertexBufferCountUVT,"__vertexBufferCountUVT");
	HX_MARK_MEMBER_NAME(_hx___vertexBufferData,"__vertexBufferData");
	HX_MARK_MEMBER_NAME(_hx___vertexBufferDataUVT,"__vertexBufferDataUVT");
	HX_MARK_MEMBER_NAME(_hx___vertexBufferUVT,"__vertexBufferUVT");
	HX_MARK_MEMBER_NAME(_hx___visible,"__visible");
	HX_MARK_MEMBER_NAME(_hx___owner,"__owner");
	HX_MARK_MEMBER_NAME(_hx___width,"__width");
	HX_MARK_MEMBER_NAME(_hx___worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(_hx___cairo,"__cairo");
	HX_MARK_MEMBER_NAME(_hx___bitmap,"__bitmap");
	HX_MARK_MEMBER_NAME(_hx___bitmapScale,"__bitmapScale");
	HX_MARK_END_CLASS();
}

void Graphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___bounds,"__bounds");
	HX_VISIT_MEMBER_NAME(_hx___commands,"__commands");
	HX_VISIT_MEMBER_NAME(_hx___dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(_hx___hardwareDirty,"__hardwareDirty");
	HX_VISIT_MEMBER_NAME(_hx___height,"__height");
	HX_VISIT_MEMBER_NAME(_hx___managed,"__managed");
	HX_VISIT_MEMBER_NAME(_hx___positionX,"__positionX");
	HX_VISIT_MEMBER_NAME(_hx___positionY,"__positionY");
	HX_VISIT_MEMBER_NAME(_hx___quadBuffer,"__quadBuffer");
	HX_VISIT_MEMBER_NAME(_hx___renderTransform,"__renderTransform");
	HX_VISIT_MEMBER_NAME(_hx___shaderBufferPool,"__shaderBufferPool");
	HX_VISIT_MEMBER_NAME(_hx___softwareDirty,"__softwareDirty");
	HX_VISIT_MEMBER_NAME(_hx___strokePadding,"__strokePadding");
	HX_VISIT_MEMBER_NAME(_hx___transformDirty,"__transformDirty");
	HX_VISIT_MEMBER_NAME(_hx___triangleIndexBuffer,"__triangleIndexBuffer");
	HX_VISIT_MEMBER_NAME(_hx___triangleIndexBufferCount,"__triangleIndexBufferCount");
	HX_VISIT_MEMBER_NAME(_hx___triangleIndexBufferData,"__triangleIndexBufferData");
	HX_VISIT_MEMBER_NAME(_hx___usedShaderBuffers,"__usedShaderBuffers");
	HX_VISIT_MEMBER_NAME(_hx___vertexBuffer,"__vertexBuffer");
	HX_VISIT_MEMBER_NAME(_hx___vertexBufferCount,"__vertexBufferCount");
	HX_VISIT_MEMBER_NAME(_hx___vertexBufferCountUVT,"__vertexBufferCountUVT");
	HX_VISIT_MEMBER_NAME(_hx___vertexBufferData,"__vertexBufferData");
	HX_VISIT_MEMBER_NAME(_hx___vertexBufferDataUVT,"__vertexBufferDataUVT");
	HX_VISIT_MEMBER_NAME(_hx___vertexBufferUVT,"__vertexBufferUVT");
	HX_VISIT_MEMBER_NAME(_hx___visible,"__visible");
	HX_VISIT_MEMBER_NAME(_hx___owner,"__owner");
	HX_VISIT_MEMBER_NAME(_hx___width,"__width");
	HX_VISIT_MEMBER_NAME(_hx___worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(_hx___cairo,"__cairo");
	HX_VISIT_MEMBER_NAME(_hx___bitmap,"__bitmap");
	HX_VISIT_MEMBER_NAME(_hx___bitmapScale,"__bitmapScale");
}

::hx::Val Graphics_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return ::hx::Val( lineTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return ::hx::Val( moveTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { return ::hx::Val( _hx___dirty ); }
		if (HX_FIELD_EQ(inName,"__owner") ) { return ::hx::Val( _hx___owner ); }
		if (HX_FIELD_EQ(inName,"__width") ) { return ::hx::Val( _hx___width ); }
		if (HX_FIELD_EQ(inName,"__cairo") ) { return ::hx::Val( _hx___cairo ); }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return ::hx::Val( curveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return ::hx::Val( endFill_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bounds") ) { return ::hx::Val( _hx___bounds ); }
		if (HX_FIELD_EQ(inName,"__height") ) { return ::hx::Val( _hx___height ); }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { return ::hx::Val( _hx___bitmap ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawPath") ) { return ::hx::Val( drawPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return ::hx::Val( drawRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"__update") ) { return ::hx::Val( _hx___update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__managed") ) { return ::hx::Val( _hx___managed ); }
		if (HX_FIELD_EQ(inName,"__visible") ) { return ::hx::Val( _hx___visible ); }
		if (HX_FIELD_EQ(inName,"beginFill") ) { return ::hx::Val( beginFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawQuads") ) { return ::hx::Val( drawQuads_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return ::hx::Val( lineStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"__cleanup") ) { return ::hx::Val( _hx___cleanup_dyn() ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return ::hx::Val( _hx___hitTest_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__commands") ) { return ::hx::Val( _hx___commands ); }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return ::hx::Val( drawCircle_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__positionX") ) { return ::hx::Val( _hx___positionX ); }
		if (HX_FIELD_EQ(inName,"__positionY") ) { return ::hx::Val( _hx___positionY ); }
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return ::hx::Val( drawEllipse_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return ::hx::Val( _hx___getBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"set___dirty") ) { return ::hx::Val( set___dirty_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__quadBuffer") ) { return ::hx::Val( _hx___quadBuffer ); }
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return ::hx::Val( cubicCurveTo_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__bitmapScale") ) { return ::hx::Val( _hx___bitmapScale ); }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return ::hx::Val( drawRoundRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return ::hx::Val( drawTriangles_dyn() ); }
		if (HX_FIELD_EQ(inName,"__findExtrema") ) { return ::hx::Val( _hx___findExtrema_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__vertexBuffer") ) { return ::hx::Val( _hx___vertexBuffer ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__hardwareDirty") ) { return ::hx::Val( _hx___hardwareDirty ); }
		if (HX_FIELD_EQ(inName,"__softwareDirty") ) { return ::hx::Val( _hx___softwareDirty ); }
		if (HX_FIELD_EQ(inName,"__strokePadding") ) { return ::hx::Val( _hx___strokePadding ); }
		if (HX_FIELD_EQ(inName,"beginBitmapFill") ) { return ::hx::Val( beginBitmapFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"beginShaderFill") ) { return ::hx::Val( beginShaderFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineBitmapStyle") ) { return ::hx::Val( lineBitmapStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"__inflateBounds") ) { return ::hx::Val( _hx___inflateBounds_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { return ::hx::Val( _hx___transformDirty ); }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return ::hx::Val( _hx___worldTransform ); }
		if (HX_FIELD_EQ(inName,"drawGraphicsData") ) { return ::hx::Val( drawGraphicsData_dyn() ); }
		if (HX_FIELD_EQ(inName,"readGraphicsData") ) { return ::hx::Val( readGraphicsData_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { return ::hx::Val( _hx___renderTransform ); }
		if (HX_FIELD_EQ(inName,"__vertexBufferUVT") ) { return ::hx::Val( _hx___vertexBufferUVT ); }
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return ::hx::Val( beginGradientFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineGradientStyle") ) { return ::hx::Val( lineGradientStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"overrideBlendMode") ) { return ::hx::Val( overrideBlendMode_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__shaderBufferPool") ) { return ::hx::Val( _hx___shaderBufferPool ); }
		if (HX_FIELD_EQ(inName,"__vertexBufferData") ) { return ::hx::Val( _hx___vertexBufferData ); }
		if (HX_FIELD_EQ(inName,"__readGraphicsData") ) { return ::hx::Val( _hx___readGraphicsData_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__usedShaderBuffers") ) { return ::hx::Val( _hx___usedShaderBuffers ); }
		if (HX_FIELD_EQ(inName,"__vertexBufferCount") ) { return ::hx::Val( _hx___vertexBufferCount ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"drawRoundRectComplex") ) { return ::hx::Val( drawRoundRectComplex_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__triangleIndexBuffer") ) { return ::hx::Val( _hx___triangleIndexBuffer ); }
		if (HX_FIELD_EQ(inName,"__vertexBufferDataUVT") ) { return ::hx::Val( _hx___vertexBufferDataUVT ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__vertexBufferCountUVT") ) { return ::hx::Val( _hx___vertexBufferCountUVT ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"__triangleIndexBufferData") ) { return ::hx::Val( _hx___triangleIndexBufferData ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__triangleIndexBufferCount") ) { return ::hx::Val( _hx___triangleIndexBufferCount ); }
		if (HX_FIELD_EQ(inName,"__calculateBezierQuadPoint") ) { return ::hx::Val( _hx___calculateBezierQuadPoint_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"__calculateBezierCubicPoint") ) { return ::hx::Val( _hx___calculateBezierCubicPoint_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Graphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"maxTextureWidth") ) { outValue = ( maxTextureWidth ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"maxTextureHeight") ) { outValue = ( maxTextureHeight ); return true; }
	}
	return false;
}

::hx::Val Graphics_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set___dirty(inValue.Cast< bool >()) );_hx___dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__owner") ) { _hx___owner=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__width") ) { _hx___width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { _hx___cairo=inValue.Cast<  ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bounds") ) { _hx___bounds=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__height") ) { _hx___height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { _hx___bitmap=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__managed") ) { _hx___managed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__visible") ) { _hx___visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__commands") ) { _hx___commands=inValue.Cast<  ::openfl::display::_internal::DrawCommandBuffer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__positionX") ) { _hx___positionX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__positionY") ) { _hx___positionY=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__quadBuffer") ) { _hx___quadBuffer=inValue.Cast<  ::openfl::display::_internal::Context3DBuffer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__bitmapScale") ) { _hx___bitmapScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__vertexBuffer") ) { _hx___vertexBuffer=inValue.Cast<  ::openfl::display3D::VertexBuffer3D >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__hardwareDirty") ) { _hx___hardwareDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__softwareDirty") ) { _hx___softwareDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__strokePadding") ) { _hx___strokePadding=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { _hx___transformDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { _hx___worldTransform=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { _hx___renderTransform=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__vertexBufferUVT") ) { _hx___vertexBufferUVT=inValue.Cast<  ::openfl::display3D::VertexBuffer3D >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__shaderBufferPool") ) { _hx___shaderBufferPool=inValue.Cast<  ::lime::utils::ObjectPool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__vertexBufferData") ) { _hx___vertexBufferData=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__usedShaderBuffers") ) { _hx___usedShaderBuffers=inValue.Cast<  ::haxe::ds::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__vertexBufferCount") ) { _hx___vertexBufferCount=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__triangleIndexBuffer") ) { _hx___triangleIndexBuffer=inValue.Cast<  ::openfl::display3D::IndexBuffer3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__vertexBufferDataUVT") ) { _hx___vertexBufferDataUVT=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__vertexBufferCountUVT") ) { _hx___vertexBufferCountUVT=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"__triangleIndexBufferData") ) { _hx___triangleIndexBufferData=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__triangleIndexBufferCount") ) { _hx___triangleIndexBufferCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Graphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"maxTextureWidth") ) { maxTextureWidth=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"maxTextureHeight") ) { maxTextureHeight=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void Graphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__bounds",95,f1,4c,0e));
	outFields->push(HX_("__commands",e8,23,8e,61));
	outFields->push(HX_("__dirty",f2,a8,2e,44));
	outFields->push(HX_("__hardwareDirty",2a,75,7d,55));
	outFields->push(HX_("__height",07,73,7b,aa));
	outFields->push(HX_("__managed",3f,e3,0f,95));
	outFields->push(HX_("__positionX",6f,3c,7e,fe));
	outFields->push(HX_("__positionY",70,3c,7e,fe));
	outFields->push(HX_("__quadBuffer",47,34,70,71));
	outFields->push(HX_("__renderTransform",16,b8,95,b1));
	outFields->push(HX_("__shaderBufferPool",a1,80,f9,54));
	outFields->push(HX_("__softwareDirty",4b,4f,75,e7));
	outFields->push(HX_("__strokePadding",d9,6d,da,c4));
	outFields->push(HX_("__transformDirty",26,f6,91,84));
	outFields->push(HX_("__triangleIndexBuffer",aa,c4,11,a7));
	outFields->push(HX_("__triangleIndexBufferCount",c5,c7,43,e4));
	outFields->push(HX_("__triangleIndexBufferData",f4,e3,9e,9c));
	outFields->push(HX_("__usedShaderBuffers",31,ef,1d,4f));
	outFields->push(HX_("__vertexBuffer",a4,32,6a,91));
	outFields->push(HX_("__vertexBufferCount",8b,6f,78,56));
	outFields->push(HX_("__vertexBufferCountUVT",28,64,58,bf));
	outFields->push(HX_("__vertexBufferData",ee,d6,5e,32));
	outFields->push(HX_("__vertexBufferDataUVT",a5,7c,9c,2d));
	outFields->push(HX_("__vertexBufferUVT",af,d6,28,26));
	outFields->push(HX_("__visible",52,c9,72,24));
	outFields->push(HX_("__owner",13,f1,d4,a2));
	outFields->push(HX_("__width",e6,0e,c1,34));
	outFields->push(HX_("__worldTransform",da,a7,d8,9a));
	outFields->push(HX_("__cairo",68,89,77,ab));
	outFields->push(HX_("__bitmap",0f,7b,3b,99));
	outFields->push(HX_("__bitmapScale",fb,4c,9d,01));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Graphics_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(Graphics_obj,_hx___bounds),HX_("__bounds",95,f1,4c,0e)},
	{::hx::fsObject /*  ::openfl::display::_internal::DrawCommandBuffer */ ,(int)offsetof(Graphics_obj,_hx___commands),HX_("__commands",e8,23,8e,61)},
	{::hx::fsBool,(int)offsetof(Graphics_obj,_hx___dirty),HX_("__dirty",f2,a8,2e,44)},
	{::hx::fsBool,(int)offsetof(Graphics_obj,_hx___hardwareDirty),HX_("__hardwareDirty",2a,75,7d,55)},
	{::hx::fsInt,(int)offsetof(Graphics_obj,_hx___height),HX_("__height",07,73,7b,aa)},
	{::hx::fsBool,(int)offsetof(Graphics_obj,_hx___managed),HX_("__managed",3f,e3,0f,95)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,_hx___positionX),HX_("__positionX",6f,3c,7e,fe)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,_hx___positionY),HX_("__positionY",70,3c,7e,fe)},
	{::hx::fsObject /*  ::openfl::display::_internal::Context3DBuffer */ ,(int)offsetof(Graphics_obj,_hx___quadBuffer),HX_("__quadBuffer",47,34,70,71)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(Graphics_obj,_hx___renderTransform),HX_("__renderTransform",16,b8,95,b1)},
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(int)offsetof(Graphics_obj,_hx___shaderBufferPool),HX_("__shaderBufferPool",a1,80,f9,54)},
	{::hx::fsBool,(int)offsetof(Graphics_obj,_hx___softwareDirty),HX_("__softwareDirty",4b,4f,75,e7)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,_hx___strokePadding),HX_("__strokePadding",d9,6d,da,c4)},
	{::hx::fsBool,(int)offsetof(Graphics_obj,_hx___transformDirty),HX_("__transformDirty",26,f6,91,84)},
	{::hx::fsObject /*  ::openfl::display3D::IndexBuffer3D */ ,(int)offsetof(Graphics_obj,_hx___triangleIndexBuffer),HX_("__triangleIndexBuffer",aa,c4,11,a7)},
	{::hx::fsInt,(int)offsetof(Graphics_obj,_hx___triangleIndexBufferCount),HX_("__triangleIndexBufferCount",c5,c7,43,e4)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(Graphics_obj,_hx___triangleIndexBufferData),HX_("__triangleIndexBufferData",f4,e3,9e,9c)},
	{::hx::fsObject /*  ::haxe::ds::List */ ,(int)offsetof(Graphics_obj,_hx___usedShaderBuffers),HX_("__usedShaderBuffers",31,ef,1d,4f)},
	{::hx::fsObject /*  ::openfl::display3D::VertexBuffer3D */ ,(int)offsetof(Graphics_obj,_hx___vertexBuffer),HX_("__vertexBuffer",a4,32,6a,91)},
	{::hx::fsInt,(int)offsetof(Graphics_obj,_hx___vertexBufferCount),HX_("__vertexBufferCount",8b,6f,78,56)},
	{::hx::fsInt,(int)offsetof(Graphics_obj,_hx___vertexBufferCountUVT),HX_("__vertexBufferCountUVT",28,64,58,bf)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(Graphics_obj,_hx___vertexBufferData),HX_("__vertexBufferData",ee,d6,5e,32)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(Graphics_obj,_hx___vertexBufferDataUVT),HX_("__vertexBufferDataUVT",a5,7c,9c,2d)},
	{::hx::fsObject /*  ::openfl::display3D::VertexBuffer3D */ ,(int)offsetof(Graphics_obj,_hx___vertexBufferUVT),HX_("__vertexBufferUVT",af,d6,28,26)},
	{::hx::fsBool,(int)offsetof(Graphics_obj,_hx___visible),HX_("__visible",52,c9,72,24)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(Graphics_obj,_hx___owner),HX_("__owner",13,f1,d4,a2)},
	{::hx::fsInt,(int)offsetof(Graphics_obj,_hx___width),HX_("__width",e6,0e,c1,34)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(Graphics_obj,_hx___worldTransform),HX_("__worldTransform",da,a7,d8,9a)},
	{::hx::fsObject /*  ::lime::graphics::cairo::Cairo */ ,(int)offsetof(Graphics_obj,_hx___cairo),HX_("__cairo",68,89,77,ab)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(Graphics_obj,_hx___bitmap),HX_("__bitmap",0f,7b,3b,99)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,_hx___bitmapScale),HX_("__bitmapScale",fb,4c,9d,01)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Graphics_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Graphics_obj::maxTextureHeight,HX_("maxTextureHeight",de,49,6c,61)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Graphics_obj::maxTextureWidth,HX_("maxTextureWidth",ef,1f,1f,70)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Graphics_obj_sMemberFields[] = {
	HX_("__bounds",95,f1,4c,0e),
	HX_("__commands",e8,23,8e,61),
	HX_("__dirty",f2,a8,2e,44),
	HX_("__hardwareDirty",2a,75,7d,55),
	HX_("__height",07,73,7b,aa),
	HX_("__managed",3f,e3,0f,95),
	HX_("__positionX",6f,3c,7e,fe),
	HX_("__positionY",70,3c,7e,fe),
	HX_("__quadBuffer",47,34,70,71),
	HX_("__renderTransform",16,b8,95,b1),
	HX_("__shaderBufferPool",a1,80,f9,54),
	HX_("__softwareDirty",4b,4f,75,e7),
	HX_("__strokePadding",d9,6d,da,c4),
	HX_("__transformDirty",26,f6,91,84),
	HX_("__triangleIndexBuffer",aa,c4,11,a7),
	HX_("__triangleIndexBufferCount",c5,c7,43,e4),
	HX_("__triangleIndexBufferData",f4,e3,9e,9c),
	HX_("__usedShaderBuffers",31,ef,1d,4f),
	HX_("__vertexBuffer",a4,32,6a,91),
	HX_("__vertexBufferCount",8b,6f,78,56),
	HX_("__vertexBufferCountUVT",28,64,58,bf),
	HX_("__vertexBufferData",ee,d6,5e,32),
	HX_("__vertexBufferDataUVT",a5,7c,9c,2d),
	HX_("__vertexBufferUVT",af,d6,28,26),
	HX_("__visible",52,c9,72,24),
	HX_("__owner",13,f1,d4,a2),
	HX_("__width",e6,0e,c1,34),
	HX_("__worldTransform",da,a7,d8,9a),
	HX_("__cairo",68,89,77,ab),
	HX_("__bitmap",0f,7b,3b,99),
	HX_("__bitmapScale",fb,4c,9d,01),
	HX_("beginBitmapFill",9b,c9,07,6a),
	HX_("beginFill",4c,ad,95,8c),
	HX_("beginGradientFill",5c,3c,03,2e),
	HX_("beginShaderFill",d1,4b,43,67),
	HX_("clear",8d,71,5b,48),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("cubicCurveTo",e0,07,90,2e),
	HX_("curveTo",0a,60,88,ce),
	HX_("drawCircle",34,ed,d0,97),
	HX_("drawEllipse",3a,85,ce,54),
	HX_("drawGraphicsData",b9,aa,6e,60),
	HX_("drawPath",c9,8f,bb,5e),
	HX_("drawQuads",28,ab,f2,25),
	HX_("drawRect",48,f7,10,60),
	HX_("drawRoundRect",ee,c3,aa,e2),
	HX_("drawRoundRectComplex",e2,43,2c,11),
	HX_("drawTriangles",07,44,68,de),
	HX_("endFill",fe,87,e0,25),
	HX_("lineBitmapStyle",2e,3f,21,45),
	HX_("lineGradientStyle",8d,24,f2,c1),
	HX_("lineStyle",9d,a8,18,cb),
	HX_("lineTo",8f,46,a0,ec),
	HX_("moveTo",ec,d2,ac,cc),
	HX_("overrideBlendMode",68,f8,e9,f9),
	HX_("readGraphicsData",0b,7d,00,87),
	HX_("__calculateBezierCubicPoint",0b,c2,af,f4),
	HX_("__calculateBezierQuadPoint",44,46,e8,5e),
	HX_("__cleanup",04,5d,90,2c),
	HX_("__getBounds",8b,58,a0,10),
	HX_("__hitTest",25,b1,cd,63),
	HX_("__findExtrema",8f,c8,50,c1),
	HX_("__inflateBounds",3c,6f,ee,b6),
	HX_("__readGraphicsData",2b,10,91,f2),
	HX_("__update",29,f1,34,2f),
	HX_("set___dirty",15,10,96,d4),
	::String(null()) };

static void Graphics_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics_obj::maxTextureHeight,"maxTextureHeight");
	HX_MARK_MEMBER_NAME(Graphics_obj::maxTextureWidth,"maxTextureWidth");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Graphics_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics_obj::maxTextureHeight,"maxTextureHeight");
	HX_VISIT_MEMBER_NAME(Graphics_obj::maxTextureWidth,"maxTextureWidth");
};

#endif

::hx::Class Graphics_obj::__mClass;

static ::String Graphics_obj_sStaticFields[] = {
	HX_("maxTextureHeight",de,49,6c,61),
	HX_("maxTextureWidth",ef,1f,1f,70),
	::String(null())
};

void Graphics_obj::__register()
{
	Graphics_obj _hx_dummy;
	Graphics_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.Graphics",35,67,20,87);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Graphics_obj::__GetStatic;
	__mClass->mSetStaticField = &Graphics_obj::__SetStatic;
	__mClass->mMarkFunc = Graphics_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Graphics_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Graphics_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Graphics_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Graphics_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Graphics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Graphics_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Graphics_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_60_boot)
HXDLIN(  60)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("__cairo",68,89,77,ab), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(1,HX_("overrideBlendMode",68,f8,e9,f9), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_62_boot)
HXDLIN(  62)		maxTextureHeight = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_63_boot)
HXDLIN(  63)		maxTextureWidth = null();
            	}
}

} // end namespace openfl
} // end namespace display
