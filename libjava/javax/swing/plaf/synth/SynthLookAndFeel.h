
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_synth_SynthLookAndFeel__
#define __javax_swing_plaf_synth_SynthLookAndFeel__

#pragma interface

#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class JComponent;
        class UIDefaults;
      namespace plaf
      {
          class ComponentUI;
        namespace synth
        {
            class Region;
            class SynthLookAndFeel;
            class SynthStyle;
            class SynthStyleFactory;
        }
      }
    }
  }
}

class javax::swing::plaf::synth::SynthLookAndFeel : public ::javax::swing::plaf::basic::BasicLookAndFeel
{

public:
  SynthLookAndFeel();
  static void setStyleFactory(::javax::swing::plaf::synth::SynthStyleFactory *);
  static ::javax::swing::plaf::synth::SynthStyleFactory * getStyleFactory();
  static ::javax::swing::plaf::synth::SynthStyle * getStyle(::javax::swing::JComponent *, ::javax::swing::plaf::synth::Region *);
  static void updateStyles(::java::awt::Component *);
  static ::javax::swing::plaf::synth::Region * getRegion(::javax::swing::JComponent *);
  static ::javax::swing::plaf::ComponentUI * createUI(::javax::swing::JComponent *);
  virtual void initialize();
  virtual void uninitialize();
  virtual ::javax::swing::UIDefaults * getDefaults();
  virtual jboolean shouldUpdateStyleOnAncestorChanged();
  virtual void load(::java::io::InputStream *, ::java::lang::Class *);
  virtual ::java::lang::String * getDescription();
  virtual ::java::lang::String * getID();
  virtual ::java::lang::String * getName();
  virtual jboolean isNativeLookAndFeel();
  virtual jboolean isSupportedLookAndFeel();
private:
  static ::javax::swing::plaf::synth::SynthStyleFactory * styleFactory;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_synth_SynthLookAndFeel__
