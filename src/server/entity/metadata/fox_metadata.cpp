#include "fox_metadata.h"

FoxMetadata::FoxMetadata() = default;
FoxMetadata::~FoxMetadata() = default;

void FoxMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AnimalMetadata::wrapperWrite(wrapper);
  wrapper.writeVarInt(17, (int) isSnow);
  wrapper.writeByte(18, isDefending << 7 |
                            isFaceplanted << 6 |
                            isSleeping << 5 |
                            isPouncing << 4 |
                            isInterested << 3 |
                            isCrouching << 2 |
                            isSitting);
  wrapper.writeOptUUID(19, firstUUID);
  wrapper.writeOptUUID(20, secondUUID);
}
