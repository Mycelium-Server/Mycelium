#include "cow_metadata.h"

CowMetadata::CowMetadata() = default;
CowMetadata::~CowMetadata() = default;

void CowMetadata::wrapperWrite(MetadataBuffer& wrapper) {
    AnimalMetadata::wrapperWrite(wrapper);
}
