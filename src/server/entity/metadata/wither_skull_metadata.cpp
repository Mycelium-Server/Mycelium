#include "wither_skull_metadata.h"

WitherSkullMetadata::WitherSkullMetadata() = default;
WitherSkullMetadata::~WitherSkullMetadata() = default;

void WitherSkullMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    EntityMetadata::wrapperWrite(wrapper);
    wrapper.writeBool(8, isInvulnerable);
}
