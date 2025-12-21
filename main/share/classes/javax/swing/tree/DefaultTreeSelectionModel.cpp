#include <javax/swing/tree/DefaultTreeSelectionModel.h>

#include <java/beans/PropertyChangeListener.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Cloneable.h>
#include <java/lang/Math.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/BitSet.h>
#include <java/util/Enumeration.h>
#include <java/util/EventListener.h>
#include <java/util/Hashtable.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <javax/swing/DefaultListSelectionModel.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/SwingPropertyChangeSupport.h>
#include <javax/swing/event/TreeSelectionEvent.h>
#include <javax/swing/event/TreeSelectionListener.h>
#include <javax/swing/tree/PathPlaceHolder.h>
#include <javax/swing/tree/RowMapper.h>
#include <javax/swing/tree/TreePath.h>
#include <javax/swing/tree/TreeSelectionModel.h>
#include <jcpp.h>

#undef CONTIGUOUS_TREE_SELECTION
#undef DISCONTIGUOUS_TREE_SELECTION
#undef SELECTION_MODE_PROPERTY
#undef SINGLE_TREE_SELECTION
#undef TRUE

using $PropertyChangeListenerArray = $Array<::java::beans::PropertyChangeListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $TreeSelectionListenerArray = $Array<::javax::swing::event::TreeSelectionListener>;
using $TreePathArray = $Array<::javax::swing::tree::TreePath>;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $BitSet = ::java::util::BitSet;
using $Enumeration = ::java::util::Enumeration;
using $EventListener = ::java::util::EventListener;
using $Hashtable = ::java::util::Hashtable;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $DefaultListSelectionModel = ::javax::swing::DefaultListSelectionModel;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $SwingPropertyChangeSupport = ::javax::swing::event::SwingPropertyChangeSupport;
using $TreeSelectionEvent = ::javax::swing::event::TreeSelectionEvent;
using $TreeSelectionListener = ::javax::swing::event::TreeSelectionListener;
using $PathPlaceHolder = ::javax::swing::tree::PathPlaceHolder;
using $RowMapper = ::javax::swing::tree::RowMapper;
using $TreePath = ::javax::swing::tree::TreePath;
using $TreeSelectionModel = ::javax::swing::tree::TreeSelectionModel;

namespace javax {
	namespace swing {
		namespace tree {

$CompoundAttribute _DefaultTreeSelectionModel_MethodAnnotations_notifyPathChange29[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _DefaultTreeSelectionModel_FieldInfo_[] = {
	{"SELECTION_MODE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultTreeSelectionModel, SELECTION_MODE_PROPERTY)},
	{"changeSupport", "Ljavax/swing/event/SwingPropertyChangeSupport;", nullptr, $PROTECTED, $field(DefaultTreeSelectionModel, changeSupport)},
	{"selection", "[Ljavax/swing/tree/TreePath;", nullptr, $PROTECTED, $field(DefaultTreeSelectionModel, selection)},
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PROTECTED, $field(DefaultTreeSelectionModel, listenerList)},
	{"rowMapper", "Ljavax/swing/tree/RowMapper;", nullptr, $PROTECTED | $TRANSIENT, $field(DefaultTreeSelectionModel, rowMapper)},
	{"listSelectionModel", "Ljavax/swing/DefaultListSelectionModel;", nullptr, $PROTECTED, $field(DefaultTreeSelectionModel, listSelectionModel)},
	{"selectionMode", "I", nullptr, $PROTECTED, $field(DefaultTreeSelectionModel, selectionMode)},
	{"leadPath", "Ljavax/swing/tree/TreePath;", nullptr, $PROTECTED, $field(DefaultTreeSelectionModel, leadPath)},
	{"leadIndex", "I", nullptr, $PROTECTED, $field(DefaultTreeSelectionModel, leadIndex)},
	{"leadRow", "I", nullptr, $PROTECTED, $field(DefaultTreeSelectionModel, leadRow)},
	{"uniquePaths", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljavax/swing/tree/TreePath;Ljava/lang/Boolean;>;", $PRIVATE, $field(DefaultTreeSelectionModel, uniquePaths)},
	{"lastPaths", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljavax/swing/tree/TreePath;Ljava/lang/Boolean;>;", $PRIVATE, $field(DefaultTreeSelectionModel, lastPaths)},
	{"tempPaths", "[Ljavax/swing/tree/TreePath;", nullptr, $PRIVATE, $field(DefaultTreeSelectionModel, tempPaths)},
	{}
};

$MethodInfo _DefaultTreeSelectionModel_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultTreeSelectionModel::*)()>(&DefaultTreeSelectionModel::init$))},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addSelectionPath", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"addSelectionPaths", "([Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"addTreeSelectionListener", "(Ljavax/swing/event/TreeSelectionListener;)V", nullptr, $PUBLIC},
	{"arePathsContiguous", "([Ljavax/swing/tree/TreePath;)Z", nullptr, $PROTECTED},
	{"canPathsBeAdded", "([Ljavax/swing/tree/TreePath;)Z", nullptr, $PROTECTED},
	{"canPathsBeRemoved", "([Ljavax/swing/tree/TreePath;)Z", nullptr, $PROTECTED},
	{"clearSelection", "()V", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"fireValueChanged", "(Ljavax/swing/event/TreeSelectionEvent;)V", nullptr, $PROTECTED},
	{"getLeadSelectionPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getLeadSelectionRow", "()I", nullptr, $PUBLIC},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getMaxSelectionRow", "()I", nullptr, $PUBLIC},
	{"getMinSelectionRow", "()I", nullptr, $PUBLIC},
	{"getPropertyChangeListeners", "()[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC},
	{"getRowMapper", "()Ljavax/swing/tree/RowMapper;", nullptr, $PUBLIC},
	{"getSelectionCount", "()I", nullptr, $PUBLIC},
	{"getSelectionMode", "()I", nullptr, $PUBLIC},
	{"getSelectionPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getSelectionPaths", "()[Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getSelectionRows", "()[I", nullptr, $PUBLIC},
	{"getTreeSelectionListeners", "()[Ljavax/swing/event/TreeSelectionListener;", nullptr, $PUBLIC},
	{"insureRowContinuity", "()V", nullptr, $PROTECTED},
	{"insureUniqueness", "()V", nullptr, $PROTECTED},
	{"isPathSelected", "(Ljavax/swing/tree/TreePath;)Z", nullptr, $PUBLIC},
	{"isRowSelected", "(I)Z", nullptr, $PUBLIC},
	{"isSelectionEmpty", "()Z", nullptr, $PUBLIC},
	{"notifyPathChange", "(Ljava/util/Vector;Ljavax/swing/tree/TreePath;)V", "(Ljava/util/Vector<*>;Ljavax/swing/tree/TreePath;)V", $PROTECTED | $DEPRECATED, nullptr, nullptr, nullptr, _DefaultTreeSelectionModel_MethodAnnotations_notifyPathChange29},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultTreeSelectionModel::*)($ObjectInputStream*)>(&DefaultTreeSelectionModel::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeSelectionPath", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"removeSelectionPaths", "([Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"removeTreeSelectionListener", "(Ljavax/swing/event/TreeSelectionListener;)V", nullptr, $PUBLIC},
	{"resetRowSelection", "()V", nullptr, $PUBLIC},
	{"setRowMapper", "(Ljavax/swing/tree/RowMapper;)V", nullptr, $PUBLIC},
	{"setSelectionMode", "(I)V", nullptr, $PUBLIC},
	{"setSelectionPath", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"setSelectionPaths", "([Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateLeadIndex", "()V", nullptr, $PROTECTED},
	{"validateSelectionMode", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&DefaultTreeSelectionModel::validateSelectionMode))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultTreeSelectionModel::*)($ObjectOutputStream*)>(&DefaultTreeSelectionModel::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _DefaultTreeSelectionModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.tree.DefaultTreeSelectionModel",
	"java.lang.Object",
	"java.lang.Cloneable,java.io.Serializable,javax.swing.tree.TreeSelectionModel",
	_DefaultTreeSelectionModel_FieldInfo_,
	_DefaultTreeSelectionModel_MethodInfo_
};

$Object* allocate$DefaultTreeSelectionModel($Class* clazz) {
	return $of($alloc(DefaultTreeSelectionModel));
}

int32_t DefaultTreeSelectionModel::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool DefaultTreeSelectionModel::equals(Object$* arg0) {
	 return this->$Cloneable::equals(arg0);
}

void DefaultTreeSelectionModel::finalize() {
	this->$Cloneable::finalize();
}

$String* DefaultTreeSelectionModel::SELECTION_MODE_PROPERTY = nullptr;

void DefaultTreeSelectionModel::init$() {
	$set(this, listenerList, $new($EventListenerList));
	$set(this, listSelectionModel, $new($DefaultListSelectionModel));
	this->selectionMode = $TreeSelectionModel::DISCONTIGUOUS_TREE_SELECTION;
	this->leadIndex = (this->leadRow = -1);
	$set(this, uniquePaths, $new($Hashtable));
	$set(this, lastPaths, $new($Hashtable));
	$set(this, tempPaths, $new($TreePathArray, 1));
}

void DefaultTreeSelectionModel::setRowMapper($RowMapper* newMapper) {
	$set(this, rowMapper, newMapper);
	resetRowSelection();
}

$RowMapper* DefaultTreeSelectionModel::getRowMapper() {
	return this->rowMapper;
}

void DefaultTreeSelectionModel::setSelectionMode(int32_t mode) {
	$useLocalCurrentObjectStackCache();
	int32_t oldMode = this->selectionMode;
	this->selectionMode = validateSelectionMode(mode);
	if (oldMode != this->selectionMode && this->changeSupport != nullptr) {
		$var($String, var$0, DefaultTreeSelectionModel::SELECTION_MODE_PROPERTY);
		$var($Object, var$1, $of($Integer::valueOf(oldMode)));
		$nc(this->changeSupport)->firePropertyChange(var$0, var$1, $($of($Integer::valueOf(this->selectionMode))));
	}
}

int32_t DefaultTreeSelectionModel::validateSelectionMode(int32_t mode) {
	$init(DefaultTreeSelectionModel);
	return (mode != $TreeSelectionModel::SINGLE_TREE_SELECTION && mode != $TreeSelectionModel::CONTIGUOUS_TREE_SELECTION && mode != $TreeSelectionModel::DISCONTIGUOUS_TREE_SELECTION) ? $TreeSelectionModel::DISCONTIGUOUS_TREE_SELECTION : mode;
}

int32_t DefaultTreeSelectionModel::getSelectionMode() {
	return this->selectionMode;
}

void DefaultTreeSelectionModel::setSelectionPath($TreePath* path) {
	if (path == nullptr) {
		setSelectionPaths(nullptr);
	} else {
		$var($TreePathArray, newPaths, $new($TreePathArray, 1));
		newPaths->set(0, path);
		setSelectionPaths(newPaths);
	}
}

void DefaultTreeSelectionModel::setSelectionPaths($TreePathArray* pPaths) {
	$useLocalCurrentObjectStackCache();
	int32_t newCount = 0;
	int32_t newCounter = 0;
	int32_t oldCount = 0;
	int32_t oldCounter = 0;
	$var($TreePathArray, paths, pPaths);
	if (paths == nullptr) {
		newCount = 0;
	} else {
		newCount = $nc(paths)->length;
	}
	if (this->selection == nullptr) {
		oldCount = 0;
	} else {
		oldCount = $nc(this->selection)->length;
	}
	if ((newCount + oldCount) != 0) {
		if (this->selectionMode == $TreeSelectionModel::SINGLE_TREE_SELECTION) {
			if (newCount > 1) {
				$assign(paths, $new($TreePathArray, 1));
				paths->set(0, $nc(pPaths)->get(0));
				newCount = 1;
			}
		} else if (this->selectionMode == $TreeSelectionModel::CONTIGUOUS_TREE_SELECTION) {
			if (newCount > 0 && !arePathsContiguous(paths)) {
				$assign(paths, $new($TreePathArray, 1));
				paths->set(0, $nc(pPaths)->get(0));
				newCount = 1;
			}
		}
		$var($TreePath, beginLeadPath, this->leadPath);
		$var($Vector, cPaths, $new($Vector, newCount + oldCount));
		$var($List, newSelectionAsList, $new($ArrayList, newCount));
		$nc(this->lastPaths)->clear();
		$set(this, leadPath, nullptr);
		for (newCounter = 0; newCounter < newCount; ++newCounter) {
			$var($TreePath, path, $nc(paths)->get(newCounter));
			if (path != nullptr && $nc(this->lastPaths)->get(path) == nullptr) {
				$init($Boolean);
				$nc(this->lastPaths)->put(path, $Boolean::TRUE);
				if ($nc(this->uniquePaths)->get(path) == nullptr) {
					cPaths->addElement($$new($PathPlaceHolder, path, true));
				}
				$set(this, leadPath, path);
				newSelectionAsList->add(path);
			}
		}
		$var($TreePathArray, newSelection, $fcast($TreePathArray, newSelectionAsList->toArray($$new($TreePathArray, newSelectionAsList->size()))));
		for (oldCounter = 0; oldCounter < oldCount; ++oldCounter) {
			if ($nc(this->selection)->get(oldCounter) != nullptr && $nc(this->lastPaths)->get($nc(this->selection)->get(oldCounter)) == nullptr) {
				cPaths->addElement($$new($PathPlaceHolder, $nc(this->selection)->get(oldCounter), false));
			}
		}
		$set(this, selection, newSelection);
		$var($Hashtable, tempHT, this->uniquePaths);
		$set(this, uniquePaths, this->lastPaths);
		$set(this, lastPaths, tempHT);
		$nc(this->lastPaths)->clear();
		insureUniqueness();
		updateLeadIndex();
		resetRowSelection();
		if (cPaths->size() > 0) {
			notifyPathChange(cPaths, beginLeadPath);
		}
	}
}

void DefaultTreeSelectionModel::addSelectionPath($TreePath* path) {
	if (path != nullptr) {
		$var($TreePathArray, toAdd, $new($TreePathArray, 1));
		toAdd->set(0, path);
		addSelectionPaths(toAdd);
	}
}

void DefaultTreeSelectionModel::addSelectionPaths($TreePathArray* paths) {
	$useLocalCurrentObjectStackCache();
	int32_t newPathLength = ((paths == nullptr) ? 0 : $nc(paths)->length);
	if (newPathLength > 0) {
		if (this->selectionMode == $TreeSelectionModel::SINGLE_TREE_SELECTION) {
			setSelectionPaths(paths);
		} else if (this->selectionMode == $TreeSelectionModel::CONTIGUOUS_TREE_SELECTION && !canPathsBeAdded(paths)) {
			if (arePathsContiguous(paths)) {
				setSelectionPaths(paths);
			} else {
				$var($TreePathArray, newPaths, $new($TreePathArray, 1));
				newPaths->set(0, paths->get(0));
				setSelectionPaths(newPaths);
			}
		} else {
			int32_t counter = 0;
			int32_t validCount = 0;
			int32_t oldCount = 0;
			$var($TreePath, beginLeadPath, this->leadPath);
			$var($Vector, cPaths, nullptr);
			if (this->selection == nullptr) {
				oldCount = 0;
			} else {
				oldCount = $nc(this->selection)->length;
			}
			$nc(this->lastPaths)->clear();
			for (counter = 0, validCount = 0; counter < newPathLength; ++counter) {
				if (paths->get(counter) != nullptr) {
					if ($nc(this->uniquePaths)->get(paths->get(counter)) == nullptr) {
						++validCount;
						if (cPaths == nullptr) {
							$assign(cPaths, $new($Vector));
						}
						$nc(cPaths)->addElement($$new($PathPlaceHolder, paths->get(counter), true));
						$init($Boolean);
						$nc(this->uniquePaths)->put(paths->get(counter), $Boolean::TRUE);
						$nc(this->lastPaths)->put(paths->get(counter), $Boolean::TRUE);
					}
					$set(this, leadPath, paths->get(counter));
				}
			}
			if (this->leadPath == nullptr) {
				$set(this, leadPath, beginLeadPath);
			}
			if (validCount > 0) {
				$var($TreePathArray, newSelection, $new($TreePathArray, oldCount + validCount));
				if (oldCount > 0) {
					$System::arraycopy(this->selection, 0, newSelection, 0, oldCount);
				}
				if (validCount != paths->length) {
					$var($Enumeration, newPaths, $nc(this->lastPaths)->keys());
					counter = oldCount;
					while ($nc(newPaths)->hasMoreElements()) {
						newSelection->set(counter++, $cast($TreePath, $(newPaths->nextElement())));
					}
				} else {
					$System::arraycopy(paths, 0, newSelection, oldCount, validCount);
				}
				$set(this, selection, newSelection);
				insureUniqueness();
				updateLeadIndex();
				resetRowSelection();
				notifyPathChange(cPaths, beginLeadPath);
			} else {
				$set(this, leadPath, beginLeadPath);
			}
			$nc(this->lastPaths)->clear();
		}
	}
}

void DefaultTreeSelectionModel::removeSelectionPath($TreePath* path) {
	if (path != nullptr) {
		$var($TreePathArray, rPath, $new($TreePathArray, 1));
		rPath->set(0, path);
		removeSelectionPaths(rPath);
	}
}

void DefaultTreeSelectionModel::removeSelectionPaths($TreePathArray* paths) {
	$useLocalCurrentObjectStackCache();
	if (paths != nullptr && this->selection != nullptr && paths->length > 0) {
		if (!canPathsBeRemoved(paths)) {
			clearSelection();
		} else {
			$var($Vector, pathsToRemove, nullptr);
			for (int32_t removeCounter = paths->length - 1; removeCounter >= 0; --removeCounter) {
				if (paths->get(removeCounter) != nullptr) {
					if ($nc(this->uniquePaths)->get(paths->get(removeCounter)) != nullptr) {
						if (pathsToRemove == nullptr) {
							$assign(pathsToRemove, $new($Vector, paths->length));
						}
						$nc(this->uniquePaths)->remove(paths->get(removeCounter));
						$nc(pathsToRemove)->addElement($$new($PathPlaceHolder, paths->get(removeCounter), false));
					}
				}
			}
			if (pathsToRemove != nullptr) {
				int32_t removeCount = pathsToRemove->size();
				$var($TreePath, beginLeadPath, this->leadPath);
				if (removeCount == $nc(this->selection)->length) {
					$set(this, selection, nullptr);
				} else {
					$var($Enumeration, pEnum, $nc(this->uniquePaths)->keys());
					int32_t validCount = 0;
					$set(this, selection, $new($TreePathArray, $nc(this->selection)->length - removeCount));
					while ($nc(pEnum)->hasMoreElements()) {
						$nc(this->selection)->set(validCount++, $cast($TreePath, $(pEnum->nextElement())));
					}
				}
				if (this->leadPath != nullptr && $nc(this->uniquePaths)->get(this->leadPath) == nullptr) {
					if (this->selection != nullptr) {
						$set(this, leadPath, $nc(this->selection)->get($nc(this->selection)->length - 1));
					} else {
						$set(this, leadPath, nullptr);
					}
				} else if (this->selection != nullptr) {
					$set(this, leadPath, $nc(this->selection)->get($nc(this->selection)->length - 1));
				} else {
					$set(this, leadPath, nullptr);
				}
				updateLeadIndex();
				resetRowSelection();
				notifyPathChange(pathsToRemove, beginLeadPath);
			}
		}
	}
}

$TreePath* DefaultTreeSelectionModel::getSelectionPath() {
	if (this->selection != nullptr && $nc(this->selection)->length > 0) {
		return $nc(this->selection)->get(0);
	}
	return nullptr;
}

$TreePathArray* DefaultTreeSelectionModel::getSelectionPaths() {
	if (this->selection != nullptr) {
		int32_t pathSize = $nc(this->selection)->length;
		$var($TreePathArray, result, $new($TreePathArray, pathSize));
		$System::arraycopy(this->selection, 0, result, 0, pathSize);
		return result;
	}
	return $new($TreePathArray, 0);
}

int32_t DefaultTreeSelectionModel::getSelectionCount() {
	return (this->selection == nullptr) ? 0 : $nc(this->selection)->length;
}

bool DefaultTreeSelectionModel::isPathSelected($TreePath* path) {
	return (path != nullptr) ? ($nc(this->uniquePaths)->get(path) != nullptr) : false;
}

bool DefaultTreeSelectionModel::isSelectionEmpty() {
	return (this->selection == nullptr || $nc(this->selection)->length == 0);
}

void DefaultTreeSelectionModel::clearSelection() {
	$useLocalCurrentObjectStackCache();
	if (this->selection != nullptr && $nc(this->selection)->length > 0) {
		int32_t selSize = $nc(this->selection)->length;
		$var($booleans, newness, $new($booleans, selSize));
		for (int32_t counter = 0; counter < selSize; ++counter) {
			newness->set(counter, false);
		}
		$var($TreeSelectionEvent, event, $new($TreeSelectionEvent, $of(this), this->selection, newness, this->leadPath, ($TreePath*)nullptr));
		$set(this, leadPath, nullptr);
		this->leadIndex = (this->leadRow = -1);
		$nc(this->uniquePaths)->clear();
		$set(this, selection, nullptr);
		resetRowSelection();
		fireValueChanged(event);
	}
}

void DefaultTreeSelectionModel::addTreeSelectionListener($TreeSelectionListener* x) {
	$load($TreeSelectionListener);
	$nc(this->listenerList)->add($TreeSelectionListener::class$, x);
}

void DefaultTreeSelectionModel::removeTreeSelectionListener($TreeSelectionListener* x) {
	$load($TreeSelectionListener);
	$nc(this->listenerList)->remove($TreeSelectionListener::class$, x);
}

$TreeSelectionListenerArray* DefaultTreeSelectionModel::getTreeSelectionListeners() {
	$load($TreeSelectionListener);
	return $fcast($TreeSelectionListenerArray, $nc(this->listenerList)->getListeners($TreeSelectionListener::class$));
}

void DefaultTreeSelectionModel::fireValueChanged($TreeSelectionEvent* e) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($TreeSelectionListener);
		if ($equals(listeners->get(i), $TreeSelectionListener::class$)) {
			$nc(($cast($TreeSelectionListener, listeners->get(i + 1))))->valueChanged(e);
		}
	}
}

$EventListenerArray* DefaultTreeSelectionModel::getListeners($Class* listenerType) {
	return $nc(this->listenerList)->getListeners(listenerType);
}

$ints* DefaultTreeSelectionModel::getSelectionRows() {
	$useLocalCurrentObjectStackCache();
	if (this->rowMapper != nullptr && this->selection != nullptr && $nc(this->selection)->length > 0) {
		$var($ints, rows, $nc(this->rowMapper)->getRowsForPaths(this->selection));
		if (rows != nullptr) {
			int32_t invisCount = 0;
			for (int32_t counter = rows->length - 1; counter >= 0; --counter) {
				if (rows->get(counter) == -1) {
					++invisCount;
				}
			}
			if (invisCount > 0) {
				if (invisCount == rows->length) {
					$assign(rows, nullptr);
				} else {
					$var($ints, tempRows, $new($ints, rows->length - invisCount));
					{
						int32_t counter = rows->length - 1;
						int32_t visCounter = 0;
						for (; counter >= 0; --counter) {
							if (rows->get(counter) != -1) {
								tempRows->set(visCounter++, rows->get(counter));
							}
						}
					}
					$assign(rows, tempRows);
				}
			}
		}
		return rows;
	}
	return $new($ints, 0);
}

int32_t DefaultTreeSelectionModel::getMinSelectionRow() {
	return $nc(this->listSelectionModel)->getMinSelectionIndex();
}

int32_t DefaultTreeSelectionModel::getMaxSelectionRow() {
	return $nc(this->listSelectionModel)->getMaxSelectionIndex();
}

bool DefaultTreeSelectionModel::isRowSelected(int32_t row) {
	return $nc(this->listSelectionModel)->isSelectedIndex(row);
}

void DefaultTreeSelectionModel::resetRowSelection() {
	$nc(this->listSelectionModel)->clearSelection();
	if (this->selection != nullptr && this->rowMapper != nullptr) {
		int32_t aRow = 0;
		int32_t validCount = 0;
		$var($ints, rows, $nc(this->rowMapper)->getRowsForPaths(this->selection));
		{
			int32_t counter = 0;
			int32_t maxCounter = $nc(this->selection)->length;
			for (; counter < maxCounter; ++counter) {
				aRow = $nc(rows)->get(counter);
				if (aRow != -1) {
					$nc(this->listSelectionModel)->addSelectionInterval(aRow, aRow);
				}
			}
		}
		if (this->leadIndex != -1 && rows != nullptr) {
			this->leadRow = rows->get(this->leadIndex);
		} else if (this->leadPath != nullptr) {
			$nc(this->tempPaths)->set(0, this->leadPath);
			$assign(rows, $nc(this->rowMapper)->getRowsForPaths(this->tempPaths));
			this->leadRow = (rows != nullptr) ? $nc(rows)->get(0) : -1;
		} else {
			this->leadRow = -1;
		}
		insureRowContinuity();
	} else {
		this->leadRow = -1;
	}
}

int32_t DefaultTreeSelectionModel::getLeadSelectionRow() {
	return this->leadRow;
}

$TreePath* DefaultTreeSelectionModel::getLeadSelectionPath() {
	return this->leadPath;
}

void DefaultTreeSelectionModel::addPropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(this) {
		if (this->changeSupport == nullptr) {
			$set(this, changeSupport, $new($SwingPropertyChangeSupport, this));
		}
		$nc(this->changeSupport)->addPropertyChangeListener(listener);
	}
}

void DefaultTreeSelectionModel::removePropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(this) {
		if (this->changeSupport == nullptr) {
			return;
		}
		$nc(this->changeSupport)->removePropertyChangeListener(listener);
	}
}

$PropertyChangeListenerArray* DefaultTreeSelectionModel::getPropertyChangeListeners() {
	if (this->changeSupport == nullptr) {
		return $new($PropertyChangeListenerArray, 0);
	}
	return $nc(this->changeSupport)->getPropertyChangeListeners();
}

void DefaultTreeSelectionModel::insureRowContinuity() {
	$useLocalCurrentObjectStackCache();
	if (this->selectionMode == $TreeSelectionModel::CONTIGUOUS_TREE_SELECTION && this->selection != nullptr && this->rowMapper != nullptr) {
		$var($DefaultListSelectionModel, lModel, this->listSelectionModel);
		int32_t min = $nc(lModel)->getMinSelectionIndex();
		if (min != -1) {
			{
				int32_t counter = min;
				int32_t maxCounter = lModel->getMaxSelectionIndex();
				for (; counter <= maxCounter; ++counter) {
					if (!lModel->isSelectedIndex(counter)) {
						if (counter == min) {
							clearSelection();
						} else {
							$var($TreePathArray, newSel, $new($TreePathArray, counter - min));
							$var($ints, selectionIndex, $nc(this->rowMapper)->getRowsForPaths(this->selection));
							for (int32_t i = 0; i < $nc(selectionIndex)->length; ++i) {
								if (selectionIndex->get(i) < counter) {
									newSel->set(selectionIndex->get(i) - min, $nc(this->selection)->get(i));
								}
							}
							setSelectionPaths(newSel);
							break;
						}
					}
				}
			}
		}
	} else if (this->selectionMode == $TreeSelectionModel::SINGLE_TREE_SELECTION && this->selection != nullptr && $nc(this->selection)->length > 1) {
		setSelectionPath($nc(this->selection)->get(0));
	}
}

bool DefaultTreeSelectionModel::arePathsContiguous($TreePathArray* paths) {
	$useLocalCurrentObjectStackCache();
	if (this->rowMapper == nullptr || $nc(paths)->length < 2) {
		return true;
	} else {
		$var($BitSet, bitSet, $new($BitSet, 32));
		int32_t anIndex = 0;
		int32_t counter = 0;
		int32_t min = 0;
		int32_t pathCount = paths->length;
		int32_t validCount = 0;
		$var($TreePathArray, tempPath, $new($TreePathArray, 1));
		tempPath->set(0, paths->get(0));
		min = $nc($($nc(this->rowMapper)->getRowsForPaths(tempPath)))->get(0);
		for (counter = 0; counter < pathCount; ++counter) {
			if (paths->get(counter) != nullptr) {
				tempPath->set(0, paths->get(counter));
				$var($ints, rows, $nc(this->rowMapper)->getRowsForPaths(tempPath));
				if (rows == nullptr) {
					return false;
				}
				anIndex = $nc(rows)->get(0);
				if (anIndex == -1 || anIndex < (min - pathCount) || anIndex > (min + pathCount)) {
					return false;
				}
				if (anIndex < min) {
					min = anIndex;
				}
				if (!bitSet->get(anIndex)) {
					bitSet->set(anIndex);
					++validCount;
				}
			}
		}
		int32_t maxCounter = validCount + min;
		for (counter = min; counter < maxCounter; ++counter) {
			if (!bitSet->get(counter)) {
				return false;
			}
		}
	}
	return true;
}

bool DefaultTreeSelectionModel::canPathsBeAdded($TreePathArray* paths) {
	$useLocalCurrentObjectStackCache();
	if (paths == nullptr || $nc(paths)->length == 0 || this->rowMapper == nullptr || this->selection == nullptr || this->selectionMode == $TreeSelectionModel::DISCONTIGUOUS_TREE_SELECTION) {
		return true;
	} else {
		$var($BitSet, bitSet, $new($BitSet));
		$var($DefaultListSelectionModel, lModel, this->listSelectionModel);
		int32_t anIndex = 0;
		int32_t counter = 0;
		int32_t min = $nc(lModel)->getMinSelectionIndex();
		int32_t max = lModel->getMaxSelectionIndex();
		$var($TreePathArray, tempPath, $new($TreePathArray, 1));
		if (min != -1) {
			for (counter = min; counter <= max; ++counter) {
				if (lModel->isSelectedIndex(counter)) {
					bitSet->set(counter);
				}
			}
		} else {
			tempPath->set(0, $nc(paths)->get(0));
			min = (max = $nc($($nc(this->rowMapper)->getRowsForPaths(tempPath)))->get(0));
		}
		for (counter = $nc(paths)->length - 1; counter >= 0; --counter) {
			if (paths->get(counter) != nullptr) {
				tempPath->set(0, paths->get(counter));
				$var($ints, rows, $nc(this->rowMapper)->getRowsForPaths(tempPath));
				if (rows == nullptr) {
					return false;
				}
				anIndex = $nc(rows)->get(0);
				min = $Math::min(anIndex, min);
				max = $Math::max(anIndex, max);
				if (anIndex == -1) {
					return false;
				}
				bitSet->set(anIndex);
			}
		}
		for (counter = min; counter <= max; ++counter) {
			if (!bitSet->get(counter)) {
				return false;
			}
		}
	}
	return true;
}

bool DefaultTreeSelectionModel::canPathsBeRemoved($TreePathArray* paths) {
	$useLocalCurrentObjectStackCache();
	if (this->rowMapper == nullptr || this->selection == nullptr || this->selectionMode == $TreeSelectionModel::DISCONTIGUOUS_TREE_SELECTION) {
		return true;
	} else {
		$var($BitSet, bitSet, $new($BitSet));
		int32_t counter = 0;
		int32_t pathCount = $nc(paths)->length;
		int32_t anIndex = 0;
		int32_t min = -1;
		int32_t validCount = 0;
		$var($TreePathArray, tempPath, $new($TreePathArray, 1));
		$var($ints, rows, nullptr);
		$nc(this->lastPaths)->clear();
		for (counter = 0; counter < pathCount; ++counter) {
			if (paths->get(counter) != nullptr) {
				$init($Boolean);
				$nc(this->lastPaths)->put(paths->get(counter), $Boolean::TRUE);
			}
		}
		for (counter = $nc(this->selection)->length - 1; counter >= 0; --counter) {
			if ($nc(this->lastPaths)->get($nc(this->selection)->get(counter)) == nullptr) {
				tempPath->set(0, $nc(this->selection)->get(counter));
				$assign(rows, $nc(this->rowMapper)->getRowsForPaths(tempPath));
				if (rows != nullptr && rows->get(0) != -1 && !bitSet->get(rows->get(0))) {
					++validCount;
					if (min == -1) {
						min = rows->get(0);
					} else {
						min = $Math::min(min, rows->get(0));
					}
					bitSet->set(rows->get(0));
				}
			}
		}
		$nc(this->lastPaths)->clear();
		if (validCount > 1) {
			for (counter = min + validCount - 1; counter >= min; --counter) {
				if (!bitSet->get(counter)) {
					return false;
				}
			}
		}
	}
	return true;
}

void DefaultTreeSelectionModel::notifyPathChange($Vector* changedPaths, $TreePath* oldLeadSelection) {
	$useLocalCurrentObjectStackCache();
	int32_t cPathCount = $nc(changedPaths)->size();
	$var($booleans, newness, $new($booleans, cPathCount));
	$var($TreePathArray, paths, $new($TreePathArray, cPathCount));
	$var($PathPlaceHolder, placeholder, nullptr);
	for (int32_t counter = 0; counter < cPathCount; ++counter) {
		$assign(placeholder, $cast($PathPlaceHolder, changedPaths->elementAt(counter)));
		newness->set(counter, $nc(placeholder)->isNew);
		paths->set(counter, placeholder->path);
	}
	$var($TreeSelectionEvent, event, $new($TreeSelectionEvent, $of(this), paths, newness, oldLeadSelection, this->leadPath));
	fireValueChanged(event);
}

void DefaultTreeSelectionModel::updateLeadIndex() {
	if (this->leadPath != nullptr) {
		if (this->selection == nullptr) {
			$set(this, leadPath, nullptr);
			this->leadIndex = (this->leadRow = -1);
		} else {
			this->leadRow = (this->leadIndex = -1);
			for (int32_t counter = $nc(this->selection)->length - 1; counter >= 0; --counter) {
				if ($nc(this->selection)->get(counter) == this->leadPath) {
					this->leadIndex = counter;
					break;
				}
			}
		}
	} else {
		this->leadIndex = -1;
	}
}

void DefaultTreeSelectionModel::insureUniqueness() {
}

$String* DefaultTreeSelectionModel::toString() {
	$useLocalCurrentObjectStackCache();
	int32_t selCount = getSelectionCount();
	$var($StringBuilder, sb, $new($StringBuilder));
	$var($ints, rows, nullptr);
	if (this->rowMapper != nullptr) {
		$assign(rows, $nc(this->rowMapper)->getRowsForPaths(this->selection));
	} else {
		$assign(rows, nullptr);
	}
	$var($String, var$1, $$str({$($of(this)->getClass()->getName()), " "_s}));
	$var($String, var$0, $$concat(var$1, $$str(hashCode())));
	sb->append($$concat(var$0, " [ "_s));
	for (int32_t counter = 0; counter < selCount; ++counter) {
		if (rows != nullptr) {
			$var($String, var$3, $$str({$($nc($nc(this->selection)->get(counter))->toString()), "@"_s}));
			$var($String, var$2, $$concat(var$3, $($Integer::toString(rows->get(counter)))));
			sb->append($$concat(var$2, " "_s));
		} else {
			sb->append($$str({$($nc($nc(this->selection)->get(counter))->toString()), " "_s}));
		}
	}
	sb->append("]"_s);
	return sb->toString();
}

$Object* DefaultTreeSelectionModel::clone() {
	$var(DefaultTreeSelectionModel, clone, $cast(DefaultTreeSelectionModel, $Cloneable::clone()));
	$set($nc(clone), changeSupport, nullptr);
	if (this->selection != nullptr) {
		int32_t selLength = $nc(this->selection)->length;
		$set(clone, selection, $new($TreePathArray, selLength));
		$System::arraycopy(this->selection, 0, clone->selection, 0, selLength);
	}
	$set(clone, listenerList, $new($EventListenerList));
	$set(clone, listSelectionModel, $cast($DefaultListSelectionModel, $nc(this->listSelectionModel)->clone()));
	$set(clone, uniquePaths, $new($Hashtable));
	$set(clone, lastPaths, $new($Hashtable));
	$set(clone, tempPaths, $new($TreePathArray, 1));
	return $of(clone);
}

void DefaultTreeSelectionModel::writeObject($ObjectOutputStream* s) {
	$var($ObjectArray, tValues, nullptr);
	$nc(s)->defaultWriteObject();
	if (this->rowMapper != nullptr && $instanceOf($Serializable, this->rowMapper)) {
		$assign(tValues, $new($ObjectArray, 2));
		tValues->set(0, "rowMapper"_s);
		tValues->set(1, this->rowMapper);
	} else {
		$assign(tValues, $new($ObjectArray, 0));
	}
	s->writeObject(tValues);
}

void DefaultTreeSelectionModel::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	$set(this, changeSupport, $cast($SwingPropertyChangeSupport, $nc(f)->get("changeSupport"_s, ($Object*)nullptr)));
	$set(this, selection, $cast($TreePathArray, f->get("selection"_s, ($Object*)nullptr)));
	$var($EventListenerList, newListenerList, $cast($EventListenerList, f->get("listenerList"_s, ($Object*)nullptr)));
	if (newListenerList == nullptr) {
		$throwNew($InvalidObjectException, "Null listenerList"_s);
	}
	$set(this, listenerList, newListenerList);
	$set(this, listSelectionModel, $cast($DefaultListSelectionModel, f->get("listSelectionModel"_s, ($Object*)nullptr)));
	this->selectionMode = validateSelectionMode(f->get("selectionMode"_s, 0));
	$set(this, leadPath, $cast($TreePath, f->get("leadPath"_s, ($Object*)nullptr)));
	this->leadIndex = f->get("leadIndex"_s, 0);
	this->leadRow = f->get("leadRow"_s, 0);
	$var($Hashtable, newUniquePaths, $cast($Hashtable, f->get("uniquePaths"_s, ($Object*)nullptr)));
	$set(this, uniquePaths, newUniquePaths);
	$var($Hashtable, newLastPaths, $cast($Hashtable, f->get("lastPaths"_s, ($Object*)nullptr)));
	$set(this, lastPaths, newLastPaths);
	$set(this, tempPaths, $cast($TreePathArray, f->get("tempPaths"_s, ($Object*)nullptr)));
	$var($ObjectArray, tValues, nullptr);
	$assign(tValues, $cast($ObjectArray, s->readObject()));
	if ($nc(tValues)->length > 0 && $nc($of(tValues->get(0)))->equals("rowMapper"_s)) {
		$var($RowMapper, newRowMapper, $cast($RowMapper, tValues->get(1)));
		if (newRowMapper == nullptr) {
			$throwNew($InvalidObjectException, "Null newRowMapper"_s);
		}
		$set(this, rowMapper, newRowMapper);
	}
}

DefaultTreeSelectionModel::DefaultTreeSelectionModel() {
}

void clinit$DefaultTreeSelectionModel($Class* class$) {
	$assignStatic(DefaultTreeSelectionModel::SELECTION_MODE_PROPERTY, "selectionMode"_s);
}

$Class* DefaultTreeSelectionModel::load$($String* name, bool initialize) {
	$loadClass(DefaultTreeSelectionModel, name, initialize, &_DefaultTreeSelectionModel_ClassInfo_, clinit$DefaultTreeSelectionModel, allocate$DefaultTreeSelectionModel);
	return class$;
}

$Class* DefaultTreeSelectionModel::class$ = nullptr;

		} // tree
	} // swing
} // javax