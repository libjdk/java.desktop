#include <com/apple/laf/AquaComboBoxRendererInternal.h>

#include <com/apple/laf/AquaMenuPainter.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/UIManager.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $AquaMenuPainter = ::com::apple::laf::AquaMenuPainter;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $UIManager = ::javax::swing::UIManager;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaComboBoxRendererInternal_FieldInfo_[] = {
	{"fComboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<*>;", $FINAL, $field(AquaComboBoxRendererInternal, fComboBox)},
	{"fSelected", "Z", nullptr, 0, $field(AquaComboBoxRendererInternal, fSelected)},
	{"fChecked", "Z", nullptr, 0, $field(AquaComboBoxRendererInternal, fChecked)},
	{"fInList", "Z", nullptr, 0, $field(AquaComboBoxRendererInternal, fInList)},
	{"fEditable", "Z", nullptr, 0, $field(AquaComboBoxRendererInternal, fEditable)},
	{"fDrawCheckedItem", "Z", nullptr, 0, $field(AquaComboBoxRendererInternal, fDrawCheckedItem)},
	{}
};

$MethodInfo _AquaComboBoxRendererInternal_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JComboBox;)V", "(Ljavax/swing/JComboBox<*>;)V", $PUBLIC, $method(static_cast<void(AquaComboBoxRendererInternal::*)($JComboBox*)>(&AquaComboBoxRendererInternal::init$))},
	{"getBaseline", "(II)I", nullptr, $PUBLIC},
	{"getInsets", "(Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<+TE;>;TE;IZZ)Ljava/awt/Component;", $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"setDrawCheckedItem", "(Z)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AquaComboBoxRendererInternal_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxRendererInternal",
	"javax.swing.JLabel",
	"javax.swing.ListCellRenderer",
	_AquaComboBoxRendererInternal_FieldInfo_,
	_AquaComboBoxRendererInternal_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljavax/swing/JLabel;Ljavax/swing/ListCellRenderer<TE;>;"
};

$Object* allocate$AquaComboBoxRendererInternal($Class* clazz) {
	return $of($alloc(AquaComboBoxRendererInternal));
}

$String* AquaComboBoxRendererInternal::toString() {
	 return this->$JLabel::toString();
}

int32_t AquaComboBoxRendererInternal::hashCode() {
	 return this->$JLabel::hashCode();
}

bool AquaComboBoxRendererInternal::equals(Object$* arg0) {
	 return this->$JLabel::equals(arg0);
}

$Object* AquaComboBoxRendererInternal::clone() {
	 return this->$JLabel::clone();
}

void AquaComboBoxRendererInternal::finalize() {
	this->$JLabel::finalize();
}

void AquaComboBoxRendererInternal::init$($JComboBox* comboBox) {
	$JLabel::init$();
	this->fDrawCheckedItem = true;
	$set(this, fComboBox, comboBox);
}

$Dimension* AquaComboBoxRendererInternal::getPreferredSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, nullptr);
	$var($String, text, getText());
	if (text == nullptr || $nc(text)->isEmpty()) {
		setText(" "_s);
		$assign(size, $JLabel::getPreferredSize());
		setText(""_s);
	} else {
		$assign(size, $JLabel::getPreferredSize());
	}
	return size;
}

void AquaComboBoxRendererInternal::paintBorder($Graphics* g) {
}

int32_t AquaComboBoxRendererInternal::getBaseline(int32_t width, int32_t height) {
	return $JLabel::getBaseline(width, height) - 1;
}

$Component* AquaComboBoxRendererInternal::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$useLocalCurrentObjectStackCache();
	this->fInList = (index >= 0);
	this->fSelected = isSelected;
	if (index < 0) {
		index = $nc(this->fComboBox)->getSelectedIndex();
	}
	if (index >= 0) {
		$var($Object, item, $nc(this->fComboBox)->getItemAt(index));
		this->fChecked = this->fInList && item != nullptr && $of(item)->equals($($nc(this->fComboBox)->getSelectedItem()));
	} else {
		this->fChecked = false;
	}
	this->fEditable = $nc(this->fComboBox)->isEditable();
	if (isSelected) {
		if (this->fEditable) {
			setBackground($($UIManager::getColor("List.selectionBackground"_s)));
			setForeground($($UIManager::getColor("List.selectionForeground"_s)));
		} else {
			setBackground($($nc(list)->getSelectionBackground()));
			setForeground($($nc(list)->getSelectionForeground()));
		}
	} else if (this->fEditable) {
		setBackground($($UIManager::getColor("List.background"_s)));
		setForeground($($UIManager::getColor("List.foreground"_s)));
	} else {
		setBackground($($nc(list)->getBackground()));
		setForeground($($nc(list)->getForeground()));
	}
	setFont($($nc(list)->getFont()));
	if ($instanceOf($Icon, value)) {
		setIcon($cast($Icon, value));
	} else {
		setText((value == nullptr) ? " "_s : $($nc($of(value))->toString()));
	}
	return this;
}

$Insets* AquaComboBoxRendererInternal::getInsets($Insets* insets$renamed) {
	$var($Insets, insets, insets$renamed);
	if (insets == nullptr) {
		$assign(insets, $new($Insets, 0, 0, 0, 0));
	}
	$nc(insets)->top = 1;
	insets->bottom = 1;
	insets->right = 5;
	insets->left = (this->fInList && !this->fEditable ? 16 + 7 : 5);
	return insets;
}

void AquaComboBoxRendererInternal::setDrawCheckedItem(bool drawCheckedItem) {
	this->fDrawCheckedItem = drawCheckedItem;
}

void AquaComboBoxRendererInternal::paintComponent($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	if (this->fInList) {
		if (this->fSelected && !this->fEditable) {
			$var($Graphics, var$0, g);
			int32_t var$1 = getWidth();
			$nc($($AquaMenuPainter::instance()))->paintSelectedMenuItemBackground(var$0, var$1, getHeight());
		} else {
			$nc(g)->setColor($(getBackground()));
			int32_t var$2 = getWidth();
			g->fillRect(0, 0, var$2, getHeight());
		}
		if (this->fChecked && !this->fEditable && this->fDrawCheckedItem) {
			int32_t y = getHeight() - 4;
			$nc(g)->setColor($(getForeground()));
			$SwingUtilities2::drawString(static_cast<$JComponent*>(this->fComboBox), g, u"✓"_s, 6, y);
		}
	}
	$JLabel::paintComponent(g);
}

AquaComboBoxRendererInternal::AquaComboBoxRendererInternal() {
}

$Class* AquaComboBoxRendererInternal::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxRendererInternal, name, initialize, &_AquaComboBoxRendererInternal_ClassInfo_, allocate$AquaComboBoxRendererInternal);
	return class$;
}

$Class* AquaComboBoxRendererInternal::class$ = nullptr;

		} // laf
	} // apple
} // com