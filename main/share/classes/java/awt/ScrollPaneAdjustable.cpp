#include <java/awt/ScrollPaneAdjustable.h>

#include <java/awt/AWTError.h>
#include <java/awt/AWTEventMulticaster.h>
#include <java/awt/Adjustable.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/ScrollPane.h>
#include <java/awt/ScrollPaneAdjustable$1.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <java/awt/event/AdjustmentListener.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ScrollPanePeer.h>
#include <java/lang/Math.h>
#include <java/util/EventListener.h>
#include <sun/awt/AWTAccessor$ScrollPaneAdjustableAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

#undef ADJUSTMENT_VALUE_CHANGED
#undef SCROLLPANE_ONLY
#undef TRACK
#undef VERTICAL

using $AdjustmentListenerArray = $Array<::java::awt::event::AdjustmentListener>;
using $AWTError = ::java::awt::AWTError;
using $AWTEventMulticaster = ::java::awt::AWTEventMulticaster;
using $Adjustable = ::java::awt::Adjustable;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $ScrollPane = ::java::awt::ScrollPane;
using $ScrollPaneAdjustable$1 = ::java::awt::ScrollPaneAdjustable$1;
using $Toolkit = ::java::awt::Toolkit;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $AdjustmentListener = ::java::awt::event::AdjustmentListener;
using $ScrollPanePeer = ::java::awt::peer::ScrollPanePeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ScrollPaneAdjustableAccessor = ::sun::awt::AWTAccessor$ScrollPaneAdjustableAccessor;

namespace java {
	namespace awt {

$FieldInfo _ScrollPaneAdjustable_FieldInfo_[] = {
	{"sp", "Ljava/awt/ScrollPane;", nullptr, $PRIVATE, $field(ScrollPaneAdjustable, sp)},
	{"orientation", "I", nullptr, $PRIVATE, $field(ScrollPaneAdjustable, orientation)},
	{"value", "I", nullptr, $PRIVATE, $field(ScrollPaneAdjustable, value)},
	{"minimum", "I", nullptr, $PRIVATE, $field(ScrollPaneAdjustable, minimum)},
	{"maximum", "I", nullptr, $PRIVATE, $field(ScrollPaneAdjustable, maximum)},
	{"visibleAmount", "I", nullptr, $PRIVATE, $field(ScrollPaneAdjustable, visibleAmount)},
	{"isAdjusting", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(ScrollPaneAdjustable, isAdjusting)},
	{"unitIncrement", "I", nullptr, $PRIVATE, $field(ScrollPaneAdjustable, unitIncrement)},
	{"blockIncrement", "I", nullptr, $PRIVATE, $field(ScrollPaneAdjustable, blockIncrement)},
	{"adjustmentListener", "Ljava/awt/event/AdjustmentListener;", nullptr, $PRIVATE, $field(ScrollPaneAdjustable, adjustmentListener)},
	{"SCROLLPANE_ONLY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ScrollPaneAdjustable, SCROLLPANE_ONLY)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ScrollPaneAdjustable, serialVersionUID)},
	{}
};

$MethodInfo _ScrollPaneAdjustable_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/ScrollPane;Ljava/awt/event/AdjustmentListener;I)V", nullptr, 0, $method(static_cast<void(ScrollPaneAdjustable::*)($ScrollPane*,$AdjustmentListener*,int32_t)>(&ScrollPaneAdjustable::init$))},
	{"addAdjustmentListener", "(Ljava/awt/event/AdjustmentListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getAdjustmentListeners", "()[Ljava/awt/event/AdjustmentListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getBlockIncrement", "()I", nullptr, $PUBLIC},
	{"getMaximum", "()I", nullptr, $PUBLIC},
	{"getMinimum", "()I", nullptr, $PUBLIC},
	{"getOrientation", "()I", nullptr, $PUBLIC},
	{"getUnitIncrement", "()I", nullptr, $PUBLIC},
	{"getValue", "()I", nullptr, $PUBLIC},
	{"getValueIsAdjusting", "()Z", nullptr, $PUBLIC},
	{"getVisibleAmount", "()I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&ScrollPaneAdjustable::initIDs))},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"removeAdjustmentListener", "(Ljava/awt/event/AdjustmentListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setBlockIncrement", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setMaximum", "(I)V", nullptr, $PUBLIC},
	{"setMinimum", "(I)V", nullptr, $PUBLIC},
	{"setSpan", "(III)V", nullptr, 0},
	{"setTypedValue", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(ScrollPaneAdjustable::*)(int32_t,int32_t)>(&ScrollPaneAdjustable::setTypedValue))},
	{"setUnitIncrement", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setValue", "(I)V", nullptr, $PUBLIC},
	{"setValueIsAdjusting", "(Z)V", nullptr, $PUBLIC},
	{"setVisibleAmount", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 15

$InnerClassInfo _ScrollPaneAdjustable_InnerClassesInfo_[] = {
	{"java.awt.ScrollPaneAdjustable$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ScrollPaneAdjustable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.ScrollPaneAdjustable",
	"java.lang.Object",
	"java.awt.Adjustable,java.io.Serializable",
	_ScrollPaneAdjustable_FieldInfo_,
	_ScrollPaneAdjustable_MethodInfo_,
	nullptr,
	nullptr,
	_ScrollPaneAdjustable_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.ScrollPaneAdjustable$1"
};

$Object* allocate$ScrollPaneAdjustable($Class* clazz) {
	return $of($alloc(ScrollPaneAdjustable));
}

int32_t ScrollPaneAdjustable::hashCode() {
	 return this->$Adjustable::hashCode();
}

bool ScrollPaneAdjustable::equals(Object$* arg0) {
	 return this->$Adjustable::equals(arg0);
}

$Object* ScrollPaneAdjustable::clone() {
	 return this->$Adjustable::clone();
}

void ScrollPaneAdjustable::finalize() {
	this->$Adjustable::finalize();
}

$String* ScrollPaneAdjustable::SCROLLPANE_ONLY = nullptr;

void ScrollPaneAdjustable::initIDs() {
	$init(ScrollPaneAdjustable);
	$prepareNativeStatic(ScrollPaneAdjustable, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void ScrollPaneAdjustable::init$($ScrollPane* sp, $AdjustmentListener* l, int32_t orientation) {
	this->unitIncrement = 1;
	this->blockIncrement = 1;
	$set(this, sp, sp);
	this->orientation = orientation;
	addAdjustmentListener(l);
}

void ScrollPaneAdjustable::setSpan(int32_t min, int32_t max, int32_t visible) {
	this->minimum = min;
	this->maximum = $Math::max(max, this->minimum + 1);
	this->visibleAmount = $Math::min(visible, this->maximum - this->minimum);
	this->visibleAmount = $Math::max(this->visibleAmount, 1);
	this->blockIncrement = $Math::max($cast(int32_t, (visible * 0.9)), 1);
	setValue(this->value);
}

int32_t ScrollPaneAdjustable::getOrientation() {
	return this->orientation;
}

void ScrollPaneAdjustable::setMinimum(int32_t min) {
	$throwNew($AWTError, ScrollPaneAdjustable::SCROLLPANE_ONLY);
}

int32_t ScrollPaneAdjustable::getMinimum() {
	return 0;
}

void ScrollPaneAdjustable::setMaximum(int32_t max) {
	$throwNew($AWTError, ScrollPaneAdjustable::SCROLLPANE_ONLY);
}

int32_t ScrollPaneAdjustable::getMaximum() {
	return this->maximum;
}

void ScrollPaneAdjustable::setUnitIncrement(int32_t u) {
	$synchronized(this) {
		if (u != this->unitIncrement) {
			this->unitIncrement = u;
			if ($nc(this->sp)->peer != nullptr) {
				$var($ScrollPanePeer, peer, $cast($ScrollPanePeer, $nc(this->sp)->peer));
				$nc(peer)->setUnitIncrement(this, u);
			}
		}
	}
}

int32_t ScrollPaneAdjustable::getUnitIncrement() {
	return this->unitIncrement;
}

void ScrollPaneAdjustable::setBlockIncrement(int32_t b) {
	$synchronized(this) {
		this->blockIncrement = b;
	}
}

int32_t ScrollPaneAdjustable::getBlockIncrement() {
	return this->blockIncrement;
}

void ScrollPaneAdjustable::setVisibleAmount(int32_t v) {
	$throwNew($AWTError, ScrollPaneAdjustable::SCROLLPANE_ONLY);
}

int32_t ScrollPaneAdjustable::getVisibleAmount() {
	return this->visibleAmount;
}

void ScrollPaneAdjustable::setValueIsAdjusting(bool b) {
	if (this->isAdjusting != b) {
		this->isAdjusting = b;
		$var($AdjustmentEvent, e, $new($AdjustmentEvent, this, $AdjustmentEvent::ADJUSTMENT_VALUE_CHANGED, $AdjustmentEvent::TRACK, this->value, b));
		$nc(this->adjustmentListener)->adjustmentValueChanged(e);
	}
}

bool ScrollPaneAdjustable::getValueIsAdjusting() {
	return this->isAdjusting;
}

void ScrollPaneAdjustable::setValue(int32_t v) {
	setTypedValue(v, $AdjustmentEvent::TRACK);
}

void ScrollPaneAdjustable::setTypedValue(int32_t v, int32_t type) {
	v = $Math::max(v, this->minimum);
	v = $Math::min(v, this->maximum - this->visibleAmount);
	if (v != this->value) {
		this->value = v;
		$var($AdjustmentEvent, e, $new($AdjustmentEvent, this, $AdjustmentEvent::ADJUSTMENT_VALUE_CHANGED, type, this->value, this->isAdjusting));
		$nc(this->adjustmentListener)->adjustmentValueChanged(e);
	}
}

int32_t ScrollPaneAdjustable::getValue() {
	return this->value;
}

void ScrollPaneAdjustable::addAdjustmentListener($AdjustmentListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, adjustmentListener, $AWTEventMulticaster::add(this->adjustmentListener, l));
	}
}

void ScrollPaneAdjustable::removeAdjustmentListener($AdjustmentListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, adjustmentListener, $AWTEventMulticaster::remove(this->adjustmentListener, l));
	}
}

$AdjustmentListenerArray* ScrollPaneAdjustable::getAdjustmentListeners() {
	$synchronized(this) {
		$load($AdjustmentListener);
		return $fcast($AdjustmentListenerArray, $AWTEventMulticaster::getListeners(this->adjustmentListener, $AdjustmentListener::class$));
	}
}

$String* ScrollPaneAdjustable::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({$($of(this)->getClass()->getName()), "["_s}));
	$var($String, var$0, $$concat(var$1, $(paramString())));
	return $concat(var$0, "]"_s);
}

$String* ScrollPaneAdjustable::paramString() {
	$useLocalCurrentObjectStackCache();
	return ($str({(this->orientation == $Adjustable::VERTICAL ? "vertical,"_s : "horizontal,"_s), "[0.."_s, $$str(this->maximum), "],val="_s, $$str(this->value), ",vis="_s, $$str(this->visibleAmount), ",unit="_s, $$str(this->unitIncrement), ",block="_s, $$str(this->blockIncrement), ",isAdjusting="_s, $$str(this->isAdjusting)}));
}

void clinit$ScrollPaneAdjustable($Class* class$) {
	$assignStatic(ScrollPaneAdjustable::SCROLLPANE_ONLY, "Can be set by scrollpane only"_s);
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			ScrollPaneAdjustable::initIDs();
		}
		$AWTAccessor::setScrollPaneAdjustableAccessor($$new($ScrollPaneAdjustable$1));
	}
}

ScrollPaneAdjustable::ScrollPaneAdjustable() {
}

$Class* ScrollPaneAdjustable::load$($String* name, bool initialize) {
	$loadClass(ScrollPaneAdjustable, name, initialize, &_ScrollPaneAdjustable_ClassInfo_, clinit$ScrollPaneAdjustable, allocate$ScrollPaneAdjustable);
	return class$;
}

$Class* ScrollPaneAdjustable::class$ = nullptr;

	} // awt
} // java