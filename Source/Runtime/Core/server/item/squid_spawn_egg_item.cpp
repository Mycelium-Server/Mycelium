
#include "squid_spawn_egg_item.h"

SquidSpawnEggItem::SquidSpawnEggItem() = default;
SquidSpawnEggItem::~SquidSpawnEggItem() = default;

int SquidSpawnEggItem::getID() const {
  return 963;
}

std::shared_ptr<Item> SquidSpawnEggItem::clone() const {
  return std::make_shared<SquidSpawnEggItem>();
}
