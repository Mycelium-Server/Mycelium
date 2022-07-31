#include "ocelot_metadata.h"

OcelotMetadata::OcelotMetadata() = default;
OcelotMetadata::~OcelotMetadata() = default;

void OcelotMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    AnimalMetadata::wrapperWrite(wrapper);
    wrapper.writeBool(17, isTrusting);
}
