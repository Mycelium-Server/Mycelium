#pragma once

#include "../../client_settings.h"
#include "living_entity_metadata.h"

class PlayerMetadata : public LivingEntityMetadata {
 public:
  PlayerMetadata();
  ~PlayerMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  float additionalHearts = 0;
  int score = 0;
  SkinParts displayedSkinParts {};
  MainHand mainHand = MainHand::RIGHT;
  std::shared_ptr<NBT_Component> leftShoulderEntityData;
  std::shared_ptr<NBT_Component> rightShoulderEntityData;
};