
#include "horse_spawn_egg_item.h"

HorseSpawnEggItem::HorseSpawnEggItem() = default;
HorseSpawnEggItem::~HorseSpawnEggItem() = default;

int HorseSpawnEggItem::getID() const {
  return 937;
}

std::shared_ptr<Item> HorseSpawnEggItem::clone() const {
  return std::make_shared<HorseSpawnEggItem>();
}
