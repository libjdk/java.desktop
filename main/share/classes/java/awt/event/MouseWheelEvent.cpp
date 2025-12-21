#include <java/awt/event/MouseWheelEvent.h>

#include <java/awt/Component.h>
#include <java/awt/event/MouseEvent.h>
#include <jcpp.h>

#undef NOBUTTON
#undef WHEEL_BLOCK_SCROLL
#undef WHEEL_UNIT_SCROLL

using $Component = ::java::awt::Component;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$FieldInfo _MouseWheelEvent_FieldInfo_[] = {
	{"WHEEL_UNIT_SCROLL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MouseWheelEvent, WHEEL_UNIT_SCROLL)},
	{"WHEEL_BLOCK_SCROLL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MouseWheelEvent, WHEEL_BLOCK_SCROLL)},
	{"scrollType", "I", nullptr, 0, $field(MouseWheelEvent, scrollType)},
	{"scrollAmount", "I", nullptr, 0, $field(MouseWheelEvent, scrollAmount)},
	{"wheelRotation", "I", nullptr, 0, $field(MouseWheelEvent, wheelRotation)},
	{"preciseWheelRotation", "D", nullptr, 0, $field(MouseWheelEvent, preciseWheelRotation)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MouseWheelEvent, serialVersionUID)},
	{}
};

$MethodInfo _MouseWheelEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;IJIIIIZIII)V", nullptr, $PUBLIC, $method(static_cast<void(MouseWheelEvent::*)($Component*,int32_t,int64_t,int32_t,int32_t,int32_t,int32_t,bool,int32_t,int32_t,int32_t)>(&MouseWheelEvent::init$))},
	{"<init>", "(Ljava/awt/Component;IJIIIIIIZIII)V", nullptr, $PUBLIC, $method(static_cast<void(MouseWheelEvent::*)($Component*,int32_t,int64_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,bool,int32_t,int32_t,int32_t)>(&MouseWheelEvent::init$))},
	{"<init>", "(Ljava/awt/Component;IJIIIIIIZIIID)V", nullptr, $PUBLIC, $method(static_cast<void(MouseWheelEvent::*)($Component*,int32_t,int64_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,bool,int32_t,int32_t,int32_t,double)>(&MouseWheelEvent::init$))},
	{"getPreciseWheelRotation", "()D", nullptr, $PUBLIC},
	{"getScrollAmount", "()I", nullptr, $PUBLIC},
	{"getScrollType", "()I", nullptr, $PUBLIC},
	{"getUnitsToScroll", "()I", nullptr, $PUBLIC},
	{"getWheelRotation", "()I", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MouseWheelEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.event.MouseWheelEvent",
	"java.awt.event.MouseEvent",
	nullptr,
	_MouseWheelEvent_FieldInfo_,
	_MouseWheelEvent_MethodInfo_
};

$Object* allocate$MouseWheelEvent($Class* clazz) {
	return $of($alloc(MouseWheelEvent));
}

void MouseWheelEvent::init$($Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t x, int32_t y, int32_t clickCount, bool popupTrigger, int32_t scrollType, int32_t scrollAmount, int32_t wheelRotation) {
	MouseWheelEvent::init$(source, id, when, modifiers, x, y, 0, 0, clickCount, popupTrigger, scrollType, scrollAmount, wheelRotation);
}

void MouseWheelEvent::init$($Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t x, int32_t y, int32_t xAbs, int32_t yAbs, int32_t clickCount, bool popupTrigger, int32_t scrollType, int32_t scrollAmount, int32_t wheelRotation) {
	MouseWheelEvent::init$(source, id, when, modifiers, x, y, xAbs, yAbs, clickCount, popupTrigger, scrollType, scrollAmount, wheelRotation, (double)wheelRotation);
}

void MouseWheelEvent::init$($Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t x, int32_t y, int32_t xAbs, int32_t yAbs, int32_t clickCount, bool popupTrigger, int32_t scrollType, int32_t scrollAmount, int32_t wheelRotation, double preciseWheelRotation) {
	$MouseEvent::init$(source, id, when, modifiers, x, y, xAbs, yAbs, clickCount, popupTrigger, $MouseEvent::NOBUTTON);
	this->scrollType = scrollType;
	this->scrollAmount = scrollAmount;
	this->wheelRotation = wheelRotation;
	this->preciseWheelRotation = preciseWheelRotation;
}

int32_t MouseWheelEvent::getScrollType() {
	return this->scrollType;
}

int32_t MouseWheelEvent::getScrollAmount() {
	return this->scrollAmount;
}

int32_t MouseWheelEvent::getWheelRotation() {
	return this->wheelRotation;
}

double MouseWheelEvent::getPreciseWheelRotation() {
	return this->preciseWheelRotation;
}

int32_t MouseWheelEvent::getUnitsToScroll() {
	return this->scrollAmount * this->wheelRotation;
}

$String* MouseWheelEvent::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, scrollTypeStr, nullptr);
	if (getScrollType() == MouseWheelEvent::WHEEL_UNIT_SCROLL) {
		$assign(scrollTypeStr, "WHEEL_UNIT_SCROLL"_s);
	} else if (getScrollType() == MouseWheelEvent::WHEEL_BLOCK_SCROLL) {
		$assign(scrollTypeStr, "WHEEL_BLOCK_SCROLL"_s);
	} else {
		$assign(scrollTypeStr, "unknown scroll type"_s);
	}
	$var($String, var$4, $$str({$($MouseEvent::paramString()), ",scrollType="_s, scrollTypeStr, ",scrollAmount="_s}));
	$var($String, var$3, $$concat(var$4, $$str(getScrollAmount())));
	$var($String, var$2, $$concat(var$3, ",wheelRotation="_s));
	$var($String, var$1, $$concat(var$2, $$str(getWheelRotation())));
	$var($String, var$0, $$concat(var$1, ",preciseWheelRotation="_s));
	return $concat(var$0, $$str(getPreciseWheelRotation()));
}

MouseWheelEvent::MouseWheelEvent() {
}

$Class* MouseWheelEvent::load$($String* name, bool initialize) {
	$loadClass(MouseWheelEvent, name, initialize, &_MouseWheelEvent_ClassInfo_, allocate$MouseWheelEvent);
	return class$;
}

$Class* MouseWheelEvent::class$ = nullptr;

		} // event
	} // awt
} // java