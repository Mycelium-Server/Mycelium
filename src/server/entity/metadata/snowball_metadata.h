#pragma once

#include "entity_metadata.h"

class SnowballMetadata : public EntityMetadata {
public:
    SnowballMetadata();
    ~SnowballMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

public:
    ItemStack item;

};