
#include "shulker_spawn_egg_item.h"

ShulkerSpawnEggItem::ShulkerSpawnEggItem() = default;
ShulkerSpawnEggItem::~ShulkerSpawnEggItem() = default;

int ShulkerSpawnEggItem::getID() const {
  return 957;
}

std::shared_ptr<Item> ShulkerSpawnEggItem::clone() const {
  return std::make_shared<ShulkerSpawnEggItem>();
}
