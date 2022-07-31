#pragma once

#include "abstract_golem_metadata.h"

class SnowGolemMetadata : public AbstractGolemMetadata {
public:
    SnowGolemMetadata();
    ~SnowGolemMetadata() override;

public:
    void wrapperWrite(MetadataBuffer &) override;

public:
    bool hasPumpkinHat = true;

};