#include "zombie_horse_metadata.h"

ZombieHorseMetadata::ZombieHorseMetadata() = default;
ZombieHorseMetadata::~ZombieHorseMetadata() = default;

void ZombieHorseMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractHorseMetadata::wrapperWrite(wrapper);
}
