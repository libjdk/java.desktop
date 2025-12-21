#include <javax/swing/text/JTextComponent$DropLocation.h>

#include <java/awt/Point.h>
#include <javax/swing/TransferHandler$DropLocation.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position$Bias.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransferHandler$DropLocation = ::javax::swing::TransferHandler$DropLocation;
using $Position$Bias = ::javax::swing::text::Position$Bias;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _JTextComponent$DropLocation_FieldInfo_[] = {
	{"index", "I", nullptr, $PRIVATE | $FINAL, $field(JTextComponent$DropLocation, index)},
	{"bias", "Ljavax/swing/text/Position$Bias;", nullptr, $PRIVATE | $FINAL, $field(JTextComponent$DropLocation, bias)},
	{}
};

$MethodInfo _JTextComponent$DropLocation_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Point;ILjavax/swing/text/Position$Bias;)V", nullptr, $PRIVATE, $method(static_cast<void(JTextComponent$DropLocation::*)($Point*,int32_t,$Position$Bias*)>(&JTextComponent$DropLocation::init$))},
	{"getBias", "()Ljavax/swing/text/Position$Bias;", nullptr, $PUBLIC, $method(static_cast<$Position$Bias*(JTextComponent$DropLocation::*)()>(&JTextComponent$DropLocation::getBias))},
	{"getIndex", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(JTextComponent$DropLocation::*)()>(&JTextComponent$DropLocation::getIndex))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTextComponent$DropLocation_InnerClassesInfo_[] = {
	{"javax.swing.text.JTextComponent$DropLocation", "javax.swing.text.JTextComponent", "DropLocation", $PUBLIC | $STATIC | $FINAL},
	{"javax.swing.TransferHandler$DropLocation", "javax.swing.TransferHandler", "DropLocation", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JTextComponent$DropLocation_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.swing.text.JTextComponent$DropLocation",
	"javax.swing.TransferHandler$DropLocation",
	nullptr,
	_JTextComponent$DropLocation_FieldInfo_,
	_JTextComponent$DropLocation_MethodInfo_,
	nullptr,
	nullptr,
	_JTextComponent$DropLocation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.JTextComponent"
};

$Object* allocate$JTextComponent$DropLocation($Class* clazz) {
	return $of($alloc(JTextComponent$DropLocation));
}

void JTextComponent$DropLocation::init$($Point* p, int32_t index, $Position$Bias* bias) {
	$TransferHandler$DropLocation::init$(p);
	this->index = index;
	$set(this, bias, bias);
}

int32_t JTextComponent$DropLocation::getIndex() {
	return this->index;
}

$Position$Bias* JTextComponent$DropLocation::getBias() {
	return this->bias;
}

$String* JTextComponent$DropLocation::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$5, $$str({$($of(this)->getClass()->getName()), "[dropPoint="_s}));
	$var($String, var$4, $$concat(var$5, $(getDropPoint())));
	$var($String, var$3, $$concat(var$4, ",index="_s));
	$var($String, var$2, $$concat(var$3, $$str(this->index)));
	$var($String, var$1, $$concat(var$2, ",bias="_s));
	$var($String, var$0, $$concat(var$1, this->bias));
	return $concat(var$0, "]"_s);
}

JTextComponent$DropLocation::JTextComponent$DropLocation() {
}

$Class* JTextComponent$DropLocation::load$($String* name, bool initialize) {
	$loadClass(JTextComponent$DropLocation, name, initialize, &_JTextComponent$DropLocation_ClassInfo_, allocate$JTextComponent$DropLocation);
	return class$;
}

$Class* JTextComponent$DropLocation::class$ = nullptr;

		} // text
	} // swing
} // javax