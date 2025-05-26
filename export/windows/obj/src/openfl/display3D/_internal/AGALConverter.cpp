#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
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
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_openfl_display__internal_SamplerState
#include <openfl/display/_internal/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal_AGALConverter
#include <openfl/display3D/_internal/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal_RegisterMap
#include <openfl/display3D/_internal/RegisterMap.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_DestRegister
#include <openfl/display3D/_internal/_AGALConverter/DestRegister.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_ProgramType
#include <openfl/display3D/_internal/_AGALConverter/ProgramType.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_RegisterUsage
#include <openfl/display3D/_internal/_AGALConverter/RegisterUsage.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_SamplerRegister
#include <openfl/display3D/_internal/_AGALConverter/SamplerRegister.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_SourceRegister
#include <openfl/display3D/_internal/_AGALConverter/SourceRegister.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_bb48f68540be485a_28_prefixFromType,"openfl.display3D._internal.AGALConverter","prefixFromType",0x1017c240,"openfl.display3D._internal.AGALConverter.prefixFromType","openfl/display3D/_internal/AGALConverter.hx",28,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_bb48f68540be485a_48_readUInt64,"openfl.display3D._internal.AGALConverter","readUInt64",0xc091bd78,"openfl.display3D._internal.AGALConverter.readUInt64","openfl/display3D/_internal/AGALConverter.hx",48,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_bb48f68540be485a_55_convertToGLSL,"openfl.display3D._internal.AGALConverter","convertToGLSL",0x5d4ef142,"openfl.display3D._internal.AGALConverter.convertToGLSL","openfl/display3D/_internal/AGALConverter.hx",55,0x4de1651d)
static const ::String _hx_array_data_6ed82be4_4[] = {
	HX_("\t",09,00,00,00),
};
static const ::String _hx_array_data_6ed82be4_5[] = {
	HX_("\t} else {\n",6a,88,3f,f9),
};
static const ::String _hx_array_data_6ed82be4_6[] = {
	HX_("\t}",54,08,00,00),
};
static const ::String _hx_array_data_6ed82be4_7[] = {
	HX_("\t} else {\n",6a,88,3f,f9),
};
static const ::String _hx_array_data_6ed82be4_8[] = {
	HX_("\t}",54,08,00,00),
};
static const ::String _hx_array_data_6ed82be4_9[] = {
	HX_("\n",0a,00,00,00),
};
static const ::String _hx_array_data_6ed82be4_10[] = {
	HX_("#version 100\n",24,25,05,19),
};
static const ::String _hx_array_data_6ed82be4_11[] = {
	HX_("#ifdef GL_FRAGMENT_PRECISION_HIGH\n",97,28,cb,f3),
};
static const ::String _hx_array_data_6ed82be4_12[] = {
	HX_("precision highp float;\n",57,4a,f7,14),
};
static const ::String _hx_array_data_6ed82be4_13[] = {
	HX_("#else\n",2e,de,b0,6d),
};
static const ::String _hx_array_data_6ed82be4_14[] = {
	HX_("precision mediump float;\n",64,96,1e,cd),
};
static const ::String _hx_array_data_6ed82be4_15[] = {
	HX_("#endif\n",f5,d8,f7,a9),
};
static const ::String _hx_array_data_6ed82be4_16[] = {
	HX_("#version 120\n",a6,a9,06,19),
};
static const ::String _hx_array_data_6ed82be4_17[] = {
	HX_("uniform vec4 vcPositionScale;\n",cf,aa,4f,18),
};
static const ::String _hx_array_data_6ed82be4_18[] = {
	HX_("void main() {\n",49,b0,bf,fb),
};
static const ::String _hx_array_data_6ed82be4_19[] = {
	HX_("\tgl_Position *= vcPositionScale;\n",7c,ad,85,8d),
};
static const ::String _hx_array_data_6ed82be4_20[] = {
	HX_("}\n",ed,6c,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_bb48f68540be485a_22_boot,"openfl.display3D._internal.AGALConverter","boot",0x01946cfc,"openfl.display3D._internal.AGALConverter.boot","openfl/display3D/_internal/AGALConverter.hx",22,0x4de1651d)
namespace openfl{
namespace display3D{
namespace _internal{

void AGALConverter_obj::__construct() { }

Dynamic AGALConverter_obj::__CreateEmpty() { return new AGALConverter_obj; }

void *AGALConverter_obj::_hx_vtable = 0;

Dynamic AGALConverter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AGALConverter_obj > _hx_result = new AGALConverter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AGALConverter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1cd8d5b2;
}

 ::Dynamic AGALConverter_obj::limitedProfile;

::String AGALConverter_obj::prefixFromType(int regType, ::openfl::display3D::_internal::_AGALConverter::ProgramType programType){
            	HX_GC_STACKFRAME(&_hx_pos_bb48f68540be485a_28_prefixFromType)
HXDLIN(  28)		switch((int)(regType)){
            			case (int)0: {
HXLINE(  31)				return HX_("va",2b,67,00,00);
            			}
            			break;
            			case (int)1: {
HXLINE(  33)				if (::hx::IsPointerEq( programType,::openfl::display3D::_internal::_AGALConverter::ProgramType_obj::VERTEX_dyn() )) {
HXLINE(  33)					return HX_("vc",2d,67,00,00);
            				}
            				else {
HXLINE(  33)					return HX_("fc",3d,59,00,00);
            				}
            			}
            			break;
            			case (int)2: {
HXLINE(  35)				if (::hx::IsPointerEq( programType,::openfl::display3D::_internal::_AGALConverter::ProgramType_obj::VERTEX_dyn() )) {
HXLINE(  35)					return HX_("vt",3e,67,00,00);
            				}
            				else {
HXLINE(  35)					return HX_("ft",4e,59,00,00);
            				}
            			}
            			break;
            			case (int)3: {
HXLINE(  37)				return HX_("output_",3e,12,6c,e4);
            			}
            			break;
            			case (int)4: {
HXLINE(  39)				return HX_("v",76,00,00,00);
            			}
            			break;
            			case (int)5: {
HXLINE(  41)				return HX_("sampler",08,c5,c9,83);
            			}
            			break;
            			default:{
HXLINE(  43)				HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Invalid data!",ae,d8,c0,b8)));
            			}
            		}
HXLINE(  28)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AGALConverter_obj,prefixFromType,return )

 cpp::Int64Struct AGALConverter_obj::readUInt64( ::openfl::utils::ByteArrayData byteArray){
            	HX_STACKFRAME(&_hx_pos_bb48f68540be485a_48_readUInt64)
HXLINE(  49)		int low = byteArray->readInt();
HXLINE(  50)		int high = byteArray->readInt();
HXLINE(  51)		return _hx_int64_make(high,low);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AGALConverter_obj,readUInt64,return )

::String AGALConverter_obj::convertToGLSL( ::openfl::utils::ByteArrayData agal,::Array< ::Dynamic> samplerState){
            	HX_GC_STACKFRAME(&_hx_pos_bb48f68540be485a_55_convertToGLSL)
HXLINE(  56)		agal->position = 0;
HXLINE(  57)		agal->_hx___endian = 1;
HXLINE(  59)		int magic = (agal->readByte() & 255);
HXLINE(  61)		if ((magic == 176)) {
HXLINE(  64)			return agal->readUTF();
            		}
HXLINE(  67)		if ((magic != 160)) {
HXLINE(  69)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Magic value must be 0xA0, may not be AGAL",33,cd,d9,2e)));
            		}
HXLINE(  72)		int version = agal->readInt();
HXLINE(  74)		if ((version != 1)) {
HXLINE(  76)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Version must be 1",e3,ba,ef,98)));
            		}
HXLINE(  79)		int shaderTypeID = (agal->readByte() & 255);
HXLINE(  81)		if ((shaderTypeID != 161)) {
HXLINE(  83)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Shader type ID must be 0xA1",38,36,8f,05)));
            		}
HXLINE(  86)		 ::openfl::display3D::_internal::_AGALConverter::ProgramType programType;
HXDLIN(  86)		if (((agal->readByte() & 255) == 0)) {
HXLINE(  86)			programType = ::openfl::display3D::_internal::_AGALConverter::ProgramType_obj::VERTEX_dyn();
            		}
            		else {
HXLINE(  86)			programType = ::openfl::display3D::_internal::_AGALConverter::ProgramType_obj::FRAGMENT_dyn();
            		}
HXLINE(  88)		 ::openfl::display3D::_internal::RegisterMap map =  ::openfl::display3D::_internal::RegisterMap_obj::__alloc( HX_CTX );
HXLINE(  89)		 ::StringBuf sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  91)		while(true){
HXLINE(  91)			int a = agal->position;
HXDLIN(  91)			int b = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(agal);
HXDLIN(  91)			bool aNeg = (b < 0);
HXDLIN(  91)			bool bNeg = (a < 0);
HXDLIN(  91)			bool _hx_tmp;
HXDLIN(  91)			if ((aNeg != bNeg)) {
HXLINE(  91)				_hx_tmp = aNeg;
            			}
            			else {
HXLINE(  91)				_hx_tmp = (b > a);
            			}
HXDLIN(  91)			if (!(_hx_tmp)) {
HXLINE(  91)				goto _hx_goto_2;
            			}
HXLINE(  94)			int opcode = agal->readInt();
HXLINE(  95)			int dest = agal->readUnsignedInt();
HXLINE(  96)			 cpp::Int64Struct source1 = ::openfl::display3D::_internal::AGALConverter_obj::readUInt64(agal);
HXLINE(  97)			 cpp::Int64Struct source2 = ::openfl::display3D::_internal::AGALConverter_obj::readUInt64(agal);
HXLINE( 100)			 ::openfl::display3D::_internal::_AGALConverter::DestRegister dr = ::openfl::display3D::_internal::_AGALConverter::DestRegister_obj::parse(dest,programType);
HXLINE( 101)			 ::openfl::display3D::_internal::_AGALConverter::SourceRegister sr1 = ::openfl::display3D::_internal::_AGALConverter::SourceRegister_obj::parse(source1,programType,dr->mask);
HXLINE( 102)			 ::openfl::display3D::_internal::_AGALConverter::SourceRegister sr2 = ::openfl::display3D::_internal::_AGALConverter::SourceRegister_obj::parse(source2,programType,dr->mask);
HXLINE( 105)			{
HXLINE( 105)				if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 105)					sb->flush();
            				}
HXDLIN( 105)				if (::hx::IsNull( sb->b )) {
HXLINE( 105)					sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_4,1);
            				}
            				else {
HXLINE( 105)					sb->b->push(HX_("\t",09,00,00,00));
            				}
            			}
HXLINE( 107)			switch((int)(opcode)){
            				case (int)0: {
HXLINE( 111)					{
HXLINE( 111)						::String x = (dr->toGLSL(null()) + HX_(" = ",63,7d,18,00));
HXDLIN( 111)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("; // mov",19,49,64,51));
HXDLIN( 111)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 111)							sb->flush();
            						}
HXDLIN( 111)						if (::hx::IsNull( sb->b )) {
HXLINE( 111)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 111)							::Array< ::String > sb1 = sb->b;
HXDLIN( 111)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 112)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 113)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)1: {
HXLINE( 117)					{
HXLINE( 117)						::String x = (dr->toGLSL(null()) + HX_(" = ",63,7d,18,00));
HXDLIN( 117)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(" + ",b5,6d,18,00));
HXDLIN( 117)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("; // add",66,24,5b,51));
HXDLIN( 117)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 117)							sb->flush();
            						}
HXDLIN( 117)						if (::hx::IsNull( sb->b )) {
HXLINE( 117)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 117)							::Array< ::String > sb1 = sb->b;
HXDLIN( 117)							sb1->push(::Std_obj::string(x2));
            						}
            					}
HXLINE( 118)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 119)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 120)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)2: {
HXLINE( 124)					{
HXLINE( 124)						::String x = (dr->toGLSL(null()) + HX_(" = ",63,7d,18,00));
HXDLIN( 124)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(" - ",73,6f,18,00));
HXDLIN( 124)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("; // sub",c5,db,68,51));
HXDLIN( 124)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 124)							sb->flush();
            						}
HXDLIN( 124)						if (::hx::IsNull( sb->b )) {
HXLINE( 124)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 124)							::Array< ::String > sb1 = sb->b;
HXDLIN( 124)							sb1->push(::Std_obj::string(x2));
            						}
            					}
HXLINE( 125)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 126)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 127)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)3: {
HXLINE( 131)					{
HXLINE( 131)						::String x = (dr->toGLSL(null()) + HX_(" = ",63,7d,18,00));
HXDLIN( 131)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(" * ",d6,6c,18,00));
HXDLIN( 131)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("; // mul",49,4e,64,51));
HXDLIN( 131)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 131)							sb->flush();
            						}
HXDLIN( 131)						if (::hx::IsNull( sb->b )) {
HXLINE( 131)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 131)							::Array< ::String > sb1 = sb->b;
HXDLIN( 131)							sb1->push(::Std_obj::string(x2));
            						}
            					}
HXLINE( 132)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 133)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 134)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)4: {
HXLINE( 138)					{
HXLINE( 138)						::String x = (dr->toGLSL(null()) + HX_(" = ",63,7d,18,00));
HXDLIN( 138)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(" / ",31,71,18,00));
HXDLIN( 138)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("; // div",96,6f,5d,51));
HXDLIN( 138)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 138)							sb->flush();
            						}
HXDLIN( 138)						if (::hx::IsNull( sb->b )) {
HXLINE( 138)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 138)							::Array< ::String > sb1 = sb->b;
HXDLIN( 138)							sb1->push(::Std_obj::string(x2));
            						}
            					}
HXLINE( 139)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 140)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 141)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)5: {
HXLINE( 145)					::String sr = sr1->toGLSL(null(),null());
HXLINE( 147)					if ((sr.indexOf(HX_(".",2e,00,00,00),null()) > -1)) {
HXLINE( 150)						::String x = (dr->toGLSL(null()) + HX_(" = 1.0 / ",01,36,9f,65));
HXDLIN( 150)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("; // rcp",e4,09,68,51));
HXDLIN( 150)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 150)							sb->flush();
            						}
HXDLIN( 150)						if (::hx::IsNull( sb->b )) {
HXLINE( 150)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 150)							::Array< ::String > sb1 = sb->b;
HXDLIN( 150)							sb1->push(::Std_obj::string(x1));
            						}
            					}
            					else {
HXLINE( 154)						::String x = (dr->toGLSL(null()) + HX_(" = vec4(1) / ",b4,32,05,3b));
HXDLIN( 154)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("; // rcp",e4,09,68,51));
HXDLIN( 154)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 154)							sb->flush();
            						}
HXDLIN( 154)						if (::hx::IsNull( sb->b )) {
HXLINE( 154)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 154)							::Array< ::String > sb1 = sb->b;
HXDLIN( 154)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 157)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 158)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)6: {
HXLINE( 162)					{
HXLINE( 162)						::String x = (dr->toGLSL(null()) + HX_(" = min(",39,b9,a2,4b));
HXDLIN( 162)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(", ",74,26,00,00));
HXDLIN( 162)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("); // min",00,15,0e,1a));
HXDLIN( 162)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 162)							sb->flush();
            						}
HXDLIN( 162)						if (::hx::IsNull( sb->b )) {
HXLINE( 162)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 162)							::Array< ::String > sb1 = sb->b;
HXDLIN( 162)							sb1->push(::Std_obj::string(x2));
            						}
            					}
HXLINE( 163)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 164)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 165)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)7: {
HXLINE( 169)					{
HXLINE( 169)						::String x = (dr->toGLSL(null()) + HX_(" = max(",e7,af,9c,4b));
HXDLIN( 169)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(", ",74,26,00,00));
HXDLIN( 169)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("); // max",12,0e,0e,1a));
HXDLIN( 169)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 169)							sb->flush();
            						}
HXDLIN( 169)						if (::hx::IsNull( sb->b )) {
HXLINE( 169)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 169)							::Array< ::String > sb1 = sb->b;
HXDLIN( 169)							sb1->push(::Std_obj::string(x2));
            						}
            					}
HXLINE( 170)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 171)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 172)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)8: {
HXLINE( 176)					{
HXLINE( 176)						::String x = (dr->toGLSL(null()) + HX_(" = fract(",85,4f,5f,de));
HXDLIN( 176)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("); // frc",05,cd,08,1a));
HXDLIN( 176)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 176)							sb->flush();
            						}
HXDLIN( 176)						if (::hx::IsNull( sb->b )) {
HXLINE( 176)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 176)							::Array< ::String > sb1 = sb->b;
HXDLIN( 176)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 177)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 178)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)9: {
HXLINE( 182)					{
HXLINE( 182)						::String x = (dr->toGLSL(null()) + HX_(" = sqrt(",05,d4,73,5c));
HXDLIN( 182)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("); // sqrt",b2,a8,41,b6));
HXDLIN( 182)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 182)							sb->flush();
            						}
HXDLIN( 182)						if (::hx::IsNull( sb->b )) {
HXLINE( 182)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 182)							::Array< ::String > sb1 = sb->b;
HXDLIN( 182)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 183)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 184)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)10: {
HXLINE( 188)					{
HXLINE( 188)						::String x = (dr->toGLSL(null()) + HX_(" = inversesqrt(",7b,94,3b,f8));
HXDLIN( 188)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("); // rsq",fe,e8,11,1a));
HXDLIN( 188)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 188)							sb->flush();
            						}
HXDLIN( 188)						if (::hx::IsNull( sb->b )) {
HXLINE( 188)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 188)							::Array< ::String > sb1 = sb->b;
HXDLIN( 188)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 189)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 190)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)11: {
HXLINE( 194)					{
HXLINE( 194)						::String x = (dr->toGLSL(null()) + HX_(" = pow(",73,f2,a2,4d));
HXDLIN( 194)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(", ",74,26,00,00));
HXDLIN( 194)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("); // pow",06,61,10,1a));
HXDLIN( 194)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 194)							sb->flush();
            						}
HXDLIN( 194)						if (::hx::IsNull( sb->b )) {
HXLINE( 194)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 194)							::Array< ::String > sb1 = sb->b;
HXDLIN( 194)							sb1->push(::Std_obj::string(x2));
            						}
            					}
HXLINE( 195)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 196)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 197)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)12: {
HXLINE( 201)					{
HXLINE( 201)						::String x = (dr->toGLSL(null()) + HX_(" = log2(",f7,c4,4a,53));
HXDLIN( 201)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("); // log",f2,57,0d,1a));
HXDLIN( 201)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 201)							sb->flush();
            						}
HXDLIN( 201)						if (::hx::IsNull( sb->b )) {
HXLINE( 201)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 201)							::Array< ::String > sb1 = sb->b;
HXDLIN( 201)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 202)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 203)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)13: {
HXLINE( 207)					{
HXLINE( 207)						::String x = (dr->toGLSL(null()) + HX_(" = exp2(",50,75,76,51));
HXDLIN( 207)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("); // exp",0b,10,08,1a));
HXDLIN( 207)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 207)							sb->flush();
            						}
HXDLIN( 207)						if (::hx::IsNull( sb->b )) {
HXLINE( 207)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 207)							::Array< ::String > sb1 = sb->b;
HXDLIN( 207)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 208)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 209)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)14: {
HXLINE( 213)					{
HXLINE( 213)						::String x = (dr->toGLSL(null()) + HX_(" = normalize(",1e,9b,e9,ff));
HXDLIN( 213)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("); // normalize",7b,81,39,e2));
HXDLIN( 213)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 213)							sb->flush();
            						}
HXDLIN( 213)						if (::hx::IsNull( sb->b )) {
HXLINE( 213)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 213)							::Array< ::String > sb1 = sb->b;
HXDLIN( 213)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 214)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 215)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)15: {
HXLINE( 219)					{
HXLINE( 219)						::String x = (dr->toGLSL(null()) + HX_(" = sin(",f3,00,9a,4f));
HXDLIN( 219)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("); // sin",86,a2,12,1a));
HXDLIN( 219)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 219)							sb->flush();
            						}
HXDLIN( 219)						if (::hx::IsNull( sb->b )) {
HXLINE( 219)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 219)							::Array< ::String > sb1 = sb->b;
HXDLIN( 219)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 220)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 221)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)16: {
HXLINE( 225)					{
HXLINE( 225)						::String x = (dr->toGLSL(null()) + HX_(" = cos(",e4,28,0b,45));
HXDLIN( 225)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("); // cos",b5,83,06,1a));
HXDLIN( 225)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 225)							sb->flush();
            						}
HXDLIN( 225)						if (::hx::IsNull( sb->b )) {
HXLINE( 225)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 225)							::Array< ::String > sb1 = sb->b;
HXDLIN( 225)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 226)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 227)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)17: {
HXLINE( 231)					sr1->sourceMask = (sr2->sourceMask = 7);
HXLINE( 232)					{
HXLINE( 232)						::String x = (dr->toGLSL(null()) + HX_(" = cross(vec3(",be,c1,b9,ac));
HXDLIN( 232)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("), vec3(",ec,87,86,4e));
HXDLIN( 232)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_(")); // crs",09,b9,f3,e5));
HXDLIN( 232)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 232)							sb->flush();
            						}
HXDLIN( 232)						if (::hx::IsNull( sb->b )) {
HXLINE( 232)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 232)							::Array< ::String > sb1 = sb->b;
HXDLIN( 232)							sb1->push(::Std_obj::string(x2));
            						}
            					}
HXLINE( 233)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 234)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 235)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)18: {
HXLINE( 239)					sr1->sourceMask = (sr2->sourceMask = 7);
HXLINE( 240)					{
HXLINE( 240)						::String x = (dr->toGLSL(null()) + HX_(" = vec4(dot(vec3(",e5,e8,98,98));
HXDLIN( 240)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("), vec3(",ec,87,86,4e));
HXDLIN( 240)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_(")))",49,40,1f,00));
HXDLIN( 240)						::String x3 = ((x2 + dr->getWriteMask()) + HX_("; // dp3",6c,75,5d,51));
HXDLIN( 240)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 240)							sb->flush();
            						}
HXDLIN( 240)						if (::hx::IsNull( sb->b )) {
HXLINE( 240)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            						}
            						else {
HXLINE( 240)							::Array< ::String > sb1 = sb->b;
HXDLIN( 240)							sb1->push(::Std_obj::string(x3));
            						}
            					}
HXLINE( 241)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 242)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 243)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)19: {
HXLINE( 247)					sr1->sourceMask = (sr2->sourceMask = 15);
HXLINE( 248)					{
HXLINE( 248)						::String x = (dr->toGLSL(null()) + HX_(" = vec4(dot(vec4(",c4,e9,98,98));
HXDLIN( 248)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("), vec4(",cb,88,86,4e));
HXDLIN( 248)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_(")))",49,40,1f,00));
HXDLIN( 248)						::String x3 = ((x2 + dr->getWriteMask()) + HX_("; // dp4",6d,75,5d,51));
HXDLIN( 248)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 248)							sb->flush();
            						}
HXDLIN( 248)						if (::hx::IsNull( sb->b )) {
HXLINE( 248)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            						}
            						else {
HXLINE( 248)							::Array< ::String > sb1 = sb->b;
HXDLIN( 248)							sb1->push(::Std_obj::string(x3));
            						}
            					}
HXLINE( 249)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 250)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 251)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)20: {
HXLINE( 255)					{
HXLINE( 255)						::String x = (dr->toGLSL(null()) + HX_(" = abs(",59,de,ae,43));
HXDLIN( 255)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("); // abs",e0,f3,04,1a));
HXDLIN( 255)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 255)							sb->flush();
            						}
HXDLIN( 255)						if (::hx::IsNull( sb->b )) {
HXLINE( 255)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 255)							::Array< ::String > sb1 = sb->b;
HXDLIN( 255)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 256)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 257)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)21: {
HXLINE( 261)					{
HXLINE( 261)						::String x = (dr->toGLSL(null()) + HX_(" = -",6a,39,55,15));
HXDLIN( 261)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("; // neg",95,02,65,51));
HXDLIN( 261)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 261)							sb->flush();
            						}
HXDLIN( 261)						if (::hx::IsNull( sb->b )) {
HXLINE( 261)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 261)							::Array< ::String > sb1 = sb->b;
HXDLIN( 261)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 262)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 263)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)22: {
HXLINE( 267)					{
HXLINE( 267)						::String x = (dr->toGLSL(null()) + HX_(" = clamp(",70,52,ed,36));
HXDLIN( 267)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(", 0.0, 1.0); // saturate",02,d7,59,d0));
HXDLIN( 267)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 267)							sb->flush();
            						}
HXDLIN( 267)						if (::hx::IsNull( sb->b )) {
HXLINE( 267)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 267)							::Array< ::String > sb1 = sb->b;
HXDLIN( 267)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 268)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 269)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)23: {
HXLINE( 277)					 ::openfl::display3D::_internal::_AGALConverter::RegisterUsage existingUsage = map->getRegisterUsage(sr2);
HXLINE( 279)					bool _hx_tmp;
HXDLIN( 279)					if (::hx::IsPointerNotEq( existingUsage,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn() )) {
HXLINE( 279)						_hx_tmp = ::hx::IsPointerNotEq( existingUsage,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY_dyn() );
            					}
            					else {
HXLINE( 279)						_hx_tmp = false;
            					}
HXDLIN( 279)					if (_hx_tmp) {
HXLINE( 281)						{
HXLINE( 281)							::String x = (dr->toGLSL(null()) + HX_(" = ",63,7d,18,00));
HXDLIN( 281)							::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(" * mat3(",9f,6a,62,c7));
HXDLIN( 281)							::String x2 = ((x1 + sr2->toGLSL(false,null())) + HX_("); // m33",bb,e5,0d,1a));
HXDLIN( 281)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 281)								sb->flush();
            							}
HXDLIN( 281)							if (::hx::IsNull( sb->b )) {
HXLINE( 281)								sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            							}
            							else {
HXLINE( 281)								::Array< ::String > sb1 = sb->b;
HXDLIN( 281)								sb1->push(::Std_obj::string(x2));
            							}
            						}
HXLINE( 282)						map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 283)						map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 284)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::MATRIX_4_4_dyn(),null());
            					}
            					else {
HXLINE( 289)						sr1->sourceMask = (sr2->sourceMask = 7);
HXLINE( 290)						{
HXLINE( 290)							::String x = ((dr->toGLSL(null()) + HX_(" = vec3(",a6,67,ad,0e)) + HX_("dot(",7f,f5,6d,42));
HXDLIN( 290)							::String x1 = ((x + sr1->toGLSL(true,null())) + HX_(",",2c,00,00,00));
HXDLIN( 290)							::String x2 = (((x1 + sr2->toGLSL(true,0)) + HX_("), ",dd,42,1f,00)) + HX_("dot(",7f,f5,6d,42));
HXDLIN( 290)							::String x3 = ((x2 + sr1->toGLSL(true,null())) + HX_(",",2c,00,00,00));
HXDLIN( 290)							::String x4 = (((x3 + sr2->toGLSL(true,1)) + HX_("),",e3,23,00,00)) + HX_("dot(",7f,f5,6d,42));
HXDLIN( 290)							::String x5 = ((x4 + sr1->toGLSL(true,null())) + HX_(",",2c,00,00,00));
HXDLIN( 290)							::String x6 = ((x5 + sr2->toGLSL(true,2)) + HX_(")); // m33",72,18,fb,e5));
HXDLIN( 290)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 290)								sb->flush();
            							}
HXDLIN( 290)							if (::hx::IsNull( sb->b )) {
HXLINE( 290)								sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x6));
            							}
            							else {
HXLINE( 290)								::Array< ::String > sb1 = sb->b;
HXDLIN( 290)								sb1->push(::Std_obj::string(x6));
            							}
            						}
HXLINE( 293)						map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 294)						map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 295)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),0);
HXLINE( 296)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),1);
HXLINE( 297)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),2);
            					}
            				}
            				break;
            				case (int)24: {
HXLINE( 308)					 ::openfl::display3D::_internal::_AGALConverter::RegisterUsage existingUsage = map->getRegisterUsage(sr2);
HXLINE( 310)					bool _hx_tmp;
HXDLIN( 310)					if (::hx::IsPointerNotEq( existingUsage,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn() )) {
HXLINE( 310)						_hx_tmp = ::hx::IsPointerNotEq( existingUsage,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY_dyn() );
            					}
            					else {
HXLINE( 310)						_hx_tmp = false;
            					}
HXDLIN( 310)					if (_hx_tmp) {
HXLINE( 312)						{
HXLINE( 312)							::String x = (dr->toGLSL(null()) + HX_(" = ",63,7d,18,00));
HXDLIN( 312)							::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(" * ",d6,6c,18,00));
HXDLIN( 312)							::String x2 = ((x1 + sr2->toGLSL(false,null())) + HX_("; // m44",72,15,64,51));
HXDLIN( 312)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 312)								sb->flush();
            							}
HXDLIN( 312)							if (::hx::IsNull( sb->b )) {
HXLINE( 312)								sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            							}
            							else {
HXLINE( 312)								::Array< ::String > sb1 = sb->b;
HXDLIN( 312)								sb1->push(::Std_obj::string(x2));
            							}
            						}
HXLINE( 313)						map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 314)						map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 315)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::MATRIX_4_4_dyn(),null());
            					}
            					else {
HXLINE( 320)						sr1->sourceMask = (sr2->sourceMask = 15);
HXLINE( 321)						{
HXLINE( 321)							::String x = ((dr->toGLSL(null()) + HX_(" = vec4(",85,68,ad,0e)) + HX_("dot(",7f,f5,6d,42));
HXDLIN( 321)							::String x1 = ((x + sr1->toGLSL(true,null())) + HX_(",",2c,00,00,00));
HXDLIN( 321)							::String x2 = (((x1 + sr2->toGLSL(true,0)) + HX_("), ",dd,42,1f,00)) + HX_("dot(",7f,f5,6d,42));
HXDLIN( 321)							::String x3 = ((x2 + sr1->toGLSL(true,null())) + HX_(",",2c,00,00,00));
HXDLIN( 321)							::String x4 = (((x3 + sr2->toGLSL(true,1)) + HX_("), ",dd,42,1f,00)) + HX_("dot(",7f,f5,6d,42));
HXDLIN( 321)							::String x5 = ((x4 + sr1->toGLSL(true,null())) + HX_(",",2c,00,00,00));
HXDLIN( 321)							::String x6 = (((x5 + sr2->toGLSL(true,2)) + HX_("), ",dd,42,1f,00)) + HX_("dot(",7f,f5,6d,42));
HXDLIN( 321)							::String x7 = ((x6 + sr1->toGLSL(true,null())) + HX_(",",2c,00,00,00));
HXDLIN( 321)							::String x8 = ((x7 + sr2->toGLSL(true,3)) + HX_(")); // m44",52,19,fb,e5));
HXDLIN( 321)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 321)								sb->flush();
            							}
HXDLIN( 321)							if (::hx::IsNull( sb->b )) {
HXLINE( 321)								sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x8));
            							}
            							else {
HXLINE( 321)								::Array< ::String > sb1 = sb->b;
HXDLIN( 321)								sb1->push(::Std_obj::string(x8));
            							}
            						}
HXLINE( 325)						map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 326)						map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 327)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),0);
HXLINE( 328)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),1);
HXLINE( 329)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),2);
HXLINE( 330)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),3);
            					}
            				}
            				break;
            				case (int)25: {
HXLINE( 341)					 ::openfl::display3D::_internal::_AGALConverter::DestRegister dr1 = dr;
HXDLIN( 341)					dr1->mask = (dr1->mask & 7);
HXLINE( 343)					 ::openfl::display3D::_internal::_AGALConverter::RegisterUsage existingUsage = map->getRegisterUsage(sr2);
HXLINE( 345)					bool _hx_tmp;
HXDLIN( 345)					if (::hx::IsPointerNotEq( existingUsage,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn() )) {
HXLINE( 345)						_hx_tmp = ::hx::IsPointerNotEq( existingUsage,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY_dyn() );
            					}
            					else {
HXLINE( 345)						_hx_tmp = false;
            					}
HXDLIN( 345)					if (_hx_tmp) {
HXLINE( 347)						{
HXLINE( 347)							::String x = (dr->toGLSL(null()) + HX_(" = ",63,7d,18,00));
HXDLIN( 347)							::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(" * ",d6,6c,18,00));
HXDLIN( 347)							::String x2 = ((x1 + sr2->toGLSL(false,null())) + HX_("; // m34",93,14,64,51));
HXDLIN( 347)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 347)								sb->flush();
            							}
HXDLIN( 347)							if (::hx::IsNull( sb->b )) {
HXLINE( 347)								sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            							}
            							else {
HXLINE( 347)								::Array< ::String > sb1 = sb->b;
HXDLIN( 347)								sb1->push(::Std_obj::string(x2));
            							}
            						}
HXLINE( 348)						map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 349)						map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 350)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::MATRIX_4_4_dyn(),null());
            					}
            					else {
HXLINE( 355)						sr1->sourceMask = (sr2->sourceMask = 15);
HXLINE( 356)						{
HXLINE( 356)							::String x = ((dr->toGLSL(null()) + HX_(" = vec3(",a6,67,ad,0e)) + HX_("dot(",7f,f5,6d,42));
HXDLIN( 356)							::String x1 = ((x + sr1->toGLSL(true,null())) + HX_(",",2c,00,00,00));
HXDLIN( 356)							::String x2 = (((x1 + sr2->toGLSL(true,0)) + HX_("), ",dd,42,1f,00)) + HX_("dot(",7f,f5,6d,42));
HXDLIN( 356)							::String x3 = ((x2 + sr1->toGLSL(true,null())) + HX_(",",2c,00,00,00));
HXDLIN( 356)							::String x4 = (((x3 + sr2->toGLSL(true,1)) + HX_("),",e3,23,00,00)) + HX_("dot(",7f,f5,6d,42));
HXDLIN( 356)							::String x5 = ((x4 + sr1->toGLSL(true,null())) + HX_(",",2c,00,00,00));
HXDLIN( 356)							::String x6 = ((x5 + sr2->toGLSL(true,2)) + HX_(")); // m34",73,18,fb,e5));
HXDLIN( 356)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 356)								sb->flush();
            							}
HXDLIN( 356)							if (::hx::IsNull( sb->b )) {
HXLINE( 356)								sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x6));
            							}
            							else {
HXLINE( 356)								::Array< ::String > sb1 = sb->b;
HXDLIN( 356)								sb1->push(::Std_obj::string(x6));
            							}
            						}
HXLINE( 359)						map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 360)						map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 361)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),0);
HXLINE( 362)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),1);
HXLINE( 363)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),2);
            					}
            				}
            				break;
            				case (int)39: {
HXLINE( 373)					sr1->sourceMask = 15;
HXLINE( 374)					{
HXLINE( 374)						::String x = ((HX_("if (any(lessThan(",0d,a8,4d,9b) + sr1->toGLSL(null(),null())) + HX_(", vec4(0)))) discard;",61,d7,c4,f0));
HXDLIN( 374)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 374)							sb->flush();
            						}
HXDLIN( 374)						if (::hx::IsNull( sb->b )) {
HXLINE( 374)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 374)							::Array< ::String > sb1 = sb->b;
HXDLIN( 374)							sb1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 375)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)40: {
HXLINE( 380)					 ::openfl::display3D::_internal::_AGALConverter::SamplerRegister sampler = ::openfl::display3D::_internal::_AGALConverter::SamplerRegister_obj::parse(source2,programType);
HXLINE( 382)					switch((int)(sampler->d)){
            						case (int)0: {
HXLINE( 386)							if ((sampler->t == 2)) {
HXLINE( 389)								sr1->sourceMask = 3;
HXLINE( 390)								map->addSaR(sampler,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::SAMPLER_2D_ALPHA_dyn());
HXLINE( 391)								{
HXLINE( 391)									::String x = ((HX_("if (",25,e9,b4,45) + sampler->toGLSL()) + HX_("_alphaEnabled) {\n",68,cb,8a,22));
HXDLIN( 391)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 391)										sb->flush();
            									}
HXDLIN( 391)									if (::hx::IsNull( sb->b )) {
HXLINE( 391)										sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            									}
            									else {
HXLINE( 391)										::Array< ::String > sb1 = sb->b;
HXDLIN( 391)										sb1->push(::Std_obj::string(x));
            									}
            								}
HXLINE( 392)								{
HXLINE( 392)									::String x1 = ((HX_("\t\t",e0,07,00,00) + dr->toGLSL(null())) + HX_(" = vec4(texture2D(",e0,3e,c1,08));
HXDLIN( 392)									::String x2 = ((x1 + sampler->toGLSL()) + HX_(", ",74,26,00,00));
HXDLIN( 392)									::String x3 = ((x2 + sr1->toGLSL(null(),null())) + HX_(").xyz, texture2D(",23,7d,b7,f4));
HXDLIN( 392)									::String x4 = ((x3 + sampler->toGLSL()) + HX_("_alpha, ",d3,3a,ce,eb));
HXDLIN( 392)									::String x5 = ((x4 + sr1->toGLSL(null(),null())) + HX_(").x); // tex + alpha\n",1f,b8,ed,c2));
HXDLIN( 392)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 392)										sb->flush();
            									}
HXDLIN( 392)									if (::hx::IsNull( sb->b )) {
HXLINE( 392)										sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x5));
            									}
            									else {
HXLINE( 392)										::Array< ::String > sb1 = sb->b;
HXDLIN( 392)										sb1->push(::Std_obj::string(x5));
            									}
            								}
HXLINE( 394)								{
HXLINE( 394)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 394)										sb->flush();
            									}
HXDLIN( 394)									if (::hx::IsNull( sb->b )) {
HXLINE( 394)										sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_5,1);
            									}
            									else {
HXLINE( 394)										sb->b->push(HX_("\t} else {\n",6a,88,3f,f9));
            									}
            								}
HXLINE( 395)								{
HXLINE( 395)									::String x6 = ((HX_("\t\t",e0,07,00,00) + dr->toGLSL(null())) + HX_(" = texture2D(",3e,55,2e,2f));
HXDLIN( 395)									::String x7 = ((x6 + sampler->toGLSL()) + HX_(", ",74,26,00,00));
HXDLIN( 395)									::String x8 = ((x7 + sr1->toGLSL(null(),null())) + HX_("); // tex\n",15,c9,e1,b6));
HXDLIN( 395)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 395)										sb->flush();
            									}
HXDLIN( 395)									if (::hx::IsNull( sb->b )) {
HXLINE( 395)										sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x8));
            									}
            									else {
HXLINE( 395)										::Array< ::String > sb1 = sb->b;
HXDLIN( 395)										sb1->push(::Std_obj::string(x8));
            									}
            								}
HXLINE( 396)								{
HXLINE( 396)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 396)										sb->flush();
            									}
HXDLIN( 396)									if (::hx::IsNull( sb->b )) {
HXLINE( 396)										sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_6,1);
            									}
            									else {
HXLINE( 396)										sb->b->push(HX_("\t}",54,08,00,00));
            									}
            								}
            							}
            							else {
HXLINE( 400)								sr1->sourceMask = 3;
HXLINE( 401)								map->addSaR(sampler,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::SAMPLER_2D_dyn());
HXLINE( 402)								{
HXLINE( 402)									::String x = (dr->toGLSL(null()) + HX_(" = texture2D(",3e,55,2e,2f));
HXDLIN( 402)									::String x1 = ((x + sampler->toGLSL()) + HX_(", ",74,26,00,00));
HXDLIN( 402)									::String x2 = ((x1 + sr1->toGLSL(null(),null())) + HX_("); // tex",55,61,13,1a));
HXDLIN( 402)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 402)										sb->flush();
            									}
HXDLIN( 402)									if (::hx::IsNull( sb->b )) {
HXLINE( 402)										sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            									}
            									else {
HXLINE( 402)										::Array< ::String > sb1 = sb->b;
HXDLIN( 402)										sb1->push(::Std_obj::string(x2));
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 407)							if ((sampler->t == 2)) {
HXLINE( 410)								sr1->sourceMask = 7;
HXLINE( 411)								map->addSaR(sampler,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::SAMPLER_CUBE_ALPHA_dyn());
HXLINE( 412)								{
HXLINE( 412)									::String x = ((HX_("if (",25,e9,b4,45) + sampler->toGLSL()) + HX_("_alphaEnabled) {\n",68,cb,8a,22));
HXDLIN( 412)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 412)										sb->flush();
            									}
HXDLIN( 412)									if (::hx::IsNull( sb->b )) {
HXLINE( 412)										sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            									}
            									else {
HXLINE( 412)										::Array< ::String > sb1 = sb->b;
HXDLIN( 412)										sb1->push(::Std_obj::string(x));
            									}
            								}
HXLINE( 413)								{
HXLINE( 413)									::String x1 = ((HX_("\t\t",e0,07,00,00) + dr->toGLSL(null())) + HX_(" = vec4(textureCube(",bd,62,16,95));
HXDLIN( 413)									::String x2 = ((x1 + sampler->toGLSL()) + HX_(", ",74,26,00,00));
HXDLIN( 413)									::String x3 = ((x2 + sr1->toGLSL(null(),null())) + HX_(").xyz, textureCube(",c0,f7,ca,19));
HXDLIN( 413)									::String x4 = ((x3 + sampler->toGLSL()) + HX_("_alpha, ",d3,3a,ce,eb));
HXDLIN( 413)									::String x5 = ((x4 + sr1->toGLSL(null(),null())) + HX_(").x); // tex + alpha\n",1f,b8,ed,c2));
HXDLIN( 413)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 413)										sb->flush();
            									}
HXDLIN( 413)									if (::hx::IsNull( sb->b )) {
HXLINE( 413)										sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x5));
            									}
            									else {
HXLINE( 413)										::Array< ::String > sb1 = sb->b;
HXDLIN( 413)										sb1->push(::Std_obj::string(x5));
            									}
            								}
HXLINE( 415)								{
HXLINE( 415)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 415)										sb->flush();
            									}
HXDLIN( 415)									if (::hx::IsNull( sb->b )) {
HXLINE( 415)										sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_7,1);
            									}
            									else {
HXLINE( 415)										sb->b->push(HX_("\t} else {\n",6a,88,3f,f9));
            									}
            								}
HXLINE( 416)								{
HXLINE( 416)									::String x6 = ((HX_("\t\t",e0,07,00,00) + dr->toGLSL(null())) + HX_(" = textureCube(",9b,4c,bc,01));
HXDLIN( 416)									::String x7 = ((x6 + sampler->toGLSL()) + HX_(", ",74,26,00,00));
HXDLIN( 416)									::String x8 = ((x7 + sr1->toGLSL(null(),null())) + HX_("); // tex",55,61,13,1a));
HXDLIN( 416)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 416)										sb->flush();
            									}
HXDLIN( 416)									if (::hx::IsNull( sb->b )) {
HXLINE( 416)										sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x8));
            									}
            									else {
HXLINE( 416)										::Array< ::String > sb1 = sb->b;
HXDLIN( 416)										sb1->push(::Std_obj::string(x8));
            									}
            								}
HXLINE( 417)								{
HXLINE( 417)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 417)										sb->flush();
            									}
HXDLIN( 417)									if (::hx::IsNull( sb->b )) {
HXLINE( 417)										sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_8,1);
            									}
            									else {
HXLINE( 417)										sb->b->push(HX_("\t}",54,08,00,00));
            									}
            								}
            							}
            							else {
HXLINE( 421)								sr1->sourceMask = 7;
HXLINE( 422)								{
HXLINE( 422)									::String x = (dr->toGLSL(null()) + HX_(" = textureCube(",9b,4c,bc,01));
HXDLIN( 422)									::String x1 = ((x + sampler->toGLSL()) + HX_(", ",74,26,00,00));
HXDLIN( 422)									::String x2 = ((x1 + sr1->toGLSL(null(),null())) + HX_("); // tex",55,61,13,1a));
HXDLIN( 422)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 422)										sb->flush();
            									}
HXDLIN( 422)									if (::hx::IsNull( sb->b )) {
HXLINE( 422)										sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            									}
            									else {
HXLINE( 422)										::Array< ::String > sb1 = sb->b;
HXDLIN( 422)										sb1->push(::Std_obj::string(x2));
            									}
            								}
HXLINE( 423)								map->addSaR(sampler,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::SAMPLER_CUBE_dyn());
            							}
            						}
            						break;
            					}
HXLINE( 428)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 429)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 431)					if (::hx::IsNotNull( samplerState )) {
HXLINE( 434)						samplerState[sampler->n] = sampler->toSamplerState();
            					}
            				}
            				break;
            				case (int)41: {
HXLINE( 439)					sr1->sourceMask = (sr2->sourceMask = 15);
HXLINE( 440)					{
HXLINE( 440)						::String x = (dr->toGLSL(null()) + HX_(" = vec4(greaterThanEqual(",aa,a3,51,ec));
HXDLIN( 440)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(", ",74,26,00,00));
HXDLIN( 440)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("))",e0,23,00,00));
HXDLIN( 440)						::String x3 = ((x2 + dr->getWriteMask()) + HX_("; // ste",e9,da,68,51));
HXDLIN( 440)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 440)							sb->flush();
            						}
HXDLIN( 440)						if (::hx::IsNull( sb->b )) {
HXLINE( 440)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            						}
            						else {
HXLINE( 440)							::Array< ::String > sb1 = sb->b;
HXDLIN( 440)							sb1->push(::Std_obj::string(x3));
            						}
            					}
HXLINE( 441)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 442)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 443)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)42: {
HXLINE( 447)					sr1->sourceMask = (sr2->sourceMask = 15);
HXLINE( 448)					{
HXLINE( 448)						::String x = (dr->toGLSL(null()) + HX_(" = vec4(lessThan(",69,ee,b4,35));
HXDLIN( 448)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(", ",74,26,00,00));
HXDLIN( 448)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("))",e0,23,00,00));
HXDLIN( 448)						::String x3 = ((x2 + dr->getWriteMask()) + HX_("; // slt",00,d4,68,51));
HXDLIN( 448)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 448)							sb->flush();
            						}
HXDLIN( 448)						if (::hx::IsNull( sb->b )) {
HXLINE( 448)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            						}
            						else {
HXLINE( 448)							::Array< ::String > sb1 = sb->b;
HXDLIN( 448)							sb1->push(::Std_obj::string(x3));
            						}
            					}
HXLINE( 449)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 450)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 451)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)44: {
HXLINE( 455)					sr1->sourceMask = (sr2->sourceMask = 15);
HXLINE( 456)					{
HXLINE( 456)						::String x = (dr->toGLSL(null()) + HX_(" = vec4(equal(",39,08,45,e1));
HXDLIN( 456)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(", ",74,26,00,00));
HXDLIN( 456)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("))",e0,23,00,00));
HXDLIN( 456)						::String x3 = ((x2 + dr->getWriteMask()) + HX_("; // seq",e4,cd,68,51));
HXDLIN( 456)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 456)							sb->flush();
            						}
HXDLIN( 456)						if (::hx::IsNull( sb->b )) {
HXLINE( 456)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            						}
            						else {
HXLINE( 456)							::Array< ::String > sb1 = sb->b;
HXDLIN( 456)							sb1->push(::Std_obj::string(x3));
            						}
            					}
HXLINE( 457)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 458)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 459)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)45: {
HXLINE( 463)					sr1->sourceMask = (sr2->sourceMask = 15);
HXLINE( 464)					{
HXLINE( 464)						::String x = (dr->toGLSL(null()) + HX_(" = vec4(notEqual(",42,aa,f1,97));
HXDLIN( 464)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(", ",74,26,00,00));
HXDLIN( 464)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("))",e0,23,00,00));
HXDLIN( 464)						::String x3 = ((x2 + dr->getWriteMask()) + HX_("; // sne",af,d5,68,51));
HXDLIN( 464)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 464)							sb->flush();
            						}
HXDLIN( 464)						if (::hx::IsNull( sb->b )) {
HXLINE( 464)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            						}
            						else {
HXLINE( 464)							::Array< ::String > sb1 = sb->b;
HXDLIN( 464)							sb1->push(::Std_obj::string(x3));
            						}
            					}
HXLINE( 465)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 466)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 467)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				default:{
HXLINE( 471)					HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,(HX_("Opcode ",72,65,6e,e7) + opcode)));
            				}
            			}
HXLINE( 474)			{
HXLINE( 474)				if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 474)					sb->flush();
            				}
HXDLIN( 474)				if (::hx::IsNull( sb->b )) {
HXLINE( 474)					sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_9,1);
            				}
            				else {
HXLINE( 474)					sb->b->push(HX_("\n",0a,00,00,00));
            				}
            			}
            		}
            		_hx_goto_2:;
HXLINE( 478)		if (::hx::IsNull( ::openfl::display3D::_internal::AGALConverter_obj::limitedProfile )) {
HXLINE( 480)			::String version = ( (::String)(::lime::graphics::opengl::GL_obj::context->getParameter(7938)) );
HXLINE( 481)			bool _hx_tmp;
HXDLIN( 481)			if ((version.indexOf(HX_("OpenGL ES",5f,cb,92,95),null()) <= -1)) {
HXLINE( 481)				_hx_tmp = (version.indexOf(HX_("WebGL",99,9f,e9,5a),null()) > -1);
            			}
            			else {
HXLINE( 481)				_hx_tmp = true;
            			}
HXDLIN( 481)			::openfl::display3D::_internal::AGALConverter_obj::limitedProfile = _hx_tmp;
            		}
HXLINE( 486)		 ::StringBuf glsl =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 487)		{
HXLINE( 487)			::String x;
HXDLIN( 487)			if (::hx::IsPointerEq( programType,::openfl::display3D::_internal::_AGALConverter::ProgramType_obj::VERTEX_dyn() )) {
HXLINE( 487)				x = HX_("vertex",64,db,47,a1);
            			}
            			else {
HXLINE( 487)				x = HX_("fragment",d0,5f,e5,ad);
            			}
HXDLIN( 487)			::String x1 = ((HX_("// AGAL ",af,bc,4a,8a) + x) + HX_(" shader\n",25,c5,d4,85));
HXDLIN( 487)			if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 487)				glsl->flush();
            			}
HXDLIN( 487)			if (::hx::IsNull( glsl->b )) {
HXLINE( 487)				glsl->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            			}
            			else {
HXLINE( 487)				::Array< ::String > glsl1 = glsl->b;
HXDLIN( 487)				glsl1->push(::Std_obj::string(x1));
            			}
            		}
HXLINE( 489)		if (( (bool)(::openfl::display3D::_internal::AGALConverter_obj::limitedProfile) )) {
HXLINE( 491)			{
HXLINE( 491)				if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 491)					glsl->flush();
            				}
HXDLIN( 491)				if (::hx::IsNull( glsl->b )) {
HXLINE( 491)					glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_10,1);
            				}
            				else {
HXLINE( 491)					glsl->b->push(HX_("#version 100\n",24,25,05,19));
            				}
            			}
HXLINE( 494)			{
HXLINE( 494)				if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 494)					glsl->flush();
            				}
HXDLIN( 494)				if (::hx::IsNull( glsl->b )) {
HXLINE( 494)					glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_11,1);
            				}
            				else {
HXLINE( 494)					glsl->b->push(HX_("#ifdef GL_FRAGMENT_PRECISION_HIGH\n",97,28,cb,f3));
            				}
            			}
HXLINE( 495)			{
HXLINE( 495)				if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 495)					glsl->flush();
            				}
HXDLIN( 495)				if (::hx::IsNull( glsl->b )) {
HXLINE( 495)					glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_12,1);
            				}
            				else {
HXLINE( 495)					glsl->b->push(HX_("precision highp float;\n",57,4a,f7,14));
            				}
            			}
HXLINE( 496)			{
HXLINE( 496)				if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 496)					glsl->flush();
            				}
HXDLIN( 496)				if (::hx::IsNull( glsl->b )) {
HXLINE( 496)					glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_13,1);
            				}
            				else {
HXLINE( 496)					glsl->b->push(HX_("#else\n",2e,de,b0,6d));
            				}
            			}
HXLINE( 497)			{
HXLINE( 497)				if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 497)					glsl->flush();
            				}
HXDLIN( 497)				if (::hx::IsNull( glsl->b )) {
HXLINE( 497)					glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_14,1);
            				}
            				else {
HXLINE( 497)					glsl->b->push(HX_("precision mediump float;\n",64,96,1e,cd));
            				}
            			}
HXLINE( 498)			{
HXLINE( 498)				if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 498)					glsl->flush();
            				}
HXDLIN( 498)				if (::hx::IsNull( glsl->b )) {
HXLINE( 498)					glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_15,1);
            				}
            				else {
HXLINE( 498)					glsl->b->push(HX_("#endif\n",f5,d8,f7,a9));
            				}
            			}
            		}
            		else {
HXLINE( 502)			if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 502)				glsl->flush();
            			}
HXDLIN( 502)			if (::hx::IsNull( glsl->b )) {
HXLINE( 502)				glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_16,1);
            			}
            			else {
HXLINE( 502)				glsl->b->push(HX_("#version 120\n",a6,a9,06,19));
            			}
            		}
HXLINE( 505)		{
HXLINE( 505)			::String x2 = map->toGLSL(false);
HXDLIN( 505)			if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 505)				glsl->flush();
            			}
HXDLIN( 505)			if (::hx::IsNull( glsl->b )) {
HXLINE( 505)				glsl->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            			}
            			else {
HXLINE( 505)				::Array< ::String > glsl1 = glsl->b;
HXDLIN( 505)				glsl1->push(::Std_obj::string(x2));
            			}
            		}
HXLINE( 507)		if (::hx::IsPointerEq( programType,::openfl::display3D::_internal::_AGALConverter::ProgramType_obj::VERTEX_dyn() )) {
HXLINE( 510)			if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 510)				glsl->flush();
            			}
HXDLIN( 510)			if (::hx::IsNull( glsl->b )) {
HXLINE( 510)				glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_17,1);
            			}
            			else {
HXLINE( 510)				glsl->b->push(HX_("uniform vec4 vcPositionScale;\n",cf,aa,4f,18));
            			}
            		}
HXLINE( 513)		{
HXLINE( 513)			if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 513)				glsl->flush();
            			}
HXDLIN( 513)			if (::hx::IsNull( glsl->b )) {
HXLINE( 513)				glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_18,1);
            			}
            			else {
HXLINE( 513)				glsl->b->push(HX_("void main() {\n",49,b0,bf,fb));
            			}
            		}
HXLINE( 514)		{
HXLINE( 514)			::String x3 = map->toGLSL(true);
HXDLIN( 514)			if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 514)				glsl->flush();
            			}
HXDLIN( 514)			if (::hx::IsNull( glsl->b )) {
HXLINE( 514)				glsl->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            			}
            			else {
HXLINE( 514)				::Array< ::String > glsl1 = glsl->b;
HXDLIN( 514)				glsl1->push(::Std_obj::string(x3));
            			}
            		}
HXLINE( 515)		{
HXLINE( 515)			::String x4 = sb->toString();
HXDLIN( 515)			if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 515)				glsl->flush();
            			}
HXDLIN( 515)			if (::hx::IsNull( glsl->b )) {
HXLINE( 515)				glsl->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x4));
            			}
            			else {
HXLINE( 515)				::Array< ::String > glsl1 = glsl->b;
HXDLIN( 515)				glsl1->push(::Std_obj::string(x4));
            			}
            		}
HXLINE( 517)		if (::hx::IsPointerEq( programType,::openfl::display3D::_internal::_AGALConverter::ProgramType_obj::VERTEX_dyn() )) {
HXLINE( 520)			if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 520)				glsl->flush();
            			}
HXDLIN( 520)			if (::hx::IsNull( glsl->b )) {
HXLINE( 520)				glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_19,1);
            			}
            			else {
HXLINE( 520)				glsl->b->push(HX_("\tgl_Position *= vcPositionScale;\n",7c,ad,85,8d));
            			}
            		}
HXLINE( 523)		{
HXLINE( 523)			if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 523)				glsl->flush();
            			}
HXDLIN( 523)			if (::hx::IsNull( glsl->b )) {
HXLINE( 523)				glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_20,1);
            			}
            			else {
HXLINE( 523)				glsl->b->push(HX_("}\n",ed,6c,00,00));
            			}
            		}
HXLINE( 526)		return glsl->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AGALConverter_obj,convertToGLSL,return )


AGALConverter_obj::AGALConverter_obj()
{
}

bool AGALConverter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"readUInt64") ) { outValue = readUInt64_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"convertToGLSL") ) { outValue = convertToGLSL_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"limitedProfile") ) { outValue = ( limitedProfile ); return true; }
		if (HX_FIELD_EQ(inName,"prefixFromType") ) { outValue = prefixFromType_dyn(); return true; }
	}
	return false;
}

bool AGALConverter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"limitedProfile") ) { limitedProfile=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AGALConverter_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo AGALConverter_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &AGALConverter_obj::limitedProfile,HX_("limitedProfile",ef,13,1a,0a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void AGALConverter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AGALConverter_obj::limitedProfile,"limitedProfile");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AGALConverter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AGALConverter_obj::limitedProfile,"limitedProfile");
};

#endif

::hx::Class AGALConverter_obj::__mClass;

static ::String AGALConverter_obj_sStaticFields[] = {
	HX_("limitedProfile",ef,13,1a,0a),
	HX_("prefixFromType",f6,38,ec,c8),
	HX_("readUInt64",2e,21,8b,12),
	HX_("convertToGLSL",4c,43,62,b5),
	::String(null())
};

void AGALConverter_obj::__register()
{
	AGALConverter_obj _hx_dummy;
	AGALConverter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D._internal.AGALConverter",e4,2b,d8,6e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AGALConverter_obj::__GetStatic;
	__mClass->mSetStaticField = &AGALConverter_obj::__SetStatic;
	__mClass->mMarkFunc = AGALConverter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AGALConverter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AGALConverter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AGALConverter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AGALConverter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AGALConverter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AGALConverter_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bb48f68540be485a_22_boot)
HXDLIN(  22)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _internal
