
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_PrintAttributeException__
#define __gnu_javax_print_PrintAttributeException__

#pragma interface

#include <javax/print/PrintException.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace print
      {
          class PrintAttributeException;
      }
    }
  }
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
          class Attribute;
      }
    }
  }
}

class gnu::javax::print::PrintAttributeException : public ::javax::print::PrintException
{

public:
  PrintAttributeException(JArray< ::java::lang::Class * > *, JArray< ::javax::print::attribute::Attribute * > *);
  PrintAttributeException(::java::lang::Exception *, JArray< ::java::lang::Class * > *, JArray< ::javax::print::attribute::Attribute * > *);
  PrintAttributeException(::java::lang::String *, JArray< ::java::lang::Class * > *, JArray< ::javax::print::attribute::Attribute * > *);
  PrintAttributeException(::java::lang::String *, ::java::lang::Exception *, JArray< ::java::lang::Class * > *, JArray< ::javax::print::attribute::Attribute * > *);
  JArray< ::java::lang::Class * > * getUnsupportedAttributes();
  JArray< ::javax::print::attribute::Attribute * > * getUnsupportedValues();
private:
  JArray< ::java::lang::Class * > * __attribute__((aligned(__alignof__( ::javax::print::PrintException)))) categories;
  JArray< ::javax::print::attribute::Attribute * > * values;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_print_PrintAttributeException__