
#include "monster_metadata.h"

MonsterMetadata::MonsterMetadata() = default;
MonsterMetadata::~MonsterMetadata() = default;

void MonsterMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  PathfinderMobMetadata::wrapperWrite(wrapper);
}
