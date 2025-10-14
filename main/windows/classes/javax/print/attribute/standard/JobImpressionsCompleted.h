#ifndef _javax_print_attribute_standard_JobImpressionsCompleted_h_
#define _javax_print_attribute_standard_JobImpressionsCompleted_h_
//$ class javax.print.attribute.standard.JobImpressionsCompleted
//$ extends javax.print.attribute.IntegerSyntax
//$ implements javax.print.attribute.PrintJobAttribute

#include <javax/print/attribute/IntegerSyntax.h>
#include <javax/print/attribute/PrintJobAttribute.h>

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export JobImpressionsCompleted : public ::javax::print::attribute::IntegerSyntax, public ::javax::print::attribute::PrintJobAttribute {
	$class(JobImpressionsCompleted, $NO_CLASS_INIT, ::javax::print::attribute::IntegerSyntax, ::javax::print::attribute::PrintJobAttribute)
public:
	JobImpressionsCompleted();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t value);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x5D4BA523E904104E;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_JobImpressionsCompleted_h_