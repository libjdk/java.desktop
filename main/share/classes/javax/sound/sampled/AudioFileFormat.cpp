#include <javax/sound/sampled/AudioFileFormat.h>

#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/sound/sampled/AudioFileFormat$Type.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <jcpp.h>

#undef NOT_SPECIFIED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $AudioFileFormat$Type = ::javax::sound::sampled::AudioFileFormat$Type;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _AudioFileFormat_FieldInfo_[] = {
	{"type", "Ljavax/sound/sampled/AudioFileFormat$Type;", nullptr, $PRIVATE | $FINAL, $field(AudioFileFormat, type)},
	{"byteLength", "I", nullptr, $PRIVATE | $FINAL, $field(AudioFileFormat, byteLength)},
	{"format", "Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE | $FINAL, $field(AudioFileFormat, format)},
	{"frameLength", "I", nullptr, $PRIVATE | $FINAL, $field(AudioFileFormat, frameLength)},
	{"properties", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(AudioFileFormat, properties$)},
	{}
};

$MethodInfo _AudioFileFormat_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/sampled/AudioFileFormat$Type;ILjavax/sound/sampled/AudioFormat;I)V", nullptr, $PROTECTED, $method(static_cast<void(AudioFileFormat::*)($AudioFileFormat$Type*,int32_t,$AudioFormat*,int32_t)>(&AudioFileFormat::init$))},
	{"<init>", "(Ljavax/sound/sampled/AudioFileFormat$Type;Ljavax/sound/sampled/AudioFormat;I)V", nullptr, $PUBLIC, $method(static_cast<void(AudioFileFormat::*)($AudioFileFormat$Type*,$AudioFormat*,int32_t)>(&AudioFileFormat::init$))},
	{"<init>", "(Ljavax/sound/sampled/AudioFileFormat$Type;Ljavax/sound/sampled/AudioFormat;ILjava/util/Map;)V", "(Ljavax/sound/sampled/AudioFileFormat$Type;Ljavax/sound/sampled/AudioFormat;ILjava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;)V", $PUBLIC, $method(static_cast<void(AudioFileFormat::*)($AudioFileFormat$Type*,$AudioFormat*,int32_t,$Map*)>(&AudioFileFormat::init$))},
	{"getByteLength", "()I", nullptr, $PUBLIC},
	{"getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC},
	{"getFrameLength", "()I", nullptr, $PUBLIC},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getType", "()Ljavax/sound/sampled/AudioFileFormat$Type;", nullptr, $PUBLIC},
	{"properties", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AudioFileFormat_InnerClassesInfo_[] = {
	{"javax.sound.sampled.AudioFileFormat$Type", "javax.sound.sampled.AudioFileFormat", "Type", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AudioFileFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.sampled.AudioFileFormat",
	"java.lang.Object",
	nullptr,
	_AudioFileFormat_FieldInfo_,
	_AudioFileFormat_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFileFormat_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.sound.sampled.AudioFileFormat$Type"
};

$Object* allocate$AudioFileFormat($Class* clazz) {
	return $of($alloc(AudioFileFormat));
}

void AudioFileFormat::init$($AudioFileFormat$Type* type, int32_t byteLength, $AudioFormat* format, int32_t frameLength) {
	$set(this, type, type);
	this->byteLength = byteLength;
	$set(this, format, format);
	this->frameLength = frameLength;
	$set(this, properties$, nullptr);
}

void AudioFileFormat::init$($AudioFileFormat$Type* type, $AudioFormat* format, int32_t frameLength) {
	AudioFileFormat::init$(type, $AudioSystem::NOT_SPECIFIED, format, frameLength);
}

void AudioFileFormat::init$($AudioFileFormat$Type* type, $AudioFormat* format, int32_t frameLength, $Map* properties) {
	AudioFileFormat::init$(type, $AudioSystem::NOT_SPECIFIED, format, frameLength);
	$set(this, properties$, $new($HashMap, properties));
}

$AudioFileFormat$Type* AudioFileFormat::getType() {
	return this->type;
}

int32_t AudioFileFormat::getByteLength() {
	return this->byteLength;
}

$AudioFormat* AudioFileFormat::getFormat() {
	return this->format;
}

int32_t AudioFileFormat::getFrameLength() {
	return this->frameLength;
}

$Map* AudioFileFormat::properties() {
	$var($Map, ret, nullptr);
	if (this->properties$ == nullptr) {
		$assign(ret, $new($HashMap, 0));
	} else {
		$assign(ret, ($cast($Map, $nc(this->properties$)->clone())));
	}
	return $Collections::unmodifiableMap(ret);
}

$Object* AudioFileFormat::getProperty($String* key) {
	if (this->properties$ == nullptr) {
		return $of(nullptr);
	}
	return $of($nc(this->properties$)->get(key));
}

$String* AudioFileFormat::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, str, "Unknown file format"_s);
	if (getType() != nullptr) {
		$var($String, var$1, $$str({$(getType()), " (."_s}));
		$var($String, var$0, $$concat(var$1, $($nc($(getType()))->getExtension())));
		$assign(str, $concat(var$0, ") file"_s));
	}
	if (getByteLength() != $AudioSystem::NOT_SPECIFIED) {
		$plusAssign(str, $$str({", byte length: "_s, $$str(getByteLength())}));
	}
	$plusAssign(str, $$str({", data format: "_s, $(getFormat())}));
	if (getFrameLength() != $AudioSystem::NOT_SPECIFIED) {
		$plusAssign(str, $$str({", frame length: "_s, $$str(getFrameLength())}));
	}
	return str;
}

AudioFileFormat::AudioFileFormat() {
}

$Class* AudioFileFormat::load$($String* name, bool initialize) {
	$loadClass(AudioFileFormat, name, initialize, &_AudioFileFormat_ClassInfo_, allocate$AudioFileFormat);
	return class$;
}

$Class* AudioFileFormat::class$ = nullptr;

		} // sampled
	} // sound
} // javax