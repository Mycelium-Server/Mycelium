#pragma once

#include "entity_metadata.h"
#include "boat_type.h"

class BoatMetadata : public EntityMetadata {
public:
    BoatMetadata();
    ~BoatMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

public:
    int timeSinceLastHit = 0;
    int forwardDirection = 1;
    float damageTaken = 0;
    BoatType type = (BoatType) 0;
    bool leftPaddleTurning = false;
    bool rightPaddleTurning = false;
    int splashTimer = 0;

};