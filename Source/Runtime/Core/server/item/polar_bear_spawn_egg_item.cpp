
#include "polar_bear_spawn_egg_item.h"

PolarBearSpawnEggItem::PolarBearSpawnEggItem() = default;
PolarBearSpawnEggItem::~PolarBearSpawnEggItem() = default;

int PolarBearSpawnEggItem::getID() const {
  return 951;
}

std::shared_ptr<Item> PolarBearSpawnEggItem::clone() const {
  return std::make_shared<PolarBearSpawnEggItem>();
}
