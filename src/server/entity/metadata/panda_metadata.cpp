#include "panda_metadata.h"

PandaMetadata::PandaMetadata() = default;
PandaMetadata::~PandaMetadata() = default;

void PandaMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AnimalMetadata::wrapperWrite(wrapper);
  wrapper.writeVarInt(17, breedTimer);
  wrapper.writeVarInt(18, sneezeTimer);
  wrapper.writeVarInt(19, eatTimer);
  wrapper.writeByte(20, mainGene);
  wrapper.writeByte(21, hiddenGene);
  wrapper.writeByte(22, isSneezing << 1 |
                            isRolling << 2 |
                            isSitting << 3 |
                            isOnBack << 4);
}
