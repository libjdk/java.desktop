#include <DevanagariEditor.h>

#include <javax/swing/JEditorPane.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;

$MethodInfo _DevanagariEditor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DevanagariEditor::*)()>(&DevanagariEditor::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DevanagariEditor::main))},
	{}
};

$ClassInfo _DevanagariEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DevanagariEditor",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DevanagariEditor_MethodInfo_
};

$Object* allocate$DevanagariEditor($Class* clazz) {
	return $of($alloc(DevanagariEditor));
}

void DevanagariEditor::init$() {
}

void DevanagariEditor::main($StringArray* args) {
	$$new($JEditorPane)->setText(u"राक्षस"_s);
}

DevanagariEditor::DevanagariEditor() {
}

$Class* DevanagariEditor::load$($String* name, bool initialize) {
	$loadClass(DevanagariEditor, name, initialize, &_DevanagariEditor_ClassInfo_, allocate$DevanagariEditor);
	return class$;
}

$Class* DevanagariEditor::class$ = nullptr;