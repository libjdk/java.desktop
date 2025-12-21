#include <bug8001470$1.h>

#include <bug8001470.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug8001470 = ::bug8001470;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridLayout = ::java::awt::GridLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextField = ::javax::swing::JTextField;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _bug8001470$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8001470$1::*)()>(&bug8001470$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8001470$1_EnclosingMethodInfo_ = {
	"bug8001470",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8001470$1_InnerClassesInfo_[] = {
	{"bug8001470$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8001470$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8001470$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8001470$1_MethodInfo_,
	nullptr,
	&_bug8001470$1_EnclosingMethodInfo_,
	_bug8001470$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8001470"
};

$Object* allocate$bug8001470$1($Class* clazz) {
	return $of($alloc(bug8001470$1));
}

void bug8001470$1::init$() {
}

void bug8001470$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug8001470);
	$assignStatic($bug8001470::frame, $new($JFrame, "JTextField Test"_s));
	$nc($bug8001470::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JPanel, container, $cast($JPanel, $nc($bug8001470::frame)->getContentPane()));
	$nc(container)->setLayout($$new($GridLayout, 2, 1));
	$assignStatic($bug8001470::textField1, $new($JTextField, u"ก"_s));
	$assignStatic($bug8001470::textField2, $new($JTextField, u"ఁ"_s));
	container->add(static_cast<$Component*>($bug8001470::textField1));
	container->add(static_cast<$Component*>($bug8001470::textField2));
	$nc($bug8001470::frame)->setVisible(true);
	$nc($bug8001470::frame)->pack();
}

bug8001470$1::bug8001470$1() {
}

$Class* bug8001470$1::load$($String* name, bool initialize) {
	$loadClass(bug8001470$1, name, initialize, &_bug8001470$1_ClassInfo_, allocate$bug8001470$1);
	return class$;
}

$Class* bug8001470$1::class$ = nullptr;