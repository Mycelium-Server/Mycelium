
#include "piglin_spawn_egg_item.h"

PiglinSpawnEggItem::PiglinSpawnEggItem() = default;
PiglinSpawnEggItem::~PiglinSpawnEggItem() = default;

int PiglinSpawnEggItem::getID() const {
  return 948;
}

std::shared_ptr<Item> PiglinSpawnEggItem::clone() const {
  return std::make_shared<PiglinSpawnEggItem>();
}
