#pragma once

#include "animal_metadata.h"

class AxolotlMetadata : public AnimalMetadata {
public:
    AxolotlMetadata();
    ~AxolotlMetadata() override;

public:
    void wrapperWrite(MetadataBuffer &) override;

public:
    int variant = 0;
    bool playingDead = false;
    bool fromBucket = false;

};