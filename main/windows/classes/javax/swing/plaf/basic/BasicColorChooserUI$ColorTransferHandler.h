#ifndef _javax_swing_plaf_basic_BasicColorChooserUI$ColorTransferHandler_h_
#define _javax_swing_plaf_basic_BasicColorChooserUI$ColorTransferHandler_h_
//$ class javax.swing.plaf.basic.BasicColorChooserUI$ColorTransferHandler
//$ extends javax.swing.TransferHandler
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/TransferHandler.h>
#include <javax/swing/plaf/UIResource.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicColorChooserUI$ColorTransferHandler : public ::javax::swing::TransferHandler, public ::javax::swing::plaf::UIResource {
	$class(BasicColorChooserUI$ColorTransferHandler, $NO_CLASS_INIT, ::javax::swing::TransferHandler, ::javax::swing::plaf::UIResource)
public:
	BasicColorChooserUI$ColorTransferHandler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $String* toString() override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicColorChooserUI$ColorTransferHandler_h_