#include "cod_metadata.h"

CodMetadata::CodMetadata() = default;
CodMetadata::~CodMetadata() = default;

void CodMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractFishMetadata::wrapperWrite(wrapper);
}
