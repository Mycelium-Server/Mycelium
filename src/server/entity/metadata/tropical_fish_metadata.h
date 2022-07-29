#pragma once

#include "abstract_fish_metadata.h"

class TropicalFishMetadata : public AbstractFishMetadata {
public:
    TropicalFishMetadata();
    ~TropicalFishMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

public:
    int variant = 0;

};