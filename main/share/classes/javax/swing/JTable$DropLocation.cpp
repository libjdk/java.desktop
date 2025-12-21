#include <javax/swing/JTable$DropLocation.h>

#include <java/awt/Point.h>
#include <javax/swing/JTable.h>
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

$FieldInfo _JTable$DropLocation_FieldInfo_[] = {
	{"row", "I", nullptr, $PRIVATE | $FINAL, $field(JTable$DropLocation, row)},
	{"col", "I", nullptr, $PRIVATE | $FINAL, $field(JTable$DropLocation, col)},
	{"isInsertRow", "Z", nullptr, $PRIVATE | $FINAL, $field(JTable$DropLocation, isInsertRow$)},
	{"isInsertCol", "Z", nullptr, $PRIVATE | $FINAL, $field(JTable$DropLocation, isInsertCol)},
	{}
};

$MethodInfo _JTable$DropLocation_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Point;IIZZ)V", nullptr, $PRIVATE, $method(static_cast<void(JTable$DropLocation::*)($Point*,int32_t,int32_t,bool,bool)>(&JTable$DropLocation::init$))},
	{"getColumn", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(JTable$DropLocation::*)()>(&JTable$DropLocation::getColumn))},
	{"getRow", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(JTable$DropLocation::*)()>(&JTable$DropLocation::getRow))},
	{"isInsertColumn", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(JTable$DropLocation::*)()>(&JTable$DropLocation::isInsertColumn))},
	{"isInsertRow", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(JTable$DropLocation::*)()>(&JTable$DropLocation::isInsertRow))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTable$DropLocation_InnerClassesInfo_[] = {
	{"javax.swing.JTable$DropLocation", "javax.swing.JTable", "DropLocation", $PUBLIC | $STATIC | $FINAL},
	{"javax.swing.TransferHandler$DropLocation", "javax.swing.TransferHandler", "DropLocation", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JTable$DropLocation_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.swing.JTable$DropLocation",
	"javax.swing.TransferHandler$DropLocation",
	nullptr,
	_JTable$DropLocation_FieldInfo_,
	_JTable$DropLocation_MethodInfo_,
	nullptr,
	nullptr,
	_JTable$DropLocation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$DropLocation($Class* clazz) {
	return $of($alloc(JTable$DropLocation));
}

void JTable$DropLocation::init$($Point* p, int32_t row, int32_t col, bool isInsertRow, bool isInsertCol) {
	$TransferHandler$DropLocation::init$(p);
	this->row = row;
	this->col = col;
	this->isInsertRow$ = isInsertRow;
	this->isInsertCol = isInsertCol;
}

int32_t JTable$DropLocation::getRow() {
	return this->row;
}

int32_t JTable$DropLocation::getColumn() {
	return this->col;
}

bool JTable$DropLocation::isInsertRow() {
	return this->isInsertRow$;
}

bool JTable$DropLocation::isInsertColumn() {
	return this->isInsertCol;
}

$String* JTable$DropLocation::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$9, $$str({$($of(this)->getClass()->getName()), "[dropPoint="_s}));
	$var($String, var$8, $$concat(var$9, $(getDropPoint())));
	$var($String, var$7, $$concat(var$8, ",row="_s));
	$var($String, var$6, $$concat(var$7, $$str(this->row)));
	$var($String, var$5, $$concat(var$6, ",column="_s));
	$var($String, var$4, $$concat(var$5, $$str(this->col)));
	$var($String, var$3, $$concat(var$4, ",insertRow="_s));
	$var($String, var$2, $$concat(var$3, $$str(this->isInsertRow$)));
	$var($String, var$1, $$concat(var$2, ",insertColumn="_s));
	$var($String, var$0, $$concat(var$1, $$str(this->isInsertCol)));
	return $concat(var$0, "]"_s);
}

JTable$DropLocation::JTable$DropLocation() {
}

$Class* JTable$DropLocation::load$($String* name, bool initialize) {
	$loadClass(JTable$DropLocation, name, initialize, &_JTable$DropLocation_ClassInfo_, allocate$JTable$DropLocation);
	return class$;
}

$Class* JTable$DropLocation::class$ = nullptr;

	} // swing
} // javax