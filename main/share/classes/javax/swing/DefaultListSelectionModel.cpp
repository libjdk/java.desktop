#include <javax/swing/DefaultListSelectionModel.h>

#include <java/lang/Math.h>
#include <java/util/BitSet.h>
#include <java/util/EventListener.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <jcpp.h>

#undef MAX
#undef MIN
#undef MULTIPLE_INTERVAL_SELECTION
#undef SINGLE_INTERVAL_SELECTION
#undef SINGLE_SELECTION

using $EventListenerArray = $Array<::java::util::EventListener>;
using $ListSelectionListenerArray = $Array<::javax::swing::event::ListSelectionListener>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BitSet = ::java::util::BitSet;
using $EventListener = ::java::util::EventListener;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;

namespace javax {
	namespace swing {

$CompoundAttribute _DefaultListSelectionModel_MethodAnnotations_getAnchorSelectionIndex13[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$CompoundAttribute _DefaultListSelectionModel_MethodAnnotations_getLeadSelectionIndex14[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$FieldInfo _DefaultListSelectionModel_FieldInfo_[] = {
	{"MIN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DefaultListSelectionModel, MIN)},
	{"MAX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DefaultListSelectionModel, MAX)},
	{"selectionMode", "I", nullptr, $PRIVATE, $field(DefaultListSelectionModel, selectionMode)},
	{"minIndex", "I", nullptr, $PRIVATE, $field(DefaultListSelectionModel, minIndex)},
	{"maxIndex", "I", nullptr, $PRIVATE, $field(DefaultListSelectionModel, maxIndex)},
	{"anchorIndex", "I", nullptr, $PRIVATE, $field(DefaultListSelectionModel, anchorIndex)},
	{"leadIndex", "I", nullptr, $PRIVATE, $field(DefaultListSelectionModel, leadIndex)},
	{"firstAdjustedIndex", "I", nullptr, $PRIVATE, $field(DefaultListSelectionModel, firstAdjustedIndex)},
	{"lastAdjustedIndex", "I", nullptr, $PRIVATE, $field(DefaultListSelectionModel, lastAdjustedIndex)},
	{"isAdjusting", "Z", nullptr, $PRIVATE, $field(DefaultListSelectionModel, isAdjusting)},
	{"firstChangedIndex", "I", nullptr, $PRIVATE, $field(DefaultListSelectionModel, firstChangedIndex)},
	{"lastChangedIndex", "I", nullptr, $PRIVATE, $field(DefaultListSelectionModel, lastChangedIndex)},
	{"value", "Ljava/util/BitSet;", nullptr, $PRIVATE, $field(DefaultListSelectionModel, value)},
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PROTECTED, $field(DefaultListSelectionModel, listenerList)},
	{"leadAnchorNotificationEnabled", "Z", nullptr, $PROTECTED, $field(DefaultListSelectionModel, leadAnchorNotificationEnabled)},
	{}
};

$MethodInfo _DefaultListSelectionModel_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultListSelectionModel::*)()>(&DefaultListSelectionModel::init$))},
	{"addListSelectionListener", "(Ljavax/swing/event/ListSelectionListener;)V", nullptr, $PUBLIC},
	{"addSelectionInterval", "(II)V", nullptr, $PUBLIC},
	{"changeSelection", "(IIIIZ)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultListSelectionModel::*)(int32_t,int32_t,int32_t,int32_t,bool)>(&DefaultListSelectionModel::changeSelection))},
	{"changeSelection", "(IIII)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultListSelectionModel::*)(int32_t,int32_t,int32_t,int32_t)>(&DefaultListSelectionModel::changeSelection))},
	{"clear", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultListSelectionModel::*)(int32_t)>(&DefaultListSelectionModel::clear))},
	{"clearSelection", "()V", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"contains", "(III)Z", nullptr, $PRIVATE, $method(static_cast<bool(DefaultListSelectionModel::*)(int32_t,int32_t,int32_t)>(&DefaultListSelectionModel::contains))},
	{"fireValueChanged", "(Z)V", nullptr, $PROTECTED},
	{"fireValueChanged", "(II)V", nullptr, $PROTECTED},
	{"fireValueChanged", "(IIZ)V", nullptr, $PROTECTED},
	{"fireValueChanged", "()V", nullptr, $PRIVATE, $method(static_cast<void(DefaultListSelectionModel::*)()>(&DefaultListSelectionModel::fireValueChanged))},
	{"getAnchorSelectionIndex", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _DefaultListSelectionModel_MethodAnnotations_getAnchorSelectionIndex13},
	{"getLeadSelectionIndex", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _DefaultListSelectionModel_MethodAnnotations_getLeadSelectionIndex14},
	{"getListSelectionListeners", "()[Ljavax/swing/event/ListSelectionListener;", nullptr, $PUBLIC},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getMaxSelectionIndex", "()I", nullptr, $PUBLIC},
	{"getMinSelectionIndex", "()I", nullptr, $PUBLIC},
	{"getSelectionMode", "()I", nullptr, $PUBLIC},
	{"getValueIsAdjusting", "()Z", nullptr, $PUBLIC},
	{"insertIndexInterval", "(IIZ)V", nullptr, $PUBLIC},
	{"isLeadAnchorNotificationEnabled", "()Z", nullptr, $PUBLIC},
	{"isSelectedIndex", "(I)Z", nullptr, $PUBLIC},
	{"isSelectionEmpty", "()Z", nullptr, $PUBLIC},
	{"markAsDirty", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultListSelectionModel::*)(int32_t)>(&DefaultListSelectionModel::markAsDirty))},
	{"moveLeadSelectionIndex", "(I)V", nullptr, $PUBLIC},
	{"removeIndexInterval", "(II)V", nullptr, $PUBLIC},
	{"removeListSelectionListener", "(Ljavax/swing/event/ListSelectionListener;)V", nullptr, $PUBLIC},
	{"removeSelectionInterval", "(II)V", nullptr, $PUBLIC},
	{"removeSelectionIntervalImpl", "(IIZ)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultListSelectionModel::*)(int32_t,int32_t,bool)>(&DefaultListSelectionModel::removeSelectionIntervalImpl))},
	{"set", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultListSelectionModel::*)(int32_t)>(&DefaultListSelectionModel::set))},
	{"setAnchorSelectionIndex", "(I)V", nullptr, $PUBLIC},
	{"setLeadAnchorNotificationEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setLeadSelectionIndex", "(I)V", nullptr, $PUBLIC},
	{"setSelectionInterval", "(II)V", nullptr, $PUBLIC},
	{"setSelectionMode", "(I)V", nullptr, $PUBLIC},
	{"setState", "(IZ)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultListSelectionModel::*)(int32_t,bool)>(&DefaultListSelectionModel::setState))},
	{"setValueIsAdjusting", "(Z)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateLeadAnchorIndices", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultListSelectionModel::*)(int32_t,int32_t)>(&DefaultListSelectionModel::updateLeadAnchorIndices))},
	{}
};

$ClassInfo _DefaultListSelectionModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.DefaultListSelectionModel",
	"java.lang.Object",
	"javax.swing.ListSelectionModel,java.lang.Cloneable,java.io.Serializable",
	_DefaultListSelectionModel_FieldInfo_,
	_DefaultListSelectionModel_MethodInfo_
};

$Object* allocate$DefaultListSelectionModel($Class* clazz) {
	return $of($alloc(DefaultListSelectionModel));
}

int32_t DefaultListSelectionModel::hashCode() {
	 return this->$ListSelectionModel::hashCode();
}

bool DefaultListSelectionModel::equals(Object$* arg0) {
	 return this->$ListSelectionModel::equals(arg0);
}

void DefaultListSelectionModel::finalize() {
	this->$ListSelectionModel::finalize();
}

void DefaultListSelectionModel::init$() {
	this->selectionMode = $ListSelectionModel::MULTIPLE_INTERVAL_SELECTION;
	this->minIndex = DefaultListSelectionModel::MAX;
	this->maxIndex = DefaultListSelectionModel::MIN;
	this->anchorIndex = -1;
	this->leadIndex = -1;
	this->firstAdjustedIndex = DefaultListSelectionModel::MAX;
	this->lastAdjustedIndex = DefaultListSelectionModel::MIN;
	this->isAdjusting = false;
	this->firstChangedIndex = DefaultListSelectionModel::MAX;
	this->lastChangedIndex = DefaultListSelectionModel::MIN;
	$set(this, value, $new($BitSet, 32));
	$set(this, listenerList, $new($EventListenerList));
	this->leadAnchorNotificationEnabled = true;
}

int32_t DefaultListSelectionModel::getMinSelectionIndex() {
	return isSelectionEmpty() ? -1 : this->minIndex;
}

int32_t DefaultListSelectionModel::getMaxSelectionIndex() {
	return this->maxIndex;
}

bool DefaultListSelectionModel::getValueIsAdjusting() {
	return this->isAdjusting;
}

int32_t DefaultListSelectionModel::getSelectionMode() {
	return this->selectionMode;
}

void DefaultListSelectionModel::setSelectionMode(int32_t selectionMode) {
	int32_t oldMode = this->selectionMode;
	switch (selectionMode) {
	case $ListSelectionModel::SINGLE_SELECTION:
		{}
	case $ListSelectionModel::SINGLE_INTERVAL_SELECTION:
		{}
	case $ListSelectionModel::MULTIPLE_INTERVAL_SELECTION:
		{
			this->selectionMode = selectionMode;
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "invalid selectionMode"_s);
		}
	}
	if (oldMode > this->selectionMode) {
		if (this->selectionMode == $ListSelectionModel::SINGLE_SELECTION) {
			if (!isSelectionEmpty()) {
				setSelectionInterval(this->minIndex, this->minIndex);
			}
		} else if (this->selectionMode == $ListSelectionModel::SINGLE_INTERVAL_SELECTION) {
			if (!isSelectionEmpty()) {
				int32_t selectionEndindex = this->minIndex;
				while ($nc(this->value)->get(selectionEndindex + 1)) {
					++selectionEndindex;
				}
				setSelectionInterval(this->minIndex, selectionEndindex);
			}
		}
	}
}

bool DefaultListSelectionModel::isSelectedIndex(int32_t index) {
	return ((index < this->minIndex) || (index > this->maxIndex)) ? false : $nc(this->value)->get(index);
}

bool DefaultListSelectionModel::isSelectionEmpty() {
	return (this->minIndex > this->maxIndex);
}

void DefaultListSelectionModel::addListSelectionListener($ListSelectionListener* l) {
	$load($ListSelectionListener);
	$nc(this->listenerList)->add($ListSelectionListener::class$, l);
}

void DefaultListSelectionModel::removeListSelectionListener($ListSelectionListener* l) {
	$load($ListSelectionListener);
	$nc(this->listenerList)->remove($ListSelectionListener::class$, l);
}

$ListSelectionListenerArray* DefaultListSelectionModel::getListSelectionListeners() {
	$load($ListSelectionListener);
	return $fcast($ListSelectionListenerArray, $nc(this->listenerList)->getListeners($ListSelectionListener::class$));
}

void DefaultListSelectionModel::fireValueChanged(bool isAdjusting) {
	if (this->lastChangedIndex == DefaultListSelectionModel::MIN) {
		return;
	}
	int32_t oldFirstChangedIndex = this->firstChangedIndex;
	int32_t oldLastChangedIndex = this->lastChangedIndex;
	this->firstChangedIndex = DefaultListSelectionModel::MAX;
	this->lastChangedIndex = DefaultListSelectionModel::MIN;
	fireValueChanged(oldFirstChangedIndex, oldLastChangedIndex, isAdjusting);
}

void DefaultListSelectionModel::fireValueChanged(int32_t firstIndex, int32_t lastIndex) {
	fireValueChanged(firstIndex, lastIndex, getValueIsAdjusting());
}

void DefaultListSelectionModel::fireValueChanged(int32_t firstIndex, int32_t lastIndex, bool isAdjusting) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($ListSelectionEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ListSelectionListener);
		if ($equals(listeners->get(i), $ListSelectionListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($ListSelectionEvent, this, firstIndex, lastIndex, isAdjusting));
			}
			$nc(($cast($ListSelectionListener, listeners->get(i + 1))))->valueChanged(e);
		}
	}
}

void DefaultListSelectionModel::fireValueChanged() {
	if (this->lastAdjustedIndex == DefaultListSelectionModel::MIN) {
		return;
	}
	if (getValueIsAdjusting()) {
		this->firstChangedIndex = $Math::min(this->firstChangedIndex, this->firstAdjustedIndex);
		this->lastChangedIndex = $Math::max(this->lastChangedIndex, this->lastAdjustedIndex);
	}
	int32_t oldFirstAdjustedIndex = this->firstAdjustedIndex;
	int32_t oldLastAdjustedIndex = this->lastAdjustedIndex;
	this->firstAdjustedIndex = DefaultListSelectionModel::MAX;
	this->lastAdjustedIndex = DefaultListSelectionModel::MIN;
	fireValueChanged(oldFirstAdjustedIndex, oldLastAdjustedIndex);
}

$EventListenerArray* DefaultListSelectionModel::getListeners($Class* listenerType) {
	return $nc(this->listenerList)->getListeners(listenerType);
}

void DefaultListSelectionModel::markAsDirty(int32_t r) {
	if (r == -1) {
		return;
	}
	this->firstAdjustedIndex = $Math::min(this->firstAdjustedIndex, r);
	this->lastAdjustedIndex = $Math::max(this->lastAdjustedIndex, r);
}

void DefaultListSelectionModel::set(int32_t r) {
	if ($nc(this->value)->get(r)) {
		return;
	}
	$nc(this->value)->set(r);
	markAsDirty(r);
	this->minIndex = $Math::min(this->minIndex, r);
	this->maxIndex = $Math::max(this->maxIndex, r);
}

void DefaultListSelectionModel::clear(int32_t r) {
	if (!$nc(this->value)->get(r)) {
		return;
	}
	$nc(this->value)->clear(r);
	markAsDirty(r);
	if (r == this->minIndex) {
		for (this->minIndex = this->minIndex + 1; this->minIndex <= this->maxIndex; ++this->minIndex) {
			if ($nc(this->value)->get(this->minIndex)) {
				break;
			}
		}
	}
	if (r == this->maxIndex) {
		for (this->maxIndex = this->maxIndex - 1; this->minIndex <= this->maxIndex; --this->maxIndex) {
			if ($nc(this->value)->get(this->maxIndex)) {
				break;
			}
		}
	}
	if (isSelectionEmpty()) {
		this->minIndex = DefaultListSelectionModel::MAX;
		this->maxIndex = DefaultListSelectionModel::MIN;
	}
}

void DefaultListSelectionModel::setLeadAnchorNotificationEnabled(bool flag) {
	this->leadAnchorNotificationEnabled = flag;
}

bool DefaultListSelectionModel::isLeadAnchorNotificationEnabled() {
	return this->leadAnchorNotificationEnabled;
}

void DefaultListSelectionModel::updateLeadAnchorIndices(int32_t anchorIndex, int32_t leadIndex) {
	if (this->leadAnchorNotificationEnabled) {
		if (this->anchorIndex != anchorIndex) {
			markAsDirty(this->anchorIndex);
			markAsDirty(anchorIndex);
		}
		if (this->leadIndex != leadIndex) {
			markAsDirty(this->leadIndex);
			markAsDirty(leadIndex);
		}
	}
	this->anchorIndex = anchorIndex;
	this->leadIndex = leadIndex;
}

bool DefaultListSelectionModel::contains(int32_t a, int32_t b, int32_t i) {
	return (i >= a) && (i <= b);
}

void DefaultListSelectionModel::changeSelection(int32_t clearMin, int32_t clearMax, int32_t setMin, int32_t setMax, bool clearFirst) {
	for (int32_t i = $Math::min(setMin, clearMin); i <= $Math::max(setMax, clearMax); ++i) {
		bool shouldClear = contains(clearMin, clearMax, i);
		bool shouldSet = contains(setMin, setMax, i);
		if (shouldSet && shouldClear) {
			if (clearFirst) {
				shouldClear = false;
			} else {
				shouldSet = false;
			}
		}
		if (shouldSet) {
			set(i);
		}
		if (shouldClear) {
			clear(i);
		}
	}
	fireValueChanged();
}

void DefaultListSelectionModel::changeSelection(int32_t clearMin, int32_t clearMax, int32_t setMin, int32_t setMax) {
	changeSelection(clearMin, clearMax, setMin, setMax, true);
}

void DefaultListSelectionModel::clearSelection() {
	removeSelectionIntervalImpl(this->minIndex, this->maxIndex, false);
}

void DefaultListSelectionModel::setSelectionInterval(int32_t index0, int32_t index1) {
	if (index0 == -1 || index1 == -1) {
		return;
	}
	if (getSelectionMode() == $ListSelectionModel::SINGLE_SELECTION) {
		index0 = index1;
	}
	updateLeadAnchorIndices(index0, index1);
	int32_t clearMin = this->minIndex;
	int32_t clearMax = this->maxIndex;
	int32_t setMin = $Math::min(index0, index1);
	int32_t setMax = $Math::max(index0, index1);
	changeSelection(clearMin, clearMax, setMin, setMax);
}

void DefaultListSelectionModel::addSelectionInterval(int32_t index0, int32_t index1) {
	if (index0 == -1 || index1 == -1) {
		return;
	}
	if (getSelectionMode() == $ListSelectionModel::SINGLE_SELECTION) {
		setSelectionInterval(index0, index1);
		return;
	}
	updateLeadAnchorIndices(index0, index1);
	int32_t clearMin = DefaultListSelectionModel::MAX;
	int32_t clearMax = DefaultListSelectionModel::MIN;
	int32_t setMin = $Math::min(index0, index1);
	int32_t setMax = $Math::max(index0, index1);
	if (getSelectionMode() == $ListSelectionModel::SINGLE_INTERVAL_SELECTION && (setMax < this->minIndex - 1 || setMin > this->maxIndex + 1)) {
		setSelectionInterval(index0, index1);
		return;
	}
	changeSelection(clearMin, clearMax, setMin, setMax);
}

void DefaultListSelectionModel::removeSelectionInterval(int32_t index0, int32_t index1) {
	removeSelectionIntervalImpl(index0, index1, true);
}

void DefaultListSelectionModel::removeSelectionIntervalImpl(int32_t index0, int32_t index1, bool changeLeadAnchor) {
	if (index0 == -1 || index1 == -1) {
		return;
	}
	if (changeLeadAnchor) {
		updateLeadAnchorIndices(index0, index1);
	}
	int32_t clearMin = $Math::min(index0, index1);
	int32_t clearMax = $Math::max(index0, index1);
	int32_t setMin = DefaultListSelectionModel::MAX;
	int32_t setMax = DefaultListSelectionModel::MIN;
	if (getSelectionMode() != $ListSelectionModel::MULTIPLE_INTERVAL_SELECTION && clearMin > this->minIndex && clearMax < this->maxIndex) {
		clearMax = this->maxIndex;
	}
	changeSelection(clearMin, clearMax, setMin, setMax);
}

void DefaultListSelectionModel::setState(int32_t index, bool state) {
	if (state) {
		set(index);
	} else {
		clear(index);
	}
}

void DefaultListSelectionModel::insertIndexInterval(int32_t index, int32_t length, bool before) {
	int32_t insMinIndex = (before) ? index : index + 1;
	int32_t insMaxIndex = (insMinIndex + length) - 1;
	for (int32_t i = this->maxIndex; i >= insMinIndex; --i) {
		setState(i + length, $nc(this->value)->get(i));
	}
	bool setInsertedValues = ((getSelectionMode() == $ListSelectionModel::SINGLE_SELECTION) ? false : $nc(this->value)->get(index));
	for (int32_t i = insMinIndex; i <= insMaxIndex; ++i) {
		setState(i, setInsertedValues);
	}
	int32_t leadIndex = this->leadIndex;
	if (leadIndex > index || (before && leadIndex == index)) {
		leadIndex = this->leadIndex + length;
	}
	int32_t anchorIndex = this->anchorIndex;
	if (anchorIndex > index || (before && anchorIndex == index)) {
		anchorIndex = this->anchorIndex + length;
	}
	if (leadIndex != this->leadIndex || anchorIndex != this->anchorIndex) {
		updateLeadAnchorIndices(anchorIndex, leadIndex);
	}
	fireValueChanged();
}

void DefaultListSelectionModel::removeIndexInterval(int32_t index0, int32_t index1) {
	int32_t rmMinIndex = $Math::min(index0, index1);
	int32_t rmMaxIndex = $Math::max(index0, index1);
	int32_t gapLength = (rmMaxIndex - rmMinIndex) + 1;
	for (int32_t i = rmMinIndex; i <= this->maxIndex; ++i) {
		setState(i, $nc(this->value)->get(i + gapLength));
	}
	int32_t leadIndex = this->leadIndex;
	if (leadIndex == 0 && rmMinIndex == 0) {
	} else if (leadIndex > rmMaxIndex) {
		leadIndex = this->leadIndex - gapLength;
	} else if (leadIndex >= rmMinIndex) {
		leadIndex = rmMinIndex - 1;
	}
	int32_t anchorIndex = this->anchorIndex;
	if (anchorIndex == 0 && rmMinIndex == 0) {
	} else if (anchorIndex > rmMaxIndex) {
		anchorIndex = this->anchorIndex - gapLength;
	} else if (anchorIndex >= rmMinIndex) {
		anchorIndex = rmMinIndex - 1;
	}
	if (leadIndex != this->leadIndex || anchorIndex != this->anchorIndex) {
		updateLeadAnchorIndices(anchorIndex, leadIndex);
	}
	fireValueChanged();
}

void DefaultListSelectionModel::setValueIsAdjusting(bool isAdjusting) {
	if (isAdjusting != this->isAdjusting) {
		this->isAdjusting = isAdjusting;
		this->fireValueChanged(isAdjusting);
	}
}

$String* DefaultListSelectionModel::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, ((getValueIsAdjusting()) ? "~"_s : "="_s));
	$var($String, s, $concat(var$0, $($nc(this->value)->toString())));
	$var($String, var$3, $$str({$($of(this)->getClass()->getName()), " "_s}));
	$var($String, var$2, $$concat(var$3, $($Integer::toString(hashCode()))));
	$var($String, var$1, $$concat(var$2, " "_s));
	return $concat(var$1, s);
}

$Object* DefaultListSelectionModel::clone() {
	$var(DefaultListSelectionModel, clone, $cast(DefaultListSelectionModel, $ListSelectionModel::clone()));
	$set($nc(clone), value, $cast($BitSet, $nc(this->value)->clone()));
	$set(clone, listenerList, $new($EventListenerList));
	return $of(clone);
}

int32_t DefaultListSelectionModel::getAnchorSelectionIndex() {
	return this->anchorIndex;
}

int32_t DefaultListSelectionModel::getLeadSelectionIndex() {
	return this->leadIndex;
}

void DefaultListSelectionModel::setAnchorSelectionIndex(int32_t anchorIndex) {
	updateLeadAnchorIndices(anchorIndex, this->leadIndex);
	fireValueChanged();
}

void DefaultListSelectionModel::moveLeadSelectionIndex(int32_t leadIndex) {
	if (leadIndex == -1) {
		if (this->anchorIndex != -1) {
			return;
		}
	}
	updateLeadAnchorIndices(this->anchorIndex, leadIndex);
	fireValueChanged();
}

void DefaultListSelectionModel::setLeadSelectionIndex(int32_t leadIndex) {
	int32_t anchorIndex = this->anchorIndex;
	if (leadIndex == -1) {
		if (anchorIndex == -1) {
			updateLeadAnchorIndices(anchorIndex, leadIndex);
			fireValueChanged();
		}
		return;
	} else if (anchorIndex == -1) {
		return;
	}
	if (this->leadIndex == -1) {
		this->leadIndex = leadIndex;
	}
	bool shouldSelect = $nc(this->value)->get(this->anchorIndex);
	if (getSelectionMode() == $ListSelectionModel::SINGLE_SELECTION) {
		anchorIndex = leadIndex;
		shouldSelect = true;
	}
	int32_t oldMin = $Math::min(this->anchorIndex, this->leadIndex);
	int32_t oldMax = $Math::max(this->anchorIndex, this->leadIndex);
	int32_t newMin = $Math::min(anchorIndex, leadIndex);
	int32_t newMax = $Math::max(anchorIndex, leadIndex);
	updateLeadAnchorIndices(anchorIndex, leadIndex);
	if (shouldSelect) {
		changeSelection(oldMin, oldMax, newMin, newMax);
	} else {
		changeSelection(newMin, newMax, oldMin, oldMax, false);
	}
}

DefaultListSelectionModel::DefaultListSelectionModel() {
}

$Class* DefaultListSelectionModel::load$($String* name, bool initialize) {
	$loadClass(DefaultListSelectionModel, name, initialize, &_DefaultListSelectionModel_ClassInfo_, allocate$DefaultListSelectionModel);
	return class$;
}

$Class* DefaultListSelectionModel::class$ = nullptr;

	} // swing
} // javax