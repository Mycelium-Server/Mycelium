#include "abstract_golem_metadata.h"

AbstractGolemMetadata::AbstractGolemMetadata() = default;
AbstractGolemMetadata::~AbstractGolemMetadata() = default;

void AbstractGolemMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    PathfinderMobMetadata::wrapperWrite(wrapper);
}
