
#include "item_registry.h"

#include "hanging_roots_item.h"
#include "hay_block_item.h"
#include "heart_of_the_sea_item.h"
#include "heavy_weighted_pressure_plate_item.h"
#include "hoglin_spawn_egg_item.h"
#include "honey_block_item.h"
#include "honey_bottle_item.h"
#include "honeycomb_item.h"
#include "honeycomb_block_item.h"
#include "hopper_item.h"
#include "hopper_minecart_item.h"
#include "horn_coral_item.h"
#include "horn_coral_block_item.h"
#include "horn_coral_fan_item.h"
#include "horse_spawn_egg_item.h"
#include "husk_spawn_egg_item.h"

void ItemRegistry::generateH() {

  { // ID: 210
    registry[210] = std::make_shared<HangingRootsItem>();
  }

  { // ID: 397
    registry[397] = std::make_shared<HayBlockItem>();
  }

  { // ID: 549
    registry[549] = std::make_shared<HornCoralBlockItem>();
  }

  { // ID: 554
    registry[554] = std::make_shared<HornCoralItem>();
  }

  { // ID: 564
    registry[564] = std::make_shared<HornCoralFanItem>();
  }

  { // ID: 616
    registry[616] = std::make_shared<HoneyBlockItem>();
  }

  { // ID: 618
    registry[618] = std::make_shared<HopperItem>();
  }

  { // ID: 646
    registry[646] = std::make_shared<HeavyWeightedPressurePlateItem>();
  }

  { // ID: 694
    registry[694] = std::make_shared<HopperMinecartItem>();
  }

  { // ID: 936
    registry[936] = std::make_shared<HoglinSpawnEggItem>();
  }

  { // ID: 937
    registry[937] = std::make_shared<HorseSpawnEggItem>();
  }

  { // ID: 938
    registry[938] = std::make_shared<HuskSpawnEggItem>();
  }

  { // ID: 1077
    registry[1077] = std::make_shared<HeartOfTheSeaItem>();
  }

  { // ID: 1105
    registry[1105] = std::make_shared<HoneycombItem>();
  }

  { // ID: 1108
    registry[1108] = std::make_shared<HoneyBottleItem>();
  }

  { // ID: 1109
    registry[1109] = std::make_shared<HoneycombBlockItem>();
  }
}