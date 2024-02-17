
#include "donkey_spawn_egg_item.h"

DonkeySpawnEggItem::DonkeySpawnEggItem() = default;
DonkeySpawnEggItem::~DonkeySpawnEggItem() = default;

int DonkeySpawnEggItem::getID() const {
  return 924;
}

std::shared_ptr<Item> DonkeySpawnEggItem::clone() const {
  return std::make_shared<DonkeySpawnEggItem>();
}
