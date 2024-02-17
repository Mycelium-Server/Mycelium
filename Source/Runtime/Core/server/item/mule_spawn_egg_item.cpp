
#include "mule_spawn_egg_item.h"

MuleSpawnEggItem::MuleSpawnEggItem() = default;
MuleSpawnEggItem::~MuleSpawnEggItem() = default;

int MuleSpawnEggItem::getID() const {
  return 942;
}

std::shared_ptr<Item> MuleSpawnEggItem::clone() const {
  return std::make_shared<MuleSpawnEggItem>();
}
