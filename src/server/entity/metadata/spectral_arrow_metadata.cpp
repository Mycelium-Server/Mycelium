#include "spectral_arrow_metadata.h"

SpectralArrowMetadata::SpectralArrowMetadata() = default;
SpectralArrowMetadata::~SpectralArrowMetadata() = default;

void SpectralArrowMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractArrowMetadata::wrapperWrite(wrapper);
}
