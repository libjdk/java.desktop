#include <I18NViewNoWrapMinSpan.h>

#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TextUI = ::javax::swing::plaf::TextUI;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $View = ::javax::swing::text::View;

class I18NViewNoWrapMinSpan$$Lambda$lambda$main$0 : public $Runnable {
	$class(I18NViewNoWrapMinSpan$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		I18NViewNoWrapMinSpan::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<I18NViewNoWrapMinSpan$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo I18NViewNoWrapMinSpan$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(I18NViewNoWrapMinSpan$$Lambda$lambda$main$0::*)()>(&I18NViewNoWrapMinSpan$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo I18NViewNoWrapMinSpan$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"I18NViewNoWrapMinSpan$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* I18NViewNoWrapMinSpan$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(I18NViewNoWrapMinSpan$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* I18NViewNoWrapMinSpan$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _I18NViewNoWrapMinSpan_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(I18NViewNoWrapMinSpan::*)()>(&I18NViewNoWrapMinSpan::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&I18NViewNoWrapMinSpan::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&I18NViewNoWrapMinSpan::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _I18NViewNoWrapMinSpan_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"I18NViewNoWrapMinSpan",
	"java.lang.Object",
	nullptr,
	nullptr,
	_I18NViewNoWrapMinSpan_MethodInfo_
};

$Object* allocate$I18NViewNoWrapMinSpan($Class* clazz) {
	return $of($alloc(I18NViewNoWrapMinSpan));
}

void I18NViewNoWrapMinSpan::init$() {
}

void I18NViewNoWrapMinSpan::main($StringArray* args) {
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(I18NViewNoWrapMinSpan$$Lambda$lambda$main$0)));
	$nc($System::out)->println("ok"_s);
}

void I18NViewNoWrapMinSpan::lambda$main$0() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($JTextField, textField, $new($JTextField, 15));
		textField->setText(u"ม12345"_s);
		float noSpaceMin = $nc($($nc($($cast($TextUI, textField->getUI())))->getRootView(textField)))->getMinimumSpan(0);
		$nc($(textField->getDocument()))->insertString(3, " "_s, nullptr);
		if (noSpaceMin > $nc($($nc($($cast($TextUI, textField->getUI())))->getRootView(textField)))->getMinimumSpan(0)) {
			$throwNew($RuntimeException, "Minimum span is calculated for wrapped text"_s);
		}
	} catch ($BadLocationException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

I18NViewNoWrapMinSpan::I18NViewNoWrapMinSpan() {
}

$Class* I18NViewNoWrapMinSpan::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(I18NViewNoWrapMinSpan$$Lambda$lambda$main$0::classInfo$.name)) {
			return I18NViewNoWrapMinSpan$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(I18NViewNoWrapMinSpan, name, initialize, &_I18NViewNoWrapMinSpan_ClassInfo_, allocate$I18NViewNoWrapMinSpan);
	return class$;
}

$Class* I18NViewNoWrapMinSpan::class$ = nullptr;