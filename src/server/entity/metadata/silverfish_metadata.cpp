#include "silverfish_metadata.h"

SilverfishMetadata::SilverfishMetadata() = default;
SilverfishMetadata::~SilverfishMetadata() = default;

void SilverfishMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    MonsterMetadata::wrapperWrite(wrapper);
}
