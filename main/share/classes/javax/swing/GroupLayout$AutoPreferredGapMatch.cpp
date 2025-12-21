#include <javax/swing/GroupLayout$AutoPreferredGapMatch.h>

#include <java/awt/Component.h>
#include <javax/swing/GroupLayout$ComponentSpring.h>
#include <javax/swing/GroupLayout.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GroupLayout$ComponentSpring = ::javax::swing::GroupLayout$ComponentSpring;

namespace javax {
	namespace swing {

$FieldInfo _GroupLayout$AutoPreferredGapMatch_FieldInfo_[] = {
	{"source", "Ljavax/swing/GroupLayout$ComponentSpring;", nullptr, $PUBLIC | $FINAL, $field(GroupLayout$AutoPreferredGapMatch, source)},
	{"target", "Ljavax/swing/GroupLayout$ComponentSpring;", nullptr, $PUBLIC | $FINAL, $field(GroupLayout$AutoPreferredGapMatch, target)},
	{}
};

$MethodInfo _GroupLayout$AutoPreferredGapMatch_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/GroupLayout$ComponentSpring;Ljavax/swing/GroupLayout$ComponentSpring;)V", nullptr, 0, $method(static_cast<void(GroupLayout$AutoPreferredGapMatch::*)($GroupLayout$ComponentSpring*,$GroupLayout$ComponentSpring*)>(&GroupLayout$AutoPreferredGapMatch::init$))},
	{"toString", "(Ljavax/swing/GroupLayout$ComponentSpring;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(GroupLayout$AutoPreferredGapMatch::*)($GroupLayout$ComponentSpring*)>(&GroupLayout$AutoPreferredGapMatch::toString))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GroupLayout$AutoPreferredGapMatch_InnerClassesInfo_[] = {
	{"javax.swing.GroupLayout$AutoPreferredGapMatch", "javax.swing.GroupLayout", "AutoPreferredGapMatch", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _GroupLayout$AutoPreferredGapMatch_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.GroupLayout$AutoPreferredGapMatch",
	"java.lang.Object",
	nullptr,
	_GroupLayout$AutoPreferredGapMatch_FieldInfo_,
	_GroupLayout$AutoPreferredGapMatch_MethodInfo_,
	nullptr,
	nullptr,
	_GroupLayout$AutoPreferredGapMatch_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.GroupLayout"
};

$Object* allocate$GroupLayout$AutoPreferredGapMatch($Class* clazz) {
	return $of($alloc(GroupLayout$AutoPreferredGapMatch));
}

void GroupLayout$AutoPreferredGapMatch::init$($GroupLayout$ComponentSpring* source, $GroupLayout$ComponentSpring* target) {
	$set(this, source, source);
	$set(this, target, target);
}

$String* GroupLayout$AutoPreferredGapMatch::toString($GroupLayout$ComponentSpring* spring) {
	return $nc($($nc(spring)->getComponent()))->getName();
}

$String* GroupLayout$AutoPreferredGapMatch::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"["_s, $(toString(this->source)), "-"_s}));
	$var($String, var$0, $$concat(var$1, $(toString(this->target))));
	return $concat(var$0, "]"_s);
}

GroupLayout$AutoPreferredGapMatch::GroupLayout$AutoPreferredGapMatch() {
}

$Class* GroupLayout$AutoPreferredGapMatch::load$($String* name, bool initialize) {
	$loadClass(GroupLayout$AutoPreferredGapMatch, name, initialize, &_GroupLayout$AutoPreferredGapMatch_ClassInfo_, allocate$GroupLayout$AutoPreferredGapMatch);
	return class$;
}

$Class* GroupLayout$AutoPreferredGapMatch::class$ = nullptr;

	} // swing
} // javax