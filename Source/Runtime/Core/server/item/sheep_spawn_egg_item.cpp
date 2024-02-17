
#include "sheep_spawn_egg_item.h"

SheepSpawnEggItem::SheepSpawnEggItem() = default;
SheepSpawnEggItem::~SheepSpawnEggItem() = default;

int SheepSpawnEggItem::getID() const {
  return 956;
}

std::shared_ptr<Item> SheepSpawnEggItem::clone() const {
  return std::make_shared<SheepSpawnEggItem>();
}
