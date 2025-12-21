#include <sun/print/PrintServiceLookupProvider.h>

#include <java/lang/CharSequence.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/ThreadGroup.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/ArrayList.h>
#include <java/util/Vector.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/MultiDocPrintService.h>
#include <javax/print/PrintService.h>
#include <javax/print/PrintServiceLookup.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/HashPrintServiceAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttribute.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintServiceAttribute.h>
#include <javax/print/attribute/PrintServiceAttributeSet.h>
#include <javax/print/attribute/standard/PrinterName.h>
#include <javax/print/attribute/standard/PrinterURI.h>
#include <sun/print/BackgroundLookupListener.h>
#include <sun/print/CUPSPrinter.h>
#include <sun/print/IPPPrintService.h>
#include <sun/print/PrintServiceLookupProvider$1.h>
#include <sun/print/PrintServiceLookupProvider$PrinterChangeListener.h>
#include <sun/print/UnixPrintService.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef BSD_LPD
#undef BSD_LPD_NG
#undef DEFAULT_MINREFRESH
#undef UNINITIALIZED

using $DocFlavorArray = $Array<::javax::print::DocFlavor>;
using $MultiDocPrintServiceArray = $Array<::javax::print::MultiDocPrintService>;
using $PrintServiceArray = $Array<::javax::print::PrintService>;
using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Runnable = ::java::lang::Runnable;
using $SecurityManager = ::java::lang::SecurityManager;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $ArrayList = ::java::util::ArrayList;
using $Vector = ::java::util::Vector;
using $DocFlavor = ::javax::print::DocFlavor;
using $PrintService = ::javax::print::PrintService;
using $PrintServiceLookup = ::javax::print::PrintServiceLookup;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $HashPrintServiceAttributeSet = ::javax::print::attribute::HashPrintServiceAttributeSet;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $PrintServiceAttribute = ::javax::print::attribute::PrintServiceAttribute;
using $PrintServiceAttributeSet = ::javax::print::attribute::PrintServiceAttributeSet;
using $PrinterName = ::javax::print::attribute::standard::PrinterName;
using $PrinterURI = ::javax::print::attribute::standard::PrinterURI;
using $BackgroundLookupListener = ::sun::print::BackgroundLookupListener;
using $CUPSPrinter = ::sun::print::CUPSPrinter;
using $IPPPrintService = ::sun::print::IPPPrintService;
using $PrintServiceLookupProvider$1 = ::sun::print::PrintServiceLookupProvider$1;
using $PrintServiceLookupProvider$PrinterChangeListener = ::sun::print::PrintServiceLookupProvider$PrinterChangeListener;
using $UnixPrintService = ::sun::print::UnixPrintService;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace print {

$FieldInfo _PrintServiceLookupProvider_FieldInfo_[] = {
	{"defaultPrinter", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PrintServiceLookupProvider, defaultPrinter)},
	{"defaultPrintService", "Ljavax/print/PrintService;", nullptr, $PRIVATE, $field(PrintServiceLookupProvider, defaultPrintService)},
	{"printServices", "[Ljavax/print/PrintService;", nullptr, $PRIVATE, $field(PrintServiceLookupProvider, printServices)},
	{"lookupListeners", "Ljava/util/Vector;", "Ljava/util/Vector<Lsun/print/BackgroundLookupListener;>;", $PRIVATE, $field(PrintServiceLookupProvider, lookupListeners)},
	{"debugPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(PrintServiceLookupProvider, debugPrefix)},
	{"pollServices", "Z", nullptr, $PRIVATE | $STATIC, $staticField(PrintServiceLookupProvider, pollServices)},
	{"DEFAULT_MINREFRESH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrintServiceLookupProvider, DEFAULT_MINREFRESH)},
	{"minRefreshTime", "I", nullptr, $PRIVATE | $STATIC, $staticField(PrintServiceLookupProvider, minRefreshTime)},
	{"osname", "Ljava/lang/String;", nullptr, $STATIC, $staticField(PrintServiceLookupProvider, osname)},
	{"lpNameComAix", "[Ljava/lang/String;", nullptr, 0, $field(PrintServiceLookupProvider, lpNameComAix)},
	{"aix_lsallq", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrintServiceLookupProvider, aix_lsallq)},
	{"aix_lpstat_p", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrintServiceLookupProvider, aix_lpstat_p)},
	{"aix_lpstat_d", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrintServiceLookupProvider, aix_lpstat_d)},
	{"aix_lpstat_v", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrintServiceLookupProvider, aix_lpstat_v)},
	{"aix_defaultPrinterEnumeration", "I", nullptr, $PRIVATE | $STATIC, $staticField(PrintServiceLookupProvider, aix_defaultPrinterEnumeration)},
	{"UNINITIALIZED", "I", nullptr, $STATIC | $FINAL, $constField(PrintServiceLookupProvider, UNINITIALIZED)},
	{"BSD_LPD", "I", nullptr, $STATIC | $FINAL, $constField(PrintServiceLookupProvider, BSD_LPD)},
	{"BSD_LPD_NG", "I", nullptr, $STATIC | $FINAL, $constField(PrintServiceLookupProvider, BSD_LPD_NG)},
	{"cmdIndex", "I", nullptr, $STATIC, $staticField(PrintServiceLookupProvider, cmdIndex)},
	{"lpcFirstCom", "[Ljava/lang/String;", nullptr, 0, $field(PrintServiceLookupProvider, lpcFirstCom)},
	{"lpcAllCom", "[Ljava/lang/String;", nullptr, 0, $field(PrintServiceLookupProvider, lpcAllCom)},
	{"lpcNameCom", "[Ljava/lang/String;", nullptr, 0, $field(PrintServiceLookupProvider, lpcNameCom)},
	{}
};

$MethodInfo _PrintServiceLookupProvider_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrintServiceLookupProvider::*)()>(&PrintServiceLookupProvider::init$))},
	{"addPrintServiceToList", "(Ljava/util/ArrayList;Ljavax/print/PrintService;)I", "(Ljava/util/ArrayList<Ljavax/print/PrintService;>;Ljavax/print/PrintService;)I", $PRIVATE, $method(static_cast<int32_t(PrintServiceLookupProvider::*)($ArrayList*,$PrintService*)>(&PrintServiceLookupProvider::addPrintServiceToList))},
	{"checkPrinterName", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(PrintServiceLookupProvider::*)($String*)>(&PrintServiceLookupProvider::checkPrinterName))},
	{"copyOf", "([Ljavax/print/PrintService;)[Ljavax/print/PrintService;", nullptr, $PRIVATE, $method(static_cast<$PrintServiceArray*(PrintServiceLookupProvider::*)($PrintServiceArray*)>(&PrintServiceLookupProvider::copyOf))},
	{"execCmd", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)($String*)>(&PrintServiceLookupProvider::execCmd))},
	{"getAllPrinterNamesAIX", "()[Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$StringArray*(PrintServiceLookupProvider::*)()>(&PrintServiceLookupProvider::getAllPrinterNamesAIX))},
	{"getAllPrinterNamesBSD", "()[Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$StringArray*(PrintServiceLookupProvider::*)()>(&PrintServiceLookupProvider::getAllPrinterNamesBSD))},
	{"getAllPrinterNamesSysV", "()[Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$StringArray*(PrintServiceLookupProvider::*)()>(&PrintServiceLookupProvider::getAllPrinterNamesSysV))},
	{"getBSDCommandIndex", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&PrintServiceLookupProvider::getBSDCommandIndex))},
	{"getDefaultPrintService", "()Ljavax/print/PrintService;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDefaultPrinterNameAIX", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(PrintServiceLookupProvider::*)()>(&PrintServiceLookupProvider::getDefaultPrinterNameAIX))},
	{"getDefaultPrinterNameBSD", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(PrintServiceLookupProvider::*)()>(&PrintServiceLookupProvider::getDefaultPrinterNameBSD))},
	{"getDefaultPrinterNameSysV", "()Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)()>(&PrintServiceLookupProvider::getDefaultPrinterNameSysV))},
	{"getMultiDocPrintServices", "([Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)[Ljavax/print/MultiDocPrintService;", nullptr, $PUBLIC},
	{"getNamedPrinterNameAIX", "(Ljava/lang/String;)Ljavax/print/PrintService;", nullptr, $PRIVATE, $method(static_cast<$PrintService*(PrintServiceLookupProvider::*)($String*)>(&PrintServiceLookupProvider::getNamedPrinterNameAIX))},
	{"getNamedPrinterNameBSD", "(Ljava/lang/String;)Ljavax/print/PrintService;", nullptr, $PRIVATE, $method(static_cast<$PrintService*(PrintServiceLookupProvider::*)($String*)>(&PrintServiceLookupProvider::getNamedPrinterNameBSD))},
	{"getNamedPrinterNameSysV", "(Ljava/lang/String;)Ljavax/print/PrintService;", nullptr, $PRIVATE, $method(static_cast<$PrintService*(PrintServiceLookupProvider::*)($String*)>(&PrintServiceLookupProvider::getNamedPrinterNameSysV))},
	{"getPrintServices", "()[Ljavax/print/PrintService;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getPrintServices", "(Ljavax/print/attribute/PrintServiceAttributeSet;)[Ljavax/print/PrintService;", nullptr, $PRIVATE, $method(static_cast<$PrintServiceArray*(PrintServiceLookupProvider::*)($PrintServiceAttributeSet*)>(&PrintServiceLookupProvider::getPrintServices))},
	{"getPrintServices", "(Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)[Ljavax/print/PrintService;", nullptr, $PUBLIC},
	{"getPrinterDestName", "(Ljavax/print/PrintService;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(PrintServiceLookupProvider::*)($PrintService*)>(&PrintServiceLookupProvider::getPrinterDestName))},
	{"getServiceByName", "(Ljavax/print/attribute/standard/PrinterName;)Ljavax/print/PrintService;", nullptr, $PRIVATE, $method(static_cast<$PrintService*(PrintServiceLookupProvider::*)($PrinterName*)>(&PrintServiceLookupProvider::getServiceByName))},
	{"getServicesInbackground", "(Lsun/print/BackgroundLookupListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"isAIX", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&PrintServiceLookupProvider::isAIX))},
	{"isBSD", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&PrintServiceLookupProvider::isBSD))},
	{"isLinux", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&PrintServiceLookupProvider::isLinux))},
	{"isMac", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&PrintServiceLookupProvider::isMac))},
	{"matchesAttributes", "(Ljavax/print/PrintService;Ljavax/print/attribute/PrintServiceAttributeSet;)Z", nullptr, $PRIVATE, $method(static_cast<bool(PrintServiceLookupProvider::*)($PrintService*,$PrintServiceAttributeSet*)>(&PrintServiceLookupProvider::matchesAttributes))},
	{"refreshServices", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"run", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PrintServiceLookupProvider_InnerClassesInfo_[] = {
	{"sun.print.PrintServiceLookupProvider$PrinterChangeListener", "sun.print.PrintServiceLookupProvider", "PrinterChangeListener", $PRIVATE},
	{"sun.print.PrintServiceLookupProvider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrintServiceLookupProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.PrintServiceLookupProvider",
	"javax.print.PrintServiceLookup",
	"sun.print.BackgroundServiceLookup,java.lang.Runnable",
	_PrintServiceLookupProvider_FieldInfo_,
	_PrintServiceLookupProvider_MethodInfo_,
	nullptr,
	nullptr,
	_PrintServiceLookupProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.print.PrintServiceLookupProvider$PrinterChangeListener,sun.print.PrintServiceLookupProvider$1"
};

$Object* allocate$PrintServiceLookupProvider($Class* clazz) {
	return $of($alloc(PrintServiceLookupProvider));
}

int32_t PrintServiceLookupProvider::hashCode() {
	 return this->$PrintServiceLookup::hashCode();
}

bool PrintServiceLookupProvider::equals(Object$* arg0) {
	 return this->$PrintServiceLookup::equals(arg0);
}

$Object* PrintServiceLookupProvider::clone() {
	 return this->$PrintServiceLookup::clone();
}

$String* PrintServiceLookupProvider::toString() {
	 return this->$PrintServiceLookup::toString();
}

void PrintServiceLookupProvider::finalize() {
	this->$PrintServiceLookup::finalize();
}

$String* PrintServiceLookupProvider::debugPrefix = nullptr;
bool PrintServiceLookupProvider::pollServices = false;
int32_t PrintServiceLookupProvider::minRefreshTime = 0;
$String* PrintServiceLookupProvider::osname = nullptr;
int32_t PrintServiceLookupProvider::aix_defaultPrinterEnumeration = 0;
int32_t PrintServiceLookupProvider::cmdIndex = 0;

bool PrintServiceLookupProvider::isMac() {
	$init(PrintServiceLookupProvider);
	return $nc(PrintServiceLookupProvider::osname)->startsWith("Mac"_s);
}

bool PrintServiceLookupProvider::isLinux() {
	$init(PrintServiceLookupProvider);
	return ($nc(PrintServiceLookupProvider::osname)->equals("Linux"_s));
}

bool PrintServiceLookupProvider::isBSD() {
	$init(PrintServiceLookupProvider);
	bool var$0 = $nc(PrintServiceLookupProvider::osname)->equals("Linux"_s);
	return (var$0 || $nc(PrintServiceLookupProvider::osname)->contains("OS X"_s));
}

bool PrintServiceLookupProvider::isAIX() {
	$init(PrintServiceLookupProvider);
	return $nc(PrintServiceLookupProvider::osname)->equals("AIX"_s);
}

int32_t PrintServiceLookupProvider::getBSDCommandIndex() {
	$init(PrintServiceLookupProvider);
	$useLocalCurrentObjectStackCache();
	$var($String, command, "/usr/sbin/lpc status all"_s);
	$var($StringArray, names, execCmd(command));
	if ((names == nullptr) || ($nc(names)->length == 0)) {
		return PrintServiceLookupProvider::BSD_LPD_NG;
	}
	for (int32_t i = 0; i < $nc(names)->length; ++i) {
		if ($nc(names->get(i))->indexOf((int32_t)u'@') != -1) {
			return PrintServiceLookupProvider::BSD_LPD_NG;
		}
	}
	return PrintServiceLookupProvider::BSD_LPD;
}

void PrintServiceLookupProvider::init$() {
	$useLocalCurrentObjectStackCache();
	$PrintServiceLookup::init$();
	$set(this, lookupListeners, nullptr);
	$set(this, lpNameComAix, $new($StringArray, {
		"/usr/bin/lsallq"_s,
		"/usr/bin/lpstat -W -p|/usr/bin/expand|/usr/bin/cut -f1 -d\' \'"_s,
		"/usr/bin/lpstat -W -d|/usr/bin/expand|/usr/bin/cut -f1 -d\' \'"_s,
		"/usr/bin/lpstat -W -v"_s
	}));
	$set(this, lpcFirstCom, $new($StringArray, {
		"/usr/sbin/lpc status | grep : | sed -ne \'1,1 s/://p\'"_s,
		"/usr/sbin/lpc status | grep -E \'^[ 0-9a-zA-Z_-]*@\' | awk -F\'@\' \'{print $1}\'"_s
	}));
	$set(this, lpcAllCom, $new($StringArray, {
		"/usr/sbin/lpc status all | grep : | sed -e \'s/://\'"_s,
		"/usr/sbin/lpc status all | grep -E \'^[ 0-9a-zA-Z_-]*@\' | awk -F\'@\' \'{print $1}\' | sort"_s
	}));
	$set(this, lpcNameCom, $new($StringArray, {
		"| grep : | sed -ne \'s/://p\'"_s,
		"| grep -E \'^[ 0-9a-zA-Z_-]*@\' | awk -F\'@\' \'{print $1}\'"_s
	}));
	if (PrintServiceLookupProvider::pollServices) {
		$var($Thread, thr, $new($Thread, nullptr, $$new($PrintServiceLookupProvider$PrinterChangeListener, this), "PrinterListener"_s, 0, false));
		thr->setDaemon(true);
		thr->start();
		$IPPPrintService::debug_println($$str({PrintServiceLookupProvider::debugPrefix, "polling turned on"_s}));
	}
}

$PrintServiceArray* PrintServiceLookupProvider::getPrintServices() {
	$synchronized(this) {
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkPrintJobAccess();
		}
		if (this->printServices == nullptr || !PrintServiceLookupProvider::pollServices) {
			refreshServices();
		}
		if (this->printServices == nullptr) {
			return $new($PrintServiceArray, 0);
		} else {
			return $cast($PrintServiceArray, $nc(this->printServices)->clone());
		}
	}
}

int32_t PrintServiceLookupProvider::addPrintServiceToList($ArrayList* printerList, $PrintService* ps) {
	$useLocalCurrentObjectStackCache();
	int32_t index = $nc(printerList)->indexOf(ps);
	if ($CUPSPrinter::isCupsRunning() && index != -1) {
		$load($PrinterURI);
		$var($PrinterURI, uri, $cast($PrinterURI, $nc(ps)->getAttribute($PrinterURI::class$)));
		if ($nc($($nc($($nc(uri)->getURI()))->getHost()))->equals("localhost"_s)) {
			$IPPPrintService::debug_println($$str({PrintServiceLookupProvider::debugPrefix, "duplicate PrintService, ignoring the new local printer: "_s, ps}));
			return index;
		}
		$var($PrintService, oldPS, $cast($PrintService, printerList->get(index)));
		$assign(uri, $cast($PrinterURI, $nc(oldPS)->getAttribute($PrinterURI::class$)));
		if ($nc($($nc($($nc(uri)->getURI()))->getHost()))->equals("localhost"_s)) {
			$IPPPrintService::debug_println($$str({PrintServiceLookupProvider::debugPrefix, "duplicate PrintService, removing existing local printer: "_s, oldPS}));
			printerList->remove($of(oldPS));
		} else {
			return index;
		}
	}
	printerList->add(ps);
	return (printerList->size() - 1);
}

void PrintServiceLookupProvider::refreshServices() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($StringArray, printers, nullptr);
		$var($StringArray, printerURIs, nullptr);
		try {
			getDefaultPrintService();
		} catch ($Throwable& t) {
			$IPPPrintService::debug_println($$str({PrintServiceLookupProvider::debugPrefix, "Exception getting default printer : "_s, t}));
		}
		if ($CUPSPrinter::isCupsRunning()) {
			try {
				$assign(printerURIs, $CUPSPrinter::getAllPrinters());
				$IPPPrintService::debug_println($$str({"CUPS URIs = "_s, printerURIs}));
				if (printerURIs != nullptr) {
					for (int32_t p = 0; p < printerURIs->length; ++p) {
						$IPPPrintService::debug_println($$str({"URI="_s, printerURIs->get(p)}));
					}
				}
			} catch ($Throwable& t) {
				$IPPPrintService::debug_println($$str({PrintServiceLookupProvider::debugPrefix, "Exception getting all CUPS printers : "_s, t}));
			}
			if ((printerURIs != nullptr) && (printerURIs->length > 0)) {
				$assign(printers, $new($StringArray, printerURIs->length));
				for (int32_t i = 0; i < printerURIs->length; ++i) {
					int32_t lastIndex = $nc(printerURIs->get(i))->lastIndexOf("/"_s);
					printers->set(i, $($nc(printerURIs->get(i))->substring(lastIndex + 1)));
				}
			}
		} else if (isMac()) {
			$assign(printers, getAllPrinterNamesSysV());
		} else if (isAIX()) {
			$assign(printers, getAllPrinterNamesAIX());
		} else {
			$assign(printers, getAllPrinterNamesBSD());
		}
		if (printers == nullptr) {
			if (this->defaultPrintService != nullptr) {
				$set(this, printServices, $new($PrintServiceArray, 1));
				$nc(this->printServices)->set(0, this->defaultPrintService);
			} else {
				$set(this, printServices, nullptr);
			}
			return;
		}
		$var($ArrayList, printerList, $new($ArrayList));
		int32_t defaultIndex = -1;
		for (int32_t p = 0; p < $nc(printers)->length; ++p) {
			if (printers->get(p) == nullptr) {
				continue;
			}
			if ((this->defaultPrintService != nullptr) && $nc(printers->get(p))->equals($(getPrinterDestName(this->defaultPrintService)))) {
				defaultIndex = addPrintServiceToList(printerList, this->defaultPrintService);
			} else if (this->printServices == nullptr) {
				$IPPPrintService::debug_println($$str({PrintServiceLookupProvider::debugPrefix, "total# of printers = "_s, $$str(printers->length)}));
				if ($CUPSPrinter::isCupsRunning()) {
					try {
						addPrintServiceToList(printerList, $$new($IPPPrintService, printers->get(p), $nc(printerURIs)->get(p), true));
					} catch ($Exception& e) {
						$IPPPrintService::debug_println($$str({PrintServiceLookupProvider::debugPrefix, " getAllPrinters Exception "_s, e}));
					}
				} else {
					printerList->add($$new($UnixPrintService, printers->get(p)));
				}
			} else {
				int32_t j = 0;
				for (j = 0; j < $nc(this->printServices)->length; ++j) {
					if ($nc(this->printServices)->get(j) != nullptr) {
						if ($nc(printers->get(p))->equals($(getPrinterDestName($nc(this->printServices)->get(j))))) {
							printerList->add($nc(this->printServices)->get(j));
							$nc(this->printServices)->set(j, nullptr);
							break;
						}
					}
				}
				if (j == $nc(this->printServices)->length) {
					if ($CUPSPrinter::isCupsRunning()) {
						try {
							addPrintServiceToList(printerList, $$new($IPPPrintService, printers->get(p), $nc(printerURIs)->get(p), true));
						} catch ($Exception& e) {
							$IPPPrintService::debug_println($$str({PrintServiceLookupProvider::debugPrefix, " getAllPrinters Exception "_s, e}));
						}
					} else {
						printerList->add($$new($UnixPrintService, printers->get(p)));
					}
				}
			}
		}
		if (this->printServices != nullptr) {
			for (int32_t j = 0; j < $nc(this->printServices)->length; ++j) {
				if (($instanceOf($UnixPrintService, $nc(this->printServices)->get(j))) && (!$nc($nc(this->printServices)->get(j))->equals(this->defaultPrintService))) {
					$nc(($cast($UnixPrintService, $nc(this->printServices)->get(j))))->invalidateService();
				}
			}
		}
		if (defaultIndex == -1 && this->defaultPrintService != nullptr) {
			defaultIndex = addPrintServiceToList(printerList, this->defaultPrintService);
		}
		$set(this, printServices, $fcast($PrintServiceArray, printerList->toArray($$new($PrintServiceArray, 0))));
		if (defaultIndex > 0) {
			$var($PrintService, saveService, $nc(this->printServices)->get(0));
			$nc(this->printServices)->set(0, $nc(this->printServices)->get(defaultIndex));
			$nc(this->printServices)->set(defaultIndex, saveService);
		}
	}
}

bool PrintServiceLookupProvider::matchesAttributes($PrintService* service, $PrintServiceAttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeArray, attrs, $nc(attributes)->toArray());
	for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
		$var($Attribute, serviceAttr, $nc(service)->getAttribute($nc(attrs->get(i))->getCategory()));
		if (serviceAttr == nullptr || !$nc($of(serviceAttr))->equals(attrs->get(i))) {
			return false;
		}
	}
	return true;
}

bool PrintServiceLookupProvider::checkPrinterName($String* s) {
	char16_t c = 0;
	for (int32_t i = 0; i < $nc(s)->length(); ++i) {
		c = s->charAt(i);
		if ($Character::isLetterOrDigit(c) || c == u'-' || c == u'_' || c == u'.' || c == u'/') {
			continue;
		} else {
			return false;
		}
	}
	return true;
}

$String* PrintServiceLookupProvider::getPrinterDestName($PrintService* ps) {
	if (isMac()) {
		return $nc(($cast($IPPPrintService, ps)))->getDest();
	}
	return $nc(ps)->getName();
}

$PrintService* PrintServiceLookupProvider::getServiceByName($PrinterName* nameAttr) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(nameAttr)->getValue());
	bool var$0 = name == nullptr || $nc(name)->isEmpty();
	if (var$0 || !checkPrinterName(name)) {
		return nullptr;
	}
	if (this->printServices != nullptr) {
		{
			$var($PrintServiceArray, arr$, this->printServices);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($PrintService, printService, arr$->get(i$));
				{
					$var($PrinterName, printerName, $cast($PrinterName, $nc(printService)->getAttribute($PrinterName::class$)));
					if ($nc($($nc(printerName)->getValue()))->equals(name)) {
						return printService;
					}
				}
			}
		}
	}
	if ($CUPSPrinter::isCupsRunning()) {
		try {
			$var($String, var$3, $$str({"http://"_s, $($CUPSPrinter::getServer()), ":"_s}));
			$var($String, var$2, $$concat(var$3, $$str($CUPSPrinter::getPort())));
			$var($String, var$1, $$concat(var$2, "/"_s));
			return $new($IPPPrintService, name, $$new($URL, $$concat(var$1, name)));
		} catch ($Exception& e) {
			$IPPPrintService::debug_println($$str({PrintServiceLookupProvider::debugPrefix, " getServiceByName Exception "_s, e}));
		}
	}
	$var($PrintService, printer, nullptr);
	if (isMac()) {
		$assign(printer, getNamedPrinterNameSysV(name));
	} else if (isAIX()) {
		$assign(printer, getNamedPrinterNameAIX(name));
	} else {
		$assign(printer, getNamedPrinterNameBSD(name));
	}
	return printer;
}

$PrintServiceArray* PrintServiceLookupProvider::getPrintServices($PrintServiceAttributeSet* serviceSet) {
	$useLocalCurrentObjectStackCache();
	if (serviceSet == nullptr || $nc(serviceSet)->isEmpty()) {
		return getPrintServices();
	}
	$var($PrintServiceArray, services, nullptr);
	$load($PrinterName);
	$var($PrinterName, name, $cast($PrinterName, $nc(serviceSet)->get($PrinterName::class$)));
	$var($PrintService, defService, nullptr);
	if (name != nullptr && ($assign(defService, getDefaultPrintService())) != nullptr) {
		$var($PrinterName, defName, $cast($PrinterName, $nc(defService)->getAttribute($PrinterName::class$)));
		if (defName != nullptr && name->equals(defName)) {
			if (matchesAttributes(defService, serviceSet)) {
				$assign(services, $new($PrintServiceArray, 1));
				services->set(0, defService);
				return services;
			} else {
				return $new($PrintServiceArray, 0);
			}
		} else {
			$var($PrintService, service, getServiceByName(name));
			if (service != nullptr && matchesAttributes(service, serviceSet)) {
				$assign(services, $new($PrintServiceArray, 1));
				services->set(0, service);
				return services;
			} else {
				return $new($PrintServiceArray, 0);
			}
		}
	} else {
		$var($Vector, matchedServices, $new($Vector));
		$assign(services, getPrintServices());
		for (int32_t i = 0; i < $nc(services)->length; ++i) {
			if (matchesAttributes(services->get(i), serviceSet)) {
				matchedServices->add(services->get(i));
			}
		}
		$assign(services, $new($PrintServiceArray, matchedServices->size()));
		for (int32_t i = 0; i < services->length; ++i) {
			services->set(i, $cast($PrintService, $(matchedServices->elementAt(i))));
		}
		return services;
	}
}

$PrintServiceArray* PrintServiceLookupProvider::getPrintServices($DocFlavor* flavor, $AttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPrintJobAccess();
	}
	$var($PrintRequestAttributeSet, requestSet, nullptr);
	$var($PrintServiceAttributeSet, serviceSet, nullptr);
	if (attributes != nullptr && !attributes->isEmpty()) {
		$assign(requestSet, $new($HashPrintRequestAttributeSet));
		$assign(serviceSet, $new($HashPrintServiceAttributeSet));
		$var($AttributeArray, attrs, attributes->toArray());
		for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
			if ($instanceOf($PrintRequestAttribute, attrs->get(i))) {
				requestSet->add(attrs->get(i));
			} else if ($instanceOf($PrintServiceAttribute, attrs->get(i))) {
				serviceSet->add(attrs->get(i));
			}
		}
	}
	$var($PrintServiceArray, services, getPrintServices(serviceSet));
	if ($nc(services)->length == 0) {
		return services;
	}
	if ($CUPSPrinter::isCupsRunning()) {
		$var($ArrayList, matchingServices, $new($ArrayList));
		for (int32_t i = 0; i < $nc(services)->length; ++i) {
			try {
				if ($nc(services->get(i))->getUnsupportedAttributes(flavor, requestSet) == nullptr) {
					matchingServices->add(services->get(i));
				}
			} catch ($IllegalArgumentException& e) {
			}
		}
		$assign(services, $new($PrintServiceArray, matchingServices->size()));
		return $fcast($PrintServiceArray, matchingServices->toArray(services));
	} else {
		$var($PrintService, service, $nc(services)->get(0));
		bool var$0 = (flavor == nullptr || $nc(service)->isDocFlavorSupported(flavor));
		if (var$0 && service->getUnsupportedAttributes(flavor, requestSet) == nullptr) {
			return services;
		} else {
			return $new($PrintServiceArray, 0);
		}
	}
}

$MultiDocPrintServiceArray* PrintServiceLookupProvider::getMultiDocPrintServices($DocFlavorArray* flavors, $AttributeSet* attributes) {
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPrintJobAccess();
	}
	return $new($MultiDocPrintServiceArray, 0);
}

$PrintService* PrintServiceLookupProvider::getDefaultPrintService() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkPrintJobAccess();
		}
		$set(this, defaultPrintService, nullptr);
		$var($String, psuri, nullptr);
		$IPPPrintService::debug_println($$str({"isRunning ? "_s, $$str(($CUPSPrinter::isCupsRunning()))}));
		if ($CUPSPrinter::isCupsRunning()) {
			$var($StringArray, printerInfo, $CUPSPrinter::getDefaultPrinter());
			if (printerInfo != nullptr && printerInfo->length >= 2) {
				$set(this, defaultPrinter, printerInfo->get(0));
				$assign(psuri, printerInfo->get(1));
			}
		} else if (isMac()) {
			$set(this, defaultPrinter, getDefaultPrinterNameSysV());
		} else if (isAIX()) {
			$set(this, defaultPrinter, getDefaultPrinterNameAIX());
		} else {
			$set(this, defaultPrinter, getDefaultPrinterNameBSD());
		}
		if (this->defaultPrinter == nullptr) {
			return nullptr;
		}
		$set(this, defaultPrintService, nullptr);
		if (this->printServices != nullptr) {
			for (int32_t j = 0; j < $nc(this->printServices)->length; ++j) {
				if ($nc(this->defaultPrinter)->equals($(getPrinterDestName($nc(this->printServices)->get(j))))) {
					$set(this, defaultPrintService, $nc(this->printServices)->get(j));
					break;
				}
			}
		}
		if (this->defaultPrintService == nullptr) {
			if ($CUPSPrinter::isCupsRunning()) {
				try {
					$var($PrintService, defaultPS, nullptr);
					if ((psuri != nullptr) && !psuri->startsWith("file"_s)) {
						$assign(defaultPS, $new($IPPPrintService, this->defaultPrinter, psuri, true));
					} else {
						$var($String, var$2, $$str({"http://"_s, $($CUPSPrinter::getServer()), ":"_s}));
						$var($String, var$1, $$concat(var$2, $$str($CUPSPrinter::getPort())));
						$var($String, var$0, $$concat(var$1, "/"_s));
						$assign(defaultPS, $new($IPPPrintService, this->defaultPrinter, $$new($URL, $$concat(var$0, this->defaultPrinter))));
					}
					$set(this, defaultPrintService, defaultPS);
				} catch ($Exception& e) {
				}
			} else {
				$set(this, defaultPrintService, $new($UnixPrintService, this->defaultPrinter));
			}
		}
		return this->defaultPrintService;
	}
}

void PrintServiceLookupProvider::getServicesInbackground($BackgroundLookupListener* listener) {
	$synchronized(this) {
		if (this->printServices != nullptr) {
			$nc(listener)->notifyServices(this->printServices);
		} else if (this->lookupListeners == nullptr) {
			$set(this, lookupListeners, $new($Vector));
			$nc(this->lookupListeners)->add(listener);
			$var($Thread, lookupThread, $new($Thread, static_cast<$Runnable*>(this)));
			lookupThread->start();
		} else {
			$nc(this->lookupListeners)->add(listener);
		}
	}
}

$PrintServiceArray* PrintServiceLookupProvider::copyOf($PrintServiceArray* inArr) {
	if (inArr == nullptr || $nc(inArr)->length == 0) {
		return inArr;
	} else {
		$var($PrintServiceArray, outArr, $new($PrintServiceArray, inArr->length));
		$System::arraycopy(inArr, 0, outArr, 0, inArr->length);
		return outArr;
	}
}

void PrintServiceLookupProvider::run() {
	$useLocalCurrentObjectStackCache();
	$var($PrintServiceArray, services, getPrintServices());
	$synchronized(this) {
		$var($BackgroundLookupListener, listener, nullptr);
		for (int32_t i = 0; i < $nc(this->lookupListeners)->size(); ++i) {
			$assign(listener, $cast($BackgroundLookupListener, $nc(this->lookupListeners)->elementAt(i)));
			$nc(listener)->notifyServices($(copyOf(services)));
		}
		$set(this, lookupListeners, nullptr);
	}
}

$String* PrintServiceLookupProvider::getDefaultPrinterNameBSD() {
	if (PrintServiceLookupProvider::cmdIndex == PrintServiceLookupProvider::UNINITIALIZED) {
		PrintServiceLookupProvider::cmdIndex = getBSDCommandIndex();
	}
	$var($StringArray, names, execCmd($nc(this->lpcFirstCom)->get(PrintServiceLookupProvider::cmdIndex)));
	if (names == nullptr || $nc(names)->length == 0) {
		return nullptr;
	}
	if ((PrintServiceLookupProvider::cmdIndex == PrintServiceLookupProvider::BSD_LPD_NG) && ($nc($nc(names)->get(0))->startsWith("missingprinter"_s))) {
		return nullptr;
	}
	return $nc(names)->get(0);
}

$PrintService* PrintServiceLookupProvider::getNamedPrinterNameBSD($String* name) {
	$useLocalCurrentObjectStackCache();
	if (PrintServiceLookupProvider::cmdIndex == PrintServiceLookupProvider::UNINITIALIZED) {
		PrintServiceLookupProvider::cmdIndex = getBSDCommandIndex();
	}
	$var($String, command, $str({"/usr/sbin/lpc status "_s, name, $nc(this->lpcNameCom)->get(PrintServiceLookupProvider::cmdIndex)}));
	$var($StringArray, result, execCmd(command));
	if (result == nullptr || !($nc($nc(result)->get(0))->equals(name))) {
		return nullptr;
	}
	return $new($UnixPrintService, name);
}

$StringArray* PrintServiceLookupProvider::getAllPrinterNamesBSD() {
	if (PrintServiceLookupProvider::cmdIndex == PrintServiceLookupProvider::UNINITIALIZED) {
		PrintServiceLookupProvider::cmdIndex = getBSDCommandIndex();
	}
	$var($StringArray, names, execCmd($nc(this->lpcAllCom)->get(PrintServiceLookupProvider::cmdIndex)));
	if (names == nullptr || $nc(names)->length == 0) {
		return nullptr;
	}
	return names;
}

$String* PrintServiceLookupProvider::getDefaultPrinterNameSysV() {
	$init(PrintServiceLookupProvider);
	$useLocalCurrentObjectStackCache();
	$var($String, defaultPrinter, "lp"_s);
	$var($String, command, "/usr/bin/lpstat -d"_s);
	$var($StringArray, names, execCmd(command));
	if (names == nullptr || $nc(names)->length == 0) {
		return defaultPrinter;
	} else {
		int32_t index = $nc(names->get(0))->indexOf(":"_s);
		if (index == -1 || ($nc(names->get(0))->length() <= index + 1)) {
			return nullptr;
		} else {
			$var($String, name, $($nc(names->get(0))->substring(index + 1))->trim());
			if (name->length() == 0) {
				return nullptr;
			} else {
				return name;
			}
		}
	}
}

$PrintService* PrintServiceLookupProvider::getNamedPrinterNameSysV($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($String, command, $str({"/usr/bin/lpstat -v "_s, name}));
	$var($StringArray, result, execCmd(command));
	if (result == nullptr || $nc($nc(result)->get(0))->indexOf("unknown printer"_s) > 0) {
		return nullptr;
	} else {
		return $new($UnixPrintService, name);
	}
}

$StringArray* PrintServiceLookupProvider::getAllPrinterNamesSysV() {
	$useLocalCurrentObjectStackCache();
	$var($String, defaultPrinter, "lp"_s);
	$var($String, command, "/usr/bin/lpstat -v|/usr/bin/expand|/usr/bin/cut -f3 -d\' \' |/usr/bin/cut -f1 -d\':\' | /usr/bin/sort"_s);
	$var($StringArray, names, execCmd(command));
	$var($ArrayList, printerNames, $new($ArrayList));
	for (int32_t i = 0; i < $nc(names)->length; ++i) {
		bool var$1 = !$nc(names->get(i))->equals("_default"_s);
		bool var$0 = var$1 && !$nc(names->get(i))->equals(defaultPrinter);
		if (var$0 && !$nc(names->get(i))->isEmpty()) {
			printerNames->add(names->get(i));
		}
	}
	return $fcast($StringArray, printerNames->toArray($$new($StringArray, printerNames->size())));
}

$String* PrintServiceLookupProvider::getDefaultPrinterNameAIX() {
	$var($StringArray, names, execCmd($nc(this->lpNameComAix)->get(PrintServiceLookupProvider::aix_lpstat_d)));
	$assign(names, $UnixPrintService::filterPrinterNamesAIX(names));
	if (names == nullptr || $nc(names)->length != 1) {
		return nullptr;
	} else {
		return names->get(0);
	}
}

$PrintService* PrintServiceLookupProvider::getNamedPrinterNameAIX($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, result, execCmd($$str({$nc(this->lpNameComAix)->get(PrintServiceLookupProvider::aix_lpstat_v), name})));
	$assign(result, $UnixPrintService::filterPrinterNamesAIX(result));
	if (result == nullptr || $nc(result)->length != 1) {
		return nullptr;
	} else {
		return $new($UnixPrintService, name);
	}
}

$StringArray* PrintServiceLookupProvider::getAllPrinterNamesAIX() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, names, execCmd($nc(this->lpNameComAix)->get(PrintServiceLookupProvider::aix_defaultPrinterEnumeration)));
	$assign(names, $UnixPrintService::filterPrinterNamesAIX(names));
	$var($ArrayList, printerNames, $new($ArrayList));
	for (int32_t i = 0; i < $nc(names)->length; ++i) {
		printerNames->add(names->get(i));
	}
	return $fcast($StringArray, printerNames->toArray($$new($StringArray, printerNames->size())));
}

$StringArray* PrintServiceLookupProvider::execCmd($String* command) {
	$init(PrintServiceLookupProvider);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ArrayList, results, nullptr);
	try {
		$var($StringArray, cmd, $new($StringArray, 3));
		if (isAIX()) {
			cmd->set(0, "/usr/bin/sh"_s);
			cmd->set(1, "-c"_s);
			cmd->set(2, $$str({"env LC_ALL=C "_s, command}));
		} else {
			cmd->set(0, "/bin/sh"_s);
			cmd->set(1, "-c"_s);
			cmd->set(2, $$str({"LC_ALL=C "_s, command}));
		}
		$assign(results, $cast($ArrayList, $AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($PrintServiceLookupProvider$1, cmd)))));
	} catch ($PrivilegedActionException& e) {
	}
	if (results == nullptr) {
		return $new($StringArray, 0);
	} else {
		return $fcast($StringArray, $nc(results)->toArray($$new($StringArray, results->size())));
	}
}

void clinit$PrintServiceLookupProvider($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$assignStatic(PrintServiceLookupProvider::debugPrefix, "PrintServiceLookupProvider>> "_s);
	PrintServiceLookupProvider::pollServices = true;
	PrintServiceLookupProvider::minRefreshTime = PrintServiceLookupProvider::DEFAULT_MINREFRESH;
	PrintServiceLookupProvider::aix_defaultPrinterEnumeration = PrintServiceLookupProvider::aix_lsallq;
	{
		$var($String, pollStr, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.java2d.print.polling"_s)))));
		if (pollStr != nullptr) {
			if (pollStr->equalsIgnoreCase("true"_s)) {
				PrintServiceLookupProvider::pollServices = true;
			} else if (pollStr->equalsIgnoreCase("false"_s)) {
				PrintServiceLookupProvider::pollServices = false;
			}
		}
		$var($String, refreshTimeStr, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.java2d.print.minRefreshTime"_s)))));
		if (refreshTimeStr != nullptr) {
			try {
				PrintServiceLookupProvider::minRefreshTime = $nc(($($Integer::valueOf(refreshTimeStr))))->intValue();
			} catch ($NumberFormatException& e) {
			}
			if (PrintServiceLookupProvider::minRefreshTime < PrintServiceLookupProvider::DEFAULT_MINREFRESH) {
				PrintServiceLookupProvider::minRefreshTime = PrintServiceLookupProvider::DEFAULT_MINREFRESH;
			}
		}
		$assignStatic(PrintServiceLookupProvider::osname, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "os.name"_s)))));
		if (PrintServiceLookupProvider::isAIX()) {
			$var($String, aixPrinterEnumerator, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.java2d.print.aix.lpstat"_s)))));
			if (aixPrinterEnumerator != nullptr) {
				if (aixPrinterEnumerator->equalsIgnoreCase("lpstat"_s)) {
					PrintServiceLookupProvider::aix_defaultPrinterEnumeration = PrintServiceLookupProvider::aix_lpstat_p;
				} else if (aixPrinterEnumerator->equalsIgnoreCase("lsallq"_s)) {
					PrintServiceLookupProvider::aix_defaultPrinterEnumeration = PrintServiceLookupProvider::aix_lsallq;
				}
			}
		}
	}
	PrintServiceLookupProvider::cmdIndex = PrintServiceLookupProvider::UNINITIALIZED;
}

PrintServiceLookupProvider::PrintServiceLookupProvider() {
}

$Class* PrintServiceLookupProvider::load$($String* name, bool initialize) {
	$loadClass(PrintServiceLookupProvider, name, initialize, &_PrintServiceLookupProvider_ClassInfo_, clinit$PrintServiceLookupProvider, allocate$PrintServiceLookupProvider);
	return class$;
}

$Class* PrintServiceLookupProvider::class$ = nullptr;

	} // print
} // sun