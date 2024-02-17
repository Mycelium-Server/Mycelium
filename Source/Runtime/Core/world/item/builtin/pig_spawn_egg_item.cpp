
#include "pig_spawn_egg_item.h"

PigSpawnEggItem::PigSpawnEggItem() = default;
PigSpawnEggItem::~PigSpawnEggItem() = default;

int PigSpawnEggItem::getID() const {
  return 947;
}

std::shared_ptr<Item> PigSpawnEggItem::clone() const {
  return std::make_shared<PigSpawnEggItem>();
}
