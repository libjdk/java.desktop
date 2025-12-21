#include <sun/print/PrintJob2D.h>

#include <java/awt/Dimension.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/JobAttributes$DefaultSelectionType.h>
#include <java/awt/JobAttributes$DestinationType.h>
#include <java/awt/JobAttributes$DialogType.h>
#include <java/awt/JobAttributes$MultipleDocumentHandlingType.h>
#include <java/awt/JobAttributes$SidesType.h>
#include <java/awt/JobAttributes.h>
#include <java/awt/PageAttributes$ColorType.h>
#include <java/awt/PageAttributes$MediaType.h>
#include <java/awt/PageAttributes$OrientationRequestedType.h>
#include <java/awt/PageAttributes$OriginType.h>
#include <java/awt/PageAttributes$PrintQualityType.h>
#include <java/awt/PageAttributes.h>
#include <java/awt/PrintJob.h>
#include <java/awt/Window.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Paper.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterException.h>
#include <java/awt/print/PrinterJob.h>
#include <java/io/File.h>
#include <java/io/FilePermission.h>
#include <java/io/IOException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/ThreadGroup.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/security/Permission.h>
#include <java/util/Locale.h>
#include <java/util/Properties.h>
#include <javax/print/PrintService.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttribute.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/print/attribute/Size2DSyntax.h>
#include <javax/print/attribute/standard/Chromaticity.h>
#include <javax/print/attribute/standard/Copies.h>
#include <javax/print/attribute/standard/Destination.h>
#include <javax/print/attribute/standard/DialogOwner.h>
#include <javax/print/attribute/standard/DialogTypeSelection.h>
#include <javax/print/attribute/standard/JobName.h>
#include <javax/print/attribute/standard/Media.h>
#include <javax/print/attribute/standard/MediaSize.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <javax/print/attribute/standard/OrientationRequested.h>
#include <javax/print/attribute/standard/PageRanges.h>
#include <javax/print/attribute/standard/PrintQuality.h>
#include <javax/print/attribute/standard/SheetCollate.h>
#include <javax/print/attribute/standard/Sides.h>
#include <sun/print/CustomMediaSizeName.h>
#include <sun/print/PeekGraphics.h>
#include <sun/print/PrintJob2D$MessageQ.h>
#include <sun/print/ProxyGraphics.h>
#include <sun/print/ProxyPrintGraphics.h>
#include <sun/print/SunMinMaxPage.h>
#include <sun/print/SunPageSelection.h>
#include <jcpp.h>

#undef A
#undef ALL
#undef B
#undef C
#undef COLLATED
#undef COLOR
#undef COMMON
#undef D
#undef DEST_PROP
#undef DRAFT
#undef E
#undef EXECUTIVE
#undef FILE
#undef FILENAME_PROP
#undef FOLIO
#undef HIGH
#undef INCH
#undef INVITE_ENVELOPE
#undef INVOICE
#undef ISO_2A0
#undef ISO_4A0
#undef ISO_A0
#undef ISO_A1
#undef ISO_A10
#undef ISO_A2
#undef ISO_A3
#undef ISO_A4
#undef ISO_A5
#undef ISO_A6
#undef ISO_A7
#undef ISO_A8
#undef ISO_A9
#undef ISO_B0
#undef ISO_B1
#undef ISO_B10
#undef ISO_B2
#undef ISO_B3
#undef ISO_B4
#undef ISO_B5
#undef ISO_B6
#undef ISO_B7
#undef ISO_B8
#undef ISO_B9
#undef ISO_C0
#undef ISO_C1
#undef ISO_C10
#undef ISO_C2
#undef ISO_C3
#undef ISO_C4
#undef ISO_C5
#undef ISO_C6
#undef ISO_C7
#undef ISO_C8
#undef ISO_C9
#undef ISO_DESIGNATED_LONG
#undef ITALY_ENVELOPE
#undef JAVAXSIZES
#undef JIS_B0
#undef JIS_B1
#undef JIS_B10
#undef JIS_B2
#undef JIS_B3
#undef JIS_B4
#undef JIS_B5
#undef JIS_B6
#undef JIS_B7
#undef JIS_B8
#undef JIS_B9
#undef LANDSCAPE
#undef LEDGER
#undef LEGAL
#undef LENGTHS
#undef LETTER
#undef MONARCH_ENVELOPE
#undef MONOCHROME
#undef NATIVE
#undef NA_6X9_ENVELOPE
#undef NA_7X9_ENVELOPE
#undef NA_9X11_ENVELOPE
#undef NA_9X12_ENVELOPE
#undef NA_LEGAL
#undef NA_LETTER
#undef NA_NUMBER_10_ENVELOPE
#undef NA_NUMBER_11_ENVELOPE
#undef NA_NUMBER_12_ENVELOPE
#undef NA_NUMBER_14_ENVELOPE
#undef NA_NUMBER_9_ENVELOPE
#undef NONE
#undef NORMAL
#undef NO_SUCH_PAGE
#undef NUMCOPIES_PROP
#undef ONE_SIDED
#undef OPTIONS_PROP
#undef ORIENT_PROP
#undef PAGE_EXISTS
#undef PAPERSIZE_PROP
#undef PERSONAL_ENVELOPE
#undef PORTRAIT
#undef PRINTABLE
#undef PRINTER
#undef PRINTER_PROP
#undef QUARTO
#undef RANGE
#undef REVERSE_LANDSCAPE
#undef SELECTION
#undef SEPARATE_DOCUMENTS_COLLATED_COPIES
#undef SEPARATE_DOCUMENTS_UNCOLLATED_COPIES
#undef SIZES
#undef TWO_SIDED_LONG_EDGE
#undef TWO_SIDED_SHORT_EDGE
#undef UNCOLLATED
#undef WIDTHS

using $PageAttributes$MediaTypeArray = $Array<::java::awt::PageAttributes$MediaType>;
using $PrintServiceArray = $Array<::javax::print::PrintService>;
using $MediaSizeNameArray = $Array<::javax::print::attribute::standard::MediaSizeName>;
using $intArray2 = $Array<int32_t, 2>;
using $Dimension = ::java::awt::Dimension;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $JobAttributes = ::java::awt::JobAttributes;
using $JobAttributes$DefaultSelectionType = ::java::awt::JobAttributes$DefaultSelectionType;
using $JobAttributes$DestinationType = ::java::awt::JobAttributes$DestinationType;
using $JobAttributes$DialogType = ::java::awt::JobAttributes$DialogType;
using $JobAttributes$MultipleDocumentHandlingType = ::java::awt::JobAttributes$MultipleDocumentHandlingType;
using $JobAttributes$SidesType = ::java::awt::JobAttributes$SidesType;
using $PageAttributes = ::java::awt::PageAttributes;
using $PageAttributes$ColorType = ::java::awt::PageAttributes$ColorType;
using $PageAttributes$MediaType = ::java::awt::PageAttributes$MediaType;
using $PageAttributes$OrientationRequestedType = ::java::awt::PageAttributes$OrientationRequestedType;
using $PageAttributes$OriginType = ::java::awt::PageAttributes$OriginType;
using $PageAttributes$PrintQualityType = ::java::awt::PageAttributes$PrintQualityType;
using $PrintJob = ::java::awt::PrintJob;
using $Window = ::java::awt::Window;
using $PageFormat = ::java::awt::print::PageFormat;
using $Paper = ::java::awt::print::Paper;
using $Printable = ::java::awt::print::Printable;
using $PrinterException = ::java::awt::print::PrinterException;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $File = ::java::io::File;
using $FilePermission = ::java::io::FilePermission;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $Permission = ::java::security::Permission;
using $Locale = ::java::util::Locale;
using $Properties = ::java::util::Properties;
using $PrintService = ::javax::print::PrintService;
using $Attribute = ::javax::print::attribute::Attribute;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $Size2DSyntax = ::javax::print::attribute::Size2DSyntax;
using $Chromaticity = ::javax::print::attribute::standard::Chromaticity;
using $Copies = ::javax::print::attribute::standard::Copies;
using $Destination = ::javax::print::attribute::standard::Destination;
using $DialogOwner = ::javax::print::attribute::standard::DialogOwner;
using $DialogTypeSelection = ::javax::print::attribute::standard::DialogTypeSelection;
using $JobName = ::javax::print::attribute::standard::JobName;
using $Media = ::javax::print::attribute::standard::Media;
using $MediaSize = ::javax::print::attribute::standard::MediaSize;
using $MediaSizeName = ::javax::print::attribute::standard::MediaSizeName;
using $OrientationRequested = ::javax::print::attribute::standard::OrientationRequested;
using $PageRanges = ::javax::print::attribute::standard::PageRanges;
using $PrintQuality = ::javax::print::attribute::standard::PrintQuality;
using $SheetCollate = ::javax::print::attribute::standard::SheetCollate;
using $Sides = ::javax::print::attribute::standard::Sides;
using $CustomMediaSizeName = ::sun::print::CustomMediaSizeName;
using $PeekGraphics = ::sun::print::PeekGraphics;
using $PrintJob2D$MessageQ = ::sun::print::PrintJob2D$MessageQ;
using $ProxyGraphics = ::sun::print::ProxyGraphics;
using $ProxyPrintGraphics = ::sun::print::ProxyPrintGraphics;
using $SunMinMaxPage = ::sun::print::SunMinMaxPage;
using $SunPageSelection = ::sun::print::SunPageSelection;

namespace sun {
	namespace print {

$FieldInfo _PrintJob2D_FieldInfo_[] = {
	{"SIZES", "[Ljava/awt/PageAttributes$MediaType;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintJob2D, SIZES)},
	{"JAVAXSIZES", "[Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintJob2D, JAVAXSIZES)},
	{"WIDTHS", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintJob2D, WIDTHS)},
	{"LENGTHS", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintJob2D, LENGTHS)},
	{"frame", "Ljava/awt/Frame;", nullptr, $PRIVATE, $field(PrintJob2D, frame)},
	{"docTitle", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PrintJob2D, docTitle)},
	{"jobAttributes", "Ljava/awt/JobAttributes;", nullptr, $PRIVATE, $field(PrintJob2D, jobAttributes)},
	{"pageAttributes", "Ljava/awt/PageAttributes;", nullptr, $PRIVATE, $field(PrintJob2D, pageAttributes)},
	{"attributes", "Ljavax/print/attribute/PrintRequestAttributeSet;", nullptr, $PRIVATE, $field(PrintJob2D, attributes)},
	{"printerJob", "Ljava/awt/print/PrinterJob;", nullptr, $PRIVATE, $field(PrintJob2D, printerJob)},
	{"pageFormat", "Ljava/awt/print/PageFormat;", nullptr, $PRIVATE, $field(PrintJob2D, pageFormat)},
	{"graphicsToBeDrawn", "Lsun/print/PrintJob2D$MessageQ;", nullptr, $PRIVATE, $field(PrintJob2D, graphicsToBeDrawn)},
	{"graphicsDrawn", "Lsun/print/PrintJob2D$MessageQ;", nullptr, $PRIVATE, $field(PrintJob2D, graphicsDrawn)},
	{"currentGraphics", "Ljava/awt/Graphics2D;", nullptr, $PRIVATE, $field(PrintJob2D, currentGraphics)},
	{"pageIndex", "I", nullptr, $PRIVATE, $field(PrintJob2D, pageIndex)},
	{"DEST_PROP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintJob2D, DEST_PROP)},
	{"PRINTER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintJob2D, PRINTER)},
	{"FILE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintJob2D, FILE)},
	{"PRINTER_PROP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintJob2D, PRINTER_PROP)},
	{"FILENAME_PROP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintJob2D, FILENAME_PROP)},
	{"NUMCOPIES_PROP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintJob2D, NUMCOPIES_PROP)},
	{"OPTIONS_PROP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintJob2D, OPTIONS_PROP)},
	{"ORIENT_PROP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintJob2D, ORIENT_PROP)},
	{"PORTRAIT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintJob2D, PORTRAIT)},
	{"LANDSCAPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintJob2D, LANDSCAPE)},
	{"PAPERSIZE_PROP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintJob2D, PAPERSIZE_PROP)},
	{"LETTER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintJob2D, LETTER)},
	{"LEGAL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintJob2D, LEGAL)},
	{"EXECUTIVE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintJob2D, EXECUTIVE)},
	{"A4", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintJob2D, A4)},
	{"props", "Ljava/util/Properties;", nullptr, $PRIVATE, $field(PrintJob2D, props)},
	{"options", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PrintJob2D, options)},
	{"printerJobThread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(PrintJob2D, printerJobThread)},
	{}
};

$MethodInfo _PrintJob2D_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Frame;Ljava/lang/String;Ljava/util/Properties;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintJob2D::*)($Frame*,$String*,$Properties*)>(&PrintJob2D::init$))},
	{"<init>", "(Ljava/awt/Frame;Ljava/lang/String;Ljava/awt/JobAttributes;Ljava/awt/PageAttributes;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintJob2D::*)($Frame*,$String*,$JobAttributes*,$PageAttributes*)>(&PrintJob2D::init$))},
	{"copyAttributes", "(Ljavax/print/PrintService;)V", nullptr, $PRIVATE, $method(static_cast<void(PrintJob2D::*)($PrintService*)>(&PrintJob2D::copyAttributes))},
	{"debugPrintAttributes", "(ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(PrintJob2D::*)(bool,bool)>(&PrintJob2D::debugPrintAttributes))},
	{"end", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"finalize", "()V", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getPageDimension", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPageResolution", "()I", nullptr, $PUBLIC},
	{"getPageResolutionInternal", "()D", nullptr, $PRIVATE, $method(static_cast<double(PrintJob2D::*)()>(&PrintJob2D::getPageResolutionInternal))},
	{"getSize", "(Ljava/awt/PageAttributes$MediaType;)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($PageAttributes$MediaType*)>(&PrintJob2D::getSize))},
	{"initPrintJob2D", "(Ljava/awt/Frame;Ljava/lang/String;Ljava/awt/JobAttributes;Ljava/awt/PageAttributes;)V", nullptr, $PRIVATE, $method(static_cast<void(PrintJob2D::*)($Frame*,$String*,$JobAttributes*,$PageAttributes*)>(&PrintJob2D::initPrintJob2D))},
	{"lastPageFirst", "()Z", nullptr, $PUBLIC},
	{"mapMedia", "(Ljava/awt/PageAttributes$MediaType;)Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MediaSizeName*(*)($PageAttributes$MediaType*)>(&PrintJob2D::mapMedia))},
	{"print", "(Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)I", nullptr, $PUBLIC, nullptr, "java.awt.print.PrinterException"},
	{"printDialog", "()Z", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{"startPrinterJobThread", "()V", nullptr, $PRIVATE, $method(static_cast<void(PrintJob2D::*)()>(&PrintJob2D::startPrinterJobThread))},
	{"throwPrintToFile", "()V", nullptr, $PRIVATE, $method(static_cast<void(PrintJob2D::*)()>(&PrintJob2D::throwPrintToFile))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translateInputProps", "()V", nullptr, $PRIVATE, $method(static_cast<void(PrintJob2D::*)()>(&PrintJob2D::translateInputProps))},
	{"translateOutputProps", "()V", nullptr, $PRIVATE, $method(static_cast<void(PrintJob2D::*)()>(&PrintJob2D::translateOutputProps))},
	{"unMapMedia", "(Ljavax/print/attribute/standard/MediaSizeName;)Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PageAttributes$MediaType*(*)($MediaSizeName*)>(&PrintJob2D::unMapMedia))},
	{"updateAttributes", "()V", nullptr, $PRIVATE, $method(static_cast<void(PrintJob2D::*)()>(&PrintJob2D::updateAttributes))},
	{}
};

$InnerClassInfo _PrintJob2D_InnerClassesInfo_[] = {
	{"sun.print.PrintJob2D$MessageQ", "sun.print.PrintJob2D", "MessageQ", $PRIVATE},
	{}
};

$ClassInfo _PrintJob2D_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.PrintJob2D",
	"java.awt.PrintJob",
	"java.awt.print.Printable,java.lang.Runnable",
	_PrintJob2D_FieldInfo_,
	_PrintJob2D_MethodInfo_,
	nullptr,
	nullptr,
	_PrintJob2D_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.print.PrintJob2D$MessageQ"
};

$Object* allocate$PrintJob2D($Class* clazz) {
	return $of($alloc(PrintJob2D));
}

int32_t PrintJob2D::hashCode() {
	 return this->$PrintJob::hashCode();
}

bool PrintJob2D::equals(Object$* arg0) {
	 return this->$PrintJob::equals(arg0);
}

$Object* PrintJob2D::clone() {
	 return this->$PrintJob::clone();
}

$String* PrintJob2D::toString() {
	 return this->$PrintJob::toString();
}

$PageAttributes$MediaTypeArray* PrintJob2D::SIZES = nullptr;
$MediaSizeNameArray* PrintJob2D::JAVAXSIZES = nullptr;
$ints* PrintJob2D::WIDTHS = nullptr;
$ints* PrintJob2D::LENGTHS = nullptr;
$String* PrintJob2D::DEST_PROP = nullptr;
$String* PrintJob2D::PRINTER = nullptr;
$String* PrintJob2D::FILE = nullptr;
$String* PrintJob2D::PRINTER_PROP = nullptr;
$String* PrintJob2D::FILENAME_PROP = nullptr;
$String* PrintJob2D::NUMCOPIES_PROP = nullptr;
$String* PrintJob2D::OPTIONS_PROP = nullptr;
$String* PrintJob2D::ORIENT_PROP = nullptr;
$String* PrintJob2D::PORTRAIT = nullptr;
$String* PrintJob2D::LANDSCAPE = nullptr;
$String* PrintJob2D::PAPERSIZE_PROP = nullptr;
$String* PrintJob2D::LETTER = nullptr;
$String* PrintJob2D::LEGAL = nullptr;
$String* PrintJob2D::EXECUTIVE = nullptr;
$String* PrintJob2D::A4 = nullptr;

void PrintJob2D::init$($Frame* frame, $String* doctitle, $Properties* props) {
	$PrintJob::init$();
	$set(this, docTitle, ""_s);
	$set(this, graphicsToBeDrawn, $new($PrintJob2D$MessageQ, this, "tobedrawn"_s));
	$set(this, graphicsDrawn, $new($PrintJob2D$MessageQ, this, "drawn"_s));
	this->pageIndex = -1;
	$set(this, options, ""_s);
	$set(this, props, props);
	$set(this, jobAttributes, $new($JobAttributes));
	$set(this, pageAttributes, $new($PageAttributes));
	translateInputProps();
	initPrintJob2D(frame, doctitle, this->jobAttributes, this->pageAttributes);
}

void PrintJob2D::init$($Frame* frame, $String* doctitle, $JobAttributes* jobAttributes, $PageAttributes* pageAttributes) {
	$PrintJob::init$();
	$set(this, docTitle, ""_s);
	$set(this, graphicsToBeDrawn, $new($PrintJob2D$MessageQ, this, "tobedrawn"_s));
	$set(this, graphicsDrawn, $new($PrintJob2D$MessageQ, this, "drawn"_s));
	this->pageIndex = -1;
	$set(this, options, ""_s);
	initPrintJob2D(frame, doctitle, jobAttributes, pageAttributes);
}

void PrintJob2D::initPrintJob2D($Frame* frame, $String* doctitle, $JobAttributes* jobAttributes, $PageAttributes* pageAttributes) {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPrintJobAccess();
	}
	$init($JobAttributes$DialogType);
	if (frame == nullptr && (jobAttributes == nullptr || $nc(jobAttributes)->getDialog() == $JobAttributes$DialogType::NATIVE)) {
		$throwNew($NullPointerException, "Frame must not be null"_s);
	}
	$set(this, frame, frame);
	$set(this, docTitle, (doctitle == nullptr) ? ""_s : doctitle);
	$set(this, jobAttributes, (jobAttributes != nullptr) ? jobAttributes : $new($JobAttributes));
	$set(this, pageAttributes, (pageAttributes != nullptr) ? pageAttributes : $new($PageAttributes));
	$var($intArray2, pageRanges, $nc(this->jobAttributes)->getPageRanges());
	int32_t first = $nc($nc(pageRanges)->get(0))->get(0);
	int32_t last = $nc(pageRanges->get(pageRanges->length - 1))->get(1);
	$nc(this->jobAttributes)->setPageRanges($$new($intArray2, {$$new($ints, {
		first,
		last
	})}));
	$nc(this->jobAttributes)->setToPage(last);
	$nc(this->jobAttributes)->setFromPage(first);
	$var($ints, res, $nc(this->pageAttributes)->getPrinterResolution());
	if ($nc(res)->get(0) != res->get(1)) {
		$throwNew($IllegalArgumentException, "Differing cross feed and feed resolutions not supported."_s);
	}
	$var($JobAttributes$DestinationType, dest, $nc(this->jobAttributes)->getDestination());
	$init($JobAttributes$DestinationType);
	if (dest == $JobAttributes$DestinationType::FILE) {
		throwPrintToFile();
		$var($String, destStr, $nc(jobAttributes)->getFileName());
		if ((destStr != nullptr) && (jobAttributes->getDialog() == $JobAttributes$DialogType::NONE)) {
			$var($File, f, $new($File, destStr));
			try {
				if (f->createNewFile()) {
					f->delete$();
				}
			} catch ($IOException& ioe) {
				$throwNew($IllegalArgumentException, $$str({"Cannot write to file:"_s, destStr}));
			} catch ($SecurityException& se) {
			}
			$var($File, pFile, f->getParentFile());
			bool var$1 = f->exists();
			if (var$1) {
				bool var$2 = !f->isFile();
				var$1 = (var$2 || !f->canWrite());
			}
			bool var$0 = (var$1);
			if (!var$0) {
				bool var$3 = (pFile != nullptr);
				if (var$3) {
					bool var$4 = !pFile->exists();
					if (!var$4) {
						bool var$5 = $nc(pFile)->exists();
						var$4 = (var$5 && !pFile->canWrite());
					}
					var$3 = (var$4);
				}
				var$0 = (var$3);
			}
			if (var$0) {
				$throwNew($IllegalArgumentException, $$str({"Cannot write to file:"_s, destStr}));
			}
		}
	}
}

bool PrintJob2D::printDialog() {
	$useLocalCurrentObjectStackCache();
	bool proceedWithPrint = false;
	$set(this, printerJob, $PrinterJob::getPrinterJob());
	if (this->printerJob == nullptr) {
		return false;
	}
	$var($JobAttributes$DialogType, d, $nc(this->jobAttributes)->getDialog());
	$var($PrintService, pServ, $nc(this->printerJob)->getPrintService());
	$init($JobAttributes$DialogType);
	if ((pServ == nullptr) && (d == $JobAttributes$DialogType::NONE)) {
		return false;
	}
	copyAttributes(pServ);
	$var($JobAttributes$DefaultSelectionType, select, $nc(this->jobAttributes)->getDefaultSelection());
	$init($JobAttributes$DefaultSelectionType);
	if (select == $JobAttributes$DefaultSelectionType::RANGE) {
		$init($SunPageSelection);
		$nc(this->attributes)->add($SunPageSelection::RANGE);
	} else {
		if (select == $JobAttributes$DefaultSelectionType::SELECTION) {
			$init($SunPageSelection);
			$nc(this->attributes)->add($SunPageSelection::SELECTION);
		} else {
			$init($SunPageSelection);
			$nc(this->attributes)->add($SunPageSelection::ALL);
		}
	}
	if (this->frame != nullptr) {
		$nc(this->attributes)->add($$new($DialogOwner, static_cast<$Window*>(this->frame)));
	}
	if (d == $JobAttributes$DialogType::NONE) {
		proceedWithPrint = true;
	} else {
		if (d == $JobAttributes$DialogType::NATIVE) {
			$init($DialogTypeSelection);
			$nc(this->attributes)->add($DialogTypeSelection::NATIVE);
		} else {
			$init($DialogTypeSelection);
			$nc(this->attributes)->add($DialogTypeSelection::COMMON);
		}
		if (proceedWithPrint = $nc(this->printerJob)->printDialog(this->attributes)) {
			if (pServ == nullptr) {
				$assign(pServ, $nc(this->printerJob)->getPrintService());
				if (pServ == nullptr) {
					return false;
				}
			}
			updateAttributes();
			translateOutputProps();
		}
	}
	if (proceedWithPrint) {
		$load($JobName);
		$var($JobName, jname, $cast($JobName, $nc(this->attributes)->get($JobName::class$)));
		if (jname != nullptr) {
			$nc(this->printerJob)->setJobName($(jname->toString()));
		}
		$set(this, pageFormat, $new($PageFormat));
		$load($Media);
		$var($Media, media, $cast($Media, $nc(this->attributes)->get($Media::class$)));
		$var($MediaSize, mediaSize, nullptr);
		if (media != nullptr && $instanceOf($MediaSizeName, media)) {
			$assign(mediaSize, $MediaSize::getMediaSizeForName($cast($MediaSizeName, media)));
		}
		$var($Paper, p, $nc(this->pageFormat)->getPaper());
		if (mediaSize != nullptr) {
			double var$0 = mediaSize->getX($MediaSize::INCH) * 72.0;
			$nc(p)->setSize(var$0, mediaSize->getY($MediaSize::INCH) * 72.0);
		}
		$init($PageAttributes$OriginType);
		if ($nc(this->pageAttributes)->getOrigin() == $PageAttributes$OriginType::PRINTABLE) {
			double var$1 = p->getWidth() - 36.0;
			$nc(p)->setImageableArea(18.0, 18.0, var$1, p->getHeight() - 36.0);
		} else {
			double var$2 = p->getWidth();
			$nc(p)->setImageableArea(0.0, 0.0, var$2, p->getHeight());
		}
		$nc(this->pageFormat)->setPaper(p);
		$load($OrientationRequested);
		$var($OrientationRequested, orient, $cast($OrientationRequested, $nc(this->attributes)->get($OrientationRequested::class$)));
		$init($OrientationRequested);
		if (orient != nullptr && orient == $OrientationRequested::REVERSE_LANDSCAPE) {
			$nc(this->pageFormat)->setOrientation($PageFormat::REVERSE_LANDSCAPE);
		} else {
			if (orient == $OrientationRequested::LANDSCAPE) {
				$nc(this->pageFormat)->setOrientation($PageFormat::LANDSCAPE);
			} else {
				$nc(this->pageFormat)->setOrientation($PageFormat::PORTRAIT);
			}
		}
		$load($PageRanges);
		$var($PageRanges, pageRangesAttr, $cast($PageRanges, $nc(this->attributes)->get($PageRanges::class$)));
		if (pageRangesAttr != nullptr) {
			$var($intArray2, range, pageRangesAttr->getMembers());
			int32_t prevFromPage = $nc(this->jobAttributes)->getFromPage();
			int32_t prevToPage = $nc(this->jobAttributes)->getToPage();
			int32_t currFromPage = $nc($nc(range)->get(0))->get(0);
			int32_t currToPage = $nc(range->get(range->length - 1))->get(1);
			if (currFromPage < prevToPage) {
				$nc(this->jobAttributes)->setFromPage(currFromPage);
				$nc(this->jobAttributes)->setToPage(currToPage);
			} else {
				$nc(this->jobAttributes)->setToPage(currToPage);
				$nc(this->jobAttributes)->setFromPage(currFromPage);
			}
		}
		$nc(this->printerJob)->setPrintable(this, this->pageFormat);
	}
	return proceedWithPrint;
}

void PrintJob2D::updateAttributes() {
	$useLocalCurrentObjectStackCache();
	$load($Copies);
	$var($Copies, c, $cast($Copies, $nc(this->attributes)->get($Copies::class$)));
	$nc(this->jobAttributes)->setCopies($nc(c)->getValue());
	$load($SunPageSelection);
	$var($SunPageSelection, sel, $cast($SunPageSelection, $nc(this->attributes)->get($SunPageSelection::class$)));
	$init($SunPageSelection);
	if (sel == $SunPageSelection::RANGE) {
		$init($JobAttributes$DefaultSelectionType);
		$nc(this->jobAttributes)->setDefaultSelection($JobAttributes$DefaultSelectionType::RANGE);
	} else {
		if (sel == $SunPageSelection::SELECTION) {
			$init($JobAttributes$DefaultSelectionType);
			$nc(this->jobAttributes)->setDefaultSelection($JobAttributes$DefaultSelectionType::SELECTION);
		} else {
			$init($JobAttributes$DefaultSelectionType);
			$nc(this->jobAttributes)->setDefaultSelection($JobAttributes$DefaultSelectionType::ALL);
		}
	}
	$load($Destination);
	$var($Destination, dest, $cast($Destination, $nc(this->attributes)->get($Destination::class$)));
	if (dest != nullptr) {
		$init($JobAttributes$DestinationType);
		$nc(this->jobAttributes)->setDestination($JobAttributes$DestinationType::FILE);
		$nc(this->jobAttributes)->setFileName($($nc($(dest->getURI()))->getPath()));
	} else {
		$init($JobAttributes$DestinationType);
		$nc(this->jobAttributes)->setDestination($JobAttributes$DestinationType::PRINTER);
	}
	$var($PrintService, serv, $nc(this->printerJob)->getPrintService());
	if (serv != nullptr) {
		$nc(this->jobAttributes)->setPrinter($(serv->getName()));
	}
	$load($PageRanges);
	$var($PageRanges, range, $cast($PageRanges, $nc(this->attributes)->get($PageRanges::class$)));
	$var($intArray2, members, $nc(range)->getMembers());
	$nc(this->jobAttributes)->setPageRanges(members);
	$load($SheetCollate);
	$var($SheetCollate, collation, $cast($SheetCollate, $nc(this->attributes)->get($SheetCollate::class$)));
	$init($SheetCollate);
	if (collation == $SheetCollate::COLLATED) {
		$init($JobAttributes$MultipleDocumentHandlingType);
		$nc(this->jobAttributes)->setMultipleDocumentHandling($JobAttributes$MultipleDocumentHandlingType::SEPARATE_DOCUMENTS_COLLATED_COPIES);
	} else {
		$init($JobAttributes$MultipleDocumentHandlingType);
		$nc(this->jobAttributes)->setMultipleDocumentHandling($JobAttributes$MultipleDocumentHandlingType::SEPARATE_DOCUMENTS_UNCOLLATED_COPIES);
	}
	$load($Sides);
	$var($Sides, sides, $cast($Sides, $nc(this->attributes)->get($Sides::class$)));
	$init($Sides);
	if (sides == $Sides::TWO_SIDED_LONG_EDGE) {
		$init($JobAttributes$SidesType);
		$nc(this->jobAttributes)->setSides($JobAttributes$SidesType::TWO_SIDED_LONG_EDGE);
	} else {
		if (sides == $Sides::TWO_SIDED_SHORT_EDGE) {
			$init($JobAttributes$SidesType);
			$nc(this->jobAttributes)->setSides($JobAttributes$SidesType::TWO_SIDED_SHORT_EDGE);
		} else {
			$init($JobAttributes$SidesType);
			$nc(this->jobAttributes)->setSides($JobAttributes$SidesType::ONE_SIDED);
		}
	}
	$load($Chromaticity);
	$var($Chromaticity, color, $cast($Chromaticity, $nc(this->attributes)->get($Chromaticity::class$)));
	$init($Chromaticity);
	if (color == $Chromaticity::COLOR) {
		$init($PageAttributes$ColorType);
		$nc(this->pageAttributes)->setColor($PageAttributes$ColorType::COLOR);
	} else {
		$init($PageAttributes$ColorType);
		$nc(this->pageAttributes)->setColor($PageAttributes$ColorType::MONOCHROME);
	}
	$load($OrientationRequested);
	$var($OrientationRequested, orient, $cast($OrientationRequested, $nc(this->attributes)->get($OrientationRequested::class$)));
	$init($OrientationRequested);
	if (orient == $OrientationRequested::LANDSCAPE) {
		$init($PageAttributes$OrientationRequestedType);
		$nc(this->pageAttributes)->setOrientationRequested($PageAttributes$OrientationRequestedType::LANDSCAPE);
	} else {
		$init($PageAttributes$OrientationRequestedType);
		$nc(this->pageAttributes)->setOrientationRequested($PageAttributes$OrientationRequestedType::PORTRAIT);
	}
	$load($PrintQuality);
	$var($PrintQuality, qual, $cast($PrintQuality, $nc(this->attributes)->get($PrintQuality::class$)));
	$init($PrintQuality);
	if (qual == $PrintQuality::DRAFT) {
		$init($PageAttributes$PrintQualityType);
		$nc(this->pageAttributes)->setPrintQuality($PageAttributes$PrintQualityType::DRAFT);
	} else {
		if (qual == $PrintQuality::HIGH) {
			$init($PageAttributes$PrintQualityType);
			$nc(this->pageAttributes)->setPrintQuality($PageAttributes$PrintQualityType::HIGH);
		} else {
			$init($PageAttributes$PrintQualityType);
			$nc(this->pageAttributes)->setPrintQuality($PageAttributes$PrintQualityType::NORMAL);
		}
	}
	$load($Media);
	$var($Media, msn, $cast($Media, $nc(this->attributes)->get($Media::class$)));
	if (msn != nullptr && $instanceOf($MediaSizeName, msn)) {
		$var($PageAttributes$MediaType, mType, unMapMedia($cast($MediaSizeName, msn)));
		if (mType != nullptr) {
			$nc(this->pageAttributes)->setMedia(mType);
		}
	}
	debugPrintAttributes(false, false);
}

void PrintJob2D::debugPrintAttributes(bool ja, bool pa) {
	$useLocalCurrentObjectStackCache();
	if (ja) {
		$var($String, var$14, $$str({"new Attributes\ncopies = "_s, $$str($nc(this->jobAttributes)->getCopies()), "\nselection = "_s}));
		$var($String, var$13, $$concat(var$14, $($nc(this->jobAttributes)->getDefaultSelection())));
		$var($String, var$12, $$concat(var$13, "\ndest "_s));
		$var($String, var$11, $$concat(var$12, $($nc(this->jobAttributes)->getDestination())));
		$var($String, var$10, $$concat(var$11, "\nfile "_s));
		$var($String, var$9, $$concat(var$10, $($nc(this->jobAttributes)->getFileName())));
		$var($String, var$8, $$concat(var$9, "\nfromPage "_s));
		$var($String, var$7, $$concat(var$8, $$str($nc(this->jobAttributes)->getFromPage())));
		$var($String, var$6, $$concat(var$7, "\ntoPage "_s));
		$var($String, var$5, $$concat(var$6, $$str($nc(this->jobAttributes)->getToPage())));
		$var($String, var$4, $$concat(var$5, "\ncollation "_s));
		$var($String, var$3, $$concat(var$4, $($nc(this->jobAttributes)->getMultipleDocumentHandling())));
		$var($String, var$2, $$concat(var$3, "\nPrinter "_s));
		$var($String, var$1, $$concat(var$2, $($nc(this->jobAttributes)->getPrinter())));
		$var($String, var$0, $$concat(var$1, "\nSides2 "_s));
		$nc($System::out)->println($$concat(var$0, $($nc(this->jobAttributes)->getSides())));
	}
	if (pa) {
		$var($String, var$19, $$str({"new Attributes\ncolor = "_s, $($nc(this->pageAttributes)->getColor()), "\norientation = "_s}));
		$var($String, var$18, $$concat(var$19, $($nc(this->pageAttributes)->getOrientationRequested())));
		$var($String, var$17, $$concat(var$18, "\nquality "_s));
		$var($String, var$16, $$concat(var$17, $($nc(this->pageAttributes)->getPrintQuality())));
		$var($String, var$15, $$concat(var$16, "\nMedia2 "_s));
		$nc($System::out)->println($$concat(var$15, $($nc(this->pageAttributes)->getMedia())));
	}
}

void PrintJob2D::copyAttributes($PrintService* printServ) {
	$useLocalCurrentObjectStackCache();
	$set(this, attributes, $new($HashPrintRequestAttributeSet));
	$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$PrintRequestAttribute*>($$new($JobName, this->docTitle, nullptr))));
	$var($PrintService, pServ, printServ);
	$var($String, printerName, $nc(this->jobAttributes)->getPrinter());
	if (printerName != nullptr && printerName != ""_s && pServ != nullptr && !printerName->equals($(pServ->getName()))) {
		$var($PrintServiceArray, services, $PrinterJob::lookupPrintServices());
		try {
			for (int32_t i = 0; i < $nc(services)->length; ++i) {
				if (printerName->equals($($nc(services->get(i))->getName()))) {
					$nc(this->printerJob)->setPrintService(services->get(i));
					$assign(pServ, services->get(i));
					break;
				}
			}
		} catch ($PrinterException& pe) {
		}
	}
	$var($JobAttributes$DestinationType, dest, $nc(this->jobAttributes)->getDestination());
	$init($JobAttributes$DestinationType);
	$load($Destination);
	if (dest == $JobAttributes$DestinationType::FILE && pServ != nullptr && pServ->isAttributeCategorySupported($Destination::class$)) {
		$var($String, fileName, $nc(this->jobAttributes)->getFileName());
		$var($Destination, defaultDest, nullptr);
		if (fileName == nullptr && ($assign(defaultDest, $cast($Destination, pServ->getDefaultAttributeValue($Destination::class$)))) != nullptr) {
			$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$PrintJobAttribute*>(defaultDest)));
		} else {
			$var($URI, uri, nullptr);
			try {
				if (fileName != nullptr) {
					if (fileName->isEmpty()) {
						$assign(fileName, "."_s);
					}
				} else {
					$assign(fileName, "out.prn"_s);
				}
				$assign(uri, ($$new($File, fileName))->toURI());
			} catch ($SecurityException& se) {
				try {
					$assign(fileName, $nc(fileName)->replace(u'\\', u'/'));
					$assign(uri, $new($URI, $$str({"file:"_s, fileName})));
				} catch ($URISyntaxException& e) {
				}
			}
			if (uri != nullptr) {
				$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$PrintJobAttribute*>($$new($Destination, uri))));
			}
		}
	}
	int32_t var$0 = $nc(this->jobAttributes)->getMinPage();
	$nc(this->attributes)->add($$new($SunMinMaxPage, var$0, $nc(this->jobAttributes)->getMaxPage()));
	$var($JobAttributes$SidesType, sType, $nc(this->jobAttributes)->getSides());
	$init($JobAttributes$SidesType);
	if (sType == $JobAttributes$SidesType::TWO_SIDED_LONG_EDGE) {
		$init($Sides);
		$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($Sides::TWO_SIDED_LONG_EDGE)));
	} else {
		if (sType == $JobAttributes$SidesType::TWO_SIDED_SHORT_EDGE) {
			$init($Sides);
			$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($Sides::TWO_SIDED_SHORT_EDGE)));
		} else {
			if (sType == $JobAttributes$SidesType::ONE_SIDED) {
				$init($Sides);
				$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($Sides::ONE_SIDED)));
			}
		}
	}
	$var($JobAttributes$MultipleDocumentHandlingType, hType, $nc(this->jobAttributes)->getMultipleDocumentHandling());
	$init($JobAttributes$MultipleDocumentHandlingType);
	if (hType == $JobAttributes$MultipleDocumentHandlingType::SEPARATE_DOCUMENTS_COLLATED_COPIES) {
		$init($SheetCollate);
		$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($SheetCollate::COLLATED)));
	} else {
		$init($SheetCollate);
		$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($SheetCollate::UNCOLLATED)));
	}
	$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$PrintRequestAttribute*>($$new($Copies, $nc(this->jobAttributes)->getCopies()))));
	int32_t var$1 = $nc(this->jobAttributes)->getFromPage();
	$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($$new($PageRanges, var$1, $nc(this->jobAttributes)->getToPage()))));
	$init($PageAttributes$ColorType);
	if ($nc(this->pageAttributes)->getColor() == $PageAttributes$ColorType::COLOR) {
		$init($Chromaticity);
		$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($Chromaticity::COLOR)));
	} else {
		$init($Chromaticity);
		$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($Chromaticity::MONOCHROME)));
	}
	$set(this, pageFormat, $nc(this->printerJob)->defaultPage());
	$init($PageAttributes$OrientationRequestedType);
	if ($nc(this->pageAttributes)->getOrientationRequested() == $PageAttributes$OrientationRequestedType::LANDSCAPE) {
		$nc(this->pageFormat)->setOrientation($PageFormat::LANDSCAPE);
		$init($OrientationRequested);
		$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($OrientationRequested::LANDSCAPE)));
	} else {
		$nc(this->pageFormat)->setOrientation($PageFormat::PORTRAIT);
		$init($OrientationRequested);
		$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($OrientationRequested::PORTRAIT)));
	}
	$var($PageAttributes$MediaType, media, $nc(this->pageAttributes)->getMedia());
	$var($MediaSizeName, msn, mapMedia(media));
	if (msn != nullptr) {
		$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>(static_cast<$Media*>(msn))));
	}
	$var($PageAttributes$PrintQualityType, qType, $nc(this->pageAttributes)->getPrintQuality());
	$init($PageAttributes$PrintQualityType);
	if (qType == $PageAttributes$PrintQualityType::DRAFT) {
		$init($PrintQuality);
		$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($PrintQuality::DRAFT)));
	} else {
		if (qType == $PageAttributes$PrintQualityType::NORMAL) {
			$init($PrintQuality);
			$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($PrintQuality::NORMAL)));
		} else {
			if (qType == $PageAttributes$PrintQualityType::HIGH) {
				$init($PrintQuality);
				$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($PrintQuality::HIGH)));
			}
		}
	}
}

$Graphics* PrintJob2D::getGraphics() {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, printGraphics, nullptr);
	$synchronized(this) {
		++this->pageIndex;
		if (this->pageIndex == 0 && !$nc(this->graphicsToBeDrawn)->isClosed()) {
			startPrinterJobThread();
		}
		$of(this)->notify();
	}
	if (this->currentGraphics != nullptr) {
		$nc(this->graphicsDrawn)->append(this->currentGraphics);
		$set(this, currentGraphics, nullptr);
	}
	$set(this, currentGraphics, $nc(this->graphicsToBeDrawn)->pop());
	if ($instanceOf($PeekGraphics, this->currentGraphics)) {
		$nc(($cast($PeekGraphics, this->currentGraphics)))->setAWTDrawingOnly();
		$nc(this->graphicsDrawn)->append(this->currentGraphics);
		$set(this, currentGraphics, $nc(this->graphicsToBeDrawn)->pop());
	}
	if (this->currentGraphics != nullptr) {
		double var$0 = $nc(this->pageFormat)->getImageableX();
		$nc(this->currentGraphics)->translate(var$0, $nc(this->pageFormat)->getImageableY());
		double awtScale = 72.0 / getPageResolutionInternal();
		$nc(this->currentGraphics)->scale(awtScale, awtScale);
		$assign(printGraphics, $new($ProxyPrintGraphics, $($nc(this->currentGraphics)->create()), this));
	}
	return printGraphics;
}

$Dimension* PrintJob2D::getPageDimension() {
	double wid = 0.0;
	double hgt = 0.0;
	double scale = 0.0;
	$init($PageAttributes$OriginType);
	if (this->pageAttributes != nullptr && $nc(this->pageAttributes)->getOrigin() == $PageAttributes$OriginType::PRINTABLE) {
		wid = $nc(this->pageFormat)->getImageableWidth();
		hgt = $nc(this->pageFormat)->getImageableHeight();
	} else {
		wid = $nc(this->pageFormat)->getWidth();
		hgt = $nc(this->pageFormat)->getHeight();
	}
	scale = getPageResolutionInternal() / 72.0;
	return $new($Dimension, $cast(int32_t, (wid * scale)), $cast(int32_t, (hgt * scale)));
}

double PrintJob2D::getPageResolutionInternal() {
	if (this->pageAttributes != nullptr) {
		$var($ints, res, $nc(this->pageAttributes)->getPrinterResolution());
		if ($nc(res)->get(2) == 3) {
			return (double)res->get(0);
		} else {
			return (res->get(0) * 2.54);
		}
	} else {
		return 72.0;
	}
}

int32_t PrintJob2D::getPageResolution() {
	return $cast(int32_t, getPageResolutionInternal());
}

bool PrintJob2D::lastPageFirst() {
	return false;
}

void PrintJob2D::end() {
	$synchronized(this) {
		$nc(this->graphicsToBeDrawn)->close();
		if (this->currentGraphics != nullptr) {
			$nc(this->graphicsDrawn)->append(this->currentGraphics);
		}
		$nc(this->graphicsDrawn)->closeWhenEmpty();
		if (this->printerJobThread != nullptr && $nc(this->printerJobThread)->isAlive()) {
			try {
				$nc(this->printerJobThread)->join();
			} catch ($InterruptedException& e) {
			}
		}
	}
}

void PrintJob2D::finalize() {
	end();
}

int32_t PrintJob2D::print($Graphics* graphics, $PageFormat* pageFormat, int32_t pageIndex) {
	int32_t result = 0;
	$nc(this->graphicsToBeDrawn)->append($cast($Graphics2D, graphics));
	if ($nc(this->graphicsDrawn)->pop() != nullptr) {
		result = $Printable::PAGE_EXISTS;
	} else {
		result = $Printable::NO_SUCH_PAGE;
	}
	return result;
}

void PrintJob2D::startPrinterJobThread() {
	$set(this, printerJobThread, $new($Thread, nullptr, this, "printerJobThread"_s, 0, false));
	$nc(this->printerJobThread)->start();
}

void PrintJob2D::run() {
	try {
		$load($PageRanges);
		$nc(this->attributes)->remove($PageRanges::class$);
		$nc(this->printerJob)->print(this->attributes);
	} catch ($PrinterException& e) {
	}
	$nc(this->graphicsToBeDrawn)->closeWhenEmpty();
	$nc(this->graphicsDrawn)->close();
}

$ints* PrintJob2D::getSize($PageAttributes$MediaType* mType) {
	$init(PrintJob2D);
	$var($ints, dim, $new($ints, 2));
	dim->set(0, 612);
	dim->set(1, 792);
	for (int32_t i = 0; i < $nc(PrintJob2D::SIZES)->length; ++i) {
		if ($nc(PrintJob2D::SIZES)->get(i) == mType) {
			dim->set(0, $nc(PrintJob2D::WIDTHS)->get(i));
			dim->set(1, $nc(PrintJob2D::LENGTHS)->get(i));
			break;
		}
	}
	return dim;
}

$MediaSizeName* PrintJob2D::mapMedia($PageAttributes$MediaType* mType) {
	$init(PrintJob2D);
	$useLocalCurrentObjectStackCache();
	$var($MediaSizeName, media, nullptr);
	int32_t length = $Math::min($nc(PrintJob2D::SIZES)->length, $nc(PrintJob2D::JAVAXSIZES)->length);
	for (int32_t i = 0; i < length; ++i) {
		if ($nc(PrintJob2D::SIZES)->get(i) == mType) {
			if (($nc(PrintJob2D::JAVAXSIZES)->get(i) != nullptr) && $MediaSize::getMediaSizeForName($nc(PrintJob2D::JAVAXSIZES)->get(i)) != nullptr) {
				$assign(media, $nc(PrintJob2D::JAVAXSIZES)->get(i));
				break;
			} else {
				$assign(media, $new($CustomMediaSizeName, $($nc($nc(PrintJob2D::SIZES)->get(i))->toString())));
				float w = (float)$Math::rint($nc(PrintJob2D::WIDTHS)->get(i) / 72.0);
				float h = (float)$Math::rint($nc(PrintJob2D::LENGTHS)->get(i) / 72.0);
				if (w > 0.0 && h > 0.0) {
					$new($MediaSize, w, h, $Size2DSyntax::INCH, media);
				}
				break;
			}
		}
	}
	return media;
}

$PageAttributes$MediaType* PrintJob2D::unMapMedia($MediaSizeName* mSize) {
	$init(PrintJob2D);
	$var($PageAttributes$MediaType, media, nullptr);
	int32_t length = $Math::min($nc(PrintJob2D::SIZES)->length, $nc(PrintJob2D::JAVAXSIZES)->length);
	for (int32_t i = 0; i < length; ++i) {
		if ($nc(PrintJob2D::JAVAXSIZES)->get(i) == mSize) {
			if ($nc(PrintJob2D::SIZES)->get(i) != nullptr) {
				$assign(media, $nc(PrintJob2D::SIZES)->get(i));
				break;
			}
		}
	}
	return media;
}

void PrintJob2D::translateInputProps() {
	if (this->props == nullptr) {
		return;
	}
	$var($String, str, nullptr);
	$assign(str, $nc(this->props)->getProperty(PrintJob2D::DEST_PROP));
	if (str != nullptr) {
		if (str->equals(PrintJob2D::PRINTER)) {
			$init($JobAttributes$DestinationType);
			$nc(this->jobAttributes)->setDestination($JobAttributes$DestinationType::PRINTER);
		} else if (str->equals(PrintJob2D::FILE)) {
			$init($JobAttributes$DestinationType);
			$nc(this->jobAttributes)->setDestination($JobAttributes$DestinationType::FILE);
		}
	}
	$assign(str, $nc(this->props)->getProperty(PrintJob2D::PRINTER_PROP));
	if (str != nullptr) {
		$nc(this->jobAttributes)->setPrinter(str);
	}
	$assign(str, $nc(this->props)->getProperty(PrintJob2D::FILENAME_PROP));
	if (str != nullptr) {
		$nc(this->jobAttributes)->setFileName(str);
	}
	$assign(str, $nc(this->props)->getProperty(PrintJob2D::NUMCOPIES_PROP));
	if (str != nullptr) {
		$nc(this->jobAttributes)->setCopies($Integer::parseInt(str));
	}
	$set(this, options, $nc(this->props)->getProperty(PrintJob2D::OPTIONS_PROP, ""_s));
	$assign(str, $nc(this->props)->getProperty(PrintJob2D::ORIENT_PROP));
	if (str != nullptr) {
		if (str->equals(PrintJob2D::PORTRAIT)) {
			$init($PageAttributes$OrientationRequestedType);
			$nc(this->pageAttributes)->setOrientationRequested($PageAttributes$OrientationRequestedType::PORTRAIT);
		} else if (str->equals(PrintJob2D::LANDSCAPE)) {
			$init($PageAttributes$OrientationRequestedType);
			$nc(this->pageAttributes)->setOrientationRequested($PageAttributes$OrientationRequestedType::LANDSCAPE);
		}
	}
	$assign(str, $nc(this->props)->getProperty(PrintJob2D::PAPERSIZE_PROP));
	if (str != nullptr) {
		if (str->equals(PrintJob2D::LETTER)) {
			$init($PageAttributes$MediaType);
			$nc(this->pageAttributes)->setMedia($nc(PrintJob2D::SIZES)->get($nc($PageAttributes$MediaType::LETTER)->hashCode()));
		} else if (str->equals(PrintJob2D::LEGAL)) {
			$init($PageAttributes$MediaType);
			$nc(this->pageAttributes)->setMedia($nc(PrintJob2D::SIZES)->get($nc($PageAttributes$MediaType::LEGAL)->hashCode()));
		} else if (str->equals(PrintJob2D::EXECUTIVE)) {
			$init($PageAttributes$MediaType);
			$nc(this->pageAttributes)->setMedia($nc(PrintJob2D::SIZES)->get($nc($PageAttributes$MediaType::EXECUTIVE)->hashCode()));
		} else if (str->equals(PrintJob2D::A4)) {
			$init($PageAttributes$MediaType);
			$nc(this->pageAttributes)->setMedia($nc(PrintJob2D::SIZES)->get($nc($PageAttributes$MediaType::A4)->hashCode()));
		}
	}
}

void PrintJob2D::translateOutputProps() {
	$useLocalCurrentObjectStackCache();
	if (this->props == nullptr) {
		return;
	}
	$var($String, str, nullptr);
	$init($JobAttributes$DestinationType);
	$nc(this->props)->setProperty(PrintJob2D::DEST_PROP, ($nc(this->jobAttributes)->getDestination() == $JobAttributes$DestinationType::PRINTER) ? PrintJob2D::PRINTER : PrintJob2D::FILE);
	$assign(str, $nc(this->jobAttributes)->getPrinter());
	if (str != nullptr && !str->isEmpty()) {
		$nc(this->props)->setProperty(PrintJob2D::PRINTER_PROP, str);
	}
	$assign(str, $nc(this->jobAttributes)->getFileName());
	if (str != nullptr && !str->isEmpty()) {
		$nc(this->props)->setProperty(PrintJob2D::FILENAME_PROP, str);
	}
	int32_t copies = $nc(this->jobAttributes)->getCopies();
	if (copies > 0) {
		$nc(this->props)->setProperty(PrintJob2D::NUMCOPIES_PROP, $$str({""_s, $$str(copies)}));
	}
	$assign(str, this->options);
	if (str != nullptr && !str->isEmpty()) {
		$nc(this->props)->setProperty(PrintJob2D::OPTIONS_PROP, str);
	}
	$init($PageAttributes$OrientationRequestedType);
	$nc(this->props)->setProperty(PrintJob2D::ORIENT_PROP, ($nc(this->pageAttributes)->getOrientationRequested() == $PageAttributes$OrientationRequestedType::PORTRAIT) ? PrintJob2D::PORTRAIT : PrintJob2D::LANDSCAPE);
	$var($PageAttributes$MediaType, media, $nc(PrintJob2D::SIZES)->get($nc($($nc(this->pageAttributes)->getMedia()))->hashCode()));
	if (media == $PageAttributes$MediaType::LETTER) {
		$assign(str, PrintJob2D::LETTER);
	} else {
		if (media == $PageAttributes$MediaType::LEGAL) {
			$assign(str, PrintJob2D::LEGAL);
		} else {
			if (media == $PageAttributes$MediaType::EXECUTIVE) {
				$assign(str, PrintJob2D::EXECUTIVE);
			} else {
				if (media == $PageAttributes$MediaType::A4) {
					$assign(str, PrintJob2D::A4);
				} else {
					$assign(str, $nc(media)->toString());
				}
			}
		}
	}
	$nc(this->props)->setProperty(PrintJob2D::PAPERSIZE_PROP, str);
}

void PrintJob2D::throwPrintToFile() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, security, $System::getSecurityManager());
	$var($FilePermission, printToFilePermission, nullptr);
	if (security != nullptr) {
		if (printToFilePermission == nullptr) {
			$assign(printToFilePermission, $new($FilePermission, "<<ALL FILES>>"_s, "read,write"_s));
		}
		security->checkPermission(printToFilePermission);
	}
}

void clinit$PrintJob2D($Class* class$) {
	$assignStatic(PrintJob2D::DEST_PROP, "awt.print.destination"_s);
	$assignStatic(PrintJob2D::PRINTER, "printer"_s);
	$assignStatic(PrintJob2D::FILE, "file"_s);
	$assignStatic(PrintJob2D::PRINTER_PROP, "awt.print.printer"_s);
	$assignStatic(PrintJob2D::FILENAME_PROP, "awt.print.fileName"_s);
	$assignStatic(PrintJob2D::NUMCOPIES_PROP, "awt.print.numCopies"_s);
	$assignStatic(PrintJob2D::OPTIONS_PROP, "awt.print.options"_s);
	$assignStatic(PrintJob2D::ORIENT_PROP, "awt.print.orientation"_s);
	$assignStatic(PrintJob2D::PORTRAIT, "portrait"_s);
	$assignStatic(PrintJob2D::LANDSCAPE, "landscape"_s);
	$assignStatic(PrintJob2D::PAPERSIZE_PROP, "awt.print.paperSize"_s);
	$assignStatic(PrintJob2D::LETTER, "letter"_s);
	$assignStatic(PrintJob2D::LEGAL, "legal"_s);
	$assignStatic(PrintJob2D::EXECUTIVE, "executive"_s);
	$assignStatic(PrintJob2D::A4, "a4"_s);
	$init($PageAttributes$MediaType);
	$assignStatic(PrintJob2D::SIZES, $new($PageAttributes$MediaTypeArray, {
		$PageAttributes$MediaType::ISO_4A0,
		$PageAttributes$MediaType::ISO_2A0,
		$PageAttributes$MediaType::ISO_A0,
		$PageAttributes$MediaType::ISO_A1,
		$PageAttributes$MediaType::ISO_A2,
		$PageAttributes$MediaType::ISO_A3,
		$PageAttributes$MediaType::ISO_A4,
		$PageAttributes$MediaType::ISO_A5,
		$PageAttributes$MediaType::ISO_A6,
		$PageAttributes$MediaType::ISO_A7,
		$PageAttributes$MediaType::ISO_A8,
		$PageAttributes$MediaType::ISO_A9,
		$PageAttributes$MediaType::ISO_A10,
		$PageAttributes$MediaType::ISO_B0,
		$PageAttributes$MediaType::ISO_B1,
		$PageAttributes$MediaType::ISO_B2,
		$PageAttributes$MediaType::ISO_B3,
		$PageAttributes$MediaType::ISO_B4,
		$PageAttributes$MediaType::ISO_B5,
		$PageAttributes$MediaType::ISO_B6,
		$PageAttributes$MediaType::ISO_B7,
		$PageAttributes$MediaType::ISO_B8,
		$PageAttributes$MediaType::ISO_B9,
		$PageAttributes$MediaType::ISO_B10,
		$PageAttributes$MediaType::JIS_B0,
		$PageAttributes$MediaType::JIS_B1,
		$PageAttributes$MediaType::JIS_B2,
		$PageAttributes$MediaType::JIS_B3,
		$PageAttributes$MediaType::JIS_B4,
		$PageAttributes$MediaType::JIS_B5,
		$PageAttributes$MediaType::JIS_B6,
		$PageAttributes$MediaType::JIS_B7,
		$PageAttributes$MediaType::JIS_B8,
		$PageAttributes$MediaType::JIS_B9,
		$PageAttributes$MediaType::JIS_B10,
		$PageAttributes$MediaType::ISO_C0,
		$PageAttributes$MediaType::ISO_C1,
		$PageAttributes$MediaType::ISO_C2,
		$PageAttributes$MediaType::ISO_C3,
		$PageAttributes$MediaType::ISO_C4,
		$PageAttributes$MediaType::ISO_C5,
		$PageAttributes$MediaType::ISO_C6,
		$PageAttributes$MediaType::ISO_C7,
		$PageAttributes$MediaType::ISO_C8,
		$PageAttributes$MediaType::ISO_C9,
		$PageAttributes$MediaType::ISO_C10,
		$PageAttributes$MediaType::ISO_DESIGNATED_LONG,
		$PageAttributes$MediaType::EXECUTIVE,
		$PageAttributes$MediaType::FOLIO,
		$PageAttributes$MediaType::INVOICE,
		$PageAttributes$MediaType::LEDGER,
		$PageAttributes$MediaType::NA_LETTER,
		$PageAttributes$MediaType::NA_LEGAL,
		$PageAttributes$MediaType::QUARTO,
		$PageAttributes$MediaType::A,
		$PageAttributes$MediaType::B,
		$PageAttributes$MediaType::C,
		$PageAttributes$MediaType::D,
		$PageAttributes$MediaType::E,
		$PageAttributes$MediaType::NA_10X15_ENVELOPE,
		$PageAttributes$MediaType::NA_10X14_ENVELOPE,
		$PageAttributes$MediaType::NA_10X13_ENVELOPE,
		$PageAttributes$MediaType::NA_9X12_ENVELOPE,
		$PageAttributes$MediaType::NA_9X11_ENVELOPE,
		$PageAttributes$MediaType::NA_7X9_ENVELOPE,
		$PageAttributes$MediaType::NA_6X9_ENVELOPE,
		$PageAttributes$MediaType::NA_NUMBER_9_ENVELOPE,
		$PageAttributes$MediaType::NA_NUMBER_10_ENVELOPE,
		$PageAttributes$MediaType::NA_NUMBER_11_ENVELOPE,
		$PageAttributes$MediaType::NA_NUMBER_12_ENVELOPE,
		$PageAttributes$MediaType::NA_NUMBER_14_ENVELOPE,
		$PageAttributes$MediaType::INVITE_ENVELOPE,
		$PageAttributes$MediaType::ITALY_ENVELOPE,
		$PageAttributes$MediaType::MONARCH_ENVELOPE,
		$PageAttributes$MediaType::PERSONAL_ENVELOPE
	}));
	$init($MediaSizeName);
	$assignStatic(PrintJob2D::JAVAXSIZES, $new($MediaSizeNameArray, {
		($MediaSizeName*)nullptr,
		($MediaSizeName*)nullptr,
		$MediaSizeName::ISO_A0,
		$MediaSizeName::ISO_A1,
		$MediaSizeName::ISO_A2,
		$MediaSizeName::ISO_A3,
		$MediaSizeName::ISO_A4,
		$MediaSizeName::ISO_A5,
		$MediaSizeName::ISO_A6,
		$MediaSizeName::ISO_A7,
		$MediaSizeName::ISO_A8,
		$MediaSizeName::ISO_A9,
		$MediaSizeName::ISO_A10,
		$MediaSizeName::ISO_B0,
		$MediaSizeName::ISO_B1,
		$MediaSizeName::ISO_B2,
		$MediaSizeName::ISO_B3,
		$MediaSizeName::ISO_B4,
		$MediaSizeName::ISO_B5,
		$MediaSizeName::ISO_B6,
		$MediaSizeName::ISO_B7,
		$MediaSizeName::ISO_B8,
		$MediaSizeName::ISO_B9,
		$MediaSizeName::ISO_B10,
		$MediaSizeName::JIS_B0,
		$MediaSizeName::JIS_B1,
		$MediaSizeName::JIS_B2,
		$MediaSizeName::JIS_B3,
		$MediaSizeName::JIS_B4,
		$MediaSizeName::JIS_B5,
		$MediaSizeName::JIS_B6,
		$MediaSizeName::JIS_B7,
		$MediaSizeName::JIS_B8,
		$MediaSizeName::JIS_B9,
		$MediaSizeName::JIS_B10,
		$MediaSizeName::ISO_C0,
		$MediaSizeName::ISO_C1,
		$MediaSizeName::ISO_C2,
		$MediaSizeName::ISO_C3,
		$MediaSizeName::ISO_C4,
		$MediaSizeName::ISO_C5,
		$MediaSizeName::ISO_C6,
		($MediaSizeName*)nullptr,
		($MediaSizeName*)nullptr,
		($MediaSizeName*)nullptr,
		($MediaSizeName*)nullptr,
		$MediaSizeName::ISO_DESIGNATED_LONG,
		$MediaSizeName::EXECUTIVE,
		$MediaSizeName::FOLIO,
		$MediaSizeName::INVOICE,
		$MediaSizeName::LEDGER,
		$MediaSizeName::NA_LETTER,
		$MediaSizeName::NA_LEGAL,
		$MediaSizeName::QUARTO,
		$MediaSizeName::A,
		$MediaSizeName::B,
		$MediaSizeName::C,
		$MediaSizeName::D,
		$MediaSizeName::E,
		$MediaSizeName::NA_10X15_ENVELOPE,
		$MediaSizeName::NA_10X14_ENVELOPE,
		$MediaSizeName::NA_10X13_ENVELOPE,
		$MediaSizeName::NA_9X12_ENVELOPE,
		$MediaSizeName::NA_9X11_ENVELOPE,
		$MediaSizeName::NA_7X9_ENVELOPE,
		$MediaSizeName::NA_6X9_ENVELOPE,
		$MediaSizeName::NA_NUMBER_9_ENVELOPE,
		$MediaSizeName::NA_NUMBER_10_ENVELOPE,
		$MediaSizeName::NA_NUMBER_11_ENVELOPE,
		$MediaSizeName::NA_NUMBER_12_ENVELOPE,
		$MediaSizeName::NA_NUMBER_14_ENVELOPE,
		($MediaSizeName*)nullptr,
		$MediaSizeName::ITALY_ENVELOPE,
		$MediaSizeName::MONARCH_ENVELOPE,
		$MediaSizeName::PERSONAL_ENVELOPE
	}));
	$assignStatic(PrintJob2D::WIDTHS, $new($ints, {
		4768,
		3370,
		2384,
		1684,
		1191,
		842,
		595,
		420,
		298,
		210,
		147,
		105,
		74,
		2835,
		2004,
		1417,
		1001,
		709,
		499,
		354,
		249,
		176,
		125,
		88,
		2920,
		2064,
		1460,
		1032,
		729,
		516,
		363,
		258,
		181,
		128,
		91,
		2599,
		1837,
		1298,
		918,
		649,
		459,
		323,
		230,
		162,
		113,
		79,
		312,
		522,
		612,
		396,
		792,
		612,
		612,
		609,
		612,
		792,
		1224,
		1584,
		2448,
		720,
		720,
		720,
		648,
		648,
		504,
		432,
		279,
		297,
		324,
		342,
		360,
		624,
		312,
		279,
		261
	}));
	$assignStatic(PrintJob2D::LENGTHS, $new($ints, {
		6741,
		4768,
		3370,
		2384,
		1684,
		1191,
		842,
		595,
		420,
		298,
		210,
		147,
		105,
		4008,
		2835,
		2004,
		1417,
		1001,
		729,
		499,
		354,
		249,
		176,
		125,
		4127,
		2920,
		2064,
		1460,
		1032,
		729,
		516,
		363,
		258,
		181,
		128,
		3677,
		2599,
		1837,
		1298,
		918,
		649,
		459,
		323,
		230,
		162,
		113,
		624,
		756,
		936,
		612,
		1224,
		792,
		1008,
		780,
		792,
		1224,
		1584,
		2448,
		3168,
		1080,
		1008,
		936,
		864,
		792,
		648,
		648,
		639,
		684,
		747,
		792,
		828,
		624,
		652,
		540,
		468
	}));
}

PrintJob2D::PrintJob2D() {
}

$Class* PrintJob2D::load$($String* name, bool initialize) {
	$loadClass(PrintJob2D, name, initialize, &_PrintJob2D_ClassInfo_, clinit$PrintJob2D, allocate$PrintJob2D);
	return class$;
}

$Class* PrintJob2D::class$ = nullptr;

	} // print
} // sun