
#include "evoker_spawn_egg_item.h"

EvokerSpawnEggItem::EvokerSpawnEggItem() = default;
EvokerSpawnEggItem::~EvokerSpawnEggItem() = default;

int EvokerSpawnEggItem::getID() const {
  return 929;
}

std::shared_ptr<Item> EvokerSpawnEggItem::clone() const {
  return std::make_shared<EvokerSpawnEggItem>();
}
