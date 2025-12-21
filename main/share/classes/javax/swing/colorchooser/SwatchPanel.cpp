#include <javax/swing/colorchooser/SwatchPanel.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyListener.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/colorchooser/SwatchPanel$1.h>
#include <javax/swing/colorchooser/SwatchPanel$2.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusListener = ::java::awt::event::FocusListener;
using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyListener = ::java::awt::event::KeyListener;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPanel = ::javax::swing::JPanel;
using $SwatchPanel$1 = ::javax::swing::colorchooser::SwatchPanel$1;
using $SwatchPanel$2 = ::javax::swing::colorchooser::SwatchPanel$2;

namespace javax {
	namespace swing {
		namespace colorchooser {

$FieldInfo _SwatchPanel_FieldInfo_[] = {
	{"colors", "[Ljava/awt/Color;", nullptr, $PROTECTED, $field(SwatchPanel, colors)},
	{"swatchSize", "Ljava/awt/Dimension;", nullptr, $PROTECTED, $field(SwatchPanel, swatchSize)},
	{"numSwatches", "Ljava/awt/Dimension;", nullptr, $PROTECTED, $field(SwatchPanel, numSwatches)},
	{"gap", "Ljava/awt/Dimension;", nullptr, $PROTECTED, $field(SwatchPanel, gap)},
	{"selRow", "I", nullptr, $PRIVATE, $field(SwatchPanel, selRow)},
	{"selCol", "I", nullptr, $PRIVATE, $field(SwatchPanel, selCol)},
	{}
};

$MethodInfo _SwatchPanel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SwatchPanel::*)()>(&SwatchPanel::init$))},
	{"getColorForCell", "(II)Ljava/awt/Color;", nullptr, $PRIVATE, $method(static_cast<$Color*(SwatchPanel::*)(int32_t,int32_t)>(&SwatchPanel::getColorForCell))},
	{"getColorForLocation", "(II)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSelectedColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getToolTipText", "(Ljava/awt/event/MouseEvent;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"initColors", "()V", nullptr, $PROTECTED},
	{"initValues", "()V", nullptr, $PROTECTED},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"setSelectedColorFromLocation", "(II)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SwatchPanel_InnerClassesInfo_[] = {
	{"javax.swing.colorchooser.SwatchPanel$2", nullptr, nullptr, 0},
	{"javax.swing.colorchooser.SwatchPanel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwatchPanel_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.colorchooser.SwatchPanel",
	"javax.swing.JPanel",
	nullptr,
	_SwatchPanel_FieldInfo_,
	_SwatchPanel_MethodInfo_,
	nullptr,
	nullptr,
	_SwatchPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.colorchooser.SwatchPanel$2,javax.swing.colorchooser.SwatchPanel$1"
};

$Object* allocate$SwatchPanel($Class* clazz) {
	return $of($alloc(SwatchPanel));
}

void SwatchPanel::init$() {
	$useLocalCurrentObjectStackCache();
	$JPanel::init$();
	initValues();
	initColors();
	setToolTipText(""_s);
	setOpaque(true);
	$init($Color);
	setBackground($Color::white);
	setFocusable(true);
	setInheritsPopupMenu(true);
	addFocusListener($$new($SwatchPanel$1, this));
	addKeyListener($$new($SwatchPanel$2, this));
}

$Color* SwatchPanel::getSelectedColor() {
	return getColorForCell(this->selCol, this->selRow);
}

void SwatchPanel::initValues() {
}

void SwatchPanel::paintComponent($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->setColor($(getBackground()));
	int32_t var$0 = getWidth();
	g->fillRect(0, 0, var$0, getHeight());
	for (int32_t row = 0; row < $nc(this->numSwatches)->height; ++row) {
		int32_t y = row * ($nc(this->swatchSize)->height + $nc(this->gap)->height);
		for (int32_t column = 0; column < $nc(this->numSwatches)->width; ++column) {
			$var($Color, c, getColorForCell(column, row));
			g->setColor(c);
			int32_t x = 0;
			if (!$nc($(this->getComponentOrientation()))->isLeftToRight()) {
				x = ($nc(this->numSwatches)->width - column - 1) * ($nc(this->swatchSize)->width + $nc(this->gap)->width);
			} else {
				x = column * ($nc(this->swatchSize)->width + $nc(this->gap)->width);
			}
			g->fillRect(x, y, $nc(this->swatchSize)->width, $nc(this->swatchSize)->height);
			$init($Color);
			g->setColor($Color::black);
			g->drawLine(x + $nc(this->swatchSize)->width - 1, y, x + $nc(this->swatchSize)->width - 1, y + $nc(this->swatchSize)->height - 1);
			g->drawLine(x, y + $nc(this->swatchSize)->height - 1, x + $nc(this->swatchSize)->width - 1, y + $nc(this->swatchSize)->height - 1);
			if (this->selRow == row && this->selCol == column && this->isFocusOwner()) {
				int32_t var$1 = $nc(c)->getRed() < 125 ? 255 : 0;
				int32_t var$2 = $nc(c)->getGreen() < 125 ? 255 : 0;
				$var($Color, c2, $new($Color, var$1, var$2, $nc(c)->getBlue() < 125 ? 255 : 0));
				g->setColor(c2);
				g->drawLine(x, y, x + $nc(this->swatchSize)->width - 1, y);
				g->drawLine(x, y, x, y + $nc(this->swatchSize)->height - 1);
				g->drawLine(x + $nc(this->swatchSize)->width - 1, y, x + $nc(this->swatchSize)->width - 1, y + $nc(this->swatchSize)->height - 1);
				g->drawLine(x, y + $nc(this->swatchSize)->height - 1, x + $nc(this->swatchSize)->width - 1, y + $nc(this->swatchSize)->height - 1);
				g->drawLine(x, y, x + $nc(this->swatchSize)->width - 1, y + $nc(this->swatchSize)->height - 1);
				g->drawLine(x, y + $nc(this->swatchSize)->height - 1, x + $nc(this->swatchSize)->width - 1, y);
			}
		}
	}
}

$Dimension* SwatchPanel::getPreferredSize() {
	int32_t x = $nc(this->numSwatches)->width * ($nc(this->swatchSize)->width + $nc(this->gap)->width) - 1;
	int32_t y = $nc(this->numSwatches)->height * ($nc(this->swatchSize)->height + $nc(this->gap)->height) - 1;
	return $new($Dimension, x, y);
}

void SwatchPanel::initColors() {
}

$String* SwatchPanel::getToolTipText($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(e)->getX();
	$var($Color, color, getColorForLocation(var$0, e->getY()));
	$var($String, var$3, $$str({$$str($nc(color)->getRed()), ", "_s}));
	$var($String, var$2, $$concat(var$3, $$str(color->getGreen())));
	$var($String, var$1, $$concat(var$2, ", "_s));
	return $concat(var$1, $$str(color->getBlue()));
}

void SwatchPanel::setSelectedColorFromLocation(int32_t x, int32_t y) {
	if (!$nc($(this->getComponentOrientation()))->isLeftToRight()) {
		this->selCol = $nc(this->numSwatches)->width - $div(x, ($nc(this->swatchSize)->width + $nc(this->gap)->width)) - 1;
	} else {
		this->selCol = $div(x, ($nc(this->swatchSize)->width + $nc(this->gap)->width));
	}
	this->selRow = $div(y, ($nc(this->swatchSize)->height + $nc(this->gap)->height));
	repaint();
}

$Color* SwatchPanel::getColorForLocation(int32_t x, int32_t y) {
	int32_t column = 0;
	if (!$nc($(this->getComponentOrientation()))->isLeftToRight()) {
		column = $nc(this->numSwatches)->width - $div(x, ($nc(this->swatchSize)->width + $nc(this->gap)->width)) - 1;
	} else {
		column = $div(x, ($nc(this->swatchSize)->width + $nc(this->gap)->width));
	}
	int32_t row = $div(y, ($nc(this->swatchSize)->height + $nc(this->gap)->height));
	return getColorForCell(column, row);
}

$Color* SwatchPanel::getColorForCell(int32_t column, int32_t row) {
	return $nc(this->colors)->get((row * $nc(this->numSwatches)->width) + column);
}

SwatchPanel::SwatchPanel() {
}

$Class* SwatchPanel::load$($String* name, bool initialize) {
	$loadClass(SwatchPanel, name, initialize, &_SwatchPanel_ClassInfo_, allocate$SwatchPanel);
	return class$;
}

$Class* SwatchPanel::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax