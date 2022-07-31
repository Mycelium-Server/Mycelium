#include "parrot_metadata.h"

ParrotMetadata::ParrotMetadata() = default;
ParrotMetadata::~ParrotMetadata() = default;

void ParrotMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  TameableAnimalMetadata::wrapperWrite(wrapper);
  wrapper.writeVarInt(19, variant);
}
