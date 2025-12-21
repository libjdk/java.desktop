#include <javax/swing/JList$DropLocation.h>

#include <java/awt/Point.h>
#include <javax/swing/JList.h>
#include <javax/swing/TransferHandler$DropLocation.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransferHandler$DropLocation = ::javax::swing::TransferHandler$DropLocation;

namespace javax {
	namespace swing {

$FieldInfo _JList$DropLocation_FieldInfo_[] = {
	{"index", "I", nullptr, $PRIVATE | $FINAL, $field(JList$DropLocation, index)},
	{"isInsert", "Z", nullptr, $PRIVATE | $FINAL, $field(JList$DropLocation, isInsert$)},
	{}
};

$MethodInfo _JList$DropLocation_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Point;IZ)V", nullptr, $PRIVATE, $method(static_cast<void(JList$DropLocation::*)($Point*,int32_t,bool)>(&JList$DropLocation::init$))},
	{"getIndex", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(JList$DropLocation::*)()>(&JList$DropLocation::getIndex))},
	{"isInsert", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(JList$DropLocation::*)()>(&JList$DropLocation::isInsert))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JList$DropLocation_InnerClassesInfo_[] = {
	{"javax.swing.JList$DropLocation", "javax.swing.JList", "DropLocation", $PUBLIC | $STATIC | $FINAL},
	{"javax.swing.TransferHandler$DropLocation", "javax.swing.TransferHandler", "DropLocation", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JList$DropLocation_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.swing.JList$DropLocation",
	"javax.swing.TransferHandler$DropLocation",
	nullptr,
	_JList$DropLocation_FieldInfo_,
	_JList$DropLocation_MethodInfo_,
	nullptr,
	nullptr,
	_JList$DropLocation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JList"
};

$Object* allocate$JList$DropLocation($Class* clazz) {
	return $of($alloc(JList$DropLocation));
}

void JList$DropLocation::init$($Point* p, int32_t index, bool isInsert) {
	$TransferHandler$DropLocation::init$(p);
	this->index = index;
	this->isInsert$ = isInsert;
}

int32_t JList$DropLocation::getIndex() {
	return this->index;
}

bool JList$DropLocation::isInsert() {
	return this->isInsert$;
}

$String* JList$DropLocation::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$5, $$str({$($of(this)->getClass()->getName()), "[dropPoint="_s}));
	$var($String, var$4, $$concat(var$5, $(getDropPoint())));
	$var($String, var$3, $$concat(var$4, ",index="_s));
	$var($String, var$2, $$concat(var$3, $$str(this->index)));
	$var($String, var$1, $$concat(var$2, ",insert="_s));
	$var($String, var$0, $$concat(var$1, $$str(this->isInsert$)));
	return $concat(var$0, "]"_s);
}

JList$DropLocation::JList$DropLocation() {
}

$Class* JList$DropLocation::load$($String* name, bool initialize) {
	$loadClass(JList$DropLocation, name, initialize, &_JList$DropLocation_ClassInfo_, allocate$JList$DropLocation);
	return class$;
}

$Class* JList$DropLocation::class$ = nullptr;

	} // swing
} // javax