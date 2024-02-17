
#include "spider_spawn_egg_item.h"

SpiderSpawnEggItem::SpiderSpawnEggItem() = default;
SpiderSpawnEggItem::~SpiderSpawnEggItem() = default;

int SpiderSpawnEggItem::getID() const {
  return 962;
}

std::shared_ptr<Item> SpiderSpawnEggItem::clone() const {
  return std::make_shared<SpiderSpawnEggItem>();
}
