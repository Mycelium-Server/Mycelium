#pragma once

#include "entity_metadata.h"
#include "../entity.h"

class FishingHookMetadata : public EntityMetadata {
public:
    FishingHookMetadata();
    ~FishingHookMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

public:
    std::optional<Entity*> hookedEntity;
    bool isCatchable = false;

};