// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_Test
#include <Test.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_df13cafffbed243f_3_main,"Test","main",0x9c6c95b5,"Test.main","Test.hx",3,0x8afb218c)

void Test_obj::__construct() { }

Dynamic Test_obj::__CreateEmpty() { return new Test_obj; }

void *Test_obj::_hx_vtable = 0;

Dynamic Test_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Test_obj > _hx_result = new Test_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Test_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x37d2f472;
}

void Test_obj::main(){
            	HX_STACKFRAME(&_hx_pos_df13cafffbed243f_3_main)
HXDLIN(   3)		::haxe::Log_obj::trace(HX_("HENLO WORL",fe,e5,82,f2),hx::SourceInfo(HX_("Test.hx",8c,21,fb,8a),3,HX_("Test",72,f4,d2,37),HX_("main",39,38,56,48)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Test_obj,main,(void))


Test_obj::Test_obj()
{
}

bool Test_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Test_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Test_obj_sStaticStorageInfo = 0;
#endif

static void Test_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Test_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Test_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Test_obj::__mClass,"__mClass");
};

#endif

hx::Class Test_obj::__mClass;

static ::String Test_obj_sStaticFields[] = {
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null())
};

void Test_obj::__register()
{
	hx::Object *dummy = new Test_obj;
	Test_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Test","\x72","\xf4","\xd2","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Test_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Test_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Test_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Test_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Test_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Test_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Test_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

