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

#include "ladder_item.h"
#include "lantern_item.h"
#include "lapis_block_item.h"
#include "lapis_lazuli_item.h"
#include "lapis_ore_item.h"
#include "large_amethyst_bud_item.h"
#include "large_fern_item.h"
#include "lava_bucket_item.h"
#include "lead_item.h"
#include "leather_item.h"
#include "leather_boots_item.h"
#include "leather_chestplate_item.h"
#include "leather_helmet_item.h"
#include "leather_horse_armor_item.h"
#include "leather_leggings_item.h"
#include "lectern_item.h"
#include "lever_item.h"
#include "light_item.h"
#include "light_blue_banner_item.h"
#include "light_blue_bed_item.h"
#include "light_blue_candle_item.h"
#include "light_blue_carpet_item.h"
#include "light_blue_concrete_item.h"
#include "light_blue_concrete_powder_item.h"
#include "light_blue_dye_item.h"
#include "light_blue_glazed_terracotta_item.h"
#include "light_blue_shulker_box_item.h"
#include "light_blue_stained_glass_item.h"
#include "light_blue_stained_glass_pane_item.h"
#include "light_blue_terracotta_item.h"
#include "light_blue_wool_item.h"
#include "light_gray_banner_item.h"
#include "light_gray_bed_item.h"
#include "light_gray_candle_item.h"
#include "light_gray_carpet_item.h"
#include "light_gray_concrete_item.h"
#include "light_gray_concrete_powder_item.h"
#include "light_gray_dye_item.h"
#include "light_gray_glazed_terracotta_item.h"
#include "light_gray_shulker_box_item.h"
#include "light_gray_stained_glass_item.h"
#include "light_gray_stained_glass_pane_item.h"
#include "light_gray_terracotta_item.h"
#include "light_gray_wool_item.h"
#include "light_weighted_pressure_plate_item.h"
#include "lightning_rod_item.h"
#include "lilac_item.h"
#include "lily_of_the_valley_item.h"
#include "lily_pad_item.h"
#include "lime_banner_item.h"
#include "lime_bed_item.h"
#include "lime_candle_item.h"
#include "lime_carpet_item.h"
#include "lime_concrete_item.h"
#include "lime_concrete_powder_item.h"
#include "lime_dye_item.h"
#include "lime_glazed_terracotta_item.h"
#include "lime_shulker_box_item.h"
#include "lime_stained_glass_item.h"
#include "lime_stained_glass_pane_item.h"
#include "lime_terracotta_item.h"
#include "lime_wool_item.h"
#include "lingering_potion_item.h"
#include "llama_spawn_egg_item.h"
#include "lodestone_item.h"
#include "loom_item.h"

void ItemRegistry::generateL() {

  { // ID: 55
    registry[55] = std::make_shared<LapisOreItem>();
  }

  { // ID: 155
    registry[155] = std::make_shared<LapisBlockItem>();
  }

  { // ID: 170
    registry[170] = std::make_shared<LightBlueWoolItem>();
  }

  { // ID: 172
    registry[172] = std::make_shared<LimeWoolItem>();
  }

  { // ID: 175
    registry[175] = std::make_shared<LightGrayWoolItem>();
  }

  { // ID: 194
    registry[194] = std::make_shared<LilyOfTheValleyItem>();
  }

  { // ID: 260
    registry[260] = std::make_shared<LadderItem>();
  }

  { // ID: 320
    registry[320] = std::make_shared<LilyPadItem>();
  }

  { // ID: 382
    registry[382] = std::make_shared<LightBlueTerracottaItem>();
  }

  { // ID: 384
    registry[384] = std::make_shared<LimeTerracottaItem>();
  }

  { // ID: 387
    registry[387] = std::make_shared<LightGrayTerracottaItem>();
  }

  { // ID: 396
    registry[396] = std::make_shared<LightItem>();
  }

  { // ID: 401
    registry[401] = std::make_shared<LightBlueCarpetItem>();
  }

  { // ID: 403
    registry[403] = std::make_shared<LimeCarpetItem>();
  }

  { // ID: 406
    registry[406] = std::make_shared<LightGrayCarpetItem>();
  }

  { // ID: 418
    registry[418] = std::make_shared<LilacItem>();
  }

  { // ID: 422
    registry[422] = std::make_shared<LargeFernItem>();
  }

  { // ID: 426
    registry[426] = std::make_shared<LightBlueStainedGlassItem>();
  }

  { // ID: 428
    registry[428] = std::make_shared<LimeStainedGlassItem>();
  }

  { // ID: 431
    registry[431] = std::make_shared<LightGrayStainedGlassItem>();
  }

  { // ID: 442
    registry[442] = std::make_shared<LightBlueStainedGlassPaneItem>();
  }

  { // ID: 444
    registry[444] = std::make_shared<LimeStainedGlassPaneItem>();
  }

  { // ID: 447
    registry[447] = std::make_shared<LightGrayStainedGlassPaneItem>();
  }

  { // ID: 478
    registry[478] = std::make_shared<LightBlueShulkerBoxItem>();
  }

  { // ID: 480
    registry[480] = std::make_shared<LimeShulkerBoxItem>();
  }

  { // ID: 483
    registry[483] = std::make_shared<LightGrayShulkerBoxItem>();
  }

  { // ID: 494
    registry[494] = std::make_shared<LightBlueGlazedTerracottaItem>();
  }

  { // ID: 496
    registry[496] = std::make_shared<LimeGlazedTerracottaItem>();
  }

  { // ID: 499
    registry[499] = std::make_shared<LightGrayGlazedTerracottaItem>();
  }

  { // ID: 510
    registry[510] = std::make_shared<LightBlueConcreteItem>();
  }

  { // ID: 512
    registry[512] = std::make_shared<LimeConcreteItem>();
  }

  { // ID: 515
    registry[515] = std::make_shared<LightGrayConcreteItem>();
  }

  { // ID: 526
    registry[526] = std::make_shared<LightBlueConcretePowderItem>();
  }

  { // ID: 528
    registry[528] = std::make_shared<LimeConcretePowderItem>();
  }

  { // ID: 531
    registry[531] = std::make_shared<LightGrayConcretePowderItem>();
  }

  { // ID: 621
    registry[621] = std::make_shared<LecternItem>();
  }

  { // ID: 623
    registry[623] = std::make_shared<LeverItem>();
  }

  { // ID: 624
    registry[624] = std::make_shared<LightningRodItem>();
  }

  { // ID: 645
    registry[645] = std::make_shared<LightWeightedPressurePlateItem>();
  }

  { // ID: 724
    registry[724] = std::make_shared<LapisLazuliItem>();
  }

  { // ID: 774
    registry[774] = std::make_shared<LeatherHelmetItem>();
  }

  { // ID: 775
    registry[775] = std::make_shared<LeatherChestplateItem>();
  }

  { // ID: 776
    registry[776] = std::make_shared<LeatherLeggingsItem>();
  }

  { // ID: 777
    registry[777] = std::make_shared<LeatherBootsItem>();
  }

  { // ID: 815
    registry[815] = std::make_shared<LavaBucketItem>();
  }

  { // ID: 818
    registry[818] = std::make_shared<LeatherItem>();
  }

  { // ID: 852
    registry[852] = std::make_shared<LightBlueDyeItem>();
  }

  { // ID: 854
    registry[854] = std::make_shared<LimeDyeItem>();
  }

  { // ID: 857
    registry[857] = std::make_shared<LightGrayDyeItem>();
  }

  { // ID: 872
    registry[872] = std::make_shared<LightBlueBedItem>();
  }

  { // ID: 874
    registry[874] = std::make_shared<LimeBedItem>();
  }

  { // ID: 877
    registry[877] = std::make_shared<LightGrayBedItem>();
  }

  { // ID: 939
    registry[939] = std::make_shared<LlamaSpawnEggItem>();
  }

  { // ID: 1019
    registry[1019] = std::make_shared<LeatherHorseArmorItem>();
  }

  { // ID: 1020
    registry[1020] = std::make_shared<LeadItem>();
  }

  { // ID: 1028
    registry[1028] = std::make_shared<LightBlueBannerItem>();
  }

  { // ID: 1030
    registry[1030] = std::make_shared<LimeBannerItem>();
  }

  { // ID: 1033
    registry[1033] = std::make_shared<LightGrayBannerItem>();
  }

  { // ID: 1051
    registry[1051] = std::make_shared<LingeringPotionItem>();
  }

  { // ID: 1080
    registry[1080] = std::make_shared<LoomItem>();
  }

  { // ID: 1098
    registry[1098] = std::make_shared<LanternItem>();
  }

  { // ID: 1110
    registry[1110] = std::make_shared<LodestoneItem>();
  }

  { // ID: 1129
    registry[1129] = std::make_shared<LightBlueCandleItem>();
  }

  { // ID: 1131
    registry[1131] = std::make_shared<LimeCandleItem>();
  }

  { // ID: 1134
    registry[1134] = std::make_shared<LightGrayCandleItem>();
  }

  { // ID: 1144
    registry[1144] = std::make_shared<LargeAmethystBudItem>();
  }
}