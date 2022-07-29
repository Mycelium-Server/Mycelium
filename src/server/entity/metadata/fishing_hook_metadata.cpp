#include "fishing_hook_metadata.h"

FishingHookMetadata::FishingHookMetadata() = default;
FishingHookMetadata::~FishingHookMetadata() = default;

void FishingHookMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    EntityMetadata::wrapperWrite(wrapper);
    if (hookedEntity.has_value()) {
        wrapper.writeVarInt(8, hookedEntity.value()->getEID() + 1);
    } else {
        wrapper.writeVarInt(8, 0);
    }
    wrapper.writeBool(9, isCatchable);
}
