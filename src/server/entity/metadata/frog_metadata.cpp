#include "frog_metadata.h"

FrogMetadata::FrogMetadata() = default;
FrogMetadata::~FrogMetadata() = default;

void FrogMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    AnimalMetadata::wrapperWrite(wrapper);
    wrapper.writeFrogVariant(17, variant);
    wrapper.writeVarInt(18, (int) tongueTarget);
}
