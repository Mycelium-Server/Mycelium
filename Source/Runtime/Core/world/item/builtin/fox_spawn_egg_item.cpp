
#include "fox_spawn_egg_item.h"

FoxSpawnEggItem::FoxSpawnEggItem() = default;
FoxSpawnEggItem::~FoxSpawnEggItem() = default;

int FoxSpawnEggItem::getID() const {
  return 930;
}

std::shared_ptr<Item> FoxSpawnEggItem::clone() const {
  return std::make_shared<FoxSpawnEggItem>();
}
