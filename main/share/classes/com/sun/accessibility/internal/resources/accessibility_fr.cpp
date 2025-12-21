#include <com/sun/accessibility/internal/resources/accessibility_fr.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace accessibility {
			namespace internal {
				namespace resources {

$MethodInfo _accessibility_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(accessibility_fr::*)()>(&accessibility_fr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _accessibility_fr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.accessibility.internal.resources.accessibility_fr",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_accessibility_fr_MethodInfo_
};

$Object* allocate$accessibility_fr($Class* clazz) {
	return $of($alloc(accessibility_fr));
}

void accessibility_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* accessibility_fr::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("active"_s),
			$of("actif"_s)
		}),
		$$new($ObjectArray, {
			$of("alert"_s),
			$of("alerte"_s)
		}),
		$$new($ObjectArray, {
			$of("armed"_s),
			$of(u"armé"_s)
		}),
		$$new($ObjectArray, {
			$of("awtcomponent"_s),
			$of("composant AWT"_s)
		}),
		$$new($ObjectArray, {
			$of("busy"_s),
			$of(u"occupé"_s)
		}),
		$$new($ObjectArray, {
			$of("canvas"_s),
			$of("canevas"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox"_s),
			$of(u"case à cocher"_s)
		}),
		$$new($ObjectArray, {
			$of("checked"_s),
			$of(u"coché"_s)
		}),
		$$new($ObjectArray, {
			$of("childNodeOf"_s),
			$of("noeud enfant de"_s)
		}),
		$$new($ObjectArray, {
			$of("collapsed"_s),
			$of(u"réduit"_s)
		}),
		$$new($ObjectArray, {
			$of("colorchooser"_s),
			$of(u"sélecteur de couleurs"_s)
		}),
		$$new($ObjectArray, {
			$of("columnheader"_s),
			$of(u"en-tête de colonne"_s)
		}),
		$$new($ObjectArray, {
			$of("combobox"_s),
			$of(u"liste déroulante"_s)
		}),
		$$new($ObjectArray, {
			$of("controlledBy"_s),
			$of(u"contrôlé par"_s)
		}),
		$$new($ObjectArray, {
			$of("controllerFor"_s),
			$of(u"contrôleur pour"_s)
		}),
		$$new($ObjectArray, {
			$of("desktopicon"_s),
			$of(u"icône de bureau"_s)
		}),
		$$new($ObjectArray, {
			$of("desktoppane"_s),
			$of("panneau de bureau"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog"_s),
			$of(u"boîte de dialogue"_s)
		}),
		$$new($ObjectArray, {
			$of("directorypane"_s),
			$of(u"panneau de répertoires"_s)
		}),
		$$new($ObjectArray, {
			$of("editable"_s),
			$of("modifiable"_s)
		}),
		$$new($ObjectArray, {
			$of("editbar"_s),
			$of(u"barre d\'édition"_s)
		}),
		$$new($ObjectArray, {
			$of("embeddedBy"_s),
			$of(u"incorporé par"_s)
		}),
		$$new($ObjectArray, {
			$of("embeds"_s),
			$of("incorpore"_s)
		}),
		$$new($ObjectArray, {
			$of("enabled"_s),
			$of(u"activé"_s)
		}),
		$$new($ObjectArray, {
			$of("expandable"_s),
			$of("extensible"_s)
		}),
		$$new($ObjectArray, {
			$of("expanded"_s),
			$of(u"développé"_s)
		}),
		$$new($ObjectArray, {
			$of("filechooser"_s),
			$of(u"sélecteur de fichiers"_s)
		}),
		$$new($ObjectArray, {
			$of("filler"_s),
			$of(u"élément de remplissage"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsFrom"_s),
			$of("flux depuis"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsTo"_s),
			$of("flux vers"_s)
		}),
		$$new($ObjectArray, {
			$of("focusable"_s),
			$of(u"zone d\'entrée possible"_s)
		}),
		$$new($ObjectArray, {
			$of("focused"_s),
			$of(u"avec zone d\'entrée"_s)
		}),
		$$new($ObjectArray, {
			$of("footer"_s),
			$of("pied de page"_s)
		}),
		$$new($ObjectArray, {
			$of("frame"_s),
			$of("cadre"_s)
		}),
		$$new($ObjectArray, {
			$of("glasspane"_s),
			$of("panneau de grossissement"_s)
		}),
		$$new($ObjectArray, {
			$of("header"_s),
			$of(u"en-tête"_s)
		}),
		$$new($ObjectArray, {
			$of("horizontal"_s),
			$of("horizontal"_s)
		}),
		$$new($ObjectArray, {
			$of("htmlcontainer"_s),
			$of("conteneur HTML"_s)
		}),
		$$new($ObjectArray, {
			$of("iconified"_s),
			$of(u"réduit à une icône"_s)
		}),
		$$new($ObjectArray, {
			$of("indeterminate"_s),
			$of(u"indéterminé"_s)
		}),
		$$new($ObjectArray, {
			$of("internalframe"_s),
			$of("cadre interne"_s)
		}),
		$$new($ObjectArray, {
			$of("label"_s),
			$of(u"libellé"_s)
		}),
		$$new($ObjectArray, {
			$of("labelFor"_s),
			$of(u"libellé de"_s)
		}),
		$$new($ObjectArray, {
			$of("labeledBy"_s),
			$of(u"libellé par"_s)
		}),
		$$new($ObjectArray, {
			$of("layeredpane"_s),
			$of(u"panneau superposé"_s)
		}),
		$$new($ObjectArray, {
			$of("list"_s),
			$of("liste"_s)
		}),
		$$new($ObjectArray, {
			$of("listitem"_s),
			$of(u"élément de liste"_s)
		}),
		$$new($ObjectArray, {
			$of("managesDescendants"_s),
			$of(u"gère les descendants"_s)
		}),
		$$new($ObjectArray, {
			$of("memberOf"_s),
			$of("membre de"_s)
		}),
		$$new($ObjectArray, {
			$of("menu"_s),
			$of("menu"_s)
		}),
		$$new($ObjectArray, {
			$of("menubar"_s),
			$of("barre de menus"_s)
		}),
		$$new($ObjectArray, {
			$of("menuitem"_s),
			$of("option de menu"_s)
		}),
		$$new($ObjectArray, {
			$of("modal"_s),
			$of("modal"_s)
		}),
		$$new($ObjectArray, {
			$of("multiline"_s),
			$of("ligne multiple"_s)
		}),
		$$new($ObjectArray, {
			$of("multiselectable"_s),
			$of(u"multisélectionnable"_s)
		}),
		$$new($ObjectArray, {
			$of("opaque"_s),
			$of("opaque"_s)
		}),
		$$new($ObjectArray, {
			$of("optionpane"_s),
			$of("panneau d\'options"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetab"_s),
			$of("onglet de page"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetablist"_s),
			$of("liste d\'onglets de page"_s)
		}),
		$$new($ObjectArray, {
			$of("panel"_s),
			$of("panneau"_s)
		}),
		$$new($ObjectArray, {
			$of("paragraph"_s),
			$of("paragraphe"_s)
		}),
		$$new($ObjectArray, {
			$of("parentWindowOf"_s),
			$of(u"fenêtre parente de"_s)
		}),
		$$new($ObjectArray, {
			$of("passwordtext"_s),
			$of("texte de mot de passe"_s)
		}),
		$$new($ObjectArray, {
			$of("popupmenu"_s),
			$of("menu contextuel"_s)
		}),
		$$new($ObjectArray, {
			$of("pressed"_s),
			$of(u"enfoncé"_s)
		}),
		$$new($ObjectArray, {
			$of("progressMonitor"_s),
			$of(u"contrôle de la progression"_s)
		}),
		$$new($ObjectArray, {
			$of("progressbar"_s),
			$of("barre de progression"_s)
		}),
		$$new($ObjectArray, {
			$of("pushbutton"_s),
			$of("bouton"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton"_s),
			$of("bouton radio"_s)
		}),
		$$new($ObjectArray, {
			$of("resizable"_s),
			$of("redimensionnable"_s)
		}),
		$$new($ObjectArray, {
			$of("rootpane"_s),
			$of("panneau racine"_s)
		}),
		$$new($ObjectArray, {
			$of("rowheader"_s),
			$of(u"en-tête de ligne"_s)
		}),
		$$new($ObjectArray, {
			$of("ruler"_s),
			$of(u"règle"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollbar"_s),
			$of(u"barre de défilement"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollpane"_s),
			$of(u"panneau de défilement"_s)
		}),
		$$new($ObjectArray, {
			$of("selectable"_s),
			$of(u"sélectionnable"_s)
		}),
		$$new($ObjectArray, {
			$of("selected"_s),
			$of(u"sélectionné"_s)
		}),
		$$new($ObjectArray, {
			$of("separator"_s),
			$of(u"séparateur"_s)
		}),
		$$new($ObjectArray, {
			$of("showing"_s),
			$of("montrant"_s)
		}),
		$$new($ObjectArray, {
			$of("singleline"_s),
			$of("ligne unique"_s)
		}),
		$$new($ObjectArray, {
			$of("slider"_s),
			$of("curseur"_s)
		}),
		$$new($ObjectArray, {
			$of("splitpane"_s),
			$of(u"panneau divisé"_s)
		}),
		$$new($ObjectArray, {
			$of("subwindowOf"_s),
			$of(u"sous-fenêtre de"_s)
		}),
		$$new($ObjectArray, {
			$of("swingcomponent"_s),
			$of("composant Swing"_s)
		}),
		$$new($ObjectArray, {
			$of("table"_s),
			$of("tableau"_s)
		}),
		$$new($ObjectArray, {
			$of("text"_s),
			$of("texte"_s)
		}),
		$$new($ObjectArray, {
			$of("togglebutton"_s),
			$of("bouton de basculement"_s)
		}),
		$$new($ObjectArray, {
			$of("toggleexpand"_s),
			$of(u"activer/désactiver développement"_s)
		}),
		$$new($ObjectArray, {
			$of("toolbar"_s),
			$of("barre d\'outils"_s)
		}),
		$$new($ObjectArray, {
			$of("tooltip"_s),
			$of("info-bulle"_s)
		}),
		$$new($ObjectArray, {
			$of("transient"_s),
			$of("non persistant"_s)
		}),
		$$new($ObjectArray, {
			$of("tree"_s),
			$of("arborescence"_s)
		}),
		$$new($ObjectArray, {
			$of("truncated"_s),
			$of(u"tronqué"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown"_s),
			$of("inconnu"_s)
		}),
		$$new($ObjectArray, {
			$of("vertical"_s),
			$of("vertical"_s)
		}),
		$$new($ObjectArray, {
			$of("viewport"_s),
			$of("lucarne"_s)
		}),
		$$new($ObjectArray, {
			$of("visible"_s),
			$of("visible"_s)
		}),
		$$new($ObjectArray, {
			$of("window"_s),
			$of(u"fenêtre"_s)
		})
	});
}

accessibility_fr::accessibility_fr() {
}

$Class* accessibility_fr::load$($String* name, bool initialize) {
	$loadClass(accessibility_fr, name, initialize, &_accessibility_fr_ClassInfo_, allocate$accessibility_fr);
	return class$;
}

$Class* accessibility_fr::class$ = nullptr;

				} // resources
			} // internal
		} // accessibility
	} // sun
} // com