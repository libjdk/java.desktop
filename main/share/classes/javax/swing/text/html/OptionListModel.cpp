#include <javax/swing/text/html/OptionListModel.h>

#include <java/lang/Math.h>
#include <java/util/BitSet.h>
#include <java/util/EventListener.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/text/html/Option.h>
#include <jcpp.h>

#undef MAX
#undef MIN
#undef MULTIPLE_INTERVAL_SELECTION
#undef SINGLE_INTERVAL_SELECTION
#undef SINGLE_SELECTION

using $ListSelectionListenerArray = $Array<::javax::swing::event::ListSelectionListener>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BitSet = ::java::util::BitSet;
using $EventListener = ::java::util::EventListener;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $Option = ::javax::swing::text::html::Option;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _OptionListModel_FieldInfo_[] = {
	{"MIN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OptionListModel, MIN)},
	{"MAX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OptionListModel, MAX)},
	{"selectionMode", "I", nullptr, $PRIVATE, $field(OptionListModel, selectionMode)},
	{"minIndex", "I", nullptr, $PRIVATE, $field(OptionListModel, minIndex)},
	{"maxIndex", "I", nullptr, $PRIVATE, $field(OptionListModel, maxIndex)},
	{"anchorIndex", "I", nullptr, $PRIVATE, $field(OptionListModel, anchorIndex)},
	{"leadIndex", "I", nullptr, $PRIVATE, $field(OptionListModel, leadIndex)},
	{"firstChangedIndex", "I", nullptr, $PRIVATE, $field(OptionListModel, firstChangedIndex)},
	{"lastChangedIndex", "I", nullptr, $PRIVATE, $field(OptionListModel, lastChangedIndex)},
	{"isAdjusting", "Z", nullptr, $PRIVATE, $field(OptionListModel, isAdjusting)},
	{"value", "Ljava/util/BitSet;", nullptr, $PRIVATE, $field(OptionListModel, value)},
	{"initialValue", "Ljava/util/BitSet;", nullptr, $PRIVATE, $field(OptionListModel, initialValue)},
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PROTECTED, $field(OptionListModel, listenerList)},
	{"leadAnchorNotificationEnabled", "Z", nullptr, $PROTECTED, $field(OptionListModel, leadAnchorNotificationEnabled)},
	{}
};

$MethodInfo _OptionListModel_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(OptionListModel::*)()>(&OptionListModel::init$))},
	{"addListSelectionListener", "(Ljavax/swing/event/ListSelectionListener;)V", nullptr, $PUBLIC},
	{"addSelectionInterval", "(II)V", nullptr, $PUBLIC},
	{"changeSelection", "(IIIIZ)V", nullptr, $PRIVATE, $method(static_cast<void(OptionListModel::*)(int32_t,int32_t,int32_t,int32_t,bool)>(&OptionListModel::changeSelection))},
	{"changeSelection", "(IIII)V", nullptr, $PRIVATE, $method(static_cast<void(OptionListModel::*)(int32_t,int32_t,int32_t,int32_t)>(&OptionListModel::changeSelection))},
	{"clear", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(OptionListModel::*)(int32_t)>(&OptionListModel::clear))},
	{"clearSelection", "()V", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"contains", "(III)Z", nullptr, $PRIVATE, $method(static_cast<bool(OptionListModel::*)(int32_t,int32_t,int32_t)>(&OptionListModel::contains))},
	{"fireValueChanged", "(Z)V", nullptr, $PROTECTED},
	{"fireValueChanged", "(II)V", nullptr, $PROTECTED},
	{"fireValueChanged", "(IIZ)V", nullptr, $PROTECTED},
	{"fireValueChanged", "()V", nullptr, $PRIVATE, $method(static_cast<void(OptionListModel::*)()>(&OptionListModel::fireValueChanged))},
	{"getAnchorSelectionIndex", "()I", nullptr, $PUBLIC},
	{"getInitialSelection", "()Ljava/util/BitSet;", nullptr, $PUBLIC},
	{"getLeadSelectionIndex", "()I", nullptr, $PUBLIC},
	{"getListSelectionListeners", "()[Ljavax/swing/event/ListSelectionListener;", nullptr, $PUBLIC},
	{"getMaxSelectionIndex", "()I", nullptr, $PUBLIC},
	{"getMinSelectionIndex", "()I", nullptr, $PUBLIC},
	{"getSelectionMode", "()I", nullptr, $PUBLIC},
	{"getValueIsAdjusting", "()Z", nullptr, $PUBLIC},
	{"insertIndexInterval", "(IIZ)V", nullptr, $PUBLIC},
	{"isLeadAnchorNotificationEnabled", "()Z", nullptr, $PUBLIC},
	{"isSelectedIndex", "(I)Z", nullptr, $PUBLIC},
	{"isSelectionEmpty", "()Z", nullptr, $PUBLIC},
	{"markAsDirty", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(OptionListModel::*)(int32_t)>(&OptionListModel::markAsDirty))},
	{"removeIndexInterval", "(II)V", nullptr, $PUBLIC},
	{"removeListSelectionListener", "(Ljavax/swing/event/ListSelectionListener;)V", nullptr, $PUBLIC},
	{"removeSelectionInterval", "(II)V", nullptr, $PUBLIC},
	{"set", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(OptionListModel::*)(int32_t)>(&OptionListModel::set))},
	{"setAnchorSelectionIndex", "(I)V", nullptr, $PUBLIC},
	{"setInitialSelection", "(I)V", nullptr, $PUBLIC},
	{"setLeadAnchorNotificationEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setLeadSelectionIndex", "(I)V", nullptr, $PUBLIC},
	{"setSelectionInterval", "(II)V", nullptr, $PUBLIC},
	{"setSelectionMode", "(I)V", nullptr, $PUBLIC},
	{"setState", "(IZ)V", nullptr, $PRIVATE, $method(static_cast<void(OptionListModel::*)(int32_t,bool)>(&OptionListModel::setState))},
	{"setValueIsAdjusting", "(Z)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateLeadAnchorIndices", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(OptionListModel::*)(int32_t,int32_t)>(&OptionListModel::updateLeadAnchorIndices))},
	{}
};

$ClassInfo _OptionListModel_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.OptionListModel",
	"javax.swing.DefaultListModel",
	"javax.swing.ListSelectionModel",
	_OptionListModel_FieldInfo_,
	_OptionListModel_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljavax/swing/DefaultListModel<TE;>;Ljavax/swing/ListSelectionModel;Ljava/io/Serializable;"
};

$Object* allocate$OptionListModel($Class* clazz) {
	return $of($alloc(OptionListModel));
}

int32_t OptionListModel::hashCode() {
	 return this->$DefaultListModel::hashCode();
}

bool OptionListModel::equals(Object$* arg0) {
	 return this->$DefaultListModel::equals(arg0);
}

void OptionListModel::finalize() {
	this->$DefaultListModel::finalize();
}

void OptionListModel::init$() {
	$DefaultListModel::init$();
	this->selectionMode = $ListSelectionModel::SINGLE_SELECTION;
	this->minIndex = OptionListModel::MAX;
	this->maxIndex = OptionListModel::MIN;
	this->anchorIndex = -1;
	this->leadIndex = -1;
	this->firstChangedIndex = OptionListModel::MAX;
	this->lastChangedIndex = OptionListModel::MIN;
	this->isAdjusting = false;
	$set(this, value, $new($BitSet, 32));
	$set(this, initialValue, $new($BitSet, 32));
	$set(this, listenerList, $new($EventListenerList));
	this->leadAnchorNotificationEnabled = true;
}

int32_t OptionListModel::getMinSelectionIndex() {
	return isSelectionEmpty() ? -1 : this->minIndex;
}

int32_t OptionListModel::getMaxSelectionIndex() {
	return this->maxIndex;
}

bool OptionListModel::getValueIsAdjusting() {
	return this->isAdjusting;
}

int32_t OptionListModel::getSelectionMode() {
	return this->selectionMode;
}

void OptionListModel::setSelectionMode(int32_t selectionMode) {
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
}

bool OptionListModel::isSelectedIndex(int32_t index) {
	return ((index < this->minIndex) || (index > this->maxIndex)) ? false : $nc(this->value)->get(index);
}

bool OptionListModel::isSelectionEmpty() {
	return (this->minIndex > this->maxIndex);
}

void OptionListModel::addListSelectionListener($ListSelectionListener* l) {
	$load($ListSelectionListener);
	$nc(this->listenerList)->add($ListSelectionListener::class$, l);
}

void OptionListModel::removeListSelectionListener($ListSelectionListener* l) {
	$load($ListSelectionListener);
	$nc(this->listenerList)->remove($ListSelectionListener::class$, l);
}

$ListSelectionListenerArray* OptionListModel::getListSelectionListeners() {
	$load($ListSelectionListener);
	return $fcast($ListSelectionListenerArray, $nc(this->listenerList)->getListeners($ListSelectionListener::class$));
}

void OptionListModel::fireValueChanged(bool isAdjusting) {
	int32_t var$0 = getMinSelectionIndex();
	fireValueChanged(var$0, getMaxSelectionIndex(), isAdjusting);
}

void OptionListModel::fireValueChanged(int32_t firstIndex, int32_t lastIndex) {
	fireValueChanged(firstIndex, lastIndex, getValueIsAdjusting());
}

void OptionListModel::fireValueChanged(int32_t firstIndex, int32_t lastIndex, bool isAdjusting) {
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

void OptionListModel::fireValueChanged() {
	if (this->lastChangedIndex == OptionListModel::MIN) {
		return;
	}
	int32_t oldFirstChangedIndex = this->firstChangedIndex;
	int32_t oldLastChangedIndex = this->lastChangedIndex;
	this->firstChangedIndex = OptionListModel::MAX;
	this->lastChangedIndex = OptionListModel::MIN;
	fireValueChanged(oldFirstChangedIndex, oldLastChangedIndex);
}

void OptionListModel::markAsDirty(int32_t r) {
	this->firstChangedIndex = $Math::min(this->firstChangedIndex, r);
	this->lastChangedIndex = $Math::max(this->lastChangedIndex, r);
}

void OptionListModel::set(int32_t r) {
	if ($nc(this->value)->get(r)) {
		return;
	}
	$nc(this->value)->set(r);
	$var($Option, option, $cast($Option, get(r)));
	$nc(option)->setSelection(true);
	markAsDirty(r);
	this->minIndex = $Math::min(this->minIndex, r);
	this->maxIndex = $Math::max(this->maxIndex, r);
}

void OptionListModel::clear(int32_t r) {
	if (!$nc(this->value)->get(r)) {
		return;
	}
	$nc(this->value)->clear(r);
	$var($Option, option, $cast($Option, get(r)));
	$nc(option)->setSelection(false);
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
		this->minIndex = OptionListModel::MAX;
		this->maxIndex = OptionListModel::MIN;
	}
}

void OptionListModel::setLeadAnchorNotificationEnabled(bool flag) {
	this->leadAnchorNotificationEnabled = flag;
}

bool OptionListModel::isLeadAnchorNotificationEnabled() {
	return this->leadAnchorNotificationEnabled;
}

void OptionListModel::updateLeadAnchorIndices(int32_t anchorIndex, int32_t leadIndex) {
	if (this->leadAnchorNotificationEnabled) {
		if (this->anchorIndex != anchorIndex) {
			if (this->anchorIndex != -1) {
				markAsDirty(this->anchorIndex);
			}
			markAsDirty(anchorIndex);
		}
		if (this->leadIndex != leadIndex) {
			if (this->leadIndex != -1) {
				markAsDirty(this->leadIndex);
			}
			markAsDirty(leadIndex);
		}
	}
	this->anchorIndex = anchorIndex;
	this->leadIndex = leadIndex;
}

bool OptionListModel::contains(int32_t a, int32_t b, int32_t i) {
	return (i >= a) && (i <= b);
}

void OptionListModel::changeSelection(int32_t clearMin, int32_t clearMax, int32_t setMin, int32_t setMax, bool clearFirst) {
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

void OptionListModel::changeSelection(int32_t clearMin, int32_t clearMax, int32_t setMin, int32_t setMax) {
	changeSelection(clearMin, clearMax, setMin, setMax, true);
}

void OptionListModel::clearSelection() {
	removeSelectionInterval(this->minIndex, this->maxIndex);
}

void OptionListModel::setSelectionInterval(int32_t index0, int32_t index1) {
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

void OptionListModel::addSelectionInterval(int32_t index0, int32_t index1) {
	if (index0 == -1 || index1 == -1) {
		return;
	}
	if (getSelectionMode() != $ListSelectionModel::MULTIPLE_INTERVAL_SELECTION) {
		setSelectionInterval(index0, index1);
		return;
	}
	updateLeadAnchorIndices(index0, index1);
	int32_t clearMin = OptionListModel::MAX;
	int32_t clearMax = OptionListModel::MIN;
	int32_t setMin = $Math::min(index0, index1);
	int32_t setMax = $Math::max(index0, index1);
	changeSelection(clearMin, clearMax, setMin, setMax);
}

void OptionListModel::removeSelectionInterval(int32_t index0, int32_t index1) {
	if (index0 == -1 || index1 == -1) {
		return;
	}
	updateLeadAnchorIndices(index0, index1);
	int32_t clearMin = $Math::min(index0, index1);
	int32_t clearMax = $Math::max(index0, index1);
	int32_t setMin = OptionListModel::MAX;
	int32_t setMax = OptionListModel::MIN;
	changeSelection(clearMin, clearMax, setMin, setMax);
}

void OptionListModel::setState(int32_t index, bool state) {
	if (state) {
		set(index);
	} else {
		clear(index);
	}
}

void OptionListModel::insertIndexInterval(int32_t index, int32_t length, bool before) {
	int32_t insMinIndex = (before) ? index : index + 1;
	int32_t insMaxIndex = (insMinIndex + length) - 1;
	for (int32_t i = this->maxIndex; i >= insMinIndex; --i) {
		setState(i + length, $nc(this->value)->get(i));
	}
	bool setInsertedValues = $nc(this->value)->get(index);
	for (int32_t i = insMinIndex; i <= insMaxIndex; ++i) {
		setState(i, setInsertedValues);
	}
}

void OptionListModel::removeIndexInterval(int32_t index0, int32_t index1) {
	int32_t rmMinIndex = $Math::min(index0, index1);
	int32_t rmMaxIndex = $Math::max(index0, index1);
	int32_t gapLength = (rmMaxIndex - rmMinIndex) + 1;
	for (int32_t i = rmMinIndex; i <= this->maxIndex; ++i) {
		setState(i, $nc(this->value)->get(i + gapLength));
	}
}

void OptionListModel::setValueIsAdjusting(bool isAdjusting) {
	if (isAdjusting != this->isAdjusting) {
		this->isAdjusting = isAdjusting;
		this->fireValueChanged(isAdjusting);
	}
}

$String* OptionListModel::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, ((getValueIsAdjusting()) ? "~"_s : "="_s));
	$var($String, s, $concat(var$0, $($nc(this->value)->toString())));
	$var($String, var$3, $$str({$($of(this)->getClass()->getName()), " "_s}));
	$var($String, var$2, $$concat(var$3, $($Integer::toString(hashCode()))));
	$var($String, var$1, $$concat(var$2, " "_s));
	return $concat(var$1, s);
}

$Object* OptionListModel::clone() {
	$var(OptionListModel, clone, $cast(OptionListModel, $DefaultListModel::clone()));
	$set($nc(clone), value, $cast($BitSet, $nc(this->value)->clone()));
	$set(clone, listenerList, $new($EventListenerList));
	return $of(clone);
}

int32_t OptionListModel::getAnchorSelectionIndex() {
	return this->anchorIndex;
}

int32_t OptionListModel::getLeadSelectionIndex() {
	return this->leadIndex;
}

void OptionListModel::setAnchorSelectionIndex(int32_t anchorIndex) {
	this->anchorIndex = anchorIndex;
}

void OptionListModel::setLeadSelectionIndex(int32_t leadIndex) {
	int32_t anchorIndex = this->anchorIndex;
	if (getSelectionMode() == $ListSelectionModel::SINGLE_SELECTION) {
		anchorIndex = leadIndex;
	}
	int32_t oldMin = $Math::min(this->anchorIndex, this->leadIndex);
	int32_t oldMax = $Math::max(this->anchorIndex, this->leadIndex);
	int32_t newMin = $Math::min(anchorIndex, leadIndex);
	int32_t newMax = $Math::max(anchorIndex, leadIndex);
	if ($nc(this->value)->get(this->anchorIndex)) {
		changeSelection(oldMin, oldMax, newMin, newMax);
	} else {
		changeSelection(newMin, newMax, oldMin, oldMax, false);
	}
	this->anchorIndex = anchorIndex;
	this->leadIndex = leadIndex;
}

void OptionListModel::setInitialSelection(int32_t i) {
	if ($nc(this->initialValue)->get(i)) {
		return;
	}
	if (this->selectionMode == $ListSelectionModel::SINGLE_SELECTION) {
		$nc(this->initialValue)->and$($$new($BitSet));
	}
	$nc(this->initialValue)->set(i);
}

$BitSet* OptionListModel::getInitialSelection() {
	return this->initialValue;
}

OptionListModel::OptionListModel() {
}

$Class* OptionListModel::load$($String* name, bool initialize) {
	$loadClass(OptionListModel, name, initialize, &_OptionListModel_ClassInfo_, allocate$OptionListModel);
	return class$;
}

$Class* OptionListModel::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax