#pragma once

#include "animal_metadata.h"

class SheepMetadata : public AnimalMetadata {
public:
    SheepMetadata();
    ~SheepMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

public:
    int colorID = 0;
    bool isSheared = false;

};