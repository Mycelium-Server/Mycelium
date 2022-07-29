#pragma once

#include "chested_horse_metadata.h"

class LlamaMetadata : public ChestedHorseMetadata {
public:
    LlamaMetadata();
    ~LlamaMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

public:
    int strength = 0;
    int carpetColor = -1;
    int variant = 0;

};