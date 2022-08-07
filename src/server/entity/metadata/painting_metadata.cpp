#include "painting_metadata.h"

PaintingMetadata::PaintingMetadata() = default;
PaintingMetadata::~PaintingMetadata() = default;

void PaintingMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  EntityMetadata::wrapperWrite(wrapper);
  wrapper.writePaintingVariant(8, paintingType);
}
