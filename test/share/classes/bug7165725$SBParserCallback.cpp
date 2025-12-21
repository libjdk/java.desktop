#include <bug7165725$SBParserCallback.h>

#include <bug7165725.h>
#include <java/lang/StringBuffer.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;

$FieldInfo _bug7165725$SBParserCallback_FieldInfo_[] = {
	{"indentSize", "I", nullptr, $PRIVATE, $field(bug7165725$SBParserCallback, indentSize)},
	{"elist", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PRIVATE, $field(bug7165725$SBParserCallback, elist)},
	{}
};

$MethodInfo _bug7165725$SBParserCallback_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7165725$SBParserCallback::*)()>(&bug7165725$SBParserCallback::init$))},
	{"getStringOneLine", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"handleComment", "([CI)V", nullptr, $PUBLIC},
	{"handleEndTag", "(Ljavax/swing/text/html/HTML$Tag;I)V", nullptr, $PUBLIC},
	{"handleError", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"handleSimpleTag", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;I)V", nullptr, $PUBLIC},
	{"handleStartTag", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;I)V", nullptr, $PUBLIC},
	{"handleText", "([CI)V", nullptr, $PUBLIC},
	{"indent", "()V", nullptr, $PROTECTED},
	{"pIndent", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unIndent", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _bug7165725$SBParserCallback_InnerClassesInfo_[] = {
	{"bug7165725$SBParserCallback", "bug7165725", "SBParserCallback", $STATIC},
	{"javax.swing.text.html.HTMLEditorKit$ParserCallback", "javax.swing.text.html.HTMLEditorKit", "ParserCallback", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _bug7165725$SBParserCallback_ClassInfo_ = {
	$ACC_SUPER,
	"bug7165725$SBParserCallback",
	"javax.swing.text.html.HTMLEditorKit$ParserCallback",
	nullptr,
	_bug7165725$SBParserCallback_FieldInfo_,
	_bug7165725$SBParserCallback_MethodInfo_,
	nullptr,
	nullptr,
	_bug7165725$SBParserCallback_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7165725"
};

$Object* allocate$bug7165725$SBParserCallback($Class* clazz) {
	return $of($alloc(bug7165725$SBParserCallback));
}

void bug7165725$SBParserCallback::init$() {
	$HTMLEditorKit$ParserCallback::init$();
	this->indentSize = 0;
	$set(this, elist, $new($ArrayList));
}

$String* bug7165725$SBParserCallback::getStringOneLine() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	{
		$var($Iterator, i$, $nc(this->elist)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, s, $cast($String, i$->next()));
			sb->append(s);
		}
	}
	return sb->toString();
}

$String* bug7165725$SBParserCallback::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, sb, $new($StringBuffer));
	{
		$var($Iterator, i$, $nc(this->elist)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, s, $cast($String, i$->next()));
			sb->append($$str({s, "\n"_s}));
		}
	}
	return sb->toString();
}

void bug7165725$SBParserCallback::indent() {
	this->indentSize += 3;
}

void bug7165725$SBParserCallback::unIndent() {
	this->indentSize -= 3;
	if (this->indentSize < 0) {
		this->indentSize = 0;
	}
}

$String* bug7165725$SBParserCallback::pIndent() {
	$var($StringBuilder, sb, $new($StringBuilder));
	for (int32_t i = 0; i < this->indentSize; ++i) {
		sb->append(" "_s);
	}
	return sb->toString();
}

void bug7165725$SBParserCallback::handleText($chars* data, int32_t pos) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({$(pIndent()), "Text("_s, $$str($nc(data)->length), " chars) \""_s}));
	$var($String, var$0, $$concat(var$1, $$new($String, data)));
	$nc(this->elist)->add($$concat(var$0, "\""_s));
}

void bug7165725$SBParserCallback::handleComment($chars* data, int32_t pos) {
	$useLocalCurrentObjectStackCache();
	$nc(this->elist)->add($$str({$(pIndent()), "Comment("_s, $$str($nc(data)->length), " chars)"_s}));
}

void bug7165725$SBParserCallback::handleStartTag($HTML$Tag* t, $MutableAttributeSet* a, int32_t pos) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$5, $$str({$(pIndent()), "Tag start(<"_s}));
	$var($String, var$4, $$concat(var$5, $($nc(t)->toString())));
	$var($String, var$3, $$concat(var$4, " "_s));
	$var($String, var$2, $$concat(var$3, $(a)));
	$var($String, var$1, $$concat(var$2, ">, "_s));
	$var($String, var$0, $$concat(var$1, $$str($nc(a)->getAttributeCount())));
	$nc(this->elist)->add($$concat(var$0, " attrs)"_s));
	indent();
}

void bug7165725$SBParserCallback::handleEndTag($HTML$Tag* t, int32_t pos) {
	$useLocalCurrentObjectStackCache();
	unIndent();
	$var($String, var$1, $$str({$(pIndent()), "Tag end(</"_s}));
	$var($String, var$0, $$concat(var$1, $($nc(t)->toString())));
	$nc(this->elist)->add($$concat(var$0, ">)"_s));
}

void bug7165725$SBParserCallback::handleSimpleTag($HTML$Tag* t, $MutableAttributeSet* a, int32_t pos) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$3, $$str({$(pIndent()), "Tag(<"_s}));
	$var($String, var$2, $$concat(var$3, $($nc(t)->toString())));
	$var($String, var$1, $$concat(var$2, ">, "_s));
	$var($String, var$0, $$concat(var$1, $$str($nc(a)->getAttributeCount())));
	$nc(this->elist)->add($$concat(var$0, " attrs)"_s));
}

void bug7165725$SBParserCallback::handleError($String* errorMsg, int32_t pos) {
}

bug7165725$SBParserCallback::bug7165725$SBParserCallback() {
}

$Class* bug7165725$SBParserCallback::load$($String* name, bool initialize) {
	$loadClass(bug7165725$SBParserCallback, name, initialize, &_bug7165725$SBParserCallback_ClassInfo_, allocate$bug7165725$SBParserCallback);
	return class$;
}

$Class* bug7165725$SBParserCallback::class$ = nullptr;