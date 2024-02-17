
#include "slime_spawn_egg_item.h"

SlimeSpawnEggItem::SlimeSpawnEggItem() = default;
SlimeSpawnEggItem::~SlimeSpawnEggItem() = default;

int SlimeSpawnEggItem::getID() const {
  return 961;
}

std::shared_ptr<Item> SlimeSpawnEggItem::clone() const {
  return std::make_shared<SlimeSpawnEggItem>();
}
