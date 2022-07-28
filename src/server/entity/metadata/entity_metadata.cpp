#include "entity_metadata.h"
#include "metadata_buffer.h"

EntityMetadata::EntityMetadata() = default;
EntityMetadata::~EntityMetadata() = default;

void EntityMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    wrapper.writeByte(0, bitfield.value);
    wrapper.writeVarInt(1, airTicks);
    wrapper.writeOptChat(2, customName);
    wrapper.writeBool(3, customNameVisible);
    wrapper.writeBool(4, isSilent);
    wrapper.writeBool(5, hasNoGravity);
    wrapper.writePose(6, pose);
    wrapper.writeVarInt(7, frozenTicks);
}
