
#include "axolotl_spawn_egg_item.h"

AxolotlSpawnEggItem::AxolotlSpawnEggItem() = default;
AxolotlSpawnEggItem::~AxolotlSpawnEggItem() = default;

int AxolotlSpawnEggItem::getID() const {
  return 913;
}

std::shared_ptr<Item> AxolotlSpawnEggItem::clone() const {
  return std::make_shared<AxolotlSpawnEggItem>();
}
