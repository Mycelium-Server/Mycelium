
#include "ravager_spawn_egg_item.h"

RavagerSpawnEggItem::RavagerSpawnEggItem() = default;
RavagerSpawnEggItem::~RavagerSpawnEggItem() = default;

int RavagerSpawnEggItem::getID() const {
  return 954;
}

std::shared_ptr<Item> RavagerSpawnEggItem::clone() const {
  return std::make_shared<RavagerSpawnEggItem>();
}
