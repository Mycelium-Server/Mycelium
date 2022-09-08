/*
 * Mycelium
 * Copyright (C) 2022  JNNGL
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

#include "baked_potato_item.h"
#include "bamboo_item.h"
#include "barrel_item.h"
#include "barrier_item.h"
#include "basalt_item.h"
#include "bat_spawn_egg_item.h"
#include "beacon_item.h"
#include "bedrock_item.h"
#include "bee_nest_item.h"
#include "bee_spawn_egg_item.h"
#include "beef_item.h"
#include "beehive_item.h"
#include "beetroot_item.h"
#include "beetroot_seeds_item.h"
#include "beetroot_soup_item.h"
#include "bell_item.h"
#include "big_dripleaf_item.h"
#include "birch_boat_item.h"
#include "birch_button_item.h"
#include "birch_chest_boat_item.h"
#include "birch_door_item.h"
#include "birch_fence_item.h"
#include "birch_fence_gate_item.h"
#include "birch_leaves_item.h"
#include "birch_log_item.h"
#include "birch_planks_item.h"
#include "birch_pressure_plate_item.h"
#include "birch_sapling_item.h"
#include "birch_sign_item.h"
#include "birch_slab_item.h"
#include "birch_stairs_item.h"
#include "birch_trapdoor_item.h"
#include "birch_wood_item.h"
#include "black_banner_item.h"
#include "black_bed_item.h"
#include "black_candle_item.h"
#include "black_carpet_item.h"
#include "black_concrete_item.h"
#include "black_concrete_powder_item.h"
#include "black_dye_item.h"
#include "black_glazed_terracotta_item.h"
#include "black_shulker_box_item.h"
#include "black_stained_glass_item.h"
#include "black_stained_glass_pane_item.h"
#include "black_terracotta_item.h"
#include "black_wool_item.h"
#include "blackstone_item.h"
#include "blackstone_slab_item.h"
#include "blackstone_stairs_item.h"
#include "blackstone_wall_item.h"
#include "blast_furnace_item.h"
#include "blaze_powder_item.h"
#include "blaze_rod_item.h"
#include "blaze_spawn_egg_item.h"
#include "blue_banner_item.h"
#include "blue_bed_item.h"
#include "blue_candle_item.h"
#include "blue_carpet_item.h"
#include "blue_concrete_item.h"
#include "blue_concrete_powder_item.h"
#include "blue_dye_item.h"
#include "blue_glazed_terracotta_item.h"
#include "blue_ice_item.h"
#include "blue_orchid_item.h"
#include "blue_shulker_box_item.h"
#include "blue_stained_glass_item.h"
#include "blue_stained_glass_pane_item.h"
#include "blue_terracotta_item.h"
#include "blue_wool_item.h"
#include "bone_item.h"
#include "bone_block_item.h"
#include "bone_meal_item.h"
#include "book_item.h"
#include "bookshelf_item.h"
#include "bow_item.h"
#include "bowl_item.h"
#include "brain_coral_item.h"
#include "brain_coral_block_item.h"
#include "brain_coral_fan_item.h"
#include "bread_item.h"
#include "brewing_stand_item.h"
#include "brick_item.h"
#include "brick_slab_item.h"
#include "brick_stairs_item.h"
#include "brick_wall_item.h"
#include "bricks_item.h"
#include "brown_banner_item.h"
#include "brown_bed_item.h"
#include "brown_candle_item.h"
#include "brown_carpet_item.h"
#include "brown_concrete_item.h"
#include "brown_concrete_powder_item.h"
#include "brown_dye_item.h"
#include "brown_glazed_terracotta_item.h"
#include "brown_mushroom_item.h"
#include "brown_mushroom_block_item.h"
#include "brown_shulker_box_item.h"
#include "brown_stained_glass_item.h"
#include "brown_stained_glass_pane_item.h"
#include "brown_terracotta_item.h"
#include "brown_wool_item.h"
#include "bubble_coral_item.h"
#include "bubble_coral_block_item.h"
#include "bubble_coral_fan_item.h"
#include "bucket_item.h"
#include "budding_amethyst_item.h"
#include "bundle_item.h"

void ItemRegistry::generateB() {

  { // ID: 25
    registry[25] = std::make_shared<BirchPlanksItem>();
  }

  { // ID: 34
    registry[34] = std::make_shared<BirchSaplingItem>();
  }

  { // ID: 39
    registry[39] = std::make_shared<BedrockItem>();
  }

  { // ID: 67
    registry[67] = std::make_shared<BuddingAmethystItem>();
  }

  { // ID: 106
    registry[106] = std::make_shared<BirchLogItem>();
  }

  { // ID: 135
    registry[135] = std::make_shared<BirchWoodItem>();
  }

  { // ID: 144
    registry[144] = std::make_shared<BirchLeavesItem>();
  }

  { // ID: 178
    registry[178] = std::make_shared<BlueWoolItem>();
  }

  { // ID: 179
    registry[179] = std::make_shared<BrownWoolItem>();
  }

  { // ID: 182
    registry[182] = std::make_shared<BlackWoolItem>();
  }

  { // ID: 185
    registry[185] = std::make_shared<BlueOrchidItem>();
  }

  { // ID: 197
    registry[197] = std::make_shared<BrownMushroomItem>();
  }

  { // ID: 211
    registry[211] = std::make_shared<BigDripleafItem>();
  }

  { // ID: 213
    registry[213] = std::make_shared<BambooItem>();
  }

  { // ID: 216
    registry[216] = std::make_shared<BirchSlabItem>();
  }

  { // ID: 229
    registry[229] = std::make_shared<BrickSlabItem>();
  }

  { // ID: 244
    registry[244] = std::make_shared<BricksItem>();
  }

  { // ID: 245
    registry[245] = std::make_shared<BookshelfItem>();
  }

  { // ID: 270
    registry[270] = std::make_shared<BirchFenceItem>();
  }

  { // ID: 283
    registry[283] = std::make_shared<BasaltItem>();
  }

  { // ID: 307
    registry[307] = std::make_shared<BrownMushroomBlockItem>();
  }

  { // ID: 316
    registry[316] = std::make_shared<BrickStairsItem>();
  }

  { // ID: 340
    registry[340] = std::make_shared<BirchStairsItem>();
  }

  { // ID: 348
    registry[348] = std::make_shared<BeaconItem>();
  }

  { // ID: 351
    registry[351] = std::make_shared<BrickWallItem>();
  }

  { // ID: 364
    registry[364] = std::make_shared<BlackstoneWallItem>();
  }

  { // ID: 390
    registry[390] = std::make_shared<BlueTerracottaItem>();
  }

  { // ID: 391
    registry[391] = std::make_shared<BrownTerracottaItem>();
  }

  { // ID: 394
    registry[394] = std::make_shared<BlackTerracottaItem>();
  }

  { // ID: 395
    registry[395] = std::make_shared<BarrierItem>();
  }

  { // ID: 409
    registry[409] = std::make_shared<BlueCarpetItem>();
  }

  { // ID: 410
    registry[410] = std::make_shared<BrownCarpetItem>();
  }

  { // ID: 413
    registry[413] = std::make_shared<BlackCarpetItem>();
  }

  { // ID: 434
    registry[434] = std::make_shared<BlueStainedGlassItem>();
  }

  { // ID: 435
    registry[435] = std::make_shared<BrownStainedGlassItem>();
  }

  { // ID: 438
    registry[438] = std::make_shared<BlackStainedGlassItem>();
  }

  { // ID: 450
    registry[450] = std::make_shared<BlueStainedGlassPaneItem>();
  }

  { // ID: 451
    registry[451] = std::make_shared<BrownStainedGlassPaneItem>();
  }

  { // ID: 454
    registry[454] = std::make_shared<BlackStainedGlassPaneItem>();
  }

  { // ID: 472
    registry[472] = std::make_shared<BoneBlockItem>();
  }

  { // ID: 486
    registry[486] = std::make_shared<BlueShulkerBoxItem>();
  }

  { // ID: 487
    registry[487] = std::make_shared<BrownShulkerBoxItem>();
  }

  { // ID: 490
    registry[490] = std::make_shared<BlackShulkerBoxItem>();
  }

  { // ID: 502
    registry[502] = std::make_shared<BlueGlazedTerracottaItem>();
  }

  { // ID: 503
    registry[503] = std::make_shared<BrownGlazedTerracottaItem>();
  }

  { // ID: 506
    registry[506] = std::make_shared<BlackGlazedTerracottaItem>();
  }

  { // ID: 518
    registry[518] = std::make_shared<BlueConcreteItem>();
  }

  { // ID: 519
    registry[519] = std::make_shared<BrownConcreteItem>();
  }

  { // ID: 522
    registry[522] = std::make_shared<BlackConcreteItem>();
  }

  { // ID: 534
    registry[534] = std::make_shared<BlueConcretePowderItem>();
  }

  { // ID: 535
    registry[535] = std::make_shared<BrownConcretePowderItem>();
  }

  { // ID: 538
    registry[538] = std::make_shared<BlackConcretePowderItem>();
  }

  { // ID: 546
    registry[546] = std::make_shared<BrainCoralBlockItem>();
  }

  { // ID: 547
    registry[547] = std::make_shared<BubbleCoralBlockItem>();
  }

  { // ID: 551
    registry[551] = std::make_shared<BrainCoralItem>();
  }

  { // ID: 552
    registry[552] = std::make_shared<BubbleCoralItem>();
  }

  { // ID: 561
    registry[561] = std::make_shared<BrainCoralFanItem>();
  }

  { // ID: 562
    registry[562] = std::make_shared<BubbleCoralFanItem>();
  }

  { // ID: 570
    registry[570] = std::make_shared<BlueIceItem>();
  }

  { // ID: 636
    registry[636] = std::make_shared<BirchButtonItem>();
  }

  { // ID: 649
    registry[649] = std::make_shared<BirchPressurePlateItem>();
  }

  { // ID: 659
    registry[659] = std::make_shared<BirchDoorItem>();
  }

  { // ID: 669
    registry[669] = std::make_shared<BirchTrapdoorItem>();
  }

  { // ID: 678
    registry[678] = std::make_shared<BirchFenceGateItem>();
  }

  { // ID: 702
    registry[702] = std::make_shared<BirchBoatItem>();
  }

  { // ID: 703
    registry[703] = std::make_shared<BirchChestBoatItem>();
  }

  { // ID: 718
    registry[718] = std::make_shared<BowItem>();
  }

  { // ID: 766
    registry[766] = std::make_shared<BowlItem>();
  }

  { // ID: 773
    registry[773] = std::make_shared<BreadItem>();
  }

  { // ID: 806
    registry[806] = std::make_shared<BirchSignItem>();
  }

  { // ID: 813
    registry[813] = std::make_shared<BucketItem>();
  }

  { // ID: 826
    registry[826] = std::make_shared<BrickItem>();
  }

  { // ID: 830
    registry[830] = std::make_shared<BookItem>();
  }

  { // ID: 835
    registry[835] = std::make_shared<BundleItem>();
  }

  { // ID: 860
    registry[860] = std::make_shared<BlueDyeItem>();
  }

  { // ID: 861
    registry[861] = std::make_shared<BrownDyeItem>();
  }

  { // ID: 864
    registry[864] = std::make_shared<BlackDyeItem>();
  }

  { // ID: 865
    registry[865] = std::make_shared<BoneMealItem>();
  }

  { // ID: 866
    registry[866] = std::make_shared<BoneItem>();
  }

  { // ID: 880
    registry[880] = std::make_shared<BlueBedItem>();
  }

  { // ID: 881
    registry[881] = std::make_shared<BrownBedItem>();
  }

  { // ID: 884
    registry[884] = std::make_shared<BlackBedItem>();
  }

  { // ID: 892
    registry[892] = std::make_shared<BeefItem>();
  }

  { // ID: 898
    registry[898] = std::make_shared<BlazeRodItem>();
  }

  { // ID: 906
    registry[906] = std::make_shared<BlazePowderItem>();
  }

  { // ID: 908
    registry[908] = std::make_shared<BrewingStandItem>();
  }

  { // ID: 914
    registry[914] = std::make_shared<BatSpawnEggItem>();
  }

  { // ID: 915
    registry[915] = std::make_shared<BeeSpawnEggItem>();
  }

  { // ID: 916
    registry[916] = std::make_shared<BlazeSpawnEggItem>();
  }

  { // ID: 992
    registry[992] = std::make_shared<BakedPotatoItem>();
  }

  { // ID: 1036
    registry[1036] = std::make_shared<BlueBannerItem>();
  }

  { // ID: 1037
    registry[1037] = std::make_shared<BrownBannerItem>();
  }

  { // ID: 1040
    registry[1040] = std::make_shared<BlackBannerItem>();
  }

  { // ID: 1044
    registry[1044] = std::make_shared<BeetrootItem>();
  }

  { // ID: 1045
    registry[1045] = std::make_shared<BeetrootSeedsItem>();
  }

  { // ID: 1046
    registry[1046] = std::make_shared<BeetrootSoupItem>();
  }

  { // ID: 1089
    registry[1089] = std::make_shared<BarrelItem>();
  }

  { // ID: 1091
    registry[1091] = std::make_shared<BlastFurnaceItem>();
  }

  { // ID: 1097
    registry[1097] = std::make_shared<BellItem>();
  }

  { // ID: 1106
    registry[1106] = std::make_shared<BeeNestItem>();
  }

  { // ID: 1107
    registry[1107] = std::make_shared<BeehiveItem>();
  }

  { // ID: 1112
    registry[1112] = std::make_shared<BlackstoneItem>();
  }

  { // ID: 1113
    registry[1113] = std::make_shared<BlackstoneSlabItem>();
  }

  { // ID: 1114
    registry[1114] = std::make_shared<BlackstoneStairsItem>();
  }

  { // ID: 1137
    registry[1137] = std::make_shared<BlueCandleItem>();
  }

  { // ID: 1138
    registry[1138] = std::make_shared<BrownCandleItem>();
  }

  { // ID: 1141
    registry[1141] = std::make_shared<BlackCandleItem>();
  }
}