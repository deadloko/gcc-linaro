
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_DynAn_NameValuePairHolder__
#define __gnu_CORBA_DynAn_NameValuePairHolder__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
      namespace DynAn
      {
          class NameValuePairHolder;
      }
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class NameValuePair;
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
    }
  }
}

class gnu::CORBA::DynAn::NameValuePairHolder : public ::java::lang::Object
{

public:
  NameValuePairHolder();
  NameValuePairHolder(::org::omg::CORBA::NameValuePair *);
  virtual void _read(::org::omg::CORBA::portable::InputStream *);
  virtual ::org::omg::CORBA::TypeCode * _type();
  virtual void _write(::org::omg::CORBA::portable::OutputStream *);
  ::org::omg::CORBA::NameValuePair * __attribute__((aligned(__alignof__( ::java::lang::Object)))) value;
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_DynAn_NameValuePairHolder__