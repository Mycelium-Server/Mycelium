#include "firework_rocket_entity_metadata.h"

FireworkRocketEntityMetadata::FireworkRocketEntityMetadata() = default;
FireworkRocketEntityMetadata::~FireworkRocketEntityMetadata() = default;

void FireworkRocketEntityMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    EntityMetadata::wrapperWrite(wrapper);
    wrapper.writeItem(8, fireworkInfo);
    if (entity.has_value()) {
        wrapper.writeOptVarInt(9, { entity.value()->getEID() });
    } else {
        wrapper.writeOptVarInt(9, {});
    }
    wrapper.writeBool(10, shotFromCrossbow);
}
