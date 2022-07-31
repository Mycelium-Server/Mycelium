#include "piglin_brute_metadata.h"

PiglinBruteMetadata::PiglinBruteMetadata() = default;
PiglinBruteMetadata::~PiglinBruteMetadata() = default;

void PiglinBruteMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  BasePiglinMetadata::wrapperWrite(wrapper);
}
