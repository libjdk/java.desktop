#include <java/awt/JobAttributes.h>

#include <java/awt/JobAttributes$DefaultSelectionType.h>
#include <java/awt/JobAttributes$DestinationType.h>
#include <java/awt/JobAttributes$DialogType.h>
#include <java/awt/JobAttributes$MultipleDocumentHandlingType.h>
#include <java/awt/JobAttributes$SidesType.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InternalError.h>
#include <jcpp.h>

#undef ALL
#undef MAX_VALUE
#undef NATIVE
#undef ONE_SIDED
#undef PRINTER
#undef SEPARATE_DOCUMENTS_UNCOLLATED_COPIES

using $intArray2 = $Array<int32_t, 2>;
using $JobAttributes$DefaultSelectionType = ::java::awt::JobAttributes$DefaultSelectionType;
using $JobAttributes$DestinationType = ::java::awt::JobAttributes$DestinationType;
using $JobAttributes$DialogType = ::java::awt::JobAttributes$DialogType;
using $JobAttributes$MultipleDocumentHandlingType = ::java::awt::JobAttributes$MultipleDocumentHandlingType;
using $JobAttributes$SidesType = ::java::awt::JobAttributes$SidesType;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _JobAttributes_FieldInfo_[] = {
	{"copies", "I", nullptr, $PRIVATE, $field(JobAttributes, copies)},
	{"defaultSelection", "Ljava/awt/JobAttributes$DefaultSelectionType;", nullptr, $PRIVATE, $field(JobAttributes, defaultSelection)},
	{"destination", "Ljava/awt/JobAttributes$DestinationType;", nullptr, $PRIVATE, $field(JobAttributes, destination)},
	{"dialog", "Ljava/awt/JobAttributes$DialogType;", nullptr, $PRIVATE, $field(JobAttributes, dialog)},
	{"fileName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JobAttributes, fileName)},
	{"fromPage", "I", nullptr, $PRIVATE, $field(JobAttributes, fromPage)},
	{"maxPage", "I", nullptr, $PRIVATE, $field(JobAttributes, maxPage)},
	{"minPage", "I", nullptr, $PRIVATE, $field(JobAttributes, minPage)},
	{"multipleDocumentHandling", "Ljava/awt/JobAttributes$MultipleDocumentHandlingType;", nullptr, $PRIVATE, $field(JobAttributes, multipleDocumentHandling)},
	{"pageRanges", "[[I", nullptr, $PRIVATE, $field(JobAttributes, pageRanges)},
	{"prFirst", "I", nullptr, $PRIVATE, $field(JobAttributes, prFirst)},
	{"prLast", "I", nullptr, $PRIVATE, $field(JobAttributes, prLast)},
	{"printer", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JobAttributes, printer)},
	{"sides", "Ljava/awt/JobAttributes$SidesType;", nullptr, $PRIVATE, $field(JobAttributes, sides)},
	{"toPage", "I", nullptr, $PRIVATE, $field(JobAttributes, toPage)},
	{}
};

$MethodInfo _JobAttributes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JobAttributes::*)()>(&JobAttributes::init$))},
	{"<init>", "(Ljava/awt/JobAttributes;)V", nullptr, $PUBLIC, $method(static_cast<void(JobAttributes::*)(JobAttributes*)>(&JobAttributes::init$))},
	{"<init>", "(ILjava/awt/JobAttributes$DefaultSelectionType;Ljava/awt/JobAttributes$DestinationType;Ljava/awt/JobAttributes$DialogType;Ljava/lang/String;IILjava/awt/JobAttributes$MultipleDocumentHandlingType;[[ILjava/lang/String;Ljava/awt/JobAttributes$SidesType;)V", nullptr, $PUBLIC, $method(static_cast<void(JobAttributes::*)(int32_t,$JobAttributes$DefaultSelectionType*,$JobAttributes$DestinationType*,$JobAttributes$DialogType*,$String*,int32_t,int32_t,$JobAttributes$MultipleDocumentHandlingType*,$intArray2*,$String*,$JobAttributes$SidesType*)>(&JobAttributes::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCopies", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(JobAttributes::*)()>(&JobAttributes::getCopies))},
	{"getDefaultSelection", "()Ljava/awt/JobAttributes$DefaultSelectionType;", nullptr, $PUBLIC, $method(static_cast<$JobAttributes$DefaultSelectionType*(JobAttributes::*)()>(&JobAttributes::getDefaultSelection))},
	{"getDestination", "()Ljava/awt/JobAttributes$DestinationType;", nullptr, $PUBLIC, $method(static_cast<$JobAttributes$DestinationType*(JobAttributes::*)()>(&JobAttributes::getDestination))},
	{"getDialog", "()Ljava/awt/JobAttributes$DialogType;", nullptr, $PUBLIC, $method(static_cast<$JobAttributes$DialogType*(JobAttributes::*)()>(&JobAttributes::getDialog))},
	{"getFileName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(JobAttributes::*)()>(&JobAttributes::getFileName))},
	{"getFromPage", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(JobAttributes::*)()>(&JobAttributes::getFromPage))},
	{"getMaxPage", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(JobAttributes::*)()>(&JobAttributes::getMaxPage))},
	{"getMinPage", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(JobAttributes::*)()>(&JobAttributes::getMinPage))},
	{"getMultipleDocumentHandling", "()Ljava/awt/JobAttributes$MultipleDocumentHandlingType;", nullptr, $PUBLIC, $method(static_cast<$JobAttributes$MultipleDocumentHandlingType*(JobAttributes::*)()>(&JobAttributes::getMultipleDocumentHandling))},
	{"getPageRanges", "()[[I", nullptr, $PUBLIC, $method(static_cast<$intArray2*(JobAttributes::*)()>(&JobAttributes::getPageRanges))},
	{"getPrinter", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(JobAttributes::*)()>(&JobAttributes::getPrinter))},
	{"getSides", "()Ljava/awt/JobAttributes$SidesType;", nullptr, $PUBLIC, $method(static_cast<$JobAttributes$SidesType*(JobAttributes::*)()>(&JobAttributes::getSides))},
	{"getToPage", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(JobAttributes::*)()>(&JobAttributes::getToPage))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"set", "(Ljava/awt/JobAttributes;)V", nullptr, $PUBLIC, $method(static_cast<void(JobAttributes::*)(JobAttributes*)>(&JobAttributes::set))},
	{"setCopies", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JobAttributes::*)(int32_t)>(&JobAttributes::setCopies))},
	{"setCopiesToDefault", "()V", nullptr, $PUBLIC, $method(static_cast<void(JobAttributes::*)()>(&JobAttributes::setCopiesToDefault))},
	{"setDefaultSelection", "(Ljava/awt/JobAttributes$DefaultSelectionType;)V", nullptr, $PUBLIC, $method(static_cast<void(JobAttributes::*)($JobAttributes$DefaultSelectionType*)>(&JobAttributes::setDefaultSelection))},
	{"setDestination", "(Ljava/awt/JobAttributes$DestinationType;)V", nullptr, $PUBLIC, $method(static_cast<void(JobAttributes::*)($JobAttributes$DestinationType*)>(&JobAttributes::setDestination))},
	{"setDialog", "(Ljava/awt/JobAttributes$DialogType;)V", nullptr, $PUBLIC, $method(static_cast<void(JobAttributes::*)($JobAttributes$DialogType*)>(&JobAttributes::setDialog))},
	{"setFileName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JobAttributes::*)($String*)>(&JobAttributes::setFileName))},
	{"setFromPage", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JobAttributes::*)(int32_t)>(&JobAttributes::setFromPage))},
	{"setMaxPage", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JobAttributes::*)(int32_t)>(&JobAttributes::setMaxPage))},
	{"setMinPage", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JobAttributes::*)(int32_t)>(&JobAttributes::setMinPage))},
	{"setMultipleDocumentHandling", "(Ljava/awt/JobAttributes$MultipleDocumentHandlingType;)V", nullptr, $PUBLIC, $method(static_cast<void(JobAttributes::*)($JobAttributes$MultipleDocumentHandlingType*)>(&JobAttributes::setMultipleDocumentHandling))},
	{"setMultipleDocumentHandlingToDefault", "()V", nullptr, $PUBLIC, $method(static_cast<void(JobAttributes::*)()>(&JobAttributes::setMultipleDocumentHandlingToDefault))},
	{"setPageRanges", "([[I)V", nullptr, $PUBLIC, $method(static_cast<void(JobAttributes::*)($intArray2*)>(&JobAttributes::setPageRanges))},
	{"setPrinter", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JobAttributes::*)($String*)>(&JobAttributes::setPrinter))},
	{"setSides", "(Ljava/awt/JobAttributes$SidesType;)V", nullptr, $PUBLIC, $method(static_cast<void(JobAttributes::*)($JobAttributes$SidesType*)>(&JobAttributes::setSides))},
	{"setSidesToDefault", "()V", nullptr, $PUBLIC, $method(static_cast<void(JobAttributes::*)()>(&JobAttributes::setSidesToDefault))},
	{"setToPage", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JobAttributes::*)(int32_t)>(&JobAttributes::setToPage))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JobAttributes_InnerClassesInfo_[] = {
	{"java.awt.JobAttributes$SidesType", "java.awt.JobAttributes", "SidesType", $PUBLIC | $STATIC | $FINAL},
	{"java.awt.JobAttributes$MultipleDocumentHandlingType", "java.awt.JobAttributes", "MultipleDocumentHandlingType", $PUBLIC | $STATIC | $FINAL},
	{"java.awt.JobAttributes$DialogType", "java.awt.JobAttributes", "DialogType", $PUBLIC | $STATIC | $FINAL},
	{"java.awt.JobAttributes$DestinationType", "java.awt.JobAttributes", "DestinationType", $PUBLIC | $STATIC | $FINAL},
	{"java.awt.JobAttributes$DefaultSelectionType", "java.awt.JobAttributes", "DefaultSelectionType", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _JobAttributes_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.JobAttributes",
	"java.lang.Object",
	"java.lang.Cloneable",
	_JobAttributes_FieldInfo_,
	_JobAttributes_MethodInfo_,
	nullptr,
	nullptr,
	_JobAttributes_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.JobAttributes$SidesType,java.awt.JobAttributes$MultipleDocumentHandlingType,java.awt.JobAttributes$DialogType,java.awt.JobAttributes$DestinationType,java.awt.JobAttributes$DefaultSelectionType"
};

$Object* allocate$JobAttributes($Class* clazz) {
	return $of($alloc(JobAttributes));
}

void JobAttributes::init$() {
	setCopiesToDefault();
	$init($JobAttributes$DefaultSelectionType);
	setDefaultSelection($JobAttributes$DefaultSelectionType::ALL);
	$init($JobAttributes$DestinationType);
	setDestination($JobAttributes$DestinationType::PRINTER);
	$init($JobAttributes$DialogType);
	setDialog($JobAttributes$DialogType::NATIVE);
	setMaxPage($Integer::MAX_VALUE);
	setMinPage(1);
	setMultipleDocumentHandlingToDefault();
	setSidesToDefault();
}

void JobAttributes::init$(JobAttributes* obj) {
	set(obj);
}

void JobAttributes::init$(int32_t copies, $JobAttributes$DefaultSelectionType* defaultSelection, $JobAttributes$DestinationType* destination, $JobAttributes$DialogType* dialog, $String* fileName, int32_t maxPage, int32_t minPage, $JobAttributes$MultipleDocumentHandlingType* multipleDocumentHandling, $intArray2* pageRanges, $String* printer, $JobAttributes$SidesType* sides) {
	setCopies(copies);
	setDefaultSelection(defaultSelection);
	setDestination(destination);
	setDialog(dialog);
	setFileName(fileName);
	setMaxPage(maxPage);
	setMinPage(minPage);
	setMultipleDocumentHandling(multipleDocumentHandling);
	setPageRanges(pageRanges);
	setPrinter(printer);
	setSides(sides);
}

$Object* JobAttributes::clone() {
	try {
		return $of($Cloneable::clone());
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

void JobAttributes::set(JobAttributes* obj) {
	this->copies = $nc(obj)->copies;
	$set(this, defaultSelection, obj->defaultSelection);
	$set(this, destination, obj->destination);
	$set(this, dialog, obj->dialog);
	$set(this, fileName, obj->fileName);
	this->fromPage = obj->fromPage;
	this->maxPage = obj->maxPage;
	this->minPage = obj->minPage;
	$set(this, multipleDocumentHandling, obj->multipleDocumentHandling);
	$set(this, pageRanges, obj->pageRanges);
	this->prFirst = obj->prFirst;
	this->prLast = obj->prLast;
	$set(this, printer, obj->printer);
	$set(this, sides, obj->sides);
	this->toPage = obj->toPage;
}

int32_t JobAttributes::getCopies() {
	return this->copies;
}

void JobAttributes::setCopies(int32_t copies) {
	if (copies <= 0) {
		$throwNew($IllegalArgumentException, "Invalid value for attribute copies"_s);
	}
	this->copies = copies;
}

void JobAttributes::setCopiesToDefault() {
	setCopies(1);
}

$JobAttributes$DefaultSelectionType* JobAttributes::getDefaultSelection() {
	return this->defaultSelection;
}

void JobAttributes::setDefaultSelection($JobAttributes$DefaultSelectionType* defaultSelection) {
	if (defaultSelection == nullptr) {
		$throwNew($IllegalArgumentException, "Invalid value for attribute defaultSelection"_s);
	}
	$set(this, defaultSelection, defaultSelection);
}

$JobAttributes$DestinationType* JobAttributes::getDestination() {
	return this->destination;
}

void JobAttributes::setDestination($JobAttributes$DestinationType* destination) {
	if (destination == nullptr) {
		$throwNew($IllegalArgumentException, "Invalid value for attribute destination"_s);
	}
	$set(this, destination, destination);
}

$JobAttributes$DialogType* JobAttributes::getDialog() {
	return this->dialog;
}

void JobAttributes::setDialog($JobAttributes$DialogType* dialog) {
	if (dialog == nullptr) {
		$throwNew($IllegalArgumentException, "Invalid value for attribute dialog"_s);
	}
	$set(this, dialog, dialog);
}

$String* JobAttributes::getFileName() {
	return this->fileName;
}

void JobAttributes::setFileName($String* fileName) {
	$set(this, fileName, fileName);
}

int32_t JobAttributes::getFromPage() {
	if (this->fromPage != 0) {
		return this->fromPage;
	} else if (this->toPage != 0) {
		return getMinPage();
	} else if (this->pageRanges != nullptr) {
		return this->prFirst;
	} else {
		return getMinPage();
	}
}

void JobAttributes::setFromPage(int32_t fromPage) {
	if (fromPage <= 0 || (this->toPage != 0 && fromPage > this->toPage) || fromPage < this->minPage || fromPage > this->maxPage) {
		$throwNew($IllegalArgumentException, "Invalid value for attribute fromPage"_s);
	}
	this->fromPage = fromPage;
}

int32_t JobAttributes::getMaxPage() {
	return this->maxPage;
}

void JobAttributes::setMaxPage(int32_t maxPage) {
	if (maxPage <= 0 || maxPage < this->minPage) {
		$throwNew($IllegalArgumentException, "Invalid value for attribute maxPage"_s);
	}
	this->maxPage = maxPage;
}

int32_t JobAttributes::getMinPage() {
	return this->minPage;
}

void JobAttributes::setMinPage(int32_t minPage) {
	if (minPage <= 0 || minPage > this->maxPage) {
		$throwNew($IllegalArgumentException, "Invalid value for attribute minPage"_s);
	}
	this->minPage = minPage;
}

$JobAttributes$MultipleDocumentHandlingType* JobAttributes::getMultipleDocumentHandling() {
	return this->multipleDocumentHandling;
}

void JobAttributes::setMultipleDocumentHandling($JobAttributes$MultipleDocumentHandlingType* multipleDocumentHandling) {
	if (multipleDocumentHandling == nullptr) {
		$throwNew($IllegalArgumentException, "Invalid value for attribute multipleDocumentHandling"_s);
	}
	$set(this, multipleDocumentHandling, multipleDocumentHandling);
}

void JobAttributes::setMultipleDocumentHandlingToDefault() {
	$init($JobAttributes$MultipleDocumentHandlingType);
	setMultipleDocumentHandling($JobAttributes$MultipleDocumentHandlingType::SEPARATE_DOCUMENTS_UNCOLLATED_COPIES);
}

$intArray2* JobAttributes::getPageRanges() {
	$useLocalCurrentObjectStackCache();
	if (this->pageRanges != nullptr) {
		$var($intArray2, copy, $new($intArray2, $nc(this->pageRanges)->length, 2));
		for (int32_t i = 0; i < $nc(this->pageRanges)->length; ++i) {
			$nc(copy->get(i))->set(0, $nc($nc(this->pageRanges)->get(i))->get(0));
			$nc(copy->get(i))->set(1, $nc($nc(this->pageRanges)->get(i))->get(1));
		}
		return copy;
	} else if (this->fromPage != 0 || this->toPage != 0) {
		int32_t fromPage = getFromPage();
		int32_t toPage = getToPage();
		return $new($intArray2, {$$new($ints, {
			fromPage,
			toPage
		})});
	} else {
		int32_t minPage = getMinPage();
		return $new($intArray2, {$$new($ints, {
			minPage,
			minPage
		})});
	}
}

void JobAttributes::setPageRanges($intArray2* pageRanges) {
	$useLocalCurrentObjectStackCache();
	$var($String, xcp, "Invalid value for attribute pageRanges"_s);
	int32_t first = 0;
	int32_t last = 0;
	if (pageRanges == nullptr) {
		$throwNew($IllegalArgumentException, xcp);
	}
	for (int32_t i = 0; i < $nc(pageRanges)->length; ++i) {
		if (pageRanges->get(i) == nullptr || $nc(pageRanges->get(i))->length != 2 || $nc(pageRanges->get(i))->get(0) <= last || $nc(pageRanges->get(i))->get(1) < $nc(pageRanges->get(i))->get(0)) {
			$throwNew($IllegalArgumentException, xcp);
		}
		last = $nc(pageRanges->get(i))->get(1);
		if (first == 0) {
			first = $nc(pageRanges->get(i))->get(0);
		}
	}
	if (first < this->minPage || last > this->maxPage) {
		$throwNew($IllegalArgumentException, xcp);
	}
	$var($intArray2, copy, $new($intArray2, $nc(pageRanges)->length, 2));
	for (int32_t i = 0; i < pageRanges->length; ++i) {
		$nc(copy->get(i))->set(0, $nc(pageRanges->get(i))->get(0));
		$nc(copy->get(i))->set(1, $nc(pageRanges->get(i))->get(1));
	}
	$set(this, pageRanges, copy);
	this->prFirst = first;
	this->prLast = last;
}

$String* JobAttributes::getPrinter() {
	return this->printer;
}

void JobAttributes::setPrinter($String* printer) {
	$set(this, printer, printer);
}

$JobAttributes$SidesType* JobAttributes::getSides() {
	return this->sides;
}

void JobAttributes::setSides($JobAttributes$SidesType* sides) {
	if (sides == nullptr) {
		$throwNew($IllegalArgumentException, "Invalid value for attribute sides"_s);
	}
	$set(this, sides, sides);
}

void JobAttributes::setSidesToDefault() {
	$init($JobAttributes$SidesType);
	setSides($JobAttributes$SidesType::ONE_SIDED);
}

int32_t JobAttributes::getToPage() {
	if (this->toPage != 0) {
		return this->toPage;
	} else if (this->fromPage != 0) {
		return this->fromPage;
	} else if (this->pageRanges != nullptr) {
		return this->prLast;
	} else {
		return getMinPage();
	}
}

void JobAttributes::setToPage(int32_t toPage) {
	if (toPage <= 0 || (this->fromPage != 0 && toPage < this->fromPage) || toPage < this->minPage || toPage > this->maxPage) {
		$throwNew($IllegalArgumentException, "Invalid value for attribute toPage"_s);
	}
	this->toPage = toPage;
}

bool JobAttributes::equals(Object$* obj) {
	if (!($instanceOf(JobAttributes, obj))) {
		return false;
	}
	$var(JobAttributes, rhs, $cast(JobAttributes, obj));
	if (this->fileName == nullptr) {
		if ($nc(rhs)->fileName != nullptr) {
			return false;
		}
	} else if (!$nc(this->fileName)->equals($nc(rhs)->fileName)) {
		return false;
	}
	if (this->pageRanges == nullptr) {
		if ($nc(rhs)->pageRanges != nullptr) {
			return false;
		}
	} else {
		if ($nc(rhs)->pageRanges == nullptr || $nc(this->pageRanges)->length != $nc($nc(rhs)->pageRanges)->length) {
			return false;
		}
		for (int32_t i = 0; i < $nc(this->pageRanges)->length; ++i) {
			if ($nc($nc(this->pageRanges)->get(i))->get(0) != $nc($nc($nc(rhs)->pageRanges)->get(i))->get(0) || $nc($nc(this->pageRanges)->get(i))->get(1) != $nc($nc($nc(rhs)->pageRanges)->get(i))->get(1)) {
				return false;
			}
		}
	}
	if (this->printer == nullptr) {
		if ($nc(rhs)->printer != nullptr) {
			return false;
		}
	} else if (!$nc(this->printer)->equals($nc(rhs)->printer)) {
		return false;
	}
	return (this->copies == $nc(rhs)->copies && this->defaultSelection == rhs->defaultSelection && this->destination == rhs->destination && this->dialog == rhs->dialog && this->fromPage == rhs->fromPage && this->maxPage == rhs->maxPage && this->minPage == rhs->minPage && this->multipleDocumentHandling == rhs->multipleDocumentHandling && this->prFirst == rhs->prFirst && this->prLast == rhs->prLast && this->sides == rhs->sides && this->toPage == rhs->toPage);
}

int32_t JobAttributes::hashCode() {
	int32_t rest = ((this->copies + this->fromPage + this->maxPage + this->minPage + this->prFirst + this->prLast + this->toPage) * 31) << 21;
	if (this->pageRanges != nullptr) {
		int32_t sum = 0;
		for (int32_t i = 0; i < $nc(this->pageRanges)->length; ++i) {
			sum += $nc($nc(this->pageRanges)->get(i))->get(0) + $nc($nc(this->pageRanges)->get(i))->get(1);
		}
		rest ^= (sum * 31) << 11;
	}
	if (this->fileName != nullptr) {
		rest ^= $nc(this->fileName)->hashCode();
	}
	if (this->printer != nullptr) {
		rest ^= $nc(this->printer)->hashCode();
	}
	int32_t var$3 = $nc(this->defaultSelection)->hashCode() << 6;
	int32_t var$2 = var$3 ^ ($nc(this->destination)->hashCode() << 5);
	int32_t var$1 = var$2 ^ ($nc(this->dialog)->hashCode() << 3);
	int32_t var$0 = var$1 ^ ($nc(this->multipleDocumentHandling)->hashCode() << 2);
	return ((var$0 ^ $nc(this->sides)->hashCode()) ^ rest);
}

$String* JobAttributes::toString() {
	$useLocalCurrentObjectStackCache();
	$var($intArray2, pageRanges, getPageRanges());
	$var($String, prStr, "["_s);
	bool first = true;
	for (int32_t i = 0; i < $nc(pageRanges)->length; ++i) {
		if (first) {
			first = false;
		} else {
			$plusAssign(prStr, ","_s);
		}
		$plusAssign(prStr, $$str({$$str($nc(pageRanges->get(i))->get(0)), ":"_s, $$str($nc(pageRanges->get(i))->get(1))}));
	}
	$plusAssign(prStr, "]"_s);
	$var($String, var$22, $$str({"copies="_s, $$str(getCopies()), ",defaultSelection="_s}));
	$var($String, var$21, $$concat(var$22, $(getDefaultSelection())));
	$var($String, var$20, $$concat(var$21, ",destination="_s));
	$var($String, var$19, $$concat(var$20, $(getDestination())));
	$var($String, var$18, $$concat(var$19, ",dialog="_s));
	$var($String, var$17, $$concat(var$18, $(getDialog())));
	$var($String, var$16, $$concat(var$17, ",fileName="_s));
	$var($String, var$15, $$concat(var$16, $(getFileName())));
	$var($String, var$14, $$concat(var$15, ",fromPage="_s));
	$var($String, var$13, $$concat(var$14, $$str(getFromPage())));
	$var($String, var$12, $$concat(var$13, ",maxPage="_s));
	$var($String, var$11, $$concat(var$12, $$str(getMaxPage())));
	$var($String, var$10, $$concat(var$11, ",minPage="_s));
	$var($String, var$9, $$concat(var$10, $$str(getMinPage())));
	$var($String, var$8, $$concat(var$9, ",multiple-document-handling="_s));
	$var($String, var$7, $$concat(var$8, $(getMultipleDocumentHandling())));
	$var($String, var$6, $$concat(var$7, ",page-ranges="_s));
	$var($String, var$5, $$concat(var$6, prStr));
	$var($String, var$4, $$concat(var$5, ",printer="_s));
	$var($String, var$3, $$concat(var$4, $(getPrinter())));
	$var($String, var$2, $$concat(var$3, ",sides="_s));
	$var($String, var$1, $$concat(var$2, $(getSides())));
	$var($String, var$0, $$concat(var$1, ",toPage="_s));
	return $concat(var$0, $$str(getToPage()));
}

JobAttributes::JobAttributes() {
}

$Class* JobAttributes::load$($String* name, bool initialize) {
	$loadClass(JobAttributes, name, initialize, &_JobAttributes_ClassInfo_, allocate$JobAttributes);
	return class$;
}

$Class* JobAttributes::class$ = nullptr;

	} // awt
} // java