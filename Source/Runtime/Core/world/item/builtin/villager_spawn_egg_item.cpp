
#include "villager_spawn_egg_item.h"

VillagerSpawnEggItem::VillagerSpawnEggItem() = default;
VillagerSpawnEggItem::~VillagerSpawnEggItem() = default;

int VillagerSpawnEggItem::getID() const {
  return 971;
}

std::shared_ptr<Item> VillagerSpawnEggItem::clone() const {
  return std::make_shared<VillagerSpawnEggItem>();
}
