#include "wandering_trader_metadata.h"

WanderingTraderMetadata::WanderingTraderMetadata() = default;
WanderingTraderMetadata::~WanderingTraderMetadata() = default;

void WanderingTraderMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AbstractVillagerMetadata::wrapperWrite(wrapper);
}
