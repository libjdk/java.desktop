#include <java/awt/MenuComponent.h>

#include <java/awt/AWTError.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Event.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Font.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/MenuComponent$1.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/SecurityException.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

#undef LOCK

using $AWTError = ::java::awt::AWTError;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Event = ::java::awt::Event;
using $EventQueue = ::java::awt::EventQueue;
using $Font = ::java::awt::Font;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $MenuComponent$1 = ::java::awt::MenuComponent$1;
using $MenuContainer = ::java::awt::MenuContainer;
using $Toolkit = ::java::awt::Toolkit;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $MenuComponentPeer = ::java::awt::peer::MenuComponentPeer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MenuComponentAccessor = ::sun::awt::AWTAccessor$MenuComponentAccessor;
using $AppContext = ::sun::awt::AppContext;
using $ComponentFactory = ::sun::awt::ComponentFactory;

namespace java {
	namespace awt {

$CompoundAttribute _MenuComponent_MethodAnnotations_postEvent19[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _MenuComponent_FieldInfo_[] = {
	{"peer", "Ljava/awt/peer/MenuComponentPeer;", nullptr, $VOLATILE | $TRANSIENT, $field(MenuComponent, peer)},
	{"parent", "Ljava/awt/MenuContainer;", nullptr, $VOLATILE | $TRANSIENT, $field(MenuComponent, parent)},
	{"appContext", "Lsun/awt/AppContext;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(MenuComponent, appContext)},
	{"font", "Ljava/awt/Font;", nullptr, $PRIVATE | $VOLATILE, $field(MenuComponent, font)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $VOLATILE, $field(MenuComponent, name)},
	{"nameExplicitlySet", "Z", nullptr, $PRIVATE | $VOLATILE, $field(MenuComponent, nameExplicitlySet)},
	{"newEventsOnly", "Z", nullptr, $VOLATILE, $field(MenuComponent, newEventsOnly)},
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(MenuComponent, acc)},
	{"actionListenerK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(MenuComponent, actionListenerK)},
	{"itemListenerK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(MenuComponent, itemListenerK)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MenuComponent, serialVersionUID)},
	{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, 0, $field(MenuComponent, accessibleContext)},
	{}
};

$MethodInfo _MenuComponent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MenuComponent::*)()>(&MenuComponent::init$)), "java.awt.HeadlessException"},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0},
	{"dispatchEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(MenuComponent::*)($AWTEvent*)>(&MenuComponent::dispatchEvent))},
	{"dispatchEventImpl", "(Ljava/awt/AWTEvent;)V", nullptr, 0},
	{"eventEnabled", "(Ljava/awt/AWTEvent;)Z", nullptr, 0},
	{"getAccessControlContext", "()Ljava/security/AccessControlContext;", nullptr, $FINAL, $method(static_cast<$AccessControlContext*(MenuComponent::*)()>(&MenuComponent::getAccessControlContext))},
	{"getAccessibleChildIndex", "(Ljava/awt/MenuComponent;)I", nullptr, 0},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getAccessibleIndexInParent", "()I", nullptr, 0},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, 0},
	{"getComponentFactory", "()Lsun/awt/ComponentFactory;", nullptr, $FINAL, $method(static_cast<$ComponentFactory*(MenuComponent::*)()>(&MenuComponent::getComponentFactory))},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getFont_NoClientCode", "()Ljava/awt/Font;", nullptr, $FINAL, $method(static_cast<$Font*(MenuComponent::*)()>(&MenuComponent::getFont_NoClientCode))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getParent", "()Ljava/awt/MenuContainer;", nullptr, $PUBLIC},
	{"getParent_NoClientCode", "()Ljava/awt/MenuContainer;", nullptr, $FINAL, $method(static_cast<$MenuContainer*(MenuComponent::*)()>(&MenuComponent::getParent_NoClientCode))},
	{"getTreeLock", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$Object*(MenuComponent::*)()>(&MenuComponent::getTreeLock))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&MenuComponent::initIDs))},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"postEvent", "(Ljava/awt/Event;)Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _MenuComponent_MethodAnnotations_postEvent19},
	{"processEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(MenuComponent::*)($ObjectInputStream*)>(&MenuComponent::readObject)), "java.lang.ClassNotFoundException,java.io.IOException,java.awt.HeadlessException"},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 17

$InnerClassInfo _MenuComponent_InnerClassesInfo_[] = {
	{"java.awt.MenuComponent$AccessibleAWTMenuComponent", "java.awt.MenuComponent", "AccessibleAWTMenuComponent", $PROTECTED | $ABSTRACT},
	{"java.awt.MenuComponent$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MenuComponent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.MenuComponent",
	"java.lang.Object",
	"java.io.Serializable",
	_MenuComponent_FieldInfo_,
	_MenuComponent_MethodInfo_,
	nullptr,
	nullptr,
	_MenuComponent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.MenuComponent$AccessibleAWTMenuComponent,java.awt.MenuComponent$1"
};

$Object* allocate$MenuComponent($Class* clazz) {
	return $of($alloc(MenuComponent));
}

$String* MenuComponent::actionListenerK = nullptr;
$String* MenuComponent::itemListenerK = nullptr;

$AccessControlContext* MenuComponent::getAccessControlContext() {
	if (this->acc == nullptr) {
		$throwNew($SecurityException, "MenuComponent is missing AccessControlContext"_s);
	}
	return this->acc;
}

void MenuComponent::init$() {
	$set(this, acc, $AccessController::getContext());
	$set(this, accessibleContext, nullptr);
	$GraphicsEnvironment::checkHeadless();
	$set(this, appContext, $AppContext::getAppContext());
}

$String* MenuComponent::constructComponentName() {
	return nullptr;
}

$ComponentFactory* MenuComponent::getComponentFactory() {
	$useLocalCurrentObjectStackCache();
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	if ($instanceOf($ComponentFactory, toolkit)) {
		return $cast($ComponentFactory, toolkit);
	}
	$throwNew($AWTError, $$str({"UI components are unsupported by: "_s, toolkit}));
}

$String* MenuComponent::getName() {
	if (this->name == nullptr && !this->nameExplicitlySet) {
		$synchronized(this) {
			if (this->name == nullptr && !this->nameExplicitlySet) {
				$set(this, name, constructComponentName());
			}
		}
	}
	return this->name;
}

void MenuComponent::setName($String* name) {
	$synchronized(this) {
		$set(this, name, name);
		this->nameExplicitlySet = true;
	}
}

$MenuContainer* MenuComponent::getParent() {
	return getParent_NoClientCode();
}

$MenuContainer* MenuComponent::getParent_NoClientCode() {
	return this->parent;
}

$Font* MenuComponent::getFont() {
	$useLocalCurrentObjectStackCache();
	$var($Font, font, this->font);
	if (font != nullptr) {
		return font;
	}
	$var($MenuContainer, parent, this->parent);
	if (parent != nullptr) {
		return parent->getFont();
	}
	return nullptr;
}

$Font* MenuComponent::getFont_NoClientCode() {
	$useLocalCurrentObjectStackCache();
	$var($Font, font, this->font);
	if (font != nullptr) {
		return font;
	}
	$var($Object, parent, this->parent);
	if (parent != nullptr) {
		if ($instanceOf($Component, parent)) {
			$assign(font, $nc(($cast($Component, parent)))->getFont_NoClientCode());
		} else if ($instanceOf(MenuComponent, parent)) {
			$assign(font, $nc(($cast(MenuComponent, parent)))->getFont_NoClientCode());
		}
	}
	return font;
}

void MenuComponent::setFont($Font* f) {
	$synchronized(getTreeLock()) {
		$set(this, font, f);
		$var($MenuComponentPeer, peer, this->peer);
		if (peer != nullptr) {
			peer->setFont(f);
		}
	}
}

void MenuComponent::removeNotify() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		$var($MenuComponentPeer, p, this->peer);
		if (p != nullptr) {
			$nc($($Toolkit::getEventQueue()))->removeSourceEvents(this, true);
			$set(this, peer, nullptr);
			p->dispose();
		}
	}
}

bool MenuComponent::postEvent($Event* evt) {
	$var($MenuContainer, parent, this->parent);
	if (parent != nullptr) {
		parent->postEvent(evt);
	}
	return false;
}

void MenuComponent::dispatchEvent($AWTEvent* e) {
	dispatchEventImpl(e);
}

void MenuComponent::dispatchEventImpl($AWTEvent* e) {
	$useLocalCurrentObjectStackCache();
	$EventQueue::setCurrentEventAndMostRecentTime(e);
	$nc($($Toolkit::getDefaultToolkit()))->notifyAWTEventListeners(e);
	if (this->newEventsOnly || (this->parent != nullptr && $instanceOf(MenuComponent, this->parent) && $nc(($cast(MenuComponent, this->parent)))->newEventsOnly)) {
		if (eventEnabled(e)) {
			processEvent(e);
		} else if ($instanceOf($ActionEvent, e) && this->parent != nullptr) {
			$nc(e)->setSource(this->parent);
			$nc(($cast(MenuComponent, this->parent)))->dispatchEvent(e);
		}
	} else {
		$var($Event, olde, $nc(e)->convertToOld());
		if (olde != nullptr) {
			postEvent(olde);
		}
	}
}

bool MenuComponent::eventEnabled($AWTEvent* e) {
	return false;
}

void MenuComponent::processEvent($AWTEvent* e) {
}

$String* MenuComponent::paramString() {
	$var($String, thisName, getName());
	return (thisName != nullptr ? thisName : ""_s);
}

$String* MenuComponent::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({$($of(this)->getClass()->getName()), "["_s}));
	$var($String, var$0, $$concat(var$1, $(paramString())));
	return $concat(var$0, "]"_s);
}

$Object* MenuComponent::getTreeLock() {
	$init($Component);
	return $of($Component::LOCK);
}

void MenuComponent::readObject($ObjectInputStream* s) {
	$GraphicsEnvironment::checkHeadless();
	$set(this, acc, $AccessController::getContext());
	$nc(s)->defaultReadObject();
	$set(this, appContext, $AppContext::getAppContext());
}

void MenuComponent::initIDs() {
	$init(MenuComponent);
	$prepareNativeStatic(MenuComponent, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

$AccessibleContext* MenuComponent::getAccessibleContext() {
	return this->accessibleContext;
}

int32_t MenuComponent::getAccessibleIndexInParent() {
	$useLocalCurrentObjectStackCache();
	$var($MenuContainer, localParent, this->parent);
	if (!($instanceOf(MenuComponent, localParent))) {
		return -1;
	}
	$var(MenuComponent, localParentMenu, $cast(MenuComponent, localParent));
	return $nc(localParentMenu)->getAccessibleChildIndex(this);
}

int32_t MenuComponent::getAccessibleChildIndex(MenuComponent* child) {
	return -1;
}

$AccessibleStateSet* MenuComponent::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $new($AccessibleStateSet));
	return states;
}

void clinit$MenuComponent($Class* class$) {
	$init($Component);
	$assignStatic(MenuComponent::actionListenerK, $Component::actionListenerK);
	$assignStatic(MenuComponent::itemListenerK, $Component::itemListenerK);
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			MenuComponent::initIDs();
		}
	}
	{
		$AWTAccessor::setMenuComponentAccessor($$new($MenuComponent$1));
	}
}

MenuComponent::MenuComponent() {
}

$Class* MenuComponent::load$($String* name, bool initialize) {
	$loadClass(MenuComponent, name, initialize, &_MenuComponent_ClassInfo_, clinit$MenuComponent, allocate$MenuComponent);
	return class$;
}

$Class* MenuComponent::class$ = nullptr;

	} // awt
} // java