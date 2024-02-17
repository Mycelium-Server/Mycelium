
#include "item_registry.h"

#include "echo_shard_item.h"
#include "egg_item.h"
#include "elder_guardian_spawn_egg_item.h"
#include "elytra_item.h"
#include "emerald_item.h"
#include "emerald_block_item.h"
#include "emerald_ore_item.h"
#include "enchanted_book_item.h"
#include "enchanted_golden_apple_item.h"
#include "enchanting_table_item.h"
#include "end_crystal_item.h"
#include "end_portal_frame_item.h"
#include "end_rod_item.h"
#include "end_stone_item.h"
#include "end_stone_brick_slab_item.h"
#include "end_stone_brick_stairs_item.h"
#include "end_stone_brick_wall_item.h"
#include "end_stone_bricks_item.h"
#include "ender_chest_item.h"
#include "ender_eye_item.h"
#include "ender_pearl_item.h"
#include "enderman_spawn_egg_item.h"
#include "endermite_spawn_egg_item.h"
#include "evoker_spawn_egg_item.h"
#include "experience_bottle_item.h"
#include "exposed_copper_item.h"
#include "exposed_cut_copper_item.h"
#include "exposed_cut_copper_slab_item.h"
#include "exposed_cut_copper_stairs_item.h"

void ItemRegistry::generateE() {

  { // ID: 53
    registry[53] = std::make_shared<EmeraldOreItem>();
  }

  { // ID: 73
    registry[73] = std::make_shared<ExposedCopperItem>();
  }

  { // ID: 77
    registry[77] = std::make_shared<ExposedCutCopperItem>();
  }

  { // ID: 81
    registry[81] = std::make_shared<ExposedCutCopperStairsItem>();
  }

  { // ID: 85
    registry[85] = std::make_shared<ExposedCutCopperSlabItem>();
  }

  { // ID: 249
    registry[249] = std::make_shared<EndRodItem>();
  }

  { // ID: 330
    registry[330] = std::make_shared<EnchantingTableItem>();
  }

  { // ID: 331
    registry[331] = std::make_shared<EndPortalFrameItem>();
  }

  { // ID: 332
    registry[332] = std::make_shared<EndStoneItem>();
  }

  { // ID: 333
    registry[333] = std::make_shared<EndStoneBricksItem>();
  }

  { // ID: 336
    registry[336] = std::make_shared<EnderChestItem>();
  }

  { // ID: 337
    registry[337] = std::make_shared<EmeraldBlockItem>();
  }

  { // ID: 362
    registry[362] = std::make_shared<EndStoneBrickWallItem>();
  }

  { // ID: 577
    registry[577] = std::make_shared<EndStoneBrickStairsItem>();
  }

  { // ID: 595
    registry[595] = std::make_shared<EndStoneBrickSlabItem>();
  }

  { // ID: 697
    registry[697] = std::make_shared<ElytraItem>();
  }

  { // ID: 723
    registry[723] = std::make_shared<EmeraldItem>();
  }

  { // ID: 803
    registry[803] = std::make_shared<EnchantedGoldenAppleItem>();
  }

  { // ID: 832
    registry[832] = std::make_shared<EggItem>();
  }

  { // ID: 897
    registry[897] = std::make_shared<EnderPearlItem>();
  }

  { // ID: 910
    registry[910] = std::make_shared<EnderEyeItem>();
  }

  { // ID: 926
    registry[926] = std::make_shared<ElderGuardianSpawnEggItem>();
  }

  { // ID: 927
    registry[927] = std::make_shared<EndermanSpawnEggItem>();
  }

  { // ID: 928
    registry[928] = std::make_shared<EndermiteSpawnEggItem>();
  }

  { // ID: 929
    registry[929] = std::make_shared<EvokerSpawnEggItem>();
  }

  { // ID: 983
    registry[983] = std::make_shared<ExperienceBottleItem>();
  }

  { // ID: 1006
    registry[1006] = std::make_shared<EnchantedBookItem>();
  }

  { // ID: 1041
    registry[1041] = std::make_shared<EndCrystalItem>();
  }

  { // ID: 1151
    registry[1151] = std::make_shared<EchoShardItem>();
  }
}