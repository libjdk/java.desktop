#include <sun/print/UnixPrintJob.h>

#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Pageable.h>
#include <java/awt/print/Paper.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterException.h>
#include <java/awt/print/PrinterJob.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/BufferedOutputStream.h>
#include <java/io/BufferedReader.h>
#include <java/io/BufferedWriter.h>
#include <java/io/File.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Locale.h>
#include <java/util/Vector.h>
#include <javax/print/CancelablePrintJob.h>
#include <javax/print/Doc.h>
#include <javax/print/DocFlavor$BYTE_ARRAY.h>
#include <javax/print/DocFlavor$CHAR_ARRAY.h>
#include <javax/print/DocFlavor$INPUT_STREAM.h>
#include <javax/print/DocFlavor$READER.h>
#include <javax/print/DocFlavor$SERVICE_FORMATTED.h>
#include <javax/print/DocFlavor$STRING.h>
#include <javax/print/DocFlavor$URL.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/DocPrintJob.h>
#include <javax/print/PrintException.h>
#include <javax/print/PrintService.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities.h>
#include <javax/print/attribute/DocAttributeSet.h>
#include <javax/print/attribute/HashPrintJobAttributeSet.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintJobAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttribute.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintServiceAttribute.h>
#include <javax/print/attribute/standard/Copies.h>
#include <javax/print/attribute/standard/Destination.h>
#include <javax/print/attribute/standard/DocumentName.h>
#include <javax/print/attribute/standard/Fidelity.h>
#include <javax/print/attribute/standard/JobName.h>
#include <javax/print/attribute/standard/JobOriginatingUserName.h>
#include <javax/print/attribute/standard/JobSheets.h>
#include <javax/print/attribute/standard/Media.h>
#include <javax/print/attribute/standard/MediaSize$NA.h>
#include <javax/print/attribute/standard/MediaSize.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <javax/print/attribute/standard/NumberUp.h>
#include <javax/print/attribute/standard/OrientationRequested.h>
#include <javax/print/attribute/standard/PrinterIsAcceptingJobs.h>
#include <javax/print/attribute/standard/RequestingUserName.h>
#include <javax/print/attribute/standard/Sides.h>
#include <javax/print/event/PrintJobAttributeListener.h>
#include <javax/print/event/PrintJobEvent.h>
#include <javax/print/event/PrintJobListener.h>
#include <sun/print/CUPSPrinter.h>
#include <sun/print/CustomMediaSizeName.h>
#include <sun/print/CustomMediaTray.h>
#include <sun/print/IPPPrintService.h>
#include <sun/print/ImagePrinter.h>
#include <sun/print/PSPrinterJob.h>
#include <sun/print/PrintJobAttributeException.h>
#include <sun/print/PrintJobFlavorException.h>
#include <sun/print/PrintServiceLookupProvider.h>
#include <sun/print/RasterPrinterJob.h>
#include <sun/print/UnixPrintJob$PrinterOpener.h>
#include <sun/print/UnixPrintJob$PrinterSpooler.h>
#include <sun/print/UnixPrintService.h>
#include <jcpp.h>

#undef COPIES
#undef DATA_TRANSFER_COMPLETE
#undef DESTFILE
#undef DESTPRINTER
#undef FIDELITY_TRUE
#undef GIF
#undef INCH
#undef JOBTITLE
#undef JOB_CANCELED
#undef JOB_COMPLETE
#undef JOB_FAILED
#undef JPEG
#undef LANDSCAPE
#undef LETTER
#undef NA_LETTER
#undef NONE
#undef NOSHEET
#undef NOT_ACCEPTING_JOBS
#undef NO_MORE_EVENTS
#undef OPTIONS
#undef PAGEABLE
#undef PNG
#undef PORTRAIT
#undef PRINTER
#undef REVERSE_LANDSCAPE
#undef TEXT_PLAIN

using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $PageFormat = ::java::awt::print::PageFormat;
using $Pageable = ::java::awt::print::Pageable;
using $Paper = ::java::awt::print::Paper;
using $Printable = ::java::awt::print::Printable;
using $PrinterException = ::java::awt::print::PrinterException;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $BufferedOutputStream = ::java::io::BufferedOutputStream;
using $BufferedReader = ::java::io::BufferedReader;
using $BufferedWriter = ::java::io::BufferedWriter;
using $File = ::java::io::File;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Locale = ::java::util::Locale;
using $Vector = ::java::util::Vector;
using $CancelablePrintJob = ::javax::print::CancelablePrintJob;
using $Doc = ::javax::print::Doc;
using $DocFlavor = ::javax::print::DocFlavor;
using $DocFlavor$BYTE_ARRAY = ::javax::print::DocFlavor$BYTE_ARRAY;
using $DocFlavor$CHAR_ARRAY = ::javax::print::DocFlavor$CHAR_ARRAY;
using $DocFlavor$INPUT_STREAM = ::javax::print::DocFlavor$INPUT_STREAM;
using $DocFlavor$READER = ::javax::print::DocFlavor$READER;
using $DocFlavor$SERVICE_FORMATTED = ::javax::print::DocFlavor$SERVICE_FORMATTED;
using $DocFlavor$STRING = ::javax::print::DocFlavor$STRING;
using $DocFlavor$URL = ::javax::print::DocFlavor$URL;
using $DocPrintJob = ::javax::print::DocPrintJob;
using $PrintException = ::javax::print::PrintException;
using $PrintService = ::javax::print::PrintService;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $AttributeSetUtilities = ::javax::print::attribute::AttributeSetUtilities;
using $DocAttributeSet = ::javax::print::attribute::DocAttributeSet;
using $HashPrintJobAttributeSet = ::javax::print::attribute::HashPrintJobAttributeSet;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintJobAttributeSet = ::javax::print::attribute::PrintJobAttributeSet;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $Copies = ::javax::print::attribute::standard::Copies;
using $Destination = ::javax::print::attribute::standard::Destination;
using $DocumentName = ::javax::print::attribute::standard::DocumentName;
using $Fidelity = ::javax::print::attribute::standard::Fidelity;
using $JobName = ::javax::print::attribute::standard::JobName;
using $JobOriginatingUserName = ::javax::print::attribute::standard::JobOriginatingUserName;
using $JobSheets = ::javax::print::attribute::standard::JobSheets;
using $Media = ::javax::print::attribute::standard::Media;
using $MediaSize = ::javax::print::attribute::standard::MediaSize;
using $MediaSize$NA = ::javax::print::attribute::standard::MediaSize$NA;
using $MediaSizeName = ::javax::print::attribute::standard::MediaSizeName;
using $NumberUp = ::javax::print::attribute::standard::NumberUp;
using $OrientationRequested = ::javax::print::attribute::standard::OrientationRequested;
using $PrinterIsAcceptingJobs = ::javax::print::attribute::standard::PrinterIsAcceptingJobs;
using $RequestingUserName = ::javax::print::attribute::standard::RequestingUserName;
using $Sides = ::javax::print::attribute::standard::Sides;
using $PrintJobAttributeListener = ::javax::print::event::PrintJobAttributeListener;
using $PrintJobEvent = ::javax::print::event::PrintJobEvent;
using $PrintJobListener = ::javax::print::event::PrintJobListener;
using $CUPSPrinter = ::sun::print::CUPSPrinter;
using $CustomMediaSizeName = ::sun::print::CustomMediaSizeName;
using $CustomMediaTray = ::sun::print::CustomMediaTray;
using $IPPPrintService = ::sun::print::IPPPrintService;
using $ImagePrinter = ::sun::print::ImagePrinter;
using $PSPrinterJob = ::sun::print::PSPrinterJob;
using $PrintJobAttributeException = ::sun::print::PrintJobAttributeException;
using $PrintJobFlavorException = ::sun::print::PrintJobFlavorException;
using $PrintServiceLookupProvider = ::sun::print::PrintServiceLookupProvider;
using $RasterPrinterJob = ::sun::print::RasterPrinterJob;
using $UnixPrintJob$PrinterOpener = ::sun::print::UnixPrintJob$PrinterOpener;
using $UnixPrintJob$PrinterSpooler = ::sun::print::UnixPrintJob$PrinterSpooler;
using $UnixPrintService = ::sun::print::UnixPrintService;

namespace sun {
	namespace print {

$FieldInfo _UnixPrintJob_FieldInfo_[] = {
	{"debugPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(UnixPrintJob, debugPrefix)},
	{"jobListeners", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/print/event/PrintJobListener;>;", $PRIVATE | $TRANSIENT, $field(UnixPrintJob, jobListeners)},
	{"attrListeners", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/print/event/PrintJobAttributeListener;>;", $PRIVATE | $TRANSIENT, $field(UnixPrintJob, attrListeners)},
	{"listenedAttributeSets", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/print/attribute/PrintJobAttributeSet;>;", $PRIVATE | $TRANSIENT, $field(UnixPrintJob, listenedAttributeSets)},
	{"service", "Ljavax/print/PrintService;", nullptr, $PRIVATE, $field(UnixPrintJob, service)},
	{"fidelity", "Z", nullptr, $PRIVATE, $field(UnixPrintJob, fidelity)},
	{"printing", "Z", nullptr, $PRIVATE, $field(UnixPrintJob, printing)},
	{"printReturned", "Z", nullptr, $PRIVATE, $field(UnixPrintJob, printReturned)},
	{"reqAttrSet", "Ljavax/print/attribute/PrintRequestAttributeSet;", nullptr, $PRIVATE, $field(UnixPrintJob, reqAttrSet)},
	{"jobAttrSet", "Ljavax/print/attribute/PrintJobAttributeSet;", nullptr, $PRIVATE, $field(UnixPrintJob, jobAttrSet)},
	{"job", "Ljava/awt/print/PrinterJob;", nullptr, $PRIVATE, $field(UnixPrintJob, job)},
	{"doc", "Ljavax/print/Doc;", nullptr, $PRIVATE, $field(UnixPrintJob, doc)},
	{"instream", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(UnixPrintJob, instream)},
	{"reader", "Ljava/io/Reader;", nullptr, $PRIVATE, $field(UnixPrintJob, reader)},
	{"jobName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UnixPrintJob, jobName)},
	{"copies", "I", nullptr, $PRIVATE, $field(UnixPrintJob, copies)},
	{"mediaName", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PRIVATE, $field(UnixPrintJob, mediaName)},
	{"mediaSize", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PRIVATE, $field(UnixPrintJob, mediaSize)},
	{"customTray", "Lsun/print/CustomMediaTray;", nullptr, $PRIVATE, $field(UnixPrintJob, customTray)},
	{"orient", "Ljavax/print/attribute/standard/OrientationRequested;", nullptr, $PRIVATE, $field(UnixPrintJob, orient)},
	{"nUp", "Ljavax/print/attribute/standard/NumberUp;", nullptr, $PRIVATE, $field(UnixPrintJob, nUp)},
	{"sides", "Ljavax/print/attribute/standard/Sides;", nullptr, $PRIVATE, $field(UnixPrintJob, sides)},
	{"DESTPRINTER", "I", nullptr, $PRIVATE | $STATIC, $staticField(UnixPrintJob, DESTPRINTER)},
	{"DESTFILE", "I", nullptr, $PRIVATE | $STATIC, $staticField(UnixPrintJob, DESTFILE)},
	{"mDestType", "I", nullptr, $PRIVATE, $field(UnixPrintJob, mDestType)},
	{"spoolFile", "Ljava/io/File;", nullptr, $PRIVATE, $field(UnixPrintJob, spoolFile)},
	{"mDestination", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UnixPrintJob, mDestination)},
	{"mOptions", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UnixPrintJob, mOptions)},
	{"mNoJobSheet", "Z", nullptr, $PRIVATE, $field(UnixPrintJob, mNoJobSheet)},
	{}
};

$MethodInfo _UnixPrintJob_MethodInfo_[] = {
	{"<init>", "(Ljavax/print/PrintService;)V", nullptr, 0, $method(static_cast<void(UnixPrintJob::*)($PrintService*)>(&UnixPrintJob::init$))},
	{"addPrintJobAttributeListener", "(Ljavax/print/event/PrintJobAttributeListener;Ljavax/print/attribute/PrintJobAttributeSet;)V", nullptr, $PUBLIC},
	{"addPrintJobListener", "(Ljavax/print/event/PrintJobListener;)V", nullptr, $PUBLIC},
	{"cancel", "()V", nullptr, $PUBLIC, nullptr, "javax.print.PrintException"},
	{"closeDataStreams", "()V", nullptr, $PRIVATE, $method(static_cast<void(UnixPrintJob::*)()>(&UnixPrintJob::closeDataStreams))},
	{"getAttributeValues", "(Ljavax/print/DocFlavor;)V", nullptr, $PRIVATE, $method(static_cast<void(UnixPrintJob::*)($DocFlavor*)>(&UnixPrintJob::getAttributeValues)), "javax.print.PrintException"},
	{"getAttributes", "()Ljavax/print/attribute/PrintJobAttributeSet;", nullptr, $PUBLIC},
	{"getPrintService", "()Ljavax/print/PrintService;", nullptr, $PUBLIC},
	{"initializeAttributeSets", "(Ljavax/print/Doc;Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(UnixPrintJob::*)($Doc*,$PrintRequestAttributeSet*)>(&UnixPrintJob::initializeAttributeSets))},
	{"notifyEvent", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(UnixPrintJob::*)(int32_t)>(&UnixPrintJob::notifyEvent))},
	{"pageableJob", "(Ljava/awt/print/Pageable;)V", nullptr, $PUBLIC, nullptr, "javax.print.PrintException"},
	{"print", "(Ljavax/print/Doc;Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PUBLIC, nullptr, "javax.print.PrintException"},
	{"printExecCmd", "(Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;ILjava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$StringArray*(UnixPrintJob::*)($String*,$String*,bool,$String*,int32_t,$String*)>(&UnixPrintJob::printExecCmd))},
	{"printableJob", "(Ljava/awt/print/Printable;)V", nullptr, $PUBLIC, nullptr, "javax.print.PrintException"},
	{"removePrintJobAttributeListener", "(Ljavax/print/event/PrintJobAttributeListener;)V", nullptr, $PUBLIC},
	{"removePrintJobListener", "(Ljavax/print/event/PrintJobListener;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _UnixPrintJob_InnerClassesInfo_[] = {
	{"sun.print.UnixPrintJob$PrinterSpooler", "sun.print.UnixPrintJob", "PrinterSpooler", $PRIVATE},
	{"sun.print.UnixPrintJob$PrinterOpener", "sun.print.UnixPrintJob", "PrinterOpener", $PRIVATE},
	{}
};

$ClassInfo _UnixPrintJob_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.UnixPrintJob",
	"java.lang.Object",
	"javax.print.CancelablePrintJob",
	_UnixPrintJob_FieldInfo_,
	_UnixPrintJob_MethodInfo_,
	nullptr,
	nullptr,
	_UnixPrintJob_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.print.UnixPrintJob$PrinterSpooler,sun.print.UnixPrintJob$PrinterOpener"
};

$Object* allocate$UnixPrintJob($Class* clazz) {
	return $of($alloc(UnixPrintJob));
}

$String* UnixPrintJob::debugPrefix = nullptr;
int32_t UnixPrintJob::DESTPRINTER = 0;
int32_t UnixPrintJob::DESTFILE = 0;

void UnixPrintJob::init$($PrintService* service) {
	this->printing = false;
	this->printReturned = false;
	$set(this, reqAttrSet, nullptr);
	$set(this, jobAttrSet, nullptr);
	$set(this, instream, nullptr);
	$set(this, reader, nullptr);
	$set(this, jobName, "Java Printing"_s);
	this->copies = 1;
	$init($MediaSizeName);
	$set(this, mediaName, $MediaSizeName::NA_LETTER);
	$init($MediaSize$NA);
	$set(this, mediaSize, $MediaSize$NA::LETTER);
	$set(this, customTray, nullptr);
	$init($OrientationRequested);
	$set(this, orient, $OrientationRequested::PORTRAIT);
	$set(this, nUp, nullptr);
	$set(this, sides, nullptr);
	this->mDestType = UnixPrintJob::DESTPRINTER;
	$set(this, mOptions, ""_s);
	this->mNoJobSheet = false;
	$set(this, service, service);
	$set(this, mDestination, $nc(service)->getName());
	if ($PrintServiceLookupProvider::isMac()) {
		$set(this, mDestination, $nc(($cast($IPPPrintService, service)))->getDest());
	}
	this->mDestType = UnixPrintJob::DESTPRINTER;
	$load($JobSheets);
	$var($JobSheets, js, ($cast($JobSheets, service->getDefaultAttributeValue($JobSheets::class$))));
	$init($JobSheets);
	if (js != nullptr && $of(js)->equals($JobSheets::NONE)) {
		this->mNoJobSheet = true;
	}
}

$PrintService* UnixPrintJob::getPrintService() {
	return this->service;
}

$PrintJobAttributeSet* UnixPrintJob::getAttributes() {
	$synchronized(this) {
		if (this->jobAttrSet == nullptr) {
			$var($PrintJobAttributeSet, jobSet, $new($HashPrintJobAttributeSet));
			return $AttributeSetUtilities::unmodifiableView(jobSet);
		} else {
			return this->jobAttrSet;
		}
	}
}

void UnixPrintJob::addPrintJobListener($PrintJobListener* listener) {
	$synchronized(this) {
		if (listener == nullptr) {
			return;
		}
		if (this->jobListeners == nullptr) {
			$set(this, jobListeners, $new($Vector));
		}
		$nc(this->jobListeners)->add(listener);
	}
}

void UnixPrintJob::removePrintJobListener($PrintJobListener* listener) {
	$synchronized(this) {
		if (listener == nullptr || this->jobListeners == nullptr) {
			return;
		}
		$nc(this->jobListeners)->remove($of(listener));
		if ($nc(this->jobListeners)->isEmpty()) {
			$set(this, jobListeners, nullptr);
		}
	}
}

void UnixPrintJob::closeDataStreams() {
	$useLocalCurrentObjectStackCache();
	if (this->doc == nullptr) {
		return;
	}
	$var($Object, data, nullptr);
	try {
		$assign(data, $nc(this->doc)->getPrintData());
	} catch ($IOException& e) {
		return;
	}
	if (this->instream != nullptr) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc(this->instream)->close();
				} catch ($IOException& e) {
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$set(this, instream, nullptr);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else if (this->reader != nullptr) {
		{
			$var($Throwable, var$2, nullptr);
			try {
				try {
					$nc(this->reader)->close();
				} catch ($IOException& e) {
				}
			} catch ($Throwable& var$3) {
				$assign(var$2, var$3);
			} /*finally*/ {
				$set(this, reader, nullptr);
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	} else if ($instanceOf($InputStream, data)) {
		try {
			$nc(($cast($InputStream, data)))->close();
		} catch ($IOException& e) {
		}
	} else if ($instanceOf($Reader, data)) {
		try {
			$nc(($cast($Reader, data)))->close();
		} catch ($IOException& e) {
		}
	}
}

void UnixPrintJob::notifyEvent(int32_t reason) {
	$useLocalCurrentObjectStackCache();
	switch (reason) {
	case $PrintJobEvent::DATA_TRANSFER_COMPLETE:
		{}
	case $PrintJobEvent::JOB_CANCELED:
		{}
	case $PrintJobEvent::JOB_FAILED:
		{}
	case $PrintJobEvent::NO_MORE_EVENTS:
		{}
	case $PrintJobEvent::JOB_COMPLETE:
		{
			closeDataStreams();
		}
	}
	$synchronized(this) {
		if (this->jobListeners != nullptr) {
			$var($PrintJobListener, listener, nullptr);
			$var($PrintJobEvent, event, $new($PrintJobEvent, this, reason));
			for (int32_t i = 0; i < $nc(this->jobListeners)->size(); ++i) {
				$assign(listener, $cast($PrintJobListener, $nc(this->jobListeners)->elementAt(i)));
				switch (reason) {
				case $PrintJobEvent::JOB_CANCELED:
					{
						$nc(listener)->printJobCanceled(event);
						break;
					}
				case $PrintJobEvent::JOB_FAILED:
					{
						$nc(listener)->printJobFailed(event);
						break;
					}
				case $PrintJobEvent::DATA_TRANSFER_COMPLETE:
					{
						$nc(listener)->printDataTransferCompleted(event);
						break;
					}
				case $PrintJobEvent::NO_MORE_EVENTS:
					{
						$nc(listener)->printJobNoMoreEvents(event);
						break;
					}
				default:
					{
						break;
					}
				}
			}
		}
	}
}

void UnixPrintJob::addPrintJobAttributeListener($PrintJobAttributeListener* listener, $PrintJobAttributeSet* attributes$renamed) {
	$var($PrintJobAttributeSet, attributes, attributes$renamed);
	$synchronized(this) {
		if (listener == nullptr) {
			return;
		}
		if (this->attrListeners == nullptr) {
			$set(this, attrListeners, $new($Vector));
			$set(this, listenedAttributeSets, $new($Vector));
		}
		$nc(this->attrListeners)->add(listener);
		if (attributes == nullptr) {
			$assign(attributes, $new($HashPrintJobAttributeSet));
		}
		$nc(this->listenedAttributeSets)->add(attributes);
	}
}

void UnixPrintJob::removePrintJobAttributeListener($PrintJobAttributeListener* listener) {
	$synchronized(this) {
		if (listener == nullptr || this->attrListeners == nullptr) {
			return;
		}
		int32_t index = $nc(this->attrListeners)->indexOf(listener);
		if (index == -1) {
			return;
		} else {
			$nc(this->attrListeners)->remove(index);
			$nc(this->listenedAttributeSets)->remove(index);
			if ($nc(this->attrListeners)->isEmpty()) {
				$set(this, attrListeners, nullptr);
				$set(this, listenedAttributeSets, nullptr);
			}
		}
	}
}

void UnixPrintJob::print($Doc* doc, $PrintRequestAttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$synchronized(this) {
		if (this->printing) {
			$throwNew($PrintException, "already printing"_s);
		} else {
			this->printing = true;
		}
	}
	$load($PrinterIsAcceptingJobs);
	$init($PrinterIsAcceptingJobs);
	if ($equals($nc(this->service)->getAttribute($PrinterIsAcceptingJobs::class$), $PrinterIsAcceptingJobs::NOT_ACCEPTING_JOBS)) {
		$throwNew($PrintException, "Printer is not accepting job."_s);
	}
	$set(this, doc, doc);
	$var($DocFlavor, flavor, $nc(doc)->getDocFlavor());
	$var($Object, data, nullptr);
	try {
		$assign(data, doc->getPrintData());
	} catch ($IOException& e) {
		notifyEvent($PrintJobEvent::JOB_FAILED);
		$throwNew($PrintException, $$str({"can\'t get print data: "_s, $(e->toString())}));
	}
	if (data == nullptr) {
		$throwNew($PrintException, "Null print data."_s);
	}
	if (flavor == nullptr || (!$nc(this->service)->isDocFlavorSupported(flavor))) {
		notifyEvent($PrintJobEvent::JOB_FAILED);
		$throwNew($PrintJobFlavorException, "invalid flavor"_s, flavor);
	}
	initializeAttributeSets(doc, attributes);
	getAttributeValues(flavor);
	if (($instanceOf($IPPPrintService, this->service)) && $CUPSPrinter::isCupsRunning()) {
		$IPPPrintService::debug_println($$str({UnixPrintJob::debugPrefix, "instanceof IPPPrintService"_s}));
		if (this->mediaName != nullptr) {
			$var($CustomMediaSizeName, customMedia, $nc(($cast($IPPPrintService, this->service)))->findCustomMedia(this->mediaName));
			if (customMedia != nullptr) {
				$set(this, mOptions, $str({" media="_s, $(customMedia->getChoiceName())}));
			}
		}
		if (this->customTray != nullptr && $instanceOf($CustomMediaTray, this->customTray)) {
			$var($String, choice, $nc(this->customTray)->getChoiceName());
			if (choice != nullptr) {
				$plusAssignField(this, mOptions, $$str({" InputSlot="_s, choice}));
			}
		}
		if (this->nUp != nullptr) {
			$plusAssignField(this, mOptions, $$str({" number-up="_s, $$str($nc(this->nUp)->getValue())}));
		}
		$init($OrientationRequested);
		$init($DocFlavor$SERVICE_FORMATTED);
		if (this->orient != $OrientationRequested::PORTRAIT && (flavor != nullptr) && !flavor->equals($DocFlavor$SERVICE_FORMATTED::PAGEABLE)) {
			$plusAssignField(this, mOptions, $$str({" orientation-requested="_s, $$str($nc(this->orient)->getValue())}));
		}
		if (this->sides != nullptr) {
			$plusAssignField(this, mOptions, $$str({" sides="_s, this->sides}));
		}
	}
	$IPPPrintService::debug_println($$str({UnixPrintJob::debugPrefix, "mOptions "_s, this->mOptions}));
	$var($String, repClassName, $nc(flavor)->getRepresentationClassName());
	$var($String, val, flavor->getParameter("charset"_s));
	$var($String, encoding, "us-ascii"_s);
	if (val != nullptr && !val->isEmpty()) {
		$assign(encoding, val);
	}
	$init($DocFlavor$INPUT_STREAM);
	bool var$4 = flavor->equals($DocFlavor$INPUT_STREAM::GIF);
	bool var$3 = var$4 || flavor->equals($DocFlavor$INPUT_STREAM::JPEG);
	bool var$2 = var$3 || flavor->equals($DocFlavor$INPUT_STREAM::PNG);
	$init($DocFlavor$BYTE_ARRAY);
	bool var$1 = var$2 || flavor->equals($DocFlavor$BYTE_ARRAY::GIF);
	bool var$0 = var$1 || flavor->equals($DocFlavor$BYTE_ARRAY::JPEG);
	if (var$0 || flavor->equals($DocFlavor$BYTE_ARRAY::PNG)) {
		try {
			$set(this, instream, doc->getStreamForBytes());
			if (this->instream == nullptr) {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, "No stream for data"_s);
			}
			if (!($instanceOf($IPPPrintService, this->service) && $nc(($cast($IPPPrintService, this->service)))->isIPPSupportedImages($(flavor->getMimeType())))) {
				printableJob($$new($ImagePrinter, this->instream));
				if ($instanceOf($IPPPrintService, this->service)) {
					$nc(($cast($IPPPrintService, this->service)))->wakeNotifier();
				} else {
					$nc(($cast($UnixPrintService, this->service)))->wakeNotifier();
				}
				return;
			}
		} catch ($ClassCastException& cce) {
			notifyEvent($PrintJobEvent::JOB_FAILED);
			$throwNew($PrintException, static_cast<$Exception*>(cce));
		} catch ($IOException& ioe) {
			notifyEvent($PrintJobEvent::JOB_FAILED);
			$throwNew($PrintException, static_cast<$Exception*>(ioe));
		}
	} else {
		$init($DocFlavor$URL);
		bool var$8 = flavor->equals($DocFlavor$URL::GIF);
		bool var$7 = var$8 || flavor->equals($DocFlavor$URL::JPEG);
		if (var$7 || flavor->equals($DocFlavor$URL::PNG)) {
			try {
				$var($URL, url, $cast($URL, data));
				if (($instanceOf($IPPPrintService, this->service)) && $nc(($cast($IPPPrintService, this->service)))->isIPPSupportedImages($(flavor->getMimeType()))) {
					$set(this, instream, $nc(url)->openStream());
				} else {
					printableJob($$new($ImagePrinter, url));
					if ($instanceOf($IPPPrintService, this->service)) {
						$nc(($cast($IPPPrintService, this->service)))->wakeNotifier();
					} else {
						$nc(($cast($UnixPrintService, this->service)))->wakeNotifier();
					}
					return;
				}
			} catch ($ClassCastException& cce) {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, static_cast<$Exception*>(cce));
			} catch ($IOException& e) {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, $(e->toString()));
			}
		} else {
			$init($DocFlavor$CHAR_ARRAY);
			bool var$12 = flavor->equals($DocFlavor$CHAR_ARRAY::TEXT_PLAIN);
			$init($DocFlavor$READER);
			bool var$11 = var$12 || flavor->equals($DocFlavor$READER::TEXT_PLAIN);
			$init($DocFlavor$STRING);
			if (var$11 || flavor->equals($DocFlavor$STRING::TEXT_PLAIN)) {
				try {
					$set(this, reader, doc->getReaderForText());
					if (this->reader == nullptr) {
						notifyEvent($PrintJobEvent::JOB_FAILED);
						$throwNew($PrintException, "No reader for data"_s);
					}
				} catch ($IOException& ioe) {
					notifyEvent($PrintJobEvent::JOB_FAILED);
					$throwNew($PrintException, $(ioe->toString()));
				}
			} else {
				bool var$14 = $nc(repClassName)->equals("[B"_s);
				if (var$14 || $nc(repClassName)->equals("java.io.InputStream"_s)) {
					try {
						$set(this, instream, doc->getStreamForBytes());
						if (this->instream == nullptr) {
							notifyEvent($PrintJobEvent::JOB_FAILED);
							$throwNew($PrintException, "No stream for data"_s);
						}
					} catch ($IOException& ioe) {
						notifyEvent($PrintJobEvent::JOB_FAILED);
						$throwNew($PrintException, $(ioe->toString()));
					}
				} else if (repClassName->equals("java.net.URL"_s)) {
					$var($URL, url, $cast($URL, data));
					try {
						$set(this, instream, $nc(url)->openStream());
					} catch ($IOException& e) {
						notifyEvent($PrintJobEvent::JOB_FAILED);
						$throwNew($PrintException, $(e->toString()));
					}
				} else if (repClassName->equals("java.awt.print.Pageable"_s)) {
					try {
						pageableJob($cast($Pageable, $(doc->getPrintData())));
						if ($instanceOf($IPPPrintService, this->service)) {
							$nc(($cast($IPPPrintService, this->service)))->wakeNotifier();
						} else {
							$nc(($cast($UnixPrintService, this->service)))->wakeNotifier();
						}
						return;
					} catch ($ClassCastException& cce) {
						notifyEvent($PrintJobEvent::JOB_FAILED);
						$throwNew($PrintException, static_cast<$Exception*>(cce));
					} catch ($IOException& ioe) {
						notifyEvent($PrintJobEvent::JOB_FAILED);
						$throwNew($PrintException, static_cast<$Exception*>(ioe));
					}
				} else if (repClassName->equals("java.awt.print.Printable"_s)) {
					try {
						printableJob($cast($Printable, $(doc->getPrintData())));
						if ($instanceOf($IPPPrintService, this->service)) {
							$nc(($cast($IPPPrintService, this->service)))->wakeNotifier();
						} else {
							$nc(($cast($UnixPrintService, this->service)))->wakeNotifier();
						}
						return;
					} catch ($ClassCastException& cce) {
						notifyEvent($PrintJobEvent::JOB_FAILED);
						$throwNew($PrintException, static_cast<$Exception*>(cce));
					} catch ($IOException& ioe) {
						notifyEvent($PrintJobEvent::JOB_FAILED);
						$throwNew($PrintException, static_cast<$Exception*>(ioe));
					}
				} else {
					notifyEvent($PrintJobEvent::JOB_FAILED);
					$throwNew($PrintException, $$str({"unrecognized class: "_s, repClassName}));
				}
			}
		}
	}
	$var($UnixPrintJob$PrinterOpener, po, $new($UnixPrintJob$PrinterOpener, this));
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>(po));
	if (po->pex != nullptr) {
		$throw(po->pex);
	}
	$var($OutputStream, output, po->result);
	$var($BufferedWriter, bw, nullptr);
	if (this->instream == nullptr && this->reader != nullptr) {
		$var($BufferedReader, br, $new($BufferedReader, this->reader));
		$var($OutputStreamWriter, osw, $new($OutputStreamWriter, output));
		$assign(bw, $new($BufferedWriter, osw));
		$var($chars, buffer, $new($chars, 1024));
		int32_t cread = 0;
		try {
			while ((cread = br->read(buffer, 0, buffer->length)) >= 0) {
				bw->write(buffer, 0, cread);
			}
			br->close();
			bw->flush();
			bw->close();
		} catch ($IOException& e) {
			notifyEvent($PrintJobEvent::JOB_FAILED);
			$throwNew($PrintException, static_cast<$Exception*>(e));
		}
	} else if (this->instream != nullptr && $nc($(flavor->getMediaType()))->equalsIgnoreCase("text"_s)) {
		{
			$var($Throwable, var$15, nullptr);
			try {
				try {
					$var($InputStreamReader, isr, $new($InputStreamReader, this->instream, encoding));
					$var($BufferedReader, br, $new($BufferedReader, isr));
					$var($OutputStreamWriter, osw, $new($OutputStreamWriter, output));
					$assign(bw, $new($BufferedWriter, osw));
					$var($chars, buffer, $new($chars, 1024));
					int32_t cread = 0;
					while ((cread = br->read(buffer, 0, buffer->length)) >= 0) {
						bw->write(buffer, 0, cread);
					}
					bw->flush();
				} catch ($IOException& e) {
					notifyEvent($PrintJobEvent::JOB_FAILED);
					$throwNew($PrintException, static_cast<$Exception*>(e));
				}
			} catch ($Throwable& var$16) {
				$assign(var$15, var$16);
			} /*finally*/ {
				try {
					if (bw != nullptr) {
						bw->close();
					}
				} catch ($IOException& e) {
				}
			}
			if (var$15 != nullptr) {
				$throw(var$15);
			}
		}
	} else if (this->instream != nullptr) {
		try {
			$var($BufferedInputStream, bin, $new($BufferedInputStream, this->instream));
			{
				$var($Throwable, var$17, nullptr);
				try {
					try {
						$var($BufferedOutputStream, bout, $new($BufferedOutputStream, output));
						{
							$var($Throwable, var$18, nullptr);
							try {
								try {
									bin->transferTo(bout);
								} catch ($Throwable& t$) {
									try {
										bout->close();
									} catch ($Throwable& x2) {
										t$->addSuppressed(x2);
									}
									$throw(t$);
								}
							} catch ($Throwable& var$19) {
								$assign(var$18, var$19);
							} /*finally*/ {
								bout->close();
							}
							if (var$18 != nullptr) {
								$throw(var$18);
							}
						}
					} catch ($Throwable& t$) {
						try {
							bin->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$20) {
					$assign(var$17, var$20);
				} /*finally*/ {
					bin->close();
				}
				if (var$17 != nullptr) {
					$throw(var$17);
				}
			}
		} catch ($IOException& e) {
			notifyEvent($PrintJobEvent::JOB_FAILED);
			$throwNew($PrintException, static_cast<$Exception*>(e));
		}
	}
	notifyEvent($PrintJobEvent::DATA_TRANSFER_COMPLETE);
	if (this->mDestType == UnixPrintJob::DESTPRINTER) {
		$var($UnixPrintJob$PrinterSpooler, spooler, $new($UnixPrintJob$PrinterSpooler, this));
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>(spooler));
		if (spooler->pex != nullptr) {
			$throw(spooler->pex);
		}
	}
	notifyEvent($PrintJobEvent::NO_MORE_EVENTS);
	if ($instanceOf($IPPPrintService, this->service)) {
		$nc(($cast($IPPPrintService, this->service)))->wakeNotifier();
	} else {
		$nc(($cast($UnixPrintService, this->service)))->wakeNotifier();
	}
}

void UnixPrintJob::printableJob($Printable* printable) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			try {
				$synchronized(this) {
					if (this->job != nullptr) {
						$throwNew($PrintException, "already printing"_s);
					} else {
						$set(this, job, $new($PSPrinterJob));
					}
				}
				$nc(this->job)->setPrintService($(getPrintService()));
				$nc(this->job)->setCopies(this->copies);
				$nc(this->job)->setJobName(this->jobName);
				$var($PageFormat, pf, $new($PageFormat));
				if (this->mediaSize != nullptr) {
					$var($Paper, p, $new($Paper));
					double var$2 = $nc(this->mediaSize)->getX($MediaSize::INCH) * 72.0;
					p->setSize(var$2, $nc(this->mediaSize)->getY($MediaSize::INCH) * 72.0);
					double var$3 = p->getWidth() - 144.0;
					p->setImageableArea(72.0, 72.0, var$3, p->getHeight() - 144.0);
					pf->setPaper(p);
				}
				$init($OrientationRequested);
				if (this->orient == $OrientationRequested::REVERSE_LANDSCAPE) {
					pf->setOrientation($PageFormat::REVERSE_LANDSCAPE);
				} else {
					if (this->orient == $OrientationRequested::LANDSCAPE) {
						pf->setOrientation($PageFormat::LANDSCAPE);
					}
				}
				$nc(this->job)->setPrintable(printable, pf);
				$nc(this->job)->print(this->reqAttrSet);
				notifyEvent($PrintJobEvent::DATA_TRANSFER_COMPLETE);
				return$1 = true;
				goto $finally;
			} catch ($PrinterException& pe) {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, static_cast<$Exception*>(pe));
			}
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			this->printReturned = true;
			notifyEvent($PrintJobEvent::NO_MORE_EVENTS);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void UnixPrintJob::pageableJob($Pageable* pageable) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			try {
				$synchronized(this) {
					if (this->job != nullptr) {
						$throwNew($PrintException, "already printing"_s);
					} else {
						$set(this, job, $new($PSPrinterJob));
					}
				}
				$nc(this->job)->setPrintService($(getPrintService()));
				$nc(this->job)->setCopies(this->copies);
				$nc(this->job)->setJobName(this->jobName);
				$nc(this->job)->setPageable(pageable);
				$nc(this->job)->print(this->reqAttrSet);
				notifyEvent($PrintJobEvent::DATA_TRANSFER_COMPLETE);
				return$1 = true;
				goto $finally;
			} catch ($PrinterException& pe) {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, static_cast<$Exception*>(pe));
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			this->printReturned = true;
			notifyEvent($PrintJobEvent::NO_MORE_EVENTS);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void UnixPrintJob::initializeAttributeSets($Doc* doc, $PrintRequestAttributeSet* reqSet) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$set(this, reqAttrSet, $new($HashPrintRequestAttributeSet));
		$set(this, jobAttrSet, $new($HashPrintJobAttributeSet));
		$var($AttributeArray, attrs, nullptr);
		if (reqSet != nullptr) {
			$nc(this->reqAttrSet)->addAll(reqSet);
			$assign(attrs, reqSet->toArray());
			for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
				if ($instanceOf($PrintJobAttribute, attrs->get(i))) {
					$nc(this->jobAttrSet)->add(attrs->get(i));
				}
			}
		}
		$var($DocAttributeSet, docSet, $nc(doc)->getAttributes());
		if (docSet != nullptr) {
			$assign(attrs, docSet->toArray());
			for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
				if ($instanceOf($PrintRequestAttribute, attrs->get(i))) {
					$nc(this->reqAttrSet)->add(attrs->get(i));
				}
				if ($instanceOf($PrintJobAttribute, attrs->get(i))) {
					$nc(this->jobAttrSet)->add(attrs->get(i));
				}
			}
		}
		$var($String, userName, ""_s);
		try {
			$assign(userName, $System::getProperty("user.name"_s));
		} catch ($SecurityException& se) {
		}
		if (userName == nullptr || userName->isEmpty()) {
			$load($RequestingUserName);
			$var($RequestingUserName, ruName, $cast($RequestingUserName, $nc(reqSet)->get($RequestingUserName::class$)));
			if (ruName != nullptr) {
				$var($String, var$0, ruName->getValue());
				$nc(this->jobAttrSet)->add($$new($JobOriginatingUserName, var$0, $(ruName->getLocale())));
			} else {
				$nc(this->jobAttrSet)->add($$new($JobOriginatingUserName, ""_s, nullptr));
			}
		} else {
			$nc(this->jobAttrSet)->add($$new($JobOriginatingUserName, userName, nullptr));
		}
		$load($JobName);
		if ($nc(this->jobAttrSet)->get($JobName::class$) == nullptr) {
			$var($JobName, jobName, nullptr);
			$load($DocumentName);
			if (docSet != nullptr && docSet->get($DocumentName::class$) != nullptr) {
				$var($DocumentName, docName, $cast($DocumentName, docSet->get($DocumentName::class$)));
				$var($String, var$1, $nc(docName)->getValue());
				$assign(jobName, $new($JobName, var$1, $(docName->getLocale())));
				$nc(this->jobAttrSet)->add(static_cast<$Attribute*>(static_cast<$PrintRequestAttribute*>(jobName)));
			} else {
				$var($String, str, $str({"JPS Job:"_s, doc}));
				try {
					$var($Object, printData, doc->getPrintData());
					if ($instanceOf($URL, printData)) {
						$assign(str, $nc((($cast($URL, $(doc->getPrintData())))))->toString());
					}
				} catch ($IOException& e) {
				}
				$assign(jobName, $new($JobName, str, nullptr));
				$nc(this->jobAttrSet)->add(static_cast<$Attribute*>(static_cast<$PrintRequestAttribute*>(jobName)));
			}
		}
		$set(this, jobAttrSet, $AttributeSetUtilities::unmodifiableView(this->jobAttrSet));
	}
}

void UnixPrintJob::getAttributeValues($DocFlavor* flavor) {
	$useLocalCurrentObjectStackCache();
	$var($Attribute, attr, nullptr);
	$Class* category = nullptr;
	$load($Fidelity);
	$init($Fidelity);
	if ($equals($nc(this->reqAttrSet)->get($Fidelity::class$), $Fidelity::FIDELITY_TRUE)) {
		this->fidelity = true;
	} else {
		this->fidelity = false;
	}
	$var($AttributeArray, attrs, $nc(this->reqAttrSet)->toArray());
	for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
		$assign(attr, attrs->get(i));
		category = $nc(attr)->getCategory();
		if (this->fidelity == true) {
			if (!$nc(this->service)->isAttributeCategorySupported(category)) {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintJobAttributeException, $$str({"unsupported category: "_s, category}), category, nullptr);
			} else if (!$nc(this->service)->isAttributeValueSupported(attr, flavor, nullptr)) {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintJobAttributeException, $$str({"unsupported attribute: "_s, attr}), nullptr, attr);
			}
		}
		$load($Destination);
		if (category == $Destination::class$) {
			$var($URI, uri, $nc(($cast($Destination, attr)))->getURI());
			if (!"file"_s->equals($($nc(uri)->getScheme()))) {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, "Not a file: URI"_s);
			} else {
				try {
					this->mDestType = UnixPrintJob::DESTFILE;
					$set(this, mDestination, ($$new($File, uri))->getPath());
				} catch ($Exception& e) {
					$throwNew($PrintException, $cast($Exception, e));
				}
				$var($SecurityManager, security, $System::getSecurityManager());
				if (security != nullptr) {
					try {
						security->checkWrite(this->mDestination);
					} catch ($SecurityException& se) {
						notifyEvent($PrintJobEvent::JOB_FAILED);
						$throwNew($PrintException, static_cast<$Exception*>(se));
					}
				}
			}
		} else {
			$load($JobSheets);
			if (category == $JobSheets::class$) {
				$init($JobSheets);
				if ($cast($JobSheets, attr) == $JobSheets::NONE) {
					this->mNoJobSheet = true;
				}
			} else {
				$load($JobName);
				if (category == $JobName::class$) {
					$set(this, jobName, $nc(($cast($JobName, attr)))->getValue());
				} else {
					$load($Copies);
					if (category == $Copies::class$) {
						this->copies = $nc(($cast($Copies, attr)))->getValue();
					} else {
						$load($Media);
						if (category == $Media::class$) {
							if ($instanceOf($MediaSizeName, attr)) {
								$set(this, mediaName, $cast($MediaSizeName, attr));
								$IPPPrintService::debug_println($$str({UnixPrintJob::debugPrefix, "mediaName "_s, this->mediaName}));
								if (!$nc(this->service)->isAttributeValueSupported(attr, nullptr, nullptr)) {
									$set(this, mediaSize, $MediaSize::getMediaSizeForName(this->mediaName));
								}
							} else if ($instanceOf($CustomMediaTray, attr)) {
								$set(this, customTray, $cast($CustomMediaTray, attr));
							}
						} else {
							$load($OrientationRequested);
							if (category == $OrientationRequested::class$) {
								$set(this, orient, $cast($OrientationRequested, attr));
							} else {
								$load($NumberUp);
								if (category == $NumberUp::class$) {
									$set(this, nUp, $cast($NumberUp, attr));
								} else {
									$load($Sides);
									if (category == $Sides::class$) {
										$set(this, sides, $cast($Sides, attr));
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

$StringArray* UnixPrintJob::printExecCmd($String* printer, $String* options, bool noJobSheet, $String* jobTitle, int32_t copies, $String* spoolFile) {
	$useLocalCurrentObjectStackCache();
	int32_t PRINTER = 1;
	int32_t OPTIONS = 2;
	int32_t JOBTITLE = 4;
	int32_t COPIES = 8;
	int32_t NOSHEET = 16;
	int32_t pFlags = 0;
	$var($StringArray, execCmd, nullptr);
	int32_t ncomps = 2;
	int32_t n = 0;
	bool var$0 = printer != nullptr && !printer->isEmpty();
	if (var$0 && !printer->equals("lp"_s)) {
		pFlags |= PRINTER;
		ncomps += 1;
	}
	if (options != nullptr && !options->isEmpty()) {
		pFlags |= OPTIONS;
		ncomps += 1;
	}
	if (jobTitle != nullptr && !jobTitle->isEmpty()) {
		pFlags |= JOBTITLE;
		ncomps += 1;
	}
	if (copies > 1) {
		pFlags |= COPIES;
		ncomps += 1;
	}
	if (noJobSheet) {
		pFlags |= NOSHEET;
		ncomps += 1;
	} else {
		$load($JobSheets);
		if ($nc($(getPrintService()))->isAttributeCategorySupported($JobSheets::class$)) {
			ncomps += 1;
		}
	}
	$assign(execCmd, $new($StringArray, ncomps));
	execCmd->set(n++, "/usr/bin/lpr"_s);
	if (((int32_t)(pFlags & (uint32_t)PRINTER)) != 0) {
		execCmd->set(n++, $$str({"-P"_s, printer}));
	}
	if (((int32_t)(pFlags & (uint32_t)JOBTITLE)) != 0) {
		execCmd->set(n++, $$str({"-J "_s, jobTitle}));
	}
	if (((int32_t)(pFlags & (uint32_t)COPIES)) != 0) {
		execCmd->set(n++, $$str({"-#"_s, $$str(copies)}));
	}
	if (((int32_t)(pFlags & (uint32_t)NOSHEET)) != 0) {
		execCmd->set(n++, "-h"_s);
	} else {
		$load($JobSheets);
		if ($nc($(getPrintService()))->isAttributeCategorySupported($JobSheets::class$)) {
			execCmd->set(n++, "-o job-sheets=standard"_s);
		}
	}
	if (((int32_t)(pFlags & (uint32_t)OPTIONS)) != 0) {
		execCmd->set(n++, $$str({"-o"_s, options}));
	}
	execCmd->set(n++, spoolFile);
	$init($IPPPrintService);
	if ($IPPPrintService::debugPrint) {
		$nc($System::out)->println("UnixPrintJob>> execCmd"_s);
		for (int32_t i = 0; i < execCmd->length; ++i) {
			$nc($System::out)->print($$str({" "_s, execCmd->get(i)}));
		}
		$nc($System::out)->println();
	}
	return execCmd;
}

void UnixPrintJob::cancel() {
	$synchronized(this) {
		if (!this->printing) {
			$throwNew($PrintException, "Job is not yet submitted."_s);
		} else if (this->job != nullptr && !this->printReturned) {
			$nc(this->job)->cancel();
			notifyEvent($PrintJobEvent::JOB_CANCELED);
			return;
		} else {
			$throwNew($PrintException, "Job could not be cancelled."_s);
		}
	}
}

void clinit$UnixPrintJob($Class* class$) {
	$assignStatic(UnixPrintJob::debugPrefix, "UnixPrintJob>> "_s);
	UnixPrintJob::DESTPRINTER = 1;
	UnixPrintJob::DESTFILE = 2;
}

UnixPrintJob::UnixPrintJob() {
}

$Class* UnixPrintJob::load$($String* name, bool initialize) {
	$loadClass(UnixPrintJob, name, initialize, &_UnixPrintJob_ClassInfo_, clinit$UnixPrintJob, allocate$UnixPrintJob);
	return class$;
}

$Class* UnixPrintJob::class$ = nullptr;

	} // print
} // sun