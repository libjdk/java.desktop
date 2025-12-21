#include <javax/swing/JTree$DropLocation.h>

#include <java/awt/Point.h>
#include <javax/swing/JTree.h>
#include <javax/swing/TransferHandler$DropLocation.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransferHandler$DropLocation = ::javax::swing::TransferHandler$DropLocation;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {

$FieldInfo _JTree$DropLocation_FieldInfo_[] = {
	{"path", "Ljavax/swing/tree/TreePath;", nullptr, $PRIVATE | $FINAL, $field(JTree$DropLocation, path)},
	{"index", "I", nullptr, $PRIVATE | $FINAL, $field(JTree$DropLocation, index)},
	{}
};

$MethodInfo _JTree$DropLocation_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Point;Ljavax/swing/tree/TreePath;I)V", nullptr, $PRIVATE, $method(static_cast<void(JTree$DropLocation::*)($Point*,$TreePath*,int32_t)>(&JTree$DropLocation::init$))},
	{"getChildIndex", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(JTree$DropLocation::*)()>(&JTree$DropLocation::getChildIndex))},
	{"getPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC, $method(static_cast<$TreePath*(JTree$DropLocation::*)()>(&JTree$DropLocation::getPath))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTree$DropLocation_InnerClassesInfo_[] = {
	{"javax.swing.JTree$DropLocation", "javax.swing.JTree", "DropLocation", $PUBLIC | $STATIC | $FINAL},
	{"javax.swing.TransferHandler$DropLocation", "javax.swing.TransferHandler", "DropLocation", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JTree$DropLocation_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.swing.JTree$DropLocation",
	"javax.swing.TransferHandler$DropLocation",
	nullptr,
	_JTree$DropLocation_FieldInfo_,
	_JTree$DropLocation_MethodInfo_,
	nullptr,
	nullptr,
	_JTree$DropLocation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTree"
};

$Object* allocate$JTree$DropLocation($Class* clazz) {
	return $of($alloc(JTree$DropLocation));
}

void JTree$DropLocation::init$($Point* p, $TreePath* path, int32_t index) {
	$TransferHandler$DropLocation::init$(p);
	$set(this, path, path);
	this->index = index;
}

int32_t JTree$DropLocation::getChildIndex() {
	return this->index;
}

$TreePath* JTree$DropLocation::getPath() {
	return this->path;
}

$String* JTree$DropLocation::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$5, $$str({$($of(this)->getClass()->getName()), "[dropPoint="_s}));
	$var($String, var$4, $$concat(var$5, $(getDropPoint())));
	$var($String, var$3, $$concat(var$4, ",path="_s));
	$var($String, var$2, $$concat(var$3, this->path));
	$var($String, var$1, $$concat(var$2, ",childIndex="_s));
	$var($String, var$0, $$concat(var$1, $$str(this->index)));
	return $concat(var$0, "]"_s);
}

JTree$DropLocation::JTree$DropLocation() {
}

$Class* JTree$DropLocation::load$($String* name, bool initialize) {
	$loadClass(JTree$DropLocation, name, initialize, &_JTree$DropLocation_ClassInfo_, allocate$JTree$DropLocation);
	return class$;
}

$Class* JTree$DropLocation::class$ = nullptr;

	} // swing
} // javax