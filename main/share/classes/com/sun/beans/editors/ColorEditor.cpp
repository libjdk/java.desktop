#include <com/sun/beans/editors/ColorEditor.h>

#include <java/awt/Canvas.h>
#include <java/awt/Choice.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Event.h>
#include <java/awt/Graphics.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Panel.h>
#include <java/awt/Rectangle.h>
#include <java/awt/TextComponent.h>
#include <java/awt/TextField.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyChangeSupport.h>
#include <jcpp.h>

using $ColorArray = $Array<::java::awt::Color>;
using $Canvas = ::java::awt::Canvas;
using $Choice = ::java::awt::Choice;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Event = ::java::awt::Event;
using $Graphics = ::java::awt::Graphics;
using $LayoutManager = ::java::awt::LayoutManager;
using $Panel = ::java::awt::Panel;
using $Rectangle = ::java::awt::Rectangle;
using $TextComponent = ::java::awt::TextComponent;
using $TextField = ::java::awt::TextField;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

$FieldInfo _ColorEditor_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ColorEditor, serialVersionUID)},
	{"colorNames", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(ColorEditor, colorNames)},
	{"colors", "[Ljava/awt/Color;", nullptr, $PRIVATE, $field(ColorEditor, colors)},
	{"sample", "Ljava/awt/Canvas;", nullptr, $PRIVATE, $field(ColorEditor, sample)},
	{"sampleHeight", "I", nullptr, $PRIVATE, $field(ColorEditor, sampleHeight)},
	{"sampleWidth", "I", nullptr, $PRIVATE, $field(ColorEditor, sampleWidth)},
	{"hPad", "I", nullptr, $PRIVATE, $field(ColorEditor, hPad)},
	{"ourWidth", "I", nullptr, $PRIVATE, $field(ColorEditor, ourWidth)},
	{"color", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ColorEditor, color)},
	{"text", "Ljava/awt/TextField;", nullptr, $PRIVATE, $field(ColorEditor, text)},
	{"choser", "Ljava/awt/Choice;", nullptr, $PRIVATE, $field(ColorEditor, choser)},
	{"support", "Ljava/beans/PropertyChangeSupport;", nullptr, $PRIVATE, $field(ColorEditor, support)},
	{}
};

$MethodInfo _ColorEditor_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ColorEditor::*)()>(&ColorEditor::init$))},
	{"action", "(Ljava/awt/Event;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"changeColor", "(Ljava/awt/Color;)V", nullptr, $PRIVATE, $method(static_cast<void(ColorEditor::*)($Color*)>(&ColorEditor::changeColor))},
	{"getAsText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCustomEditor", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getJavaInitializationString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTags", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isPaintable", "()Z", nullptr, $PUBLIC},
	{"keyUp", "(Ljava/awt/Event;I)Z", nullptr, $PUBLIC},
	{"paintValue", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"preferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"setAsText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"supportsCustomEditor", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ColorEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.beans.editors.ColorEditor",
	"java.awt.Panel",
	"java.beans.PropertyEditor",
	_ColorEditor_FieldInfo_,
	_ColorEditor_MethodInfo_
};

$Object* allocate$ColorEditor($Class* clazz) {
	return $of($alloc(ColorEditor));
}

$String* ColorEditor::toString() {
	 return this->$Panel::toString();
}

int32_t ColorEditor::hashCode() {
	 return this->$Panel::hashCode();
}

bool ColorEditor::equals(Object$* arg0) {
	 return this->$Panel::equals(arg0);
}

$Object* ColorEditor::clone() {
	 return this->$Panel::clone();
}

void ColorEditor::finalize() {
	this->$Panel::finalize();
}

void ColorEditor::init$() {
	$Panel::init$();
	$set(this, colorNames, $new($StringArray, {
		" "_s,
		"white"_s,
		"lightGray"_s,
		"gray"_s,
		"darkGray"_s,
		"black"_s,
		"red"_s,
		"pink"_s,
		"orange"_s,
		"yellow"_s,
		"green"_s,
		"magenta"_s,
		"cyan"_s,
		"blue"_s
	}));
	$init($Color);
	$set(this, colors, $new($ColorArray, {
		($Color*)nullptr,
		$Color::white,
		$Color::lightGray,
		$Color::gray,
		$Color::darkGray,
		$Color::black,
		$Color::red,
		$Color::pink,
		$Color::orange,
		$Color::yellow,
		$Color::green,
		$Color::magenta,
		$Color::cyan,
		$Color::blue
	}));
	this->sampleHeight = 20;
	this->sampleWidth = 40;
	this->hPad = 5;
	$set(this, support, $new($PropertyChangeSupport, this));
	setLayout(nullptr);
	this->ourWidth = this->hPad;
	$var($Panel, p, $new($Panel));
	p->setLayout(nullptr);
	p->setBackground($Color::black);
	$set(this, sample, $new($Canvas));
	p->add(static_cast<$Component*>(this->sample));
	$nc(this->sample)->reshape(2, 2, this->sampleWidth, this->sampleHeight);
	add(static_cast<$Component*>(p));
	p->reshape(this->ourWidth, 2, this->sampleWidth + 4, this->sampleHeight + 4);
	this->ourWidth += this->sampleWidth + 4 + this->hPad;
	$set(this, text, $new($TextField, ""_s, 14));
	add(static_cast<$Component*>(this->text));
	$nc(this->text)->reshape(this->ourWidth, 0, 100, 30);
	this->ourWidth += 100 + this->hPad;
	$set(this, choser, $new($Choice));
	int32_t active = 0;
	for (int32_t i = 0; i < $nc(this->colorNames)->length; ++i) {
		$nc(this->choser)->addItem($nc(this->colorNames)->get(i));
	}
	add(static_cast<$Component*>(this->choser));
	$nc(this->choser)->reshape(this->ourWidth, 0, 100, 30);
	this->ourWidth += 100 + this->hPad;
	resize(this->ourWidth, 40);
}

void ColorEditor::setValue(Object$* o) {
	$var($Color, c, $cast($Color, o));
	changeColor(c);
}

$Dimension* ColorEditor::preferredSize() {
	return $new($Dimension, this->ourWidth, 40);
}

bool ColorEditor::keyUp($Event* e, int32_t key) {
	if ($equals($nc(e)->target, this->text)) {
		try {
			setAsText($($nc(this->text)->getText()));
		} catch ($IllegalArgumentException& ex) {
		}
	}
	return (false);
}

void ColorEditor::setAsText($String* s) {
	$useLocalCurrentObjectStackCache();
	if (s == nullptr) {
		changeColor(nullptr);
		return;
	}
	int32_t c1 = $nc(s)->indexOf((int32_t)u',');
	int32_t c2 = s->indexOf((int32_t)u',', c1 + 1);
	if (c1 < 0 || c2 < 0) {
		$throwNew($IllegalArgumentException, s);
	}
	try {
		int32_t r = $Integer::parseInt($(s->substring(0, c1)));
		int32_t g = $Integer::parseInt($(s->substring(c1 + 1, c2)));
		int32_t b = $Integer::parseInt($(s->substring(c2 + 1)));
		$var($Color, c, $new($Color, r, g, b));
		changeColor(c);
	} catch ($Exception& ex) {
		$throwNew($IllegalArgumentException, s);
	}
}

bool ColorEditor::action($Event* e, Object$* arg) {
	if ($equals($nc(e)->target, this->choser)) {
		changeColor($nc(this->colors)->get($nc(this->choser)->getSelectedIndex()));
	}
	return false;
}

$String* ColorEditor::getJavaInitializationString() {
	return (this->color != nullptr) ? $str({"new java.awt.Color("_s, $$str($nc(this->color)->getRGB()), ",true)"_s}) : "null"_s;
}

void ColorEditor::changeColor($Color* c) {
	$useLocalCurrentObjectStackCache();
	if (c == nullptr) {
		$set(this, color, nullptr);
		$nc(this->text)->setText(""_s);
		return;
	}
	$set(this, color, c);
	$var($String, var$2, $$str({""_s, $$str($nc(c)->getRed()), ","_s}));
	$var($String, var$1, $$concat(var$2, $$str(c->getGreen())));
	$var($String, var$0, $$concat(var$1, ","_s));
	$nc(this->text)->setText($$concat(var$0, $$str(c->getBlue())));
	int32_t active = 0;
	for (int32_t i = 0; i < $nc(this->colorNames)->length; ++i) {
		if ($nc(this->color)->equals($nc(this->colors)->get(i))) {
			active = i;
		}
	}
	$nc(this->choser)->select(active);
	$nc(this->sample)->setBackground(this->color);
	$nc(this->sample)->repaint();
	$nc(this->support)->firePropertyChange(""_s, ($Object*)nullptr, ($Object*)nullptr);
}

$Object* ColorEditor::getValue() {
	return $of(this->color);
}

bool ColorEditor::isPaintable() {
	return true;
}

void ColorEditor::paintValue($Graphics* gfx, $Rectangle* box) {
	$var($Color, oldColor, $nc(gfx)->getColor());
	$init($Color);
	gfx->setColor($Color::black);
	gfx->drawRect($nc(box)->x, box->y, box->width - 3, box->height - 3);
	gfx->setColor(this->color);
	gfx->fillRect($nc(box)->x + 1, box->y + 1, box->width - 4, box->height - 4);
	gfx->setColor(oldColor);
}

$String* ColorEditor::getAsText() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, nullptr);
	if (this->color != nullptr) {
		$var($String, var$3, $$str({$$str($nc(this->color)->getRed()), ","_s}));
		$var($String, var$2, $$concat(var$3, $$str($nc(this->color)->getGreen())));
		$var($String, var$1, $$concat(var$2, ","_s));
		$assign(var$0, $concat(var$1, $$str($nc(this->color)->getBlue())));
	} else {
		$assign(var$0, nullptr);
	}
	return var$0;
}

$StringArray* ColorEditor::getTags() {
	return nullptr;
}

$Component* ColorEditor::getCustomEditor() {
	return this;
}

bool ColorEditor::supportsCustomEditor() {
	return true;
}

void ColorEditor::addPropertyChangeListener($PropertyChangeListener* l) {
	$nc(this->support)->addPropertyChangeListener(l);
}

void ColorEditor::removePropertyChangeListener($PropertyChangeListener* l) {
	$nc(this->support)->removePropertyChangeListener(l);
}

ColorEditor::ColorEditor() {
}

$Class* ColorEditor::load$($String* name, bool initialize) {
	$loadClass(ColorEditor, name, initialize, &_ColorEditor_ClassInfo_, allocate$ColorEditor);
	return class$;
}

$Class* ColorEditor::class$ = nullptr;

			} // editors
		} // beans
	} // sun
} // com