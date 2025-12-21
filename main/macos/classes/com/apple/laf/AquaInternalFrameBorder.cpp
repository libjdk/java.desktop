#include <com/apple/laf/AquaInternalFrameBorder.h>

#include <apple/laf/JRSUIConstants$AlignmentVertical.h>
#include <apple/laf/JRSUIConstants$BooleanValue.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIConstants$WindowClipCorners.h>
#include <apple/laf/JRSUIConstants$WindowTitleBarSeparator.h>
#include <apple/laf/JRSUIConstants$WindowType.h>
#include <apple/laf/JRSUIState$TitleBarHeightState.h>
#include <apple/laf/JRSUIState$ValueState.h>
#include <apple/laf/JRSUIState.h>
#include <apple/laf/JRSUIStateFactory.h>
#include <com/apple/laf/AquaInternalFrameBorder$1.h>
#include <com/apple/laf/AquaInternalFrameBorder$2.h>
#include <com/apple/laf/AquaInternalFrameBorder$3.h>
#include <com/apple/laf/AquaInternalFrameBorderMetrics.h>
#include <com/apple/laf/AquaInternalFrameUI.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/beans/PropertyVetoException.h>
#include <java/lang/Math.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/InternalFrameUI.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ACTIVE
#undef CENTER
#undef DISABLED
#undef DOCUMENT
#undef FALSE
#undef INACTIVE
#undef NO
#undef PRESSED
#undef ROLLOVER
#undef TITLE_BAR_CLOSE_BOX
#undef TITLE_BAR_COLLAPSE_BOX
#undef TITLE_BAR_ZOOM_BOX
#undef UTILITY
#undef YES

using $JRSUIConstants$AlignmentVertical = ::apple::laf::JRSUIConstants$AlignmentVertical;
using $JRSUIConstants$BooleanValue = ::apple::laf::JRSUIConstants$BooleanValue;
using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIConstants$WindowClipCorners = ::apple::laf::JRSUIConstants$WindowClipCorners;
using $JRSUIConstants$WindowTitleBarSeparator = ::apple::laf::JRSUIConstants$WindowTitleBarSeparator;
using $JRSUIConstants$WindowType = ::apple::laf::JRSUIConstants$WindowType;
using $JRSUIState = ::apple::laf::JRSUIState;
using $JRSUIState$TitleBarHeightState = ::apple::laf::JRSUIState$TitleBarHeightState;
using $JRSUIState$ValueState = ::apple::laf::JRSUIState$ValueState;
using $JRSUIStateFactory = ::apple::laf::JRSUIStateFactory;
using $AquaInternalFrameBorder$1 = ::com::apple::laf::AquaInternalFrameBorder$1;
using $AquaInternalFrameBorder$2 = ::com::apple::laf::AquaInternalFrameBorder$2;
using $AquaInternalFrameBorder$3 = ::com::apple::laf::AquaInternalFrameBorder$3;
using $AquaInternalFrameBorderMetrics = ::com::apple::laf::AquaInternalFrameBorderMetrics;
using $AquaInternalFrameUI = ::com::apple::laf::AquaInternalFrameUI;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $InternalFrameUI = ::javax::swing::plaf::InternalFrameUI;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaInternalFrameBorder_FieldInfo_[] = {
	{"kCloseButton", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaInternalFrameBorder, kCloseButton)},
	{"kIconButton", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaInternalFrameBorder, kIconButton)},
	{"kGrowButton", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaInternalFrameBorder, kGrowButton)},
	{"sMaxIconWidth", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaInternalFrameBorder, sMaxIconWidth)},
	{"sMaxIconHeight", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaInternalFrameBorder, sMaxIconHeight)},
	{"sAfterButtonPad", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaInternalFrameBorder, sAfterButtonPad)},
	{"sAfterIconPad", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaInternalFrameBorder, sAfterIconPad)},
	{"sRightSideTitleClip", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaInternalFrameBorder, sRightSideTitleClip)},
	{"kContentTester", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaInternalFrameBorder, kContentTester)},
	{"documentWindowFrame", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaInternalFrameBorder;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaInternalFrameBorder, documentWindowFrame)},
	{"utilityWindowFrame", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaInternalFrameBorder;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaInternalFrameBorder, utilityWindowFrame)},
	{"dialogWindowFrame", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaInternalFrameBorder;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaInternalFrameBorder, dialogWindowFrame)},
	{"metrics", "Lcom/apple/laf/AquaInternalFrameBorderMetrics;", nullptr, $PRIVATE | $FINAL, $field(AquaInternalFrameBorder, metrics)},
	{"fThisButtonSpan", "I", nullptr, $PRIVATE | $FINAL, $field(AquaInternalFrameBorder, fThisButtonSpan)},
	{"fThisLeftSideTotal", "I", nullptr, $PRIVATE | $FINAL, $field(AquaInternalFrameBorder, fThisLeftSideTotal)},
	{"fIsUtility", "Z", nullptr, $PRIVATE | $FINAL, $field(AquaInternalFrameBorder, fIsUtility)},
	{"fWindowKind", "Lapple/laf/JRSUIConstants$WindowType;", nullptr, $PRIVATE | $FINAL, $field(AquaInternalFrameBorder, fWindowKind)},
	{"fBorderInsets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(AquaInternalFrameBorder, fBorderInsets)},
	{"selectedTextColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(AquaInternalFrameBorder, selectedTextColor)},
	{"notSelectedTextColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(AquaInternalFrameBorder, notSelectedTextColor)},
	{"fInBounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(AquaInternalFrameBorder, fInBounds)},
	{"titleBarPainter", "Lcom/apple/laf/AquaPainter;", "Lcom/apple/laf/AquaPainter<Lapple/laf/JRSUIState$TitleBarHeightState;>;", $PROTECTED | $FINAL, $field(AquaInternalFrameBorder, titleBarPainter)},
	{"widgetPainter", "Lcom/apple/laf/AquaPainter;", "Lcom/apple/laf/AquaPainter<Lapple/laf/JRSUIState;>;", $PROTECTED | $FINAL, $field(AquaInternalFrameBorder, widgetPainter)},
	{}
};

$MethodInfo _AquaInternalFrameBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lapple/laf/JRSUIConstants$WindowType;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaInternalFrameBorder::*)($JRSUIConstants$WindowType*)>(&AquaInternalFrameBorder::init$))},
	{"dialog", "()Lcom/apple/laf/AquaInternalFrameBorder;", nullptr, $PROTECTED | $STATIC, $method(static_cast<AquaInternalFrameBorder*(*)()>(&AquaInternalFrameBorder::dialog))},
	{"doButtonAction", "(Ljavax/swing/JInternalFrame;I)V", nullptr, $PUBLIC},
	{"drawAllWidgets", "(Ljava/awt/Graphics;Ljavax/swing/JInternalFrame;)V", nullptr, 0},
	{"drawWindowTitle", "(Ljava/awt/Graphics;Ljavax/swing/JInternalFrame;IIII)V", nullptr, $PUBLIC},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getIconHeight", "(Ljavax/swing/JInternalFrame;)I", nullptr, $PROTECTED},
	{"getIconWidth", "(Ljavax/swing/JInternalFrame;)I", nullptr, $PROTECTED},
	{"getState", "(ZZZZ)Lapple/laf/JRSUIConstants$State;", nullptr, $STATIC, $method(static_cast<$JRSUIConstants$State*(*)(bool,bool,bool,bool)>(&AquaInternalFrameBorder::getState))},
	{"getTitleHeight", "()I", nullptr, $PROTECTED},
	{"getWhichButtonHit", "(Ljavax/swing/JInternalFrame;II)I", nullptr, $PUBLIC},
	{"getWidget", "(Ljavax/swing/JInternalFrame;I)Lapple/laf/JRSUIConstants$Widget;", nullptr, $STATIC, $method(static_cast<$JRSUIConstants$Widget*(*)($JInternalFrame*,int32_t)>(&AquaInternalFrameBorder::getWidget))},
	{"getWithinRolloverArea", "(Ljava/awt/Insets;II)Z", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"isDirty", "(Ljavax/swing/JInternalFrame;)Z", nullptr, 0},
	{"isInsideYButtonArea", "(Ljava/awt/Insets;I)Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintBorder", "(Ljavax/swing/JInternalFrame;Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, 0},
	{"paintButton", "(Ljava/awt/Graphics;Ljavax/swing/JInternalFrame;IIIIZZZZZ)V", nullptr, $PUBLIC},
	{"paintTitleContents", "(Ljava/awt/Graphics;Ljavax/swing/JInternalFrame;IIII)V", nullptr, $PROTECTED},
	{"paintTitleIcon", "(Ljava/awt/Graphics;Ljavax/swing/JInternalFrame;II)V", nullptr, $PROTECTED},
	{"repaintButtonArea", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"setColors", "(Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setInBounds", "(IIII)V", nullptr, $PROTECTED},
	{"setMetrics", "(Ljavax/swing/JInternalFrame;Ljava/awt/Component;)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"utility", "()Lcom/apple/laf/AquaInternalFrameBorder;", nullptr, $PROTECTED | $STATIC, $method(static_cast<AquaInternalFrameBorder*(*)()>(&AquaInternalFrameBorder::utility))},
	{"window", "()Lcom/apple/laf/AquaInternalFrameBorder;", nullptr, $PROTECTED | $STATIC, $method(static_cast<AquaInternalFrameBorder*(*)()>(&AquaInternalFrameBorder::window))},
	{}
};

$InnerClassInfo _AquaInternalFrameBorder_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameBorder$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaInternalFrameBorder$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaInternalFrameBorder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaInternalFrameBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaInternalFrameBorder",
	"java.lang.Object",
	"javax.swing.border.Border,javax.swing.plaf.UIResource",
	_AquaInternalFrameBorder_FieldInfo_,
	_AquaInternalFrameBorder_MethodInfo_,
	nullptr,
	nullptr,
	_AquaInternalFrameBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameBorder$3,com.apple.laf.AquaInternalFrameBorder$2,com.apple.laf.AquaInternalFrameBorder$1"
};

$Object* allocate$AquaInternalFrameBorder($Class* clazz) {
	return $of($alloc(AquaInternalFrameBorder));
}

int32_t AquaInternalFrameBorder::hashCode() {
	 return this->$Border::hashCode();
}

bool AquaInternalFrameBorder::equals(Object$* arg0) {
	 return this->$Border::equals(arg0);
}

$Object* AquaInternalFrameBorder::clone() {
	 return this->$Border::clone();
}

$String* AquaInternalFrameBorder::toString() {
	 return this->$Border::toString();
}

void AquaInternalFrameBorder::finalize() {
	this->$Border::finalize();
}

$AquaUtils$RecyclableSingleton* AquaInternalFrameBorder::documentWindowFrame = nullptr;
$AquaUtils$RecyclableSingleton* AquaInternalFrameBorder::utilityWindowFrame = nullptr;
$AquaUtils$RecyclableSingleton* AquaInternalFrameBorder::dialogWindowFrame = nullptr;

AquaInternalFrameBorder* AquaInternalFrameBorder::window() {
	$init(AquaInternalFrameBorder);
	return $cast(AquaInternalFrameBorder, $nc(AquaInternalFrameBorder::documentWindowFrame)->get());
}

AquaInternalFrameBorder* AquaInternalFrameBorder::utility() {
	$init(AquaInternalFrameBorder);
	return $cast(AquaInternalFrameBorder, $nc(AquaInternalFrameBorder::utilityWindowFrame)->get());
}

AquaInternalFrameBorder* AquaInternalFrameBorder::dialog() {
	$init(AquaInternalFrameBorder);
	return $cast(AquaInternalFrameBorder, $nc(AquaInternalFrameBorder::dialogWindowFrame)->get());
}

void AquaInternalFrameBorder::init$($JRSUIConstants$WindowType* kind) {
	$useLocalCurrentObjectStackCache();
	$set(this, titleBarPainter, $AquaPainter::create($($JRSUIStateFactory::getTitleBar())));
	$set(this, widgetPainter, $AquaPainter::create($($JRSUIState::getInstance())));
	$set(this, fWindowKind, kind);
	$init($JRSUIConstants$WindowClipCorners);
	$nc(($cast($JRSUIState$TitleBarHeightState, $nc(this->titleBarPainter)->state)))->set($JRSUIConstants$WindowClipCorners::YES);
	$init($JRSUIConstants$WindowType);
	if (this->fWindowKind == $JRSUIConstants$WindowType::UTILITY) {
		this->fIsUtility = true;
		$set(this, metrics, $AquaInternalFrameBorderMetrics::getMetrics(true));
		$nc($nc(this->widgetPainter)->state)->set($JRSUIConstants$WindowType::UTILITY);
		$nc(($cast($JRSUIState$TitleBarHeightState, $nc(this->titleBarPainter)->state)))->set($JRSUIConstants$WindowType::UTILITY);
	} else {
		this->fIsUtility = false;
		$set(this, metrics, $AquaInternalFrameBorderMetrics::getMetrics(false));
		$nc($nc(this->widgetPainter)->state)->set($JRSUIConstants$WindowType::DOCUMENT);
		$nc(($cast($JRSUIState$TitleBarHeightState, $nc(this->titleBarPainter)->state)))->set($JRSUIConstants$WindowType::DOCUMENT);
	}
	$nc(($cast($JRSUIState$TitleBarHeightState, $nc(this->titleBarPainter)->state)))->setValue((double)$nc(this->metrics)->titleBarHeight);
	$init($JRSUIConstants$WindowTitleBarSeparator);
	$nc(($cast($JRSUIState$TitleBarHeightState, $nc(this->titleBarPainter)->state)))->set($JRSUIConstants$WindowTitleBarSeparator::YES);
	$init($JRSUIConstants$AlignmentVertical);
	$nc($nc(this->widgetPainter)->state)->set($JRSUIConstants$AlignmentVertical::CENTER);
	this->fThisButtonSpan = ($nc(this->metrics)->buttonWidth * 3) + ($nc(this->metrics)->buttonPadding * 2);
	this->fThisLeftSideTotal = $nc(this->metrics)->leftSidePadding + this->fThisButtonSpan + AquaInternalFrameBorder::sAfterButtonPad;
}

void AquaInternalFrameBorder::setColors($Color* inSelectedTextColor, $Color* inNotSelectedTextColor) {
	$set(this, selectedTextColor, inSelectedTextColor);
	$set(this, notSelectedTextColor, inNotSelectedTextColor);
}

void AquaInternalFrameBorder::setInBounds(int32_t x, int32_t y, int32_t w, int32_t h) {
	if (this->fInBounds == nullptr) {
		$set(this, fInBounds, $new($Rectangle));
	}
	$nc(this->fInBounds)->x = x;
	$nc(this->fInBounds)->y = y;
	$nc(this->fInBounds)->width = w;
	$nc(this->fInBounds)->height = h;
}

bool AquaInternalFrameBorder::isBorderOpaque() {
	return false;
}

void AquaInternalFrameBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder($cast($JInternalFrame, c), c, g, x, y, w, h);
}

void AquaInternalFrameBorder::paintTitleContents($Graphics* g, $JInternalFrame* frame, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	bool isSelected = $nc(frame)->isSelected();
	$var($Font, f, $nc(g)->getFont());
	g->setFont($nc(this->metrics)->font);
	$var($FontMetrics, fm, g->getFontMetrics());
	int32_t var$1 = $nc(this->metrics)->titleBarHeight + $nc(fm)->getAscent();
	int32_t var$0 = var$1 - fm->getLeading();
	int32_t baseline = (var$0 - fm->getDescent()) / 2;
	int32_t usedWidth = this->fThisLeftSideTotal + AquaInternalFrameBorder::sRightSideTitleClip;
	int32_t iconWidth = getIconWidth(frame);
	if (iconWidth > 0) {
		iconWidth += AquaInternalFrameBorder::sAfterIconPad;
	}
	int32_t totalWidth = w;
	int32_t availTextWidth = totalWidth - usedWidth - iconWidth - AquaInternalFrameBorder::sAfterButtonPad;
	$var($String, title, frame->getTitle());
	$var($String, text, title);
	int32_t totalTextWidth = 0;
	int32_t startXPosition = this->fThisLeftSideTotal;
	bool wasTextShortened = false;
	if (text != nullptr && !text->isEmpty()) {
		totalTextWidth = $SwingUtilities::computeStringWidth(fm, text);
		$var($String, clipString, u"…"_s);
		if (totalTextWidth > availTextWidth) {
			wasTextShortened = true;
			totalTextWidth = $SwingUtilities::computeStringWidth(fm, clipString);
			int32_t nChars = 0;
			for (nChars = 0; nChars < text->length(); ++nChars) {
				int32_t nextCharWidth = fm->charWidth(text->charAt(nChars));
				if ((totalTextWidth + nextCharWidth) > availTextWidth) {
					break;
				}
				totalTextWidth += nextCharWidth;
			}
			$assign(text, $str({$(text->substring(0, nChars)), clipString}));
		}
		if (!wasTextShortened) {
			startXPosition = (totalWidth - (totalTextWidth + iconWidth)) / 2;
			if (startXPosition < this->fThisLeftSideTotal) {
				startXPosition = this->fThisLeftSideTotal;
			}
		}
		if (isSelected || this->fIsUtility) {
			$init($Color);
			g->setColor($Color::lightGray);
		} else {
			$init($Color);
			g->setColor($Color::white);
		}
		$SwingUtilities2::drawString(static_cast<$JComponent*>(frame), g, text, x + startXPosition + iconWidth, y + baseline + 1);
		if (isSelected || this->fIsUtility) {
			g->setColor(this->selectedTextColor);
		} else {
			g->setColor(this->notSelectedTextColor);
		}
		$SwingUtilities2::drawString(static_cast<$JComponent*>(frame), g, text, x + startXPosition + iconWidth, y + baseline);
		g->setFont(f);
	}
	int32_t iconYPostion = ($nc(this->metrics)->titleBarHeight - getIconHeight(frame)) / 2;
	paintTitleIcon(g, frame, x + startXPosition, y + iconYPostion);
}

int32_t AquaInternalFrameBorder::getWhichButtonHit($JInternalFrame* frame, int32_t x, int32_t y) {
	int32_t buttonHit = -1;
	$var($Insets, i, $nc(frame)->getInsets());
	int32_t startX = $nc(i)->left + $nc(this->metrics)->leftSidePadding - 1;
	if (isInsideYButtonArea(i, y) && x >= startX) {
		if (x <= (startX + $nc(this->metrics)->buttonWidth)) {
			if (frame->isClosable()) {
				buttonHit = AquaInternalFrameBorder::kCloseButton;
			}
		} else {
			startX += $nc(this->metrics)->buttonWidth + $nc(this->metrics)->buttonPadding;
			if (x >= startX && x <= (startX + $nc(this->metrics)->buttonWidth)) {
				if (frame->isIconifiable()) {
					buttonHit = AquaInternalFrameBorder::kIconButton;
				}
			} else {
				startX += $nc(this->metrics)->buttonWidth + $nc(this->metrics)->buttonPadding;
				if (x >= startX && x <= (startX + $nc(this->metrics)->buttonWidth)) {
					if (frame->isMaximizable()) {
						buttonHit = AquaInternalFrameBorder::kGrowButton;
					}
				}
			}
		}
	}
	return buttonHit;
}

void AquaInternalFrameBorder::doButtonAction($JInternalFrame* frame, int32_t whichButton) {
	switch (whichButton) {
	case AquaInternalFrameBorder::kCloseButton:
		{
			$nc(frame)->doDefaultCloseAction();
			break;
		}
	case AquaInternalFrameBorder::kIconButton:
		{
			if ($nc(frame)->isIconifiable()) {
				if (!frame->isIcon()) {
					try {
						frame->setIcon(true);
					} catch ($PropertyVetoException& e1) {
					}
				} else {
					try {
						frame->setIcon(false);
					} catch ($PropertyVetoException& e1) {
					}
				}
			}
			break;
		}
	case AquaInternalFrameBorder::kGrowButton:
		{
			if ($nc(frame)->isMaximizable()) {
				if (!frame->isMaximum()) {
					try {
						frame->setMaximum(true);
					} catch ($PropertyVetoException& e5) {
					}
				} else {
					try {
						frame->setMaximum(false);
					} catch ($PropertyVetoException& e6) {
					}
				}
			}
			break;
		}
	default:
		{
			$nc($System::err)->println("AquaInternalFrameBorder should never get here!!!!"_s);
			$Thread::dumpStack();
			break;
		}
	}
}

bool AquaInternalFrameBorder::isInsideYButtonArea($Insets* i, int32_t y) {
	int32_t startY = ($nc(i)->top - $nc(this->metrics)->titleBarHeight / 2) - ($nc(this->metrics)->buttonHeight / 2) - 1;
	int32_t endY = startY + $nc(this->metrics)->buttonHeight;
	return y >= startY && y <= endY;
}

bool AquaInternalFrameBorder::getWithinRolloverArea($Insets* i, int32_t x, int32_t y) {
	int32_t startX = $nc(i)->left + $nc(this->metrics)->leftSidePadding;
	int32_t endX = startX + this->fThisButtonSpan;
	return isInsideYButtonArea(i, y) && x >= startX && x <= endX;
}

void AquaInternalFrameBorder::paintTitleIcon($Graphics* g, $JInternalFrame* frame, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($Icon, icon, $nc(frame)->getFrameIcon());
	if (icon == nullptr) {
		$assign(icon, $UIManager::getIcon("InternalFrame.icon"_s));
	}
	if (icon == nullptr) {
		return;
	}
	bool var$0 = $nc(icon)->getIconWidth() > AquaInternalFrameBorder::sMaxIconWidth;
	if (var$0 || $nc(icon)->getIconHeight() > AquaInternalFrameBorder::sMaxIconHeight) {
		$var($Graphics2D, g2, $cast($Graphics2D, g));
		$var($AffineTransform, savedAT, $nc(g2)->getTransform());
		double xScaleFactor = (double)AquaInternalFrameBorder::sMaxIconWidth / icon->getIconWidth();
		double yScaleFactor = (double)AquaInternalFrameBorder::sMaxIconHeight / icon->getIconHeight();
		g2->translate(x, y);
		double scaleMaintainAspectRatio = $Math::min(xScaleFactor, yScaleFactor);
		g2->scale(scaleMaintainAspectRatio, scaleMaintainAspectRatio);
		icon->paintIcon(frame, g2, 0, 0);
		g2->setTransform(savedAT);
	} else {
		icon->paintIcon(frame, g, x, y);
	}
}

int32_t AquaInternalFrameBorder::getIconWidth($JInternalFrame* frame) {
	int32_t width = 0;
	$var($Icon, icon, $nc(frame)->getFrameIcon());
	if (icon == nullptr) {
		$assign(icon, $UIManager::getIcon("InternalFrame.icon"_s));
	}
	if (icon != nullptr) {
		width = $Math::min(icon->getIconWidth(), AquaInternalFrameBorder::sMaxIconWidth);
	}
	return width;
}

int32_t AquaInternalFrameBorder::getIconHeight($JInternalFrame* frame) {
	int32_t height = 0;
	$var($Icon, icon, $nc(frame)->getFrameIcon());
	if (icon == nullptr) {
		$assign(icon, $UIManager::getIcon("InternalFrame.icon"_s));
	}
	if (icon != nullptr) {
		height = $Math::min(icon->getIconHeight(), AquaInternalFrameBorder::sMaxIconHeight);
	}
	return height;
}

void AquaInternalFrameBorder::drawWindowTitle($Graphics* g, $JInternalFrame* frame, int32_t inX, int32_t inY, int32_t inW, int32_t inH) {
	int32_t x = inX;
	int32_t y = inY;
	int32_t w = inW;
	int32_t h = inH;
	h = $nc(this->metrics)->titleBarHeight + inH;
	$init($JRSUIConstants$State);
	$nc(($cast($JRSUIState$TitleBarHeightState, $nc(this->titleBarPainter)->state)))->set($nc(frame)->isSelected() ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$State::ACTIVE) : static_cast<$JRSUIConstants$Property*>($JRSUIConstants$State::INACTIVE));
	$nc(this->titleBarPainter)->paint(g, frame, x, y, w, h);
	paintTitleContents(g, frame, x, y, w, h);
	drawAllWidgets(g, frame);
}

void AquaInternalFrameBorder::paintBorder($JInternalFrame* frame, $Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	if (this->fBorderInsets == nullptr) {
		getBorderInsets(c);
	}
	setInBounds(x + $nc(this->fBorderInsets)->left, y + $nc(this->fBorderInsets)->top, w - ($nc(this->fBorderInsets)->right + $nc(this->fBorderInsets)->left), h - ($nc(this->fBorderInsets)->top + $nc(this->fBorderInsets)->bottom));
	setMetrics(frame, c);
	drawWindowTitle(g, frame, x, y, w, h);
}

bool AquaInternalFrameBorder::isDirty($JInternalFrame* frame) {
	$var($Object, dirty, $nc(frame)->getClientProperty("windowModified"_s));
	$init($Boolean);
	if (dirty == nullptr || $equals(dirty, $Boolean::FALSE)) {
		return false;
	}
	return true;
}

$Insets* AquaInternalFrameBorder::getBorderInsets($Component* c) {
	if (this->fBorderInsets == nullptr) {
		$set(this, fBorderInsets, $new($Insets, 0, 0, 0, 0));
	}
	if (!($instanceOf($JInternalFrame, c))) {
		return this->fBorderInsets;
	}
	$var($JInternalFrame, frame, $cast($JInternalFrame, c));
	setInBounds(0, 0, AquaInternalFrameBorder::kContentTester, AquaInternalFrameBorder::kContentTester);
	setMetrics(frame, c);
	$nc(this->fBorderInsets)->left = 0;
	$nc(this->fBorderInsets)->top = $nc(this->metrics)->titleBarHeight;
	$nc(this->fBorderInsets)->right = 0;
	$nc(this->fBorderInsets)->bottom = 0;
	return this->fBorderInsets;
}

void AquaInternalFrameBorder::repaintButtonArea($JInternalFrame* frame) {
	$var($Insets, i, $nc(frame)->getInsets());
	int32_t x = $nc(i)->left + $nc(this->metrics)->leftSidePadding;
	int32_t y = i->top - $nc(this->metrics)->titleBarHeight + 1;
	frame->repaint(x, y, this->fThisButtonSpan, $nc(this->metrics)->titleBarHeight - 2);
}

void AquaInternalFrameBorder::drawAllWidgets($Graphics* g, $JInternalFrame* frame) {
	$useLocalCurrentObjectStackCache();
	int32_t x = $nc(this->metrics)->leftSidePadding;
	int32_t y = ($nc(this->metrics)->titleBarHeight - $nc(this->metrics)->buttonHeight) / 2 - $nc(this->metrics)->titleBarHeight;
	$var($Insets, insets, $nc(frame)->getInsets());
	x += $nc(insets)->left;
	y += insets->top + $nc(this->metrics)->downShift;
	$var($AquaInternalFrameUI, ui, $cast($AquaInternalFrameUI, $cast($InternalFrameUI, frame->getUI())));
	int32_t buttonPressedIndex = $nc(ui)->getWhichButtonPressed();
	bool overButton = ui->getMouseOverPressedButton();
	bool rollover = ui->getRollover();
	bool frameSelected = frame->isSelected() || this->fIsUtility;
	bool generalActive = rollover || frameSelected;
	bool dirty = isDirty(frame);
	paintButton(g, frame, x, y, AquaInternalFrameBorder::kCloseButton, buttonPressedIndex, overButton, frame->isClosable(), generalActive, rollover, dirty);
	x += $nc(this->metrics)->buttonPadding + $nc(this->metrics)->buttonWidth;
	paintButton(g, frame, x, y, AquaInternalFrameBorder::kIconButton, buttonPressedIndex, overButton, frame->isIconifiable(), generalActive, rollover, false);
	x += $nc(this->metrics)->buttonPadding + $nc(this->metrics)->buttonWidth;
	paintButton(g, frame, x, y, AquaInternalFrameBorder::kGrowButton, buttonPressedIndex, overButton, frame->isMaximizable(), generalActive, rollover, false);
}

void AquaInternalFrameBorder::paintButton($Graphics* g, $JInternalFrame* frame, int32_t x, int32_t y, int32_t buttonType, int32_t buttonPressedIndex, bool overButton, bool enabled, bool active, bool anyRollover, bool dirty) {
	$useLocalCurrentObjectStackCache();
	$nc($nc(this->widgetPainter)->state)->set($(getWidget(frame, buttonType)));
	$nc($nc(this->widgetPainter)->state)->set($(getState(buttonPressedIndex == buttonType && overButton, anyRollover, active, enabled)));
	$init($JRSUIConstants$BooleanValue);
	$nc($nc(this->widgetPainter)->state)->set(dirty ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$BooleanValue::YES) : static_cast<$JRSUIConstants$Property*>($JRSUIConstants$BooleanValue::NO));
	$nc(this->widgetPainter)->paint(g, frame, x, y, $nc(this->metrics)->buttonWidth, $nc(this->metrics)->buttonHeight);
}

$JRSUIConstants$Widget* AquaInternalFrameBorder::getWidget($JInternalFrame* frame, int32_t buttonType) {
	$init(AquaInternalFrameBorder);
	switch (buttonType) {
	case AquaInternalFrameBorder::kIconButton:
		{
			$init($JRSUIConstants$Widget);
			return $JRSUIConstants$Widget::TITLE_BAR_COLLAPSE_BOX;
		}
	case AquaInternalFrameBorder::kGrowButton:
		{
			$init($JRSUIConstants$Widget);
			return $JRSUIConstants$Widget::TITLE_BAR_ZOOM_BOX;
		}
	}
	$init($JRSUIConstants$Widget);
	return $JRSUIConstants$Widget::TITLE_BAR_CLOSE_BOX;
}

$JRSUIConstants$State* AquaInternalFrameBorder::getState(bool pressed, bool rollover, bool active, bool enabled) {
	$init(AquaInternalFrameBorder);
	if (!enabled) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::DISABLED;
	}
	if (!active) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::INACTIVE;
	}
	if (pressed) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::PRESSED;
	}
	if (rollover) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::ROLLOVER;
	}
	$init($JRSUIConstants$State);
	return $JRSUIConstants$State::ACTIVE;
}

void AquaInternalFrameBorder::setMetrics($JInternalFrame* frame, $Component* window) {
	$useLocalCurrentObjectStackCache();
	$var($String, title, $nc(frame)->getTitle());
	$var($FontMetrics, fm, frame->getFontMetrics($($UIManager::getFont("InternalFrame.titleFont"_s))));
	int32_t titleWidth = 0;
	int32_t titleHeight = $nc(fm)->getAscent();
	if (title != nullptr) {
		titleWidth = $SwingUtilities::computeStringWidth(fm, title);
	}
	$var($Icon, icon, frame->getFrameIcon());
	if (icon != nullptr) {
		titleWidth += icon->getIconWidth();
		titleHeight = $Math::max(titleHeight, icon->getIconHeight());
	}
}

int32_t AquaInternalFrameBorder::getTitleHeight() {
	return $nc(this->metrics)->titleBarHeight;
}

void clinit$AquaInternalFrameBorder($Class* class$) {
	$assignStatic(AquaInternalFrameBorder::documentWindowFrame, $new($AquaInternalFrameBorder$1));
	$assignStatic(AquaInternalFrameBorder::utilityWindowFrame, $new($AquaInternalFrameBorder$2));
	$assignStatic(AquaInternalFrameBorder::dialogWindowFrame, $new($AquaInternalFrameBorder$3));
}

AquaInternalFrameBorder::AquaInternalFrameBorder() {
}

$Class* AquaInternalFrameBorder::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameBorder, name, initialize, &_AquaInternalFrameBorder_ClassInfo_, clinit$AquaInternalFrameBorder, allocate$AquaInternalFrameBorder);
	return class$;
}

$Class* AquaInternalFrameBorder::class$ = nullptr;

		} // laf
	} // apple
} // com