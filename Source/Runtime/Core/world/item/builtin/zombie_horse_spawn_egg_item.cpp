
#include "zombie_horse_spawn_egg_item.h"

ZombieHorseSpawnEggItem::ZombieHorseSpawnEggItem() = default;
ZombieHorseSpawnEggItem::~ZombieHorseSpawnEggItem() = default;

int ZombieHorseSpawnEggItem::getID() const {
  return 980;
}

std::shared_ptr<Item> ZombieHorseSpawnEggItem::clone() const {
  return std::make_shared<ZombieHorseSpawnEggItem>();
}
