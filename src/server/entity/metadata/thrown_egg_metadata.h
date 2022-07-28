#pragma once

#include "entity_metadata.h"

class ThrownEggMetadata : public EntityMetadata {
public:
    ThrownEggMetadata();
    ~ThrownEggMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

public:
    ItemStack item;

};