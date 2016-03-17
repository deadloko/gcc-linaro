
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_prng_CSPRNG$Poller__
#define __gnu_javax_crypto_prng_CSPRNG$Poller__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace prng
        {
            class CSPRNG;
            class CSPRNG$Poller;
        }
      }
    }
  }
}

class gnu::javax::crypto::prng::CSPRNG$Poller : public ::java::lang::Object
{

public: // actually package-private
  CSPRNG$Poller(::gnu::javax::crypto::prng::CSPRNG *, ::java::util::List *, ::java::util::List *, ::java::util::List *, ::java::util::List *, ::gnu::javax::crypto::prng::CSPRNG *);
public:
  void run();
  void stopUpdating();
private:
  ::java::util::List * __attribute__((aligned(__alignof__( ::java::lang::Object)))) files;
  ::java::util::List * urls;
  ::java::util::List * progs;
  ::java::util::List * other;
  ::gnu::javax::crypto::prng::CSPRNG * pool;
  jboolean running;
public: // actually package-private
  ::gnu::javax::crypto::prng::CSPRNG * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_crypto_prng_CSPRNG$Poller__
