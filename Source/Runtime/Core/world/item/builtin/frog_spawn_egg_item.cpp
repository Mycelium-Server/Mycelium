
#include "frog_spawn_egg_item.h"

FrogSpawnEggItem::FrogSpawnEggItem() = default;
FrogSpawnEggItem::~FrogSpawnEggItem() = default;

int FrogSpawnEggItem::getID() const {
  return 931;
}

std::shared_ptr<Item> FrogSpawnEggItem::clone() const {
  return std::make_shared<FrogSpawnEggItem>();
}
