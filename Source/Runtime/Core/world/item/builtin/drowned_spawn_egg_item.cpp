
#include "drowned_spawn_egg_item.h"

DrownedSpawnEggItem::DrownedSpawnEggItem() = default;
DrownedSpawnEggItem::~DrownedSpawnEggItem() = default;

int DrownedSpawnEggItem::getID() const {
  return 925;
}

std::shared_ptr<Item> DrownedSpawnEggItem::clone() const {
  return std::make_shared<DrownedSpawnEggItem>();
}
