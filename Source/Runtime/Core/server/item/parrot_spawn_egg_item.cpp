
#include "parrot_spawn_egg_item.h"

ParrotSpawnEggItem::ParrotSpawnEggItem() = default;
ParrotSpawnEggItem::~ParrotSpawnEggItem() = default;

int ParrotSpawnEggItem::getID() const {
  return 945;
}

std::shared_ptr<Item> ParrotSpawnEggItem::clone() const {
  return std::make_shared<ParrotSpawnEggItem>();
}
