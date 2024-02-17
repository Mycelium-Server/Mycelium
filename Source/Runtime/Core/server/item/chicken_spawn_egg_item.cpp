
#include "chicken_spawn_egg_item.h"

ChickenSpawnEggItem::ChickenSpawnEggItem() = default;
ChickenSpawnEggItem::~ChickenSpawnEggItem() = default;

int ChickenSpawnEggItem::getID() const {
  return 919;
}

std::shared_ptr<Item> ChickenSpawnEggItem::clone() const {
  return std::make_shared<ChickenSpawnEggItem>();
}
