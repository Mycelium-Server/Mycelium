#pragma once

#include "abstract_horse_metadata.h"

class ChestedHorseMetadata : public AbstractHorseMetadata {
public:
    ChestedHorseMetadata();
    ~ChestedHorseMetadata() override;

public:
    void wrapperWrite(MetadataBuffer &) override;

public:
    bool hasChest = false;

};