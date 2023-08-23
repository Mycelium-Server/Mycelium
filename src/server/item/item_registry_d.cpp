/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "item_registry.h"

#include "damaged_anvil_item.h"
#include "dandelion_item.h"
#include "dark_oak_boat_item.h"
#include "dark_oak_button_item.h"
#include "dark_oak_chest_boat_item.h"
#include "dark_oak_door_item.h"
#include "dark_oak_fence_item.h"
#include "dark_oak_fence_gate_item.h"
#include "dark_oak_leaves_item.h"
#include "dark_oak_log_item.h"
#include "dark_oak_planks_item.h"
#include "dark_oak_pressure_plate_item.h"
#include "dark_oak_sapling_item.h"
#include "dark_oak_sign_item.h"
#include "dark_oak_slab_item.h"
#include "dark_oak_stairs_item.h"
#include "dark_oak_trapdoor_item.h"
#include "dark_oak_wood_item.h"
#include "dark_prismarine_item.h"
#include "dark_prismarine_slab_item.h"
#include "dark_prismarine_stairs_item.h"
#include "daylight_detector_item.h"
#include "dead_brain_coral_item.h"
#include "dead_brain_coral_block_item.h"
#include "dead_brain_coral_fan_item.h"
#include "dead_bubble_coral_item.h"
#include "dead_bubble_coral_block_item.h"
#include "dead_bubble_coral_fan_item.h"
#include "dead_bush_item.h"
#include "dead_fire_coral_item.h"
#include "dead_fire_coral_block_item.h"
#include "dead_fire_coral_fan_item.h"
#include "dead_horn_coral_item.h"
#include "dead_horn_coral_block_item.h"
#include "dead_horn_coral_fan_item.h"
#include "dead_tube_coral_item.h"
#include "dead_tube_coral_block_item.h"
#include "dead_tube_coral_fan_item.h"
#include "debug_stick_item.h"
#include "deepslate_item.h"
#include "deepslate_brick_slab_item.h"
#include "deepslate_brick_stairs_item.h"
#include "deepslate_brick_wall_item.h"
#include "deepslate_bricks_item.h"
#include "deepslate_coal_ore_item.h"
#include "deepslate_copper_ore_item.h"
#include "deepslate_diamond_ore_item.h"
#include "deepslate_emerald_ore_item.h"
#include "deepslate_gold_ore_item.h"
#include "deepslate_iron_ore_item.h"
#include "deepslate_lapis_ore_item.h"
#include "deepslate_redstone_ore_item.h"
#include "deepslate_tile_slab_item.h"
#include "deepslate_tile_stairs_item.h"
#include "deepslate_tile_wall_item.h"
#include "deepslate_tiles_item.h"
#include "detector_rail_item.h"
#include "diamond_item.h"
#include "diamond_axe_item.h"
#include "diamond_block_item.h"
#include "diamond_boots_item.h"
#include "diamond_chestplate_item.h"
#include "diamond_helmet_item.h"
#include "diamond_hoe_item.h"
#include "diamond_horse_armor_item.h"
#include "diamond_leggings_item.h"
#include "diamond_ore_item.h"
#include "diamond_pickaxe_item.h"
#include "diamond_shovel_item.h"
#include "diamond_sword_item.h"
#include "diorite_item.h"
#include "diorite_slab_item.h"
#include "diorite_stairs_item.h"
#include "diorite_wall_item.h"
#include "dirt_item.h"
#include "dirt_path_item.h"
#include "disc_fragment_5_item.h"
#include "dispenser_item.h"
#include "dolphin_spawn_egg_item.h"
#include "donkey_spawn_egg_item.h"
#include "dragon_breath_item.h"
#include "dragon_egg_item.h"
#include "dragon_head_item.h"
#include "dried_kelp_item.h"
#include "dried_kelp_block_item.h"
#include "dripstone_block_item.h"
#include "dropper_item.h"
#include "drowned_spawn_egg_item.h"

void ItemRegistry::generateD() {

  { // ID: 4
    registry[4] = std::make_shared<DioriteItem>();
  }

  { // ID: 8
    registry[8] = std::make_shared<DeepslateItem>();
  }

  { // ID: 13
    registry[13] = std::make_shared<DripstoneBlockItem>();
  }

  { // ID: 15
    registry[15] = std::make_shared<DirtItem>();
  }

  { // ID: 28
    registry[28] = std::make_shared<DarkOakPlanksItem>();
  }

  { // ID: 37
    registry[37] = std::make_shared<DarkOakSaplingItem>();
  }

  { // ID: 44
    registry[44] = std::make_shared<DeepslateCoalOreItem>();
  }

  { // ID: 46
    registry[46] = std::make_shared<DeepslateIronOreItem>();
  }

  { // ID: 48
    registry[48] = std::make_shared<DeepslateCopperOreItem>();
  }

  { // ID: 50
    registry[50] = std::make_shared<DeepslateGoldOreItem>();
  }

  { // ID: 52
    registry[52] = std::make_shared<DeepslateRedstoneOreItem>();
  }

  { // ID: 54
    registry[54] = std::make_shared<DeepslateEmeraldOreItem>();
  }

  { // ID: 56
    registry[56] = std::make_shared<DeepslateLapisOreItem>();
  }

  { // ID: 57
    registry[57] = std::make_shared<DiamondOreItem>();
  }

  { // ID: 58
    registry[58] = std::make_shared<DeepslateDiamondOreItem>();
  }

  { // ID: 71
    registry[71] = std::make_shared<DiamondBlockItem>();
  }

  { // ID: 109
    registry[109] = std::make_shared<DarkOakLogItem>();
  }

  { // ID: 138
    registry[138] = std::make_shared<DarkOakWoodItem>();
  }

  { // ID: 147
    registry[147] = std::make_shared<DarkOakLeavesItem>();
  }

  { // ID: 164
    registry[164] = std::make_shared<DeadBushItem>();
  }

  { // ID: 183
    registry[183] = std::make_shared<DandelionItem>();
  }

  { // ID: 219
    registry[219] = std::make_shared<DarkOakSlabItem>();
  }

  { // ID: 239
    registry[239] = std::make_shared<DarkPrismarineSlabItem>();
  }

  { // ID: 273
    registry[273] = std::make_shared<DarkOakFenceItem>();
  }

  { // ID: 301
    registry[301] = std::make_shared<DeepslateBricksItem>();
  }

  { // ID: 303
    registry[303] = std::make_shared<DeepslateTilesItem>();
  }

  { // ID: 334
    registry[334] = std::make_shared<DragonEggItem>();
  }

  { // ID: 343
    registry[343] = std::make_shared<DarkOakStairsItem>();
  }

  { // ID: 363
    registry[363] = std::make_shared<DioriteWallItem>();
  }

  { // ID: 369
    registry[369] = std::make_shared<DeepslateBrickWallItem>();
  }

  { // ID: 370
    registry[370] = std::make_shared<DeepslateTileWallItem>();
  }

  { // ID: 373
    registry[373] = std::make_shared<DamagedAnvilItem>();
  }

  { // ID: 416
    registry[416] = std::make_shared<DirtPathItem>();
  }

  { // ID: 457
    registry[457] = std::make_shared<DarkPrismarineItem>();
  }

  { // ID: 460
    registry[460] = std::make_shared<DarkPrismarineStairsItem>();
  }

  { // ID: 540
    registry[540] = std::make_shared<DeadTubeCoralBlockItem>();
  }

  { // ID: 541
    registry[541] = std::make_shared<DeadBrainCoralBlockItem>();
  }

  { // ID: 542
    registry[542] = std::make_shared<DeadBubbleCoralBlockItem>();
  }

  { // ID: 543
    registry[543] = std::make_shared<DeadFireCoralBlockItem>();
  }

  { // ID: 544
    registry[544] = std::make_shared<DeadHornCoralBlockItem>();
  }

  { // ID: 555
    registry[555] = std::make_shared<DeadBrainCoralItem>();
  }

  { // ID: 556
    registry[556] = std::make_shared<DeadBubbleCoralItem>();
  }

  { // ID: 557
    registry[557] = std::make_shared<DeadFireCoralItem>();
  }

  { // ID: 558
    registry[558] = std::make_shared<DeadHornCoralItem>();
  }

  { // ID: 559
    registry[559] = std::make_shared<DeadTubeCoralItem>();
  }

  { // ID: 565
    registry[565] = std::make_shared<DeadTubeCoralFanItem>();
  }

  { // ID: 566
    registry[566] = std::make_shared<DeadBrainCoralFanItem>();
  }

  { // ID: 567
    registry[567] = std::make_shared<DeadBubbleCoralFanItem>();
  }

  { // ID: 568
    registry[568] = std::make_shared<DeadFireCoralFanItem>();
  }

  { // ID: 569
    registry[569] = std::make_shared<DeadHornCoralFanItem>();
  }

  { // ID: 585
    registry[585] = std::make_shared<DioriteStairsItem>();
  }

  { // ID: 588
    registry[588] = std::make_shared<DeepslateBrickStairsItem>();
  }

  { // ID: 589
    registry[589] = std::make_shared<DeepslateTileStairsItem>();
  }

  { // ID: 602
    registry[602] = std::make_shared<DioriteSlabItem>();
  }

  { // ID: 605
    registry[605] = std::make_shared<DeepslateBrickSlabItem>();
  }

  { // ID: 606
    registry[606] = std::make_shared<DeepslateTileSlabItem>();
  }

  { // ID: 619
    registry[619] = std::make_shared<DispenserItem>();
  }

  { // ID: 620
    registry[620] = std::make_shared<DropperItem>();
  }

  { // ID: 625
    registry[625] = std::make_shared<DaylightDetectorItem>();
  }

  { // ID: 639
    registry[639] = std::make_shared<DarkOakButtonItem>();
  }

  { // ID: 652
    registry[652] = std::make_shared<DarkOakPressurePlateItem>();
  }

  { // ID: 662
    registry[662] = std::make_shared<DarkOakDoorItem>();
  }

  { // ID: 672
    registry[672] = std::make_shared<DarkOakTrapdoorItem>();
  }

  { // ID: 681
    registry[681] = std::make_shared<DarkOakFenceGateItem>();
  }

  { // ID: 686
    registry[686] = std::make_shared<DetectorRailItem>();
  }

  { // ID: 708
    registry[708] = std::make_shared<DarkOakBoatItem>();
  }

  { // ID: 709
    registry[709] = std::make_shared<DarkOakChestBoatItem>();
  }

  { // ID: 722
    registry[722] = std::make_shared<DiamondItem>();
  }

  { // ID: 755
    registry[755] = std::make_shared<DiamondSwordItem>();
  }

  { // ID: 756
    registry[756] = std::make_shared<DiamondShovelItem>();
  }

  { // ID: 757
    registry[757] = std::make_shared<DiamondPickaxeItem>();
  }

  { // ID: 758
    registry[758] = std::make_shared<DiamondAxeItem>();
  }

  { // ID: 759
    registry[759] = std::make_shared<DiamondHoeItem>();
  }

  { // ID: 786
    registry[786] = std::make_shared<DiamondHelmetItem>();
  }

  { // ID: 787
    registry[787] = std::make_shared<DiamondChestplateItem>();
  }

  { // ID: 788
    registry[788] = std::make_shared<DiamondLeggingsItem>();
  }

  { // ID: 789
    registry[789] = std::make_shared<DiamondBootsItem>();
  }

  { // ID: 809
    registry[809] = std::make_shared<DarkOakSignItem>();
  }

  { // ID: 828
    registry[828] = std::make_shared<DriedKelpBlockItem>();
  }

  { // ID: 889
    registry[889] = std::make_shared<DriedKelpItem>();
  }

  { // ID: 923
    registry[923] = std::make_shared<DolphinSpawnEggItem>();
  }

  { // ID: 924
    registry[924] = std::make_shared<DonkeySpawnEggItem>();
  }

  { // ID: 925
    registry[925] = std::make_shared<DrownedSpawnEggItem>();
  }

  { // ID: 1001
    registry[1001] = std::make_shared<DragonHeadItem>();
  }

  { // ID: 1018
    registry[1018] = std::make_shared<DiamondHorseArmorItem>();
  }

  { // ID: 1047
    registry[1047] = std::make_shared<DragonBreathItem>();
  }

  { // ID: 1057
    registry[1057] = std::make_shared<DebugStickItem>();
  }

  { // ID: 1073
    registry[1073] = std::make_shared<DiscFragment5Item>();
  }
}