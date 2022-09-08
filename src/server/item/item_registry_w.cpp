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

#include "wandering_trader_spawn_egg_item.h"
#include "warden_spawn_egg_item.h"
#include "warped_button_item.h"
#include "warped_door_item.h"
#include "warped_fence_item.h"
#include "warped_fence_gate_item.h"
#include "warped_fungus_item.h"
#include "warped_fungus_on_a_stick_item.h"
#include "warped_hyphae_item.h"
#include "warped_nylium_item.h"
#include "warped_planks_item.h"
#include "warped_pressure_plate_item.h"
#include "warped_roots_item.h"
#include "warped_sign_item.h"
#include "warped_slab_item.h"
#include "warped_stairs_item.h"
#include "warped_stem_item.h"
#include "warped_trapdoor_item.h"
#include "warped_wart_block_item.h"
#include "water_bucket_item.h"
#include "waxed_copper_block_item.h"
#include "waxed_cut_copper_item.h"
#include "waxed_cut_copper_slab_item.h"
#include "waxed_cut_copper_stairs_item.h"
#include "waxed_exposed_copper_item.h"
#include "waxed_exposed_cut_copper_item.h"
#include "waxed_exposed_cut_copper_slab_item.h"
#include "waxed_exposed_cut_copper_stairs_item.h"
#include "waxed_oxidized_copper_item.h"
#include "waxed_oxidized_cut_copper_item.h"
#include "waxed_oxidized_cut_copper_slab_item.h"
#include "waxed_oxidized_cut_copper_stairs_item.h"
#include "waxed_weathered_copper_item.h"
#include "waxed_weathered_cut_copper_item.h"
#include "waxed_weathered_cut_copper_slab_item.h"
#include "waxed_weathered_cut_copper_stairs_item.h"
#include "weathered_copper_item.h"
#include "weathered_cut_copper_item.h"
#include "weathered_cut_copper_slab_item.h"
#include "weathered_cut_copper_stairs_item.h"
#include "weeping_vines_item.h"
#include "wet_sponge_item.h"
#include "wheat_item.h"
#include "wheat_seeds_item.h"
#include "white_banner_item.h"
#include "white_bed_item.h"
#include "white_candle_item.h"
#include "white_carpet_item.h"
#include "white_concrete_item.h"
#include "white_concrete_powder_item.h"
#include "white_dye_item.h"
#include "white_glazed_terracotta_item.h"
#include "white_shulker_box_item.h"
#include "white_stained_glass_item.h"
#include "white_stained_glass_pane_item.h"
#include "white_terracotta_item.h"
#include "white_tulip_item.h"
#include "white_wool_item.h"
#include "witch_spawn_egg_item.h"
#include "wither_rose_item.h"
#include "wither_skeleton_skull_item.h"
#include "wither_skeleton_spawn_egg_item.h"
#include "wolf_spawn_egg_item.h"
#include "wooden_axe_item.h"
#include "wooden_hoe_item.h"
#include "wooden_pickaxe_item.h"
#include "wooden_shovel_item.h"
#include "wooden_sword_item.h"
#include "writable_book_item.h"
#include "written_book_item.h"

void ItemRegistry::generateW() {

  { // ID: 21
    registry[21] = std::make_shared<WarpedNyliumItem>();
  }

  { // ID: 31
    registry[31] = std::make_shared<WarpedPlanksItem>();
  }

  { // ID: 74
    registry[74] = std::make_shared<WeatheredCopperItem>();
  }

  { // ID: 78
    registry[78] = std::make_shared<WeatheredCutCopperItem>();
  }

  { // ID: 82
    registry[82] = std::make_shared<WeatheredCutCopperStairsItem>();
  }

  { // ID: 86
    registry[86] = std::make_shared<WeatheredCutCopperSlabItem>();
  }

  { // ID: 88
    registry[88] = std::make_shared<WaxedCopperBlockItem>();
  }

  { // ID: 89
    registry[89] = std::make_shared<WaxedExposedCopperItem>();
  }

  { // ID: 90
    registry[90] = std::make_shared<WaxedWeatheredCopperItem>();
  }

  { // ID: 91
    registry[91] = std::make_shared<WaxedOxidizedCopperItem>();
  }

  { // ID: 92
    registry[92] = std::make_shared<WaxedCutCopperItem>();
  }

  { // ID: 93
    registry[93] = std::make_shared<WaxedExposedCutCopperItem>();
  }

  { // ID: 94
    registry[94] = std::make_shared<WaxedWeatheredCutCopperItem>();
  }

  { // ID: 95
    registry[95] = std::make_shared<WaxedOxidizedCutCopperItem>();
  }

  { // ID: 96
    registry[96] = std::make_shared<WaxedCutCopperStairsItem>();
  }

  { // ID: 97
    registry[97] = std::make_shared<WaxedExposedCutCopperStairsItem>();
  }

  { // ID: 98
    registry[98] = std::make_shared<WaxedWeatheredCutCopperStairsItem>();
  }

  { // ID: 99
    registry[99] = std::make_shared<WaxedOxidizedCutCopperStairsItem>();
  }

  { // ID: 100
    registry[100] = std::make_shared<WaxedCutCopperSlabItem>();
  }

  { // ID: 101
    registry[101] = std::make_shared<WaxedExposedCutCopperSlabItem>();
  }

  { // ID: 102
    registry[102] = std::make_shared<WaxedWeatheredCutCopperSlabItem>();
  }

  { // ID: 103
    registry[103] = std::make_shared<WaxedOxidizedCutCopperSlabItem>();
  }

  { // ID: 114
    registry[114] = std::make_shared<WarpedStemItem>();
  }

  { // ID: 141
    registry[141] = std::make_shared<WarpedHyphaeItem>();
  }

  { // ID: 152
    registry[152] = std::make_shared<WetSpongeItem>();
  }

  { // ID: 167
    registry[167] = std::make_shared<WhiteWoolItem>();
  }

  { // ID: 190
    registry[190] = std::make_shared<WhiteTulipItem>();
  }

  { // ID: 195
    registry[195] = std::make_shared<WitherRoseItem>();
  }

  { // ID: 200
    registry[200] = std::make_shared<WarpedFungusItem>();
  }

  { // ID: 202
    registry[202] = std::make_shared<WarpedRootsItem>();
  }

  { // ID: 204
    registry[204] = std::make_shared<WeepingVinesItem>();
  }

  { // ID: 222
    registry[222] = std::make_shared<WarpedSlabItem>();
  }

  { // ID: 276
    registry[276] = std::make_shared<WarpedFenceItem>();
  }

  { // ID: 346
    registry[346] = std::make_shared<WarpedStairsItem>();
  }

  { // ID: 379
    registry[379] = std::make_shared<WhiteTerracottaItem>();
  }

  { // ID: 398
    registry[398] = std::make_shared<WhiteCarpetItem>();
  }

  { // ID: 423
    registry[423] = std::make_shared<WhiteStainedGlassItem>();
  }

  { // ID: 439
    registry[439] = std::make_shared<WhiteStainedGlassPaneItem>();
  }

  { // ID: 470
    registry[470] = std::make_shared<WarpedWartBlockItem>();
  }

  { // ID: 475
    registry[475] = std::make_shared<WhiteShulkerBoxItem>();
  }

  { // ID: 491
    registry[491] = std::make_shared<WhiteGlazedTerracottaItem>();
  }

  { // ID: 507
    registry[507] = std::make_shared<WhiteConcreteItem>();
  }

  { // ID: 523
    registry[523] = std::make_shared<WhiteConcretePowderItem>();
  }

  { // ID: 642
    registry[642] = std::make_shared<WarpedButtonItem>();
  }

  { // ID: 655
    registry[655] = std::make_shared<WarpedPressurePlateItem>();
  }

  { // ID: 665
    registry[665] = std::make_shared<WarpedDoorItem>();
  }

  { // ID: 675
    registry[675] = std::make_shared<WarpedTrapdoorItem>();
  }

  { // ID: 684
    registry[684] = std::make_shared<WarpedFenceGateItem>();
  }

  { // ID: 696
    registry[696] = std::make_shared<WarpedFungusOnAStickItem>();
  }

  { // ID: 735
    registry[735] = std::make_shared<WoodenSwordItem>();
  }

  { // ID: 736
    registry[736] = std::make_shared<WoodenShovelItem>();
  }

  { // ID: 737
    registry[737] = std::make_shared<WoodenPickaxeItem>();
  }

  { // ID: 738
    registry[738] = std::make_shared<WoodenAxeItem>();
  }

  { // ID: 739
    registry[739] = std::make_shared<WoodenHoeItem>();
  }

  { // ID: 771
    registry[771] = std::make_shared<WheatSeedsItem>();
  }

  { // ID: 772
    registry[772] = std::make_shared<WheatItem>();
  }

  { // ID: 812
    registry[812] = std::make_shared<WarpedSignItem>();
  }

  { // ID: 814
    registry[814] = std::make_shared<WaterBucketItem>();
  }

  { // ID: 849
    registry[849] = std::make_shared<WhiteDyeItem>();
  }

  { // ID: 869
    registry[869] = std::make_shared<WhiteBedItem>();
  }

  { // ID: 973
    registry[973] = std::make_shared<WanderingTraderSpawnEggItem>();
  }

  { // ID: 974
    registry[974] = std::make_shared<WardenSpawnEggItem>();
  }

  { // ID: 975
    registry[975] = std::make_shared<WitchSpawnEggItem>();
  }

  { // ID: 976
    registry[976] = std::make_shared<WitherSkeletonSpawnEggItem>();
  }

  { // ID: 977
    registry[977] = std::make_shared<WolfSpawnEggItem>();
  }

  { // ID: 985
    registry[985] = std::make_shared<WritableBookItem>();
  }

  { // ID: 986
    registry[986] = std::make_shared<WrittenBookItem>();
  }

  { // ID: 997
    registry[997] = std::make_shared<WitherSkeletonSkullItem>();
  }

  { // ID: 1025
    registry[1025] = std::make_shared<WhiteBannerItem>();
  }

  { // ID: 1126
    registry[1126] = std::make_shared<WhiteCandleItem>();
  }
}