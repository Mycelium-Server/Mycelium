
#include "tropical_fish_spawn_egg_item.h"

TropicalFishSpawnEggItem::TropicalFishSpawnEggItem() = default;
TropicalFishSpawnEggItem::~TropicalFishSpawnEggItem() = default;

int TropicalFishSpawnEggItem::getID() const {
  return 968;
}

std::shared_ptr<Item> TropicalFishSpawnEggItem::clone() const {
  return std::make_shared<TropicalFishSpawnEggItem>();
}
