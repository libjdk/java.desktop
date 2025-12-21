#include <javax/swing/UIManager$LookAndFeelInfo.h>

#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$FieldInfo _UIManager$LookAndFeelInfo_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UIManager$LookAndFeelInfo, name)},
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UIManager$LookAndFeelInfo, className)},
	{}
};

$MethodInfo _UIManager$LookAndFeelInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(UIManager$LookAndFeelInfo::*)($String*,$String*)>(&UIManager$LookAndFeelInfo::init$))},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _UIManager$LookAndFeelInfo_InnerClassesInfo_[] = {
	{"javax.swing.UIManager$LookAndFeelInfo", "javax.swing.UIManager", "LookAndFeelInfo", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _UIManager$LookAndFeelInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.UIManager$LookAndFeelInfo",
	"java.lang.Object",
	nullptr,
	_UIManager$LookAndFeelInfo_FieldInfo_,
	_UIManager$LookAndFeelInfo_MethodInfo_,
	nullptr,
	nullptr,
	_UIManager$LookAndFeelInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.UIManager"
};

$Object* allocate$UIManager$LookAndFeelInfo($Class* clazz) {
	return $of($alloc(UIManager$LookAndFeelInfo));
}

void UIManager$LookAndFeelInfo::init$($String* name, $String* className) {
	$set(this, name, name);
	$set(this, className, className);
}

$String* UIManager$LookAndFeelInfo::getName() {
	return this->name;
}

$String* UIManager$LookAndFeelInfo::getClassName() {
	return this->className;
}

$String* UIManager$LookAndFeelInfo::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$3, $$str({$($of(this)->getClass()->getName()), "["_s}));
	$var($String, var$2, $$concat(var$3, $(getName())));
	$var($String, var$1, $$concat(var$2, " "_s));
	$var($String, var$0, $$concat(var$1, $(getClassName())));
	return $concat(var$0, "]"_s);
}

UIManager$LookAndFeelInfo::UIManager$LookAndFeelInfo() {
}

$Class* UIManager$LookAndFeelInfo::load$($String* name, bool initialize) {
	$loadClass(UIManager$LookAndFeelInfo, name, initialize, &_UIManager$LookAndFeelInfo_ClassInfo_, allocate$UIManager$LookAndFeelInfo);
	return class$;
}

$Class* UIManager$LookAndFeelInfo::class$ = nullptr;

	} // swing
} // javax