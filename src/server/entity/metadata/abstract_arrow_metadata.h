#pragma once

#include "entity_metadata.h"

class AbstractArrowMetadata : public EntityMetadata {
public:
    AbstractArrowMetadata();
    ~AbstractArrowMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

public:
    bool isCritical = false;
    bool isNoclip = false;
    unsigned char piercingLevel = 0;

};