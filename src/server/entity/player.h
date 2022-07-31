#pragma once

#include "../../connection_context.h"
#include "entity.h"

// TODO: More entities (Metadata)

class EntityPlayer : public Entity {
 public:
  EntityPlayer();
  ~EntityPlayer();

 public:
  ConnectionContext* connection = nullptr;
};