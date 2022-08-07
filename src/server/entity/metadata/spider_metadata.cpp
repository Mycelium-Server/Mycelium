#include "spider_metadata.h"

SpiderMetadata::SpiderMetadata() = default;
SpiderMetadata::~SpiderMetadata() = default;

void SpiderMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  MonsterMetadata::wrapperWrite(wrapper);
  wrapper.writeByte(16, isClimbing);
}
