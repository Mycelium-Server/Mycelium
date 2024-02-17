
#include "rabbit_spawn_egg_item.h"

RabbitSpawnEggItem::RabbitSpawnEggItem() = default;
RabbitSpawnEggItem::~RabbitSpawnEggItem() = default;

int RabbitSpawnEggItem::getID() const {
  return 953;
}

std::shared_ptr<Item> RabbitSpawnEggItem::clone() const {
  return std::make_shared<RabbitSpawnEggItem>();
}
