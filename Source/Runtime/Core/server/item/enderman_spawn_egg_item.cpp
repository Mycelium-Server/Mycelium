
#include "enderman_spawn_egg_item.h"

EndermanSpawnEggItem::EndermanSpawnEggItem() = default;
EndermanSpawnEggItem::~EndermanSpawnEggItem() = default;

int EndermanSpawnEggItem::getID() const {
  return 927;
}

std::shared_ptr<Item> EndermanSpawnEggItem::clone() const {
  return std::make_shared<EndermanSpawnEggItem>();
}
