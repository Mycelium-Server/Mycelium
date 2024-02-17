
#include "witch_spawn_egg_item.h"

WitchSpawnEggItem::WitchSpawnEggItem() = default;
WitchSpawnEggItem::~WitchSpawnEggItem() = default;

int WitchSpawnEggItem::getID() const {
  return 975;
}

std::shared_ptr<Item> WitchSpawnEggItem::clone() const {
  return std::make_shared<WitchSpawnEggItem>();
}
