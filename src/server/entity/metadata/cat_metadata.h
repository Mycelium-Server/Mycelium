#pragma once

#include "tameable_animal_metadata.h"
#include "cat_variant.h"

class CatMetadata : public TameableAnimalMetadata {
public:
    CatMetadata();
    ~CatMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

public:
    CatVariant type = CatVariant::CAT_BLACK;
    bool isLying = false;
    bool isRelaxed = false;
    int collarColor = 14;

};