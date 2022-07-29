#pragma once

#include "ageable_mob_metadata.h"

class AnimalMetadata : public AgeableMobMetadata {
public:
    AnimalMetadata();
    ~AnimalMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

};