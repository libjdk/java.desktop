#include <bug8132119.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/NumericShaper.h>
#include <java/awt/font/TextAttribute.h>
#include <java/awt/font/TextLayout.h>
#include <java/awt/geom/AffineTransform.h>
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
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/imageio/ImageIO.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

#undef ARABIC
#undef BACKGROUND_COLOR
#undef DRAW_COLOR
#undef FONT
#undef GREEN
#undef HEIGHT
#undef KEY_TEXT_ANTIALIASING
#undef NUMERIC_SHAPER
#undef NUMERIC_SHAPING
#undef PLAIN
#undef RED
#undef TYPE_INT_RGB
#undef VALUE_TEXT_ANTIALIAS_OFF
#undef WIDTH

using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $RenderingHints = ::java::awt::RenderingHints;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $NumericShaper = ::java::awt::font::NumericShaper;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $TextLayout = ::java::awt::font::TextLayout;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $WritableRenderedImage = ::java::awt::image::WritableRenderedImage;
using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $ImageIO = ::javax::imageio::ImageIO;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

class bug8132119$$Lambda$testStringMethods : public $Runnable {
	$class(bug8132119$$Lambda$testStringMethods, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8132119::testStringMethods();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8132119$$Lambda$testStringMethods>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8132119$$Lambda$testStringMethods::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8132119$$Lambda$testStringMethods::*)()>(&bug8132119$$Lambda$testStringMethods::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8132119$$Lambda$testStringMethods::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8132119$$Lambda$testStringMethods",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8132119$$Lambda$testStringMethods::load$($String* name, bool initialize) {
	$loadClass(bug8132119$$Lambda$testStringMethods, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8132119$$Lambda$testStringMethods::class$ = nullptr;

$FieldInfo _bug8132119_FieldInfo_[] = {
	{"WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug8132119, WIDTH)},
	{"HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug8132119, HEIGHT)},
	{"DRAW_COLOR", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8132119, DRAW_COLOR)},
	{"BACKGROUND_COLOR", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8132119, BACKGROUND_COLOR)},
	{"NUMERIC_SHAPER", "Ljava/awt/font/NumericShaper;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8132119, NUMERIC_SHAPER)},
	{}
};

$MethodInfo _bug8132119_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8132119::*)()>(&bug8132119::init$))},
	{"checkClippedString", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*,$String*)>(&bug8132119::checkClippedString))},
	{"checkImageContainsSymbol", "(Ljava/awt/image/BufferedImage;II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($BufferedImage*,int32_t,int32_t)>(&bug8132119::checkImageContainsSymbol))},
	{"checkImageIsEmpty", "(Ljava/awt/image/BufferedImage;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($BufferedImage*)>(&bug8132119::checkImageIsEmpty))},
	{"checkNullArguments", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8132119::checkNullArguments))},
	{"checkNullArguments", "(Ljavax/swing/JComponent;Ljava/awt/Graphics2D;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JComponent*,$Graphics2D*,$String*)>(&bug8132119::checkNullArguments))},
	{"checkNullArgumentsDrawString", "(Ljavax/swing/JComponent;Ljava/awt/Graphics2D;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JComponent*,$Graphics2D*,$String*)>(&bug8132119::checkNullArgumentsDrawString))},
	{"checkNullArgumentsDrawStringUnderlineCharAt", "(Ljavax/swing/JComponent;Ljava/awt/Graphics2D;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JComponent*,$Graphics2D*,$String*)>(&bug8132119::checkNullArgumentsDrawStringUnderlineCharAt))},
	{"checkNullArgumentsGetClippedString", "(Ljavax/swing/JComponent;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JComponent*,$String*)>(&bug8132119::checkNullArgumentsGetClippedString))},
	{"checkNullArgumentsGetStringWidth", "(Ljavax/swing/JComponent;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JComponent*,$String*)>(&bug8132119::checkNullArgumentsGetStringWidth))},
	{"createBufferedImage", "(II)Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BufferedImage*(*)(int32_t,int32_t)>(&bug8132119::createBufferedImage))},
	{"createComponent", "(Ljava/lang/String;)Ljavax/swing/JComponent;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JComponent*(*)($String*)>(&bug8132119::createComponent))},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Font*(*)()>(&bug8132119::getFont))},
	{"getFontName", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,$StringArray*)>(&bug8132119::getFontName))},
	{"getLayoutWidth", "(Ljava/lang/String;Ljava/awt/Font;Ljava/awt/font/NumericShaper;)F", nullptr, $PRIVATE | $STATIC, $method(static_cast<float(*)($String*,$Font*,$NumericShaper*)>(&bug8132119::getLayoutWidth))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8132119::main)), "java.lang.Exception"},
	{"setMetalLAF", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8132119::setMetalLAF))},
	{"testDrawEmptyString", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8132119::testDrawEmptyString))},
	{"testDrawString", "(Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool)>(&bug8132119::testDrawString))},
	{"testStringClip", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8132119::testStringClip))},
	{"testStringMethods", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8132119::testStringMethods))},
	{"testStringWidth", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8132119::testStringWidth))},
	{}
};

$ClassInfo _bug8132119_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8132119",
	"java.lang.Object",
	nullptr,
	_bug8132119_FieldInfo_,
	_bug8132119_MethodInfo_
};

$Object* allocate$bug8132119($Class* clazz) {
	return $of($alloc(bug8132119));
}

$Color* bug8132119::DRAW_COLOR = nullptr;
$Color* bug8132119::BACKGROUND_COLOR = nullptr;
$NumericShaper* bug8132119::NUMERIC_SHAPER = nullptr;

void bug8132119::init$() {
}

void bug8132119::main($StringArray* args) {
	$init(bug8132119);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8132119$$Lambda$testStringMethods)));
}

void bug8132119::testStringMethods() {
	$init(bug8132119);
	setMetalLAF();
	testStringWidth();
	testStringClip();
	testDrawEmptyString();
	testDrawString(false);
	testDrawString(true);
	checkNullArguments();
}

void bug8132119::testStringWidth() {
	$init(bug8132119);
	$useLocalCurrentObjectStackCache();
	$var($String, str, u"12345678910ͯ"_s);
	$var($JComponent, comp, createComponent(str));
	$var($Font, font, $nc(comp)->getFont());
	$var($FontMetrics, fontMetrics, comp->getFontMetrics(font));
	float stringWidth = $BasicGraphicsUtils::getStringWidth(comp, fontMetrics, str);
	if (stringWidth == $nc(fontMetrics)->stringWidth(str)) {
		$throwNew($RuntimeException, "Numeric shaper is not used!"_s);
	}
	if (stringWidth != getLayoutWidth(str, font, bug8132119::NUMERIC_SHAPER)) {
		$throwNew($RuntimeException, "Wrong text width!"_s);
	}
}

void bug8132119::testStringClip() {
	$init(bug8132119);
	$useLocalCurrentObjectStackCache();
	$var($String, str, "1234567890"_s);
	$var($JComponent, comp, createComponent(str));
	$var($FontMetrics, fontMetrics, $nc(comp)->getFontMetrics($(comp->getFont())));
	int32_t width = $cast(int32_t, $BasicGraphicsUtils::getStringWidth(comp, fontMetrics, str));
	$var($String, clip, $BasicGraphicsUtils::getClippedString(comp, fontMetrics, str, width));
	checkClippedString(str, clip, str);
	$assign(clip, $BasicGraphicsUtils::getClippedString(comp, fontMetrics, str, width + 1));
	checkClippedString(str, clip, str);
	$assign(clip, $BasicGraphicsUtils::getClippedString(comp, fontMetrics, str, -1));
	checkClippedString(str, clip, "..."_s);
	$assign(clip, $BasicGraphicsUtils::getClippedString(comp, fontMetrics, str, 0));
	checkClippedString(str, clip, "..."_s);
	$assign(clip, $BasicGraphicsUtils::getClippedString(comp, fontMetrics, str, width - $div(width, str->length())));
	int32_t endIndex = str->length() - 3;
	checkClippedString(str, clip, $$str({$(str->substring(0, endIndex)), "..."_s}));
}

void bug8132119::checkClippedString($String* str, $String* res, $String* golden) {
	$init(bug8132119);
	$useLocalCurrentObjectStackCache();
	if (!$nc(golden)->equals(res)) {
		$throwNew($RuntimeException, $($String::format("The string \'%s\' is not properly clipped. The result is \'%s\' instead of \'%s\'"_s, $$new($ObjectArray, {
			$of(str),
			$of(res),
			$of(golden)
		}))));
	}
}

void bug8132119::testDrawEmptyString() {
	$init(bug8132119);
	$useLocalCurrentObjectStackCache();
	$var($JLabel, label, $new($JLabel));
	$var($BufferedImage, buffImage, createBufferedImage(50, 50));
	$var($Graphics2D, g2, $nc(buffImage)->createGraphics());
	$nc(g2)->setColor(bug8132119::DRAW_COLOR);
	$BasicGraphicsUtils::drawString(($JComponent*)nullptr, g2, ($String*)nullptr, (float)0, (float)0);
	$BasicGraphicsUtils::drawString(static_cast<$JComponent*>(label), g2, ($String*)nullptr, (float)0, (float)0);
	$BasicGraphicsUtils::drawString(($JComponent*)nullptr, g2, ""_s, (float)0, (float)0);
	$BasicGraphicsUtils::drawString(static_cast<$JComponent*>(label), g2, ""_s, (float)0, (float)0);
	$BasicGraphicsUtils::drawStringUnderlineCharAt(nullptr, g2, nullptr, 3, (float)0, (float)0);
	$BasicGraphicsUtils::drawStringUnderlineCharAt(label, g2, nullptr, 3, (float)0, (float)0);
	$BasicGraphicsUtils::drawStringUnderlineCharAt(nullptr, g2, ""_s, 3, (float)0, (float)0);
	$BasicGraphicsUtils::drawStringUnderlineCharAt(label, g2, ""_s, 3, (float)0, (float)0);
	g2->dispose();
	checkImageIsEmpty(buffImage);
}

void bug8132119::testDrawString(bool underlined) {
	$init(bug8132119);
	$useLocalCurrentObjectStackCache();
	$var($String, str, "AOB"_s);
	$var($JComponent, comp, createComponent(str));
	$var($BufferedImage, buffImage, createBufferedImage(bug8132119::WIDTH, bug8132119::HEIGHT));
	$var($Graphics2D, g2, $nc(buffImage)->createGraphics());
	$nc(g2)->setColor(bug8132119::DRAW_COLOR);
	g2->setFont($($nc(comp)->getFont()));
	$init($RenderingHints);
	g2->setRenderingHint($RenderingHints::KEY_TEXT_ANTIALIASING, $RenderingHints::VALUE_TEXT_ANTIALIAS_OFF);
	$var($FontMetrics, fontMetrices, $nc(comp)->getFontMetrics($(comp->getFont())));
	float width = $BasicGraphicsUtils::getStringWidth(comp, fontMetrices, str);
	int32_t y = 3 * bug8132119::HEIGHT / 4;
	if (underlined) {
		$BasicGraphicsUtils::drawStringUnderlineCharAt(comp, g2, str, 1, (float)0, (float)y);
	} else {
		$BasicGraphicsUtils::drawString(comp, g2, str, (float)0, (float)y);
	}
	g2->dispose();
	float xx = (float)0;
	if (underlined) {
		float var$0 = $BasicGraphicsUtils::getStringWidth(comp, fontMetrices, "A"_s);
		xx = var$0 + $BasicGraphicsUtils::getStringWidth(comp, fontMetrices, "O"_s) / 2 - 5;
	} else {
		float var$1 = $BasicGraphicsUtils::getStringWidth(comp, fontMetrices, "A"_s);
		xx = var$1 + $BasicGraphicsUtils::getStringWidth(comp, fontMetrices, "O"_s) / 2;
	}
	checkImageContainsSymbol(buffImage, $cast(int32_t, xx), underlined ? 3 : 2);
}

void bug8132119::checkNullArguments() {
	$init(bug8132119);
	$useLocalCurrentObjectStackCache();
	$var($Graphics2D, g, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($String, text, "Test"_s);
			$var($JComponent, component, $new($JLabel, text));
			$var($BufferedImage, img, createBufferedImage(100, 100));
			$assign(g, $nc(img)->createGraphics());
			checkNullArguments(component, g, text);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(g)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug8132119::checkNullArguments($JComponent* comp, $Graphics2D* g, $String* text) {
	$init(bug8132119);
	checkNullArgumentsDrawString(comp, g, text);
	checkNullArgumentsDrawStringUnderlineCharAt(comp, g, text);
	checkNullArgumentsGetClippedString(comp, text);
	checkNullArgumentsGetStringWidth(comp, text);
}

void bug8132119::checkNullArgumentsDrawString($JComponent* comp, $Graphics2D* g, $String* text) {
	$init(bug8132119);
	float x = (float)50;
	float y = (float)50;
	$BasicGraphicsUtils::drawString(($JComponent*)nullptr, g, text, x, y);
	$BasicGraphicsUtils::drawString(comp, g, ($String*)nullptr, x, y);
	try {
		$BasicGraphicsUtils::drawString(comp, ($Graphics2D*)nullptr, text, x, y);
	} catch ($NullPointerException& e) {
		return;
	}
	$throwNew($RuntimeException, "NPE is not thrown"_s);
}

void bug8132119::checkNullArgumentsDrawStringUnderlineCharAt($JComponent* comp, $Graphics2D* g, $String* text) {
	$init(bug8132119);
	int32_t x = 50;
	int32_t y = 50;
	$BasicGraphicsUtils::drawStringUnderlineCharAt(nullptr, g, text, 1, (float)x, (float)y);
	$BasicGraphicsUtils::drawStringUnderlineCharAt(comp, g, nullptr, 1, (float)x, (float)y);
	try {
		$BasicGraphicsUtils::drawStringUnderlineCharAt(comp, nullptr, text, 1, (float)x, (float)y);
	} catch ($NullPointerException& e) {
		return;
	}
	$throwNew($RuntimeException, "NPE is not thrown"_s);
}

void bug8132119::checkNullArgumentsGetClippedString($JComponent* comp, $String* text) {
	$init(bug8132119);
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, fontMetrics, $nc(comp)->getFontMetrics($(comp->getFont())));
	$BasicGraphicsUtils::getClippedString(nullptr, fontMetrics, text, 1);
	$var($String, result, $BasicGraphicsUtils::getClippedString(comp, fontMetrics, nullptr, 1));
	if (!""_s->equals(result)) {
		$throwNew($RuntimeException, "Empty string is not returned!"_s);
	}
	try {
		$BasicGraphicsUtils::getClippedString(comp, nullptr, text, 1);
	} catch ($NullPointerException& e) {
		return;
	}
	$throwNew($RuntimeException, "NPE is not thrown"_s);
}

void bug8132119::checkNullArgumentsGetStringWidth($JComponent* comp, $String* text) {
	$init(bug8132119);
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, fontMetrics, $nc(comp)->getFontMetrics($(comp->getFont())));
	$BasicGraphicsUtils::getStringWidth(nullptr, fontMetrics, text);
	float result = $BasicGraphicsUtils::getStringWidth(comp, fontMetrics, nullptr);
	if (result != 0) {
		$throwNew($RuntimeException, "The string length is not 0"_s);
	}
	try {
		$BasicGraphicsUtils::getStringWidth(comp, nullptr, text);
	} catch ($NullPointerException& e) {
		return;
	}
	$throwNew($RuntimeException, "NPE is not thrown"_s);
}

void bug8132119::setMetalLAF() {
	$init(bug8132119);
	try {
		$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($MetalLookAndFeel)));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

$JComponent* bug8132119::createComponent($String* str) {
	$init(bug8132119);
	$useLocalCurrentObjectStackCache();
	$var($JComponent, comp, $new($JLabel, str));
	comp->setSize(bug8132119::WIDTH, bug8132119::HEIGHT);
	$init($TextAttribute);
	comp->putClientProperty($TextAttribute::NUMERIC_SHAPING, bug8132119::NUMERIC_SHAPER);
	comp->setFont($(getFont()));
	return comp;
}

$String* bug8132119::getFontName($String* fn, $StringArray* fontNames) {
	$init(bug8132119);
	$useLocalCurrentObjectStackCache();
	$var($String, fontName, nullptr);
	{
		$var($StringArray, arr$, fontNames);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, name, arr$->get(i$));
			{
				if ($nc(fn)->equals(name)) {
					$assign(fontName, name);
					break;
				}
			}
		}
	}
	return fontName;
}

$Font* bug8132119::getFont() {
	$init(bug8132119);
	$useLocalCurrentObjectStackCache();
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	$var($StringArray, fontNames, $nc(ge)->getAvailableFontFamilyNames());
	$var($String, fontName, getFontName("Arial"_s, fontNames));
	if (fontName == nullptr) {
		$assign(fontName, getFontName("Bitstream Charter"_s, fontNames));
		if (fontName == nullptr) {
			$assign(fontName, getFontName("Dialog"_s, fontNames));
			if (fontName == nullptr) {
				$assign(fontName, $nc(fontNames)->get(0));
				$nc($System::out)->println($$str({"warning - preferred fonts not on the system, fall back to first font "_s, fontName}));
			}
		}
	}
	return $new($Font, fontName, $Font::PLAIN, 30);
}

float bug8132119::getLayoutWidth($String* text, $Font* font, $NumericShaper* shaper) {
	$init(bug8132119);
	$useLocalCurrentObjectStackCache();
	$var($HashMap, map, $new($HashMap));
	$init($TextAttribute);
	map->put($TextAttribute::FONT, font);
	map->put($TextAttribute::NUMERIC_SHAPING, shaper);
	$var($FontRenderContext, frc, $new($FontRenderContext, ($AffineTransform*)nullptr, false, false));
	$var($TextLayout, layout, $new($TextLayout, text, static_cast<$Map*>(map), frc));
	return layout->getAdvance();
}

void bug8132119::checkImageIsEmpty($BufferedImage* buffImage) {
	$init(bug8132119);
	int32_t background = $nc(bug8132119::BACKGROUND_COLOR)->getRGB();
	for (int32_t i = 0; i < $nc(buffImage)->getWidth(); ++i) {
		for (int32_t j = 0; j < buffImage->getHeight(); ++j) {
			if (background != buffImage->getRGB(i, j)) {
				$throwNew($RuntimeException, "Image is not empty!"_s);
			}
		}
	}
}

void bug8132119::checkImageContainsSymbol($BufferedImage* buffImage, int32_t x, int32_t intersections) {
	$init(bug8132119);
	int32_t background = $nc(bug8132119::BACKGROUND_COLOR)->getRGB();
	bool isBackground = true;
	int32_t backgroundChangesCount = 0;
	for (int32_t y = 0; y < $nc(buffImage)->getHeight(); ++y) {
		if (!(isBackground ^ (background != buffImage->getRGB(x, y)))) {
			isBackground = !isBackground;
			++backgroundChangesCount;
		}
	}
	if (backgroundChangesCount != intersections * 2) {
		try {
			$ImageIO::write(static_cast<$RenderedImage*>(buffImage), "png"_s, $$new($File, "image.png"_s));
		} catch ($Exception& e) {
		}
		$throwNew($RuntimeException, "String is not properly drawn!"_s);
	}
}

$BufferedImage* bug8132119::createBufferedImage(int32_t width, int32_t height) {
	$init(bug8132119);
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, bufffImage, $new($BufferedImage, width, height, $BufferedImage::TYPE_INT_RGB));
	$var($Graphics2D, g, bufffImage->createGraphics());
	$nc(g)->setColor(bug8132119::BACKGROUND_COLOR);
	g->fillRect(0, 0, width, height);
	g->dispose();
	return bufffImage;
}

void clinit$bug8132119($Class* class$) {
	$init($Color);
	$assignStatic(bug8132119::DRAW_COLOR, $Color::RED);
	$assignStatic(bug8132119::BACKGROUND_COLOR, $Color::GREEN);
	$assignStatic(bug8132119::NUMERIC_SHAPER, $NumericShaper::getShaper($NumericShaper::ARABIC));
}

bug8132119::bug8132119() {
}

$Class* bug8132119::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug8132119$$Lambda$testStringMethods::classInfo$.name)) {
			return bug8132119$$Lambda$testStringMethods::load$(name, initialize);
		}
	}
	$loadClass(bug8132119, name, initialize, &_bug8132119_ClassInfo_, clinit$bug8132119, allocate$bug8132119);
	return class$;
}

$Class* bug8132119::class$ = nullptr;