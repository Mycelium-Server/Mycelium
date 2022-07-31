#pragma once

#include "animal_metadata.h"

class FrogMetadata : public AnimalMetadata {
public:
    FrogMetadata();
    ~FrogMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

public:
    FrogVariant variant = (FrogVariant) 0;
    unsigned tongueTarget = 0;

};