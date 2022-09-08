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

#include "packed_ice_item.h"
#include "packed_mud_item.h"
#include "painting_item.h"
#include "panda_spawn_egg_item.h"
#include "paper_item.h"
#include "parrot_spawn_egg_item.h"
#include "pearlescent_froglight_item.h"
#include "peony_item.h"
#include "petrified_oak_slab_item.h"
#include "phantom_membrane_item.h"
#include "phantom_spawn_egg_item.h"
#include "pig_spawn_egg_item.h"
#include "piglin_banner_pattern_item.h"
#include "piglin_brute_spawn_egg_item.h"
#include "piglin_spawn_egg_item.h"
#include "pillager_spawn_egg_item.h"
#include "pink_banner_item.h"
#include "pink_bed_item.h"
#include "pink_candle_item.h"
#include "pink_carpet_item.h"
#include "pink_concrete_item.h"
#include "pink_concrete_powder_item.h"
#include "pink_dye_item.h"
#include "pink_glazed_terracotta_item.h"
#include "pink_shulker_box_item.h"
#include "pink_stained_glass_item.h"
#include "pink_stained_glass_pane_item.h"
#include "pink_terracotta_item.h"
#include "pink_tulip_item.h"
#include "pink_wool_item.h"
#include "piston_item.h"
#include "player_head_item.h"
#include "podzol_item.h"
#include "pointed_dripstone_item.h"
#include "poisonous_potato_item.h"
#include "polar_bear_spawn_egg_item.h"
#include "polished_andesite_item.h"
#include "polished_andesite_slab_item.h"
#include "polished_andesite_stairs_item.h"
#include "polished_basalt_item.h"
#include "polished_blackstone_item.h"
#include "polished_blackstone_brick_slab_item.h"
#include "polished_blackstone_brick_stairs_item.h"
#include "polished_blackstone_brick_wall_item.h"
#include "polished_blackstone_bricks_item.h"
#include "polished_blackstone_button_item.h"
#include "polished_blackstone_pressure_plate_item.h"
#include "polished_blackstone_slab_item.h"
#include "polished_blackstone_stairs_item.h"
#include "polished_blackstone_wall_item.h"
#include "polished_deepslate_item.h"
#include "polished_deepslate_slab_item.h"
#include "polished_deepslate_stairs_item.h"
#include "polished_deepslate_wall_item.h"
#include "polished_diorite_item.h"
#include "polished_diorite_slab_item.h"
#include "polished_diorite_stairs_item.h"
#include "polished_granite_item.h"
#include "polished_granite_slab_item.h"
#include "polished_granite_stairs_item.h"
#include "popped_chorus_fruit_item.h"
#include "poppy_item.h"
#include "porkchop_item.h"
#include "potato_item.h"
#include "potion_item.h"
#include "powder_snow_bucket_item.h"
#include "powered_rail_item.h"
#include "prismarine_item.h"
#include "prismarine_brick_slab_item.h"
#include "prismarine_brick_stairs_item.h"
#include "prismarine_bricks_item.h"
#include "prismarine_crystals_item.h"
#include "prismarine_shard_item.h"
#include "prismarine_slab_item.h"
#include "prismarine_stairs_item.h"
#include "prismarine_wall_item.h"
#include "pufferfish_item.h"
#include "pufferfish_bucket_item.h"
#include "pufferfish_spawn_egg_item.h"
#include "pumpkin_item.h"
#include "pumpkin_pie_item.h"
#include "pumpkin_seeds_item.h"
#include "purple_banner_item.h"
#include "purple_bed_item.h"
#include "purple_candle_item.h"
#include "purple_carpet_item.h"
#include "purple_concrete_item.h"
#include "purple_concrete_powder_item.h"
#include "purple_dye_item.h"
#include "purple_glazed_terracotta_item.h"
#include "purple_shulker_box_item.h"
#include "purple_stained_glass_item.h"
#include "purple_stained_glass_pane_item.h"
#include "purple_terracotta_item.h"
#include "purple_wool_item.h"
#include "purpur_block_item.h"
#include "purpur_pillar_item.h"
#include "purpur_slab_item.h"
#include "purpur_stairs_item.h"

void ItemRegistry::generateP() {

  { // ID: 3
    registry[3] = std::make_shared<PolishedGraniteItem>();
  }

  { // ID: 5
    registry[5] = std::make_shared<PolishedDioriteItem>();
  }

  { // ID: 7
    registry[7] = std::make_shared<PolishedAndesiteItem>();
  }

  { // ID: 10
    registry[10] = std::make_shared<PolishedDeepslateItem>();
  }

  { // ID: 17
    registry[17] = std::make_shared<PodzolItem>();
  }

  { // ID: 173
    registry[173] = std::make_shared<PinkWoolItem>();
  }

  { // ID: 177
    registry[177] = std::make_shared<PurpleWoolItem>();
  }

  { // ID: 184
    registry[184] = std::make_shared<PoppyItem>();
  }

  { // ID: 191
    registry[191] = std::make_shared<PinkTulipItem>();
  }

  { // ID: 227
    registry[227] = std::make_shared<PetrifiedOakSlabItem>();
  }

  { // ID: 236
    registry[236] = std::make_shared<PurpurSlabItem>();
  }

  { // ID: 237
    registry[237] = std::make_shared<PrismarineSlabItem>();
  }

  { // ID: 238
    registry[238] = std::make_shared<PrismarineBrickSlabItem>();
  }

  { // ID: 252
    registry[252] = std::make_shared<PurpurBlockItem>();
  }

  { // ID: 253
    registry[253] = std::make_shared<PurpurPillarItem>();
  }

  { // ID: 254
    registry[254] = std::make_shared<PurpurStairsItem>();
  }

  { // ID: 277
    registry[277] = std::make_shared<PumpkinItem>();
  }

  { // ID: 284
    registry[284] = std::make_shared<PolishedBasaltItem>();
  }

  { // ID: 299
    registry[299] = std::make_shared<PackedMudItem>();
  }

  { // ID: 352
    registry[352] = std::make_shared<PrismarineWallItem>();
  }

  { // ID: 365
    registry[365] = std::make_shared<PolishedBlackstoneWallItem>();
  }

  { // ID: 366
    registry[366] = std::make_shared<PolishedBlackstoneBrickWallItem>();
  }

  { // ID: 368
    registry[368] = std::make_shared<PolishedDeepslateWallItem>();
  }

  { // ID: 385
    registry[385] = std::make_shared<PinkTerracottaItem>();
  }

  { // ID: 389
    registry[389] = std::make_shared<PurpleTerracottaItem>();
  }

  { // ID: 404
    registry[404] = std::make_shared<PinkCarpetItem>();
  }

  { // ID: 408
    registry[408] = std::make_shared<PurpleCarpetItem>();
  }

  { // ID: 415
    registry[415] = std::make_shared<PackedIceItem>();
  }

  { // ID: 420
    registry[420] = std::make_shared<PeonyItem>();
  }

  { // ID: 429
    registry[429] = std::make_shared<PinkStainedGlassItem>();
  }

  { // ID: 433
    registry[433] = std::make_shared<PurpleStainedGlassItem>();
  }

  { // ID: 445
    registry[445] = std::make_shared<PinkStainedGlassPaneItem>();
  }

  { // ID: 449
    registry[449] = std::make_shared<PurpleStainedGlassPaneItem>();
  }

  { // ID: 455
    registry[455] = std::make_shared<PrismarineItem>();
  }

  { // ID: 456
    registry[456] = std::make_shared<PrismarineBricksItem>();
  }

  { // ID: 458
    registry[458] = std::make_shared<PrismarineStairsItem>();
  }

  { // ID: 459
    registry[459] = std::make_shared<PrismarineBrickStairsItem>();
  }

  { // ID: 481
    registry[481] = std::make_shared<PinkShulkerBoxItem>();
  }

  { // ID: 485
    registry[485] = std::make_shared<PurpleShulkerBoxItem>();
  }

  { // ID: 497
    registry[497] = std::make_shared<PinkGlazedTerracottaItem>();
  }

  { // ID: 501
    registry[501] = std::make_shared<PurpleGlazedTerracottaItem>();
  }

  { // ID: 513
    registry[513] = std::make_shared<PinkConcreteItem>();
  }

  { // ID: 517
    registry[517] = std::make_shared<PurpleConcreteItem>();
  }

  { // ID: 529
    registry[529] = std::make_shared<PinkConcretePowderItem>();
  }

  { // ID: 533
    registry[533] = std::make_shared<PurpleConcretePowderItem>();
  }

  { // ID: 572
    registry[572] = std::make_shared<PolishedGraniteStairsItem>();
  }

  { // ID: 575
    registry[575] = std::make_shared<PolishedDioriteStairsItem>();
  }

  { // ID: 584
    registry[584] = std::make_shared<PolishedAndesiteStairsItem>();
  }

  { // ID: 587
    registry[587] = std::make_shared<PolishedDeepslateStairsItem>();
  }

  { // ID: 590
    registry[590] = std::make_shared<PolishedGraniteSlabItem>();
  }

  { // ID: 593
    registry[593] = std::make_shared<PolishedDioriteSlabItem>();
  }

  { // ID: 601
    registry[601] = std::make_shared<PolishedAndesiteSlabItem>();
  }

  { // ID: 604
    registry[604] = std::make_shared<PolishedDeepslateSlabItem>();
  }

  { // ID: 613
    registry[613] = std::make_shared<PistonItem>();
  }

  { // ID: 633
    registry[633] = std::make_shared<PolishedBlackstoneButtonItem>();
  }

  { // ID: 644
    registry[644] = std::make_shared<PolishedBlackstonePressurePlateItem>();
  }

  { // ID: 685
    registry[685] = std::make_shared<PoweredRailItem>();
  }

  { // ID: 799
    registry[799] = std::make_shared<PorkchopItem>();
  }

  { // ID: 801
    registry[801] = std::make_shared<PaintingItem>();
  }

  { // ID: 816
    registry[816] = std::make_shared<PowderSnowBucketItem>();
  }

  { // ID: 820
    registry[820] = std::make_shared<PufferfishBucketItem>();
  }

  { // ID: 829
    registry[829] = std::make_shared<PaperItem>();
  }

  { // ID: 843
    registry[843] = std::make_shared<PufferfishItem>();
  }

  { // ID: 855
    registry[855] = std::make_shared<PinkDyeItem>();
  }

  { // ID: 859
    registry[859] = std::make_shared<PurpleDyeItem>();
  }

  { // ID: 875
    registry[875] = std::make_shared<PinkBedItem>();
  }

  { // ID: 879
    registry[879] = std::make_shared<PurpleBedItem>();
  }

  { // ID: 890
    registry[890] = std::make_shared<PumpkinSeedsItem>();
  }

  { // ID: 902
    registry[902] = std::make_shared<PotionItem>();
  }

  { // ID: 944
    registry[944] = std::make_shared<PandaSpawnEggItem>();
  }

  { // ID: 945
    registry[945] = std::make_shared<ParrotSpawnEggItem>();
  }

  { // ID: 946
    registry[946] = std::make_shared<PhantomSpawnEggItem>();
  }

  { // ID: 947
    registry[947] = std::make_shared<PigSpawnEggItem>();
  }

  { // ID: 948
    registry[948] = std::make_shared<PiglinSpawnEggItem>();
  }

  { // ID: 949
    registry[949] = std::make_shared<PiglinBruteSpawnEggItem>();
  }

  { // ID: 950
    registry[950] = std::make_shared<PillagerSpawnEggItem>();
  }

  { // ID: 951
    registry[951] = std::make_shared<PolarBearSpawnEggItem>();
  }

  { // ID: 952
    registry[952] = std::make_shared<PufferfishSpawnEggItem>();
  }

  { // ID: 991
    registry[991] = std::make_shared<PotatoItem>();
  }

  { // ID: 993
    registry[993] = std::make_shared<PoisonousPotatoItem>();
  }

  { // ID: 998
    registry[998] = std::make_shared<PlayerHeadItem>();
  }

  { // ID: 1003
    registry[1003] = std::make_shared<PumpkinPieItem>();
  }

  { // ID: 1008
    registry[1008] = std::make_shared<PrismarineShardItem>();
  }

  { // ID: 1009
    registry[1009] = std::make_shared<PrismarineCrystalsItem>();
  }

  { // ID: 1031
    registry[1031] = std::make_shared<PinkBannerItem>();
  }

  { // ID: 1035
    registry[1035] = std::make_shared<PurpleBannerItem>();
  }

  { // ID: 1043
    registry[1043] = std::make_shared<PoppedChorusFruitItem>();
  }

  { // ID: 1075
    registry[1075] = std::make_shared<PhantomMembraneItem>();
  }

  { // ID: 1086
    registry[1086] = std::make_shared<PiglinBannerPatternItem>();
  }

  { // ID: 1116
    registry[1116] = std::make_shared<PolishedBlackstoneItem>();
  }

  { // ID: 1117
    registry[1117] = std::make_shared<PolishedBlackstoneSlabItem>();
  }

  { // ID: 1118
    registry[1118] = std::make_shared<PolishedBlackstoneStairsItem>();
  }

  { // ID: 1120
    registry[1120] = std::make_shared<PolishedBlackstoneBricksItem>();
  }

  { // ID: 1121
    registry[1121] = std::make_shared<PolishedBlackstoneBrickSlabItem>();
  }

  { // ID: 1122
    registry[1122] = std::make_shared<PolishedBlackstoneBrickStairsItem>();
  }

  { // ID: 1132
    registry[1132] = std::make_shared<PinkCandleItem>();
  }

  { // ID: 1136
    registry[1136] = std::make_shared<PurpleCandleItem>();
  }

  { // ID: 1146
    registry[1146] = std::make_shared<PointedDripstoneItem>();
  }

  { // ID: 1149
    registry[1149] = std::make_shared<PearlescentFroglightItem>();
  }
}