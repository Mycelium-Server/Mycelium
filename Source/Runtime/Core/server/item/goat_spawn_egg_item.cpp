
#include "goat_spawn_egg_item.h"

GoatSpawnEggItem::GoatSpawnEggItem() = default;
GoatSpawnEggItem::~GoatSpawnEggItem() = default;

int GoatSpawnEggItem::getID() const {
  return 934;
}

std::shared_ptr<Item> GoatSpawnEggItem::clone() const {
  return std::make_shared<GoatSpawnEggItem>();
}
