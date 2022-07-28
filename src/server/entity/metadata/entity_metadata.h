#pragma once

#include "metadata.h"
#include "pose.h"

class EntityMetadata : public AbstractEntityMetadata {
public:
    EntityMetadata();
    virtual ~EntityMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

public:
    union {
        struct {
            unsigned char isOnFire: 1;
            unsigned char isCrouching: 1;
            unsigned char unused: 1;
            unsigned char isSprinting: 1;
            unsigned char isSwimming: 1;
            unsigned char isInvisible: 1;
            unsigned char isGlowing: 1;
            unsigned char isFlying: 1;
        };
        unsigned char value = 0;
    } bitfield {};
    int airTicks = 300;
    std::optional<std::string> customName;
    bool customNameVisible = false;
    bool isSilent = false;
    bool hasNoGravity = false;
    Pose pose = Pose::STANDING;
    int frozenTicks = 0;

};