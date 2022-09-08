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

#include "magenta_banner_item.h"
#include "magenta_bed_item.h"
#include "magenta_candle_item.h"
#include "magenta_carpet_item.h"
#include "magenta_concrete_item.h"
#include "magenta_concrete_powder_item.h"
#include "magenta_dye_item.h"
#include "magenta_glazed_terracotta_item.h"
#include "magenta_shulker_box_item.h"
#include "magenta_stained_glass_item.h"
#include "magenta_stained_glass_pane_item.h"
#include "magenta_terracotta_item.h"
#include "magenta_wool_item.h"
#include "magma_block_item.h"
#include "magma_cream_item.h"
#include "magma_cube_spawn_egg_item.h"
#include "mangrove_boat_item.h"
#include "mangrove_button_item.h"
#include "mangrove_chest_boat_item.h"
#include "mangrove_door_item.h"
#include "mangrove_fence_item.h"
#include "mangrove_fence_gate_item.h"
#include "mangrove_leaves_item.h"
#include "mangrove_log_item.h"
#include "mangrove_planks_item.h"
#include "mangrove_pressure_plate_item.h"
#include "mangrove_propagule_item.h"
#include "mangrove_roots_item.h"
#include "mangrove_sign_item.h"
#include "mangrove_slab_item.h"
#include "mangrove_stairs_item.h"
#include "mangrove_trapdoor_item.h"
#include "mangrove_wood_item.h"
#include "map_item.h"
#include "medium_amethyst_bud_item.h"
#include "melon_item.h"
#include "melon_seeds_item.h"
#include "melon_slice_item.h"
#include "milk_bucket_item.h"
#include "minecart_item.h"
#include "mojang_banner_pattern_item.h"
#include "mooshroom_spawn_egg_item.h"
#include "moss_block_item.h"
#include "moss_carpet_item.h"
#include "mossy_cobblestone_item.h"
#include "mossy_cobblestone_slab_item.h"
#include "mossy_cobblestone_stairs_item.h"
#include "mossy_cobblestone_wall_item.h"
#include "mossy_stone_brick_slab_item.h"
#include "mossy_stone_brick_stairs_item.h"
#include "mossy_stone_brick_wall_item.h"
#include "mossy_stone_bricks_item.h"
#include "mud_item.h"
#include "mud_brick_slab_item.h"
#include "mud_brick_stairs_item.h"
#include "mud_brick_wall_item.h"
#include "mud_bricks_item.h"
#include "muddy_mangrove_roots_item.h"
#include "mule_spawn_egg_item.h"
#include "mushroom_stem_item.h"
#include "mushroom_stew_item.h"
#include "music_disc_11_item.h"
#include "music_disc_13_item.h"
#include "music_disc_5_item.h"
#include "music_disc_blocks_item.h"
#include "music_disc_cat_item.h"
#include "music_disc_chirp_item.h"
#include "music_disc_far_item.h"
#include "music_disc_mall_item.h"
#include "music_disc_mellohi_item.h"
#include "music_disc_otherside_item.h"
#include "music_disc_pigstep_item.h"
#include "music_disc_stal_item.h"
#include "music_disc_strad_item.h"
#include "music_disc_wait_item.h"
#include "music_disc_ward_item.h"
#include "mutton_item.h"
#include "mycelium_item.h"

void ItemRegistry::generateM() {

  { // ID: 19
    registry[19] = std::make_shared<MudItem>();
  }

  { // ID: 29
    registry[29] = std::make_shared<MangrovePlanksItem>();
  }

  { // ID: 38
    registry[38] = std::make_shared<MangrovePropaguleItem>();
  }

  { // ID: 110
    registry[110] = std::make_shared<MangroveLogItem>();
  }

  { // ID: 111
    registry[111] = std::make_shared<MangroveRootsItem>();
  }

  { // ID: 112
    registry[112] = std::make_shared<MuddyMangroveRootsItem>();
  }

  { // ID: 139
    registry[139] = std::make_shared<MangroveWoodItem>();
  }

  { // ID: 148
    registry[148] = std::make_shared<MangroveLeavesItem>();
  }

  { // ID: 169
    registry[169] = std::make_shared<MagentaWoolItem>();
  }

  { // ID: 208
    registry[208] = std::make_shared<MossCarpetItem>();
  }

  { // ID: 209
    registry[209] = std::make_shared<MossBlockItem>();
  }

  { // ID: 220
    registry[220] = std::make_shared<MangroveSlabItem>();
  }

  { // ID: 231
    registry[231] = std::make_shared<MudBrickSlabItem>();
  }

  { // ID: 246
    registry[246] = std::make_shared<MossyCobblestoneItem>();
  }

  { // ID: 274
    registry[274] = std::make_shared<MangroveFenceItem>();
  }

  { // ID: 296
    registry[296] = std::make_shared<MossyStoneBricksItem>();
  }

  { // ID: 300
    registry[300] = std::make_shared<MudBricksItem>();
  }

  { // ID: 309
    registry[309] = std::make_shared<MushroomStemItem>();
  }

  { // ID: 313
    registry[313] = std::make_shared<MelonItem>();
  }

  { // ID: 318
    registry[318] = std::make_shared<MudBrickStairsItem>();
  }

  { // ID: 319
    registry[319] = std::make_shared<MyceliumItem>();
  }

  { // ID: 344
    registry[344] = std::make_shared<MangroveStairsItem>();
  }

  { // ID: 350
    registry[350] = std::make_shared<MossyCobblestoneWallItem>();
  }

  { // ID: 354
    registry[354] = std::make_shared<MossyStoneBrickWallItem>();
  }

  { // ID: 357
    registry[357] = std::make_shared<MudBrickWallItem>();
  }

  { // ID: 381
    registry[381] = std::make_shared<MagentaTerracottaItem>();
  }

  { // ID: 400
    registry[400] = std::make_shared<MagentaCarpetItem>();
  }

  { // ID: 425
    registry[425] = std::make_shared<MagentaStainedGlassItem>();
  }

  { // ID: 441
    registry[441] = std::make_shared<MagentaStainedGlassPaneItem>();
  }

  { // ID: 468
    registry[468] = std::make_shared<MagmaBlockItem>();
  }

  { // ID: 477
    registry[477] = std::make_shared<MagentaShulkerBoxItem>();
  }

  { // ID: 493
    registry[493] = std::make_shared<MagentaGlazedTerracottaItem>();
  }

  { // ID: 509
    registry[509] = std::make_shared<MagentaConcreteItem>();
  }

  { // ID: 525
    registry[525] = std::make_shared<MagentaConcretePowderItem>();
  }

  { // ID: 574
    registry[574] = std::make_shared<MossyStoneBrickStairsItem>();
  }

  { // ID: 576
    registry[576] = std::make_shared<MossyCobblestoneStairsItem>();
  }

  { // ID: 592
    registry[592] = std::make_shared<MossyStoneBrickSlabItem>();
  }

  { // ID: 594
    registry[594] = std::make_shared<MossyCobblestoneSlabItem>();
  }

  { // ID: 640
    registry[640] = std::make_shared<MangroveButtonItem>();
  }

  { // ID: 653
    registry[653] = std::make_shared<MangrovePressurePlateItem>();
  }

  { // ID: 663
    registry[663] = std::make_shared<MangroveDoorItem>();
  }

  { // ID: 673
    registry[673] = std::make_shared<MangroveTrapdoorItem>();
  }

  { // ID: 682
    registry[682] = std::make_shared<MangroveFenceGateItem>();
  }

  { // ID: 690
    registry[690] = std::make_shared<MinecartItem>();
  }

  { // ID: 710
    registry[710] = std::make_shared<MangroveBoatItem>();
  }

  { // ID: 711
    registry[711] = std::make_shared<MangroveChestBoatItem>();
  }

  { // ID: 767
    registry[767] = std::make_shared<MushroomStewItem>();
  }

  { // ID: 810
    registry[810] = std::make_shared<MangroveSignItem>();
  }

  { // ID: 819
    registry[819] = std::make_shared<MilkBucketItem>();
  }

  { // ID: 851
    registry[851] = std::make_shared<MagentaDyeItem>();
  }

  { // ID: 871
    registry[871] = std::make_shared<MagentaBedItem>();
  }

  { // ID: 888
    registry[888] = std::make_shared<MelonSliceItem>();
  }

  { // ID: 891
    registry[891] = std::make_shared<MelonSeedsItem>();
  }

  { // ID: 907
    registry[907] = std::make_shared<MagmaCreamItem>();
  }

  { // ID: 940
    registry[940] = std::make_shared<MagmaCubeSpawnEggItem>();
  }

  { // ID: 941
    registry[941] = std::make_shared<MooshroomSpawnEggItem>();
  }

  { // ID: 942
    registry[942] = std::make_shared<MuleSpawnEggItem>();
  }

  { // ID: 994
    registry[994] = std::make_shared<MapItem>();
  }

  { // ID: 1023
    registry[1023] = std::make_shared<MuttonItem>();
  }

  { // ID: 1027
    registry[1027] = std::make_shared<MagentaBannerItem>();
  }

  { // ID: 1058
    registry[1058] = std::make_shared<MusicDisc13Item>();
  }

  { // ID: 1059
    registry[1059] = std::make_shared<MusicDiscCatItem>();
  }

  { // ID: 1060
    registry[1060] = std::make_shared<MusicDiscBlocksItem>();
  }

  { // ID: 1061
    registry[1061] = std::make_shared<MusicDiscChirpItem>();
  }

  { // ID: 1062
    registry[1062] = std::make_shared<MusicDiscFarItem>();
  }

  { // ID: 1063
    registry[1063] = std::make_shared<MusicDiscMallItem>();
  }

  { // ID: 1064
    registry[1064] = std::make_shared<MusicDiscMellohiItem>();
  }

  { // ID: 1065
    registry[1065] = std::make_shared<MusicDiscStalItem>();
  }

  { // ID: 1066
    registry[1066] = std::make_shared<MusicDiscStradItem>();
  }

  { // ID: 1067
    registry[1067] = std::make_shared<MusicDiscWardItem>();
  }

  { // ID: 1068
    registry[1068] = std::make_shared<MusicDisc11Item>();
  }

  { // ID: 1069
    registry[1069] = std::make_shared<MusicDiscWaitItem>();
  }

  { // ID: 1070
    registry[1070] = std::make_shared<MusicDiscOthersideItem>();
  }

  { // ID: 1071
    registry[1071] = std::make_shared<MusicDisc5Item>();
  }

  { // ID: 1072
    registry[1072] = std::make_shared<MusicDiscPigstepItem>();
  }

  { // ID: 1084
    registry[1084] = std::make_shared<MojangBannerPatternItem>();
  }

  { // ID: 1128
    registry[1128] = std::make_shared<MagentaCandleItem>();
  }

  { // ID: 1143
    registry[1143] = std::make_shared<MediumAmethystBudItem>();
  }
}