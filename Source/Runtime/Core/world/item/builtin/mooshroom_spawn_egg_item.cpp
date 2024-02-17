
#include "mooshroom_spawn_egg_item.h"

MooshroomSpawnEggItem::MooshroomSpawnEggItem() = default;
MooshroomSpawnEggItem::~MooshroomSpawnEggItem() = default;

int MooshroomSpawnEggItem::getID() const {
  return 941;
}

std::shared_ptr<Item> MooshroomSpawnEggItem::clone() const {
  return std::make_shared<MooshroomSpawnEggItem>();
}
