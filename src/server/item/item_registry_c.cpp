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

#include "cactus_item.h"
#include "cake_item.h"
#include "calcite_item.h"
#include "campfire_item.h"
#include "candle_item.h"
#include "carrot_item.h"
#include "carrot_on_a_stick_item.h"
#include "cartography_table_item.h"
#include "carved_pumpkin_item.h"
#include "cat_spawn_egg_item.h"
#include "cauldron_item.h"
#include "cave_spider_spawn_egg_item.h"
#include "chain_item.h"
#include "chain_command_block_item.h"
#include "chainmail_boots_item.h"
#include "chainmail_chestplate_item.h"
#include "chainmail_helmet_item.h"
#include "chainmail_leggings_item.h"
#include "charcoal_item.h"
#include "chest_item.h"
#include "chest_minecart_item.h"
#include "chicken_item.h"
#include "chicken_spawn_egg_item.h"
#include "chipped_anvil_item.h"
#include "chiseled_deepslate_item.h"
#include "chiseled_nether_bricks_item.h"
#include "chiseled_polished_blackstone_item.h"
#include "chiseled_quartz_block_item.h"
#include "chiseled_red_sandstone_item.h"
#include "chiseled_sandstone_item.h"
#include "chiseled_stone_bricks_item.h"
#include "chorus_flower_item.h"
#include "chorus_fruit_item.h"
#include "chorus_plant_item.h"
#include "clay_item.h"
#include "clay_ball_item.h"
#include "clock_item.h"
#include "coal_item.h"
#include "coal_block_item.h"
#include "coal_ore_item.h"
#include "coarse_dirt_item.h"
#include "cobbled_deepslate_item.h"
#include "cobbled_deepslate_slab_item.h"
#include "cobbled_deepslate_stairs_item.h"
#include "cobbled_deepslate_wall_item.h"
#include "cobblestone_item.h"
#include "cobblestone_slab_item.h"
#include "cobblestone_stairs_item.h"
#include "cobblestone_wall_item.h"
#include "cobweb_item.h"
#include "cocoa_beans_item.h"
#include "cod_item.h"
#include "cod_bucket_item.h"
#include "cod_spawn_egg_item.h"
#include "command_block_item.h"
#include "command_block_minecart_item.h"
#include "comparator_item.h"
#include "compass_item.h"
#include "composter_item.h"
#include "conduit_item.h"
#include "cooked_beef_item.h"
#include "cooked_chicken_item.h"
#include "cooked_cod_item.h"
#include "cooked_mutton_item.h"
#include "cooked_porkchop_item.h"
#include "cooked_rabbit_item.h"
#include "cooked_salmon_item.h"
#include "cookie_item.h"
#include "copper_block_item.h"
#include "copper_ingot_item.h"
#include "copper_ore_item.h"
#include "cornflower_item.h"
#include "cow_spawn_egg_item.h"
#include "cracked_deepslate_bricks_item.h"
#include "cracked_deepslate_tiles_item.h"
#include "cracked_nether_bricks_item.h"
#include "cracked_polished_blackstone_bricks_item.h"
#include "cracked_stone_bricks_item.h"
#include "crafting_table_item.h"
#include "creeper_banner_pattern_item.h"
#include "creeper_head_item.h"
#include "creeper_spawn_egg_item.h"
#include "crimson_button_item.h"
#include "crimson_door_item.h"
#include "crimson_fence_item.h"
#include "crimson_fence_gate_item.h"
#include "crimson_fungus_item.h"
#include "crimson_hyphae_item.h"
#include "crimson_nylium_item.h"
#include "crimson_planks_item.h"
#include "crimson_pressure_plate_item.h"
#include "crimson_roots_item.h"
#include "crimson_sign_item.h"
#include "crimson_slab_item.h"
#include "crimson_stairs_item.h"
#include "crimson_stem_item.h"
#include "crimson_trapdoor_item.h"
#include "crossbow_item.h"
#include "crying_obsidian_item.h"
#include "cut_copper_item.h"
#include "cut_copper_slab_item.h"
#include "cut_copper_stairs_item.h"
#include "cut_red_sandstone_item.h"
#include "cut_red_sandstone_slab_item.h"
#include "cut_sandstone_item.h"
#include "cut_sandstone_slab_item.h"
#include "cyan_banner_item.h"
#include "cyan_bed_item.h"
#include "cyan_candle_item.h"
#include "cyan_carpet_item.h"
#include "cyan_concrete_item.h"
#include "cyan_concrete_powder_item.h"
#include "cyan_dye_item.h"
#include "cyan_glazed_terracotta_item.h"
#include "cyan_shulker_box_item.h"
#include "cyan_stained_glass_item.h"
#include "cyan_stained_glass_pane_item.h"
#include "cyan_terracotta_item.h"
#include "cyan_wool_item.h"

void ItemRegistry::generateC() {

  { // ID: 9
    registry[9] = std::make_shared<CobbledDeepslateItem>();
  }

  { // ID: 11
    registry[11] = std::make_shared<CalciteItem>();
  }

  { // ID: 16
    registry[16] = std::make_shared<CoarseDirtItem>();
  }

  { // ID: 20
    registry[20] = std::make_shared<CrimsonNyliumItem>();
  }

  { // ID: 22
    registry[22] = std::make_shared<CobblestoneItem>();
  }

  { // ID: 30
    registry[30] = std::make_shared<CrimsonPlanksItem>();
  }

  { // ID: 43
    registry[43] = std::make_shared<CoalOreItem>();
  }

  { // ID: 47
    registry[47] = std::make_shared<CopperOreItem>();
  }

  { // ID: 62
    registry[62] = std::make_shared<CoalBlockItem>();
  }

  { // ID: 69
    registry[69] = std::make_shared<CopperBlockItem>();
  }

  { // ID: 76
    registry[76] = std::make_shared<CutCopperItem>();
  }

  { // ID: 80
    registry[80] = std::make_shared<CutCopperStairsItem>();
  }

  { // ID: 84
    registry[84] = std::make_shared<CutCopperSlabItem>();
  }

  { // ID: 113
    registry[113] = std::make_shared<CrimsonStemItem>();
  }

  { // ID: 140
    registry[140] = std::make_shared<CrimsonHyphaeItem>();
  }

  { // ID: 157
    registry[157] = std::make_shared<ChiseledSandstoneItem>();
  }

  { // ID: 158
    registry[158] = std::make_shared<CutSandstoneItem>();
  }

  { // ID: 159
    registry[159] = std::make_shared<CobwebItem>();
  }

  { // ID: 176
    registry[176] = std::make_shared<CyanWoolItem>();
  }

  { // ID: 193
    registry[193] = std::make_shared<CornflowerItem>();
  }

  { // ID: 199
    registry[199] = std::make_shared<CrimsonFungusItem>();
  }

  { // ID: 201
    registry[201] = std::make_shared<CrimsonRootsItem>();
  }

  { // ID: 221
    registry[221] = std::make_shared<CrimsonSlabItem>();
  }

  { // ID: 226
    registry[226] = std::make_shared<CutSandstoneSlabItem>();
  }

  { // ID: 228
    registry[228] = std::make_shared<CobblestoneSlabItem>();
  }

  { // ID: 235
    registry[235] = std::make_shared<CutRedSandstoneSlabItem>();
  }

  { // ID: 250
    registry[250] = std::make_shared<ChorusPlantItem>();
  }

  { // ID: 251
    registry[251] = std::make_shared<ChorusFlowerItem>();
  }

  { // ID: 256
    registry[256] = std::make_shared<ChestItem>();
  }

  { // ID: 257
    registry[257] = std::make_shared<CraftingTableItem>();
  }

  { // ID: 261
    registry[261] = std::make_shared<CobblestoneStairsItem>();
  }

  { // ID: 265
    registry[265] = std::make_shared<CactusItem>();
  }

  { // ID: 266
    registry[266] = std::make_shared<ClayItem>();
  }

  { // ID: 275
    registry[275] = std::make_shared<CrimsonFenceItem>();
  }

  { // ID: 278
    registry[278] = std::make_shared<CarvedPumpkinItem>();
  }

  { // ID: 297
    registry[297] = std::make_shared<CrackedStoneBricksItem>();
  }

  { // ID: 298
    registry[298] = std::make_shared<ChiseledStoneBricksItem>();
  }

  { // ID: 302
    registry[302] = std::make_shared<CrackedDeepslateBricksItem>();
  }

  { // ID: 304
    registry[304] = std::make_shared<CrackedDeepslateTilesItem>();
  }

  { // ID: 305
    registry[305] = std::make_shared<ChiseledDeepslateItem>();
  }

  { // ID: 311
    registry[311] = std::make_shared<ChainItem>();
  }

  { // ID: 322
    registry[322] = std::make_shared<CrackedNetherBricksItem>();
  }

  { // ID: 323
    registry[323] = std::make_shared<ChiseledNetherBricksItem>();
  }

  { // ID: 345
    registry[345] = std::make_shared<CrimsonStairsItem>();
  }

  { // ID: 347
    registry[347] = std::make_shared<CommandBlockItem>();
  }

  { // ID: 349
    registry[349] = std::make_shared<CobblestoneWallItem>();
  }

  { // ID: 367
    registry[367] = std::make_shared<CobbledDeepslateWallItem>();
  }

  { // ID: 372
    registry[372] = std::make_shared<ChippedAnvilItem>();
  }

  { // ID: 374
    registry[374] = std::make_shared<ChiseledQuartzBlockItem>();
  }

  { // ID: 388
    registry[388] = std::make_shared<CyanTerracottaItem>();
  }

  { // ID: 407
    registry[407] = std::make_shared<CyanCarpetItem>();
  }

  { // ID: 432
    registry[432] = std::make_shared<CyanStainedGlassItem>();
  }

  { // ID: 448
    registry[448] = std::make_shared<CyanStainedGlassPaneItem>();
  }

  { // ID: 463
    registry[463] = std::make_shared<ChiseledRedSandstoneItem>();
  }

  { // ID: 464
    registry[464] = std::make_shared<CutRedSandstoneItem>();
  }

  { // ID: 467
    registry[467] = std::make_shared<ChainCommandBlockItem>();
  }

  { // ID: 484
    registry[484] = std::make_shared<CyanShulkerBoxItem>();
  }

  { // ID: 500
    registry[500] = std::make_shared<CyanGlazedTerracottaItem>();
  }

  { // ID: 516
    registry[516] = std::make_shared<CyanConcreteItem>();
  }

  { // ID: 532
    registry[532] = std::make_shared<CyanConcretePowderItem>();
  }

  { // ID: 571
    registry[571] = std::make_shared<ConduitItem>();
  }

  { // ID: 586
    registry[586] = std::make_shared<CobbledDeepslateStairsItem>();
  }

  { // ID: 603
    registry[603] = std::make_shared<CobbledDeepslateSlabItem>();
  }

  { // ID: 612
    registry[612] = std::make_shared<ComparatorItem>();
  }

  { // ID: 641
    registry[641] = std::make_shared<CrimsonButtonItem>();
  }

  { // ID: 654
    registry[654] = std::make_shared<CrimsonPressurePlateItem>();
  }

  { // ID: 664
    registry[664] = std::make_shared<CrimsonDoorItem>();
  }

  { // ID: 674
    registry[674] = std::make_shared<CrimsonTrapdoorItem>();
  }

  { // ID: 683
    registry[683] = std::make_shared<CrimsonFenceGateItem>();
  }

  { // ID: 691
    registry[691] = std::make_shared<ChestMinecartItem>();
  }

  { // ID: 695
    registry[695] = std::make_shared<CarrotOnAStickItem>();
  }

  { // ID: 720
    registry[720] = std::make_shared<CoalItem>();
  }

  { // ID: 721
    registry[721] = std::make_shared<CharcoalItem>();
  }

  { // ID: 730
    registry[730] = std::make_shared<CopperIngotItem>();
  }

  { // ID: 778
    registry[778] = std::make_shared<ChainmailHelmetItem>();
  }

  { // ID: 779
    registry[779] = std::make_shared<ChainmailChestplateItem>();
  }

  { // ID: 780
    registry[780] = std::make_shared<ChainmailLeggingsItem>();
  }

  { // ID: 781
    registry[781] = std::make_shared<ChainmailBootsItem>();
  }

  { // ID: 800
    registry[800] = std::make_shared<CookedPorkchopItem>();
  }

  { // ID: 811
    registry[811] = std::make_shared<CrimsonSignItem>();
  }

  { // ID: 822
    registry[822] = std::make_shared<CodBucketItem>();
  }

  { // ID: 827
    registry[827] = std::make_shared<ClayBallItem>();
  }

  { // ID: 833
    registry[833] = std::make_shared<CompassItem>();
  }

  { // ID: 837
    registry[837] = std::make_shared<ClockItem>();
  }

  { // ID: 840
    registry[840] = std::make_shared<CodItem>();
  }

  { // ID: 844
    registry[844] = std::make_shared<CookedCodItem>();
  }

  { // ID: 845
    registry[845] = std::make_shared<CookedSalmonItem>();
  }

  { // ID: 848
    registry[848] = std::make_shared<CocoaBeansItem>();
  }

  { // ID: 858
    registry[858] = std::make_shared<CyanDyeItem>();
  }

  { // ID: 868
    registry[868] = std::make_shared<CakeItem>();
  }

  { // ID: 878
    registry[878] = std::make_shared<CyanBedItem>();
  }

  { // ID: 885
    registry[885] = std::make_shared<CookieItem>();
  }

  { // ID: 893
    registry[893] = std::make_shared<CookedBeefItem>();
  }

  { // ID: 894
    registry[894] = std::make_shared<ChickenItem>();
  }

  { // ID: 895
    registry[895] = std::make_shared<CookedChickenItem>();
  }

  { // ID: 909
    registry[909] = std::make_shared<CauldronItem>();
  }

  { // ID: 917
    registry[917] = std::make_shared<CatSpawnEggItem>();
  }

  { // ID: 918
    registry[918] = std::make_shared<CaveSpiderSpawnEggItem>();
  }

  { // ID: 919
    registry[919] = std::make_shared<ChickenSpawnEggItem>();
  }

  { // ID: 920
    registry[920] = std::make_shared<CodSpawnEggItem>();
  }

  { // ID: 921
    registry[921] = std::make_shared<CowSpawnEggItem>();
  }

  { // ID: 922
    registry[922] = std::make_shared<CreeperSpawnEggItem>();
  }

  { // ID: 990
    registry[990] = std::make_shared<CarrotItem>();
  }

  { // ID: 1000
    registry[1000] = std::make_shared<CreeperHeadItem>();
  }

  { // ID: 1011
    registry[1011] = std::make_shared<CookedRabbitItem>();
  }

  { // ID: 1022
    registry[1022] = std::make_shared<CommandBlockMinecartItem>();
  }

  { // ID: 1024
    registry[1024] = std::make_shared<CookedMuttonItem>();
  }

  { // ID: 1034
    registry[1034] = std::make_shared<CyanBannerItem>();
  }

  { // ID: 1042
    registry[1042] = std::make_shared<ChorusFruitItem>();
  }

  { // ID: 1078
    registry[1078] = std::make_shared<CrossbowItem>();
  }

  { // ID: 1082
    registry[1082] = std::make_shared<CreeperBannerPatternItem>();
  }

  { // ID: 1088
    registry[1088] = std::make_shared<ComposterItem>();
  }

  { // ID: 1092
    registry[1092] = std::make_shared<CartographyTableItem>();
  }

  { // ID: 1102
    registry[1102] = std::make_shared<CampfireItem>();
  }

  { // ID: 1111
    registry[1111] = std::make_shared<CryingObsidianItem>();
  }

  { // ID: 1119
    registry[1119] = std::make_shared<ChiseledPolishedBlackstoneItem>();
  }

  { // ID: 1123
    registry[1123] = std::make_shared<CrackedPolishedBlackstoneBricksItem>();
  }

  { // ID: 1125
    registry[1125] = std::make_shared<CandleItem>();
  }

  { // ID: 1135
    registry[1135] = std::make_shared<CyanCandleItem>();
  }
}