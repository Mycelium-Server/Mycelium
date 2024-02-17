#pragma once

#include "entity_metadata.h"

class LivingEntityMetadata : public EntityMetadata {
 public:
  LivingEntityMetadata();
  ~LivingEntityMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isHandActive = false;
  bool offhand = false;
  bool inRiptideSpinAttack = false;
  float health = 1.0;
  int potionEffectColor = 0;
  bool ambientPotionEffect = false;
  int numArrows = 0;
  int numBeeStingers = 0;
  std::optional<BlockPosition> bedLocation = {};
};