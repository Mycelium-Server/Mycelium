
#include "blaze_spawn_egg_item.h"

BlazeSpawnEggItem::BlazeSpawnEggItem() = default;
BlazeSpawnEggItem::~BlazeSpawnEggItem() = default;

int BlazeSpawnEggItem::getID() const {
  return 916;
}

std::shared_ptr<Item> BlazeSpawnEggItem::clone() const {
  return std::make_shared<BlazeSpawnEggItem>();
}
