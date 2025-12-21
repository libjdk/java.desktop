#include <sun/awt/X11/ListHelper.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XHorizontalScrollbar.h>
#include <sun/awt/X11/XScrollbar.h>
#include <sun/awt/X11/XScrollbarClient.h>
#include <sun/awt/X11/XVerticalScrollbar.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef BACKGROUND_COLOR
#undef BLACK
#undef BORDER
#undef BORDER_WIDTH
#undef FINE
#undef FOCUS_INSET
#undef FOREGROUND_COLOR
#undef ITEM_MARGIN
#undef MARGIN
#undef SCROLLBAR
#undef SCROLLBAR_WIDTH
#undef SPACE
#undef TEXT_SPACE
#undef UNIT_DECREMENT
#undef UNIT_INCREMENT
#undef WHEEL_BLOCK_SCROLL

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XHorizontalScrollbar = ::sun::awt::X11::XHorizontalScrollbar;
using $XScrollbar = ::sun::awt::X11::XScrollbar;
using $XScrollbarClient = ::sun::awt::X11::XScrollbarClient;
using $XVerticalScrollbar = ::sun::awt::X11::XVerticalScrollbar;
using $XWindow = ::sun::awt::X11::XWindow;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _ListHelper_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ListHelper, $assertionsDisabled)},
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ListHelper, log)},
	{"FOCUS_INSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ListHelper, FOCUS_INSET)},
	{"BORDER_WIDTH", "I", nullptr, $PRIVATE | $FINAL, $field(ListHelper, BORDER_WIDTH)},
	{"ITEM_MARGIN", "I", nullptr, $PRIVATE | $FINAL, $field(ListHelper, ITEM_MARGIN)},
	{"TEXT_SPACE", "I", nullptr, $PRIVATE | $FINAL, $field(ListHelper, TEXT_SPACE)},
	{"SCROLLBAR_WIDTH", "I", nullptr, $PRIVATE | $FINAL, $field(ListHelper, SCROLLBAR_WIDTH)},
	{"items", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(ListHelper, items)},
	{"selected", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Integer;>;", $PRIVATE, $field(ListHelper, selected)},
	{"multiSelect", "Z", nullptr, $PRIVATE, $field(ListHelper, multiSelect)},
	{"focusedIndex", "I", nullptr, $PRIVATE, $field(ListHelper, focusedIndex)},
	{"maxVisItems", "I", nullptr, $PRIVATE, $field(ListHelper, maxVisItems)},
	{"vsb", "Lsun/awt/X11/XVerticalScrollbar;", nullptr, $PRIVATE, $field(ListHelper, vsb)},
	{"vsbVis", "Z", nullptr, $PRIVATE, $field(ListHelper, vsbVis)},
	{"hsb", "Lsun/awt/X11/XHorizontalScrollbar;", nullptr, $PRIVATE, $field(ListHelper, hsb)},
	{"hsbVis", "Z", nullptr, $PRIVATE, $field(ListHelper, hsbVis)},
	{"font", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(ListHelper, font)},
	{"fm", "Ljava/awt/FontMetrics;", nullptr, $PRIVATE, $field(ListHelper, fm)},
	{"peer", "Lsun/awt/X11/XWindow;", nullptr, $PRIVATE, $field(ListHelper, peer)},
	{"colors", "[Ljava/awt/Color;", nullptr, $PRIVATE, $field(ListHelper, colors)},
	{"mouseDraggedOutVertically", "Z", nullptr, $PRIVATE, $field(ListHelper, mouseDraggedOutVertically)},
	{"vsbVisibilityChanged", "Z", nullptr, $PRIVATE | $VOLATILE, $field(ListHelper, vsbVisibilityChanged)},
	{}
};

$MethodInfo _ListHelper_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XWindow;[Ljava/awt/Color;IZZZLjava/awt/Font;IIIII)V", nullptr, 0, $method(static_cast<void(ListHelper::*)($XWindow*,$ColorArray*,int32_t,bool,bool,bool,$Font*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&ListHelper::init$))},
	{"add", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(ListHelper::*)($String*)>(&ListHelper::add))},
	{"add", "(Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(ListHelper::*)($String*,int32_t)>(&ListHelper::add))},
	{"checkVsbVisibilityChangedAndReset", "()Z", nullptr, 0, $method(static_cast<bool(ListHelper::*)()>(&ListHelper::checkVsbVisibilityChangedAndReset))},
	{"deselect", "(I)V", nullptr, 0, $method(static_cast<void(ListHelper::*)(int32_t)>(&ListHelper::deselect))},
	{"doWheelScroll", "(Lsun/awt/X11/XVerticalScrollbar;Lsun/awt/X11/XHorizontalScrollbar;Ljava/awt/event/MouseWheelEvent;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($XVerticalScrollbar*,$XHorizontalScrollbar*,$MouseWheelEvent*)>(&ListHelper::doWheelScroll))},
	{"down", "()V", nullptr, 0, $method(static_cast<void(ListHelper::*)()>(&ListHelper::down))},
	{"end", "()V", nullptr, 0, $method(static_cast<void(ListHelper::*)()>(&ListHelper::end))},
	{"firstDisplayedIndex", "()I", nullptr, 0, $method(static_cast<int32_t(ListHelper::*)()>(&ListHelper::firstDisplayedIndex))},
	{"getEventSource", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getHSB", "()Lsun/awt/X11/XHorizontalScrollbar;", nullptr, 0, $method(static_cast<$XHorizontalScrollbar*(ListHelper::*)()>(&ListHelper::getHSB))},
	{"getItem", "(I)Ljava/lang/String;", nullptr, 0, $method(static_cast<$String*(ListHelper::*)(int32_t)>(&ListHelper::getItem))},
	{"getItemCount", "()I", nullptr, 0, $method(static_cast<int32_t(ListHelper::*)()>(&ListHelper::getItemCount))},
	{"getItemHeight", "()I", nullptr, 0, $method(static_cast<int32_t(ListHelper::*)()>(&ListHelper::getItemHeight))},
	{"getMaxItemWidth", "()I", nullptr, 0, $method(static_cast<int32_t(ListHelper::*)()>(&ListHelper::getMaxItemWidth))},
	{"getNumItemsDisplayed", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(ListHelper::*)()>(&ListHelper::getNumItemsDisplayed))},
	{"getSelectedIndex", "()I", nullptr, 0, $method(static_cast<int32_t(ListHelper::*)()>(&ListHelper::getSelectedIndex))},
	{"getSelectedIndexes", "()[I", nullptr, 0, $method(static_cast<$ints*(ListHelper::*)()>(&ListHelper::getSelectedIndexes))},
	{"getVSB", "()Lsun/awt/X11/XVerticalScrollbar;", nullptr, 0, $method(static_cast<$XVerticalScrollbar*(ListHelper::*)()>(&ListHelper::getVSB))},
	{"handleVSBEvent", "(Ljava/awt/event/MouseEvent;Ljava/awt/Rectangle;II)V", nullptr, 0, $method(static_cast<void(ListHelper::*)($MouseEvent*,$Rectangle*,int32_t,int32_t)>(&ListHelper::handleVSBEvent))},
	{"home", "()V", nullptr, 0, $method(static_cast<void(ListHelper::*)()>(&ListHelper::home))},
	{"isEmpty", "()Z", nullptr, 0, $method(static_cast<bool(ListHelper::*)()>(&ListHelper::isEmpty))},
	{"isFocusedIndex", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(ListHelper::*)(int32_t)>(&ListHelper::isFocusedIndex))},
	{"isHSBVisible", "()Z", nullptr, 0, $method(static_cast<bool(ListHelper::*)()>(&ListHelper::isHSBVisible))},
	{"isInHorizSB", "(Ljava/awt/Rectangle;II)Z", nullptr, 0, $method(static_cast<bool(ListHelper::*)($Rectangle*,int32_t,int32_t)>(&ListHelper::isInHorizSB))},
	{"isInVertSB", "(Ljava/awt/Rectangle;II)Z", nullptr, 0, $method(static_cast<bool(ListHelper::*)($Rectangle*,int32_t,int32_t)>(&ListHelper::isInVertSB))},
	{"isItemSelected", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(ListHelper::*)(int32_t)>(&ListHelper::isItemSelected))},
	{"isVSBVisible", "()Z", nullptr, 0, $method(static_cast<bool(ListHelper::*)()>(&ListHelper::isVSBVisible))},
	{"lastDisplayedIndex", "()I", nullptr, 0, $method(static_cast<int32_t(ListHelper::*)()>(&ListHelper::lastDisplayedIndex))},
	{"makeVisible", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(ListHelper::*)(int32_t)>(&ListHelper::makeVisible))},
	{"notifyValue", "(Lsun/awt/X11/XScrollbar;IIZ)V", nullptr, $PUBLIC},
	{"pageDown", "()V", nullptr, 0, $method(static_cast<void(ListHelper::*)()>(&ListHelper::pageDown))},
	{"pageUp", "()V", nullptr, 0, $method(static_cast<void(ListHelper::*)()>(&ListHelper::pageUp))},
	{"paintAllItems", "(Ljava/awt/Graphics;[Ljava/awt/Color;Ljava/awt/Rectangle;)V", nullptr, 0, $method(static_cast<void(ListHelper::*)($Graphics*,$ColorArray*,$Rectangle*)>(&ListHelper::paintAllItems))},
	{"paintHSB", "(Ljava/awt/Graphics;[Ljava/awt/Color;Ljava/awt/Rectangle;)V", nullptr, $PRIVATE, $method(static_cast<void(ListHelper::*)($Graphics*,$ColorArray*,$Rectangle*)>(&ListHelper::paintHSB))},
	{"paintItem", "(Ljava/awt/Graphics;[Ljava/awt/Color;Ljava/lang/String;IIIIZZ)V", nullptr, $PRIVATE, $method(static_cast<void(ListHelper::*)($Graphics*,$ColorArray*,$String*,int32_t,int32_t,int32_t,int32_t,bool,bool)>(&ListHelper::paintItem))},
	{"paintItems", "(Ljava/awt/Graphics;[Ljava/awt/Color;Ljava/awt/Rectangle;)V", nullptr, 0, $method(static_cast<void(ListHelper::*)($Graphics*,$ColorArray*,$Rectangle*)>(&ListHelper::paintItems))},
	{"paintItems", "(Ljava/awt/Graphics;[Ljava/awt/Color;Ljava/awt/Rectangle;II)V", nullptr, $PRIVATE, $method(static_cast<void(ListHelper::*)($Graphics*,$ColorArray*,$Rectangle*,int32_t,int32_t)>(&ListHelper::paintItems))},
	{"paintVSB", "(Ljava/awt/Graphics;[Ljava/awt/Color;Ljava/awt/Rectangle;)V", nullptr, $PRIVATE, $method(static_cast<void(ListHelper::*)($Graphics*,$ColorArray*,$Rectangle*)>(&ListHelper::paintVSB))},
	{"remove", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(ListHelper::*)($String*)>(&ListHelper::remove))},
	{"remove", "(I)V", nullptr, 0, $method(static_cast<void(ListHelper::*)(int32_t)>(&ListHelper::remove))},
	{"removeAll", "()V", nullptr, 0, $method(static_cast<void(ListHelper::*)()>(&ListHelper::removeAll))},
	{"repaintScrollbarRequest", "(Lsun/awt/X11/XScrollbar;)V", nullptr, $PUBLIC},
	{"select", "(I)V", nullptr, 0, $method(static_cast<void(ListHelper::*)(int32_t)>(&ListHelper::select))},
	{"setFocusedIndex", "(I)V", nullptr, 0, $method(static_cast<void(ListHelper::*)(int32_t)>(&ListHelper::setFocusedIndex))},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, 0, $method(static_cast<void(ListHelper::*)($Font*)>(&ListHelper::setFont))},
	{"setMultiSelect", "(Z)V", nullptr, 0, $method(static_cast<void(ListHelper::*)(bool)>(&ListHelper::setMultiSelect))},
	{"trackMouseDraggedScroll", "(IIII)V", nullptr, 0, $method(static_cast<void(ListHelper::*)(int32_t,int32_t,int32_t,int32_t)>(&ListHelper::trackMouseDraggedScroll))},
	{"trackMouseReleasedScroll", "()V", nullptr, 0, $method(static_cast<void(ListHelper::*)()>(&ListHelper::trackMouseReleasedScroll))},
	{"up", "()V", nullptr, 0, $method(static_cast<void(ListHelper::*)()>(&ListHelper::up))},
	{"updateColors", "([Ljava/awt/Color;)V", nullptr, 0, $method(static_cast<void(ListHelper::*)($ColorArray*)>(&ListHelper::updateColors))},
	{"updateScrollbars", "()V", nullptr, $PRIVATE, $method(static_cast<void(ListHelper::*)()>(&ListHelper::updateScrollbars))},
	{"y2index", "(I)I", nullptr, 0, $method(static_cast<int32_t(ListHelper::*)(int32_t)>(&ListHelper::y2index))},
	{}
};

$ClassInfo _ListHelper_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.ListHelper",
	"java.lang.Object",
	"sun.awt.X11.XScrollbarClient",
	_ListHelper_FieldInfo_,
	_ListHelper_MethodInfo_
};

$Object* allocate$ListHelper($Class* clazz) {
	return $of($alloc(ListHelper));
}

bool ListHelper::$assertionsDisabled = false;
$PlatformLogger* ListHelper::log = nullptr;

void ListHelper::init$($XWindow* peer, $ColorArray* colors, int32_t initialSize, bool multiSelect, bool scrollVert, bool scrollHoriz, $Font* font, int32_t maxVisItems, int32_t SPACE, int32_t MARGIN, int32_t BORDER, int32_t SCROLLBAR) {
	this->mouseDraggedOutVertically = false;
	this->vsbVisibilityChanged = false;
	$set(this, peer, peer);
	$set(this, colors, colors);
	this->multiSelect = multiSelect;
	$set(this, items, $new($ArrayList, initialSize));
	$set(this, selected, $new($ArrayList, 1));
	$nc(this->selected)->add($($Integer::valueOf(-1)));
	this->maxVisItems = maxVisItems;
	if (scrollVert) {
		$set(this, vsb, $new($XVerticalScrollbar, this));
		$nc(this->vsb)->setValues(0, 0, 0, 0, 1, maxVisItems - 1);
	}
	if (scrollHoriz) {
		$set(this, hsb, $new($XHorizontalScrollbar, this));
		$nc(this->hsb)->setValues(0, 0, 0, 0, 1, 1);
	}
	setFont(font);
	this->TEXT_SPACE = SPACE;
	this->ITEM_MARGIN = MARGIN;
	this->BORDER_WIDTH = BORDER;
	this->SCROLLBAR_WIDTH = SCROLLBAR;
}

$Component* ListHelper::getEventSource() {
	return $nc(this->peer)->getEventSource();
}

void ListHelper::add($String* item) {
	$nc(this->items)->add(item);
	updateScrollbars();
}

void ListHelper::add($String* item, int32_t index) {
	$nc(this->items)->add(index, item);
	updateScrollbars();
}

void ListHelper::remove($String* item) {
	$nc(this->items)->remove($of(item));
	updateScrollbars();
}

void ListHelper::remove(int32_t index) {
	$nc(this->items)->remove(index);
	updateScrollbars();
}

void ListHelper::removeAll() {
	$nc(this->items)->clear();
	updateScrollbars();
}

void ListHelper::setMultiSelect(bool ms) {
	this->multiSelect = ms;
}

void ListHelper::select(int32_t index) {
	if (index > getItemCount() - 1) {
		index = (isEmpty() ? -1 : 0);
	}
	if (this->multiSelect) {
		if (!ListHelper::$assertionsDisabled) {
			$throwNew($AssertionError, $of("Implement ListHelper.select() for multiselect"_s));
		}
	} else if (getSelectedIndex() != index) {
		$nc(this->selected)->remove(0);
		$nc(this->selected)->add($($Integer::valueOf(index)));
		makeVisible(index);
	}
}

void ListHelper::deselect(int32_t index) {
	if (!ListHelper::$assertionsDisabled) {
		$throwNew($AssertionError);
	}
}

int32_t ListHelper::getSelectedIndex() {
	if (!this->multiSelect) {
		$var($Integer, val, $cast($Integer, $nc(this->selected)->get(0)));
		return $nc(val)->intValue();
	}
	return -1;
}

$ints* ListHelper::getSelectedIndexes() {
	if (!ListHelper::$assertionsDisabled) {
		$throwNew($AssertionError);
	}
	return nullptr;
}

bool ListHelper::checkVsbVisibilityChangedAndReset() {
	bool returnVal = this->vsbVisibilityChanged;
	this->vsbVisibilityChanged = false;
	return returnVal;
}

bool ListHelper::isEmpty() {
	return $nc(this->items)->isEmpty();
}

int32_t ListHelper::getItemCount() {
	return $nc(this->items)->size();
}

$String* ListHelper::getItem(int32_t index) {
	return $cast($String, $nc(this->items)->get(index));
}

void ListHelper::setFocusedIndex(int32_t index) {
	this->focusedIndex = index;
}

bool ListHelper::isFocusedIndex(int32_t index) {
	return index == this->focusedIndex;
}

void ListHelper::setFont($Font* newFont) {
	if (newFont != this->font) {
		$set(this, font, newFont);
		$set(this, fm, $nc($($Toolkit::getDefaultToolkit()))->getFontMetrics(this->font));
	}
}

int32_t ListHelper::getMaxItemWidth() {
	$useLocalCurrentObjectStackCache();
	int32_t m = 0;
	int32_t end = getItemCount();
	for (int32_t i = 0; i < end; ++i) {
		int32_t l = $nc(this->fm)->stringWidth($(getItem(i)));
		m = $Math::max(m, l);
	}
	return m;
}

int32_t ListHelper::getItemHeight() {
	return $nc(this->fm)->getHeight() + (2 * this->TEXT_SPACE);
}

int32_t ListHelper::y2index(int32_t y) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(ListHelper::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$var($String, var$2, $$str({"y="_s, $$str(y), ", firstIdx="_s, $$str(firstDisplayedIndex()), ", itemHeight="_s}));
		$var($String, var$1, $$concat(var$2, $$str(getItemHeight())));
		$var($String, var$0, $$concat(var$1, ",item_margin="_s));
		$nc(ListHelper::log)->fine($$concat(var$0, $$str(this->ITEM_MARGIN)));
	}
	int32_t var$3 = firstDisplayedIndex();
	int32_t newIdx = var$3 + ($div((y - 2 * this->ITEM_MARGIN), (getItemHeight() + 2 * this->ITEM_MARGIN)));
	return newIdx;
}

int32_t ListHelper::firstDisplayedIndex() {
	if (this->vsbVis) {
		return $nc(this->vsb)->getValue();
	}
	return 0;
}

int32_t ListHelper::lastDisplayedIndex() {
	if (this->hsbVis) {
		if (!ListHelper::$assertionsDisabled) {
			$throwNew($AssertionError, $of("Implement for horiz scroll bar"_s));
		}
	}
	return this->vsbVis ? $nc(this->vsb)->getValue() + this->maxVisItems - 1 : getItemCount() - 1;
}

void ListHelper::makeVisible(int32_t index) {
	if (this->vsbVis) {
		if (index < firstDisplayedIndex()) {
			$nc(this->vsb)->setValue(index);
		} else if (index > lastDisplayedIndex()) {
			$nc(this->vsb)->setValue(index - this->maxVisItems + 1);
		}
	}
}

void ListHelper::up() {
	int32_t curIdx = getSelectedIndex();
	int32_t numItems = getItemCount();
	int32_t newIdx = 0;
	if (!ListHelper::$assertionsDisabled && !(curIdx >= 0)) {
		$throwNew($AssertionError);
	}
	if (curIdx == 0) {
		newIdx = numItems - 1;
	} else {
		newIdx = --curIdx;
	}
	select(newIdx);
}

void ListHelper::down() {
	int32_t var$0 = (getSelectedIndex() + 1);
	int32_t newIdx = $mod(var$0, getItemCount());
	select(newIdx);
}

void ListHelper::pageUp() {
	if (this->vsbVis && firstDisplayedIndex() > 0) {
		if (this->multiSelect) {
			if (!ListHelper::$assertionsDisabled) {
				$throwNew($AssertionError, $of("Implement pageUp() for multiSelect"_s));
			}
		} else {
			int32_t var$0 = getSelectedIndex();
			int32_t selectionOffset = var$0 - firstDisplayedIndex();
			int32_t var$1 = firstDisplayedIndex();
			int32_t newIdx = var$1 - $nc(this->vsb)->getBlockIncrement();
			$nc(this->vsb)->setValue(newIdx);
			select(firstDisplayedIndex() + selectionOffset);
		}
	}
}

void ListHelper::pageDown() {
	bool var$0 = this->vsbVis;
	if (var$0) {
		int32_t var$1 = lastDisplayedIndex();
		var$0 = var$1 < getItemCount() - 1;
	}
	if (var$0) {
		if (this->multiSelect) {
			if (!ListHelper::$assertionsDisabled) {
				$throwNew($AssertionError, $of("Implement pageDown() for multiSelect"_s));
			}
		} else {
			int32_t var$2 = getSelectedIndex();
			int32_t selectionOffset = var$2 - firstDisplayedIndex();
			int32_t newIdx = lastDisplayedIndex();
			$nc(this->vsb)->setValue(newIdx);
			select(firstDisplayedIndex() + selectionOffset);
		}
	}
}

void ListHelper::home() {
}

void ListHelper::end() {
}

bool ListHelper::isVSBVisible() {
	return this->vsbVis;
}

bool ListHelper::isHSBVisible() {
	return this->hsbVis;
}

$XVerticalScrollbar* ListHelper::getVSB() {
	return this->vsb;
}

$XHorizontalScrollbar* ListHelper::getHSB() {
	return this->hsb;
}

bool ListHelper::isInVertSB($Rectangle* bounds, int32_t x, int32_t y) {
	if (this->vsbVis) {
		if (!ListHelper::$assertionsDisabled && !(this->vsb != nullptr)) {
			$throwNew($AssertionError, $of("Vert scrollbar is visible, yet is null?"_s));
		}
		int32_t sbHeight = this->hsbVis ? $nc(bounds)->height - this->SCROLLBAR_WIDTH : bounds->height;
		return (x <= bounds->width) && (x >= bounds->width - this->SCROLLBAR_WIDTH) && (y >= 0) && (y <= sbHeight);
	}
	return false;
}

bool ListHelper::isInHorizSB($Rectangle* bounds, int32_t x, int32_t y) {
	if (this->hsbVis) {
		if (!ListHelper::$assertionsDisabled && !(this->hsb != nullptr)) {
			$throwNew($AssertionError, $of("Horiz scrollbar is visible, yet is null?"_s));
		}
		int32_t sbWidth = this->vsbVis ? $nc(bounds)->width - this->SCROLLBAR_WIDTH : bounds->width;
		return (x <= sbWidth) && (x >= 0) && (y >= bounds->height - this->SCROLLBAR_WIDTH) && (y <= bounds->height);
	}
	return false;
}

void ListHelper::handleVSBEvent($MouseEvent* e, $Rectangle* bounds, int32_t x, int32_t y) {
	int32_t sbHeight = this->hsbVis ? $nc(bounds)->height - this->SCROLLBAR_WIDTH : bounds->height;
	int32_t var$0 = $nc(e)->getID();
	$nc(this->vsb)->handleMouseEvent(var$0, e->getModifiers(), x - (bounds->width - this->SCROLLBAR_WIDTH), y);
}

void ListHelper::updateScrollbars() {
	bool oldVsbVis = this->vsbVis;
	this->vsbVis = this->vsb != nullptr && $nc(this->items)->size() > this->maxVisItems;
	if (this->vsbVis) {
		int32_t var$0 = $nc(this->vsb)->getValue();
		int32_t var$1 = getNumItemsDisplayed();
		int32_t var$2 = $nc(this->vsb)->getMinimum();
		$nc(this->vsb)->setValues(var$0, var$1, var$2, $nc(this->items)->size());
	}
	this->vsbVisibilityChanged = (this->vsbVis != oldVsbVis);
}

int32_t ListHelper::getNumItemsDisplayed() {
	return $nc(this->items)->size() > this->maxVisItems ? this->maxVisItems : $nc(this->items)->size();
}

void ListHelper::repaintScrollbarRequest($XScrollbar* sb) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, g, $nc(this->peer)->getGraphics());
	$var($Rectangle, bounds, $nc(this->peer)->getBounds());
	if (($equals(sb, this->vsb)) && this->vsbVis) {
		paintVSB(g, $($XComponentPeer::getSystemColors()), bounds);
	} else if (($equals(sb, this->hsb)) && this->hsbVis) {
		paintHSB(g, $($XComponentPeer::getSystemColors()), bounds);
	}
	$nc(g)->dispose();
}

void ListHelper::notifyValue($XScrollbar* obj, int32_t type, int32_t v, bool isAdjusting) {
	$useLocalCurrentObjectStackCache();
	if ($equals(obj, this->vsb)) {
		int32_t oldScrollValue = $nc(this->vsb)->getValue();
		$nc(this->vsb)->setValue(v);
		bool needRepaint = (oldScrollValue != $nc(this->vsb)->getValue());
		if (this->mouseDraggedOutVertically) {
			int32_t oldItemValue = getSelectedIndex();
			int32_t newItemValue = getSelectedIndex() + v - oldScrollValue;
			select(newItemValue);
			needRepaint = needRepaint || (getSelectedIndex() != oldItemValue);
		}
		$var($Graphics, g, $nc(this->peer)->getGraphics());
		$var($Rectangle, bounds, $nc(this->peer)->getBounds());
		int32_t first = v;
		int32_t last = $Math::min(getItemCount() - 1, v + this->maxVisItems);
		if (needRepaint) {
			paintItems(g, this->colors, bounds, first, last);
		}
		$nc(g)->dispose();
	} else if ($cast($XHorizontalScrollbar, obj) == this->hsb) {
		$nc(this->hsb)->setValue(v);
	}
}

void ListHelper::updateColors($ColorArray* newColors) {
	$set(this, colors, newColors);
}

void ListHelper::paintItems($Graphics* g, $ColorArray* colors, $Rectangle* bounds) {
}

void ListHelper::paintAllItems($Graphics* g, $ColorArray* colors, $Rectangle* bounds) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, var$0, g);
	$var($ColorArray, var$1, colors);
	$var($Rectangle, var$2, bounds);
	int32_t var$3 = firstDisplayedIndex();
	paintItems(var$0, var$1, var$2, var$3, lastDisplayedIndex());
}

void ListHelper::paintItems($Graphics* g, $ColorArray* colors, $Rectangle* bounds, int32_t first, int32_t last) {
	$useLocalCurrentObjectStackCache();
	$nc(this->peer)->flush();
	int32_t x = this->BORDER_WIDTH + this->ITEM_MARGIN;
	int32_t width = $nc(bounds)->width - 2 * this->ITEM_MARGIN - 2 * this->BORDER_WIDTH - (this->vsbVis ? this->SCROLLBAR_WIDTH : 0);
	int32_t height = getItemHeight();
	int32_t y = this->BORDER_WIDTH + this->ITEM_MARGIN;
	for (int32_t i = first; i <= last; ++i) {
		$var($Graphics, var$0, g);
		$var($ColorArray, var$1, colors);
		$var($String, var$2, getItem(i));
		int32_t var$3 = x;
		int32_t var$4 = y;
		int32_t var$5 = width;
		int32_t var$6 = height;
		bool var$7 = isItemSelected(i);
		paintItem(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, isFocusedIndex(i));
		y += height + 2 * this->ITEM_MARGIN;
	}
	if (this->vsbVis) {
		paintVSB(g, $($XComponentPeer::getSystemColors()), bounds);
	}
	if (this->hsbVis) {
		paintHSB(g, $($XComponentPeer::getSystemColors()), bounds);
	}
	$nc(this->peer)->flush();
}

void ListHelper::paintItem($Graphics* g, $ColorArray* colors, $String* string, int32_t x, int32_t y, int32_t width, int32_t height, bool selected, bool focused) {
	if (selected) {
		$nc(g)->setColor($nc(colors)->get($XComponentPeer::FOREGROUND_COLOR));
	} else {
		$nc(g)->setColor($nc(colors)->get($XComponentPeer::BACKGROUND_COLOR));
	}
	$nc(g)->fillRect(x, y, width, height);
	if (focused) {
		$init($Color);
		g->setColor($Color::BLACK);
		g->drawRect(x + ListHelper::FOCUS_INSET, y + ListHelper::FOCUS_INSET, width - 2 * ListHelper::FOCUS_INSET, height - 2 * ListHelper::FOCUS_INSET);
	}
	if (selected) {
		g->setColor($nc(colors)->get($XComponentPeer::BACKGROUND_COLOR));
	} else {
		g->setColor($nc(colors)->get($XComponentPeer::FOREGROUND_COLOR));
	}
	g->setFont(this->font);
	int32_t fontAscent = $nc(this->fm)->getAscent();
	int32_t fontDescent = $nc(this->fm)->getDescent();
	int32_t var$0 = y;
	int32_t var$2 = height + $nc(this->fm)->getMaxAscent();
	int32_t var$1 = (var$2 - $nc(this->fm)->getMaxDescent()) / 2;
	g->drawString(string, x + this->TEXT_SPACE, var$0 + var$1);
}

bool ListHelper::isItemSelected(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, itr, $nc(this->selected)->iterator());
	while ($nc(itr)->hasNext()) {
		$var($Integer, val, $cast($Integer, itr->next()));
		if ($nc(val)->intValue() == index) {
			return true;
		}
	}
	return false;
}

void ListHelper::paintVSB($Graphics* g, $ColorArray* colors, $Rectangle* bounds) {
	$useLocalCurrentObjectStackCache();
	int32_t height = $nc(bounds)->height - 2 * this->BORDER_WIDTH - (this->hsbVis ? (this->SCROLLBAR_WIDTH - 2) : 0);
	$var($Graphics, ng, $nc(g)->create());
	g->setColor($nc(colors)->get($XComponentPeer::BACKGROUND_COLOR));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(ng)->translate(bounds->width - this->BORDER_WIDTH - this->SCROLLBAR_WIDTH, this->BORDER_WIDTH);
			$nc(this->vsb)->setSize(this->SCROLLBAR_WIDTH, bounds->height);
			$nc(this->vsb)->paint(ng, colors, true);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(ng)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ListHelper::paintHSB($Graphics* g, $ColorArray* colors, $Rectangle* bounds) {
}

bool ListHelper::doWheelScroll($XVerticalScrollbar* vsb, $XHorizontalScrollbar* hsb, $MouseWheelEvent* e) {
	$init(ListHelper);
	$var($XScrollbar, scroll, nullptr);
	int32_t wheelRotation = 0;
	if (vsb != nullptr) {
		$assign(scroll, vsb);
	} else if (hsb != nullptr) {
		$assign(scroll, hsb);
	} else {
		return false;
	}
	wheelRotation = $nc(e)->getWheelRotation();
	bool var$1 = wheelRotation < 0;
	if (var$1) {
		int32_t var$2 = $nc(scroll)->getValue();
		var$1 = var$2 > scroll->getMinimum();
	}
	bool var$0 = (var$1);
	if (!var$0) {
		bool var$3 = wheelRotation > 0;
		if (var$3) {
			int32_t var$4 = $nc(scroll)->getValue();
			var$3 = var$4 < scroll->getMaximum();
		}
		var$0 = (var$3);
	}
	if (var$0 || wheelRotation != 0) {
		int32_t type = e->getScrollType();
		int32_t incr = 0;
		if (type == $MouseWheelEvent::WHEEL_BLOCK_SCROLL) {
			incr = wheelRotation * $nc(scroll)->getBlockIncrement();
		} else {
			int32_t var$5 = e->getUnitsToScroll();
			incr = var$5 * $nc(scroll)->getUnitIncrement();
		}
		$nc(scroll)->setValue(scroll->getValue() + incr);
		return true;
	}
	return false;
}

void ListHelper::trackMouseDraggedScroll(int32_t mouseX, int32_t mouseY, int32_t listWidth, int32_t listHeight) {
	if (!this->mouseDraggedOutVertically) {
		if ($nc(this->vsb)->beforeThumb(mouseX, mouseY)) {
			$nc(this->vsb)->setMode($AdjustmentEvent::UNIT_DECREMENT);
		} else {
			$nc(this->vsb)->setMode($AdjustmentEvent::UNIT_INCREMENT);
		}
	}
	if (!this->mouseDraggedOutVertically && (mouseY < 0 || mouseY >= listHeight)) {
		this->mouseDraggedOutVertically = true;
		$nc(this->vsb)->startScrollingInstance();
	}
	if (this->mouseDraggedOutVertically && mouseY >= 0 && mouseY < listHeight && mouseX >= 0 && mouseX < listWidth) {
		this->mouseDraggedOutVertically = false;
		$nc(this->vsb)->stopScrollingInstance();
	}
}

void ListHelper::trackMouseReleasedScroll() {
	if (this->mouseDraggedOutVertically) {
		this->mouseDraggedOutVertically = false;
		$nc(this->vsb)->stopScrollingInstance();
	}
}

void clinit$ListHelper($Class* class$) {
	ListHelper::$assertionsDisabled = !ListHelper::class$->desiredAssertionStatus();
	$assignStatic(ListHelper::log, $PlatformLogger::getLogger("sun.awt.X11.ListHelper"_s));
}

ListHelper::ListHelper() {
}

$Class* ListHelper::load$($String* name, bool initialize) {
	$loadClass(ListHelper, name, initialize, &_ListHelper_ClassInfo_, clinit$ListHelper, allocate$ListHelper);
	return class$;
}

$Class* ListHelper::class$ = nullptr;

		} // X11
	} // awt
} // sun