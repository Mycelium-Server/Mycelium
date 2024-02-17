
#include "warden_spawn_egg_item.h"

WardenSpawnEggItem::WardenSpawnEggItem() = default;
WardenSpawnEggItem::~WardenSpawnEggItem() = default;

int WardenSpawnEggItem::getID() const {
  return 974;
}

std::shared_ptr<Item> WardenSpawnEggItem::clone() const {
  return std::make_shared<WardenSpawnEggItem>();
}
