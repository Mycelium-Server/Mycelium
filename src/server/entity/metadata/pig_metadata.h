#pragma once

#include "animal_metadata.h"

class PigMetadata : public AnimalMetadata {
public:
    PigMetadata();
    ~PigMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

public:
    bool hasSaddle = false;
    int boostTime = 0;

};