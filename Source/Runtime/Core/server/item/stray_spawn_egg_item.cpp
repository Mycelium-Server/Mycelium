
#include "stray_spawn_egg_item.h"

StraySpawnEggItem::StraySpawnEggItem() = default;
StraySpawnEggItem::~StraySpawnEggItem() = default;

int StraySpawnEggItem::getID() const {
  return 964;
}

std::shared_ptr<Item> StraySpawnEggItem::clone() const {
  return std::make_shared<StraySpawnEggItem>();
}
