#pragma once

#include "monster_metadata.h"

class SilverfishMetadata : public MonsterMetadata {
public:
    SilverfishMetadata();
    ~SilverfishMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

};