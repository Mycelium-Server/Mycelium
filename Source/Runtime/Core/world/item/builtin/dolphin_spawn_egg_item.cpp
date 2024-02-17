
#include "dolphin_spawn_egg_item.h"

DolphinSpawnEggItem::DolphinSpawnEggItem() = default;
DolphinSpawnEggItem::~DolphinSpawnEggItem() = default;

int DolphinSpawnEggItem::getID() const {
  return 923;
}

std::shared_ptr<Item> DolphinSpawnEggItem::clone() const {
  return std::make_shared<DolphinSpawnEggItem>();
}
