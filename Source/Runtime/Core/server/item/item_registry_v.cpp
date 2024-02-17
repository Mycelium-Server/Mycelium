
#include "item_registry.h"

#include "verdant_froglight_item.h"
#include "vex_spawn_egg_item.h"
#include "villager_spawn_egg_item.h"
#include "vindicator_spawn_egg_item.h"
#include "vine_item.h"

void ItemRegistry::generateV() {

  { // ID: 314
    registry[314] = std::make_shared<VineItem>();
  }

  { // ID: 970
    registry[970] = std::make_shared<VexSpawnEggItem>();
  }

  { // ID: 971
    registry[971] = std::make_shared<VillagerSpawnEggItem>();
  }

  { // ID: 972
    registry[972] = std::make_shared<VindicatorSpawnEggItem>();
  }

  { // ID: 1148
    registry[1148] = std::make_shared<VerdantFroglightItem>();
  }
}