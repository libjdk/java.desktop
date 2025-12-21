#include <java/awt/AWTEvent.h>

#include <java/awt/AWTEvent$1.h>
#include <java/awt/Button.h>
#include <java/awt/Choice.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Event.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/List.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuItem.h>
#include <java/awt/Point.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/TextEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/LightweightPeer.h>
#include <java/lang/SecurityException.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/util/EventObject.h>
#include <sun/awt/AWTAccessor$AWTEventAccessor.h>
#include <sun/awt/AWTAccessor$InputEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

#undef ACTION_EVENT
#undef ACTION_EVENT_MASK
#undef ACTION_PERFORMED
#undef ADJUSTMENT_EVENT_MASK
#undef ADJUSTMENT_VALUE_CHANGED
#undef BLOCK_DECREMENT
#undef BLOCK_INCREMENT
#undef BUTTON1_MASK
#undef CARET_POSITION_CHANGED
#undef COMPONENT_EVENT_MASK
#undef COMPONENT_MOVED
#undef CONTAINER_EVENT_MASK
#undef FOCUS_EVENT_MASK
#undef FOCUS_GAINED
#undef FOCUS_LOST
#undef GOT_FOCUS
#undef HIERARCHY_BOUNDS_EVENT_MASK
#undef HIERARCHY_EVENT_MASK
#undef INPUT_METHODS_ENABLED_MASK
#undef INPUT_METHOD_EVENT_MASK
#undef INPUT_METHOD_TEXT_CHANGED
#undef INVOCATION_EVENT_MASK
#undef ITEM_EVENT_MASK
#undef ITEM_STATE_CHANGED
#undef KEY_ACTION
#undef KEY_ACTION_RELEASE
#undef KEY_EVENT_MASK
#undef KEY_PRESSED
#undef KEY_RELEASED
#undef LIST_DESELECT
#undef LIST_SELECT
#undef LOST_FOCUS
#undef MOUSE_DRAGGED
#undef MOUSE_ENTERED
#undef MOUSE_EVENT_MASK
#undef MOUSE_EXITED
#undef MOUSE_MOTION_EVENT_MASK
#undef MOUSE_MOVED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef MOUSE_WHEEL
#undef MOUSE_WHEEL_EVENT_MASK
#undef PAINT_EVENT_MASK
#undef RESERVED_ID_MAX
#undef SCROLL_ABSOLUTE
#undef SCROLL_END
#undef SCROLL_LINE_DOWN
#undef SCROLL_LINE_UP
#undef SCROLL_PAGE_DOWN
#undef SCROLL_PAGE_UP
#undef SELECTED
#undef TEXT_EVENT_MASK
#undef TEXT_VALUE_CHANGED
#undef TRACK
#undef UNIT_DECREMENT
#undef UNIT_INCREMENT
#undef VK_ALT
#undef VK_CONTROL
#undef VK_SHIFT
#undef WINDOW_CLOSING
#undef WINDOW_DEICONIFIED
#undef WINDOW_EVENT_MASK
#undef WINDOW_FOCUS_EVENT_MASK
#undef WINDOW_ICONIFIED
#undef WINDOW_MOVED
#undef WINDOW_STATE_EVENT_MASK

using $AWTEvent$1 = ::java::awt::AWTEvent$1;
using $Button = ::java::awt::Button;
using $Choice = ::java::awt::Choice;
using $Component = ::java::awt::Component;
using $Dialog = ::java::awt::Dialog;
using $Event = ::java::awt::Event;
using $Frame = ::java::awt::Frame;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $List = ::java::awt::List;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuItem = ::java::awt::MenuItem;
using $Point = ::java::awt::Point;
using $Toolkit = ::java::awt::Toolkit;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $TextEvent = ::java::awt::event::TextEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $LightweightPeer = ::java::awt::peer::LightweightPeer;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SecurityException = ::java::lang::SecurityException;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $EventObject = ::java::util::EventObject;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$AWTEventAccessor = ::sun::awt::AWTAccessor$AWTEventAccessor;
using $AWTAccessor$InputEventAccessor = ::sun::awt::AWTAccessor$InputEventAccessor;

namespace java {
	namespace awt {

$NamedAttribute AWTEvent_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _AWTEvent_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", AWTEvent_Attribute_var$0},
	{}
};

$FieldInfo _AWTEvent_FieldInfo_[] = {
	{"bdata", "[B", nullptr, $PRIVATE, $field(AWTEvent, bdata)},
	{"id", "I", nullptr, $PROTECTED, $field(AWTEvent, id)},
	{"consumed", "Z", nullptr, $PROTECTED, $field(AWTEvent, consumed)},
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(AWTEvent, acc)},
	{"focusManagerIsDispatching", "Z", nullptr, $TRANSIENT, $field(AWTEvent, focusManagerIsDispatching)},
	{"isPosted", "Z", nullptr, $TRANSIENT, $field(AWTEvent, isPosted)},
	{"isSystemGenerated", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(AWTEvent, isSystemGenerated)},
	{"COMPONENT_EVENT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AWTEvent, COMPONENT_EVENT_MASK)},
	{"CONTAINER_EVENT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AWTEvent, CONTAINER_EVENT_MASK)},
	{"FOCUS_EVENT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AWTEvent, FOCUS_EVENT_MASK)},
	{"KEY_EVENT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AWTEvent, KEY_EVENT_MASK)},
	{"MOUSE_EVENT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AWTEvent, MOUSE_EVENT_MASK)},
	{"MOUSE_MOTION_EVENT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AWTEvent, MOUSE_MOTION_EVENT_MASK)},
	{"WINDOW_EVENT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AWTEvent, WINDOW_EVENT_MASK)},
	{"ACTION_EVENT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AWTEvent, ACTION_EVENT_MASK)},
	{"ADJUSTMENT_EVENT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AWTEvent, ADJUSTMENT_EVENT_MASK)},
	{"ITEM_EVENT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AWTEvent, ITEM_EVENT_MASK)},
	{"TEXT_EVENT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AWTEvent, TEXT_EVENT_MASK)},
	{"INPUT_METHOD_EVENT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AWTEvent, INPUT_METHOD_EVENT_MASK)},
	{"INPUT_METHODS_ENABLED_MASK", "J", nullptr, $STATIC | $FINAL, $constField(AWTEvent, INPUT_METHODS_ENABLED_MASK)},
	{"PAINT_EVENT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AWTEvent, PAINT_EVENT_MASK)},
	{"INVOCATION_EVENT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AWTEvent, INVOCATION_EVENT_MASK)},
	{"HIERARCHY_EVENT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AWTEvent, HIERARCHY_EVENT_MASK)},
	{"HIERARCHY_BOUNDS_EVENT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AWTEvent, HIERARCHY_BOUNDS_EVENT_MASK)},
	{"MOUSE_WHEEL_EVENT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AWTEvent, MOUSE_WHEEL_EVENT_MASK)},
	{"WINDOW_STATE_EVENT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AWTEvent, WINDOW_STATE_EVENT_MASK)},
	{"WINDOW_FOCUS_EVENT_MASK", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AWTEvent, WINDOW_FOCUS_EVENT_MASK)},
	{"RESERVED_ID_MAX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AWTEvent, RESERVED_ID_MAX)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AWTEvent, serialVersionUID)},
	{}
};

$MethodInfo _AWTEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Event;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(AWTEvent::*)($Event*)>(&AWTEvent::init$)), nullptr, nullptr, _AWTEvent_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $method(static_cast<void(AWTEvent::*)(Object$*,int32_t)>(&AWTEvent::init$))},
	{"consume", "()V", nullptr, $PROTECTED},
	{"convertToOld", "()Ljava/awt/Event;", nullptr, 0},
	{"copyPrivateDataInto", "(Ljava/awt/AWTEvent;)V", nullptr, 0},
	{"dispatched", "()V", nullptr, 0},
	{"getAccessControlContext", "()Ljava/security/AccessControlContext;", nullptr, $FINAL, $method(static_cast<$AccessControlContext*(AWTEvent::*)()>(&AWTEvent::getAccessControlContext))},
	{"getID", "()I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&AWTEvent::initIDs))},
	{"isConsumed", "()Z", nullptr, $PROTECTED},
	{"nativeSetSource", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(AWTEvent::*)($ComponentPeer*)>(&AWTEvent::nativeSetSource))},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setSource", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 8
#define _METHOD_INDEX_nativeSetSource 10

$InnerClassInfo _AWTEvent_InnerClassesInfo_[] = {
	{"java.awt.AWTEvent$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AWTEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.AWTEvent",
	"java.util.EventObject",
	nullptr,
	_AWTEvent_FieldInfo_,
	_AWTEvent_MethodInfo_,
	nullptr,
	nullptr,
	_AWTEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.AWTEvent$1"
};

$Object* allocate$AWTEvent($Class* clazz) {
	return $of($alloc(AWTEvent));
}

$AccessControlContext* AWTEvent::getAccessControlContext() {
	if (this->acc == nullptr) {
		$throwNew($SecurityException, "AWTEvent is missing AccessControlContext"_s);
	}
	return this->acc;
}

void AWTEvent::initIDs() {
	$init(AWTEvent);
	$prepareNativeStatic(AWTEvent, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void AWTEvent::init$($Event* event) {
	AWTEvent::init$($nc(event)->target, event->id);
}

void AWTEvent::init$(Object$* source, int32_t id) {
	$EventObject::init$(source);
	this->consumed = false;
	$set(this, acc, $AccessController::getContext());
	this->focusManagerIsDispatching = false;
	this->id = id;
	switch (id) {
	case $ActionEvent::ACTION_PERFORMED:
		{}
	case $ItemEvent::ITEM_STATE_CHANGED:
		{}
	case $AdjustmentEvent::ADJUSTMENT_VALUE_CHANGED:
		{}
	case $TextEvent::TEXT_VALUE_CHANGED:
		{
			this->consumed = true;
			break;
		}
	default:
		{}
	}
}

void AWTEvent::setSource(Object$* newSource) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this->source, newSource)) {
		return;
	}
	$var($Component, comp, nullptr);
	if ($instanceOf($Component, newSource)) {
		$assign(comp, $cast($Component, newSource));
		while (comp != nullptr && comp->peer != nullptr && ($instanceOf($LightweightPeer, comp->peer))) {
			$assign(comp, comp->parent);
		}
	}
	$synchronized(this) {
		$set(this, source, newSource);
		if (comp != nullptr) {
			$var($ComponentPeer, peer, comp->peer);
			if (peer != nullptr) {
				nativeSetSource(peer);
			}
		}
	}
}

void AWTEvent::nativeSetSource($ComponentPeer* peer) {
	$prepareNative(AWTEvent, nativeSetSource, void, $ComponentPeer* peer);
	$invokeNative(peer);
	$finishNative();
}

int32_t AWTEvent::getID() {
	return this->id;
}

$String* AWTEvent::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, srcName, nullptr);
	if ($instanceOf($Component, this->source)) {
		$assign(srcName, $nc(($cast($Component, this->source)))->getName());
	} else if ($instanceOf($MenuComponent, this->source)) {
		$assign(srcName, $nc(($cast($MenuComponent, this->source)))->getName());
	}
	$var($String, var$2, $$str({$($of(this)->getClass()->getName()), "["_s}));
	$var($String, var$1, $$concat(var$2, $(paramString())));
	$var($String, var$0, $$concat(var$1, "] on "_s));
	return $concat(var$0, $((srcName != nullptr ? $of(srcName) : this->source)));
}

$String* AWTEvent::paramString() {
	return ""_s;
}

void AWTEvent::consume() {
	switch (this->id) {
	case $KeyEvent::KEY_PRESSED:
		{}
	case $KeyEvent::KEY_RELEASED:
		{}
	case $MouseEvent::MOUSE_PRESSED:
		{}
	case $MouseEvent::MOUSE_RELEASED:
		{}
	case $MouseEvent::MOUSE_MOVED:
		{}
	case $MouseEvent::MOUSE_DRAGGED:
		{}
	case $MouseEvent::MOUSE_ENTERED:
		{}
	case $MouseEvent::MOUSE_EXITED:
		{}
	case $MouseEvent::MOUSE_WHEEL:
		{}
	case $InputMethodEvent::INPUT_METHOD_TEXT_CHANGED:
		{}
	case $InputMethodEvent::CARET_POSITION_CHANGED:
		{
			this->consumed = true;
			break;
		}
	default:
		{}
	}
}

bool AWTEvent::isConsumed() {
	return this->consumed;
}

$Event* AWTEvent::convertToOld() {
	$useLocalCurrentObjectStackCache();
	$var($Object, src, getSource());
	int32_t newid = this->id;
	{
		$var($KeyEvent, ke, nullptr)
		int32_t keyCode = 0;
		$var($MouseEvent, me, nullptr)
		$var($Event, olde, nullptr)
		$var($ActionEvent, ae, nullptr)
		$var($String, cmd, nullptr)
		$var($ItemEvent, ie, nullptr)
		$var($Object, arg, nullptr)
		$var($AdjustmentEvent, aje, nullptr)
		switch (this->id) {
		case $KeyEvent::KEY_PRESSED:
			{}
		case $KeyEvent::KEY_RELEASED:
			{
				$assign(ke, $cast($KeyEvent, this));
				if ($nc(ke)->isActionKey()) {
					newid = (this->id == $KeyEvent::KEY_PRESSED ? $Event::KEY_ACTION : $Event::KEY_ACTION_RELEASE);
				}
				keyCode = $nc(ke)->getKeyCode();
				if (keyCode == $KeyEvent::VK_SHIFT || keyCode == $KeyEvent::VK_CONTROL || keyCode == $KeyEvent::VK_ALT) {
					return nullptr;
				}
				$var($Object, var$0, src);
				int64_t var$1 = ke->getWhen();
				int32_t var$2 = newid;
				int32_t var$3 = $Event::getOldEventKey(ke);
				return $new($Event, var$0, var$1, var$2, 0, 0, var$3, ((int32_t)(ke->getModifiers() & (uint32_t)~$InputEvent::BUTTON1_MASK)));
			}
		case $MouseEvent::MOUSE_PRESSED:
			{}
		case $MouseEvent::MOUSE_RELEASED:
			{}
		case $MouseEvent::MOUSE_MOVED:
			{}
		case $MouseEvent::MOUSE_DRAGGED:
			{}
		case $MouseEvent::MOUSE_ENTERED:
			{}
		case $MouseEvent::MOUSE_EXITED:
			{
				$assign(me, $cast($MouseEvent, this));
				$var($Object, var$4, src);
				int64_t var$5 = $nc(me)->getWhen();
				int32_t var$6 = newid;
				int32_t var$7 = me->getX();
				int32_t var$8 = me->getY();
				$assign(olde, $new($Event, var$4, var$5, var$6, var$7, var$8, 0, ((int32_t)(me->getModifiers() & (uint32_t)~$InputEvent::BUTTON1_MASK))));
				$nc(olde)->clickCount = $nc(me)->getClickCount();
				return olde;
			}
		case $FocusEvent::FOCUS_GAINED:
			{
				return $new($Event, src, $Event::GOT_FOCUS, nullptr);
			}
		case $FocusEvent::FOCUS_LOST:
			{
				return $new($Event, src, $Event::LOST_FOCUS, nullptr);
			}
		case $WindowEvent::WINDOW_CLOSING:
			{}
		case $WindowEvent::WINDOW_ICONIFIED:
			{}
		case $WindowEvent::WINDOW_DEICONIFIED:
			{
				return $new($Event, src, newid, nullptr);
			}
		case $ComponentEvent::COMPONENT_MOVED:
			{
				if ($instanceOf($Frame, src) || $instanceOf($Dialog, src)) {
					$var($Point, p, $nc(($cast($Component, src)))->getLocation());
					return $new($Event, src, 0, $Event::WINDOW_MOVED, $nc(p)->x, p->y, 0, 0);
				}
				break;
			}
		case $ActionEvent::ACTION_PERFORMED:
			{
				$assign(ae, $cast($ActionEvent, this));
				if ($instanceOf($Button, src)) {
					$assign(cmd, $nc(($cast($Button, src)))->getLabel());
				} else if ($instanceOf($MenuItem, src)) {
					$assign(cmd, $nc(($cast($MenuItem, src)))->getLabel());
				} else {
					$assign(cmd, $nc(ae)->getActionCommand());
				}
				return $new($Event, src, 0, newid, 0, 0, 0, $nc(ae)->getModifiers(), cmd);
			}
		case $ItemEvent::ITEM_STATE_CHANGED:
			{
				$assign(ie, $cast($ItemEvent, this));
				if ($instanceOf($List, src)) {
					newid = ($nc(ie)->getStateChange() == $ItemEvent::SELECTED ? $Event::LIST_SELECT : $Event::LIST_DESELECT);
					$assign(arg, $nc(ie)->getItem());
				} else {
					newid = $Event::ACTION_EVENT;
					if ($instanceOf($Choice, src)) {
						$assign(arg, $nc(ie)->getItem());
					} else {
						$assign(arg, $Boolean::valueOf($nc(ie)->getStateChange() == $ItemEvent::SELECTED));
					}
				}
				return $new($Event, src, newid, arg);
			}
		case $AdjustmentEvent::ADJUSTMENT_VALUE_CHANGED:
			{
				$assign(aje, $cast($AdjustmentEvent, this));
				switch ($nc(aje)->getAdjustmentType()) {
				case $AdjustmentEvent::UNIT_INCREMENT:
					{
						newid = $Event::SCROLL_LINE_DOWN;
						break;
					}
				case $AdjustmentEvent::UNIT_DECREMENT:
					{
						newid = $Event::SCROLL_LINE_UP;
						break;
					}
				case $AdjustmentEvent::BLOCK_INCREMENT:
					{
						newid = $Event::SCROLL_PAGE_DOWN;
						break;
					}
				case $AdjustmentEvent::BLOCK_DECREMENT:
					{
						newid = $Event::SCROLL_PAGE_UP;
						break;
					}
				case $AdjustmentEvent::TRACK:
					{
						if (aje->getValueIsAdjusting()) {
							newid = $Event::SCROLL_ABSOLUTE;
						} else {
							newid = $Event::SCROLL_END;
						}
						break;
					}
				default:
					{
						return nullptr;
					}
				}
				return $new($Event, src, newid, $($Integer::valueOf($nc(aje)->getValue())));
			}
		default:
			{}
		}
	}
	return nullptr;
}

void AWTEvent::copyPrivateDataInto(AWTEvent* that) {
	$set($nc(that), bdata, this->bdata);
	if ($instanceOf($InputEvent, this) && $instanceOf($InputEvent, that)) {
		$var($AWTAccessor$InputEventAccessor, accessor, $AWTAccessor::getInputEventAccessor());
		bool b = $nc(accessor)->canAccessSystemClipboard($cast($InputEvent, this));
		accessor->setCanAccessSystemClipboard($cast($InputEvent, that), b);
	}
	that->isSystemGenerated = this->isSystemGenerated;
}

void AWTEvent::dispatched() {
	if ($instanceOf($InputEvent, this)) {
		$nc($($AWTAccessor::getInputEventAccessor()))->setCanAccessSystemClipboard($cast($InputEvent, this), false);
	}
}

void clinit$AWTEvent($Class* class$) {
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			AWTEvent::initIDs();
		}
		$AWTAccessor::setAWTEventAccessor($$new($AWTEvent$1));
	}
}

AWTEvent::AWTEvent() {
}

$Class* AWTEvent::load$($String* name, bool initialize) {
	$loadClass(AWTEvent, name, initialize, &_AWTEvent_ClassInfo_, clinit$AWTEvent, allocate$AWTEvent);
	return class$;
}

$Class* AWTEvent::class$ = nullptr;

	} // awt
} // java