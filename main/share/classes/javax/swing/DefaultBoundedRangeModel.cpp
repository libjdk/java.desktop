#include <javax/swing/DefaultBoundedRangeModel.h>

#include <java/lang/Math.h>
#include <java/util/EventListener.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <jcpp.h>

#undef MAX_VALUE

using $EventListenerArray = $Array<::java::util::EventListener>;
using $ChangeListenerArray = $Array<::javax::swing::event::ChangeListener>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;

namespace javax {
	namespace swing {

$FieldInfo _DefaultBoundedRangeModel_FieldInfo_[] = {
	{"changeEvent", "Ljavax/swing/event/ChangeEvent;", nullptr, $PROTECTED | $TRANSIENT, $field(DefaultBoundedRangeModel, changeEvent)},
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PROTECTED, $field(DefaultBoundedRangeModel, listenerList)},
	{"value", "I", nullptr, $PRIVATE, $field(DefaultBoundedRangeModel, value)},
	{"extent", "I", nullptr, $PRIVATE, $field(DefaultBoundedRangeModel, extent)},
	{"min", "I", nullptr, $PRIVATE, $field(DefaultBoundedRangeModel, min)},
	{"max", "I", nullptr, $PRIVATE, $field(DefaultBoundedRangeModel, max)},
	{"isAdjusting", "Z", nullptr, $PRIVATE, $field(DefaultBoundedRangeModel, isAdjusting)},
	{}
};

$MethodInfo _DefaultBoundedRangeModel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultBoundedRangeModel::*)()>(&DefaultBoundedRangeModel::init$))},
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultBoundedRangeModel::*)(int32_t,int32_t,int32_t,int32_t)>(&DefaultBoundedRangeModel::init$))},
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"fireStateChanged", "()V", nullptr, $PROTECTED},
	{"getChangeListeners", "()[Ljavax/swing/event/ChangeListener;", nullptr, $PUBLIC},
	{"getExtent", "()I", nullptr, $PUBLIC},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getMaximum", "()I", nullptr, $PUBLIC},
	{"getMinimum", "()I", nullptr, $PUBLIC},
	{"getValue", "()I", nullptr, $PUBLIC},
	{"getValueIsAdjusting", "()Z", nullptr, $PUBLIC},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"setExtent", "(I)V", nullptr, $PUBLIC},
	{"setMaximum", "(I)V", nullptr, $PUBLIC},
	{"setMinimum", "(I)V", nullptr, $PUBLIC},
	{"setRangeProperties", "(IIIIZ)V", nullptr, $PUBLIC},
	{"setValue", "(I)V", nullptr, $PUBLIC},
	{"setValueIsAdjusting", "(Z)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DefaultBoundedRangeModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.DefaultBoundedRangeModel",
	"java.lang.Object",
	"javax.swing.BoundedRangeModel,java.io.Serializable",
	_DefaultBoundedRangeModel_FieldInfo_,
	_DefaultBoundedRangeModel_MethodInfo_
};

$Object* allocate$DefaultBoundedRangeModel($Class* clazz) {
	return $of($alloc(DefaultBoundedRangeModel));
}

int32_t DefaultBoundedRangeModel::hashCode() {
	 return this->$BoundedRangeModel::hashCode();
}

bool DefaultBoundedRangeModel::equals(Object$* arg0) {
	 return this->$BoundedRangeModel::equals(arg0);
}

$Object* DefaultBoundedRangeModel::clone() {
	 return this->$BoundedRangeModel::clone();
}

void DefaultBoundedRangeModel::finalize() {
	this->$BoundedRangeModel::finalize();
}

void DefaultBoundedRangeModel::init$() {
	$set(this, changeEvent, nullptr);
	$set(this, listenerList, $new($EventListenerList));
	this->value = 0;
	this->extent = 0;
	this->min = 0;
	this->max = 100;
	this->isAdjusting = false;
}

void DefaultBoundedRangeModel::init$(int32_t value, int32_t extent, int32_t min, int32_t max) {
	$set(this, changeEvent, nullptr);
	$set(this, listenerList, $new($EventListenerList));
	this->value = 0;
	this->extent = 0;
	this->min = 0;
	this->max = 100;
	this->isAdjusting = false;
	if ((max >= min) && (value >= min) && ((value + extent) >= value) && ((value + extent) <= max)) {
		this->value = value;
		this->extent = extent;
		this->min = min;
		this->max = max;
	} else {
		$throwNew($IllegalArgumentException, "invalid range properties"_s);
	}
}

int32_t DefaultBoundedRangeModel::getValue() {
	return this->value;
}

int32_t DefaultBoundedRangeModel::getExtent() {
	return this->extent;
}

int32_t DefaultBoundedRangeModel::getMinimum() {
	return this->min;
}

int32_t DefaultBoundedRangeModel::getMaximum() {
	return this->max;
}

void DefaultBoundedRangeModel::setValue(int32_t n) {
	n = $Math::min(n, $Integer::MAX_VALUE - this->extent);
	int32_t newValue = $Math::max(n, this->min);
	if (newValue + this->extent > this->max) {
		newValue = this->max - this->extent;
	}
	setRangeProperties(newValue, this->extent, this->min, this->max, this->isAdjusting);
}

void DefaultBoundedRangeModel::setExtent(int32_t n) {
	int32_t newExtent = $Math::max(0, n);
	if (this->value + newExtent > this->max) {
		newExtent = this->max - this->value;
	}
	setRangeProperties(this->value, newExtent, this->min, this->max, this->isAdjusting);
}

void DefaultBoundedRangeModel::setMinimum(int32_t n) {
	int32_t newMax = $Math::max(n, this->max);
	int32_t newValue = $Math::max(n, this->value);
	int32_t newExtent = $Math::min(newMax - newValue, this->extent);
	setRangeProperties(newValue, newExtent, n, newMax, this->isAdjusting);
}

void DefaultBoundedRangeModel::setMaximum(int32_t n) {
	int32_t newMin = $Math::min(n, this->min);
	int32_t newExtent = $Math::min(n - newMin, this->extent);
	int32_t newValue = $Math::min(n - newExtent, this->value);
	setRangeProperties(newValue, newExtent, newMin, n, this->isAdjusting);
}

void DefaultBoundedRangeModel::setValueIsAdjusting(bool b) {
	setRangeProperties(this->value, this->extent, this->min, this->max, b);
}

bool DefaultBoundedRangeModel::getValueIsAdjusting() {
	return this->isAdjusting;
}

void DefaultBoundedRangeModel::setRangeProperties(int32_t newValue, int32_t newExtent, int32_t newMin, int32_t newMax, bool adjusting) {
	if (newMin > newMax) {
		newMin = newMax;
	}
	if (newValue > newMax) {
		newMax = newValue;
	}
	if (newValue < newMin) {
		newMin = newValue;
	}
	if (((int64_t)newExtent + (int64_t)newValue) > newMax) {
		newExtent = newMax - newValue;
	}
	if (newExtent < 0) {
		newExtent = 0;
	}
	bool isChange = (newValue != this->value) || (newExtent != this->extent) || (newMin != this->min) || (newMax != this->max) || (adjusting != this->isAdjusting);
	if (isChange) {
		this->value = newValue;
		this->extent = newExtent;
		this->min = newMin;
		this->max = newMax;
		this->isAdjusting = adjusting;
		fireStateChanged();
	}
}

void DefaultBoundedRangeModel::addChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->add($ChangeListener::class$, l);
}

void DefaultBoundedRangeModel::removeChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->remove($ChangeListener::class$, l);
}

$ChangeListenerArray* DefaultBoundedRangeModel::getChangeListeners() {
	$load($ChangeListener);
	return $fcast($ChangeListenerArray, $nc(this->listenerList)->getListeners($ChangeListener::class$));
}

void DefaultBoundedRangeModel::fireStateChanged() {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ChangeListener);
		if ($equals(listeners->get(i), $ChangeListener::class$)) {
			if (this->changeEvent == nullptr) {
				$set(this, changeEvent, $new($ChangeEvent, this));
			}
			$nc(($cast($ChangeListener, listeners->get(i + 1))))->stateChanged(this->changeEvent);
		}
	}
}

$String* DefaultBoundedRangeModel::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$6, $$str({"value="_s, $$str(getValue()), ", extent="_s}));
	$var($String, var$5, $$concat(var$6, $$str(getExtent())));
	$var($String, var$4, $$concat(var$5, ", min="_s));
	$var($String, var$3, $$concat(var$4, $$str(getMinimum())));
	$var($String, var$2, $$concat(var$3, ", max="_s));
	$var($String, var$1, $$concat(var$2, $$str(getMaximum())));
	$var($String, var$0, $$concat(var$1, ", adj="_s));
	$var($String, modelString, $concat(var$0, $$str(getValueIsAdjusting())));
	return $str({$($of(this)->getClass()->getName()), "["_s, modelString, "]"_s});
}

$EventListenerArray* DefaultBoundedRangeModel::getListeners($Class* listenerType) {
	return $nc(this->listenerList)->getListeners(listenerType);
}

DefaultBoundedRangeModel::DefaultBoundedRangeModel() {
}

$Class* DefaultBoundedRangeModel::load$($String* name, bool initialize) {
	$loadClass(DefaultBoundedRangeModel, name, initialize, &_DefaultBoundedRangeModel_ClassInfo_, allocate$DefaultBoundedRangeModel);
	return class$;
}

$Class* DefaultBoundedRangeModel::class$ = nullptr;

	} // swing
} // javax