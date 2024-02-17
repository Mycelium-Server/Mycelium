
#include "husk_spawn_egg_item.h"

HuskSpawnEggItem::HuskSpawnEggItem() = default;
HuskSpawnEggItem::~HuskSpawnEggItem() = default;

int HuskSpawnEggItem::getID() const {
  return 938;
}

std::shared_ptr<Item> HuskSpawnEggItem::clone() const {
  return std::make_shared<HuskSpawnEggItem>();
}
