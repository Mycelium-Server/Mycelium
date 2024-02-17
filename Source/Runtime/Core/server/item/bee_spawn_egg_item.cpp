
#include "bee_spawn_egg_item.h"

BeeSpawnEggItem::BeeSpawnEggItem() = default;
BeeSpawnEggItem::~BeeSpawnEggItem() = default;

int BeeSpawnEggItem::getID() const {
  return 915;
}

std::shared_ptr<Item> BeeSpawnEggItem::clone() const {
  return std::make_shared<BeeSpawnEggItem>();
}
