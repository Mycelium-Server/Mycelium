
#include "item_registry.h"

#include "saddle_item.h"
#include "salmon_item.h"
#include "salmon_bucket_item.h"
#include "salmon_spawn_egg_item.h"
#include "sand_item.h"
#include "sandstone_item.h"
#include "sandstone_slab_item.h"
#include "sandstone_stairs_item.h"
#include "sandstone_wall_item.h"
#include "scaffolding_item.h"
#include "sculk_item.h"
#include "sculk_catalyst_item.h"
#include "sculk_sensor_item.h"
#include "sculk_shrieker_item.h"
#include "sculk_vein_item.h"
#include "scute_item.h"
#include "sea_lantern_item.h"
#include "sea_pickle_item.h"
#include "seagrass_item.h"
#include "shears_item.h"
#include "sheep_spawn_egg_item.h"
#include "shield_item.h"
#include "shroomlight_item.h"
#include "shulker_box_item.h"
#include "shulker_shell_item.h"
#include "shulker_spawn_egg_item.h"
#include "silverfish_spawn_egg_item.h"
#include "skeleton_horse_spawn_egg_item.h"
#include "skeleton_skull_item.h"
#include "skeleton_spawn_egg_item.h"
#include "skull_banner_pattern_item.h"
#include "slime_ball_item.h"
#include "slime_block_item.h"
#include "slime_spawn_egg_item.h"
#include "small_amethyst_bud_item.h"
#include "small_dripleaf_item.h"
#include "smithing_table_item.h"
#include "smoker_item.h"
#include "smooth_basalt_item.h"
#include "smooth_quartz_item.h"
#include "smooth_quartz_slab_item.h"
#include "smooth_quartz_stairs_item.h"
#include "smooth_red_sandstone_item.h"
#include "smooth_red_sandstone_slab_item.h"
#include "smooth_red_sandstone_stairs_item.h"
#include "smooth_sandstone_item.h"
#include "smooth_sandstone_slab_item.h"
#include "smooth_sandstone_stairs_item.h"
#include "smooth_stone_item.h"
#include "smooth_stone_slab_item.h"
#include "snow_item.h"
#include "snow_block_item.h"
#include "snowball_item.h"
#include "soul_campfire_item.h"
#include "soul_lantern_item.h"
#include "soul_sand_item.h"
#include "soul_soil_item.h"
#include "soul_torch_item.h"
#include "spawner_item.h"
#include "spectral_arrow_item.h"
#include "spider_eye_item.h"
#include "spider_spawn_egg_item.h"
#include "splash_potion_item.h"
#include "sponge_item.h"
#include "spore_blossom_item.h"
#include "spruce_boat_item.h"
#include "spruce_button_item.h"
#include "spruce_chest_boat_item.h"
#include "spruce_door_item.h"
#include "spruce_fence_item.h"
#include "spruce_fence_gate_item.h"
#include "spruce_leaves_item.h"
#include "spruce_log_item.h"
#include "spruce_planks_item.h"
#include "spruce_pressure_plate_item.h"
#include "spruce_sapling_item.h"
#include "spruce_sign_item.h"
#include "spruce_slab_item.h"
#include "spruce_stairs_item.h"
#include "spruce_trapdoor_item.h"
#include "spruce_wood_item.h"
#include "spyglass_item.h"
#include "squid_spawn_egg_item.h"
#include "stick_item.h"
#include "sticky_piston_item.h"
#include "stone_item.h"
#include "stone_axe_item.h"
#include "stone_brick_slab_item.h"
#include "stone_brick_stairs_item.h"
#include "stone_brick_wall_item.h"
#include "stone_bricks_item.h"
#include "stone_button_item.h"
#include "stone_hoe_item.h"
#include "stone_pickaxe_item.h"
#include "stone_pressure_plate_item.h"
#include "stone_shovel_item.h"
#include "stone_slab_item.h"
#include "stone_stairs_item.h"
#include "stone_sword_item.h"
#include "stonecutter_item.h"
#include "stray_spawn_egg_item.h"
#include "strider_spawn_egg_item.h"
#include "string_item.h"
#include "stripped_acacia_log_item.h"
#include "stripped_acacia_wood_item.h"
#include "stripped_birch_log_item.h"
#include "stripped_birch_wood_item.h"
#include "stripped_crimson_hyphae_item.h"
#include "stripped_crimson_stem_item.h"
#include "stripped_dark_oak_log_item.h"
#include "stripped_dark_oak_wood_item.h"
#include "stripped_jungle_log_item.h"
#include "stripped_jungle_wood_item.h"
#include "stripped_mangrove_log_item.h"
#include "stripped_mangrove_wood_item.h"
#include "stripped_oak_log_item.h"
#include "stripped_oak_wood_item.h"
#include "stripped_spruce_log_item.h"
#include "stripped_spruce_wood_item.h"
#include "stripped_warped_hyphae_item.h"
#include "stripped_warped_stem_item.h"
#include "structure_block_item.h"
#include "structure_void_item.h"
#include "sugar_item.h"
#include "sugar_cane_item.h"
#include "sunflower_item.h"
#include "suspicious_stew_item.h"
#include "sweet_berries_item.h"

void ItemRegistry::generateS() {

  { // ID: 1
    registry[1] = std::make_shared<StoneItem>();
  }

  { // ID: 24
    registry[24] = std::make_shared<SprucePlanksItem>();
  }

  { // ID: 33
    registry[33] = std::make_shared<SpruceSaplingItem>();
  }

  { // ID: 40
    registry[40] = std::make_shared<SandItem>();
  }

  { // ID: 105
    registry[105] = std::make_shared<SpruceLogItem>();
  }

  { // ID: 115
    registry[115] = std::make_shared<StrippedOakLogItem>();
  }

  { // ID: 116
    registry[116] = std::make_shared<StrippedSpruceLogItem>();
  }

  { // ID: 117
    registry[117] = std::make_shared<StrippedBirchLogItem>();
  }

  { // ID: 118
    registry[118] = std::make_shared<StrippedJungleLogItem>();
  }

  { // ID: 119
    registry[119] = std::make_shared<StrippedAcaciaLogItem>();
  }

  { // ID: 120
    registry[120] = std::make_shared<StrippedDarkOakLogItem>();
  }

  { // ID: 121
    registry[121] = std::make_shared<StrippedMangroveLogItem>();
  }

  { // ID: 122
    registry[122] = std::make_shared<StrippedCrimsonStemItem>();
  }

  { // ID: 123
    registry[123] = std::make_shared<StrippedWarpedStemItem>();
  }

  { // ID: 124
    registry[124] = std::make_shared<StrippedOakWoodItem>();
  }

  { // ID: 125
    registry[125] = std::make_shared<StrippedSpruceWoodItem>();
  }

  { // ID: 126
    registry[126] = std::make_shared<StrippedBirchWoodItem>();
  }

  { // ID: 127
    registry[127] = std::make_shared<StrippedJungleWoodItem>();
  }

  { // ID: 128
    registry[128] = std::make_shared<StrippedAcaciaWoodItem>();
  }

  { // ID: 129
    registry[129] = std::make_shared<StrippedDarkOakWoodItem>();
  }

  { // ID: 130
    registry[130] = std::make_shared<StrippedMangroveWoodItem>();
  }

  { // ID: 131
    registry[131] = std::make_shared<StrippedCrimsonHyphaeItem>();
  }

  { // ID: 132
    registry[132] = std::make_shared<StrippedWarpedHyphaeItem>();
  }

  { // ID: 134
    registry[134] = std::make_shared<SpruceWoodItem>();
  }

  { // ID: 143
    registry[143] = std::make_shared<SpruceLeavesItem>();
  }

  { // ID: 151
    registry[151] = std::make_shared<SpongeItem>();
  }

  { // ID: 156
    registry[156] = std::make_shared<SandstoneItem>();
  }

  { // ID: 165
    registry[165] = std::make_shared<SeagrassItem>();
  }

  { // ID: 166
    registry[166] = std::make_shared<SeaPickleItem>();
  }

  { // ID: 196
    registry[196] = std::make_shared<SporeBlossomItem>();
  }

  { // ID: 206
    registry[206] = std::make_shared<SugarCaneItem>();
  }

  { // ID: 212
    registry[212] = std::make_shared<SmallDripleafItem>();
  }

  { // ID: 215
    registry[215] = std::make_shared<SpruceSlabItem>();
  }

  { // ID: 223
    registry[223] = std::make_shared<StoneSlabItem>();
  }

  { // ID: 224
    registry[224] = std::make_shared<SmoothStoneSlabItem>();
  }

  { // ID: 225
    registry[225] = std::make_shared<SandstoneSlabItem>();
  }

  { // ID: 230
    registry[230] = std::make_shared<StoneBrickSlabItem>();
  }

  { // ID: 240
    registry[240] = std::make_shared<SmoothQuartzItem>();
  }

  { // ID: 241
    registry[241] = std::make_shared<SmoothRedSandstoneItem>();
  }

  { // ID: 242
    registry[242] = std::make_shared<SmoothSandstoneItem>();
  }

  { // ID: 243
    registry[243] = std::make_shared<SmoothStoneItem>();
  }

  { // ID: 255
    registry[255] = std::make_shared<SpawnerItem>();
  }

  { // ID: 262
    registry[262] = std::make_shared<SnowItem>();
  }

  { // ID: 264
    registry[264] = std::make_shared<SnowBlockItem>();
  }

  { // ID: 269
    registry[269] = std::make_shared<SpruceFenceItem>();
  }

  { // ID: 281
    registry[281] = std::make_shared<SoulSandItem>();
  }

  { // ID: 282
    registry[282] = std::make_shared<SoulSoilItem>();
  }

  { // ID: 285
    registry[285] = std::make_shared<SmoothBasaltItem>();
  }

  { // ID: 286
    registry[286] = std::make_shared<SoulTorchItem>();
  }

  { // ID: 295
    registry[295] = std::make_shared<StoneBricksItem>();
  }

  { // ID: 317
    registry[317] = std::make_shared<StoneBrickStairsItem>();
  }

  { // ID: 326
    registry[326] = std::make_shared<SculkItem>();
  }

  { // ID: 327
    registry[327] = std::make_shared<SculkVeinItem>();
  }

  { // ID: 328
    registry[328] = std::make_shared<SculkCatalystItem>();
  }

  { // ID: 329
    registry[329] = std::make_shared<SculkShriekerItem>();
  }

  { // ID: 335
    registry[335] = std::make_shared<SandstoneStairsItem>();
  }

  { // ID: 339
    registry[339] = std::make_shared<SpruceStairsItem>();
  }

  { // ID: 356
    registry[356] = std::make_shared<StoneBrickWallItem>();
  }

  { // ID: 361
    registry[361] = std::make_shared<SandstoneWallItem>();
  }

  { // ID: 417
    registry[417] = std::make_shared<SunflowerItem>();
  }

  { // ID: 461
    registry[461] = std::make_shared<SeaLanternItem>();
  }

  { // ID: 473
    registry[473] = std::make_shared<StructureVoidItem>();
  }

  { // ID: 474
    registry[474] = std::make_shared<ShulkerBoxItem>();
  }

  { // ID: 573
    registry[573] = std::make_shared<SmoothRedSandstoneStairsItem>();
  }

  { // ID: 578
    registry[578] = std::make_shared<StoneStairsItem>();
  }

  { // ID: 579
    registry[579] = std::make_shared<SmoothSandstoneStairsItem>();
  }

  { // ID: 580
    registry[580] = std::make_shared<SmoothQuartzStairsItem>();
  }

  { // ID: 591
    registry[591] = std::make_shared<SmoothRedSandstoneSlabItem>();
  }

  { // ID: 596
    registry[596] = std::make_shared<SmoothSandstoneSlabItem>();
  }

  { // ID: 597
    registry[597] = std::make_shared<SmoothQuartzSlabItem>();
  }

  { // ID: 607
    registry[607] = std::make_shared<ScaffoldingItem>();
  }

  { // ID: 614
    registry[614] = std::make_shared<StickyPistonItem>();
  }

  { // ID: 615
    registry[615] = std::make_shared<SlimeBlockItem>();
  }

  { // ID: 626
    registry[626] = std::make_shared<SculkSensorItem>();
  }

  { // ID: 632
    registry[632] = std::make_shared<StoneButtonItem>();
  }

  { // ID: 635
    registry[635] = std::make_shared<SpruceButtonItem>();
  }

  { // ID: 643
    registry[643] = std::make_shared<StonePressurePlateItem>();
  }

  { // ID: 648
    registry[648] = std::make_shared<SprucePressurePlateItem>();
  }

  { // ID: 658
    registry[658] = std::make_shared<SpruceDoorItem>();
  }

  { // ID: 668
    registry[668] = std::make_shared<SpruceTrapdoorItem>();
  }

  { // ID: 677
    registry[677] = std::make_shared<SpruceFenceGateItem>();
  }

  { // ID: 689
    registry[689] = std::make_shared<SaddleItem>();
  }

  { // ID: 700
    registry[700] = std::make_shared<SpruceBoatItem>();
  }

  { // ID: 701
    registry[701] = std::make_shared<SpruceChestBoatItem>();
  }

  { // ID: 712
    registry[712] = std::make_shared<StructureBlockItem>();
  }

  { // ID: 715
    registry[715] = std::make_shared<ScuteItem>();
  }

  { // ID: 740
    registry[740] = std::make_shared<StoneSwordItem>();
  }

  { // ID: 741
    registry[741] = std::make_shared<StoneShovelItem>();
  }

  { // ID: 742
    registry[742] = std::make_shared<StonePickaxeItem>();
  }

  { // ID: 743
    registry[743] = std::make_shared<StoneAxeItem>();
  }

  { // ID: 744
    registry[744] = std::make_shared<StoneHoeItem>();
  }

  { // ID: 765
    registry[765] = std::make_shared<StickItem>();
  }

  { // ID: 768
    registry[768] = std::make_shared<StringItem>();
  }

  { // ID: 805
    registry[805] = std::make_shared<SpruceSignItem>();
  }

  { // ID: 817
    registry[817] = std::make_shared<SnowballItem>();
  }

  { // ID: 821
    registry[821] = std::make_shared<SalmonBucketItem>();
  }

  { // ID: 831
    registry[831] = std::make_shared<SlimeBallItem>();
  }

  { // ID: 838
    registry[838] = std::make_shared<SpyglassItem>();
  }

  { // ID: 841
    registry[841] = std::make_shared<SalmonItem>();
  }

  { // ID: 867
    registry[867] = std::make_shared<SugarItem>();
  }

  { // ID: 887
    registry[887] = std::make_shared<ShearsItem>();
  }

  { // ID: 904
    registry[904] = std::make_shared<SpiderEyeItem>();
  }

  { // ID: 955
    registry[955] = std::make_shared<SalmonSpawnEggItem>();
  }

  { // ID: 956
    registry[956] = std::make_shared<SheepSpawnEggItem>();
  }

  { // ID: 957
    registry[957] = std::make_shared<ShulkerSpawnEggItem>();
  }

  { // ID: 958
    registry[958] = std::make_shared<SilverfishSpawnEggItem>();
  }

  { // ID: 959
    registry[959] = std::make_shared<SkeletonSpawnEggItem>();
  }

  { // ID: 960
    registry[960] = std::make_shared<SkeletonHorseSpawnEggItem>();
  }

  { // ID: 961
    registry[961] = std::make_shared<SlimeSpawnEggItem>();
  }

  { // ID: 962
    registry[962] = std::make_shared<SpiderSpawnEggItem>();
  }

  { // ID: 963
    registry[963] = std::make_shared<SquidSpawnEggItem>();
  }

  { // ID: 964
    registry[964] = std::make_shared<StraySpawnEggItem>();
  }

  { // ID: 965
    registry[965] = std::make_shared<StriderSpawnEggItem>();
  }

  { // ID: 996
    registry[996] = std::make_shared<SkeletonSkullItem>();
  }

  { // ID: 1048
    registry[1048] = std::make_shared<SplashPotionItem>();
  }

  { // ID: 1049
    registry[1049] = std::make_shared<SpectralArrowItem>();
  }

  { // ID: 1052
    registry[1052] = std::make_shared<ShieldItem>();
  }

  { // ID: 1054
    registry[1054] = std::make_shared<ShulkerShellItem>();
  }

  { // ID: 1079
    registry[1079] = std::make_shared<SuspiciousStewItem>();
  }

  { // ID: 1083
    registry[1083] = std::make_shared<SkullBannerPatternItem>();
  }

  { // ID: 1090
    registry[1090] = std::make_shared<SmokerItem>();
  }

  { // ID: 1095
    registry[1095] = std::make_shared<SmithingTableItem>();
  }

  { // ID: 1096
    registry[1096] = std::make_shared<StonecutterItem>();
  }

  { // ID: 1099
    registry[1099] = std::make_shared<SoulLanternItem>();
  }

  { // ID: 1100
    registry[1100] = std::make_shared<SweetBerriesItem>();
  }

  { // ID: 1103
    registry[1103] = std::make_shared<SoulCampfireItem>();
  }

  { // ID: 1104
    registry[1104] = std::make_shared<ShroomlightItem>();
  }

  { // ID: 1142
    registry[1142] = std::make_shared<SmallAmethystBudItem>();
  }
}