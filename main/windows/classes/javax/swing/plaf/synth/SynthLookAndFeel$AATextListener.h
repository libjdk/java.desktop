#ifndef _javax_swing_plaf_synth_SynthLookAndFeel$AATextListener_h_
#define _javax_swing_plaf_synth_SynthLookAndFeel$AATextListener_h_
//$ class javax.swing.plaf.synth.SynthLookAndFeel$AATextListener
//$ extends java.lang.ref.WeakReference
//$ implements java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <java/lang/ref/WeakReference.h>

namespace java {
	namespace awt {
		class Window;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class LookAndFeel;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthLookAndFeel$AATextListener : public ::java::lang::ref::WeakReference, public ::java::beans::PropertyChangeListener {
	$class(SynthLookAndFeel$AATextListener, $NO_CLASS_INIT, ::java::lang::ref::WeakReference, ::java::beans::PropertyChangeListener)
public:
	SynthLookAndFeel$AATextListener();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::LookAndFeel* laf);
	virtual void dispose();
	static bool isUpdatePending();
	virtual void propertyChange(::java::beans::PropertyChangeEvent* pce) override;
	static void setUpdatePending(bool update);
	virtual $String* toString() override;
	static void updateAllUIs();
	virtual void updateUI();
	static void updateWindowUI(::java::awt::Window* window);
	$String* key = nullptr;
	static bool updatePending;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthLookAndFeel$AATextListener_h_