
#include "strider_spawn_egg_item.h"

StriderSpawnEggItem::StriderSpawnEggItem() = default;
StriderSpawnEggItem::~StriderSpawnEggItem() = default;

int StriderSpawnEggItem::getID() const {
  return 965;
}

std::shared_ptr<Item> StriderSpawnEggItem::clone() const {
  return std::make_shared<StriderSpawnEggItem>();
}
