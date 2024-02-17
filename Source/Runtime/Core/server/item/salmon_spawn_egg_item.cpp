
#include "salmon_spawn_egg_item.h"

SalmonSpawnEggItem::SalmonSpawnEggItem() = default;
SalmonSpawnEggItem::~SalmonSpawnEggItem() = default;

int SalmonSpawnEggItem::getID() const {
  return 955;
}

std::shared_ptr<Item> SalmonSpawnEggItem::clone() const {
  return std::make_shared<SalmonSpawnEggItem>();
}
