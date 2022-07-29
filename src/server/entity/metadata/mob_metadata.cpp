#include "mob_metadata.h"

MobMetadata::MobMetadata() = default;
MobMetadata::~MobMetadata() = default;

void MobMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    LivingEntityMetadata::wrapperWrite(wrapper);
    wrapper.writeByte(15, isAggressive << 2 | isLeftHanded << 1 | noAI);
}
