#include <com/sun/media/sound/DLSInstrument.h>

#include <com/sun/media/sound/DLSInfo.h>
#include <com/sun/media/sound/DLSModulator.h>
#include <com/sun/media/sound/DLSRegion.h>
#include <com/sun/media/sound/DLSSample.h>
#include <com/sun/media/sound/DLSSampleLoop.h>
#include <com/sun/media/sound/DLSSampleOptions.h>
#include <com/sun/media/sound/DLSSoundbank.h>
#include <com/sun/media/sound/ModelByteBuffer.h>
#include <com/sun/media/sound/ModelByteBufferWavetable.h>
#include <com/sun/media/sound/ModelConnectionBlock.h>
#include <com/sun/media/sound/ModelDestination.h>
#include <com/sun/media/sound/ModelIdentifier.h>
#include <com/sun/media/sound/ModelInstrument.h>
#include <com/sun/media/sound/ModelPatch.h>
#include <com/sun/media/sound/ModelPerformer.h>
#include <com/sun/media/sound/ModelSource.h>
#include <com/sun/media/sound/ModelStandardTransform.h>
#include <com/sun/media/sound/ModelTransform.h>
#include <com/sun/media/sound/ModelWavetable.h>
#include <com/sun/media/sound/SoftFilter.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

#undef CONN_DST_CHORUS
#undef CONN_DST_EG1_ATTACKTIME
#undef CONN_DST_EG1_DECAYTIME
#undef CONN_DST_EG1_DELAYTIME
#undef CONN_DST_EG1_HOLDTIME
#undef CONN_DST_EG1_RELEASETIME
#undef CONN_DST_EG1_SHUTDOWNTIME
#undef CONN_DST_EG1_SUSTAINLEVEL
#undef CONN_DST_EG2_ATTACKTIME
#undef CONN_DST_EG2_DECAYTIME
#undef CONN_DST_EG2_DELAYTIME
#undef CONN_DST_EG2_HOLDTIME
#undef CONN_DST_EG2_RELEASETIME
#undef CONN_DST_EG2_SUSTAINLEVEL
#undef CONN_DST_FILTER_CUTOFF
#undef CONN_DST_FILTER_Q
#undef CONN_DST_GAIN
#undef CONN_DST_KEYNUMBER
#undef CONN_DST_LFO_FREQUENCY
#undef CONN_DST_LFO_STARTDELAY
#undef CONN_DST_NONE
#undef CONN_DST_PAN
#undef CONN_DST_PITCH
#undef CONN_DST_REVERB
#undef CONN_DST_VIB_FREQUENCY
#undef CONN_DST_VIB_STARTDELAY
#undef CONN_SRC_CC1
#undef CONN_SRC_CC10
#undef CONN_SRC_CC11
#undef CONN_SRC_CC7
#undef CONN_SRC_CC91
#undef CONN_SRC_CC93
#undef CONN_SRC_CHANNELPRESSURE
#undef CONN_SRC_EG1
#undef CONN_SRC_EG2
#undef CONN_SRC_KEYNUMBER
#undef CONN_SRC_KEYONVELOCITY
#undef CONN_SRC_LFO
#undef CONN_SRC_MONOPRESSURE
#undef CONN_SRC_NONE
#undef CONN_SRC_PITCHWHEEL
#undef CONN_SRC_POLYPRESSURE
#undef CONN_SRC_RPN0
#undef CONN_SRC_RPN1
#undef CONN_SRC_VIBRATO
#undef CONN_TRN_CONCAVE
#undef CONN_TRN_CONVEX
#undef CONN_TRN_SWITCH
#undef DESTINATION_CHORUS
#undef DESTINATION_EG1_ATTACK
#undef DESTINATION_EG1_DECAY
#undef DESTINATION_EG1_DELAY
#undef DESTINATION_EG1_HOLD
#undef DESTINATION_EG1_RELEASE
#undef DESTINATION_EG1_SHUTDOWN
#undef DESTINATION_EG1_SUSTAIN
#undef DESTINATION_EG2_ATTACK
#undef DESTINATION_EG2_DECAY
#undef DESTINATION_EG2_DELAY
#undef DESTINATION_EG2_HOLD
#undef DESTINATION_EG2_RELEASE
#undef DESTINATION_EG2_SUSTAIN
#undef DESTINATION_FILTER_FREQ
#undef DESTINATION_FILTER_Q
#undef DESTINATION_GAIN
#undef DESTINATION_KEYNUMBER
#undef DESTINATION_LFO1_DELAY
#undef DESTINATION_LFO1_FREQ
#undef DESTINATION_LFO2_DELAY
#undef DESTINATION_LFO2_FREQ
#undef DESTINATION_PAN
#undef DESTINATION_PITCH
#undef DESTINATION_REVERB
#undef DIRECTION_MAX2MIN
#undef FILTERTYPE_LP12
#undef LOOP_TYPE_FORWARD
#undef LOOP_TYPE_RELEASE
#undef MIN_VALUE
#undef NEGATIVE_INFINITY
#undef OPTION_SELFNONEXCLUSIVE
#undef POLARITY_BIPOLAR
#undef SOURCE_EG1
#undef SOURCE_EG2
#undef SOURCE_LFO1
#undef SOURCE_LFO2
#undef SOURCE_MIDI_CHANNEL_PRESSURE
#undef SOURCE_MIDI_PITCH
#undef SOURCE_MIDI_POLY_PRESSURE
#undef SOURCE_NOTEON_KEYNUMBER
#undef SOURCE_NOTEON_VELOCITY
#undef TRANSFORM_CONCAVE
#undef TRANSFORM_CONVEX
#undef TRANSFORM_LINEAR
#undef TRANSFORM_SWITCH

using $ModelPerformerArray = $Array<::com::sun::media::sound::ModelPerformer>;
using $DLSInfo = ::com::sun::media::sound::DLSInfo;
using $DLSModulator = ::com::sun::media::sound::DLSModulator;
using $DLSRegion = ::com::sun::media::sound::DLSRegion;
using $DLSSample = ::com::sun::media::sound::DLSSample;
using $DLSSampleLoop = ::com::sun::media::sound::DLSSampleLoop;
using $DLSSampleOptions = ::com::sun::media::sound::DLSSampleOptions;
using $DLSSoundbank = ::com::sun::media::sound::DLSSoundbank;
using $ModelByteBuffer = ::com::sun::media::sound::ModelByteBuffer;
using $ModelByteBufferWavetable = ::com::sun::media::sound::ModelByteBufferWavetable;
using $ModelConnectionBlock = ::com::sun::media::sound::ModelConnectionBlock;
using $ModelDestination = ::com::sun::media::sound::ModelDestination;
using $ModelIdentifier = ::com::sun::media::sound::ModelIdentifier;
using $ModelInstrument = ::com::sun::media::sound::ModelInstrument;
using $ModelPatch = ::com::sun::media::sound::ModelPatch;
using $ModelPerformer = ::com::sun::media::sound::ModelPerformer;
using $ModelSource = ::com::sun::media::sound::ModelSource;
using $ModelStandardTransform = ::com::sun::media::sound::ModelStandardTransform;
using $ModelWavetable = ::com::sun::media::sound::ModelWavetable;
using $SoftFilter = ::com::sun::media::sound::SoftFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Patch = ::javax::sound::midi::Patch;
using $Soundbank = ::javax::sound::midi::Soundbank;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _DLSInstrument_FieldInfo_[] = {
	{"preset", "I", nullptr, 0, $field(DLSInstrument, preset)},
	{"bank", "I", nullptr, 0, $field(DLSInstrument, bank)},
	{"druminstrument", "Z", nullptr, 0, $field(DLSInstrument, druminstrument)},
	{"guid", "[B", nullptr, 0, $field(DLSInstrument, guid)},
	{"info", "Lcom/sun/media/sound/DLSInfo;", nullptr, 0, $field(DLSInstrument, info)},
	{"regions", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/media/sound/DLSRegion;>;", 0, $field(DLSInstrument, regions)},
	{"modulators", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/media/sound/DLSModulator;>;", 0, $field(DLSInstrument, modulators)},
	{}
};

$MethodInfo _DLSInstrument_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DLSInstrument::*)()>(&DLSInstrument::init$))},
	{"<init>", "(Lcom/sun/media/sound/DLSSoundbank;)V", nullptr, $PUBLIC, $method(static_cast<void(DLSInstrument::*)($DLSSoundbank*)>(&DLSInstrument::init$))},
	{"convertToModel", "(Lcom/sun/media/sound/DLSModulator;)Lcom/sun/media/sound/ModelConnectionBlock;", nullptr, $PRIVATE, $method(static_cast<$ModelConnectionBlock*(DLSInstrument::*)($DLSModulator*)>(&DLSInstrument::convertToModel))},
	{"convertToModelDest", "(I)Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PRIVATE, $method(static_cast<$ModelIdentifier*(DLSInstrument::*)(int32_t)>(&DLSInstrument::convertToModelDest))},
	{"convertToModelSrc", "(I)Lcom/sun/media/sound/ModelIdentifier;", nullptr, $PRIVATE, $method(static_cast<$ModelIdentifier*(DLSInstrument::*)(int32_t)>(&DLSInstrument::convertToModelSrc))},
	{"getData", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getGuid", "()[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(DLSInstrument::*)()>(&DLSInstrument::getGuid))},
	{"getInfo", "()Lcom/sun/media/sound/DLSInfo;", nullptr, $PUBLIC, $method(static_cast<$DLSInfo*(DLSInstrument::*)()>(&DLSInstrument::getInfo))},
	{"getModulators", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/media/sound/DLSModulator;>;", $PUBLIC, $method(static_cast<$List*(DLSInstrument::*)()>(&DLSInstrument::getModulators))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPatch", "()Lcom/sun/media/sound/ModelPatch;", nullptr, $PUBLIC},
	{"getPerformers", "()[Lcom/sun/media/sound/ModelPerformer;", nullptr, $PUBLIC},
	{"getRegions", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/media/sound/DLSRegion;>;", $PUBLIC, $method(static_cast<$List*(DLSInstrument::*)()>(&DLSInstrument::getRegions))},
	{"setGuid", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(DLSInstrument::*)($bytes*)>(&DLSInstrument::setGuid))},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DLSInstrument::*)($String*)>(&DLSInstrument::setName))},
	{"setPatch", "(Ljavax/sound/midi/Patch;)V", nullptr, $PUBLIC, $method(static_cast<void(DLSInstrument::*)($Patch*)>(&DLSInstrument::setPatch))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DLSInstrument_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.DLSInstrument",
	"com.sun.media.sound.ModelInstrument",
	nullptr,
	_DLSInstrument_FieldInfo_,
	_DLSInstrument_MethodInfo_
};

$Object* allocate$DLSInstrument($Class* clazz) {
	return $of($alloc(DLSInstrument));
}

void DLSInstrument::init$() {
	$ModelInstrument::init$(nullptr, nullptr, nullptr, nullptr);
	this->preset = 0;
	this->bank = 0;
	this->druminstrument = false;
	$set(this, guid, nullptr);
	$set(this, info, $new($DLSInfo));
	$set(this, regions, $new($ArrayList));
	$set(this, modulators, $new($ArrayList));
}

void DLSInstrument::init$($DLSSoundbank* soundbank) {
	$ModelInstrument::init$(soundbank, nullptr, nullptr, nullptr);
	this->preset = 0;
	this->bank = 0;
	this->druminstrument = false;
	$set(this, guid, nullptr);
	$set(this, info, $new($DLSInfo));
	$set(this, regions, $new($ArrayList));
	$set(this, modulators, $new($ArrayList));
}

$DLSInfo* DLSInstrument::getInfo() {
	return this->info;
}

$String* DLSInstrument::getName() {
	return $nc(this->info)->name;
}

void DLSInstrument::setName($String* name) {
	$set($nc(this->info), name, name);
}

$Patch* DLSInstrument::getPatch() {
	return $new($ModelPatch, this->bank, this->preset, this->druminstrument);
}

void DLSInstrument::setPatch($Patch* patch) {
	if ($instanceOf($ModelPatch, patch) && $nc(($cast($ModelPatch, patch)))->isPercussion()) {
		this->druminstrument = true;
		this->bank = $nc(patch)->getBank();
		this->preset = patch->getProgram();
	} else {
		this->druminstrument = false;
		this->bank = $nc(patch)->getBank();
		this->preset = patch->getProgram();
	}
}

$Object* DLSInstrument::getData() {
	return $of(nullptr);
}

$List* DLSInstrument::getRegions() {
	return this->regions;
}

$List* DLSInstrument::getModulators() {
	return this->modulators;
}

$String* DLSInstrument::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->druminstrument) {
		return $str({"Drumkit: "_s, $nc(this->info)->name, " bank #"_s, $$str(this->bank), " preset #"_s, $$str(this->preset)});
	} else {
		return $str({"Instrument: "_s, $nc(this->info)->name, " bank #"_s, $$str(this->bank), " preset #"_s, $$str(this->preset)});
	}
}

$ModelIdentifier* DLSInstrument::convertToModelDest(int32_t dest) {
	if (dest == $DLSModulator::CONN_DST_NONE) {
		return nullptr;
	}
	if (dest == $DLSModulator::CONN_DST_GAIN) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_GAIN;
	}
	if (dest == $DLSModulator::CONN_DST_PITCH) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_PITCH;
	}
	if (dest == $DLSModulator::CONN_DST_PAN) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_PAN;
	}
	if (dest == $DLSModulator::CONN_DST_LFO_FREQUENCY) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_LFO1_FREQ;
	}
	if (dest == $DLSModulator::CONN_DST_LFO_STARTDELAY) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_LFO1_DELAY;
	}
	if (dest == $DLSModulator::CONN_DST_EG1_ATTACKTIME) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_EG1_ATTACK;
	}
	if (dest == $DLSModulator::CONN_DST_EG1_DECAYTIME) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_EG1_DECAY;
	}
	if (dest == $DLSModulator::CONN_DST_EG1_RELEASETIME) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_EG1_RELEASE;
	}
	if (dest == $DLSModulator::CONN_DST_EG1_SUSTAINLEVEL) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_EG1_SUSTAIN;
	}
	if (dest == $DLSModulator::CONN_DST_EG2_ATTACKTIME) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_EG2_ATTACK;
	}
	if (dest == $DLSModulator::CONN_DST_EG2_DECAYTIME) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_EG2_DECAY;
	}
	if (dest == $DLSModulator::CONN_DST_EG2_RELEASETIME) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_EG2_RELEASE;
	}
	if (dest == $DLSModulator::CONN_DST_EG2_SUSTAINLEVEL) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_EG2_SUSTAIN;
	}
	if (dest == $DLSModulator::CONN_DST_KEYNUMBER) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_KEYNUMBER;
	}
	if (dest == $DLSModulator::CONN_DST_CHORUS) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_CHORUS;
	}
	if (dest == $DLSModulator::CONN_DST_REVERB) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_REVERB;
	}
	if (dest == $DLSModulator::CONN_DST_VIB_FREQUENCY) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_LFO2_FREQ;
	}
	if (dest == $DLSModulator::CONN_DST_VIB_STARTDELAY) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_LFO2_DELAY;
	}
	if (dest == $DLSModulator::CONN_DST_EG1_DELAYTIME) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_EG1_DELAY;
	}
	if (dest == $DLSModulator::CONN_DST_EG1_HOLDTIME) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_EG1_HOLD;
	}
	if (dest == $DLSModulator::CONN_DST_EG1_SHUTDOWNTIME) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_EG1_SHUTDOWN;
	}
	if (dest == $DLSModulator::CONN_DST_EG2_DELAYTIME) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_EG2_DELAY;
	}
	if (dest == $DLSModulator::CONN_DST_EG2_HOLDTIME) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_EG2_HOLD;
	}
	if (dest == $DLSModulator::CONN_DST_FILTER_CUTOFF) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_FILTER_FREQ;
	}
	if (dest == $DLSModulator::CONN_DST_FILTER_Q) {
		$init($ModelDestination);
		return $ModelDestination::DESTINATION_FILTER_Q;
	}
	return nullptr;
}

$ModelIdentifier* DLSInstrument::convertToModelSrc(int32_t src) {
	if (src == $DLSModulator::CONN_SRC_NONE) {
		return nullptr;
	}
	if (src == $DLSModulator::CONN_SRC_LFO) {
		$init($ModelSource);
		return $ModelSource::SOURCE_LFO1;
	}
	if (src == $DLSModulator::CONN_SRC_KEYONVELOCITY) {
		$init($ModelSource);
		return $ModelSource::SOURCE_NOTEON_VELOCITY;
	}
	if (src == $DLSModulator::CONN_SRC_KEYNUMBER) {
		$init($ModelSource);
		return $ModelSource::SOURCE_NOTEON_KEYNUMBER;
	}
	if (src == $DLSModulator::CONN_SRC_EG1) {
		$init($ModelSource);
		return $ModelSource::SOURCE_EG1;
	}
	if (src == $DLSModulator::CONN_SRC_EG2) {
		$init($ModelSource);
		return $ModelSource::SOURCE_EG2;
	}
	if (src == $DLSModulator::CONN_SRC_PITCHWHEEL) {
		$init($ModelSource);
		return $ModelSource::SOURCE_MIDI_PITCH;
	}
	if (src == $DLSModulator::CONN_SRC_CC1) {
		return $new($ModelIdentifier, "midi_cc"_s, "1"_s, 0);
	}
	if (src == $DLSModulator::CONN_SRC_CC7) {
		return $new($ModelIdentifier, "midi_cc"_s, "7"_s, 0);
	}
	if (src == $DLSModulator::CONN_SRC_CC10) {
		return $new($ModelIdentifier, "midi_cc"_s, "10"_s, 0);
	}
	if (src == $DLSModulator::CONN_SRC_CC11) {
		return $new($ModelIdentifier, "midi_cc"_s, "11"_s, 0);
	}
	if (src == $DLSModulator::CONN_SRC_RPN0) {
		return $new($ModelIdentifier, "midi_rpn"_s, "0"_s, 0);
	}
	if (src == $DLSModulator::CONN_SRC_RPN1) {
		return $new($ModelIdentifier, "midi_rpn"_s, "1"_s, 0);
	}
	if (src == $DLSModulator::CONN_SRC_POLYPRESSURE) {
		$init($ModelSource);
		return $ModelSource::SOURCE_MIDI_POLY_PRESSURE;
	}
	if (src == $DLSModulator::CONN_SRC_CHANNELPRESSURE) {
		$init($ModelSource);
		return $ModelSource::SOURCE_MIDI_CHANNEL_PRESSURE;
	}
	if (src == $DLSModulator::CONN_SRC_VIBRATO) {
		$init($ModelSource);
		return $ModelSource::SOURCE_LFO2;
	}
	if (src == $DLSModulator::CONN_SRC_MONOPRESSURE) {
		$init($ModelSource);
		return $ModelSource::SOURCE_MIDI_CHANNEL_PRESSURE;
	}
	if (src == $DLSModulator::CONN_SRC_CC91) {
		return $new($ModelIdentifier, "midi_cc"_s, "91"_s, 0);
	}
	if (src == $DLSModulator::CONN_SRC_CC93) {
		return $new($ModelIdentifier, "midi_cc"_s, "93"_s, 0);
	}
	return nullptr;
}

$ModelConnectionBlock* DLSInstrument::convertToModel($DLSModulator* mod) {
	$useLocalCurrentObjectStackCache();
	$var($ModelIdentifier, source, convertToModelSrc($nc(mod)->getSource()));
	$var($ModelIdentifier, control, convertToModelSrc($nc(mod)->getControl()));
	$var($ModelIdentifier, destination_id, convertToModelDest($nc(mod)->getDestination()));
	int32_t scale = $nc(mod)->getScale();
	double f_scale = 0.0;
	if (scale == $Integer::MIN_VALUE) {
		$init($Double);
		f_scale = $Double::NEGATIVE_INFINITY;
	} else {
		f_scale = scale / 65536.0;
	}
	if (destination_id != nullptr) {
		$var($ModelSource, src, nullptr);
		$var($ModelSource, ctrl, nullptr);
		$var($ModelConnectionBlock, block, $new($ModelConnectionBlock));
		if (control != nullptr) {
			$var($ModelSource, s, $new($ModelSource));
			$init($ModelSource);
			if (control == $ModelSource::SOURCE_MIDI_PITCH) {
				$nc(($cast($ModelStandardTransform, $(s->getTransform()))))->setPolarity($ModelStandardTransform::POLARITY_BIPOLAR);
			} else {
				if (control == $ModelSource::SOURCE_LFO1 || control == $ModelSource::SOURCE_LFO2) {
					$nc(($cast($ModelStandardTransform, $(s->getTransform()))))->setPolarity($ModelStandardTransform::POLARITY_BIPOLAR);
				}
			}
			s->setIdentifier(control);
			block->addSource(s);
			$assign(ctrl, s);
		}
		if (source != nullptr) {
			$var($ModelSource, s, $new($ModelSource));
			$init($ModelSource);
			if (source == $ModelSource::SOURCE_MIDI_PITCH) {
				$nc(($cast($ModelStandardTransform, $(s->getTransform()))))->setPolarity($ModelStandardTransform::POLARITY_BIPOLAR);
			} else {
				if (source == $ModelSource::SOURCE_LFO1 || source == $ModelSource::SOURCE_LFO2) {
					$nc(($cast($ModelStandardTransform, $(s->getTransform()))))->setPolarity($ModelStandardTransform::POLARITY_BIPOLAR);
				}
			}
			s->setIdentifier(source);
			block->addSource(s);
			$assign(src, s);
		}
		$var($ModelDestination, destination, $new($ModelDestination));
		destination->setIdentifier(destination_id);
		block->setDestination(destination);
		if (mod->getVersion() == 1) {
			if (mod->getTransform() == $DLSModulator::CONN_TRN_CONCAVE) {
				if (src != nullptr) {
					$nc(($cast($ModelStandardTransform, $(src->getTransform()))))->setTransform($ModelStandardTransform::TRANSFORM_CONCAVE);
					$nc(($cast($ModelStandardTransform, $(src->getTransform()))))->setDirection($ModelStandardTransform::DIRECTION_MAX2MIN);
				}
				if (ctrl != nullptr) {
					$nc(($cast($ModelStandardTransform, $(ctrl->getTransform()))))->setTransform($ModelStandardTransform::TRANSFORM_CONCAVE);
					$nc(($cast($ModelStandardTransform, $(ctrl->getTransform()))))->setDirection($ModelStandardTransform::DIRECTION_MAX2MIN);
				}
			}
		} else if (mod->getVersion() == 2) {
			int32_t transform = mod->getTransform();
			int32_t src_transform_invert = (int32_t)((transform >> 15) & (uint32_t)1);
			int32_t src_transform_bipolar = (int32_t)((transform >> 14) & (uint32_t)1);
			int32_t src_transform = (int32_t)((transform >> 10) & (uint32_t)8);
			int32_t ctr_transform_invert = (int32_t)((transform >> 9) & (uint32_t)1);
			int32_t ctr_transform_bipolar = (int32_t)((transform >> 8) & (uint32_t)1);
			int32_t ctr_transform = (int32_t)((transform >> 4) & (uint32_t)8);
			if (src != nullptr) {
				int32_t trans = $ModelStandardTransform::TRANSFORM_LINEAR;
				if (src_transform == $DLSModulator::CONN_TRN_SWITCH) {
					trans = $ModelStandardTransform::TRANSFORM_SWITCH;
				}
				if (src_transform == $DLSModulator::CONN_TRN_CONCAVE) {
					trans = $ModelStandardTransform::TRANSFORM_CONCAVE;
				}
				if (src_transform == $DLSModulator::CONN_TRN_CONVEX) {
					trans = $ModelStandardTransform::TRANSFORM_CONVEX;
				}
				$nc(($cast($ModelStandardTransform, $(src->getTransform()))))->setTransform(trans);
				$nc(($cast($ModelStandardTransform, $(src->getTransform()))))->setPolarity(src_transform_bipolar == 1);
				$nc(($cast($ModelStandardTransform, $(src->getTransform()))))->setDirection(src_transform_invert == 1);
			}
			if (ctrl != nullptr) {
				int32_t trans = $ModelStandardTransform::TRANSFORM_LINEAR;
				if (ctr_transform == $DLSModulator::CONN_TRN_SWITCH) {
					trans = $ModelStandardTransform::TRANSFORM_SWITCH;
				}
				if (ctr_transform == $DLSModulator::CONN_TRN_CONCAVE) {
					trans = $ModelStandardTransform::TRANSFORM_CONCAVE;
				}
				if (ctr_transform == $DLSModulator::CONN_TRN_CONVEX) {
					trans = $ModelStandardTransform::TRANSFORM_CONVEX;
				}
				$nc(($cast($ModelStandardTransform, $(ctrl->getTransform()))))->setTransform(trans);
				$nc(($cast($ModelStandardTransform, $(ctrl->getTransform()))))->setPolarity(ctr_transform_bipolar == 1);
				$nc(($cast($ModelStandardTransform, $(ctrl->getTransform()))))->setDirection(ctr_transform_invert == 1);
			}
		}
		block->setScale(f_scale);
		return block;
	}
	return nullptr;
}

$ModelPerformerArray* DLSInstrument::getPerformers() {
	$useLocalCurrentObjectStackCache();
	$var($List, performers, $new($ArrayList));
	$var($Map, modmap, $new($HashMap));
	{
		$var($Iterator, i$, $nc($(getModulators()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DLSModulator, mod, $cast($DLSModulator, i$->next()));
			{
				$var($String, var$2, $$str({$$str($nc(mod)->getSource()), "x"_s}));
				$var($String, var$1, $$concat(var$2, $$str(mod->getControl())));
				$var($String, var$0, $$concat(var$1, "="_s));
				modmap->put($$concat(var$0, $$str(mod->getDestination())), mod);
			}
		}
	}
	$var($Map, insmodmap, $new($HashMap));
	{
		$var($Iterator, i$, $nc(this->regions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DLSRegion, zone, $cast($DLSRegion, i$->next()));
			{
				$var($ModelPerformer, performer, $new($ModelPerformer));
				performer->setName($($nc($($nc(zone)->getSample()))->getName()));
				performer->setSelfNonExclusive(((int32_t)($nc(zone)->getFusoptions() & (uint32_t)$DLSRegion::OPTION_SELFNONEXCLUSIVE)) != 0);
				performer->setExclusiveClass($nc(zone)->getExclusiveClass());
				performer->setKeyFrom($nc(zone)->getKeyfrom());
				performer->setKeyTo($nc(zone)->getKeyto());
				performer->setVelFrom($nc(zone)->getVelfrom());
				performer->setVelTo($nc(zone)->getVelto());
				insmodmap->clear();
				insmodmap->putAll(modmap);
				{
					$var($Iterator, i$, $nc($($nc(zone)->getModulators()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($DLSModulator, mod, $cast($DLSModulator, i$->next()));
						{
							$var($String, var$5, $$str({$$str($nc(mod)->getSource()), "x"_s}));
							$var($String, var$4, $$concat(var$5, $$str(mod->getControl())));
							$var($String, var$3, $$concat(var$4, "="_s));
							insmodmap->put($$concat(var$3, $$str(mod->getDestination())), mod);
						}
					}
				}
				$var($List, blocks, performer->getConnectionBlocks());
				{
					$var($Iterator, i$, $nc($(insmodmap->values()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($DLSModulator, mod, $cast($DLSModulator, i$->next()));
						{
							$var($ModelConnectionBlock, p, convertToModel(mod));
							if (p != nullptr) {
								$nc(blocks)->add(p);
							}
						}
					}
				}
				$var($DLSSample, sample, zone->getSample());
				$var($DLSSampleOptions, sampleopt, zone->getSampleoptions());
				if (sampleopt == nullptr) {
					$assign(sampleopt, $nc(sample)->getSampleoptions());
				}
				$var($ModelByteBuffer, buff, $nc(sample)->getDataBuffer());
				float pitchcorrection = (float)((-$nc(sampleopt)->unitynote * 100) + sampleopt->finetune);
				$var($ModelByteBufferWavetable, osc, $new($ModelByteBufferWavetable, buff, $(sample->getFormat()), pitchcorrection));
				osc->setAttenuation(osc->getAttenuation() / 65536.0f);
				if ($nc($(sampleopt->getLoops()))->size() != 0) {
					$var($DLSSampleLoop, loop, $cast($DLSSampleLoop, $nc($(sampleopt->getLoops()))->get(0)));
					osc->setLoopStart((float)(int32_t)$nc(loop)->getStart());
					osc->setLoopLength((float)(int32_t)$nc(loop)->getLength());
					if ($nc(loop)->getType() == $DLSSampleLoop::LOOP_TYPE_FORWARD) {
						osc->setLoopType($ModelWavetable::LOOP_TYPE_FORWARD);
					}
					if ($nc(loop)->getType() == $DLSSampleLoop::LOOP_TYPE_RELEASE) {
						osc->setLoopType($ModelWavetable::LOOP_TYPE_RELEASE);
					} else {
						osc->setLoopType($ModelWavetable::LOOP_TYPE_FORWARD);
					}
				}
				$nc($(performer->getConnectionBlocks()))->add($$new($ModelConnectionBlock, (double)$SoftFilter::FILTERTYPE_LP12, $$new($ModelDestination, $$new($ModelIdentifier, "filter"_s, "type"_s, 1))));
				$nc($(performer->getOscillators()))->add(osc);
				performers->add(performer);
			}
		}
	}
	return $fcast($ModelPerformerArray, performers->toArray($$new($ModelPerformerArray, performers->size())));
}

$bytes* DLSInstrument::getGuid() {
	return this->guid == nullptr ? ($bytes*)nullptr : $Arrays::copyOf(this->guid, $nc(this->guid)->length);
}

void DLSInstrument::setGuid($bytes* guid) {
	$set(this, guid, guid == nullptr ? ($bytes*)nullptr : $Arrays::copyOf(guid, $nc(guid)->length));
}

DLSInstrument::DLSInstrument() {
}

$Class* DLSInstrument::load$($String* name, bool initialize) {
	$loadClass(DLSInstrument, name, initialize, &_DLSInstrument_ClassInfo_, allocate$DLSInstrument);
	return class$;
}

$Class* DLSInstrument::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com