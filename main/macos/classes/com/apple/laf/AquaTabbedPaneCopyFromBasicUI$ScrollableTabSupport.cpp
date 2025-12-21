#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport.h>

#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$CroppedEdge.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
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
#include <jcpp.h>

#undef ACTION_PERFORMED

using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $AquaTabbedPaneCopyFromBasicUI$CroppedEdge = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$CroppedEdge;
using $AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel;
using $AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport;
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

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, this$0)},
	{"viewport", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport;", nullptr, $PUBLIC, $field(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, viewport)},
	{"tabPanel", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel;", nullptr, $PUBLIC, $field(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, tabPanel)},
	{"scrollForwardButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, scrollForwardButton)},
	{"scrollBackwardButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, scrollBackwardButton)},
	{"croppedEdge", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI$CroppedEdge;", nullptr, $PUBLIC, $field(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, croppedEdge)},
	{"leadingTabIndex", "I", nullptr, $PUBLIC, $field(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, leadingTabIndex)},
	{"tabViewPosition", "Ljava/awt/Point;", nullptr, $PRIVATE | $FINAL, $field(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, tabViewPosition)},
	{}
};

$MethodInfo _AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;I)V", nullptr, 0, $method(static_cast<void(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::*)($AquaTabbedPaneCopyFromBasicUI*,int32_t)>(&AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"createButtons", "()V", nullptr, 0},
	{"scrollBackward", "(I)V", nullptr, $PUBLIC},
	{"scrollForward", "(I)V", nullptr, $PUBLIC},
	{"setLeadingTabIndex", "(II)V", nullptr, $PUBLIC},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateView", "()V", nullptr, $PRIVATE, $method(static_cast<void(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::*)()>(&AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::updateView))},
	{}
};

$InnerClassInfo _AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "ScrollableTabSupport", $PRIVATE},
	{}
};

$ClassInfo _AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport",
	"java.lang.Object",
	"java.awt.event.ActionListener,javax.swing.event.ChangeListener",
	_AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport_FieldInfo_,
	_AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI"
};

$Object* allocate$AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport($Class* clazz) {
	return $of($alloc(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport));
}

int32_t AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::hashCode() {
	 return this->$ActionListener::hashCode();
}

bool AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::equals(Object$* arg0) {
	 return this->$ActionListener::equals(arg0);
}

$Object* AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::clone() {
	 return this->$ActionListener::clone();
}

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::finalize() {
	this->$ActionListener::finalize();
}

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::init$($AquaTabbedPaneCopyFromBasicUI* this$0, int32_t tabPlacement) {
	$set(this, this$0, this$0);
	$set(this, tabViewPosition, $new($Point, 0, 0));
	$set(this, viewport, $new($AquaTabbedPaneCopyFromBasicUI$ScrollableTabViewport, this$0));
	$set(this, tabPanel, $new($AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel, this$0));
	$nc(this->viewport)->setView(this->tabPanel);
	$nc(this->viewport)->addChangeListener(this);
	$set(this, croppedEdge, $new($AquaTabbedPaneCopyFromBasicUI$CroppedEdge, this$0));
	createButtons();
}

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::createButtons() {
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

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::scrollForward(int32_t tabPlacement) {
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

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::scrollBackward(int32_t tabPlacement) {
	if (this->leadingTabIndex == 0) {
		return;
	}
	setLeadingTabIndex(tabPlacement, this->leadingTabIndex - 1);
}

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::setLeadingTabIndex(int32_t tabPlacement, int32_t index) {
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

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::stateChanged($ChangeEvent* e) {
	updateView();
}

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::updateView() {
	$useLocalCurrentObjectStackCache();
	int32_t tabPlacement = $nc(this->this$0->tabPane)->getTabPlacement();
	int32_t tabCount = $nc(this->this$0->tabPane)->getTabCount();
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

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::actionPerformed($ActionEvent* e) {
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

$String* AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$4, $$str({"viewport.viewSize="_s, $($nc(this->viewport)->getViewSize()), "\nviewport.viewRectangle="_s}));
	$var($String, var$3, $$concat(var$4, $($nc(this->viewport)->getViewRect())));
	$var($String, var$2, $$concat(var$3, "\nleadingTabIndex="_s));
	$var($String, var$1, $$concat(var$2, $$str(this->leadingTabIndex)));
	$var($String, var$0, $$concat(var$1, "\ntabViewPosition="_s));
	return $new($String, $$concat(var$0, this->tabViewPosition));
}

AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport() {
}

$Class* AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport, name, initialize, &_AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport_ClassInfo_, allocate$AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport);
	return class$;
}

$Class* AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport::class$ = nullptr;

		} // laf
	} // apple
} // com