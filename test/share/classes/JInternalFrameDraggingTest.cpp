#include <JInternalFrameDraggingTest.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BACKGROUND_COLOR
#undef BUTTON1_MASK
#undef CENTER
#undef EXIT_ON_CLOSE
#undef FRAME_SIZE
#undef N
#undef ORANGE

using $PointArray = $Array<::java::awt::Point>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class JInternalFrameDraggingTest$$Lambda$createAndShowGUI : public $Runnable {
	$class(JInternalFrameDraggingTest$$Lambda$createAndShowGUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JInternalFrameDraggingTest::createAndShowGUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JInternalFrameDraggingTest$$Lambda$createAndShowGUI>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JInternalFrameDraggingTest$$Lambda$createAndShowGUI::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JInternalFrameDraggingTest$$Lambda$createAndShowGUI::*)()>(&JInternalFrameDraggingTest$$Lambda$createAndShowGUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JInternalFrameDraggingTest$$Lambda$createAndShowGUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"JInternalFrameDraggingTest$$Lambda$createAndShowGUI",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* JInternalFrameDraggingTest$$Lambda$createAndShowGUI::load$($String* name, bool initialize) {
	$loadClass(JInternalFrameDraggingTest$$Lambda$createAndShowGUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JInternalFrameDraggingTest$$Lambda$createAndShowGUI::class$ = nullptr;

class JInternalFrameDraggingTest$$Lambda$lambda$main$0$1 : public $Runnable {
	$class(JInternalFrameDraggingTest$$Lambda$lambda$main$0$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JInternalFrameDraggingTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JInternalFrameDraggingTest$$Lambda$lambda$main$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JInternalFrameDraggingTest$$Lambda$lambda$main$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JInternalFrameDraggingTest$$Lambda$lambda$main$0$1::*)()>(&JInternalFrameDraggingTest$$Lambda$lambda$main$0$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JInternalFrameDraggingTest$$Lambda$lambda$main$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"JInternalFrameDraggingTest$$Lambda$lambda$main$0$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* JInternalFrameDraggingTest$$Lambda$lambda$main$0$1::load$($String* name, bool initialize) {
	$loadClass(JInternalFrameDraggingTest$$Lambda$lambda$main$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JInternalFrameDraggingTest$$Lambda$lambda$main$0$1::class$ = nullptr;

class JInternalFrameDraggingTest$$Lambda$lambda$getInternalFrameLocation$1$2 : public $Runnable {
	$class(JInternalFrameDraggingTest$$Lambda$lambda$getInternalFrameLocation$1$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($PointArray* points) {
		$set(this, points, points);
	}
	virtual void run() override {
		JInternalFrameDraggingTest::lambda$getInternalFrameLocation$1(points);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JInternalFrameDraggingTest$$Lambda$lambda$getInternalFrameLocation$1$2>());
	}
	$PointArray* points = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JInternalFrameDraggingTest$$Lambda$lambda$getInternalFrameLocation$1$2::fieldInfos[2] = {
	{"points", "[Ljava/awt/Point;", nullptr, $PUBLIC, $field(JInternalFrameDraggingTest$$Lambda$lambda$getInternalFrameLocation$1$2, points)},
	{}
};
$MethodInfo JInternalFrameDraggingTest$$Lambda$lambda$getInternalFrameLocation$1$2::methodInfos[3] = {
	{"<init>", "([Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(JInternalFrameDraggingTest$$Lambda$lambda$getInternalFrameLocation$1$2::*)($PointArray*)>(&JInternalFrameDraggingTest$$Lambda$lambda$getInternalFrameLocation$1$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JInternalFrameDraggingTest$$Lambda$lambda$getInternalFrameLocation$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"JInternalFrameDraggingTest$$Lambda$lambda$getInternalFrameLocation$1$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* JInternalFrameDraggingTest$$Lambda$lambda$getInternalFrameLocation$1$2::load$($String* name, bool initialize) {
	$loadClass(JInternalFrameDraggingTest$$Lambda$lambda$getInternalFrameLocation$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JInternalFrameDraggingTest$$Lambda$lambda$getInternalFrameLocation$1$2::class$ = nullptr;

class JInternalFrameDraggingTest$$Lambda$lambda$getDesktopPaneLocation$2$3 : public $Runnable {
	$class(JInternalFrameDraggingTest$$Lambda$lambda$getDesktopPaneLocation$2$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$($PointArray* points) {
		$set(this, points, points);
	}
	virtual void run() override {
		JInternalFrameDraggingTest::lambda$getDesktopPaneLocation$2(points);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JInternalFrameDraggingTest$$Lambda$lambda$getDesktopPaneLocation$2$3>());
	}
	$PointArray* points = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JInternalFrameDraggingTest$$Lambda$lambda$getDesktopPaneLocation$2$3::fieldInfos[2] = {
	{"points", "[Ljava/awt/Point;", nullptr, $PUBLIC, $field(JInternalFrameDraggingTest$$Lambda$lambda$getDesktopPaneLocation$2$3, points)},
	{}
};
$MethodInfo JInternalFrameDraggingTest$$Lambda$lambda$getDesktopPaneLocation$2$3::methodInfos[3] = {
	{"<init>", "([Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(JInternalFrameDraggingTest$$Lambda$lambda$getDesktopPaneLocation$2$3::*)($PointArray*)>(&JInternalFrameDraggingTest$$Lambda$lambda$getDesktopPaneLocation$2$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JInternalFrameDraggingTest$$Lambda$lambda$getDesktopPaneLocation$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"JInternalFrameDraggingTest$$Lambda$lambda$getDesktopPaneLocation$2$3",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* JInternalFrameDraggingTest$$Lambda$lambda$getDesktopPaneLocation$2$3::load$($String* name, bool initialize) {
	$loadClass(JInternalFrameDraggingTest$$Lambda$lambda$getDesktopPaneLocation$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JInternalFrameDraggingTest$$Lambda$lambda$getDesktopPaneLocation$2$3::class$ = nullptr;

$FieldInfo _JInternalFrameDraggingTest_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JInternalFrameDraggingTest, frame)},
	{"desktopPane", "Ljavax/swing/JDesktopPane;", nullptr, $PRIVATE | $STATIC, $staticField(JInternalFrameDraggingTest, desktopPane)},
	{"internalFrame", "Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JInternalFrameDraggingTest, internalFrame)},
	{"FRAME_SIZE", "I", nullptr, $PRIVATE | $STATIC, $staticField(JInternalFrameDraggingTest, FRAME_SIZE)},
	{"BACKGROUND_COLOR", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $staticField(JInternalFrameDraggingTest, BACKGROUND_COLOR)},
	{}
};

$MethodInfo _JInternalFrameDraggingTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JInternalFrameDraggingTest::*)()>(&JInternalFrameDraggingTest::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JInternalFrameDraggingTest::createAndShowGUI))},
	{"getDesktopPaneLocation", "()Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Point*(*)()>(&JInternalFrameDraggingTest::getDesktopPaneLocation)), "java.lang.Exception"},
	{"getInternalFrameLocation", "()Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Point*(*)()>(&JInternalFrameDraggingTest::getInternalFrameLocation)), "java.lang.Exception"},
	{"lambda$getDesktopPaneLocation$2", "([Ljava/awt/Point;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($PointArray*)>(&JInternalFrameDraggingTest::lambda$getDesktopPaneLocation$2))},
	{"lambda$getInternalFrameLocation$1", "([Ljava/awt/Point;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($PointArray*)>(&JInternalFrameDraggingTest::lambda$getInternalFrameLocation$1))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&JInternalFrameDraggingTest::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JInternalFrameDraggingTest::main)), "java.lang.Exception"},
	{"moveFrame", "(Ljava/awt/Robot;III)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Robot*,int32_t,int32_t,int32_t)>(&JInternalFrameDraggingTest::moveFrame)), "java.lang.Exception"},
	{}
};

$ClassInfo _JInternalFrameDraggingTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JInternalFrameDraggingTest",
	"java.lang.Object",
	nullptr,
	_JInternalFrameDraggingTest_FieldInfo_,
	_JInternalFrameDraggingTest_MethodInfo_
};

$Object* allocate$JInternalFrameDraggingTest($Class* clazz) {
	return $of($alloc(JInternalFrameDraggingTest));
}

$JFrame* JInternalFrameDraggingTest::frame = nullptr;
$JDesktopPane* JInternalFrameDraggingTest::desktopPane = nullptr;
$JInternalFrame* JInternalFrameDraggingTest::internalFrame = nullptr;
int32_t JInternalFrameDraggingTest::FRAME_SIZE = 0;
$Color* JInternalFrameDraggingTest::BACKGROUND_COLOR = nullptr;

void JInternalFrameDraggingTest::init$() {
}

void JInternalFrameDraggingTest::main($StringArray* args) {
	$init(JInternalFrameDraggingTest);
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			robot->setAutoDelay(20);
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JInternalFrameDraggingTest$$Lambda$createAndShowGUI)));
			robot->waitForIdle();
			int32_t translate = JInternalFrameDraggingTest::FRAME_SIZE / 4;
			moveFrame(robot, translate, translate / 2, translate / 2);
			robot->waitForIdle();
			$var($Point, p, getDesktopPaneLocation());
			int32_t size = translate / 2;
			$var($Rectangle, rect, $new($Rectangle, $nc(p)->x, p->y, size, size));
			$var($BufferedImage, img, robot->createScreenCapture(rect));
			int32_t testRGB = $nc(JInternalFrameDraggingTest::BACKGROUND_COLOR)->getRGB();
			for (int32_t i = 1; i < size; ++i) {
				int32_t rgbCW = $nc(img)->getRGB(i, size / 2);
				int32_t rgbCH = img->getRGB(size / 2, i);
				if (rgbCW != testRGB || rgbCH != testRGB) {
					$var($String, var$3, $$str({"i "_s, $$str(i), " rgbCW "_s, $($Integer::toHexString(rgbCW)), " testRGB "_s}));
					$var($String, var$2, $$concat(var$3, $($Integer::toHexString(testRGB))));
					$var($String, var$1, $$concat(var$2, " rgbCH "_s));
					$nc($System::out)->println($$concat(var$1, $($Integer::toHexString(rgbCH))));
					$throwNew($RuntimeException, "Background color is wrong!"_s);
				}
			}
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} /*finally*/ {
			if (JInternalFrameDraggingTest::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JInternalFrameDraggingTest$$Lambda$lambda$main$0$1)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JInternalFrameDraggingTest::createAndShowGUI() {
	$init(JInternalFrameDraggingTest);
	$assignStatic(JInternalFrameDraggingTest::frame, $new($JFrame));
	$nc(JInternalFrameDraggingTest::frame)->setUndecorated(true);
	$nc(JInternalFrameDraggingTest::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(JInternalFrameDraggingTest::frame)->setLayout($$new($BorderLayout));
	$assignStatic(JInternalFrameDraggingTest::desktopPane, $new($JDesktopPane));
	$nc(JInternalFrameDraggingTest::desktopPane)->setBackground(JInternalFrameDraggingTest::BACKGROUND_COLOR);
	$init($BorderLayout);
	$nc(JInternalFrameDraggingTest::frame)->add(static_cast<$Component*>(JInternalFrameDraggingTest::desktopPane), $of($BorderLayout::CENTER));
	$nc(JInternalFrameDraggingTest::frame)->setSize(JInternalFrameDraggingTest::FRAME_SIZE, JInternalFrameDraggingTest::FRAME_SIZE);
	$nc(JInternalFrameDraggingTest::frame)->setVisible(true);
	$assignStatic(JInternalFrameDraggingTest::internalFrame, $new($JInternalFrame, "Test"_s));
	$nc(JInternalFrameDraggingTest::internalFrame)->setSize(JInternalFrameDraggingTest::FRAME_SIZE / 2, JInternalFrameDraggingTest::FRAME_SIZE / 2);
	$nc(JInternalFrameDraggingTest::desktopPane)->add(static_cast<$Component*>(JInternalFrameDraggingTest::internalFrame));
	$nc(JInternalFrameDraggingTest::internalFrame)->setVisible(true);
	$nc(JInternalFrameDraggingTest::internalFrame)->setResizable(true);
	$nc(JInternalFrameDraggingTest::frame)->setVisible(true);
}

void JInternalFrameDraggingTest::moveFrame($Robot* robot, int32_t w, int32_t h, int32_t N) {
	$init(JInternalFrameDraggingTest);
	$useLocalCurrentObjectStackCache();
	$var($Point, p, getInternalFrameLocation());
	int32_t xs = $nc(p)->x + 100;
	int32_t ys = p->y + 15;
	$nc(robot)->mouseMove(xs, ys);
	{
		$var($Throwable, var$0, nullptr);
		try {
			robot->mousePress($InputEvent::BUTTON1_MASK);
			int32_t dx = $div(w, N);
			int32_t dy = $div(h, N);
			int32_t y = ys;
			for (int32_t x = xs; x < xs + w; x += dx, y += dy) {
				robot->mouseMove(x, y);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			robot->mouseRelease($InputEvent::BUTTON1_MASK);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Point* JInternalFrameDraggingTest::getInternalFrameLocation() {
	$init(JInternalFrameDraggingTest);
	$useLocalCurrentObjectStackCache();
	$var($PointArray, points, $new($PointArray, 1));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JInternalFrameDraggingTest$$Lambda$lambda$getInternalFrameLocation$1$2, points)));
	return points->get(0);
}

$Point* JInternalFrameDraggingTest::getDesktopPaneLocation() {
	$init(JInternalFrameDraggingTest);
	$useLocalCurrentObjectStackCache();
	$var($PointArray, points, $new($PointArray, 1));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JInternalFrameDraggingTest$$Lambda$lambda$getDesktopPaneLocation$2$3, points)));
	return points->get(0);
}

void JInternalFrameDraggingTest::lambda$getDesktopPaneLocation$2($PointArray* points) {
	$init(JInternalFrameDraggingTest);
	$nc(points)->set(0, $($nc(JInternalFrameDraggingTest::desktopPane)->getLocationOnScreen()));
}

void JInternalFrameDraggingTest::lambda$getInternalFrameLocation$1($PointArray* points) {
	$init(JInternalFrameDraggingTest);
	$nc(points)->set(0, $($nc(JInternalFrameDraggingTest::internalFrame)->getLocationOnScreen()));
}

void JInternalFrameDraggingTest::lambda$main$0() {
	$init(JInternalFrameDraggingTest);
	$nc(JInternalFrameDraggingTest::frame)->dispose();
}

void clinit$JInternalFrameDraggingTest($Class* class$) {
	JInternalFrameDraggingTest::FRAME_SIZE = 500;
	$init($Color);
	$assignStatic(JInternalFrameDraggingTest::BACKGROUND_COLOR, $Color::ORANGE);
}

JInternalFrameDraggingTest::JInternalFrameDraggingTest() {
}

$Class* JInternalFrameDraggingTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JInternalFrameDraggingTest$$Lambda$createAndShowGUI::classInfo$.name)) {
			return JInternalFrameDraggingTest$$Lambda$createAndShowGUI::load$(name, initialize);
		}
		if (name->equals(JInternalFrameDraggingTest$$Lambda$lambda$main$0$1::classInfo$.name)) {
			return JInternalFrameDraggingTest$$Lambda$lambda$main$0$1::load$(name, initialize);
		}
		if (name->equals(JInternalFrameDraggingTest$$Lambda$lambda$getInternalFrameLocation$1$2::classInfo$.name)) {
			return JInternalFrameDraggingTest$$Lambda$lambda$getInternalFrameLocation$1$2::load$(name, initialize);
		}
		if (name->equals(JInternalFrameDraggingTest$$Lambda$lambda$getDesktopPaneLocation$2$3::classInfo$.name)) {
			return JInternalFrameDraggingTest$$Lambda$lambda$getDesktopPaneLocation$2$3::load$(name, initialize);
		}
	}
	$loadClass(JInternalFrameDraggingTest, name, initialize, &_JInternalFrameDraggingTest_ClassInfo_, clinit$JInternalFrameDraggingTest, allocate$JInternalFrameDraggingTest);
	return class$;
}

$Class* JInternalFrameDraggingTest::class$ = nullptr;