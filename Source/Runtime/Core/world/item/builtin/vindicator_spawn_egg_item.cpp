
#include "vindicator_spawn_egg_item.h"

VindicatorSpawnEggItem::VindicatorSpawnEggItem() = default;
VindicatorSpawnEggItem::~VindicatorSpawnEggItem() = default;

int VindicatorSpawnEggItem::getID() const {
  return 972;
}

std::shared_ptr<Item> VindicatorSpawnEggItem::clone() const {
  return std::make_shared<VindicatorSpawnEggItem>();
}
