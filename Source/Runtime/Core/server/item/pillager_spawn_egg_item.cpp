
#include "pillager_spawn_egg_item.h"

PillagerSpawnEggItem::PillagerSpawnEggItem() = default;
PillagerSpawnEggItem::~PillagerSpawnEggItem() = default;

int PillagerSpawnEggItem::getID() const {
  return 950;
}

std::shared_ptr<Item> PillagerSpawnEggItem::clone() const {
  return std::make_shared<PillagerSpawnEggItem>();
}
