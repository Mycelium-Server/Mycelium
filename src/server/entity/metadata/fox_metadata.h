#pragma once

#include "animal_metadata.h"

class FoxMetadata : public AnimalMetadata {
public:
    FoxMetadata();
    ~FoxMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

public:
    bool isSnow = false;
    bool isSitting = false;
    bool isCrouching = false;
    bool isInterested = false;
    bool isPouncing = false;
    bool isSleeping = false;
    bool isFaceplanted = false;
    bool isDefending = false;
    std::optional<uuids::uuid> firstUUID;
    std::optional<uuids::uuid> secondUUID;

};