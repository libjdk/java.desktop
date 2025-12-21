#include <java/awt/Event.h>

#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/KeyEvent.h>
#include <jcpp.h>

#undef ACTION_EVENT
#undef ALT_MASK
#undef BACK_SPACE
#undef CAPS_LOCK
#undef CHAR_UNDEFINED
#undef CTRL_MASK
#undef DELETE
#undef DOWN
#undef END
#undef ENTER
#undef ESCAPE
#undef GOT_FOCUS
#undef HOME
#undef INSERT
#undef KEY_ACTION
#undef KEY_ACTION_RELEASE
#undef KEY_EVENT
#undef KEY_PRESS
#undef KEY_RELEASE
#undef LEFT
#undef LIST_DESELECT
#undef LIST_EVENT
#undef LIST_SELECT
#undef LOAD_FILE
#undef LOST_FOCUS
#undef META_MASK
#undef MISC_EVENT
#undef MOUSE_DOWN
#undef MOUSE_DRAG
#undef MOUSE_ENTER
#undef MOUSE_EVENT
#undef MOUSE_EXIT
#undef MOUSE_MOVE
#undef MOUSE_UP
#undef NUM_LOCK
#undef PAUSE
#undef PGDN
#undef PGUP
#undef PRINT_SCREEN
#undef RIGHT
#undef SAVE_FILE
#undef SCROLL_ABSOLUTE
#undef SCROLL_BEGIN
#undef SCROLL_END
#undef SCROLL_EVENT
#undef SCROLL_LINE_DOWN
#undef SCROLL_LINE_UP
#undef SCROLL_LOCK
#undef SCROLL_PAGE_DOWN
#undef SCROLL_PAGE_UP
#undef SHIFT_MASK
#undef TAB
#undef UP
#undef VK_CAPS_LOCK
#undef VK_DOWN
#undef VK_END
#undef VK_F1
#undef VK_F10
#undef VK_F11
#undef VK_F12
#undef VK_F2
#undef VK_F3
#undef VK_F4
#undef VK_F5
#undef VK_F6
#undef VK_F7
#undef VK_F8
#undef VK_F9
#undef VK_HOME
#undef VK_INSERT
#undef VK_LEFT
#undef VK_NUM_LOCK
#undef VK_PAGE_DOWN
#undef VK_PAGE_UP
#undef VK_PAUSE
#undef VK_PRINTSCREEN
#undef VK_RIGHT
#undef VK_SCROLL_LOCK
#undef VK_UP
#undef WINDOW_DEICONIFY
#undef WINDOW_DESTROY
#undef WINDOW_EVENT
#undef WINDOW_EXPOSE
#undef WINDOW_ICONIFY
#undef WINDOW_MOVED

using $intArray2 = $Array<int32_t, 2>;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Toolkit = ::java::awt::Toolkit;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace awt {

$NamedAttribute Event_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _Event_Annotations_[] = {
	{"Ljava/lang/Deprecated;", Event_Attribute_var$0},
	{}
};

$FieldInfo _Event_FieldInfo_[] = {
	{"data", "J", nullptr, $PRIVATE | $TRANSIENT, $field(Event, data)},
	{"SHIFT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, SHIFT_MASK)},
	{"CTRL_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, CTRL_MASK)},
	{"META_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, META_MASK)},
	{"ALT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, ALT_MASK)},
	{"HOME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, HOME)},
	{"END", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, END)},
	{"PGUP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, PGUP)},
	{"PGDN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, PGDN)},
	{"UP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, UP)},
	{"DOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, DOWN)},
	{"LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, LEFT)},
	{"RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, RIGHT)},
	{"F1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, F1)},
	{"F2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, F2)},
	{"F3", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, F3)},
	{"F4", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, F4)},
	{"F5", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, F5)},
	{"F6", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, F6)},
	{"F7", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, F7)},
	{"F8", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, F8)},
	{"F9", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, F9)},
	{"F10", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, F10)},
	{"F11", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, F11)},
	{"F12", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, F12)},
	{"PRINT_SCREEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, PRINT_SCREEN)},
	{"SCROLL_LOCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, SCROLL_LOCK)},
	{"CAPS_LOCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, CAPS_LOCK)},
	{"NUM_LOCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, NUM_LOCK)},
	{"PAUSE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, PAUSE)},
	{"INSERT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, INSERT)},
	{"ENTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, ENTER)},
	{"BACK_SPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, BACK_SPACE)},
	{"TAB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, TAB)},
	{"ESCAPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, ESCAPE)},
	{"DELETE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, DELETE)},
	{"WINDOW_EVENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Event, WINDOW_EVENT)},
	{"WINDOW_DESTROY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, WINDOW_DESTROY)},
	{"WINDOW_EXPOSE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, WINDOW_EXPOSE)},
	{"WINDOW_ICONIFY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, WINDOW_ICONIFY)},
	{"WINDOW_DEICONIFY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, WINDOW_DEICONIFY)},
	{"WINDOW_MOVED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, WINDOW_MOVED)},
	{"KEY_EVENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Event, KEY_EVENT)},
	{"KEY_PRESS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, KEY_PRESS)},
	{"KEY_RELEASE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, KEY_RELEASE)},
	{"KEY_ACTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, KEY_ACTION)},
	{"KEY_ACTION_RELEASE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, KEY_ACTION_RELEASE)},
	{"MOUSE_EVENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Event, MOUSE_EVENT)},
	{"MOUSE_DOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, MOUSE_DOWN)},
	{"MOUSE_UP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, MOUSE_UP)},
	{"MOUSE_MOVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, MOUSE_MOVE)},
	{"MOUSE_ENTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, MOUSE_ENTER)},
	{"MOUSE_EXIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, MOUSE_EXIT)},
	{"MOUSE_DRAG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, MOUSE_DRAG)},
	{"SCROLL_EVENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Event, SCROLL_EVENT)},
	{"SCROLL_LINE_UP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, SCROLL_LINE_UP)},
	{"SCROLL_LINE_DOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, SCROLL_LINE_DOWN)},
	{"SCROLL_PAGE_UP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, SCROLL_PAGE_UP)},
	{"SCROLL_PAGE_DOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, SCROLL_PAGE_DOWN)},
	{"SCROLL_ABSOLUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, SCROLL_ABSOLUTE)},
	{"SCROLL_BEGIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, SCROLL_BEGIN)},
	{"SCROLL_END", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, SCROLL_END)},
	{"LIST_EVENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Event, LIST_EVENT)},
	{"LIST_SELECT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, LIST_SELECT)},
	{"LIST_DESELECT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, LIST_DESELECT)},
	{"MISC_EVENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Event, MISC_EVENT)},
	{"ACTION_EVENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, ACTION_EVENT)},
	{"LOAD_FILE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, LOAD_FILE)},
	{"SAVE_FILE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, SAVE_FILE)},
	{"GOT_FOCUS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, GOT_FOCUS)},
	{"LOST_FOCUS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, LOST_FOCUS)},
	{"target", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Event, target)},
	{"when", "J", nullptr, $PUBLIC, $field(Event, when)},
	{"id", "I", nullptr, $PUBLIC, $field(Event, id)},
	{"x", "I", nullptr, $PUBLIC, $field(Event, x)},
	{"y", "I", nullptr, $PUBLIC, $field(Event, y)},
	{"key", "I", nullptr, $PUBLIC, $field(Event, key)},
	{"modifiers", "I", nullptr, $PUBLIC, $field(Event, modifiers)},
	{"clickCount", "I", nullptr, $PUBLIC, $field(Event, clickCount)},
	{"arg", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Event, arg)},
	{"evt", "Ljava/awt/Event;", nullptr, $PUBLIC, $field(Event, evt)},
	{"actionKeyCodes", "[[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Event, actionKeyCodes)},
	{"consumed", "Z", nullptr, $PRIVATE, $field(Event, consumed)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Event, serialVersionUID)},
	{}
};

$MethodInfo _Event_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;JIIIIILjava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(Event::*)(Object$*,int64_t,int32_t,int32_t,int32_t,int32_t,int32_t,Object$*)>(&Event::init$))},
	{"<init>", "(Ljava/lang/Object;JIIIII)V", nullptr, $PUBLIC, $method(static_cast<void(Event::*)(Object$*,int64_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&Event::init$))},
	{"<init>", "(Ljava/lang/Object;ILjava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(Event::*)(Object$*,int32_t,Object$*)>(&Event::init$))},
	{"consume", "()V", nullptr, 0},
	{"controlDown", "()Z", nullptr, $PUBLIC},
	{"getKeyEventChar", "()C", nullptr, 0},
	{"getOldEventKey", "(Ljava/awt/event/KeyEvent;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($KeyEvent*)>(&Event::getOldEventKey))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Event::initIDs))},
	{"isConsumed", "()Z", nullptr, 0},
	{"metaDown", "()Z", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"shiftDown", "()Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translate", "(II)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 7

$ClassInfo _Event_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Event",
	"java.lang.Object",
	"java.io.Serializable",
	_Event_FieldInfo_,
	_Event_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Event_Annotations_
};

$Object* allocate$Event($Class* clazz) {
	return $of($alloc(Event));
}

$intArray2* Event::actionKeyCodes = nullptr;

void Event::initIDs() {
	$init(Event);
	$prepareNativeStatic(Event, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void Event::init$(Object$* target, int64_t when, int32_t id, int32_t x, int32_t y, int32_t key, int32_t modifiers, Object$* arg) {
	this->consumed = false;
	$set(this, target, target);
	this->when = when;
	this->id = id;
	this->x = x;
	this->y = y;
	this->key = key;
	this->modifiers = modifiers;
	$set(this, arg, arg);
	this->data = 0;
	this->clickCount = 0;
	switch (id) {
	case Event::ACTION_EVENT:
		{}
	case Event::WINDOW_DESTROY:
		{}
	case Event::WINDOW_ICONIFY:
		{}
	case Event::WINDOW_DEICONIFY:
		{}
	case Event::WINDOW_MOVED:
		{}
	case Event::SCROLL_LINE_UP:
		{}
	case Event::SCROLL_LINE_DOWN:
		{}
	case Event::SCROLL_PAGE_UP:
		{}
	case Event::SCROLL_PAGE_DOWN:
		{}
	case Event::SCROLL_ABSOLUTE:
		{}
	case Event::SCROLL_BEGIN:
		{}
	case Event::SCROLL_END:
		{}
	case Event::LIST_SELECT:
		{}
	case Event::LIST_DESELECT:
		{
			this->consumed = true;
			break;
		}
	default:
		{}
	}
}

void Event::init$(Object$* target, int64_t when, int32_t id, int32_t x, int32_t y, int32_t key, int32_t modifiers) {
	Event::init$(target, when, id, x, y, key, modifiers, nullptr);
}

void Event::init$(Object$* target, int32_t id, Object$* arg) {
	Event::init$(target, 0, id, 0, 0, 0, 0, arg);
}

void Event::translate(int32_t dx, int32_t dy) {
	this->x += dx;
	this->y += dy;
}

bool Event::shiftDown() {
	return ((int32_t)(this->modifiers & (uint32_t)Event::SHIFT_MASK)) != 0;
}

bool Event::controlDown() {
	return ((int32_t)(this->modifiers & (uint32_t)Event::CTRL_MASK)) != 0;
}

bool Event::metaDown() {
	return ((int32_t)(this->modifiers & (uint32_t)Event::META_MASK)) != 0;
}

void Event::consume() {
	switch (this->id) {
	case Event::KEY_PRESS:
		{}
	case Event::KEY_RELEASE:
		{}
	case Event::KEY_ACTION:
		{}
	case Event::KEY_ACTION_RELEASE:
		{
			this->consumed = true;
			break;
		}
	default:
		{}
	}
}

bool Event::isConsumed() {
	return this->consumed;
}

int32_t Event::getOldEventKey($KeyEvent* e) {
	$init(Event);
	int32_t keyCode = $nc(e)->getKeyCode();
	for (int32_t i = 0; i < $nc(Event::actionKeyCodes)->length; ++i) {
		if ($nc($nc(Event::actionKeyCodes)->get(i))->get(0) == keyCode) {
			return $nc($nc(Event::actionKeyCodes)->get(i))->get(1);
		}
	}
	return (int32_t)e->getKeyChar();
}

char16_t Event::getKeyEventChar() {
	for (int32_t i = 0; i < $nc(Event::actionKeyCodes)->length; ++i) {
		if ($nc($nc(Event::actionKeyCodes)->get(i))->get(1) == this->key) {
			return $KeyEvent::CHAR_UNDEFINED;
		}
	}
	return (char16_t)this->key;
}

$String* Event::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, str, $str({"id="_s, $$str(this->id), ",x="_s, $$str(this->x), ",y="_s, $$str(this->y)}));
	if (this->key != 0) {
		$plusAssign(str, $$str({",key="_s, $$str(this->key)}));
	}
	if (shiftDown()) {
		$plusAssign(str, ",shift"_s);
	}
	if (controlDown()) {
		$plusAssign(str, ",control"_s);
	}
	if (metaDown()) {
		$plusAssign(str, ",meta"_s);
	}
	if (this->target != nullptr) {
		$plusAssign(str, $$str({",target="_s, this->target}));
	}
	if (this->arg != nullptr) {
		$plusAssign(str, $$str({",arg="_s, this->arg}));
	}
	return str;
}

$String* Event::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({$($of(this)->getClass()->getName()), "["_s}));
	$var($String, var$0, $$concat(var$1, $(paramString())));
	return $concat(var$0, "]"_s);
}

void clinit$Event($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Event::actionKeyCodes, $new($intArray2, {
		$$new($ints, {
			$KeyEvent::VK_HOME,
			Event::HOME
		}),
		$$new($ints, {
			$KeyEvent::VK_END,
			Event::END
		}),
		$$new($ints, {
			$KeyEvent::VK_PAGE_UP,
			Event::PGUP
		}),
		$$new($ints, {
			$KeyEvent::VK_PAGE_DOWN,
			Event::PGDN
		}),
		$$new($ints, {
			$KeyEvent::VK_UP,
			Event::UP
		}),
		$$new($ints, {
			$KeyEvent::VK_DOWN,
			Event::DOWN
		}),
		$$new($ints, {
			$KeyEvent::VK_LEFT,
			Event::LEFT
		}),
		$$new($ints, {
			$KeyEvent::VK_RIGHT,
			Event::RIGHT
		}),
		$$new($ints, {
			$KeyEvent::VK_F1,
			Event::F1
		}),
		$$new($ints, {
			$KeyEvent::VK_F2,
			Event::F2
		}),
		$$new($ints, {
			$KeyEvent::VK_F3,
			Event::F3
		}),
		$$new($ints, {
			$KeyEvent::VK_F4,
			Event::F4
		}),
		$$new($ints, {
			$KeyEvent::VK_F5,
			Event::F5
		}),
		$$new($ints, {
			$KeyEvent::VK_F6,
			Event::F6
		}),
		$$new($ints, {
			$KeyEvent::VK_F7,
			Event::F7
		}),
		$$new($ints, {
			$KeyEvent::VK_F8,
			Event::F8
		}),
		$$new($ints, {
			$KeyEvent::VK_F9,
			Event::F9
		}),
		$$new($ints, {
			$KeyEvent::VK_F10,
			Event::F10
		}),
		$$new($ints, {
			$KeyEvent::VK_F11,
			Event::F11
		}),
		$$new($ints, {
			$KeyEvent::VK_F12,
			Event::F12
		}),
		$$new($ints, {
			$KeyEvent::VK_PRINTSCREEN,
			Event::PRINT_SCREEN
		}),
		$$new($ints, {
			$KeyEvent::VK_SCROLL_LOCK,
			Event::SCROLL_LOCK
		}),
		$$new($ints, {
			$KeyEvent::VK_CAPS_LOCK,
			Event::CAPS_LOCK
		}),
		$$new($ints, {
			$KeyEvent::VK_NUM_LOCK,
			Event::NUM_LOCK
		}),
		$$new($ints, {
			$KeyEvent::VK_PAUSE,
			Event::PAUSE
		}),
		$$new($ints, {
			$KeyEvent::VK_INSERT,
			Event::INSERT
		})
	}));
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			Event::initIDs();
		}
	}
}

Event::Event() {
}

$Class* Event::load$($String* name, bool initialize) {
	$loadClass(Event, name, initialize, &_Event_ClassInfo_, clinit$Event, allocate$Event);
	return class$;
}

$Class* Event::class$ = nullptr;

	} // awt
} // java