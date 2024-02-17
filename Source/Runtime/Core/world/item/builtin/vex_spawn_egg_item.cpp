
#include "vex_spawn_egg_item.h"

VexSpawnEggItem::VexSpawnEggItem() = default;
VexSpawnEggItem::~VexSpawnEggItem() = default;

int VexSpawnEggItem::getID() const {
  return 970;
}

std::shared_ptr<Item> VexSpawnEggItem::clone() const {
  return std::make_shared<VexSpawnEggItem>();
}
