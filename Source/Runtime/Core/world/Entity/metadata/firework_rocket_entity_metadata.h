#pragma once

#include "../entity.h"
#include "entity_metadata.h"

class FireworkRocketEntityMetadata : public EntityMetadata {
 public:
  FireworkRocketEntityMetadata();
  ~FireworkRocketEntityMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  ItemStack fireworkInfo;
  std::optional<Entity*> entity;
  bool shotFromCrossbow = false;
};