// Generated by Haxe 4.1.1
#ifndef INCLUDED_haxe_iterators_StringIteratorUnicode
#define INCLUDED_haxe_iterators_StringIteratorUnicode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_952cf0b39fded2d4_33_new)
HX_DECLARE_CLASS2(haxe,iterators,StringIteratorUnicode)

namespace haxe{
namespace iterators{


class HXCPP_CLASS_ATTRIBUTES StringIteratorUnicode_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StringIteratorUnicode_obj OBJ_;
		StringIteratorUnicode_obj();

	public:
		enum { _hx_ClassId = 0x09c8f1e7 };

		void __construct(::String s);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.iterators.StringIteratorUnicode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.iterators.StringIteratorUnicode"); }

		inline static ::hx::ObjectPtr< StringIteratorUnicode_obj > __new(::String s) {
			::hx::ObjectPtr< StringIteratorUnicode_obj > __this = new StringIteratorUnicode_obj();
			__this->__construct(s);
			return __this;
		}

		inline static ::hx::ObjectPtr< StringIteratorUnicode_obj > __alloc(::hx::Ctx *_hx_ctx,::String s) {
			StringIteratorUnicode_obj *__this = (StringIteratorUnicode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StringIteratorUnicode_obj), true, "haxe.iterators.StringIteratorUnicode"));
			*(void **)__this = StringIteratorUnicode_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_952cf0b39fded2d4_33_new)
HXLINE(  34)		( ( ::haxe::iterators::StringIteratorUnicode)(__this) )->offset = 0;
HXLINE(  41)		( ( ::haxe::iterators::StringIteratorUnicode)(__this) )->s = s;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StringIteratorUnicode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StringIteratorUnicode",de,4a,7e,98); }

		static  ::haxe::iterators::StringIteratorUnicode unicodeIterator(::String s);
		static ::Dynamic unicodeIterator_dyn();

		int offset;
		::String s;
		bool hasNext();
		::Dynamic hasNext_dyn();

		int next();
		::Dynamic next_dyn();

};

} // end namespace haxe
} // end namespace iterators

#endif /* INCLUDED_haxe_iterators_StringIteratorUnicode */ 
