#include <sun/awt/ScrollPaneWheelScroller.h>

#include <java/awt/Adjustable.h>
#include <java/awt/Insets.h>
#include <java/awt/ScrollPane.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/util/EventObject.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE
#undef FINER
#undef SCROLLBARS_ALWAYS
#undef SCROLLBARS_NEVER
#undef WHEEL_BLOCK_SCROLL
#undef WHEEL_UNIT_SCROLL

using $Adjustable = ::java::awt::Adjustable;
using $Insets = ::java::awt::Insets;
using $ScrollPane = ::java::awt::ScrollPane;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {

$FieldInfo _ScrollPaneWheelScroller_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ScrollPaneWheelScroller, log)},
	{}
};

$MethodInfo _ScrollPaneWheelScroller_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ScrollPaneWheelScroller::*)()>(&ScrollPaneWheelScroller::init$))},
	{"getAdjustableToScroll", "(Ljava/awt/ScrollPane;)Ljava/awt/Adjustable;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Adjustable*(*)($ScrollPane*)>(&ScrollPaneWheelScroller::getAdjustableToScroll))},
	{"getIncrementFromAdjustable", "(Ljava/awt/Adjustable;Ljava/awt/event/MouseWheelEvent;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Adjustable*,$MouseWheelEvent*)>(&ScrollPaneWheelScroller::getIncrementFromAdjustable))},
	{"handleWheelScrolling", "(Ljava/awt/ScrollPane;Ljava/awt/event/MouseWheelEvent;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ScrollPane*,$MouseWheelEvent*)>(&ScrollPaneWheelScroller::handleWheelScrolling))},
	{"scrollAdjustable", "(Ljava/awt/Adjustable;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Adjustable*,int32_t)>(&ScrollPaneWheelScroller::scrollAdjustable))},
	{}
};

$ClassInfo _ScrollPaneWheelScroller_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.ScrollPaneWheelScroller",
	"java.lang.Object",
	nullptr,
	_ScrollPaneWheelScroller_FieldInfo_,
	_ScrollPaneWheelScroller_MethodInfo_
};

$Object* allocate$ScrollPaneWheelScroller($Class* clazz) {
	return $of($alloc(ScrollPaneWheelScroller));
}

$PlatformLogger* ScrollPaneWheelScroller::log = nullptr;

void ScrollPaneWheelScroller::init$() {
}

void ScrollPaneWheelScroller::handleWheelScrolling($ScrollPane* sp, $MouseWheelEvent* e) {
	$init(ScrollPaneWheelScroller);
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(ScrollPaneWheelScroller::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$var($String, var$2, $$str({"x = "_s, $$str($nc(e)->getX()), ", y = "_s}));
		$var($String, var$1, $$concat(var$2, $$str(e->getY())));
		$var($String, var$0, $$concat(var$1, ", src is "_s));
		$nc(ScrollPaneWheelScroller::log)->finer($$concat(var$0, $(e->getSource())));
	}
	int32_t increment = 0;
	if (sp != nullptr && $nc(e)->getScrollAmount() != 0) {
		$var($Adjustable, adj, getAdjustableToScroll(sp));
		if (adj != nullptr) {
			increment = getIncrementFromAdjustable(adj, e);
			if ($nc(ScrollPaneWheelScroller::log)->isLoggable($PlatformLogger$Level::FINER)) {
				$nc(ScrollPaneWheelScroller::log)->finer($$str({"increment from adjustable("_s, $of(adj)->getClass(), ") : "_s, $$str(increment)}));
			}
			scrollAdjustable(adj, increment);
		}
	}
}

$Adjustable* ScrollPaneWheelScroller::getAdjustableToScroll($ScrollPane* sp) {
	$init(ScrollPaneWheelScroller);
	$useLocalCurrentObjectStackCache();
	int32_t policy = $nc(sp)->getScrollbarDisplayPolicy();
	if (policy == $ScrollPane::SCROLLBARS_ALWAYS || policy == $ScrollPane::SCROLLBARS_NEVER) {
		$init($PlatformLogger$Level);
		if ($nc(ScrollPaneWheelScroller::log)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(ScrollPaneWheelScroller::log)->finer("using vertical scrolling due to scrollbar policy"_s);
		}
		return sp->getVAdjustable();
	} else {
		$var($Insets, ins, sp->getInsets());
		int32_t vertScrollWidth = sp->getVScrollbarWidth();
		$init($PlatformLogger$Level);
		if ($nc(ScrollPaneWheelScroller::log)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(ScrollPaneWheelScroller::log)->finer($$str({"insets: l = "_s, $$str($nc(ins)->left), ", r = "_s, $$str(ins->right), ", t = "_s, $$str(ins->top), ", b = "_s, $$str(ins->bottom)}));
			$nc(ScrollPaneWheelScroller::log)->finer($$str({"vertScrollWidth = "_s, $$str(vertScrollWidth)}));
		}
		if ($nc(ins)->right >= vertScrollWidth) {
			if ($nc(ScrollPaneWheelScroller::log)->isLoggable($PlatformLogger$Level::FINER)) {
				$nc(ScrollPaneWheelScroller::log)->finer("using vertical scrolling because scrollbar is present"_s);
			}
			return sp->getVAdjustable();
		} else {
			int32_t horizScrollHeight = sp->getHScrollbarHeight();
			if (ins->bottom >= horizScrollHeight) {
				if ($nc(ScrollPaneWheelScroller::log)->isLoggable($PlatformLogger$Level::FINER)) {
					$nc(ScrollPaneWheelScroller::log)->finer("using horiz scrolling because scrollbar is present"_s);
				}
				return sp->getHAdjustable();
			} else {
				if ($nc(ScrollPaneWheelScroller::log)->isLoggable($PlatformLogger$Level::FINER)) {
					$nc(ScrollPaneWheelScroller::log)->finer("using NO scrollbar becsause neither is present"_s);
				}
				return nullptr;
			}
		}
	}
}

int32_t ScrollPaneWheelScroller::getIncrementFromAdjustable($Adjustable* adj, $MouseWheelEvent* e) {
	$init(ScrollPaneWheelScroller);
	$init($PlatformLogger$Level);
	if ($nc(ScrollPaneWheelScroller::log)->isLoggable($PlatformLogger$Level::FINE)) {
		if (adj == nullptr) {
			$nc(ScrollPaneWheelScroller::log)->fine("Assertion (adj != null) failed"_s);
		}
	}
	int32_t increment = 0;
	if ($nc(e)->getScrollType() == $MouseWheelEvent::WHEEL_UNIT_SCROLL) {
		int32_t var$0 = e->getUnitsToScroll();
		increment = var$0 * $nc(adj)->getUnitIncrement();
	} else if (e->getScrollType() == $MouseWheelEvent::WHEEL_BLOCK_SCROLL) {
		int32_t var$1 = $nc(adj)->getBlockIncrement();
		increment = var$1 * e->getWheelRotation();
	}
	return increment;
}

void ScrollPaneWheelScroller::scrollAdjustable($Adjustable* adj, int32_t amount) {
	$init(ScrollPaneWheelScroller);
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(ScrollPaneWheelScroller::log)->isLoggable($PlatformLogger$Level::FINE)) {
		if (adj == nullptr) {
			$nc(ScrollPaneWheelScroller::log)->fine("Assertion (adj != null) failed"_s);
		}
		if (amount == 0) {
			$nc(ScrollPaneWheelScroller::log)->fine("Assertion (amount != 0) failed"_s);
		}
	}
	int32_t current = $nc(adj)->getValue();
	int32_t var$0 = adj->getMaximum();
	int32_t upperLimit = var$0 - adj->getVisibleAmount();
	if ($nc(ScrollPaneWheelScroller::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(ScrollPaneWheelScroller::log)->finer($$str({"doScrolling by "_s, $$str(amount)}));
	}
	if (amount > 0 && current < upperLimit) {
		if (current + amount < upperLimit) {
			adj->setValue(current + amount);
			return;
		} else {
			adj->setValue(upperLimit);
			return;
		}
	} else if (amount < 0 && current > adj->getMinimum()) {
		if (current + amount > adj->getMinimum()) {
			adj->setValue(current + amount);
			return;
		} else {
			adj->setValue(adj->getMinimum());
			return;
		}
	}
}

void clinit$ScrollPaneWheelScroller($Class* class$) {
	$assignStatic(ScrollPaneWheelScroller::log, $PlatformLogger::getLogger("sun.awt.ScrollPaneWheelScroller"_s));
}

ScrollPaneWheelScroller::ScrollPaneWheelScroller() {
}

$Class* ScrollPaneWheelScroller::load$($String* name, bool initialize) {
	$loadClass(ScrollPaneWheelScroller, name, initialize, &_ScrollPaneWheelScroller_ClassInfo_, clinit$ScrollPaneWheelScroller, allocate$ScrollPaneWheelScroller);
	return class$;
}

$Class* ScrollPaneWheelScroller::class$ = nullptr;

	} // awt
} // sun