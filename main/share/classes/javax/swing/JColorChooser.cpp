#include <javax/swing/JColorChooser.h>

#include <java/awt/Color.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Dialog.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/ComponentListener.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/Arrays.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/ColorChooserDialog$DisposeOnClose.h>
#include <javax/swing/ColorChooserDialog.h>
#include <javax/swing/ColorTracker.h>
#include <javax/swing/JColorChooser$AccessibleJColorChooser.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>
#include <javax/swing/colorchooser/ColorChooserComponentFactory.h>
#include <javax/swing/colorchooser/ColorSelectionModel.h>
#include <javax/swing/colorchooser/DefaultColorSelectionModel.h>
#include <javax/swing/plaf/ColorChooserUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

#undef CHOOSER_PANELS_PROPERTY
#undef PREVIEW_PANEL_PROPERTY
#undef SELECTION_MODEL_PROPERTY

using $AbstractColorChooserPanelArray = $Array<::javax::swing::colorchooser::AbstractColorChooserPanel>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dialog = ::java::awt::Dialog;
using $Frame = ::java::awt::Frame;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $Window = ::java::awt::Window;
using $ActionListener = ::java::awt::event::ActionListener;
using $ComponentAdapter = ::java::awt::event::ComponentAdapter;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Arrays = ::java::util::Arrays;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $ColorChooserDialog = ::javax::swing::ColorChooserDialog;
using $ColorChooserDialog$DisposeOnClose = ::javax::swing::ColorChooserDialog$DisposeOnClose;
using $ColorTracker = ::javax::swing::ColorTracker;
using $JColorChooser$AccessibleJColorChooser = ::javax::swing::JColorChooser$AccessibleJColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JDialog = ::javax::swing::JDialog;
using $JOptionPane = ::javax::swing::JOptionPane;
using $UIManager = ::javax::swing::UIManager;
using $AbstractColorChooserPanel = ::javax::swing::colorchooser::AbstractColorChooserPanel;
using $ColorChooserComponentFactory = ::javax::swing::colorchooser::ColorChooserComponentFactory;
using $ColorSelectionModel = ::javax::swing::colorchooser::ColorSelectionModel;
using $DefaultColorSelectionModel = ::javax::swing::colorchooser::DefaultColorSelectionModel;
using $ColorChooserUI = ::javax::swing::plaf::ColorChooserUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {

$NamedAttribute JColorChooser_Attribute_var$0[] = {
	{"defaultProperty", 's', "UI"},
	{"description", 's', "A component that supports selecting a Color."},
	{}
};

$NamedAttribute JColorChooser_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _JColorChooser_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JColorChooser_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JColorChooser_Attribute_var$1},
	{}
};

$NamedAttribute JColorChooser_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JColorChooser_MethodAnnotations_getAccessibleContext5[] = {
	{"Ljava/beans/BeanProperty;", JColorChooser_Attribute_var$2},
	{}
};

$NamedAttribute JColorChooser_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JColorChooser_MethodAnnotations_getUIClassID12[] = {
	{"Ljava/beans/BeanProperty;", JColorChooser_Attribute_var$3},
	{}
};

$NamedAttribute JColorChooser_Attribute_var$4[] = {
	{"hidden", 'Z', "true"},
	{"description", 's', "An array of different chooser types."},
	{}
};

$CompoundAttribute _JColorChooser_MethodAnnotations_setChooserPanels15[] = {
	{"Ljava/beans/BeanProperty;", JColorChooser_Attribute_var$4},
	{}
};

$NamedAttribute JColorChooser_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{"description", 's', "The current color the chooser is to display."},
	{}
};

$CompoundAttribute _JColorChooser_MethodAnnotations_setColor16[] = {
	{"Ljava/beans/BeanProperty;", JColorChooser_Attribute_var$5},
	{}
};

$NamedAttribute JColorChooser_Attribute_var$6[] = {
	{"bound", 'Z', "false"},
	{"description", 's', "Determines whether automatic drag handling is enabled."},
	{}
};

$CompoundAttribute _JColorChooser_MethodAnnotations_setDragEnabled19[] = {
	{"Ljava/beans/BeanProperty;", JColorChooser_Attribute_var$6},
	{}
};

$NamedAttribute JColorChooser_Attribute_var$7[] = {
	{"hidden", 'Z', "true"},
	{"description", 's', "The UI component which displays the current color."},
	{}
};

$CompoundAttribute _JColorChooser_MethodAnnotations_setPreviewPanel20[] = {
	{"Ljava/beans/BeanProperty;", JColorChooser_Attribute_var$7},
	{}
};

$NamedAttribute JColorChooser_Attribute_var$8[] = {
	{"hidden", 'Z', "true"},
	{"description", 's', "The model which contains the currently selected color."},
	{}
};

$CompoundAttribute _JColorChooser_MethodAnnotations_setSelectionModel21[] = {
	{"Ljava/beans/BeanProperty;", JColorChooser_Attribute_var$8},
	{}
};

$NamedAttribute JColorChooser_Attribute_var$9[] = {
	{"hidden", 'Z', "true"},
	{"description", 's', "The UI object that implements the color chooser\'s LookAndFeel."},
	{}
};

$CompoundAttribute _JColorChooser_MethodAnnotations_setUI22[] = {
	{"Ljava/beans/BeanProperty;", JColorChooser_Attribute_var$9},
	{}
};

$FieldInfo _JColorChooser_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JColorChooser, uiClassID)},
	{"selectionModel", "Ljavax/swing/colorchooser/ColorSelectionModel;", nullptr, $PRIVATE, $field(JColorChooser, selectionModel)},
	{"previewPanel", "Ljavax/swing/JComponent;", nullptr, $PRIVATE, $field(JColorChooser, previewPanel)},
	{"chooserPanels", "[Ljavax/swing/colorchooser/AbstractColorChooserPanel;", nullptr, $PRIVATE, $field(JColorChooser, chooserPanels)},
	{"dragEnabled", "Z", nullptr, $PRIVATE, $field(JColorChooser, dragEnabled)},
	{"SELECTION_MODEL_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JColorChooser, SELECTION_MODEL_PROPERTY)},
	{"PREVIEW_PANEL_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JColorChooser, PREVIEW_PANEL_PROPERTY)},
	{"CHOOSER_PANELS_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JColorChooser, CHOOSER_PANELS_PROPERTY)},
	{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PROTECTED, $field(JColorChooser, accessibleContext)},
	{}
};

$MethodInfo _JColorChooser_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JColorChooser::*)()>(&JColorChooser::init$))},
	{"<init>", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(JColorChooser::*)($Color*)>(&JColorChooser::init$))},
	{"<init>", "(Ljavax/swing/colorchooser/ColorSelectionModel;)V", nullptr, $PUBLIC, $method(static_cast<void(JColorChooser::*)($ColorSelectionModel*)>(&JColorChooser::init$))},
	{"addChooserPanel", "(Ljavax/swing/colorchooser/AbstractColorChooserPanel;)V", nullptr, $PUBLIC},
	{"createDialog", "(Ljava/awt/Component;Ljava/lang/String;ZLjavax/swing/JColorChooser;Ljava/awt/event/ActionListener;Ljava/awt/event/ActionListener;)Ljavax/swing/JDialog;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JDialog*(*)($Component*,$String*,bool,JColorChooser*,$ActionListener*,$ActionListener*)>(&JColorChooser::createDialog)), "java.awt.HeadlessException"},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JColorChooser_MethodAnnotations_getAccessibleContext5},
	{"getChooserPanels", "()[Ljavax/swing/colorchooser/AbstractColorChooserPanel;", nullptr, $PUBLIC},
	{"getColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getDragEnabled", "()Z", nullptr, $PUBLIC},
	{"getPreviewPanel", "()Ljavax/swing/JComponent;", nullptr, $PUBLIC},
	{"getSelectionModel", "()Ljavax/swing/colorchooser/ColorSelectionModel;", nullptr, $PUBLIC},
	{"getUI", "()Ljavax/swing/plaf/ColorChooserUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JColorChooser_MethodAnnotations_getUIClassID12},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"removeChooserPanel", "(Ljavax/swing/colorchooser/AbstractColorChooserPanel;)Ljavax/swing/colorchooser/AbstractColorChooserPanel;", nullptr, $PUBLIC},
	{"setChooserPanels", "([Ljavax/swing/colorchooser/AbstractColorChooserPanel;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JColorChooser_MethodAnnotations_setChooserPanels15},
	{"setColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JColorChooser_MethodAnnotations_setColor16},
	{"setColor", "(III)V", nullptr, $PUBLIC},
	{"setColor", "(I)V", nullptr, $PUBLIC},
	{"setDragEnabled", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JColorChooser_MethodAnnotations_setDragEnabled19},
	{"setPreviewPanel", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JColorChooser_MethodAnnotations_setPreviewPanel20},
	{"setSelectionModel", "(Ljavax/swing/colorchooser/ColorSelectionModel;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JColorChooser_MethodAnnotations_setSelectionModel21},
	{"setUI", "(Ljavax/swing/plaf/ColorChooserUI;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JColorChooser_MethodAnnotations_setUI22},
	{"showDialog", "(Ljava/awt/Component;Ljava/lang/String;Ljava/awt/Color;)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Color*(*)($Component*,$String*,$Color*)>(&JColorChooser::showDialog)), "java.awt.HeadlessException"},
	{"showDialog", "(Ljava/awt/Component;Ljava/lang/String;Ljava/awt/Color;Z)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Color*(*)($Component*,$String*,$Color*,bool)>(&JColorChooser::showDialog)), "java.awt.HeadlessException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JColorChooser::*)($ObjectOutputStream*)>(&JColorChooser::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JColorChooser_InnerClassesInfo_[] = {
	{"javax.swing.JColorChooser$AccessibleJColorChooser", "javax.swing.JColorChooser", "AccessibleJColorChooser", $PROTECTED},
	{}
};

$ClassInfo _JColorChooser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JColorChooser",
	"javax.swing.JComponent",
	"javax.accessibility.Accessible",
	_JColorChooser_FieldInfo_,
	_JColorChooser_MethodInfo_,
	nullptr,
	nullptr,
	_JColorChooser_InnerClassesInfo_,
	_JColorChooser_Annotations_,
	nullptr,
	"javax.swing.JColorChooser$AccessibleJColorChooser"
};

$Object* allocate$JColorChooser($Class* clazz) {
	return $of($alloc(JColorChooser));
}

$String* JColorChooser::toString() {
	 return this->$JComponent::toString();
}

int32_t JColorChooser::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JColorChooser::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JColorChooser::clone() {
	 return this->$JComponent::clone();
}

void JColorChooser::finalize() {
	this->$JComponent::finalize();
}

$String* JColorChooser::uiClassID = nullptr;
$String* JColorChooser::SELECTION_MODEL_PROPERTY = nullptr;
$String* JColorChooser::PREVIEW_PANEL_PROPERTY = nullptr;
$String* JColorChooser::CHOOSER_PANELS_PROPERTY = nullptr;

$Color* JColorChooser::showDialog($Component* component, $String* title, $Color* initialColor) {
	$init(JColorChooser);
	return showDialog(component, title, initialColor, true);
}

$Color* JColorChooser::showDialog($Component* component, $String* title, $Color* initialColor, bool colorTransparencySelectionEnabled) {
	$init(JColorChooser);
	$useLocalCurrentObjectStackCache();
	$init($Color);
	$var(JColorChooser, pane, $new(JColorChooser, initialColor != nullptr ? initialColor : $Color::white));
	{
		$var($AbstractColorChooserPanelArray, arr$, pane->getChooserPanels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($AbstractColorChooserPanel, ccPanel, arr$->get(i$));
			{
				$nc(ccPanel)->setColorTransparencySelectionEnabled(colorTransparencySelectionEnabled);
			}
		}
	}
	$var($ColorTracker, ok, $new($ColorTracker, pane));
	$var($JDialog, dialog, createDialog(component, title, true, pane, ok, nullptr));
	$nc(dialog)->addComponentListener($$new($ColorChooserDialog$DisposeOnClose));
	dialog->show();
	return ok->getColor();
}

$JDialog* JColorChooser::createDialog($Component* c, $String* title, bool modal, JColorChooser* chooserPane, $ActionListener* okListener, $ActionListener* cancelListener) {
	$init(JColorChooser);
	$useLocalCurrentObjectStackCache();
	$var($Window, window, $JOptionPane::getWindowForComponent(c));
	$var($ColorChooserDialog, dialog, nullptr);
	if ($instanceOf($Frame, window)) {
		$assign(dialog, $new($ColorChooserDialog, $cast($Frame, window), title, modal, c, chooserPane, okListener, cancelListener));
	} else {
		$assign(dialog, $new($ColorChooserDialog, $cast($Dialog, window), title, modal, c, chooserPane, okListener, cancelListener));
	}
	$nc($($nc(dialog)->getAccessibleContext()))->setAccessibleDescription(title);
	return dialog;
}

void JColorChooser::init$() {
	$init($Color);
	JColorChooser::init$($Color::white);
}

void JColorChooser::init$($Color* initialColor) {
	JColorChooser::init$(static_cast<$ColorSelectionModel*>($$new($DefaultColorSelectionModel, initialColor)));
}

void JColorChooser::init$($ColorSelectionModel* model) {
	$JComponent::init$();
	$set(this, previewPanel, $ColorChooserComponentFactory::getPreviewPanel());
	$set(this, chooserPanels, $new($AbstractColorChooserPanelArray, 0));
	$set(this, accessibleContext, nullptr);
	$set(this, selectionModel, model);
	updateUI();
	this->dragEnabled = false;
}

$ComponentUI* JColorChooser::getUI() {
	return $cast($ColorChooserUI, this->ui);
}

void JColorChooser::setUI($ColorChooserUI* ui) {
	$JComponent::setUI(ui);
}

void JColorChooser::updateUI() {
	setUI($cast($ColorChooserUI, $($UIManager::getUI(this))));
}

$String* JColorChooser::getUIClassID() {
	return JColorChooser::uiClassID;
}

$Color* JColorChooser::getColor() {
	return $nc(this->selectionModel)->getSelectedColor();
}

void JColorChooser::setColor($Color* color) {
	$nc(this->selectionModel)->setSelectedColor(color);
}

void JColorChooser::setColor(int32_t r, int32_t g, int32_t b) {
	setColor($$new($Color, r, g, b));
}

void JColorChooser::setColor(int32_t c) {
	setColor((int32_t)((c >> 16) & (uint32_t)255), (int32_t)((c >> 8) & (uint32_t)255), (int32_t)(c & (uint32_t)255));
}

void JColorChooser::setDragEnabled(bool b) {
	if (b && $GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
	this->dragEnabled = b;
}

bool JColorChooser::getDragEnabled() {
	return this->dragEnabled;
}

void JColorChooser::setPreviewPanel($JComponent* preview) {
	if (this->previewPanel != preview) {
		$var($JComponent, oldPreview, this->previewPanel);
		$set(this, previewPanel, preview);
		firePropertyChange(JColorChooser::PREVIEW_PANEL_PROPERTY, $of(oldPreview), $of(preview));
	}
}

$JComponent* JColorChooser::getPreviewPanel() {
	return this->previewPanel;
}

void JColorChooser::addChooserPanel($AbstractColorChooserPanel* panel) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractColorChooserPanelArray, oldPanels, getChooserPanels());
	$var($AbstractColorChooserPanelArray, newPanels, $new($AbstractColorChooserPanelArray, $nc(oldPanels)->length + 1));
	$System::arraycopy(oldPanels, 0, newPanels, 0, oldPanels->length);
	newPanels->set(newPanels->length - 1, panel);
	setChooserPanels(newPanels);
}

$AbstractColorChooserPanel* JColorChooser::removeChooserPanel($AbstractColorChooserPanel* panel) {
	int32_t containedAt = -1;
	for (int32_t i = 0; i < $nc(this->chooserPanels)->length; ++i) {
		if ($nc(this->chooserPanels)->get(i) == panel) {
			containedAt = i;
			break;
		}
	}
	if (containedAt == -1) {
		$throwNew($IllegalArgumentException, "chooser panel not in this chooser"_s);
	}
	$var($AbstractColorChooserPanelArray, newArray, $new($AbstractColorChooserPanelArray, $nc(this->chooserPanels)->length - 1));
	if (containedAt == $nc(this->chooserPanels)->length - 1) {
		$System::arraycopy(this->chooserPanels, 0, newArray, 0, newArray->length);
	} else if (containedAt == 0) {
		$System::arraycopy(this->chooserPanels, 1, newArray, 0, newArray->length);
	} else {
		$System::arraycopy(this->chooserPanels, 0, newArray, 0, containedAt);
		$System::arraycopy(this->chooserPanels, containedAt + 1, newArray, containedAt, ($nc(this->chooserPanels)->length - containedAt - 1));
	}
	setChooserPanels(newArray);
	return panel;
}

void JColorChooser::setChooserPanels($AbstractColorChooserPanelArray* panels) {
	$var($AbstractColorChooserPanelArray, oldValue, this->chooserPanels);
	$set(this, chooserPanels, $fcast($AbstractColorChooserPanelArray, $Arrays::copyOf(panels, $nc(panels)->length)));
	firePropertyChange(JColorChooser::CHOOSER_PANELS_PROPERTY, $of(oldValue), $of(panels));
}

$AbstractColorChooserPanelArray* JColorChooser::getChooserPanels() {
	return $fcast($AbstractColorChooserPanelArray, $Arrays::copyOf(this->chooserPanels, $nc(this->chooserPanels)->length));
}

$ColorSelectionModel* JColorChooser::getSelectionModel() {
	return this->selectionModel;
}

void JColorChooser::setSelectionModel($ColorSelectionModel* newModel) {
	$var($ColorSelectionModel, oldModel, this->selectionModel);
	$set(this, selectionModel, newModel);
	firePropertyChange(JColorChooser::SELECTION_MODEL_PROPERTY, $of(oldModel), $of(newModel));
}

void JColorChooser::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JColorChooser::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$String* JColorChooser::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, chooserPanelsString, $new($StringBuilder));
	{
		$var($AbstractColorChooserPanelArray, arr$, this->chooserPanels);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($AbstractColorChooserPanel, panel, arr$->get(i$));
			{
				chooserPanelsString->append(u'[')->append($of(panel))->append(u']');
			}
		}
	}
	$var($String, previewPanelString, this->previewPanel != nullptr ? $nc(this->previewPanel)->toString() : ""_s);
	$var($String, var$2, $$str({$($JComponent::paramString()), ",chooserPanels="_s}));
	$var($String, var$1, $$concat(var$2, $(chooserPanelsString->toString())));
	$var($String, var$0, $$concat(var$1, ",previewPanel="_s));
	return $concat(var$0, previewPanelString);
}

$AccessibleContext* JColorChooser::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JColorChooser$AccessibleJColorChooser, this));
	}
	return this->accessibleContext;
}

JColorChooser::JColorChooser() {
}

void clinit$JColorChooser($Class* class$) {
	$assignStatic(JColorChooser::uiClassID, "ColorChooserUI"_s);
	$assignStatic(JColorChooser::SELECTION_MODEL_PROPERTY, "selectionModel"_s);
	$assignStatic(JColorChooser::PREVIEW_PANEL_PROPERTY, "previewPanel"_s);
	$assignStatic(JColorChooser::CHOOSER_PANELS_PROPERTY, "chooserPanels"_s);
}

$Class* JColorChooser::load$($String* name, bool initialize) {
	$loadClass(JColorChooser, name, initialize, &_JColorChooser_ClassInfo_, clinit$JColorChooser, allocate$JColorChooser);
	return class$;
}

$Class* JColorChooser::class$ = nullptr;

	} // swing
} // javax