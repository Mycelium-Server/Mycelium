
#include "elder_guardian_spawn_egg_item.h"

ElderGuardianSpawnEggItem::ElderGuardianSpawnEggItem() = default;
ElderGuardianSpawnEggItem::~ElderGuardianSpawnEggItem() = default;

int ElderGuardianSpawnEggItem::getID() const {
  return 926;
}

std::shared_ptr<Item> ElderGuardianSpawnEggItem::clone() const {
  return std::make_shared<ElderGuardianSpawnEggItem>();
}
