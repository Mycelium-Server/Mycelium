
#include "hoglin_spawn_egg_item.h"

HoglinSpawnEggItem::HoglinSpawnEggItem() = default;
HoglinSpawnEggItem::~HoglinSpawnEggItem() = default;

int HoglinSpawnEggItem::getID() const {
  return 936;
}

std::shared_ptr<Item> HoglinSpawnEggItem::clone() const {
  return std::make_shared<HoglinSpawnEggItem>();
}
