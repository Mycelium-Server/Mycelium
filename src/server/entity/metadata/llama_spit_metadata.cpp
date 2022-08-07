#include "llama_spit_metadata.h"

LlamaSpitMetadata::LlamaSpitMetadata() = default;
LlamaSpitMetadata::~LlamaSpitMetadata() = default;

void LlamaSpitMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  EntityMetadata::wrapperWrite(wrapper);
  wrapper.writeVarInt(8, shakingPower);
  wrapper.writeVarInt(9, shakingDirection);
  wrapper.writeFloat(10, shakingMultiplier);
  wrapper.writeVarInt(11, customBlockIDAndDamage);
  wrapper.writeVarInt(12, customBlockYposition);
  wrapper.writeBool(13, showCustomBlock);
}
