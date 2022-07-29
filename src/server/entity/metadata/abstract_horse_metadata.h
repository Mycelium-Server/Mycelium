#pragma once

#include "animal_metadata.h"

class AbstractHorseMetadata : public AnimalMetadata {
public:
    AbstractHorseMetadata();
    ~AbstractHorseMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

public:
    bool isTame = false;
    bool isSaddled = false;
    bool hasBred = false;
    bool isEating = false;
    bool isRearing = false;
    bool isMouthOpen = false;
    std::optional<uuids::uuid> owner;

};