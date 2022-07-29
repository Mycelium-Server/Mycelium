#pragma once

#include "entity_metadata.h"
#include "../../client_settings.h"

class PlayerMetadata : public EntityMetadata {
public:
    PlayerMetadata();
    ~PlayerMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

public:
    float additionalHearts = 0;
    int score = 0;
    SkinParts displayedSkinParts { .value = 0 };
    MainHand mainHand = MainHand::RIGHT;
    std::shared_ptr<NBT_Component> leftShoulderEntityData;
    std::shared_ptr<NBT_Component> rightShoulderEntityData;

};