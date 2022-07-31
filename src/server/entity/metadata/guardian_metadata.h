#pragma once

#include "monster_metadata.h"

class GuardianMetadata : public MonsterMetadata {
public:
    GuardianMetadata();
    ~GuardianMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

public:
    bool isRetractingSpikes = false;
    int targetEID = 0;

};