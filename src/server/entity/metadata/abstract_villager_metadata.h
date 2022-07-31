#pragma once

#include "ageable_mob_metadata.h"

class AbstractVillagerMetadata : public AgeableMobMetadata {
public:
    AbstractVillagerMetadata();
    ~AbstractVillagerMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

public:
    int headShakeTimer = 0;

};