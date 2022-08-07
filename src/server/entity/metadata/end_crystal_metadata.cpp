#include "end_crystal_metadata.h"

EndCrystalMetadata::EndCrystalMetadata() = default;
EndCrystalMetadata::~EndCrystalMetadata() = default;

void EndCrystalMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  EntityMetadata::wrapperWrite(wrapper);
  wrapper.writeOptPosition(8, beamTarget);
  wrapper.writeByte(9, showBottom);
}
