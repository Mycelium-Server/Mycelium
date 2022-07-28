#include "falling_block.h"

FallingBlockMetadata::FallingBlockMetadata() = default;
FallingBlockMetadata::~FallingBlockMetadata() = default;

void FallingBlockMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    EntityMetadata::wrapperWrite(wrapper);
    wrapper.writePosition(8, spawnPosition);
}
