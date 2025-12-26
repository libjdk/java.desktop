#include <bug4788637.h>

#include <bug4788637$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/AbstractSpinnerModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/SpinnerNumberModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

#undef BUTTON1_MASK

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug4788637$1 = ::bug4788637$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractSpinnerModel = ::javax::swing::AbstractSpinnerModel;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JSpinner = ::javax::swing::JSpinner;
using $SpinnerModel = ::javax::swing::SpinnerModel;
using $SpinnerNumberModel = ::javax::swing::SpinnerNumberModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $ChangeListener = ::javax::swing::event::ChangeListener;

class bug4788637$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4788637$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		bug4788637::lambda$main$0(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4788637$$Lambda$lambda$main$0>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4788637$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(bug4788637$$Lambda$lambda$main$0, laf)},
	{}
};
$MethodInfo bug4788637$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4788637$$Lambda$lambda$main$0::*)($UIManager$LookAndFeelInfo*)>(&bug4788637$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4788637$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4788637$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug4788637$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug4788637$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4788637$$Lambda$lambda$main$0::class$ = nullptr;

class bug4788637$$Lambda$createAndShowGUI$1 : public $Runnable {
	$class(bug4788637$$Lambda$createAndShowGUI$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4788637* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->createAndShowGUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4788637$$Lambda$createAndShowGUI$1>());
	}
	bug4788637* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4788637$$Lambda$createAndShowGUI$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4788637$$Lambda$createAndShowGUI$1, inst$)},
	{}
};
$MethodInfo bug4788637$$Lambda$createAndShowGUI$1::methodInfos[3] = {
	{"<init>", "(Lbug4788637;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4788637$$Lambda$createAndShowGUI$1::*)(bug4788637*)>(&bug4788637$$Lambda$createAndShowGUI$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4788637$$Lambda$createAndShowGUI$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4788637$$Lambda$createAndShowGUI$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug4788637$$Lambda$createAndShowGUI$1::load$($String* name, bool initialize) {
	$loadClass(bug4788637$$Lambda$createAndShowGUI$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4788637$$Lambda$createAndShowGUI$1::class$ = nullptr;

class bug4788637$$Lambda$lambda$main$1$2 : public $Runnable {
	$class(bug4788637$$Lambda$lambda$main$1$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4788637::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4788637$$Lambda$lambda$main$1$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug4788637$$Lambda$lambda$main$1$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4788637$$Lambda$lambda$main$1$2::*)()>(&bug4788637$$Lambda$lambda$main$1$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4788637$$Lambda$lambda$main$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4788637$$Lambda$lambda$main$1$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug4788637$$Lambda$lambda$main$1$2::load$($String* name, bool initialize) {
	$loadClass(bug4788637$$Lambda$lambda$main$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4788637$$Lambda$lambda$main$1$2::class$ = nullptr;

class bug4788637$$Lambda$destroy$3 : public $Runnable {
	$class(bug4788637$$Lambda$destroy$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4788637* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->destroy();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4788637$$Lambda$destroy$3>());
	}
	bug4788637* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4788637$$Lambda$destroy$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4788637$$Lambda$destroy$3, inst$)},
	{}
};
$MethodInfo bug4788637$$Lambda$destroy$3::methodInfos[3] = {
	{"<init>", "(Lbug4788637;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4788637$$Lambda$destroy$3::*)(bug4788637*)>(&bug4788637$$Lambda$destroy$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4788637$$Lambda$destroy$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4788637$$Lambda$destroy$3",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug4788637$$Lambda$destroy$3::load$($String* name, bool initialize) {
	$loadClass(bug4788637$$Lambda$destroy$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4788637$$Lambda$destroy$3::class$ = nullptr;

$FieldInfo _bug4788637_FieldInfo_[] = {
	{"spinner", "Ljavax/swing/JSpinner;", nullptr, $PRIVATE | $STATIC, $staticField(bug4788637, spinner)},
	{"fr", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug4788637, fr)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug4788637, robot)},
	{"step", "I", nullptr, $PRIVATE, $field(bug4788637, step)},
	{"spinnerValueChanged", "[Z", nullptr, $PRIVATE, $field(bug4788637, spinnerValueChanged)},
	{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(bug4788637, p)},
	{"rect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(bug4788637, rect)},
	{}
};

$MethodInfo _bug4788637_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4788637::*)()>(&bug4788637::init$))},
	{"createAndShowGUI", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4788637::*)()>(&bug4788637::createAndShowGUI))},
	{"destroy", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4788637::*)()>(&bug4788637::destroy))},
	{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&bug4788637::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug4788637::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4788637::main)), "java.lang.Exception"},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&bug4788637::setLookAndFeel))},
	{"start", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4788637::*)()>(&bug4788637::start))},
	{}
};

$InnerClassInfo _bug4788637_InnerClassesInfo_[] = {
	{"bug4788637$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4788637_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"bug4788637",
	"java.lang.Object",
	nullptr,
	_bug4788637_FieldInfo_,
	_bug4788637_MethodInfo_,
	nullptr,
	nullptr,
	_bug4788637_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4788637$1"
};

$Object* allocate$bug4788637($Class* clazz) {
	return $of($alloc(bug4788637));
}

$JSpinner* bug4788637::spinner = nullptr;
$JFrame* bug4788637::fr = nullptr;
$Robot* bug4788637::robot = nullptr;
$Point* bug4788637::p = nullptr;
$Rectangle* bug4788637::rect = nullptr;

void bug4788637::init$() {
	$set(this, spinnerValueChanged, $new($booleans, {
		false,
		false,
		false
	}));
}

void bug4788637::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init(bug4788637);
	$assignStatic(bug4788637::robot, $new($Robot));
	$nc(bug4788637::robot)->setAutoDelay(50);
	$nc(bug4788637::robot)->setAutoWaitForIdle(true);
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4788637$$Lambda$lambda$main$0, laf)));
				$var(bug4788637, app, $new(bug4788637));
				{
					$var($Throwable, var$0, nullptr);
					try {
						$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4788637$$Lambda$createAndShowGUI$1, static_cast<bug4788637*>(app))));
						$nc(bug4788637::robot)->waitForIdle();
						$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4788637$$Lambda$lambda$main$1$2)));
						app->start();
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4788637$$Lambda$destroy$3, static_cast<bug4788637*>(app))));
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
		}
	}
}

void bug4788637::createAndShowGUI() {
	$useLocalCurrentObjectStackCache();
	$assignStatic(bug4788637::fr, $new($JFrame, "Test"_s));
	$nc(bug4788637::fr)->setLayout($$new($GridBagLayout));
	$var($SpinnerModel, model, $new($SpinnerNumberModel, 50, 1, 100, 1));
	$assignStatic(bug4788637::spinner, $new($JSpinner, model));
	$nc(bug4788637::fr)->add(static_cast<$Component*>(bug4788637::spinner), $of($$new($GridBagConstraints)));
	$nc(bug4788637::spinner)->addChangeListener($$new($bug4788637$1, this));
	$nc(bug4788637::fr)->setSize(200, 200);
	$nc(bug4788637::fr)->setLocationRelativeTo(nullptr);
	$nc(bug4788637::fr)->setVisible(true);
	$nc(bug4788637::fr)->toFront();
}

void bug4788637::start() {
	try {
		$Thread::sleep(1000);
		$nc(bug4788637::robot)->mouseMove($nc(bug4788637::p)->x + $nc(bug4788637::rect)->width - 3, $nc(bug4788637::p)->y + 3);
		$nc(bug4788637::robot)->mousePress($InputEvent::BUTTON1_MASK);
		$synchronized(this) {
			if (!$nc(this->spinnerValueChanged)->get(this->step)) {
				$of(this)->wait(3000);
			}
		}
		$nc(bug4788637::robot)->mouseMove($nc(bug4788637::p)->x + $nc(bug4788637::rect)->width - 3, $nc(bug4788637::p)->y - 3);
		$synchronized(this) {
			++this->step;
			if (!$nc(this->spinnerValueChanged)->get(this->step)) {
				$of(this)->wait(3000);
			}
		}
		$nc(bug4788637::robot)->mouseMove($nc(bug4788637::p)->x + $nc(bug4788637::rect)->width - 3, $nc(bug4788637::p)->y + 3);
		$synchronized(this) {
			++this->step;
			if (!$nc(this->spinnerValueChanged)->get(this->step)) {
				$of(this)->wait(3000);
			}
		}
		$nc(bug4788637::robot)->mouseRelease($InputEvent::BUTTON1_MASK);
	} catch ($Throwable& t) {
		$throwNew($RuntimeException, $cast($Throwable, t));
	}
}

void bug4788637::destroy() {
	$nc(bug4788637::fr)->dispose();
	$synchronized(this) {
		if (!$nc(this->spinnerValueChanged)->get(0) || $nc(this->spinnerValueChanged)->get(1) || !$nc(this->spinnerValueChanged)->get(2)) {
			$throwNew($Error, "JSpinner buttons don\'t conform to most platform conventions"_s);
		}
	}
}

void bug4788637::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
		$nc($System::out)->println($$str({"LookAndFeel: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($UnsupportedLookAndFeelException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void bug4788637::lambda$main$1() {
	$init(bug4788637);
	$nc(bug4788637::spinner)->requestFocus();
	$assignStatic(bug4788637::p, $nc(bug4788637::spinner)->getLocationOnScreen());
	$assignStatic(bug4788637::rect, $nc(bug4788637::spinner)->getBounds());
}

void bug4788637::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	setLookAndFeel(laf);
}

bug4788637::bug4788637() {
}

$Class* bug4788637::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4788637$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug4788637$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(bug4788637$$Lambda$createAndShowGUI$1::classInfo$.name)) {
			return bug4788637$$Lambda$createAndShowGUI$1::load$(name, initialize);
		}
		if (name->equals(bug4788637$$Lambda$lambda$main$1$2::classInfo$.name)) {
			return bug4788637$$Lambda$lambda$main$1$2::load$(name, initialize);
		}
		if (name->equals(bug4788637$$Lambda$destroy$3::classInfo$.name)) {
			return bug4788637$$Lambda$destroy$3::load$(name, initialize);
		}
	}
	$loadClass(bug4788637, name, initialize, &_bug4788637_ClassInfo_, allocate$bug4788637);
	return class$;
}

$Class* bug4788637::class$ = nullptr;