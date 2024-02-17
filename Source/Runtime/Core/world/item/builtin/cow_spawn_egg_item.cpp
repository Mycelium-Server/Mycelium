
#include "cow_spawn_egg_item.h"

CowSpawnEggItem::CowSpawnEggItem() = default;
CowSpawnEggItem::~CowSpawnEggItem() = default;

int CowSpawnEggItem::getID() const {
  return 921;
}

std::shared_ptr<Item> CowSpawnEggItem::clone() const {
  return std::make_shared<CowSpawnEggItem>();
}
