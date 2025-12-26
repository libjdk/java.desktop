#include <com/apple/eawt/_AppDockIconHandler.h>

#include <java/awt/Image.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuBar.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/MenuItem.h>
#include <java/awt/PopupMenu.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CImage$Creator.h>
#include <sun/lwawt/macosx/CImage.h>
#include <sun/lwawt/macosx/CMenu.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $Menu = ::java::awt::Menu;
using $MenuBar = ::java::awt::MenuBar;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuContainer = ::java::awt::MenuContainer;
using $MenuItem = ::java::awt::MenuItem;
using $PopupMenu = ::java::awt::PopupMenu;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Method = ::java::lang::reflect::Method;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MenuComponentAccessor = ::sun::awt::AWTAccessor$MenuComponentAccessor;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;
using $CImage = ::sun::lwawt::macosx::CImage;
using $CImage$Creator = ::sun::lwawt::macosx::CImage$Creator;
using $CMenu = ::sun::lwawt::macosx::CMenu;

namespace com {
	namespace apple {
		namespace eawt {

class _AppDockIconHandler$$Lambda$nativeSetDockIconImage : public $CFRetainedResource$CFNativeAction {
	$class(_AppDockIconHandler$$Lambda$nativeSetDockIconImage, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t image) override {
		_AppDockIconHandler::nativeSetDockIconImage(image);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<_AppDockIconHandler$$Lambda$nativeSetDockIconImage>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo _AppDockIconHandler$$Lambda$nativeSetDockIconImage::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(_AppDockIconHandler$$Lambda$nativeSetDockIconImage::*)()>(&_AppDockIconHandler$$Lambda$nativeSetDockIconImage::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo _AppDockIconHandler$$Lambda$nativeSetDockIconImage::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.eawt._AppDockIconHandler$$Lambda$nativeSetDockIconImage",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* _AppDockIconHandler$$Lambda$nativeSetDockIconImage::load$($String* name, bool initialize) {
	$loadClass(_AppDockIconHandler$$Lambda$nativeSetDockIconImage, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* _AppDockIconHandler$$Lambda$nativeSetDockIconImage::class$ = nullptr;

$FieldInfo __AppDockIconHandler_FieldInfo_[] = {
	{"fDockMenu", "Ljava/awt/PopupMenu;", nullptr, 0, $field(_AppDockIconHandler, fDockMenu)},
	{}
};

$MethodInfo __AppDockIconHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(_AppDockIconHandler::*)()>(&_AppDockIconHandler::init$))},
	{"getDockIconImage", "()Ljava/awt/Image;", nullptr, 0},
	{"getDockMenu", "()Ljava/awt/PopupMenu;", nullptr, $PUBLIC},
	{"nativeGetDockIconImage", "()J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)()>(&_AppDockIconHandler::nativeGetDockIconImage))},
	{"nativeSetDockIconBadge", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($String*)>(&_AppDockIconHandler::nativeSetDockIconBadge))},
	{"nativeSetDockIconImage", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&_AppDockIconHandler::nativeSetDockIconImage))},
	{"nativeSetDockIconProgress", "(I)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t)>(&_AppDockIconHandler::nativeSetDockIconProgress))},
	{"nativeSetDockMenu", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&_AppDockIconHandler::nativeSetDockMenu))},
	{"setDockIconBadge", "(Ljava/lang/String;)V", nullptr, 0},
	{"setDockIconImage", "(Ljava/awt/Image;)V", nullptr, $PUBLIC},
	{"setDockIconProgress", "(I)V", nullptr, 0},
	{"setDockMenu", "(Ljava/awt/PopupMenu;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_nativeGetDockIconImage 3
#define _METHOD_INDEX_nativeSetDockIconBadge 4
#define _METHOD_INDEX_nativeSetDockIconImage 5
#define _METHOD_INDEX_nativeSetDockIconProgress 6
#define _METHOD_INDEX_nativeSetDockMenu 7

$ClassInfo __AppDockIconHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.eawt._AppDockIconHandler",
	"java.lang.Object",
	nullptr,
	__AppDockIconHandler_FieldInfo_,
	__AppDockIconHandler_MethodInfo_
};

$Object* allocate$_AppDockIconHandler($Class* clazz) {
	return $of($alloc(_AppDockIconHandler));
}

void _AppDockIconHandler::nativeSetDockMenu(int64_t cmenu) {
	$init(_AppDockIconHandler);
	$prepareNativeStatic(_AppDockIconHandler, nativeSetDockMenu, void, int64_t cmenu);
	$invokeNativeStatic(cmenu);
	$finishNativeStatic();
}

void _AppDockIconHandler::nativeSetDockIconImage(int64_t image) {
	$init(_AppDockIconHandler);
	$prepareNativeStatic(_AppDockIconHandler, nativeSetDockIconImage, void, int64_t image);
	$invokeNativeStatic(image);
	$finishNativeStatic();
}

void _AppDockIconHandler::nativeSetDockIconProgress(int32_t value) {
	$init(_AppDockIconHandler);
	$prepareNativeStatic(_AppDockIconHandler, nativeSetDockIconProgress, void, int32_t value);
	$invokeNativeStatic(value);
	$finishNativeStatic();
}

int64_t _AppDockIconHandler::nativeGetDockIconImage() {
	$init(_AppDockIconHandler);
	int64_t $ret = 0;
	$prepareNativeStatic(_AppDockIconHandler, nativeGetDockIconImage, int64_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void _AppDockIconHandler::nativeSetDockIconBadge($String* badge) {
	$init(_AppDockIconHandler);
	$prepareNativeStatic(_AppDockIconHandler, nativeSetDockIconBadge, void, $String* badge);
	$invokeNativeStatic(badge);
	$finishNativeStatic();
}

void _AppDockIconHandler::init$() {
	$set(this, fDockMenu, nullptr);
}

void _AppDockIconHandler::setDockMenu($PopupMenu* menu) {
	$useLocalCurrentObjectStackCache();
	$set(this, fDockMenu, menu);
	if (menu == nullptr) {
		nativeSetDockMenu(0);
		return;
	}
	$var($MenuContainer, container, $nc(menu)->getParent());
	if (container == nullptr) {
		$var($MenuBar, newParent, $new($MenuBar));
		newParent->add(menu);
		newParent->addNotify();
	}
	menu->addNotify();
	$var($CMenu, peer, $cast($CMenu, $nc($($AWTAccessor::getMenuComponentAccessor()))->getPeer(this->fDockMenu)));
	nativeSetDockMenu($nc(peer)->getNativeMenu());
}

$PopupMenu* _AppDockIconHandler::getDockMenu() {
	return this->fDockMenu;
}

void _AppDockIconHandler::setDockIconImage($Image* image) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($CImage, cImage, $CImage::createFromImage(image));
		$nc(cImage)->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(_AppDockIconHandler$$Lambda$nativeSetDockIconImage)));
	} catch ($Throwable& e) {
		$throwNew($RuntimeException, $cast($Throwable, e));
	}
}

$Image* _AppDockIconHandler::getDockIconImage() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		int64_t dockNSImage = nativeGetDockIconImage();
		if (dockNSImage == 0) {
			return nullptr;
		}
		$load($CImage);
		$var($Method, getCreatorMethod, $CImage::class$->getDeclaredMethod("getCreator"_s, $$new($ClassArray, 0)));
		$nc(getCreatorMethod)->setAccessible(true);
		$var($CImage$Creator, imageCreator, $cast($CImage$Creator, getCreatorMethod->invoke(nullptr, $$new($ObjectArray, 0))));
		return $nc(imageCreator)->createImageUsingNativeSize(dockNSImage);
	} catch ($Throwable& e) {
		$throwNew($RuntimeException, $cast($Throwable, e));
	}
	$shouldNotReachHere();
}

void _AppDockIconHandler::setDockIconBadge($String* badge) {
	nativeSetDockIconBadge(badge);
}

void _AppDockIconHandler::setDockIconProgress(int32_t value) {
	nativeSetDockIconProgress(value);
}

_AppDockIconHandler::_AppDockIconHandler() {
}

$Class* _AppDockIconHandler::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(_AppDockIconHandler$$Lambda$nativeSetDockIconImage::classInfo$.name)) {
			return _AppDockIconHandler$$Lambda$nativeSetDockIconImage::load$(name, initialize);
		}
	}
	$loadClass(_AppDockIconHandler, name, initialize, &__AppDockIconHandler_ClassInfo_, allocate$_AppDockIconHandler);
	return class$;
}

$Class* _AppDockIconHandler::class$ = nullptr;

		} // eawt
	} // apple
} // com