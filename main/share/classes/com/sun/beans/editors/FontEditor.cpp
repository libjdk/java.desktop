#include <com/sun/beans/editors/FontEditor.h>

#include <java/awt/Choice.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Event.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Label.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Panel.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyChangeSupport.h>
#include <jcpp.h>

#undef BOLD
#undef ITALIC
#undef PLAIN

using $Choice = ::java::awt::Choice;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Event = ::java::awt::Event;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Label = ::java::awt::Label;
using $LayoutManager = ::java::awt::LayoutManager;
using $Panel = ::java::awt::Panel;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

$FieldInfo _FontEditor_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontEditor, serialVersionUID)},
	{"font", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(FontEditor, font)},
	{"toolkit", "Ljava/awt/Toolkit;", nullptr, $PRIVATE, $field(FontEditor, toolkit)},
	{"sampleText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FontEditor, sampleText)},
	{"sample", "Ljava/awt/Label;", nullptr, $PRIVATE, $field(FontEditor, sample)},
	{"familyChoser", "Ljava/awt/Choice;", nullptr, $PRIVATE, $field(FontEditor, familyChoser)},
	{"styleChoser", "Ljava/awt/Choice;", nullptr, $PRIVATE, $field(FontEditor, styleChoser)},
	{"sizeChoser", "Ljava/awt/Choice;", nullptr, $PRIVATE, $field(FontEditor, sizeChoser)},
	{"fonts", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(FontEditor, fonts)},
	{"styleNames", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(FontEditor, styleNames)},
	{"styles", "[I", nullptr, $PRIVATE, $field(FontEditor, styles)},
	{"pointSizes", "[I", nullptr, $PRIVATE, $field(FontEditor, pointSizes)},
	{"support", "Ljava/beans/PropertyChangeSupport;", nullptr, $PRIVATE, $field(FontEditor, support)},
	{}
};

$MethodInfo _FontEditor_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FontEditor::*)()>(&FontEditor::init$))},
	{"action", "(Ljava/awt/Event;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"changeFont", "(Ljava/awt/Font;)V", nullptr, $PRIVATE, $method(static_cast<void(FontEditor::*)($Font*)>(&FontEditor::changeFont))},
	{"getAsText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCustomEditor", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getJavaInitializationString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTags", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isPaintable", "()Z", nullptr, $PUBLIC},
	{"paintValue", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"preferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"setAsText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"supportsCustomEditor", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FontEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.beans.editors.FontEditor",
	"java.awt.Panel",
	"java.beans.PropertyEditor",
	_FontEditor_FieldInfo_,
	_FontEditor_MethodInfo_
};

$Object* allocate$FontEditor($Class* clazz) {
	return $of($alloc(FontEditor));
}

$String* FontEditor::toString() {
	 return this->$Panel::toString();
}

int32_t FontEditor::hashCode() {
	 return this->$Panel::hashCode();
}

bool FontEditor::equals(Object$* arg0) {
	 return this->$Panel::equals(arg0);
}

$Object* FontEditor::clone() {
	 return this->$Panel::clone();
}

void FontEditor::finalize() {
	this->$Panel::finalize();
}

void FontEditor::init$() {
	$useLocalCurrentObjectStackCache();
	$Panel::init$();
	$set(this, sampleText, "Abcde..."_s);
	$set(this, styleNames, $new($StringArray, {
		"plain"_s,
		"bold"_s,
		"italic"_s
	}));
	$set(this, styles, $new($ints, {
		$Font::PLAIN,
		$Font::BOLD,
		$Font::ITALIC
	}));
	$set(this, pointSizes, $new($ints, {
		3,
		5,
		8,
		10,
		12,
		14,
		18,
		24,
		36,
		48
	}));
	$set(this, support, $new($PropertyChangeSupport, this));
	setLayout(nullptr);
	$set(this, toolkit, $Toolkit::getDefaultToolkit());
	$set(this, fonts, $nc(this->toolkit)->getFontList());
	$set(this, familyChoser, $new($Choice));
	for (int32_t i = 0; i < $nc(this->fonts)->length; ++i) {
		$nc(this->familyChoser)->addItem($nc(this->fonts)->get(i));
	}
	add(static_cast<$Component*>(this->familyChoser));
	$nc(this->familyChoser)->reshape(20, 5, 100, 30);
	$set(this, styleChoser, $new($Choice));
	for (int32_t i = 0; i < $nc(this->styleNames)->length; ++i) {
		$nc(this->styleChoser)->addItem($nc(this->styleNames)->get(i));
	}
	add(static_cast<$Component*>(this->styleChoser));
	$nc(this->styleChoser)->reshape(145, 5, 70, 30);
	$set(this, sizeChoser, $new($Choice));
	for (int32_t i = 0; i < $nc(this->pointSizes)->length; ++i) {
		$nc(this->sizeChoser)->addItem($$str({""_s, $$str($nc(this->pointSizes)->get(i))}));
	}
	add(static_cast<$Component*>(this->sizeChoser));
	$nc(this->sizeChoser)->reshape(220, 5, 70, 30);
	resize(300, 40);
}

$Dimension* FontEditor::preferredSize() {
	return $new($Dimension, 300, 40);
}

void FontEditor::setValue(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$set(this, font, $cast($Font, o));
	if (this->font == nullptr) {
		return;
	}
	changeFont(this->font);
	for (int32_t i = 0; i < $nc(this->fonts)->length; ++i) {
		if ($nc($nc(this->fonts)->get(i))->equals($($nc(this->font)->getFamily()))) {
			$nc(this->familyChoser)->select(i);
			break;
		}
	}
	for (int32_t i = 0; i < $nc(this->styleNames)->length; ++i) {
		if ($nc(this->font)->getStyle() == $nc(this->styles)->get(i)) {
			$nc(this->styleChoser)->select(i);
			break;
		}
	}
	for (int32_t i = 0; i < $nc(this->pointSizes)->length; ++i) {
		if ($nc(this->font)->getSize() <= $nc(this->pointSizes)->get(i)) {
			$nc(this->sizeChoser)->select(i);
			break;
		}
	}
}

void FontEditor::changeFont($Font* f) {
	$set(this, font, f);
	if (this->sample != nullptr) {
		remove(static_cast<$Component*>(this->sample));
	}
	$set(this, sample, $new($Label, this->sampleText));
	$nc(this->sample)->setFont(this->font);
	add(static_cast<$Component*>(this->sample));
	$var($Component, p, getParent());
	if (p != nullptr) {
		p->invalidate();
		p->layout();
	}
	invalidate();
	layout();
	repaint();
	$nc(this->support)->firePropertyChange(""_s, ($Object*)nullptr, ($Object*)nullptr);
}

$Object* FontEditor::getValue() {
	return $of((this->font));
}

$String* FontEditor::getJavaInitializationString() {
	$useLocalCurrentObjectStackCache();
	if (this->font == nullptr) {
		return "null"_s;
	}
	$var($String, var$3, $$str({"new java.awt.Font(\""_s, $($nc(this->font)->getName()), "\", "_s}));
	$var($String, var$2, $$concat(var$3, $$str($nc(this->font)->getStyle())));
	$var($String, var$1, $$concat(var$2, ", "_s));
	$var($String, var$0, $$concat(var$1, $$str($nc(this->font)->getSize())));
	return $concat(var$0, ")"_s);
}

bool FontEditor::action($Event* e, Object$* arg) {
	$useLocalCurrentObjectStackCache();
	$var($String, family, $nc(this->familyChoser)->getSelectedItem());
	int32_t style = $nc(this->styles)->get($nc(this->styleChoser)->getSelectedIndex());
	int32_t size = $nc(this->pointSizes)->get($nc(this->sizeChoser)->getSelectedIndex());
	try {
		$var($Font, f, $new($Font, family, style, size));
		changeFont(f);
	} catch ($Exception& ex) {
		$nc($System::err)->println($$str({"Couldn\'t create font "_s, family, "-"_s, $nc(this->styleNames)->get(style), "-"_s, $$str(size)}));
	}
	return (false);
}

bool FontEditor::isPaintable() {
	return true;
}

void FontEditor::paintValue($Graphics* gfx, $Rectangle* box) {
	$useLocalCurrentObjectStackCache();
	$var($Font, oldFont, $nc(gfx)->getFont());
	gfx->setFont(this->font);
	$var($FontMetrics, fm, gfx->getFontMetrics());
	int32_t vpad = ($nc(box)->height - $nc(fm)->getAscent()) / 2;
	gfx->drawString(this->sampleText, 0, box->height - vpad);
	gfx->setFont(oldFont);
}

$String* FontEditor::getAsText() {
	$useLocalCurrentObjectStackCache();
	if (this->font == nullptr) {
		return nullptr;
	}
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($nc(this->font)->getName()));
	sb->append(u' ');
	bool b = $nc(this->font)->isBold();
	if (b) {
		sb->append("BOLD"_s);
	}
	bool i = $nc(this->font)->isItalic();
	if (i) {
		sb->append("ITALIC"_s);
	}
	if (b || i) {
		sb->append(u' ');
	}
	sb->append($nc(this->font)->getSize());
	return sb->toString();
}

void FontEditor::setAsText($String* text) {
	setValue((text == nullptr) ? ($Object*)nullptr : $($of($Font::decode(text))));
}

$StringArray* FontEditor::getTags() {
	return nullptr;
}

$Component* FontEditor::getCustomEditor() {
	return this;
}

bool FontEditor::supportsCustomEditor() {
	return true;
}

void FontEditor::addPropertyChangeListener($PropertyChangeListener* l) {
	$nc(this->support)->addPropertyChangeListener(l);
}

void FontEditor::removePropertyChangeListener($PropertyChangeListener* l) {
	$nc(this->support)->removePropertyChangeListener(l);
}

FontEditor::FontEditor() {
}

$Class* FontEditor::load$($String* name, bool initialize) {
	$loadClass(FontEditor, name, initialize, &_FontEditor_ClassInfo_, allocate$FontEditor);
	return class$;
}

$Class* FontEditor::class$ = nullptr;

			} // editors
		} // beans
	} // sun
} // com