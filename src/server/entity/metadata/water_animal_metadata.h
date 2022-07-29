#pragma once

#include "pathfinder_mob_metadata.h"

class WaterAnimalMetadata : public PathfinderMobMetadata {
public:
    WaterAnimalMetadata();
    ~WaterAnimalMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

};