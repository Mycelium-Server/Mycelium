
#include "zombie_villager_spawn_egg_item.h"

ZombieVillagerSpawnEggItem::ZombieVillagerSpawnEggItem() = default;
ZombieVillagerSpawnEggItem::~ZombieVillagerSpawnEggItem() = default;

int ZombieVillagerSpawnEggItem::getID() const {
  return 981;
}

std::shared_ptr<Item> ZombieVillagerSpawnEggItem::clone() const {
  return std::make_shared<ZombieVillagerSpawnEggItem>();
}
