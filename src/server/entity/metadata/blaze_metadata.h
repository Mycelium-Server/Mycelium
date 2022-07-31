#pragma once

#include "monster_metadata.h"

class BlazeMetadata : public MonsterMetadata {
public:
    BlazeMetadata();
    ~BlazeMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

public:
    bool isOnFire = false;

};