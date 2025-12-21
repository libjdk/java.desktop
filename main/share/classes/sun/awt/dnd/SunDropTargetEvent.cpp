#include <sun/awt/dnd/SunDropTargetEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <sun/awt/dnd/SunDropTargetContextPeer$EventDispatcher.h>
#include <jcpp.h>

#undef MOUSE_DROPPED
#undef NOBUTTON

using $Component = ::java::awt::Component;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunDropTargetContextPeer$EventDispatcher = ::sun::awt::dnd::SunDropTargetContextPeer$EventDispatcher;

namespace sun {
	namespace awt {
		namespace dnd {

$FieldInfo _SunDropTargetEvent_FieldInfo_[] = {
	{"MOUSE_DROPPED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunDropTargetEvent, MOUSE_DROPPED)},
	{"dispatcher", "Lsun/awt/dnd/SunDropTargetContextPeer$EventDispatcher;", nullptr, $PRIVATE | $FINAL, $field(SunDropTargetEvent, dispatcher)},
	{}
};

$MethodInfo _SunDropTargetEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;IIILsun/awt/dnd/SunDropTargetContextPeer$EventDispatcher;)V", nullptr, $PUBLIC, $method(static_cast<void(SunDropTargetEvent::*)($Component*,int32_t,int32_t,int32_t,$SunDropTargetContextPeer$EventDispatcher*)>(&SunDropTargetEvent::init$))},
	{"consume", "()V", nullptr, $PUBLIC},
	{"dispatch", "()V", nullptr, $PUBLIC, $method(static_cast<void(SunDropTargetEvent::*)()>(&SunDropTargetEvent::dispatch))},
	{"dispose", "()V", nullptr, $PUBLIC, $method(static_cast<void(SunDropTargetEvent::*)()>(&SunDropTargetEvent::dispose))},
	{"getDispatcher", "()Lsun/awt/dnd/SunDropTargetContextPeer$EventDispatcher;", nullptr, $PUBLIC, $method(static_cast<$SunDropTargetContextPeer$EventDispatcher*(SunDropTargetEvent::*)()>(&SunDropTargetEvent::getDispatcher))},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SunDropTargetEvent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.dnd.SunDropTargetEvent",
	"java.awt.event.MouseEvent",
	nullptr,
	_SunDropTargetEvent_FieldInfo_,
	_SunDropTargetEvent_MethodInfo_
};

$Object* allocate$SunDropTargetEvent($Class* clazz) {
	return $of($alloc(SunDropTargetEvent));
}

void SunDropTargetEvent::init$($Component* source, int32_t id, int32_t x, int32_t y, $SunDropTargetContextPeer$EventDispatcher* d) {
	$MouseEvent::init$(source, id, $System::currentTimeMillis(), 0, x, y, 0, 0, 0, false, $MouseEvent::NOBUTTON);
	$set(this, dispatcher, d);
	$nc(this->dispatcher)->registerEvent(this);
}

void SunDropTargetEvent::dispatch() {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->dispatcher)->dispatchEvent(this);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SunDropTargetEvent::consume() {
	bool was_consumed = isConsumed();
	$MouseEvent::consume();
	if (!was_consumed && isConsumed()) {
		dispose();
	}
}

void SunDropTargetEvent::dispose() {
	$nc(this->dispatcher)->unregisterEvent(this);
}

$SunDropTargetContextPeer$EventDispatcher* SunDropTargetEvent::getDispatcher() {
	return this->dispatcher;
}

$String* SunDropTargetEvent::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, typeStr, nullptr);
	switch (this->id) {
	case SunDropTargetEvent::MOUSE_DROPPED:
		{
			$assign(typeStr, "MOUSE_DROPPED"_s);
			break;
		}
	default:
		{
			return $MouseEvent::paramString();
		}
	}
	$var($String, var$1, $$str({typeStr, ",("_s, $$str(getX()), ","_s}));
	$var($String, var$0, $$concat(var$1, $$str(getY())));
	return $concat(var$0, ")"_s);
}

SunDropTargetEvent::SunDropTargetEvent() {
}

$Class* SunDropTargetEvent::load$($String* name, bool initialize) {
	$loadClass(SunDropTargetEvent, name, initialize, &_SunDropTargetEvent_ClassInfo_, allocate$SunDropTargetEvent);
	return class$;
}

$Class* SunDropTargetEvent::class$ = nullptr;

		} // dnd
	} // awt
} // sun