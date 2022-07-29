#pragma once

#include "chested_horse_metadata.h"

class DonkeyMetadata : public ChestedHorseMetadata {
public:
    DonkeyMetadata();
    ~DonkeyMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

};