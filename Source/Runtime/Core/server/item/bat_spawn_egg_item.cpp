
#include "bat_spawn_egg_item.h"

BatSpawnEggItem::BatSpawnEggItem() = default;
BatSpawnEggItem::~BatSpawnEggItem() = default;

int BatSpawnEggItem::getID() const {
  return 914;
}

std::shared_ptr<Item> BatSpawnEggItem::clone() const {
  return std::make_shared<BatSpawnEggItem>();
}
