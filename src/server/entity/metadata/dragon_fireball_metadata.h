#pragma once

#include "entity_metadata.h"

class DragonFireballMetadata : public EntityMetadata {
public:
    DragonFireballMetadata();
    ~DragonFireballMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

};