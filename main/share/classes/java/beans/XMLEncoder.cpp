#include <java/beans/XMLEncoder.h>

#include <java/beans/Encoder.h>
#include <java/beans/ExceptionListener.h>
#include <java/beans/Expression.h>
#include <java/beans/Introspector.h>
#include <java/beans/NameGenerator.h>
#include <java/beans/Statement.h>
#include <java/beans/XMLDecoder.h>
#include <java/beans/XMLEncoder$ValueData.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/lang/CharSequence.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Modifier.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef TYPE

using $Encoder = ::java::beans::Encoder;
using $ExceptionListener = ::java::beans::ExceptionListener;
using $Expression = ::java::beans::Expression;
using $Introspector = ::java::beans::Introspector;
using $NameGenerator = ::java::beans::NameGenerator;
using $Statement = ::java::beans::Statement;
using $XMLDecoder = ::java::beans::XMLDecoder;
using $XMLEncoder$ValueData = ::java::beans::XMLEncoder$ValueData;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Short = ::java::lang::Short;
using $Void = ::java::lang::Void;
using $1Array = ::java::lang::reflect::Array;
using $Field = ::java::lang::reflect::Field;
using $Modifier = ::java::lang::reflect::Modifier;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;

namespace java {
	namespace beans {

$FieldInfo _XMLEncoder_FieldInfo_[] = {
	{"encoder", "Ljava/nio/charset/CharsetEncoder;", nullptr, $PRIVATE | $FINAL, $field(XMLEncoder, encoder)},
	{"charset", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(XMLEncoder, charset)},
	{"declaration", "Z", nullptr, $PRIVATE | $FINAL, $field(XMLEncoder, declaration)},
	{"out", "Ljava/io/OutputStreamWriter;", nullptr, $PRIVATE, $field(XMLEncoder, out)},
	{"owner", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(XMLEncoder, owner)},
	{"indentation", "I", nullptr, $PRIVATE, $field(XMLEncoder, indentation)},
	{"internal", "Z", nullptr, $PRIVATE, $field(XMLEncoder, internal)},
	{"valueToExpression", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/beans/XMLEncoder$ValueData;>;", $PRIVATE, $field(XMLEncoder, valueToExpression)},
	{"targetToStatementList", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/util/List<Ljava/beans/Statement;>;>;", $PRIVATE, $field(XMLEncoder, targetToStatementList)},
	{"preambleWritten", "Z", nullptr, $PRIVATE, $field(XMLEncoder, preambleWritten)},
	{"nameGenerator", "Ljava/beans/NameGenerator;", nullptr, $PRIVATE, $field(XMLEncoder, nameGenerator)},
	{}
};

$MethodInfo _XMLEncoder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLEncoder::*)($OutputStream*)>(&XMLEncoder::init$))},
	{"<init>", "(Ljava/io/OutputStream;Ljava/lang/String;ZI)V", nullptr, $PUBLIC, $method(static_cast<void(XMLEncoder::*)($OutputStream*,$String*,bool,int32_t)>(&XMLEncoder::init$))},
	{"clear", "()V", nullptr, 0},
	{"close", "()V", nullptr, $PUBLIC},
	{"createString", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&XMLEncoder::createString))},
	{"createString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(XMLEncoder::*)($String*)>(&XMLEncoder::createString))},
	{"flush", "()V", nullptr, $PUBLIC},
	{"getMissedStatement", "()Ljava/beans/Statement;", nullptr, 0},
	{"getOwner", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getValueData", "(Ljava/lang/Object;)Ljava/beans/XMLEncoder$ValueData;", nullptr, $PRIVATE, $method(static_cast<$XMLEncoder$ValueData*(XMLEncoder::*)(Object$*)>(&XMLEncoder::getValueData))},
	{"isValidCharCode", "(I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t)>(&XMLEncoder::isValidCharCode))},
	{"mark", "(Ljava/lang/Object;Z)V", nullptr, $PRIVATE, $method(static_cast<void(XMLEncoder::*)(Object$*,bool)>(&XMLEncoder::mark))},
	{"mark", "(Ljava/beans/Statement;)V", nullptr, $PRIVATE, $method(static_cast<void(XMLEncoder::*)($Statement*)>(&XMLEncoder::mark))},
	{"outputStatement", "(Ljava/beans/Statement;Ljava/lang/Object;Z)V", nullptr, $PRIVATE, $method(static_cast<void(XMLEncoder::*)($Statement*,Object$*,bool)>(&XMLEncoder::outputStatement))},
	{"outputValue", "(Ljava/lang/Object;Ljava/lang/Object;Z)V", nullptr, $PRIVATE, $method(static_cast<void(XMLEncoder::*)(Object$*,Object$*,bool)>(&XMLEncoder::outputValue))},
	{"outputXML", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/Object;)V", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<void(XMLEncoder::*)($String*,$String*,Object$*,$ObjectArray*)>(&XMLEncoder::outputXML))},
	{"primitiveTypeFor", "(Ljava/lang/Class;)Ljava/lang/Class;", nullptr, $STATIC, $method(static_cast<$Class*(*)($Class*)>(&XMLEncoder::primitiveTypeFor))},
	{"quote", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(XMLEncoder::*)($String*)>(&XMLEncoder::quote))},
	{"quoteCharCode", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&XMLEncoder::quoteCharCode))},
	{"setOwner", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"statementList", "(Ljava/lang/Object;)Ljava/util/List;", "(Ljava/lang/Object;)Ljava/util/List<Ljava/beans/Statement;>;", $PRIVATE, $method(static_cast<$List*(XMLEncoder::*)(Object$*)>(&XMLEncoder::statementList))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeExpression", "(Ljava/beans/Expression;)V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"writeStatement", "(Ljava/beans/Statement;)V", nullptr, $PUBLIC},
	{"writeln", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(XMLEncoder::*)($String*)>(&XMLEncoder::writeln))},
	{}
};

$InnerClassInfo _XMLEncoder_InnerClassesInfo_[] = {
	{"java.beans.XMLEncoder$ValueData", "java.beans.XMLEncoder", "ValueData", $PRIVATE},
	{}
};

$ClassInfo _XMLEncoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.XMLEncoder",
	"java.beans.Encoder",
	"java.lang.AutoCloseable",
	_XMLEncoder_FieldInfo_,
	_XMLEncoder_MethodInfo_,
	nullptr,
	nullptr,
	_XMLEncoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.beans.XMLEncoder$ValueData"
};

$Object* allocate$XMLEncoder($Class* clazz) {
	return $of($alloc(XMLEncoder));
}

int32_t XMLEncoder::hashCode() {
	 return this->$Encoder::hashCode();
}

bool XMLEncoder::equals(Object$* arg0) {
	 return this->$Encoder::equals(arg0);
}

$Object* XMLEncoder::clone() {
	 return this->$Encoder::clone();
}

$String* XMLEncoder::toString() {
	 return this->$Encoder::toString();
}

void XMLEncoder::finalize() {
	this->$Encoder::finalize();
}

void XMLEncoder::init$($OutputStream* out) {
	XMLEncoder::init$(out, "UTF-8"_s, true, 0);
}

void XMLEncoder::init$($OutputStream* out, $String* charset, bool declaration, int32_t indentation) {
	$useLocalCurrentObjectStackCache();
	$Encoder::init$();
	this->indentation = 0;
	this->internal = false;
	this->preambleWritten = false;
	if (out == nullptr) {
		$throwNew($IllegalArgumentException, "the output stream cannot be null"_s);
	}
	if (indentation < 0) {
		$throwNew($IllegalArgumentException, "the indentation must be >= 0"_s);
	}
	$var($Charset, cs, $Charset::forName(charset));
	$set(this, encoder, $nc(cs)->newEncoder());
	$set(this, charset, charset);
	this->declaration = declaration;
	this->indentation = indentation;
	$set(this, out, $new($OutputStreamWriter, out, $(cs->newEncoder())));
	$set(this, valueToExpression, $new($IdentityHashMap));
	$set(this, targetToStatementList, $new($IdentityHashMap));
	$set(this, nameGenerator, $new($NameGenerator));
}

void XMLEncoder::setOwner(Object$* owner) {
	$useLocalCurrentObjectStackCache();
	$set(this, owner, owner);
	writeExpression($$new($Expression, this, "getOwner"_s, $$new($ObjectArray, 0)));
}

$Object* XMLEncoder::getOwner() {
	return $of(this->owner);
}

void XMLEncoder::writeObject(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if (this->internal) {
		$Encoder::writeObject(o);
	} else {
		writeStatement($$new($Statement, this, "writeObject"_s, $$new($ObjectArray, {o})));
	}
}

$List* XMLEncoder::statementList(Object$* target) {
	$var($List, list, $cast($List, $nc(this->targetToStatementList)->get(target)));
	if (list == nullptr) {
		$assign(list, $new($ArrayList));
		$nc(this->targetToStatementList)->put(target, list);
	}
	return list;
}

void XMLEncoder::mark(Object$* o, bool isArgument) {
	$useLocalCurrentObjectStackCache();
	if (o == nullptr || $equals(o, this)) {
		return;
	}
	$var($XMLEncoder$ValueData, d, getValueData(o));
	$var($Expression, exp, $nc(d)->exp);
	if ($nc($of(o))->getClass() == $String::class$ && exp == nullptr) {
		return;
	}
	if (isArgument) {
		++d->refs;
	}
	if (d->marked) {
		return;
	}
	d->marked = true;
	$var($Object, target, $nc(exp)->getTarget());
	mark(exp);
	if (!($instanceOf($Class, target))) {
		$nc($(statementList(target)))->add(exp);
		++d->refs;
	}
}

void XMLEncoder::mark($Statement* stm) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, args, $nc(stm)->getArguments());
	for (int32_t i = 0; i < $nc(args)->length; ++i) {
		$var($Object0, arg, args->get(i));
		mark(arg, true);
	}
	mark($(stm->getTarget()), $instanceOf($Expression, stm));
}

void XMLEncoder::writeStatement($Statement* oldStm) {
	$useLocalCurrentObjectStackCache();
	bool internal = this->internal;
	this->internal = true;
	try {
		$Encoder::writeStatement(oldStm);
		mark(oldStm);
		$var($Object, target, $nc(oldStm)->getTarget());
		if ($instanceOf($Field, target)) {
			$var($String, method, oldStm->getMethodName());
			$var($ObjectArray, args, oldStm->getArguments());
			if ((method == nullptr) || (args == nullptr)) {
			} else if ($nc(method)->equals("get"_s) && ($nc(args)->length == 1)) {
				$assign(target, args->get(0));
			} else if (method->equals("set"_s) && (args->length == 2)) {
				$assign(target, args->get(0));
			}
		}
		$nc($(statementList(target)))->add(oldStm);
	} catch ($Exception& e) {
		$nc($(getExceptionListener()))->exceptionThrown($$new($Exception, $$str({"XMLEncoder: discarding statement "_s, oldStm}), e));
	}
	this->internal = internal;
}

void XMLEncoder::writeExpression($Expression* oldExp) {
	$useLocalCurrentObjectStackCache();
	bool internal = this->internal;
	this->internal = true;
	$var($Object, oldValue, getValue(oldExp));
	if (get(oldValue) == nullptr || ($instanceOf($String, oldValue) && !internal)) {
		$set($nc($(getValueData(oldValue))), exp, oldExp);
		$Encoder::writeExpression(oldExp);
	}
	this->internal = internal;
}

void XMLEncoder::flush() {
	$useLocalCurrentObjectStackCache();
	if (!this->preambleWritten) {
		if (this->declaration) {
			$var($String, var$1, $$str({"<?xml version="_s, $(quote("1.0"_s)), " encoding="_s}));
			$var($String, var$0, $$concat(var$1, $(quote(this->charset))));
			writeln($$concat(var$0, "?>"_s));
		}
		$var($String, var$3, $$str({"<java version="_s, $(quote($($System::getProperty("java.version"_s)))), " class="_s}));
		$load($XMLDecoder);
		$var($String, var$2, $$concat(var$3, $(quote($($XMLDecoder::class$->getName())))));
		writeln($$concat(var$2, ">"_s));
		this->preambleWritten = true;
	}
	++this->indentation;
	$var($List, statements, statementList(this));
	while (!$nc(statements)->isEmpty()) {
		$var($Statement, s, $cast($Statement, statements->remove(0)));
		if ("writeObject"_s->equals($($nc(s)->getMethodName()))) {
			outputValue($nc($($nc(s)->getArguments()))->get(0), this, true);
		} else {
			outputStatement(s, this, false);
		}
	}
	--this->indentation;
	$var($Statement, statement, getMissedStatement());
	while (statement != nullptr) {
		outputStatement(statement, this, false);
		$assign(statement, getMissedStatement());
	}
	try {
		$nc(this->out)->flush();
	} catch ($IOException& e) {
		$nc($(getExceptionListener()))->exceptionThrown(e);
	}
	clear();
}

void XMLEncoder::clear() {
	$Encoder::clear();
	$nc(this->nameGenerator)->clear();
	$nc(this->valueToExpression)->clear();
	$nc(this->targetToStatementList)->clear();
}

$Statement* XMLEncoder::getMissedStatement() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(this->targetToStatementList)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($List, statements, $cast($List, i$->next()));
			{
				for (int32_t i = 0; i < $nc(statements)->size(); ++i) {
					$load($Statement);
					if ($Statement::class$ == $nc($of(($cast($Statement, $(statements->get(i))))))->getClass()) {
						return $cast($Statement, statements->remove(i));
					}
				}
			}
		}
	}
	return nullptr;
}

void XMLEncoder::close() {
	flush();
	writeln("</java>"_s);
	try {
		$nc(this->out)->close();
	} catch ($IOException& e) {
		$nc($(getExceptionListener()))->exceptionThrown(e);
	}
}

$String* XMLEncoder::quote($String* s) {
	return $str({"\""_s, s, "\""_s});
}

$XMLEncoder$ValueData* XMLEncoder::getValueData(Object$* o) {
	$var($XMLEncoder$ValueData, d, $cast($XMLEncoder$ValueData, $nc(this->valueToExpression)->get(o)));
	if (d == nullptr) {
		$assign(d, $new($XMLEncoder$ValueData, this));
		$nc(this->valueToExpression)->put(o, d);
	}
	return d;
}

bool XMLEncoder::isValidCharCode(int32_t code) {
	$init(XMLEncoder);
	return (32 <= code && code <= 0x0000D7FF) || (10 == code) || (9 == code) || (13 == code) || (0x0000E000 <= code && code <= 0x0000FFFD) || (0x00010000 <= code && code <= 0x0010FFFF);
}

void XMLEncoder::writeln($String* exp) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($StringBuilder, sb, $new($StringBuilder));
		for (int32_t i = 0; i < this->indentation; ++i) {
			sb->append(u' ');
		}
		sb->append(exp);
		sb->append(u'\n');
		$nc(this->out)->write($(sb->toString()));
	} catch ($IOException& e) {
		$nc($(getExceptionListener()))->exceptionThrown(e);
	}
}

void XMLEncoder::outputValue(Object$* value$renamed, Object$* outer, bool isArgument) {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, value$renamed);
	if (value == nullptr) {
		writeln("<null/>"_s);
		return;
	}
	if ($instanceOf($Class, value)) {
		writeln($$str({"<class>"_s, $($nc(($cast($Class, value)))->getName()), "</class>"_s}));
		return;
	}
	$var($XMLEncoder$ValueData, d, getValueData(value));
	if ($nc(d)->exp != nullptr) {
		$var($Object, target, $nc(d->exp)->getTarget());
		$var($String, methodName, $nc(d->exp)->getMethodName());
		if (target == nullptr || methodName == nullptr) {
			$throwNew($NullPointerException, $$str({(target == nullptr ? "target"_s : "methodName"_s), " should not be null"_s}));
		}
		if (isArgument && $instanceOf($Field, target) && $nc(methodName)->equals("get"_s)) {
			$var($Field, f, $cast($Field, target));
			if ($Modifier::isStatic($nc(f)->getModifiers())) {
				$var($String, var$1, $$str({"<object class="_s, $(quote($($nc($nc(f)->getDeclaringClass())->getName()))), " field="_s}));
				$var($String, var$0, $$concat(var$1, $(quote($($nc(f)->getName())))));
				writeln($$concat(var$0, "/>"_s));
				return;
			}
		}
		$Class* primitiveType = primitiveTypeFor($nc($of(value))->getClass());
		bool var$2 = primitiveType != nullptr && $equals(target, $nc($of(value))->getClass());
		if (var$2 && $nc(methodName)->equals("new"_s)) {
			$var($String, primitiveTypeName, primitiveType->getName());
			$init($Character);
			if (primitiveType == $Character::TYPE) {
				char16_t code = $nc(($cast($Character, value)))->charValue();
				if (!isValidCharCode(code)) {
					writeln($(createString((int32_t)code)));
					return;
				}
				$assign(value, quoteCharCode(code));
				if (value == nullptr) {
					$assign(value, $Character::valueOf(code));
				}
			}
			writeln($$str({"<"_s, primitiveTypeName, ">"_s, value, "</"_s, primitiveTypeName, ">"_s}));
			return;
		}
	} else if ($instanceOf($String, value)) {
		writeln($(createString($cast($String, value))));
		return;
	}
	if ($nc(d)->name != nullptr) {
		if (isArgument) {
			writeln($$str({"<object idref="_s, $(quote(d->name)), "/>"_s}));
		} else {
			outputXML("void"_s, $$str({" idref="_s, $(quote(d->name))}), value, $$new($ObjectArray, 0));
		}
	} else if (d->exp != nullptr) {
		outputStatement(d->exp, outer, isArgument);
	}
}

$String* XMLEncoder::quoteCharCode(int32_t code) {
	$init(XMLEncoder);
	switch (code) {
	case u'&':
		{
			return "&amp;"_s;
		}
	case u'<':
		{
			return "&lt;"_s;
		}
	case u'>':
		{
			return "&gt;"_s;
		}
	case u'\"':
		{
			return "&quot;"_s;
		}
	case u'\'':
		{
			return "&apos;"_s;
		}
	case u'\r':
		{
			return "&#13;"_s;
		}
	default:
		{
			return nullptr;
		}
	}
}

$String* XMLEncoder::createString(int32_t code) {
	$init(XMLEncoder);
	return $str({"<char code=\"#"_s, $($Integer::toString(code, 16)), "\"/>"_s});
}

$String* XMLEncoder::createString($String* string) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("<string>"_s);
	int32_t index = 0;
	while (index < $nc(string)->length()) {
		int32_t point = string->codePointAt(index);
		int32_t count = $Character::charCount(point);
		bool var$0 = isValidCharCode(point);
		if (var$0 && $nc(this->encoder)->canEncode($(static_cast<$CharSequence*>(string->substring(index, index + count))))) {
			$var($String, value, quoteCharCode(point));
			if (value != nullptr) {
				sb->append(value);
			} else {
				sb->appendCodePoint(point);
			}
			index += count;
		} else {
			sb->append($(createString((int32_t)string->charAt(index))));
			++index;
		}
	}
	sb->append("</string>"_s);
	return sb->toString();
}

void XMLEncoder::outputStatement($Statement* exp, Object$* outer, bool isArgument) {
	$useLocalCurrentObjectStackCache();
	$var($Object, target, $nc(exp)->getTarget());
	$var($String, methodName, exp->getMethodName());
	if (target == nullptr || methodName == nullptr) {
		$throwNew($NullPointerException, $$str({(target == nullptr ? "target"_s : "methodName"_s), " should not be null"_s}));
	}
	$var($ObjectArray, args, exp->getArguments());
	$load($Expression);
	bool expression = $of(exp)->getClass() == $Expression::class$;
	$var($Object, value, (expression) ? getValue($cast($Expression, exp)) : ($Object*)nullptr);
	$var($String, tag, (expression && isArgument) ? "object"_s : "void"_s);
	$var($String, attributes, ""_s);
	$var($XMLEncoder$ValueData, d, getValueData(value));
	if ($equals(target, outer)) {
	} else {
		$load($1Array);
		if ($equals(target, $1Array::class$) && $nc(methodName)->equals("newInstance"_s)) {
			$assign(tag, "array"_s);
			$assign(attributes, $str({attributes, " class="_s, $(quote($($nc(($cast($Class, $nc(args)->get(0))))->getName())))}));
			$assign(attributes, $str({attributes, " length="_s, $(quote($($nc($of($nc(args)->get(1)))->toString())))}));
			$assign(args, $new($ObjectArray, 0));
		} else if ($of(target)->getClass() == $Class::class$) {
			$assign(attributes, $str({attributes, " class="_s, $(quote($($nc(($cast($Class, target)))->getName())))}));
		} else {
			$nc(d)->refs = 2;
			if (d->name == nullptr) {
				++$nc($(getValueData(target)))->refs;
				$var($List, statements, statementList(target));
				if (!$nc(statements)->contains(exp)) {
					statements->add(exp);
				}
				outputValue(target, outer, false);
			}
			if (expression) {
				outputValue(value, outer, isArgument);
			}
			return;
		}
	}
	if (expression && ($nc(d)->refs > 1)) {
		$var($String, instanceName, $nc(this->nameGenerator)->instanceName(value));
		$set(d, name, instanceName);
		$assign(attributes, $str({attributes, " id="_s, $(quote(instanceName))}));
	}
	bool var$0 = (!expression && $nc(methodName)->equals("set"_s) && $nc(args)->length == 2 && $instanceOf($Integer, args->get(0)));
	if (var$0 || (expression && $nc(methodName)->equals("get"_s) && $nc(args)->length == 1 && $instanceOf($Integer, args->get(0)))) {
		$assign(attributes, $str({attributes, " index="_s, $(quote($($nc($of(args->get(0)))->toString())))}));
		$assign(args, (args->length == 1) ? $new($ObjectArray, 0) : $new($ObjectArray, {args->get(1)}));
	} else {
		bool var$2 = (!expression && methodName->startsWith("set"_s) && args->length == 1);
		if (var$2 || (expression && methodName->startsWith("get"_s) && args->length == 0)) {
			if (3 < methodName->length()) {
				$assign(attributes, $str({attributes, " property="_s, $(quote($($Introspector::decapitalize($(methodName->substring(3))))))}));
			}
		} else {
			bool var$4 = !methodName->equals("new"_s);
			if (var$4 && !methodName->equals("newInstance"_s)) {
				$assign(attributes, $str({attributes, " method="_s, $(quote(methodName))}));
			}
		}
	}
	outputXML(tag, attributes, value, args);
}

void XMLEncoder::outputXML($String* tag, $String* attributes, Object$* value, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($List, statements, statementList(value));
	if ($nc(args)->length == 0 && $nc(statements)->size() == 0) {
		writeln($$str({"<"_s, tag, attributes, "/>"_s}));
		return;
	}
	writeln($$str({"<"_s, tag, attributes, ">"_s}));
	++this->indentation;
	for (int32_t i = 0; i < $nc(args)->length; ++i) {
		outputValue(args->get(i), nullptr, true);
	}
	while (!$nc(statements)->isEmpty()) {
		$var($Statement, s, $cast($Statement, statements->remove(0)));
		outputStatement(s, value, false);
	}
	--this->indentation;
	writeln($$str({"</"_s, tag, ">"_s}));
}

$Class* XMLEncoder::primitiveTypeFor($Class* wrapper) {
	$init(XMLEncoder);
	$load($Boolean);
	if (wrapper == $Boolean::class$) {
		$init($Boolean);
		return $Boolean::TYPE;
	}
	$load($Byte);
	if (wrapper == $Byte::class$) {
		$init($Byte);
		return $Byte::TYPE;
	}
	$load($Character);
	if (wrapper == $Character::class$) {
		$init($Character);
		return $Character::TYPE;
	}
	$load($Short);
	if (wrapper == $Short::class$) {
		$init($Short);
		return $Short::TYPE;
	}
	$load($Integer);
	if (wrapper == $Integer::class$) {
		$init($Integer);
		return $Integer::TYPE;
	}
	$load($Long);
	if (wrapper == $Long::class$) {
		$init($Long);
		return $Long::TYPE;
	}
	$load($Float);
	if (wrapper == $Float::class$) {
		$init($Float);
		return $Float::TYPE;
	}
	$load($Double);
	if (wrapper == $Double::class$) {
		$init($Double);
		return $Double::TYPE;
	}
	$load($Void);
	if (wrapper == $Void::class$) {
		$init($Void);
		return $Void::TYPE;
	}
	return nullptr;
}

XMLEncoder::XMLEncoder() {
}

$Class* XMLEncoder::load$($String* name, bool initialize) {
	$loadClass(XMLEncoder, name, initialize, &_XMLEncoder_ClassInfo_, allocate$XMLEncoder);
	return class$;
}

$Class* XMLEncoder::class$ = nullptr;

	} // beans
} // java