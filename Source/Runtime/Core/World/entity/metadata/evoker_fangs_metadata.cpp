
#include "evoker_fangs_metadata.h"

EvokerFangsMetadata::EvokerFangsMetadata() = default;
EvokerFangsMetadata::~EvokerFangsMetadata() = default;

void EvokerFangsMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  EntityMetadata::wrapperWrite(wrapper);
}
