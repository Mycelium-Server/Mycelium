
#include "zombie_spawn_egg_item.h"

ZombieSpawnEggItem::ZombieSpawnEggItem() = default;
ZombieSpawnEggItem::~ZombieSpawnEggItem() = default;

int ZombieSpawnEggItem::getID() const {
  return 979;
}

std::shared_ptr<Item> ZombieSpawnEggItem::clone() const {
  return std::make_shared<ZombieSpawnEggItem>();
}
