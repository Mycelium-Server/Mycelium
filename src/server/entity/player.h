#pragma once

#include "../../connection_context.h"
#include "entity.h"

// TODO: More entities (Metadata)

class EntityPlayer : public Entity {
 public:
  EntityPlayer();
  ~EntityPlayer();

 public:
  [[nodiscard]] int getRenderDistance() const;

 public:
  ConnectionContext* connection = nullptr;
};