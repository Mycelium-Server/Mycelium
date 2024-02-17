
#include "zombiefied_piglin_metadata.h"

ZombiefiedPiglinMetadata::ZombiefiedPiglinMetadata() = default;
ZombiefiedPiglinMetadata::~ZombiefiedPiglinMetadata() = default;

void ZombiefiedPiglinMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  ZombieMetadata::wrapperWrite(wrapper);
}