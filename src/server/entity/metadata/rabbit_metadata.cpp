#include "rabbit_metadata.h"

RabbitMetadata::RabbitMetadata() = default;
RabbitMetadata::~RabbitMetadata() = default;

void RabbitMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AnimalMetadata::wrapperWrite(wrapper);
  wrapper.writeVarInt(17, type);
}
