
#include "item_registry.h"

#include "zoglin_spawn_egg_item.h"
#include "zombie_head_item.h"
#include "zombie_horse_spawn_egg_item.h"
#include "zombie_spawn_egg_item.h"
#include "zombie_villager_spawn_egg_item.h"
#include "zombified_piglin_spawn_egg_item.h"

void ItemRegistry::generateZ() {

  { // ID: 978
    registry[978] = std::make_shared<ZoglinSpawnEggItem>();
  }

  { // ID: 979
    registry[979] = std::make_shared<ZombieSpawnEggItem>();
  }

  { // ID: 980
    registry[980] = std::make_shared<ZombieHorseSpawnEggItem>();
  }

  { // ID: 981
    registry[981] = std::make_shared<ZombieVillagerSpawnEggItem>();
  }

  { // ID: 982
    registry[982] = std::make_shared<ZombifiedPiglinSpawnEggItem>();
  }

  { // ID: 999
    registry[999] = std::make_shared<ZombieHeadItem>();
  }
}