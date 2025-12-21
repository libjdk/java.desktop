#include <TestBadBreak.h>

#include <TestBadBreak$1.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/WritableRenderedImage.h>
#include <java/io/File.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/imageio/ImageIO.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $TestBadBreak$1 = ::TestBadBreak$1;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $WritableRenderedImage = ::java::awt::image::WritableRenderedImage;
using $File = ::java::io::File;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ImageIO = ::javax::imageio::ImageIO;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class TestBadBreak$$Lambda$lambda$test$0 : public $Runnable {
	$class(TestBadBreak$$Lambda$lambda$test$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestBadBreak::lambda$test$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestBadBreak$$Lambda$lambda$test$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestBadBreak$$Lambda$lambda$test$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestBadBreak$$Lambda$lambda$test$0::*)()>(&TestBadBreak$$Lambda$lambda$test$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestBadBreak$$Lambda$lambda$test$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestBadBreak$$Lambda$lambda$test$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestBadBreak$$Lambda$lambda$test$0::load$($String* name, bool initialize) {
	$loadClass(TestBadBreak$$Lambda$lambda$test$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestBadBreak$$Lambda$lambda$test$0::class$ = nullptr;

class TestBadBreak$$Lambda$dispose$1 : public $Runnable {
	$class(TestBadBreak$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestBadBreak$$Lambda$dispose$1>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestBadBreak$$Lambda$dispose$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestBadBreak$$Lambda$dispose$1, inst$)},
	{}
};
$MethodInfo TestBadBreak$$Lambda$dispose$1::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(TestBadBreak$$Lambda$dispose$1::*)($Window*)>(&TestBadBreak$$Lambda$dispose$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestBadBreak$$Lambda$dispose$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestBadBreak$$Lambda$dispose$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestBadBreak$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$loadClass(TestBadBreak$$Lambda$dispose$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestBadBreak$$Lambda$dispose$1::class$ = nullptr;

$FieldInfo _TestBadBreak_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(TestBadBreak, frame)},
	{"robot", "Ljava/awt/Robot;", nullptr, $STATIC, $staticField(TestBadBreak, robot)},
	{"withCombiningDiaeresis", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(TestBadBreak, withCombiningDiaeresis)},
	{"withoutCombiningDiaeresis", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(TestBadBreak, withoutCombiningDiaeresis)},
	{}
};

$MethodInfo _TestBadBreak_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestBadBreak::*)()>(&TestBadBreak::init$))},
	{"lambda$test$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestBadBreak::lambda$test$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestBadBreak::main)), "java.lang.Exception"},
	{"test", "(Ljava/lang/String;Ljava/awt/image/BufferedImage;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$BufferedImage*)>(&TestBadBreak::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TestBadBreak_InnerClassesInfo_[] = {
	{"TestBadBreak$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestBadBreak_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestBadBreak",
	"java.lang.Object",
	nullptr,
	_TestBadBreak_FieldInfo_,
	_TestBadBreak_MethodInfo_,
	nullptr,
	nullptr,
	_TestBadBreak_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestBadBreak$1,TestBadBreak$1$1"
};

$Object* allocate$TestBadBreak($Class* clazz) {
	return $of($alloc(TestBadBreak));
}

$JFrame* TestBadBreak::frame = nullptr;
$Robot* TestBadBreak::robot = nullptr;
$String* TestBadBreak::withCombiningDiaeresis = nullptr;
$String* TestBadBreak::withoutCombiningDiaeresis = nullptr;

void TestBadBreak::init$() {
}

void TestBadBreak::main($StringArray* args) {
	$init(TestBadBreak);
	$useLocalCurrentObjectStackCache();
	$assignStatic(TestBadBreak::robot, $new($Robot));
	$var($BufferedImage, bi1, $new($BufferedImage, 200, 90, 2));
	$var($BufferedImage, bi2, $new($BufferedImage, 200, 90, 2));
	test(TestBadBreak::withCombiningDiaeresis, bi1);
	test(TestBadBreak::withoutCombiningDiaeresis, bi2);
	for (int32_t x = 0; x < bi1->getWidth(); ++x) {
		for (int32_t y = 0; y < bi1->getHeight(); ++y) {
			int32_t var$0 = bi1->getRGB(x, y);
			if (var$0 != bi2->getRGB(x, y)) {
				$ImageIO::write(static_cast<$RenderedImage*>(bi1), "png"_s, $$new($File, "image1.png"_s));
				$ImageIO::write(static_cast<$RenderedImage*>(bi2), "png"_s, $$new($File, "image2.png"_s));
				$throwNew($RuntimeException, "Wrong color"_s);
			}
		}
	}
}

void TestBadBreak::test($String* text, $BufferedImage* i1) {
	$init(TestBadBreak);
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait($$new($TestBadBreak$1, text, i1));
	$nc(TestBadBreak::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestBadBreak$$Lambda$lambda$test$0)));
	$nc(TestBadBreak::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestBadBreak$$Lambda$dispose$1, static_cast<$JFrame*>($nc(TestBadBreak::frame)))));
	$nc(TestBadBreak::robot)->waitForIdle();
}

void TestBadBreak::lambda$test$0() {
	$init(TestBadBreak);
	$nc(TestBadBreak::frame)->setVisible(true);
}

TestBadBreak::TestBadBreak() {
}

void clinit$TestBadBreak($Class* class$) {
	$assignStatic(TestBadBreak::withCombiningDiaeresis, u"123p://.aaaaaaaaaaaaaaaaaaaaaa.123/ä"_s);
	$assignStatic(TestBadBreak::withoutCombiningDiaeresis, u"123p://.aaaaaaaaaaaaaaaaaaaaaa.123/ä"_s);
}

$Class* TestBadBreak::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestBadBreak$$Lambda$lambda$test$0::classInfo$.name)) {
			return TestBadBreak$$Lambda$lambda$test$0::load$(name, initialize);
		}
		if (name->equals(TestBadBreak$$Lambda$dispose$1::classInfo$.name)) {
			return TestBadBreak$$Lambda$dispose$1::load$(name, initialize);
		}
	}
	$loadClass(TestBadBreak, name, initialize, &_TestBadBreak_ClassInfo_, clinit$TestBadBreak, allocate$TestBadBreak);
	return class$;
}

$Class* TestBadBreak::class$ = nullptr;