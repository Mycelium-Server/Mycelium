#pragma once

#include "chested_horse_metadata.h"

class MuleMetadata : public ChestedHorseMetadata {
public:
    MuleMetadata();
    ~MuleMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

};