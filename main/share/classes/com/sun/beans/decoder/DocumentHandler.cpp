#include <com/sun/beans/decoder/DocumentHandler.h>

#include <com/sun/beans/decoder/ArrayElementHandler.h>
#include <com/sun/beans/decoder/BooleanElementHandler.h>
#include <com/sun/beans/decoder/ByteElementHandler.h>
#include <com/sun/beans/decoder/CharElementHandler.h>
#include <com/sun/beans/decoder/ClassElementHandler.h>
#include <com/sun/beans/decoder/DocumentHandler$1.h>
#include <com/sun/beans/decoder/DoubleElementHandler.h>
#include <com/sun/beans/decoder/ElementHandler.h>
#include <com/sun/beans/decoder/FalseElementHandler.h>
#include <com/sun/beans/decoder/FieldElementHandler.h>
#include <com/sun/beans/decoder/FloatElementHandler.h>
#include <com/sun/beans/decoder/IntElementHandler.h>
#include <com/sun/beans/decoder/JavaElementHandler.h>
#include <com/sun/beans/decoder/LongElementHandler.h>
#include <com/sun/beans/decoder/MethodElementHandler.h>
#include <com/sun/beans/decoder/NewElementHandler.h>
#include <com/sun/beans/decoder/NullElementHandler.h>
#include <com/sun/beans/decoder/ObjectElementHandler.h>
#include <com/sun/beans/decoder/PropertyElementHandler.h>
#include <com/sun/beans/decoder/ShortElementHandler.h>
#include <com/sun/beans/decoder/StringElementHandler.h>
#include <com/sun/beans/decoder/TrueElementHandler.h>
#include <com/sun/beans/decoder/VarElementHandler.h>
#include <com/sun/beans/decoder/VoidElementHandler.h>
#include <com/sun/beans/finder/ClassFinder.h>
#include <java/beans/ExceptionListener.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/WeakReference.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jdk/internal/access/JavaSecurityAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

using $ArrayElementHandler = ::com::sun::beans::decoder::ArrayElementHandler;
using $BooleanElementHandler = ::com::sun::beans::decoder::BooleanElementHandler;
using $ByteElementHandler = ::com::sun::beans::decoder::ByteElementHandler;
using $CharElementHandler = ::com::sun::beans::decoder::CharElementHandler;
using $ClassElementHandler = ::com::sun::beans::decoder::ClassElementHandler;
using $DocumentHandler$1 = ::com::sun::beans::decoder::DocumentHandler$1;
using $DoubleElementHandler = ::com::sun::beans::decoder::DoubleElementHandler;
using $ElementHandler = ::com::sun::beans::decoder::ElementHandler;
using $FalseElementHandler = ::com::sun::beans::decoder::FalseElementHandler;
using $FieldElementHandler = ::com::sun::beans::decoder::FieldElementHandler;
using $FloatElementHandler = ::com::sun::beans::decoder::FloatElementHandler;
using $IntElementHandler = ::com::sun::beans::decoder::IntElementHandler;
using $JavaElementHandler = ::com::sun::beans::decoder::JavaElementHandler;
using $LongElementHandler = ::com::sun::beans::decoder::LongElementHandler;
using $MethodElementHandler = ::com::sun::beans::decoder::MethodElementHandler;
using $NewElementHandler = ::com::sun::beans::decoder::NewElementHandler;
using $NullElementHandler = ::com::sun::beans::decoder::NullElementHandler;
using $ObjectElementHandler = ::com::sun::beans::decoder::ObjectElementHandler;
using $PropertyElementHandler = ::com::sun::beans::decoder::PropertyElementHandler;
using $ShortElementHandler = ::com::sun::beans::decoder::ShortElementHandler;
using $StringElementHandler = ::com::sun::beans::decoder::StringElementHandler;
using $TrueElementHandler = ::com::sun::beans::decoder::TrueElementHandler;
using $VarElementHandler = ::com::sun::beans::decoder::VarElementHandler;
using $VoidElementHandler = ::com::sun::beans::decoder::VoidElementHandler;
using $ClassFinder = ::com::sun::beans::finder::ClassFinder;
using $ExceptionListener = ::java::beans::ExceptionListener;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $JavaSecurityAccess = ::jdk::internal::access::JavaSecurityAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $Attributes = ::org::xml::sax::Attributes;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;
using $DefaultHandler = ::org::xml::sax::helpers::DefaultHandler;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$FieldInfo _DocumentHandler_FieldInfo_[] = {
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $FINAL, $field(DocumentHandler, acc)},
	{"handlers", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<+Lcom/sun/beans/decoder/ElementHandler;>;>;", $PRIVATE | $FINAL, $field(DocumentHandler, handlers)},
	{"environment", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(DocumentHandler, environment)},
	{"objects", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(DocumentHandler, objects)},
	{"loader", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<Ljava/lang/ClassLoader;>;", $PRIVATE, $field(DocumentHandler, loader)},
	{"listener", "Ljava/beans/ExceptionListener;", nullptr, $PRIVATE, $field(DocumentHandler, listener)},
	{"owner", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(DocumentHandler, owner)},
	{"handler", "Lcom/sun/beans/decoder/ElementHandler;", nullptr, $PRIVATE, $field(DocumentHandler, handler)},
	{}
};

$MethodInfo _DocumentHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DocumentHandler::*)()>(&DocumentHandler::init$))},
	{"addObject", "(Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(DocumentHandler::*)(Object$*)>(&DocumentHandler::addObject))},
	{"characters", "([CII)V", nullptr, $PUBLIC},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"findClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC, $method(static_cast<$Class*(DocumentHandler::*)($String*)>(&DocumentHandler::findClass))},
	{"getClassLoader", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $method(static_cast<$ClassLoader*(DocumentHandler::*)()>(&DocumentHandler::getClassLoader))},
	{"getElementHandler", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<+Lcom/sun/beans/decoder/ElementHandler;>;", $PUBLIC, $method(static_cast<$Class*(DocumentHandler::*)($String*)>(&DocumentHandler::getElementHandler))},
	{"getExceptionListener", "()Ljava/beans/ExceptionListener;", nullptr, $PUBLIC, $method(static_cast<$ExceptionListener*(DocumentHandler::*)()>(&DocumentHandler::getExceptionListener))},
	{"getObjects", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$ObjectArray*(DocumentHandler::*)()>(&DocumentHandler::getObjects))},
	{"getOwner", "()Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(DocumentHandler::*)()>(&DocumentHandler::getOwner))},
	{"getVariable", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(DocumentHandler::*)($String*)>(&DocumentHandler::getVariable))},
	{"handleException", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(DocumentHandler::*)($Exception*)>(&DocumentHandler::handleException))},
	{"hasVariable", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $method(static_cast<bool(DocumentHandler::*)($String*)>(&DocumentHandler::hasVariable))},
	{"parse", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC, $method(static_cast<void(DocumentHandler::*)($InputSource*)>(&DocumentHandler::parse))},
	{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC},
	{"setClassLoader", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(static_cast<void(DocumentHandler::*)($ClassLoader*)>(&DocumentHandler::setClassLoader))},
	{"setElementHandler", "(Ljava/lang/String;Ljava/lang/Class;)V", "(Ljava/lang/String;Ljava/lang/Class<+Lcom/sun/beans/decoder/ElementHandler;>;)V", $PUBLIC, $method(static_cast<void(DocumentHandler::*)($String*,$Class*)>(&DocumentHandler::setElementHandler))},
	{"setExceptionListener", "(Ljava/beans/ExceptionListener;)V", nullptr, $PUBLIC, $method(static_cast<void(DocumentHandler::*)($ExceptionListener*)>(&DocumentHandler::setExceptionListener))},
	{"setOwner", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(DocumentHandler::*)(Object$*)>(&DocumentHandler::setOwner))},
	{"setVariable", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(DocumentHandler::*)($String*,Object$*)>(&DocumentHandler::setVariable))},
	{"startDocument", "()V", nullptr, $PUBLIC},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{}
};

$InnerClassInfo _DocumentHandler_InnerClassesInfo_[] = {
	{"com.sun.beans.decoder.DocumentHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DocumentHandler_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.beans.decoder.DocumentHandler",
	"org.xml.sax.helpers.DefaultHandler",
	nullptr,
	_DocumentHandler_FieldInfo_,
	_DocumentHandler_MethodInfo_,
	nullptr,
	nullptr,
	_DocumentHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.beans.decoder.DocumentHandler$1"
};

$Object* allocate$DocumentHandler($Class* clazz) {
	return $of($alloc(DocumentHandler));
}

void DocumentHandler::init$() {
	$DefaultHandler::init$();
	$set(this, acc, $AccessController::getContext());
	$set(this, handlers, $new($HashMap));
	$set(this, environment, $new($HashMap));
	$set(this, objects, $new($ArrayList));
	$load($JavaElementHandler);
	setElementHandler("java"_s, $JavaElementHandler::class$);
	$load($NullElementHandler);
	setElementHandler("null"_s, $NullElementHandler::class$);
	$load($ArrayElementHandler);
	setElementHandler("array"_s, $ArrayElementHandler::class$);
	$load($ClassElementHandler);
	setElementHandler("class"_s, $ClassElementHandler::class$);
	$load($StringElementHandler);
	setElementHandler("string"_s, $StringElementHandler::class$);
	$load($ObjectElementHandler);
	setElementHandler("object"_s, $ObjectElementHandler::class$);
	$load($VoidElementHandler);
	setElementHandler("void"_s, $VoidElementHandler::class$);
	$load($CharElementHandler);
	setElementHandler("char"_s, $CharElementHandler::class$);
	$load($ByteElementHandler);
	setElementHandler("byte"_s, $ByteElementHandler::class$);
	$load($ShortElementHandler);
	setElementHandler("short"_s, $ShortElementHandler::class$);
	$load($IntElementHandler);
	setElementHandler("int"_s, $IntElementHandler::class$);
	$load($LongElementHandler);
	setElementHandler("long"_s, $LongElementHandler::class$);
	$load($FloatElementHandler);
	setElementHandler("float"_s, $FloatElementHandler::class$);
	$load($DoubleElementHandler);
	setElementHandler("double"_s, $DoubleElementHandler::class$);
	$load($BooleanElementHandler);
	setElementHandler("boolean"_s, $BooleanElementHandler::class$);
	$load($NewElementHandler);
	setElementHandler("new"_s, $NewElementHandler::class$);
	$load($VarElementHandler);
	setElementHandler("var"_s, $VarElementHandler::class$);
	$load($TrueElementHandler);
	setElementHandler("true"_s, $TrueElementHandler::class$);
	$load($FalseElementHandler);
	setElementHandler("false"_s, $FalseElementHandler::class$);
	$load($FieldElementHandler);
	setElementHandler("field"_s, $FieldElementHandler::class$);
	$load($MethodElementHandler);
	setElementHandler("method"_s, $MethodElementHandler::class$);
	$load($PropertyElementHandler);
	setElementHandler("property"_s, $PropertyElementHandler::class$);
}

$ClassLoader* DocumentHandler::getClassLoader() {
	return (this->loader != nullptr) ? $cast($ClassLoader, $nc(this->loader)->get()) : ($ClassLoader*)nullptr;
}

void DocumentHandler::setClassLoader($ClassLoader* loader) {
	$set(this, loader, $new($WeakReference, loader));
}

$ExceptionListener* DocumentHandler::getExceptionListener() {
	return this->listener;
}

void DocumentHandler::setExceptionListener($ExceptionListener* listener) {
	$set(this, listener, listener);
}

$Object* DocumentHandler::getOwner() {
	return $of(this->owner);
}

void DocumentHandler::setOwner(Object$* owner) {
	$set(this, owner, owner);
}

$Class* DocumentHandler::getElementHandler($String* name) {
	$Class* type = $cast($Class, $nc(this->handlers)->get(name));
	if (type == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported element: "_s, name}));
	}
	return type;
}

void DocumentHandler::setElementHandler($String* name, $Class* handler) {
	$nc(this->handlers)->put(name, handler);
}

bool DocumentHandler::hasVariable($String* id) {
	return $nc(this->environment)->containsKey(id);
}

$Object* DocumentHandler::getVariable($String* id) {
	if (!$nc(this->environment)->containsKey(id)) {
		$throwNew($IllegalArgumentException, $$str({"Unbound variable: "_s, id}));
	}
	return $of($nc(this->environment)->get(id));
}

void DocumentHandler::setVariable($String* id, Object$* value) {
	$nc(this->environment)->put(id, value);
}

$ObjectArray* DocumentHandler::getObjects() {
	return $nc(this->objects)->toArray();
}

void DocumentHandler::addObject(Object$* object) {
	$nc(this->objects)->add(object);
}

$InputSource* DocumentHandler::resolveEntity($String* publicId, $String* systemId) {
	return $new($InputSource, static_cast<$Reader*>($$new($StringReader, ""_s)));
}

void DocumentHandler::startDocument() {
	$nc(this->objects)->clear();
	$set(this, handler, nullptr);
}

void DocumentHandler::startElement($String* uri, $String* localName, $String* qName, $Attributes* attributes) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ElementHandler, parent, this->handler);
	try {
		$set(this, handler, $cast($ElementHandler, $nc(getElementHandler(qName))->newInstance()));
		$nc(this->handler)->setOwner(this);
		$nc(this->handler)->setParent(parent);
	} catch ($Exception& exception) {
		$throwNew($SAXException, $cast($Exception, exception));
	}
	for (int32_t i = 0; i < $nc(attributes)->getLength(); ++i) {
		try {
			$var($String, name, attributes->getQName(i));
			$var($String, value, attributes->getValue(i));
			$nc(this->handler)->addAttribute(name, value);
		} catch ($RuntimeException& exception) {
			handleException(exception);
		}
	}
	$nc(this->handler)->startElement();
}

void DocumentHandler::endElement($String* uri, $String* localName, $String* qName) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->handler)->endElement();
			} catch ($RuntimeException& exception) {
				handleException(exception);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, handler, $nc(this->handler)->getParent());
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void DocumentHandler::characters($chars* chars, int32_t start, int32_t length) {
	if (this->handler != nullptr) {
		try {
			while (0 < length--) {
				$nc(this->handler)->addCharacter($nc(chars)->get(start++));
			}
		} catch ($RuntimeException& exception) {
			handleException(exception);
		}
	}
}

void DocumentHandler::handleException($Exception* exception) {
	if (this->listener == nullptr) {
		$throwNew($IllegalStateException, static_cast<$Throwable*>(exception));
	}
	$nc(this->listener)->exceptionThrown(exception);
}

void DocumentHandler::parse($InputSource* input) {
	$useLocalCurrentObjectStackCache();
	if ((this->acc == nullptr) && (nullptr != $System::getSecurityManager())) {
		$throwNew($SecurityException, "AccessControlContext is not set"_s);
	}
	$var($AccessControlContext, stack, $AccessController::getContext());
	$nc($($SharedSecrets::getJavaSecurityAccess()))->doIntersectionPrivilege($$new($DocumentHandler$1, this, input), stack, this->acc);
}

$Class* DocumentHandler::findClass($String* name) {
	try {
		return $ClassFinder::resolveClass(name, $(getClassLoader()));
	} catch ($ClassNotFoundException& exception) {
		handleException(exception);
		return nullptr;
	}
	$shouldNotReachHere();
}

DocumentHandler::DocumentHandler() {
}

$Class* DocumentHandler::load$($String* name, bool initialize) {
	$loadClass(DocumentHandler, name, initialize, &_DocumentHandler_ClassInfo_, allocate$DocumentHandler);
	return class$;
}

$Class* DocumentHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com