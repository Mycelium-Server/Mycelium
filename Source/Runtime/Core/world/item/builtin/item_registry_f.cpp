
#include "item_registry.h"

#include "farmland_item.h"
#include "feather_item.h"
#include "fermented_spider_eye_item.h"
#include "fern_item.h"
#include "filled_map_item.h"
#include "fire_charge_item.h"
#include "fire_coral_item.h"
#include "fire_coral_block_item.h"
#include "fire_coral_fan_item.h"
#include "firework_rocket_item.h"
#include "firework_star_item.h"
#include "fishing_rod_item.h"
#include "fletching_table_item.h"
#include "flint_item.h"
#include "flint_and_steel_item.h"
#include "flower_banner_pattern_item.h"
#include "flower_pot_item.h"
#include "flowering_azalea_item.h"
#include "flowering_azalea_leaves_item.h"
#include "fox_spawn_egg_item.h"
#include "frog_spawn_egg_item.h"
#include "frogspawn_item.h"
#include "furnace_item.h"
#include "furnace_minecart_item.h"

void ItemRegistry::generateF() {

  { // ID: 150
    registry[150] = std::make_shared<FloweringAzaleaLeavesItem>();
  }

  { // ID: 161
    registry[161] = std::make_shared<FernItem>();
  }

  { // ID: 163
    registry[163] = std::make_shared<FloweringAzaleaItem>();
  }

  { // ID: 258
    registry[258] = std::make_shared<FarmlandItem>();
  }

  { // ID: 259
    registry[259] = std::make_shared<FurnaceItem>();
  }

  { // ID: 548
    registry[548] = std::make_shared<FireCoralBlockItem>();
  }

  { // ID: 553
    registry[553] = std::make_shared<FireCoralItem>();
  }

  { // ID: 563
    registry[563] = std::make_shared<FireCoralFanItem>();
  }

  { // ID: 692
    registry[692] = std::make_shared<FurnaceMinecartItem>();
  }

  { // ID: 716
    registry[716] = std::make_shared<FlintAndSteelItem>();
  }

  { // ID: 769
    registry[769] = std::make_shared<FeatherItem>();
  }

  { // ID: 798
    registry[798] = std::make_shared<FlintItem>();
  }

  { // ID: 836
    registry[836] = std::make_shared<FishingRodItem>();
  }

  { // ID: 886
    registry[886] = std::make_shared<FilledMapItem>();
  }

  { // ID: 905
    registry[905] = std::make_shared<FermentedSpiderEyeItem>();
  }

  { // ID: 930
    registry[930] = std::make_shared<FoxSpawnEggItem>();
  }

  { // ID: 931
    registry[931] = std::make_shared<FrogSpawnEggItem>();
  }

  { // ID: 984
    registry[984] = std::make_shared<FireChargeItem>();
  }

  { // ID: 989
    registry[989] = std::make_shared<FlowerPotItem>();
  }

  { // ID: 1004
    registry[1004] = std::make_shared<FireworkRocketItem>();
  }

  { // ID: 1005
    registry[1005] = std::make_shared<FireworkStarItem>();
  }

  { // ID: 1081
    registry[1081] = std::make_shared<FlowerBannerPatternItem>();
  }

  { // ID: 1093
    registry[1093] = std::make_shared<FletchingTableItem>();
  }

  { // ID: 1150
    registry[1150] = std::make_shared<FrogspawnItem>();
  }
}