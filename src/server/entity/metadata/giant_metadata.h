#pragma once

#include "monster_metadata.h"

class GiantMetadata : public MonsterMetadata {
public:
    GiantMetadata();
    ~GiantMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

};