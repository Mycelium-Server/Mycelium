#include "puffer_fish_metadata.h"

PufferFishMetadata::PufferFishMetadata() = default;
PufferFishMetadata::~PufferFishMetadata() = default;

void PufferFishMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractFishMetadata::wrapperWrite(wrapper);
  wrapper.writeVarInt(17, puffState);
}
