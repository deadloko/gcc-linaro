
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_gtk_AsyncImage$NullImageSource__
#define __gnu_java_awt_peer_gtk_AsyncImage$NullImageSource__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace gtk
          {
              class AsyncImage;
              class AsyncImage$NullImageSource;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      namespace image
      {
          class ImageConsumer;
      }
    }
  }
}

class gnu::java::awt::peer::gtk::AsyncImage$NullImageSource : public ::java::lang::Object
{

public: // actually package-private
  AsyncImage$NullImageSource(::gnu::java::awt::peer::gtk::AsyncImage *);
public:
  virtual void addConsumer(::java::awt::image::ImageConsumer *);
  virtual jboolean isConsumer(::java::awt::image::ImageConsumer *);
  virtual void removeConsumer(::java::awt::image::ImageConsumer *);
  virtual void requestTopDownLeftRightResend(::java::awt::image::ImageConsumer *);
  virtual void startProduction(::java::awt::image::ImageConsumer *);
private:
  ::java::util::ArrayList * __attribute__((aligned(__alignof__( ::java::lang::Object)))) consumers;
public: // actually package-private
  ::gnu::java::awt::peer::gtk::AsyncImage * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_gtk_AsyncImage$NullImageSource__
