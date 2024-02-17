
#include "phantom_spawn_egg_item.h"

PhantomSpawnEggItem::PhantomSpawnEggItem() = default;
PhantomSpawnEggItem::~PhantomSpawnEggItem() = default;

int PhantomSpawnEggItem::getID() const {
  return 946;
}

std::shared_ptr<Item> PhantomSpawnEggItem::clone() const {
  return std::make_shared<PhantomSpawnEggItem>();
}
