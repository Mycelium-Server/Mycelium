
#include "zoglin_spawn_egg_item.h"

ZoglinSpawnEggItem::ZoglinSpawnEggItem() = default;
ZoglinSpawnEggItem::~ZoglinSpawnEggItem() = default;

int ZoglinSpawnEggItem::getID() const {
  return 978;
}

std::shared_ptr<Item> ZoglinSpawnEggItem::clone() const {
  return std::make_shared<ZoglinSpawnEggItem>();
}
