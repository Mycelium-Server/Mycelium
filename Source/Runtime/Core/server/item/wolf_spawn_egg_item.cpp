
#include "wolf_spawn_egg_item.h"

WolfSpawnEggItem::WolfSpawnEggItem() = default;
WolfSpawnEggItem::~WolfSpawnEggItem() = default;

int WolfSpawnEggItem::getID() const {
  return 977;
}

std::shared_ptr<Item> WolfSpawnEggItem::clone() const {
  return std::make_shared<WolfSpawnEggItem>();
}
