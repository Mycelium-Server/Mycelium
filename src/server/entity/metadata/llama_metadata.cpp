#include "llama_metadata.h"

LlamaMetadata::LlamaMetadata() = default;
LlamaMetadata::~LlamaMetadata() = default;

void LlamaMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  ChestedHorseMetadata::wrapperWrite(wrapper);
  wrapper.writeVarInt(20, strength);
  wrapper.writeVarInt(21, carpetColor);
  wrapper.writeVarInt(22, variant);
}
