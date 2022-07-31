#pragma once

#include "animal_metadata.h"

class ChickenMetadata : public AnimalMetadata {
public:
    ChickenMetadata();
    ~ChickenMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

};