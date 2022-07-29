#pragma once

#include "mob_metadata.h"

class PathfinderMobMetadata : public MobMetadata {
public:
    PathfinderMobMetadata();
    ~PathfinderMobMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

};