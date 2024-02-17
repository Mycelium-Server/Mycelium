
#include "zombified_piglin_spawn_egg_item.h"

ZombifiedPiglinSpawnEggItem::ZombifiedPiglinSpawnEggItem() = default;
ZombifiedPiglinSpawnEggItem::~ZombifiedPiglinSpawnEggItem() = default;

int ZombifiedPiglinSpawnEggItem::getID() const {
  return 982;
}

std::shared_ptr<Item> ZombifiedPiglinSpawnEggItem::clone() const {
  return std::make_shared<ZombifiedPiglinSpawnEggItem>();
}
