#pragma once

#include "../../connection_context.h"
#include "../inventory/player_inventory.h"
#include "entity.h"

// TODO: More entities (Metadata)

class World;
class Chunk;

class EntityPlayer : public Entity {
 public:
  EntityPlayer();
  ~EntityPlayer();

 public:
  [[nodiscard]] int getRenderDistance() const;
  [[nodiscard]] PlayerInventory& getInventory();
  [[nodiscard]] bool isChunkLoaded(Chunk*) const;

 public:
  ConnectionContext* connection = nullptr;

 private:
  PlayerInventory inventory;
};