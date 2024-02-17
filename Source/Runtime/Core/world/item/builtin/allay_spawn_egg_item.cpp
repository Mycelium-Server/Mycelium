
#include "allay_spawn_egg_item.h"

AllaySpawnEggItem::AllaySpawnEggItem() = default;
AllaySpawnEggItem::~AllaySpawnEggItem() = default;

int AllaySpawnEggItem::getID() const {
  return 912;
}

std::shared_ptr<Item> AllaySpawnEggItem::clone() const {
  return std::make_shared<AllaySpawnEggItem>();
}
