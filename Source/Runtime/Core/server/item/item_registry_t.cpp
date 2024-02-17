
#include "item_registry.h"

#include "tadpole_bucket_item.h"
#include "tadpole_spawn_egg_item.h"
#include "tall_grass_item.h"
#include "target_item.h"
#include "terracotta_item.h"
#include "tinted_glass_item.h"
#include "tipped_arrow_item.h"
#include "tnt_item.h"
#include "tnt_minecart_item.h"
#include "torch_item.h"
#include "totem_of_undying_item.h"
#include "trader_llama_spawn_egg_item.h"
#include "trapped_chest_item.h"
#include "trident_item.h"
#include "tripwire_hook_item.h"
#include "tropical_fish_item.h"
#include "tropical_fish_bucket_item.h"
#include "tropical_fish_spawn_egg_item.h"
#include "tube_coral_item.h"
#include "tube_coral_block_item.h"
#include "tube_coral_fan_item.h"
#include "tuff_item.h"
#include "turtle_egg_item.h"
#include "turtle_helmet_item.h"
#include "turtle_spawn_egg_item.h"
#include "twisting_vines_item.h"

void ItemRegistry::generateT() {

  { // ID: 12
    registry[12] = std::make_shared<TuffItem>();
  }

  { // ID: 154
    registry[154] = std::make_shared<TintedGlassItem>();
  }

  { // ID: 205
    registry[205] = std::make_shared<TwistingVinesItem>();
  }

  { // ID: 248
    registry[248] = std::make_shared<TorchItem>();
  }

  { // ID: 414
    registry[414] = std::make_shared<TerracottaItem>();
  }

  { // ID: 421
    registry[421] = std::make_shared<TallGrassItem>();
  }

  { // ID: 539
    registry[539] = std::make_shared<TurtleEggItem>();
  }

  { // ID: 545
    registry[545] = std::make_shared<TubeCoralBlockItem>();
  }

  { // ID: 550
    registry[550] = std::make_shared<TubeCoralItem>();
  }

  { // ID: 560
    registry[560] = std::make_shared<TubeCoralFanItem>();
  }

  { // ID: 622
    registry[622] = std::make_shared<TargetItem>();
  }

  { // ID: 627
    registry[627] = std::make_shared<TripwireHookItem>();
  }

  { // ID: 628
    registry[628] = std::make_shared<TrappedChestItem>();
  }

  { // ID: 629
    registry[629] = std::make_shared<TntItem>();
  }

  { // ID: 693
    registry[693] = std::make_shared<TntMinecartItem>();
  }

  { // ID: 714
    registry[714] = std::make_shared<TurtleHelmetItem>();
  }

  { // ID: 823
    registry[823] = std::make_shared<TropicalFishBucketItem>();
  }

  { // ID: 825
    registry[825] = std::make_shared<TadpoleBucketItem>();
  }

  { // ID: 842
    registry[842] = std::make_shared<TropicalFishItem>();
  }

  { // ID: 966
    registry[966] = std::make_shared<TadpoleSpawnEggItem>();
  }

  { // ID: 967
    registry[967] = std::make_shared<TraderLlamaSpawnEggItem>();
  }

  { // ID: 968
    registry[968] = std::make_shared<TropicalFishSpawnEggItem>();
  }

  { // ID: 969
    registry[969] = std::make_shared<TurtleSpawnEggItem>();
  }

  { // ID: 1050
    registry[1050] = std::make_shared<TippedArrowItem>();
  }

  { // ID: 1053
    registry[1053] = std::make_shared<TotemOfUndyingItem>();
  }

  { // ID: 1074
    registry[1074] = std::make_shared<TridentItem>();
  }
}