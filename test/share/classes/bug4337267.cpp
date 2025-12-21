#include <bug4337267.h>

#include <bug4337267$1.h>
#include <bug4337267$TestBufferedImage.h>
#include <bug4337267$TestJPanel.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/font/NumericShaper.h>
#include <java/awt/font/TextAttribute.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef ARABIC
#undef EXIT_ON_CLOSE
#undef NUMERIC_SHAPING
#undef TYPE_INT_ARGB
#undef Y_AXIS

using $JComponentArray = $Array<::javax::swing::JComponent>;
using $bug4337267$1 = ::bug4337267$1;
using $bug4337267$TestBufferedImage = ::bug4337267$TestBufferedImage;
using $bug4337267$TestJPanel = ::bug4337267$TestJPanel;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $NumericShaper = ::java::awt::font::NumericShaper;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $BoxLayout = ::javax::swing::BoxLayout;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class bug4337267$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4337267$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4337267::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4337267$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug4337267$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4337267$$Lambda$lambda$main$0::*)()>(&bug4337267$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4337267$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4337267$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug4337267$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug4337267$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4337267$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug4337267_FieldInfo_[] = {
	{"p1", "Lbug4337267$TestJPanel;", nullptr, 0, $field(bug4337267, p1)},
	{"p2", "Lbug4337267$TestJPanel;", nullptr, 0, $field(bug4337267, p2)},
	{"i1", "Lbug4337267$TestBufferedImage;", nullptr, 0, $field(bug4337267, i1)},
	{"i2", "Lbug4337267$TestBufferedImage;", nullptr, 0, $field(bug4337267, i2)},
	{"printq", "[Ljavax/swing/JComponent;", nullptr, 0, $field(bug4337267, printq)},
	{"window", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(bug4337267, window)},
	{"testFailed", "Z", nullptr, $STATIC, $staticField(bug4337267, testFailed)},
	{"shaped", "Ljava/lang/String;", nullptr, 0, $field(bug4337267, shaped)},
	{"text", "Ljava/lang/String;", nullptr, 0, $field(bug4337267, text)},
	{}
};

$MethodInfo _bug4337267_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4337267::*)()>(&bug4337267::init$))},
	{"assertEquals", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0},
	{"createContentPane", "()Ljava/awt/Component;", nullptr, 0},
	{"fail", "(Ljava/lang/String;)V", nullptr, 0},
	{"initUI", "()V", nullptr, 0},
	{"injectComponent", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;Z)V", nullptr, 0},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug4337267::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4337267::main)), "java.lang.Exception"},
	{"printComponent", "(Ljavax/swing/JComponent;Lbug4337267$TestBufferedImage;)V", nullptr, 0},
	{"run", "()V", nullptr, 0},
	{"setShaping", "(Ljavax/swing/JComponent;)V", nullptr, 0},
	{"testNonTextComponentHTML", "()V", nullptr, 0},
	{"testNonTextComponentPlain", "()V", nullptr, 0},
	{"testTextComponent", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _bug4337267_InnerClassesInfo_[] = {
	{"bug4337267$TestJPanel", "bug4337267", "TestJPanel", $STATIC},
	{"bug4337267$TestBufferedImage", "bug4337267", "TestBufferedImage", $STATIC},
	{"bug4337267$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4337267_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4337267",
	"java.lang.Object",
	nullptr,
	_bug4337267_FieldInfo_,
	_bug4337267_MethodInfo_,
	nullptr,
	nullptr,
	_bug4337267_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4337267$TestJPanel,bug4337267$TestBufferedImage,bug4337267$1"
};

$Object* allocate$bug4337267($Class* clazz) {
	return $of($alloc(bug4337267));
}

$JFrame* bug4337267::window = nullptr;
bool bug4337267::testFailed = false;

void bug4337267::init$() {
	$set(this, shaped, u"000 (E) 111 (A) فقك ٢٢٢ (E) 333"_s);
	$set(this, text, u"000 (E) 111 (A) فقك 222 (E) 333"_s);
}

void bug4337267::run() {
	initUI();
	testTextComponent();
	testNonTextComponentHTML();
	testNonTextComponentPlain();
}

void bug4337267::initUI() {
	$assignStatic(bug4337267::window, $new($JFrame, "bug4337267"_s));
	$nc(bug4337267::window)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(bug4337267::window)->setSize(800, 600);
	$var($Component, content, createContentPane());
	$nc(bug4337267::window)->add(content);
	$nc(bug4337267::window)->setVisible(true);
}

void bug4337267::fail($String* message) {
	bug4337267::testFailed = true;
	$throwNew($RuntimeException, message);
}

void bug4337267::assertEquals(Object$* o1, Object$* o2) {
	$useLocalCurrentObjectStackCache();
	if ((o1 == nullptr) && (o2 != nullptr)) {
		fail($$str({"Expected null, got "_s, o2}));
	} else if ((o1 != nullptr) && (o2 == nullptr)) {
		fail($$str({"Expected "_s, o1, ", got null"_s}));
	} else if (!$of(o1)->equals(o2)) {
		fail($$str({"Expected "_s, o1, ", got "_s, o2}));
	}
}

void bug4337267::testTextComponent() {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("testTextComponent:"_s);
	$var($JTextArea, area1, $new($JTextArea));
	injectComponent(this->p1, area1, false);
	area1->setText(this->shaped);
	$var($JTextArea, area2, $new($JTextArea));
	injectComponent(this->p2, area2, true);
	area2->setText(this->text);
	$nc(bug4337267::window)->repaint();
	$set(this, printq, $new($JComponentArray, {
		static_cast<$JComponent*>(area1),
		static_cast<$JComponent*>(area2)
	}));
	printComponent($nc(this->printq)->get(0), this->i1);
	printComponent($nc(this->printq)->get(1), this->i2);
	assertEquals($nc(this->p1)->image, $nc(this->p2)->image);
	assertEquals(this->i1, this->i2);
}

void bug4337267::testNonTextComponentHTML() {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("testNonTextComponentHTML:"_s);
	$var($JLabel, label1, $new($JLabel));
	injectComponent(this->p1, label1, false);
	label1->setText($$str({"<html>"_s, this->shaped}));
	$var($JLabel, label2, $new($JLabel));
	injectComponent(this->p2, label2, true);
	label2->setText($$str({"<html>"_s, this->text}));
	$nc(bug4337267::window)->repaint();
	$set(this, printq, $new($JComponentArray, {
		static_cast<$JComponent*>(label1),
		static_cast<$JComponent*>(label2)
	}));
	printComponent($nc(this->printq)->get(0), this->i1);
	printComponent($nc(this->printq)->get(1), this->i2);
	assertEquals($nc(this->p1)->image, $nc(this->p2)->image);
	assertEquals(this->i1, this->i2);
}

void bug4337267::testNonTextComponentPlain() {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("testNonTextComponentPlain:"_s);
	$var($JLabel, label1, $new($JLabel));
	injectComponent(this->p1, label1, false);
	label1->setText(this->shaped);
	$var($JLabel, label2, $new($JLabel));
	injectComponent(this->p2, label2, true);
	label2->setText(this->text);
	$nc(bug4337267::window)->repaint();
	$set(this, printq, $new($JComponentArray, {
		static_cast<$JComponent*>(label1),
		static_cast<$JComponent*>(label2)
	}));
	printComponent($nc(this->printq)->get(0), this->i1);
	printComponent($nc(this->printq)->get(1), this->i2);
	assertEquals($nc(this->p1)->image, $nc(this->p2)->image);
	assertEquals(this->i1, this->i2);
}

void bug4337267::setShaping($JComponent* c) {
	$init($TextAttribute);
	$nc(c)->putClientProperty($TextAttribute::NUMERIC_SHAPING, $($NumericShaper::getContextualShaper($NumericShaper::ARABIC)));
}

void bug4337267::injectComponent($JComponent* p, $JComponent* c, bool shape) {
	if (shape) {
		setShaping(c);
	}
	$nc(p)->removeAll();
	p->add(static_cast<$Component*>(c));
}

void bug4337267::printComponent($JComponent* c, $bug4337267$TestBufferedImage* i) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, g, $nc(i)->getGraphics());
	$nc(g)->setColor($($nc(c)->getBackground()));
	int32_t var$0 = i->getWidth();
	g->fillRect(0, 0, var$0, i->getHeight());
	$nc(c)->print(g);
}

$Component* bug4337267::createContentPane() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, $new($Dimension, 500, 100));
	$set(this, i1, $new($bug4337267$TestBufferedImage, size->width, size->height, $BufferedImage::TYPE_INT_ARGB));
	$set(this, i2, $new($bug4337267$TestBufferedImage, size->width, size->height, $BufferedImage::TYPE_INT_ARGB));
	$set(this, p1, $new($bug4337267$TestJPanel));
	$nc(this->p1)->setPreferredSize(size);
	$set(this, p2, $new($bug4337267$TestJPanel));
	$nc(this->p2)->setPreferredSize(size);
	$var($JPanel, panel, $new($JPanel));
	panel->setLayout($$new($BoxLayout, panel, $BoxLayout::Y_AXIS));
	panel->add(static_cast<$Component*>(this->p1));
	panel->add(static_cast<$Component*>(this->p2));
	return panel;
}

void bug4337267::main($StringArray* args) {
	$init(bug4337267);
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var(bug4337267, test, $new(bug4337267));
			$SwingUtilities::invokeAndWait($$new($bug4337267$1, test));
			if (bug4337267::testFailed) {
				$throwNew($RuntimeException, "FAIL"_s);
			}
			$nc($System::out)->println("OK"_s);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (bug4337267::window != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4337267$$Lambda$lambda$main$0)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug4337267::lambda$main$0() {
	$init(bug4337267);
	$nc(bug4337267::window)->dispose();
}

void clinit$bug4337267($Class* class$) {
	bug4337267::testFailed = false;
}

bug4337267::bug4337267() {
}

$Class* bug4337267::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4337267$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug4337267$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug4337267, name, initialize, &_bug4337267_ClassInfo_, clinit$bug4337267, allocate$bug4337267);
	return class$;
}

$Class* bug4337267::class$ = nullptr;