
#include "guardian_spawn_egg_item.h"

GuardianSpawnEggItem::GuardianSpawnEggItem() = default;
GuardianSpawnEggItem::~GuardianSpawnEggItem() = default;

int GuardianSpawnEggItem::getID() const {
  return 935;
}

std::shared_ptr<Item> GuardianSpawnEggItem::clone() const {
  return std::make_shared<GuardianSpawnEggItem>();
}
