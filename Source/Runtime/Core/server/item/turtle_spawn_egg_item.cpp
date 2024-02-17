
#include "turtle_spawn_egg_item.h"

TurtleSpawnEggItem::TurtleSpawnEggItem() = default;
TurtleSpawnEggItem::~TurtleSpawnEggItem() = default;

int TurtleSpawnEggItem::getID() const {
  return 969;
}

std::shared_ptr<Item> TurtleSpawnEggItem::clone() const {
  return std::make_shared<TurtleSpawnEggItem>();
}
