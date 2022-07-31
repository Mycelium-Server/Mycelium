#pragma once

#include "tameable_animal_metadata.h"

class ParrotMetadata : public TameableAnimalMetadata {
public:
    ParrotMetadata();
    ~ParrotMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

public:
    int variant = 0;

};