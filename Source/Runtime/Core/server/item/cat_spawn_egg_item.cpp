
#include "cat_spawn_egg_item.h"

CatSpawnEggItem::CatSpawnEggItem() = default;
CatSpawnEggItem::~CatSpawnEggItem() = default;

int CatSpawnEggItem::getID() const {
  return 917;
}

std::shared_ptr<Item> CatSpawnEggItem::clone() const {
  return std::make_shared<CatSpawnEggItem>();
}
