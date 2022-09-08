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

#include "ghast_spawn_egg_item.h"
#include "ghast_tear_item.h"
#include "gilded_blackstone_item.h"
#include "glass_item.h"
#include "glass_bottle_item.h"
#include "glass_pane_item.h"
#include "glistering_melon_slice_item.h"
#include "globe_banner_pattern_item.h"
#include "glow_berries_item.h"
#include "glow_ink_sac_item.h"
#include "glow_item_frame_item.h"
#include "glow_lichen_item.h"
#include "glow_squid_spawn_egg_item.h"
#include "glowstone_item.h"
#include "glowstone_dust_item.h"
#include "goat_horn_item.h"
#include "goat_spawn_egg_item.h"
#include "gold_block_item.h"
#include "gold_ingot_item.h"
#include "gold_nugget_item.h"
#include "gold_ore_item.h"
#include "golden_apple_item.h"
#include "golden_axe_item.h"
#include "golden_boots_item.h"
#include "golden_carrot_item.h"
#include "golden_chestplate_item.h"
#include "golden_helmet_item.h"
#include "golden_hoe_item.h"
#include "golden_horse_armor_item.h"
#include "golden_leggings_item.h"
#include "golden_pickaxe_item.h"
#include "golden_shovel_item.h"
#include "golden_sword_item.h"
#include "granite_item.h"
#include "granite_slab_item.h"
#include "granite_stairs_item.h"
#include "granite_wall_item.h"
#include "grass_item.h"
#include "grass_block_item.h"
#include "gravel_item.h"
#include "gray_banner_item.h"
#include "gray_bed_item.h"
#include "gray_candle_item.h"
#include "gray_carpet_item.h"
#include "gray_concrete_item.h"
#include "gray_concrete_powder_item.h"
#include "gray_dye_item.h"
#include "gray_glazed_terracotta_item.h"
#include "gray_shulker_box_item.h"
#include "gray_stained_glass_item.h"
#include "gray_stained_glass_pane_item.h"
#include "gray_terracotta_item.h"
#include "gray_wool_item.h"
#include "green_banner_item.h"
#include "green_bed_item.h"
#include "green_candle_item.h"
#include "green_carpet_item.h"
#include "green_concrete_item.h"
#include "green_concrete_powder_item.h"
#include "green_dye_item.h"
#include "green_glazed_terracotta_item.h"
#include "green_shulker_box_item.h"
#include "green_stained_glass_item.h"
#include "green_stained_glass_pane_item.h"
#include "green_terracotta_item.h"
#include "green_wool_item.h"
#include "grindstone_item.h"
#include "guardian_spawn_egg_item.h"
#include "gunpowder_item.h"

void ItemRegistry::generateG() {

  { // ID: 2
    registry[2] = std::make_shared<GraniteItem>();
  }

  { // ID: 14
    registry[14] = std::make_shared<GrassBlockItem>();
  }

  { // ID: 42
    registry[42] = std::make_shared<GravelItem>();
  }

  { // ID: 49
    registry[49] = std::make_shared<GoldOreItem>();
  }

  { // ID: 70
    registry[70] = std::make_shared<GoldBlockItem>();
  }

  { // ID: 153
    registry[153] = std::make_shared<GlassItem>();
  }

  { // ID: 160
    registry[160] = std::make_shared<GrassItem>();
  }

  { // ID: 174
    registry[174] = std::make_shared<GrayWoolItem>();
  }

  { // ID: 180
    registry[180] = std::make_shared<GreenWoolItem>();
  }

  { // ID: 287
    registry[287] = std::make_shared<GlowstoneItem>();
  }

  { // ID: 312
    registry[312] = std::make_shared<GlassPaneItem>();
  }

  { // ID: 315
    registry[315] = std::make_shared<GlowLichenItem>();
  }

  { // ID: 355
    registry[355] = std::make_shared<GraniteWallItem>();
  }

  { // ID: 386
    registry[386] = std::make_shared<GrayTerracottaItem>();
  }

  { // ID: 392
    registry[392] = std::make_shared<GreenTerracottaItem>();
  }

  { // ID: 405
    registry[405] = std::make_shared<GrayCarpetItem>();
  }

  { // ID: 411
    registry[411] = std::make_shared<GreenCarpetItem>();
  }

  { // ID: 430
    registry[430] = std::make_shared<GrayStainedGlassItem>();
  }

  { // ID: 436
    registry[436] = std::make_shared<GreenStainedGlassItem>();
  }

  { // ID: 446
    registry[446] = std::make_shared<GrayStainedGlassPaneItem>();
  }

  { // ID: 452
    registry[452] = std::make_shared<GreenStainedGlassPaneItem>();
  }

  { // ID: 482
    registry[482] = std::make_shared<GrayShulkerBoxItem>();
  }

  { // ID: 488
    registry[488] = std::make_shared<GreenShulkerBoxItem>();
  }

  { // ID: 498
    registry[498] = std::make_shared<GrayGlazedTerracottaItem>();
  }

  { // ID: 504
    registry[504] = std::make_shared<GreenGlazedTerracottaItem>();
  }

  { // ID: 514
    registry[514] = std::make_shared<GrayConcreteItem>();
  }

  { // ID: 520
    registry[520] = std::make_shared<GreenConcreteItem>();
  }

  { // ID: 530
    registry[530] = std::make_shared<GrayConcretePowderItem>();
  }

  { // ID: 536
    registry[536] = std::make_shared<GreenConcretePowderItem>();
  }

  { // ID: 581
    registry[581] = std::make_shared<GraniteStairsItem>();
  }

  { // ID: 598
    registry[598] = std::make_shared<GraniteSlabItem>();
  }

  { // ID: 732
    registry[732] = std::make_shared<GoldIngotItem>();
  }

  { // ID: 745
    registry[745] = std::make_shared<GoldenSwordItem>();
  }

  { // ID: 746
    registry[746] = std::make_shared<GoldenShovelItem>();
  }

  { // ID: 747
    registry[747] = std::make_shared<GoldenPickaxeItem>();
  }

  { // ID: 748
    registry[748] = std::make_shared<GoldenAxeItem>();
  }

  { // ID: 749
    registry[749] = std::make_shared<GoldenHoeItem>();
  }

  { // ID: 770
    registry[770] = std::make_shared<GunpowderItem>();
  }

  { // ID: 790
    registry[790] = std::make_shared<GoldenHelmetItem>();
  }

  { // ID: 791
    registry[791] = std::make_shared<GoldenChestplateItem>();
  }

  { // ID: 792
    registry[792] = std::make_shared<GoldenLeggingsItem>();
  }

  { // ID: 793
    registry[793] = std::make_shared<GoldenBootsItem>();
  }

  { // ID: 802
    registry[802] = std::make_shared<GoldenAppleItem>();
  }

  { // ID: 839
    registry[839] = std::make_shared<GlowstoneDustItem>();
  }

  { // ID: 847
    registry[847] = std::make_shared<GlowInkSacItem>();
  }

  { // ID: 856
    registry[856] = std::make_shared<GrayDyeItem>();
  }

  { // ID: 862
    registry[862] = std::make_shared<GreenDyeItem>();
  }

  { // ID: 876
    registry[876] = std::make_shared<GrayBedItem>();
  }

  { // ID: 882
    registry[882] = std::make_shared<GreenBedItem>();
  }

  { // ID: 899
    registry[899] = std::make_shared<GhastTearItem>();
  }

  { // ID: 900
    registry[900] = std::make_shared<GoldNuggetItem>();
  }

  { // ID: 903
    registry[903] = std::make_shared<GlassBottleItem>();
  }

  { // ID: 911
    registry[911] = std::make_shared<GlisteringMelonSliceItem>();
  }

  { // ID: 932
    registry[932] = std::make_shared<GhastSpawnEggItem>();
  }

  { // ID: 933
    registry[933] = std::make_shared<GlowSquidSpawnEggItem>();
  }

  { // ID: 934
    registry[934] = std::make_shared<GoatSpawnEggItem>();
  }

  { // ID: 935
    registry[935] = std::make_shared<GuardianSpawnEggItem>();
  }

  { // ID: 988
    registry[988] = std::make_shared<GlowItemFrameItem>();
  }

  { // ID: 995
    registry[995] = std::make_shared<GoldenCarrotItem>();
  }

  { // ID: 1017
    registry[1017] = std::make_shared<GoldenHorseArmorItem>();
  }

  { // ID: 1032
    registry[1032] = std::make_shared<GrayBannerItem>();
  }

  { // ID: 1038
    registry[1038] = std::make_shared<GreenBannerItem>();
  }

  { // ID: 1085
    registry[1085] = std::make_shared<GlobeBannerPatternItem>();
  }

  { // ID: 1087
    registry[1087] = std::make_shared<GoatHornItem>();
  }

  { // ID: 1094
    registry[1094] = std::make_shared<GrindstoneItem>();
  }

  { // ID: 1101
    registry[1101] = std::make_shared<GlowBerriesItem>();
  }

  { // ID: 1115
    registry[1115] = std::make_shared<GildedBlackstoneItem>();
  }

  { // ID: 1133
    registry[1133] = std::make_shared<GrayCandleItem>();
  }

  { // ID: 1139
    registry[1139] = std::make_shared<GreenCandleItem>();
  }
}