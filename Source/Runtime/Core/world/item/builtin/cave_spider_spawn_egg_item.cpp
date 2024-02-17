
#include "cave_spider_spawn_egg_item.h"

CaveSpiderSpawnEggItem::CaveSpiderSpawnEggItem() = default;
CaveSpiderSpawnEggItem::~CaveSpiderSpawnEggItem() = default;

int CaveSpiderSpawnEggItem::getID() const {
  return 918;
}

std::shared_ptr<Item> CaveSpiderSpawnEggItem::clone() const {
  return std::make_shared<CaveSpiderSpawnEggItem>();
}
