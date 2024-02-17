
#include "creeper_spawn_egg_item.h"

CreeperSpawnEggItem::CreeperSpawnEggItem() = default;
CreeperSpawnEggItem::~CreeperSpawnEggItem() = default;

int CreeperSpawnEggItem::getID() const {
  return 922;
}

std::shared_ptr<Item> CreeperSpawnEggItem::clone() const {
  return std::make_shared<CreeperSpawnEggItem>();
}
