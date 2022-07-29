#pragma once

#include "abstract_fish_metadata.h"

class SalmonMetadata : public AbstractFishMetadata {
public:
    SalmonMetadata();
    ~SalmonMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

};