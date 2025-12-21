#include <javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabSupport.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$CroppedEdge.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabPanel.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabViewport.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <jcpp.h>

#undef ACTION_PERFORMED

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;
using $BasicTabbedPaneUI$CroppedEdge = ::javax::swing::plaf::basic::BasicTabbedPaneUI$CroppedEdge;
using $BasicTabbedPaneUI$ScrollableTabPanel = ::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollableTabPanel;
using $BasicTabbedPaneUI$ScrollableTabViewport = ::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollableTabViewport;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTabbedPaneUI$ScrollableTabSupport_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTabbedPaneUI$ScrollableTabSupport, this$0)},
	{"viewport", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabViewport;", nullptr, $PUBLIC, $field(BasicTabbedPaneUI$ScrollableTabSupport, viewport)},
	{"tabPanel", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabPanel;", nullptr, $PUBLIC, $field(BasicTabbedPaneUI$ScrollableTabSupport, tabPanel)},
	{"scrollForwardButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(BasicTabbedPaneUI$ScrollableTabSupport, scrollForwardButton)},
	{"scrollBackwardButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(BasicTabbedPaneUI$ScrollableTabSupport, scrollBackwardButton)},
	{"croppedEdge", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI$CroppedEdge;", nullptr, $PUBLIC, $field(BasicTabbedPaneUI$ScrollableTabSupport, croppedEdge)},
	{"leadingTabIndex", "I", nullptr, $PUBLIC, $field(BasicTabbedPaneUI$ScrollableTabSupport, leadingTabIndex)},
	{"tabViewPosition", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(BasicTabbedPaneUI$ScrollableTabSupport, tabViewPosition)},
	{}
};

$MethodInfo _BasicTabbedPaneUI$ScrollableTabSupport_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTabbedPaneUI;I)V", nullptr, 0, $method(static_cast<void(BasicTabbedPaneUI$ScrollableTabSupport::*)($BasicTabbedPaneUI*,int32_t)>(&BasicTabbedPaneUI$ScrollableTabSupport::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"createButtons", "()V", nullptr, 0},
	{"scrollBackward", "(I)V", nullptr, $PUBLIC},
	{"scrollForward", "(I)V", nullptr, $PUBLIC},
	{"setLeadingTabIndex", "(II)V", nullptr, $PUBLIC},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateView", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicTabbedPaneUI$ScrollableTabSupport::*)()>(&BasicTabbedPaneUI$ScrollableTabSupport::updateView))},
	{}
};

$InnerClassInfo _BasicTabbedPaneUI$ScrollableTabSupport_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabSupport", "javax.swing.plaf.basic.BasicTabbedPaneUI", "ScrollableTabSupport", $PRIVATE},
	{}
};

$ClassInfo _BasicTabbedPaneUI$ScrollableTabSupport_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabSupport",
	"java.lang.Object",
	"java.awt.event.ActionListener,javax.swing.event.ChangeListener",
	_BasicTabbedPaneUI$ScrollableTabSupport_FieldInfo_,
	_BasicTabbedPaneUI$ScrollableTabSupport_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTabbedPaneUI$ScrollableTabSupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTabbedPaneUI"
};

$Object* allocate$BasicTabbedPaneUI$ScrollableTabSupport($Class* clazz) {
	return $of($alloc(BasicTabbedPaneUI$ScrollableTabSupport));
}

int32_t BasicTabbedPaneUI$ScrollableTabSupport::hashCode() {
	 return this->$ActionListener::hashCode();
}

bool BasicTabbedPaneUI$ScrollableTabSupport::equals(Object$* arg0) {
	 return this->$ActionListener::equals(arg0);
}

$Object* BasicTabbedPaneUI$ScrollableTabSupport::clone() {
	 return this->$ActionListener::clone();
}

void BasicTabbedPaneUI$ScrollableTabSupport::finalize() {
	this->$ActionListener::finalize();
}

void BasicTabbedPaneUI$ScrollableTabSupport::init$($BasicTabbedPaneUI* this$0, int32_t tabPlacement) {
	$set(this, this$0, this$0);
	$set(this, tabViewPosition, $new($Point, 0, 0));
	$set(this, viewport, $new($BasicTabbedPaneUI$ScrollableTabViewport, this$0));
	$set(this, tabPanel, $new($BasicTabbedPaneUI$ScrollableTabPanel, this$0));
	$nc(this->viewport)->setView(this->tabPanel);
	$nc(this->viewport)->addChangeListener(this);
	$set(this, croppedEdge, $new($BasicTabbedPaneUI$CroppedEdge, this$0));
	createButtons();
}

void BasicTabbedPaneUI$ScrollableTabSupport::createButtons() {
	if (this->scrollForwardButton != nullptr) {
		$nc(this->this$0->tabPane)->remove(static_cast<$Component*>(this->scrollForwardButton));
		$nc(this->scrollForwardButton)->removeActionListener(this);
		$nc(this->this$0->tabPane)->remove(static_cast<$Component*>(this->scrollBackwardButton));
		$nc(this->scrollBackwardButton)->removeActionListener(this);
	}
	int32_t tabPlacement = $nc(this->this$0->tabPane)->getTabPlacement();
	if (tabPlacement == 1 || tabPlacement == 3) {
		$set(this, scrollForwardButton, this->this$0->createScrollButton(3));
		$set(this, scrollBackwardButton, this->this$0->createScrollButton(7));
	} else {
		$set(this, scrollForwardButton, this->this$0->createScrollButton(5));
		$set(this, scrollBackwardButton, this->this$0->createScrollButton(1));
	}
	$nc(this->scrollForwardButton)->addActionListener(this);
	$nc(this->scrollBackwardButton)->addActionListener(this);
	$nc(this->this$0->tabPane)->add(static_cast<$Component*>(this->scrollForwardButton));
	$nc(this->this$0->tabPane)->add(static_cast<$Component*>(this->scrollBackwardButton));
}

void BasicTabbedPaneUI$ScrollableTabSupport::scrollForward(int32_t tabPlacement) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, viewSize, $nc(this->viewport)->getViewSize());
	$var($Rectangle, viewRect, $nc(this->viewport)->getViewRect());
	if (tabPlacement == 1 || tabPlacement == 3) {
		if ($nc(viewRect)->width >= $nc(viewSize)->width - viewRect->x) {
			return;
		}
	} else if ($nc(viewRect)->height >= $nc(viewSize)->height - viewRect->y) {
		return;
	}
	setLeadingTabIndex(tabPlacement, this->leadingTabIndex + 1);
}

void BasicTabbedPaneUI$ScrollableTabSupport::scrollBackward(int32_t tabPlacement) {
	if (this->leadingTabIndex == 0) {
		return;
	}
	setLeadingTabIndex(tabPlacement, this->leadingTabIndex - 1);
}

void BasicTabbedPaneUI$ScrollableTabSupport::setLeadingTabIndex(int32_t tabPlacement, int32_t index) {
	$useLocalCurrentObjectStackCache();
	this->leadingTabIndex = index;
	$var($Dimension, viewSize, $nc(this->viewport)->getViewSize());
	$var($Rectangle, viewRect, $nc(this->viewport)->getViewRect());
	switch (tabPlacement) {
	case 1:
		{}
	case 3:
		{
			$nc(this->tabViewPosition)->x = this->leadingTabIndex == 0 ? 0 : $nc($nc(this->this$0->rects)->get(this->leadingTabIndex))->x;
			if (($nc(viewSize)->width - $nc(this->tabViewPosition)->x) < $nc(viewRect)->width) {
				$var($Dimension, extentSize, $new($Dimension, viewSize->width - $nc(this->tabViewPosition)->x, viewRect->height));
				$nc(this->viewport)->setExtentSize(extentSize);
			}
			break;
		}
	case 2:
		{}
	case 4:
		{
			$nc(this->tabViewPosition)->y = this->leadingTabIndex == 0 ? 0 : $nc($nc(this->this$0->rects)->get(this->leadingTabIndex))->y;
			if (($nc(viewSize)->height - $nc(this->tabViewPosition)->y) < $nc(viewRect)->height) {
				$var($Dimension, extentSize, $new($Dimension, viewRect->width, viewSize->height - $nc(this->tabViewPosition)->y));
				$nc(this->viewport)->setExtentSize(extentSize);
			}
		}
	}
	$nc(this->viewport)->setViewPosition(this->tabViewPosition);
}

void BasicTabbedPaneUI$ScrollableTabSupport::stateChanged($ChangeEvent* e) {
	updateView();
}

void BasicTabbedPaneUI$ScrollableTabSupport::updateView() {
	$useLocalCurrentObjectStackCache();
	int32_t tabPlacement = $nc(this->this$0->tabPane)->getTabPlacement();
	int32_t tabCount = $nc(this->this$0->tabPane)->getTabCount();
	this->this$0->assureRectsCreated(tabCount);
	$var($Rectangle, vpRect, $nc(this->viewport)->getBounds());
	$var($Dimension, viewSize, $nc(this->viewport)->getViewSize());
	$var($Rectangle, viewRect, $nc(this->viewport)->getViewRect());
	this->leadingTabIndex = this->this$0->getClosestTab($nc(viewRect)->x, viewRect->y);
	if (this->leadingTabIndex + 1 < tabCount) {
		switch (tabPlacement) {
		case 1:
			{}
		case 3:
			{
				if ($nc($nc(this->this$0->rects)->get(this->leadingTabIndex))->x < $nc(viewRect)->x) {
					++this->leadingTabIndex;
				}
				break;
			}
		case 2:
			{}
		case 4:
			{
				if ($nc($nc(this->this$0->rects)->get(this->leadingTabIndex))->y < $nc(viewRect)->y) {
					++this->leadingTabIndex;
				}
				break;
			}
		}
	}
	$var($Insets, contentInsets, this->this$0->getContentBorderInsets(tabPlacement));
	switch (tabPlacement) {
	case 2:
		{
			$nc(this->this$0->tabPane)->repaint($nc(vpRect)->x + vpRect->width, vpRect->y, $nc(contentInsets)->left, vpRect->height);
			$nc(this->scrollBackwardButton)->setEnabled($nc(viewRect)->y > 0 && this->leadingTabIndex > 0);
			$nc(this->scrollForwardButton)->setEnabled(this->leadingTabIndex < tabCount - 1 && $nc(viewSize)->height - $nc(viewRect)->y > viewRect->height);
			break;
		}
	case 4:
		{
			$nc(this->this$0->tabPane)->repaint($nc(vpRect)->x - $nc(contentInsets)->right, vpRect->y, contentInsets->right, vpRect->height);
			$nc(this->scrollBackwardButton)->setEnabled($nc(viewRect)->y > 0 && this->leadingTabIndex > 0);
			$nc(this->scrollForwardButton)->setEnabled(this->leadingTabIndex < tabCount - 1 && $nc(viewSize)->height - $nc(viewRect)->y > viewRect->height);
			break;
		}
	case 3:
		{
			$nc(this->this$0->tabPane)->repaint($nc(vpRect)->x, vpRect->y - $nc(contentInsets)->bottom, vpRect->width, contentInsets->bottom);
			$nc(this->scrollBackwardButton)->setEnabled($nc(viewRect)->x > 0 && this->leadingTabIndex > 0);
			$nc(this->scrollForwardButton)->setEnabled(this->leadingTabIndex < tabCount - 1 && $nc(viewSize)->width - $nc(viewRect)->x > viewRect->width);
			break;
		}
	case 1:
		{}
	default:
		{
			$nc(this->this$0->tabPane)->repaint($nc(vpRect)->x, vpRect->y + vpRect->height, vpRect->width, $nc(contentInsets)->top);
			$nc(this->scrollBackwardButton)->setEnabled($nc(viewRect)->x > 0 && this->leadingTabIndex > 0);
			$nc(this->scrollForwardButton)->setEnabled(this->leadingTabIndex < tabCount - 1 && $nc(viewSize)->width - $nc(viewRect)->x > viewRect->width);
		}
	}
}

void BasicTabbedPaneUI$ScrollableTabSupport::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($ActionMap, map, $nc(this->this$0->tabPane)->getActionMap());
	if (map != nullptr) {
		$var($String, actionKey, nullptr);
		if ($equals($nc(e)->getSource(), this->scrollForwardButton)) {
			$assign(actionKey, "scrollTabsForwardAction"_s);
		} else {
			$assign(actionKey, "scrollTabsBackwardAction"_s);
		}
		$var($Action, action, map->get(actionKey));
		if (action != nullptr && action->isEnabled()) {
			$var($Object, var$0, $of(this->this$0->tabPane));
			int64_t var$1 = $nc(e)->getWhen();
			action->actionPerformed($$new($ActionEvent, var$0, $ActionEvent::ACTION_PERFORMED, nullptr, var$1, e->getModifiers()));
		}
	}
}

$String* BasicTabbedPaneUI$ScrollableTabSupport::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$4, $$str({"viewport.viewSize="_s, $($nc(this->viewport)->getViewSize()), "\nviewport.viewRectangle="_s}));
	$var($String, var$3, $$concat(var$4, $($nc(this->viewport)->getViewRect())));
	$var($String, var$2, $$concat(var$3, "\nleadingTabIndex="_s));
	$var($String, var$1, $$concat(var$2, $$str(this->leadingTabIndex)));
	$var($String, var$0, $$concat(var$1, "\ntabViewPosition="_s));
	return $concat(var$0, this->tabViewPosition);
}

BasicTabbedPaneUI$ScrollableTabSupport::BasicTabbedPaneUI$ScrollableTabSupport() {
}

$Class* BasicTabbedPaneUI$ScrollableTabSupport::load$($String* name, bool initialize) {
	$loadClass(BasicTabbedPaneUI$ScrollableTabSupport, name, initialize, &_BasicTabbedPaneUI$ScrollableTabSupport_ClassInfo_, allocate$BasicTabbedPaneUI$ScrollableTabSupport);
	return class$;
}

$Class* BasicTabbedPaneUI$ScrollableTabSupport::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax