

#include "block_registry.h"

#include "sand_block.h"
#include "sandstone_block.h"
#include "sandstone_slab_block.h"
#include "sandstone_stairs_block.h"
#include "sandstone_wall_block.h"
#include "scaffolding_block.h"
#include "sculk_block.h"
#include "sculk_catalyst_block.h"
#include "sculk_sensor_block.h"
#include "sculk_shrieker_block.h"
#include "sculk_vein_block.h"
#include "sea_lantern_block.h"
#include "sea_pickle_block.h"
#include "seagrass_block.h"
#include "shroomlight_block.h"
#include "shulker_box_block.h"
#include "skeleton_skull_block.h"
#include "skeleton_wall_skull_block.h"
#include "slime_block_block.h"
#include "small_amethyst_bud_block.h"
#include "small_dripleaf_block.h"
#include "smithing_table_block.h"
#include "smoker_block.h"
#include "smooth_basalt_block.h"
#include "smooth_quartz_block.h"
#include "smooth_quartz_slab_block.h"
#include "smooth_quartz_stairs_block.h"
#include "smooth_red_sandstone_block.h"
#include "smooth_red_sandstone_slab_block.h"
#include "smooth_red_sandstone_stairs_block.h"
#include "smooth_sandstone_block.h"
#include "smooth_sandstone_slab_block.h"
#include "smooth_sandstone_stairs_block.h"
#include "smooth_stone_block.h"
#include "smooth_stone_slab_block.h"
#include "snow_block.h"
#include "snow_block_block.h"
#include "soul_campfire_block.h"
#include "soul_fire_block.h"
#include "soul_lantern_block.h"
#include "soul_sand_block.h"
#include "soul_soil_block.h"
#include "soul_torch_block.h"
#include "soul_wall_torch_block.h"
#include "spawner_block.h"
#include "sponge_block.h"
#include "spore_blossom_block.h"
#include "spruce_button_block.h"
#include "spruce_door_block.h"
#include "spruce_fence_block.h"
#include "spruce_fence_gate_block.h"
#include "spruce_leaves_block.h"
#include "spruce_log_block.h"
#include "spruce_planks_block.h"
#include "spruce_pressure_plate_block.h"
#include "spruce_sapling_block.h"
#include "spruce_sign_block.h"
#include "spruce_slab_block.h"
#include "spruce_stairs_block.h"
#include "spruce_trapdoor_block.h"
#include "spruce_wall_sign_block.h"
#include "spruce_wood_block.h"
#include "sticky_piston_block.h"
#include "stone_block.h"
#include "stone_brick_slab_block.h"
#include "stone_brick_stairs_block.h"
#include "stone_brick_wall_block.h"
#include "stone_bricks_block.h"
#include "stone_button_block.h"
#include "stone_pressure_plate_block.h"
#include "stone_slab_block.h"
#include "stone_stairs_block.h"
#include "stonecutter_block.h"
#include "stripped_acacia_log_block.h"
#include "stripped_acacia_wood_block.h"
#include "stripped_birch_log_block.h"
#include "stripped_birch_wood_block.h"
#include "stripped_crimson_hyphae_block.h"
#include "stripped_crimson_stem_block.h"
#include "stripped_dark_oak_log_block.h"
#include "stripped_dark_oak_wood_block.h"
#include "stripped_jungle_log_block.h"
#include "stripped_jungle_wood_block.h"
#include "stripped_mangrove_log_block.h"
#include "stripped_mangrove_wood_block.h"
#include "stripped_oak_log_block.h"
#include "stripped_oak_wood_block.h"
#include "stripped_spruce_log_block.h"
#include "stripped_spruce_wood_block.h"
#include "stripped_warped_hyphae_block.h"
#include "stripped_warped_stem_block.h"
#include "structure_block_block.h"
#include "structure_void_block.h"
#include "sugar_cane_block.h"
#include "sunflower_block.h"
#include "sweet_berry_bush_block.h"

void BlockRegistry::generateS() {

  { // ID: 1
    std::shared_ptr<StoneBlock> block = std::make_shared<StoneBlock>();
    registry[1] = block;
  }

  { // ID: 16
    std::shared_ptr<SprucePlanksBlock> block = std::make_shared<SprucePlanksBlock>();
    registry[16] = block;
  }

  { // ID: 24
    std::shared_ptr<SpruceSaplingBlock> block = std::make_shared<SpruceSaplingBlock>();
    block->stage = SpruceSaplingBlock::STAGE_0;
    registry[24] = block;
  }

  { // ID: 25
    std::shared_ptr<SpruceSaplingBlock> block = std::make_shared<SpruceSaplingBlock>();
    block->stage = SpruceSaplingBlock::STAGE_1;
    registry[25] = block;
  }

  { // ID: 107
    std::shared_ptr<SandBlock> block = std::make_shared<SandBlock>();
    registry[107] = block;
  }

  { // ID: 120
    std::shared_ptr<SpruceLogBlock> block = std::make_shared<SpruceLogBlock>();
    block->axis = SpruceLogBlock::AXIS_X;
    registry[120] = block;
  }

  { // ID: 121
    std::shared_ptr<SpruceLogBlock> block = std::make_shared<SpruceLogBlock>();
    block->axis = SpruceLogBlock::AXIS_Y;
    registry[121] = block;
  }

  { // ID: 122
    std::shared_ptr<SpruceLogBlock> block = std::make_shared<SpruceLogBlock>();
    block->axis = SpruceLogBlock::AXIS_Z;
    registry[122] = block;
  }

  { // ID: 143
    std::shared_ptr<StrippedSpruceLogBlock> block = std::make_shared<StrippedSpruceLogBlock>();
    block->axis = StrippedSpruceLogBlock::AXIS_X;
    registry[143] = block;
  }

  { // ID: 144
    std::shared_ptr<StrippedSpruceLogBlock> block = std::make_shared<StrippedSpruceLogBlock>();
    block->axis = StrippedSpruceLogBlock::AXIS_Y;
    registry[144] = block;
  }

  { // ID: 145
    std::shared_ptr<StrippedSpruceLogBlock> block = std::make_shared<StrippedSpruceLogBlock>();
    block->axis = StrippedSpruceLogBlock::AXIS_Z;
    registry[145] = block;
  }

  { // ID: 146
    std::shared_ptr<StrippedBirchLogBlock> block = std::make_shared<StrippedBirchLogBlock>();
    block->axis = StrippedBirchLogBlock::AXIS_X;
    registry[146] = block;
  }

  { // ID: 147
    std::shared_ptr<StrippedBirchLogBlock> block = std::make_shared<StrippedBirchLogBlock>();
    block->axis = StrippedBirchLogBlock::AXIS_Y;
    registry[147] = block;
  }

  { // ID: 148
    std::shared_ptr<StrippedBirchLogBlock> block = std::make_shared<StrippedBirchLogBlock>();
    block->axis = StrippedBirchLogBlock::AXIS_Z;
    registry[148] = block;
  }

  { // ID: 149
    std::shared_ptr<StrippedJungleLogBlock> block = std::make_shared<StrippedJungleLogBlock>();
    block->axis = StrippedJungleLogBlock::AXIS_X;
    registry[149] = block;
  }

  { // ID: 150
    std::shared_ptr<StrippedJungleLogBlock> block = std::make_shared<StrippedJungleLogBlock>();
    block->axis = StrippedJungleLogBlock::AXIS_Y;
    registry[150] = block;
  }

  { // ID: 151
    std::shared_ptr<StrippedJungleLogBlock> block = std::make_shared<StrippedJungleLogBlock>();
    block->axis = StrippedJungleLogBlock::AXIS_Z;
    registry[151] = block;
  }

  { // ID: 152
    std::shared_ptr<StrippedAcaciaLogBlock> block = std::make_shared<StrippedAcaciaLogBlock>();
    block->axis = StrippedAcaciaLogBlock::AXIS_X;
    registry[152] = block;
  }

  { // ID: 153
    std::shared_ptr<StrippedAcaciaLogBlock> block = std::make_shared<StrippedAcaciaLogBlock>();
    block->axis = StrippedAcaciaLogBlock::AXIS_Y;
    registry[153] = block;
  }

  { // ID: 154
    std::shared_ptr<StrippedAcaciaLogBlock> block = std::make_shared<StrippedAcaciaLogBlock>();
    block->axis = StrippedAcaciaLogBlock::AXIS_Z;
    registry[154] = block;
  }

  { // ID: 155
    std::shared_ptr<StrippedDarkOakLogBlock> block = std::make_shared<StrippedDarkOakLogBlock>();
    block->axis = StrippedDarkOakLogBlock::AXIS_X;
    registry[155] = block;
  }

  { // ID: 156
    std::shared_ptr<StrippedDarkOakLogBlock> block = std::make_shared<StrippedDarkOakLogBlock>();
    block->axis = StrippedDarkOakLogBlock::AXIS_Y;
    registry[156] = block;
  }

  { // ID: 157
    std::shared_ptr<StrippedDarkOakLogBlock> block = std::make_shared<StrippedDarkOakLogBlock>();
    block->axis = StrippedDarkOakLogBlock::AXIS_Z;
    registry[157] = block;
  }

  { // ID: 158
    std::shared_ptr<StrippedOakLogBlock> block = std::make_shared<StrippedOakLogBlock>();
    block->axis = StrippedOakLogBlock::AXIS_X;
    registry[158] = block;
  }

  { // ID: 159
    std::shared_ptr<StrippedOakLogBlock> block = std::make_shared<StrippedOakLogBlock>();
    block->axis = StrippedOakLogBlock::AXIS_Y;
    registry[159] = block;
  }

  { // ID: 160
    std::shared_ptr<StrippedOakLogBlock> block = std::make_shared<StrippedOakLogBlock>();
    block->axis = StrippedOakLogBlock::AXIS_Z;
    registry[160] = block;
  }

  { // ID: 161
    std::shared_ptr<StrippedMangroveLogBlock> block = std::make_shared<StrippedMangroveLogBlock>();
    block->axis = StrippedMangroveLogBlock::AXIS_X;
    registry[161] = block;
  }

  { // ID: 162
    std::shared_ptr<StrippedMangroveLogBlock> block = std::make_shared<StrippedMangroveLogBlock>();
    block->axis = StrippedMangroveLogBlock::AXIS_Y;
    registry[162] = block;
  }

  { // ID: 163
    std::shared_ptr<StrippedMangroveLogBlock> block = std::make_shared<StrippedMangroveLogBlock>();
    block->axis = StrippedMangroveLogBlock::AXIS_Z;
    registry[163] = block;
  }

  { // ID: 167
    std::shared_ptr<SpruceWoodBlock> block = std::make_shared<SpruceWoodBlock>();
    block->axis = SpruceWoodBlock::AXIS_X;
    registry[167] = block;
  }

  { // ID: 168
    std::shared_ptr<SpruceWoodBlock> block = std::make_shared<SpruceWoodBlock>();
    block->axis = SpruceWoodBlock::AXIS_Y;
    registry[168] = block;
  }

  { // ID: 169
    std::shared_ptr<SpruceWoodBlock> block = std::make_shared<SpruceWoodBlock>();
    block->axis = SpruceWoodBlock::AXIS_Z;
    registry[169] = block;
  }

  { // ID: 185
    std::shared_ptr<StrippedOakWoodBlock> block = std::make_shared<StrippedOakWoodBlock>();
    block->axis = StrippedOakWoodBlock::AXIS_X;
    registry[185] = block;
  }

  { // ID: 186
    std::shared_ptr<StrippedOakWoodBlock> block = std::make_shared<StrippedOakWoodBlock>();
    block->axis = StrippedOakWoodBlock::AXIS_Y;
    registry[186] = block;
  }

  { // ID: 187
    std::shared_ptr<StrippedOakWoodBlock> block = std::make_shared<StrippedOakWoodBlock>();
    block->axis = StrippedOakWoodBlock::AXIS_Z;
    registry[187] = block;
  }

  { // ID: 188
    std::shared_ptr<StrippedSpruceWoodBlock> block = std::make_shared<StrippedSpruceWoodBlock>();
    block->axis = StrippedSpruceWoodBlock::AXIS_X;
    registry[188] = block;
  }

  { // ID: 189
    std::shared_ptr<StrippedSpruceWoodBlock> block = std::make_shared<StrippedSpruceWoodBlock>();
    block->axis = StrippedSpruceWoodBlock::AXIS_Y;
    registry[189] = block;
  }

  { // ID: 190
    std::shared_ptr<StrippedSpruceWoodBlock> block = std::make_shared<StrippedSpruceWoodBlock>();
    block->axis = StrippedSpruceWoodBlock::AXIS_Z;
    registry[190] = block;
  }

  { // ID: 191
    std::shared_ptr<StrippedBirchWoodBlock> block = std::make_shared<StrippedBirchWoodBlock>();
    block->axis = StrippedBirchWoodBlock::AXIS_X;
    registry[191] = block;
  }

  { // ID: 192
    std::shared_ptr<StrippedBirchWoodBlock> block = std::make_shared<StrippedBirchWoodBlock>();
    block->axis = StrippedBirchWoodBlock::AXIS_Y;
    registry[192] = block;
  }

  { // ID: 193
    std::shared_ptr<StrippedBirchWoodBlock> block = std::make_shared<StrippedBirchWoodBlock>();
    block->axis = StrippedBirchWoodBlock::AXIS_Z;
    registry[193] = block;
  }

  { // ID: 194
    std::shared_ptr<StrippedJungleWoodBlock> block = std::make_shared<StrippedJungleWoodBlock>();
    block->axis = StrippedJungleWoodBlock::AXIS_X;
    registry[194] = block;
  }

  { // ID: 195
    std::shared_ptr<StrippedJungleWoodBlock> block = std::make_shared<StrippedJungleWoodBlock>();
    block->axis = StrippedJungleWoodBlock::AXIS_Y;
    registry[195] = block;
  }

  { // ID: 196
    std::shared_ptr<StrippedJungleWoodBlock> block = std::make_shared<StrippedJungleWoodBlock>();
    block->axis = StrippedJungleWoodBlock::AXIS_Z;
    registry[196] = block;
  }

  { // ID: 197
    std::shared_ptr<StrippedAcaciaWoodBlock> block = std::make_shared<StrippedAcaciaWoodBlock>();
    block->axis = StrippedAcaciaWoodBlock::AXIS_X;
    registry[197] = block;
  }

  { // ID: 198
    std::shared_ptr<StrippedAcaciaWoodBlock> block = std::make_shared<StrippedAcaciaWoodBlock>();
    block->axis = StrippedAcaciaWoodBlock::AXIS_Y;
    registry[198] = block;
  }

  { // ID: 199
    std::shared_ptr<StrippedAcaciaWoodBlock> block = std::make_shared<StrippedAcaciaWoodBlock>();
    block->axis = StrippedAcaciaWoodBlock::AXIS_Z;
    registry[199] = block;
  }

  { // ID: 200
    std::shared_ptr<StrippedDarkOakWoodBlock> block = std::make_shared<StrippedDarkOakWoodBlock>();
    block->axis = StrippedDarkOakWoodBlock::AXIS_X;
    registry[200] = block;
  }

  { // ID: 201
    std::shared_ptr<StrippedDarkOakWoodBlock> block = std::make_shared<StrippedDarkOakWoodBlock>();
    block->axis = StrippedDarkOakWoodBlock::AXIS_Y;
    registry[201] = block;
  }

  { // ID: 202
    std::shared_ptr<StrippedDarkOakWoodBlock> block = std::make_shared<StrippedDarkOakWoodBlock>();
    block->axis = StrippedDarkOakWoodBlock::AXIS_Z;
    registry[202] = block;
  }

  { // ID: 203
    std::shared_ptr<StrippedMangroveWoodBlock> block = std::make_shared<StrippedMangroveWoodBlock>();
    block->axis = StrippedMangroveWoodBlock::AXIS_X;
    registry[203] = block;
  }

  { // ID: 204
    std::shared_ptr<StrippedMangroveWoodBlock> block = std::make_shared<StrippedMangroveWoodBlock>();
    block->axis = StrippedMangroveWoodBlock::AXIS_Y;
    registry[204] = block;
  }

  { // ID: 205
    std::shared_ptr<StrippedMangroveWoodBlock> block = std::make_shared<StrippedMangroveWoodBlock>();
    block->axis = StrippedMangroveWoodBlock::AXIS_Z;
    registry[205] = block;
  }

  { // ID: 234
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_1;
    block->persistent = SpruceLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_TRUE;
    registry[234] = block;
  }

  { // ID: 235
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_1;
    block->persistent = SpruceLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_FALSE;
    registry[235] = block;
  }

  { // ID: 236
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_1;
    block->persistent = SpruceLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_TRUE;
    registry[236] = block;
  }

  { // ID: 237
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_1;
    block->persistent = SpruceLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_FALSE;
    registry[237] = block;
  }

  { // ID: 238
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_2;
    block->persistent = SpruceLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_TRUE;
    registry[238] = block;
  }

  { // ID: 239
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_2;
    block->persistent = SpruceLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_FALSE;
    registry[239] = block;
  }

  { // ID: 240
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_2;
    block->persistent = SpruceLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_TRUE;
    registry[240] = block;
  }

  { // ID: 241
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_2;
    block->persistent = SpruceLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_FALSE;
    registry[241] = block;
  }

  { // ID: 242
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_3;
    block->persistent = SpruceLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_TRUE;
    registry[242] = block;
  }

  { // ID: 243
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_3;
    block->persistent = SpruceLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_FALSE;
    registry[243] = block;
  }

  { // ID: 244
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_3;
    block->persistent = SpruceLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_TRUE;
    registry[244] = block;
  }

  { // ID: 245
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_3;
    block->persistent = SpruceLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_FALSE;
    registry[245] = block;
  }

  { // ID: 246
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_4;
    block->persistent = SpruceLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_TRUE;
    registry[246] = block;
  }

  { // ID: 247
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_4;
    block->persistent = SpruceLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_FALSE;
    registry[247] = block;
  }

  { // ID: 248
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_4;
    block->persistent = SpruceLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_TRUE;
    registry[248] = block;
  }

  { // ID: 249
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_4;
    block->persistent = SpruceLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_FALSE;
    registry[249] = block;
  }

  { // ID: 250
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_5;
    block->persistent = SpruceLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_TRUE;
    registry[250] = block;
  }

  { // ID: 251
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_5;
    block->persistent = SpruceLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_FALSE;
    registry[251] = block;
  }

  { // ID: 252
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_5;
    block->persistent = SpruceLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_TRUE;
    registry[252] = block;
  }

  { // ID: 253
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_5;
    block->persistent = SpruceLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_FALSE;
    registry[253] = block;
  }

  { // ID: 254
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_6;
    block->persistent = SpruceLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_TRUE;
    registry[254] = block;
  }

  { // ID: 255
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_6;
    block->persistent = SpruceLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_FALSE;
    registry[255] = block;
  }

  { // ID: 256
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_6;
    block->persistent = SpruceLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_TRUE;
    registry[256] = block;
  }

  { // ID: 257
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_6;
    block->persistent = SpruceLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_FALSE;
    registry[257] = block;
  }

  { // ID: 258
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_7;
    block->persistent = SpruceLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_TRUE;
    registry[258] = block;
  }

  { // ID: 259
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_7;
    block->persistent = SpruceLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_FALSE;
    registry[259] = block;
  }

  { // ID: 260
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_7;
    block->persistent = SpruceLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_TRUE;
    registry[260] = block;
  }

  { // ID: 261
    std::shared_ptr<SpruceLeavesBlock> block = std::make_shared<SpruceLeavesBlock>();
    block->distance = SpruceLeavesBlock::DISTANCE_7;
    block->persistent = SpruceLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = SpruceLeavesBlock::WATERLOGGED_FALSE;
    registry[261] = block;
  }

  { // ID: 458
    std::shared_ptr<SpongeBlock> block = std::make_shared<SpongeBlock>();
    registry[458] = block;
  }

  { // ID: 476
    std::shared_ptr<SandstoneBlock> block = std::make_shared<SandstoneBlock>();
    registry[476] = block;
  }

  { // ID: 1583
    std::shared_ptr<StickyPistonBlock> block = std::make_shared<StickyPistonBlock>();
    block->extended = StickyPistonBlock::EXTENDED_TRUE;
    block->facing = StickyPistonBlock::FACING_NORTH;
    registry[1583] = block;
  }

  { // ID: 1584
    std::shared_ptr<StickyPistonBlock> block = std::make_shared<StickyPistonBlock>();
    block->extended = StickyPistonBlock::EXTENDED_TRUE;
    block->facing = StickyPistonBlock::FACING_EAST;
    registry[1584] = block;
  }

  { // ID: 1585
    std::shared_ptr<StickyPistonBlock> block = std::make_shared<StickyPistonBlock>();
    block->extended = StickyPistonBlock::EXTENDED_TRUE;
    block->facing = StickyPistonBlock::FACING_SOUTH;
    registry[1585] = block;
  }

  { // ID: 1586
    std::shared_ptr<StickyPistonBlock> block = std::make_shared<StickyPistonBlock>();
    block->extended = StickyPistonBlock::EXTENDED_TRUE;
    block->facing = StickyPistonBlock::FACING_WEST;
    registry[1586] = block;
  }

  { // ID: 1587
    std::shared_ptr<StickyPistonBlock> block = std::make_shared<StickyPistonBlock>();
    block->extended = StickyPistonBlock::EXTENDED_TRUE;
    block->facing = StickyPistonBlock::FACING_UP;
    registry[1587] = block;
  }

  { // ID: 1588
    std::shared_ptr<StickyPistonBlock> block = std::make_shared<StickyPistonBlock>();
    block->extended = StickyPistonBlock::EXTENDED_TRUE;
    block->facing = StickyPistonBlock::FACING_DOWN;
    registry[1588] = block;
  }

  { // ID: 1589
    std::shared_ptr<StickyPistonBlock> block = std::make_shared<StickyPistonBlock>();
    block->extended = StickyPistonBlock::EXTENDED_FALSE;
    block->facing = StickyPistonBlock::FACING_NORTH;
    registry[1589] = block;
  }

  { // ID: 1590
    std::shared_ptr<StickyPistonBlock> block = std::make_shared<StickyPistonBlock>();
    block->extended = StickyPistonBlock::EXTENDED_FALSE;
    block->facing = StickyPistonBlock::FACING_EAST;
    registry[1590] = block;
  }

  { // ID: 1591
    std::shared_ptr<StickyPistonBlock> block = std::make_shared<StickyPistonBlock>();
    block->extended = StickyPistonBlock::EXTENDED_FALSE;
    block->facing = StickyPistonBlock::FACING_SOUTH;
    registry[1591] = block;
  }

  { // ID: 1592
    std::shared_ptr<StickyPistonBlock> block = std::make_shared<StickyPistonBlock>();
    block->extended = StickyPistonBlock::EXTENDED_FALSE;
    block->facing = StickyPistonBlock::FACING_WEST;
    registry[1592] = block;
  }

  { // ID: 1593
    std::shared_ptr<StickyPistonBlock> block = std::make_shared<StickyPistonBlock>();
    block->extended = StickyPistonBlock::EXTENDED_FALSE;
    block->facing = StickyPistonBlock::FACING_UP;
    registry[1593] = block;
  }

  { // ID: 1594
    std::shared_ptr<StickyPistonBlock> block = std::make_shared<StickyPistonBlock>();
    block->extended = StickyPistonBlock::EXTENDED_FALSE;
    block->facing = StickyPistonBlock::FACING_DOWN;
    registry[1594] = block;
  }

  { // ID: 1599
    std::shared_ptr<SeagrassBlock> block = std::make_shared<SeagrassBlock>();
    registry[1599] = block;
  }

  { // ID: 2206
    std::shared_ptr<SoulFireBlock> block = std::make_shared<SoulFireBlock>();
    registry[2206] = block;
  }

  { // ID: 2207
    std::shared_ptr<SpawnerBlock> block = std::make_shared<SpawnerBlock>();
    registry[2207] = block;
  }

  { // ID: 3668
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_0;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_TRUE;
    registry[3668] = block;
  }

  { // ID: 3669
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_0;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_FALSE;
    registry[3669] = block;
  }

  { // ID: 3670
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_1;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_TRUE;
    registry[3670] = block;
  }

  { // ID: 3671
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_1;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_FALSE;
    registry[3671] = block;
  }

  { // ID: 3672
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_2;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_TRUE;
    registry[3672] = block;
  }

  { // ID: 3673
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_2;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_FALSE;
    registry[3673] = block;
  }

  { // ID: 3674
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_3;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_TRUE;
    registry[3674] = block;
  }

  { // ID: 3675
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_3;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_FALSE;
    registry[3675] = block;
  }

  { // ID: 3676
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_4;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_TRUE;
    registry[3676] = block;
  }

  { // ID: 3677
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_4;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_FALSE;
    registry[3677] = block;
  }

  { // ID: 3678
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_5;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_TRUE;
    registry[3678] = block;
  }

  { // ID: 3679
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_5;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_FALSE;
    registry[3679] = block;
  }

  { // ID: 3680
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_6;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_TRUE;
    registry[3680] = block;
  }

  { // ID: 3681
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_6;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_FALSE;
    registry[3681] = block;
  }

  { // ID: 3682
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_7;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_TRUE;
    registry[3682] = block;
  }

  { // ID: 3683
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_7;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_FALSE;
    registry[3683] = block;
  }

  { // ID: 3684
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_8;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_TRUE;
    registry[3684] = block;
  }

  { // ID: 3685
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_8;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_FALSE;
    registry[3685] = block;
  }

  { // ID: 3686
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_9;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_TRUE;
    registry[3686] = block;
  }

  { // ID: 3687
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_9;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_FALSE;
    registry[3687] = block;
  }

  { // ID: 3688
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_10;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_TRUE;
    registry[3688] = block;
  }

  { // ID: 3689
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_10;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_FALSE;
    registry[3689] = block;
  }

  { // ID: 3690
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_11;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_TRUE;
    registry[3690] = block;
  }

  { // ID: 3691
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_11;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_FALSE;
    registry[3691] = block;
  }

  { // ID: 3692
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_12;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_TRUE;
    registry[3692] = block;
  }

  { // ID: 3693
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_12;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_FALSE;
    registry[3693] = block;
  }

  { // ID: 3694
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_13;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_TRUE;
    registry[3694] = block;
  }

  { // ID: 3695
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_13;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_FALSE;
    registry[3695] = block;
  }

  { // ID: 3696
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_14;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_TRUE;
    registry[3696] = block;
  }

  { // ID: 3697
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_14;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_FALSE;
    registry[3697] = block;
  }

  { // ID: 3698
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_15;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_TRUE;
    registry[3698] = block;
  }

  { // ID: 3699
    std::shared_ptr<SpruceSignBlock> block = std::make_shared<SpruceSignBlock>();
    block->rotation = SpruceSignBlock::ROTATION_15;
    block->waterlogged = SpruceSignBlock::WATERLOGGED_FALSE;
    registry[3699] = block;
  }

  { // ID: 4040
    std::shared_ptr<SpruceWallSignBlock> block = std::make_shared<SpruceWallSignBlock>();
    block->facing = SpruceWallSignBlock::FACING_NORTH;
    block->waterlogged = SpruceWallSignBlock::WATERLOGGED_TRUE;
    registry[4040] = block;
  }

  { // ID: 4041
    std::shared_ptr<SpruceWallSignBlock> block = std::make_shared<SpruceWallSignBlock>();
    block->facing = SpruceWallSignBlock::FACING_NORTH;
    block->waterlogged = SpruceWallSignBlock::WATERLOGGED_FALSE;
    registry[4041] = block;
  }

  { // ID: 4042
    std::shared_ptr<SpruceWallSignBlock> block = std::make_shared<SpruceWallSignBlock>();
    block->facing = SpruceWallSignBlock::FACING_SOUTH;
    block->waterlogged = SpruceWallSignBlock::WATERLOGGED_TRUE;
    registry[4042] = block;
  }

  { // ID: 4043
    std::shared_ptr<SpruceWallSignBlock> block = std::make_shared<SpruceWallSignBlock>();
    block->facing = SpruceWallSignBlock::FACING_SOUTH;
    block->waterlogged = SpruceWallSignBlock::WATERLOGGED_FALSE;
    registry[4043] = block;
  }

  { // ID: 4044
    std::shared_ptr<SpruceWallSignBlock> block = std::make_shared<SpruceWallSignBlock>();
    block->facing = SpruceWallSignBlock::FACING_WEST;
    block->waterlogged = SpruceWallSignBlock::WATERLOGGED_TRUE;
    registry[4044] = block;
  }

  { // ID: 4045
    std::shared_ptr<SpruceWallSignBlock> block = std::make_shared<SpruceWallSignBlock>();
    block->facing = SpruceWallSignBlock::FACING_WEST;
    block->waterlogged = SpruceWallSignBlock::WATERLOGGED_FALSE;
    registry[4045] = block;
  }

  { // ID: 4046
    std::shared_ptr<SpruceWallSignBlock> block = std::make_shared<SpruceWallSignBlock>();
    block->facing = SpruceWallSignBlock::FACING_EAST;
    block->waterlogged = SpruceWallSignBlock::WATERLOGGED_TRUE;
    registry[4046] = block;
  }

  { // ID: 4047
    std::shared_ptr<SpruceWallSignBlock> block = std::make_shared<SpruceWallSignBlock>();
    block->facing = SpruceWallSignBlock::FACING_EAST;
    block->waterlogged = SpruceWallSignBlock::WATERLOGGED_FALSE;
    registry[4047] = block;
  }

  { // ID: 4112
    std::shared_ptr<StonePressurePlateBlock> block = std::make_shared<StonePressurePlateBlock>();
    block->powered = StonePressurePlateBlock::POWERED_TRUE;
    registry[4112] = block;
  }

  { // ID: 4113
    std::shared_ptr<StonePressurePlateBlock> block = std::make_shared<StonePressurePlateBlock>();
    block->powered = StonePressurePlateBlock::POWERED_FALSE;
    registry[4113] = block;
  }

  { // ID: 4180
    std::shared_ptr<SprucePressurePlateBlock> block = std::make_shared<SprucePressurePlateBlock>();
    block->powered = SprucePressurePlateBlock::POWERED_TRUE;
    registry[4180] = block;
  }

  { // ID: 4181
    std::shared_ptr<SprucePressurePlateBlock> block = std::make_shared<SprucePressurePlateBlock>();
    block->powered = SprucePressurePlateBlock::POWERED_FALSE;
    registry[4181] = block;
  }

  { // ID: 4206
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_FLOOR;
    block->facing = StoneButtonBlock::FACING_NORTH;
    block->powered = StoneButtonBlock::POWERED_TRUE;
    registry[4206] = block;
  }

  { // ID: 4207
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_FLOOR;
    block->facing = StoneButtonBlock::FACING_NORTH;
    block->powered = StoneButtonBlock::POWERED_FALSE;
    registry[4207] = block;
  }

  { // ID: 4208
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_FLOOR;
    block->facing = StoneButtonBlock::FACING_SOUTH;
    block->powered = StoneButtonBlock::POWERED_TRUE;
    registry[4208] = block;
  }

  { // ID: 4209
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_FLOOR;
    block->facing = StoneButtonBlock::FACING_SOUTH;
    block->powered = StoneButtonBlock::POWERED_FALSE;
    registry[4209] = block;
  }

  { // ID: 4210
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_FLOOR;
    block->facing = StoneButtonBlock::FACING_WEST;
    block->powered = StoneButtonBlock::POWERED_TRUE;
    registry[4210] = block;
  }

  { // ID: 4211
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_FLOOR;
    block->facing = StoneButtonBlock::FACING_WEST;
    block->powered = StoneButtonBlock::POWERED_FALSE;
    registry[4211] = block;
  }

  { // ID: 4212
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_FLOOR;
    block->facing = StoneButtonBlock::FACING_EAST;
    block->powered = StoneButtonBlock::POWERED_TRUE;
    registry[4212] = block;
  }

  { // ID: 4213
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_FLOOR;
    block->facing = StoneButtonBlock::FACING_EAST;
    block->powered = StoneButtonBlock::POWERED_FALSE;
    registry[4213] = block;
  }

  { // ID: 4214
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_WALL;
    block->facing = StoneButtonBlock::FACING_NORTH;
    block->powered = StoneButtonBlock::POWERED_TRUE;
    registry[4214] = block;
  }

  { // ID: 4215
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_WALL;
    block->facing = StoneButtonBlock::FACING_NORTH;
    block->powered = StoneButtonBlock::POWERED_FALSE;
    registry[4215] = block;
  }

  { // ID: 4216
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_WALL;
    block->facing = StoneButtonBlock::FACING_SOUTH;
    block->powered = StoneButtonBlock::POWERED_TRUE;
    registry[4216] = block;
  }

  { // ID: 4217
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_WALL;
    block->facing = StoneButtonBlock::FACING_SOUTH;
    block->powered = StoneButtonBlock::POWERED_FALSE;
    registry[4217] = block;
  }

  { // ID: 4218
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_WALL;
    block->facing = StoneButtonBlock::FACING_WEST;
    block->powered = StoneButtonBlock::POWERED_TRUE;
    registry[4218] = block;
  }

  { // ID: 4219
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_WALL;
    block->facing = StoneButtonBlock::FACING_WEST;
    block->powered = StoneButtonBlock::POWERED_FALSE;
    registry[4219] = block;
  }

  { // ID: 4220
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_WALL;
    block->facing = StoneButtonBlock::FACING_EAST;
    block->powered = StoneButtonBlock::POWERED_TRUE;
    registry[4220] = block;
  }

  { // ID: 4221
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_WALL;
    block->facing = StoneButtonBlock::FACING_EAST;
    block->powered = StoneButtonBlock::POWERED_FALSE;
    registry[4221] = block;
  }

  { // ID: 4222
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_CEILING;
    block->facing = StoneButtonBlock::FACING_NORTH;
    block->powered = StoneButtonBlock::POWERED_TRUE;
    registry[4222] = block;
  }

  { // ID: 4223
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_CEILING;
    block->facing = StoneButtonBlock::FACING_NORTH;
    block->powered = StoneButtonBlock::POWERED_FALSE;
    registry[4223] = block;
  }

  { // ID: 4224
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_CEILING;
    block->facing = StoneButtonBlock::FACING_SOUTH;
    block->powered = StoneButtonBlock::POWERED_TRUE;
    registry[4224] = block;
  }

  { // ID: 4225
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_CEILING;
    block->facing = StoneButtonBlock::FACING_SOUTH;
    block->powered = StoneButtonBlock::POWERED_FALSE;
    registry[4225] = block;
  }

  { // ID: 4226
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_CEILING;
    block->facing = StoneButtonBlock::FACING_WEST;
    block->powered = StoneButtonBlock::POWERED_TRUE;
    registry[4226] = block;
  }

  { // ID: 4227
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_CEILING;
    block->facing = StoneButtonBlock::FACING_WEST;
    block->powered = StoneButtonBlock::POWERED_FALSE;
    registry[4227] = block;
  }

  { // ID: 4228
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_CEILING;
    block->facing = StoneButtonBlock::FACING_EAST;
    block->powered = StoneButtonBlock::POWERED_TRUE;
    registry[4228] = block;
  }

  { // ID: 4229
    std::shared_ptr<StoneButtonBlock> block = std::make_shared<StoneButtonBlock>();
    block->face = StoneButtonBlock::FACE_CEILING;
    block->facing = StoneButtonBlock::FACING_EAST;
    block->powered = StoneButtonBlock::POWERED_FALSE;
    registry[4229] = block;
  }

  { // ID: 4230
    std::shared_ptr<SnowBlock> block = std::make_shared<SnowBlock>();
    block->layers = SnowBlock::LAYERS_1;
    registry[4230] = block;
  }

  { // ID: 4231
    std::shared_ptr<SnowBlock> block = std::make_shared<SnowBlock>();
    block->layers = SnowBlock::LAYERS_2;
    registry[4231] = block;
  }

  { // ID: 4232
    std::shared_ptr<SnowBlock> block = std::make_shared<SnowBlock>();
    block->layers = SnowBlock::LAYERS_3;
    registry[4232] = block;
  }

  { // ID: 4233
    std::shared_ptr<SnowBlock> block = std::make_shared<SnowBlock>();
    block->layers = SnowBlock::LAYERS_4;
    registry[4233] = block;
  }

  { // ID: 4234
    std::shared_ptr<SnowBlock> block = std::make_shared<SnowBlock>();
    block->layers = SnowBlock::LAYERS_5;
    registry[4234] = block;
  }

  { // ID: 4235
    std::shared_ptr<SnowBlock> block = std::make_shared<SnowBlock>();
    block->layers = SnowBlock::LAYERS_6;
    registry[4235] = block;
  }

  { // ID: 4236
    std::shared_ptr<SnowBlock> block = std::make_shared<SnowBlock>();
    block->layers = SnowBlock::LAYERS_7;
    registry[4236] = block;
  }

  { // ID: 4237
    std::shared_ptr<SnowBlock> block = std::make_shared<SnowBlock>();
    block->layers = SnowBlock::LAYERS_8;
    registry[4237] = block;
  }

  { // ID: 4239
    std::shared_ptr<SnowBlockBlock> block = std::make_shared<SnowBlockBlock>();
    registry[4239] = block;
  }

  { // ID: 4257
    std::shared_ptr<SugarCaneBlock> block = std::make_shared<SugarCaneBlock>();
    block->age = SugarCaneBlock::AGE_0;
    registry[4257] = block;
  }

  { // ID: 4258
    std::shared_ptr<SugarCaneBlock> block = std::make_shared<SugarCaneBlock>();
    block->age = SugarCaneBlock::AGE_1;
    registry[4258] = block;
  }

  { // ID: 4259
    std::shared_ptr<SugarCaneBlock> block = std::make_shared<SugarCaneBlock>();
    block->age = SugarCaneBlock::AGE_2;
    registry[4259] = block;
  }

  { // ID: 4260
    std::shared_ptr<SugarCaneBlock> block = std::make_shared<SugarCaneBlock>();
    block->age = SugarCaneBlock::AGE_3;
    registry[4260] = block;
  }

  { // ID: 4261
    std::shared_ptr<SugarCaneBlock> block = std::make_shared<SugarCaneBlock>();
    block->age = SugarCaneBlock::AGE_4;
    registry[4261] = block;
  }

  { // ID: 4262
    std::shared_ptr<SugarCaneBlock> block = std::make_shared<SugarCaneBlock>();
    block->age = SugarCaneBlock::AGE_5;
    registry[4262] = block;
  }

  { // ID: 4263
    std::shared_ptr<SugarCaneBlock> block = std::make_shared<SugarCaneBlock>();
    block->age = SugarCaneBlock::AGE_6;
    registry[4263] = block;
  }

  { // ID: 4264
    std::shared_ptr<SugarCaneBlock> block = std::make_shared<SugarCaneBlock>();
    block->age = SugarCaneBlock::AGE_7;
    registry[4264] = block;
  }

  { // ID: 4265
    std::shared_ptr<SugarCaneBlock> block = std::make_shared<SugarCaneBlock>();
    block->age = SugarCaneBlock::AGE_8;
    registry[4265] = block;
  }

  { // ID: 4266
    std::shared_ptr<SugarCaneBlock> block = std::make_shared<SugarCaneBlock>();
    block->age = SugarCaneBlock::AGE_9;
    registry[4266] = block;
  }

  { // ID: 4267
    std::shared_ptr<SugarCaneBlock> block = std::make_shared<SugarCaneBlock>();
    block->age = SugarCaneBlock::AGE_10;
    registry[4267] = block;
  }

  { // ID: 4268
    std::shared_ptr<SugarCaneBlock> block = std::make_shared<SugarCaneBlock>();
    block->age = SugarCaneBlock::AGE_11;
    registry[4268] = block;
  }

  { // ID: 4269
    std::shared_ptr<SugarCaneBlock> block = std::make_shared<SugarCaneBlock>();
    block->age = SugarCaneBlock::AGE_12;
    registry[4269] = block;
  }

  { // ID: 4270
    std::shared_ptr<SugarCaneBlock> block = std::make_shared<SugarCaneBlock>();
    block->age = SugarCaneBlock::AGE_13;
    registry[4270] = block;
  }

  { // ID: 4271
    std::shared_ptr<SugarCaneBlock> block = std::make_shared<SugarCaneBlock>();
    block->age = SugarCaneBlock::AGE_14;
    registry[4271] = block;
  }

  { // ID: 4272
    std::shared_ptr<SugarCaneBlock> block = std::make_shared<SugarCaneBlock>();
    block->age = SugarCaneBlock::AGE_15;
    registry[4272] = block;
  }

  { // ID: 4309
    std::shared_ptr<SoulSandBlock> block = std::make_shared<SoulSandBlock>();
    registry[4309] = block;
  }

  { // ID: 4310
    std::shared_ptr<SoulSoilBlock> block = std::make_shared<SoulSoilBlock>();
    registry[4310] = block;
  }

  { // ID: 4317
    std::shared_ptr<SoulTorchBlock> block = std::make_shared<SoulTorchBlock>();
    registry[4317] = block;
  }

  { // ID: 4318
    std::shared_ptr<SoulWallTorchBlock> block = std::make_shared<SoulWallTorchBlock>();
    block->facing = SoulWallTorchBlock::FACING_NORTH;
    registry[4318] = block;
  }

  { // ID: 4319
    std::shared_ptr<SoulWallTorchBlock> block = std::make_shared<SoulWallTorchBlock>();
    block->facing = SoulWallTorchBlock::FACING_SOUTH;
    registry[4319] = block;
  }

  { // ID: 4320
    std::shared_ptr<SoulWallTorchBlock> block = std::make_shared<SoulWallTorchBlock>();
    block->facing = SoulWallTorchBlock::FACING_WEST;
    registry[4320] = block;
  }

  { // ID: 4321
    std::shared_ptr<SoulWallTorchBlock> block = std::make_shared<SoulWallTorchBlock>();
    block->facing = SoulWallTorchBlock::FACING_EAST;
    registry[4321] = block;
  }

  { // ID: 4484
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_NORTH;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4484] = block;
  }

  { // ID: 4485
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_NORTH;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4485] = block;
  }

  { // ID: 4486
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_NORTH;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4486] = block;
  }

  { // ID: 4487
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_NORTH;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4487] = block;
  }

  { // ID: 4488
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_NORTH;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4488] = block;
  }

  { // ID: 4489
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_NORTH;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4489] = block;
  }

  { // ID: 4490
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_NORTH;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4490] = block;
  }

  { // ID: 4491
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_NORTH;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4491] = block;
  }

  { // ID: 4492
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_NORTH;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4492] = block;
  }

  { // ID: 4493
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_NORTH;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4493] = block;
  }

  { // ID: 4494
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_NORTH;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4494] = block;
  }

  { // ID: 4495
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_NORTH;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4495] = block;
  }

  { // ID: 4496
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_NORTH;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4496] = block;
  }

  { // ID: 4497
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_NORTH;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4497] = block;
  }

  { // ID: 4498
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_NORTH;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4498] = block;
  }

  { // ID: 4499
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_NORTH;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4499] = block;
  }

  { // ID: 4500
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_SOUTH;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4500] = block;
  }

  { // ID: 4501
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_SOUTH;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4501] = block;
  }

  { // ID: 4502
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_SOUTH;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4502] = block;
  }

  { // ID: 4503
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_SOUTH;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4503] = block;
  }

  { // ID: 4504
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_SOUTH;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4504] = block;
  }

  { // ID: 4505
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_SOUTH;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4505] = block;
  }

  { // ID: 4506
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_SOUTH;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4506] = block;
  }

  { // ID: 4507
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_SOUTH;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4507] = block;
  }

  { // ID: 4508
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_SOUTH;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4508] = block;
  }

  { // ID: 4509
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_SOUTH;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4509] = block;
  }

  { // ID: 4510
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_SOUTH;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4510] = block;
  }

  { // ID: 4511
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_SOUTH;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4511] = block;
  }

  { // ID: 4512
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_SOUTH;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4512] = block;
  }

  { // ID: 4513
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_SOUTH;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4513] = block;
  }

  { // ID: 4514
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_SOUTH;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4514] = block;
  }

  { // ID: 4515
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_SOUTH;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4515] = block;
  }

  { // ID: 4516
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_WEST;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4516] = block;
  }

  { // ID: 4517
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_WEST;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4517] = block;
  }

  { // ID: 4518
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_WEST;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4518] = block;
  }

  { // ID: 4519
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_WEST;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4519] = block;
  }

  { // ID: 4520
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_WEST;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4520] = block;
  }

  { // ID: 4521
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_WEST;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4521] = block;
  }

  { // ID: 4522
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_WEST;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4522] = block;
  }

  { // ID: 4523
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_WEST;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4523] = block;
  }

  { // ID: 4524
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_WEST;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4524] = block;
  }

  { // ID: 4525
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_WEST;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4525] = block;
  }

  { // ID: 4526
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_WEST;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4526] = block;
  }

  { // ID: 4527
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_WEST;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4527] = block;
  }

  { // ID: 4528
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_WEST;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4528] = block;
  }

  { // ID: 4529
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_WEST;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4529] = block;
  }

  { // ID: 4530
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_WEST;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4530] = block;
  }

  { // ID: 4531
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_WEST;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4531] = block;
  }

  { // ID: 4532
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_EAST;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4532] = block;
  }

  { // ID: 4533
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_EAST;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4533] = block;
  }

  { // ID: 4534
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_EAST;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4534] = block;
  }

  { // ID: 4535
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_EAST;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4535] = block;
  }

  { // ID: 4536
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_EAST;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4536] = block;
  }

  { // ID: 4537
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_EAST;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4537] = block;
  }

  { // ID: 4538
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_EAST;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4538] = block;
  }

  { // ID: 4539
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_EAST;
    block->half = SpruceTrapdoorBlock::HALF_TOP;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4539] = block;
  }

  { // ID: 4540
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_EAST;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4540] = block;
  }

  { // ID: 4541
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_EAST;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4541] = block;
  }

  { // ID: 4542
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_EAST;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4542] = block;
  }

  { // ID: 4543
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_EAST;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_TRUE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4543] = block;
  }

  { // ID: 4544
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_EAST;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4544] = block;
  }

  { // ID: 4545
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_EAST;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4545] = block;
  }

  { // ID: 4546
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_EAST;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4546] = block;
  }

  { // ID: 4547
    std::shared_ptr<SpruceTrapdoorBlock> block = std::make_shared<SpruceTrapdoorBlock>();
    block->facing = SpruceTrapdoorBlock::FACING_EAST;
    block->half = SpruceTrapdoorBlock::HALF_BOTTOM;
    block->open = SpruceTrapdoorBlock::OPEN_FALSE;
    block->powered = SpruceTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = SpruceTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4547] = block;
  }

  { // ID: 4868
    std::shared_ptr<StoneBricksBlock> block = std::make_shared<StoneBricksBlock>();
    registry[4868] = block;
  }

  { // ID: 5439
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_NORTH;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5439] = block;
  }

  { // ID: 5440
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_NORTH;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5440] = block;
  }

  { // ID: 5441
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_NORTH;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5441] = block;
  }

  { // ID: 5442
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_NORTH;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5442] = block;
  }

  { // ID: 5443
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_NORTH;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5443] = block;
  }

  { // ID: 5444
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_NORTH;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5444] = block;
  }

  { // ID: 5445
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_NORTH;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5445] = block;
  }

  { // ID: 5446
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_NORTH;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5446] = block;
  }

  { // ID: 5447
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_NORTH;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5447] = block;
  }

  { // ID: 5448
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_NORTH;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5448] = block;
  }

  { // ID: 5449
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_NORTH;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5449] = block;
  }

  { // ID: 5450
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_NORTH;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5450] = block;
  }

  { // ID: 5451
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_NORTH;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5451] = block;
  }

  { // ID: 5452
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_NORTH;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5452] = block;
  }

  { // ID: 5453
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_NORTH;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5453] = block;
  }

  { // ID: 5454
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_NORTH;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5454] = block;
  }

  { // ID: 5455
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_NORTH;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5455] = block;
  }

  { // ID: 5456
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_NORTH;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5456] = block;
  }

  { // ID: 5457
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_NORTH;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5457] = block;
  }

  { // ID: 5458
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_NORTH;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5458] = block;
  }

  { // ID: 5459
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_SOUTH;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5459] = block;
  }

  { // ID: 5460
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_SOUTH;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5460] = block;
  }

  { // ID: 5461
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_SOUTH;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5461] = block;
  }

  { // ID: 5462
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_SOUTH;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5462] = block;
  }

  { // ID: 5463
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_SOUTH;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5463] = block;
  }

  { // ID: 5464
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_SOUTH;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5464] = block;
  }

  { // ID: 5465
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_SOUTH;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5465] = block;
  }

  { // ID: 5466
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_SOUTH;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5466] = block;
  }

  { // ID: 5467
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_SOUTH;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5467] = block;
  }

  { // ID: 5468
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_SOUTH;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5468] = block;
  }

  { // ID: 5469
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_SOUTH;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5469] = block;
  }

  { // ID: 5470
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_SOUTH;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5470] = block;
  }

  { // ID: 5471
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_SOUTH;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5471] = block;
  }

  { // ID: 5472
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_SOUTH;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5472] = block;
  }

  { // ID: 5473
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_SOUTH;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5473] = block;
  }

  { // ID: 5474
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_SOUTH;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5474] = block;
  }

  { // ID: 5475
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_SOUTH;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5475] = block;
  }

  { // ID: 5476
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_SOUTH;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5476] = block;
  }

  { // ID: 5477
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_SOUTH;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5477] = block;
  }

  { // ID: 5478
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_SOUTH;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5478] = block;
  }

  { // ID: 5479
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_WEST;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5479] = block;
  }

  { // ID: 5480
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_WEST;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5480] = block;
  }

  { // ID: 5481
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_WEST;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5481] = block;
  }

  { // ID: 5482
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_WEST;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5482] = block;
  }

  { // ID: 5483
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_WEST;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5483] = block;
  }

  { // ID: 5484
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_WEST;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5484] = block;
  }

  { // ID: 5485
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_WEST;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5485] = block;
  }

  { // ID: 5486
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_WEST;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5486] = block;
  }

  { // ID: 5487
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_WEST;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5487] = block;
  }

  { // ID: 5488
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_WEST;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5488] = block;
  }

  { // ID: 5489
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_WEST;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5489] = block;
  }

  { // ID: 5490
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_WEST;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5490] = block;
  }

  { // ID: 5491
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_WEST;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5491] = block;
  }

  { // ID: 5492
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_WEST;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5492] = block;
  }

  { // ID: 5493
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_WEST;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5493] = block;
  }

  { // ID: 5494
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_WEST;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5494] = block;
  }

  { // ID: 5495
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_WEST;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5495] = block;
  }

  { // ID: 5496
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_WEST;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5496] = block;
  }

  { // ID: 5497
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_WEST;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5497] = block;
  }

  { // ID: 5498
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_WEST;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5498] = block;
  }

  { // ID: 5499
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_EAST;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5499] = block;
  }

  { // ID: 5500
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_EAST;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5500] = block;
  }

  { // ID: 5501
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_EAST;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5501] = block;
  }

  { // ID: 5502
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_EAST;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5502] = block;
  }

  { // ID: 5503
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_EAST;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5503] = block;
  }

  { // ID: 5504
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_EAST;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5504] = block;
  }

  { // ID: 5505
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_EAST;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5505] = block;
  }

  { // ID: 5506
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_EAST;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5506] = block;
  }

  { // ID: 5507
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_EAST;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5507] = block;
  }

  { // ID: 5508
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_EAST;
    block->half = StoneBrickStairsBlock::HALF_TOP;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5508] = block;
  }

  { // ID: 5509
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_EAST;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5509] = block;
  }

  { // ID: 5510
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_EAST;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5510] = block;
  }

  { // ID: 5511
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_EAST;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5511] = block;
  }

  { // ID: 5512
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_EAST;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5512] = block;
  }

  { // ID: 5513
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_EAST;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5513] = block;
  }

  { // ID: 5514
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_EAST;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5514] = block;
  }

  { // ID: 5515
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_EAST;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5515] = block;
  }

  { // ID: 5516
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_EAST;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5516] = block;
  }

  { // ID: 5517
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_EAST;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5517] = block;
  }

  { // ID: 5518
    std::shared_ptr<StoneBrickStairsBlock> block = std::make_shared<StoneBrickStairsBlock>();
    block->facing = StoneBrickStairsBlock::FACING_EAST;
    block->half = StoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = StoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5518] = block;
  }

  { // ID: 5761
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_NORTH;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5761] = block;
  }

  { // ID: 5762
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_NORTH;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5762] = block;
  }

  { // ID: 5763
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_NORTH;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5763] = block;
  }

  { // ID: 5764
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_NORTH;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5764] = block;
  }

  { // ID: 5765
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_NORTH;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5765] = block;
  }

  { // ID: 5766
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_NORTH;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5766] = block;
  }

  { // ID: 5767
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_NORTH;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5767] = block;
  }

  { // ID: 5768
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_NORTH;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5768] = block;
  }

  { // ID: 5769
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_NORTH;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5769] = block;
  }

  { // ID: 5770
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_NORTH;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5770] = block;
  }

  { // ID: 5771
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_NORTH;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5771] = block;
  }

  { // ID: 5772
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_NORTH;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5772] = block;
  }

  { // ID: 5773
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_NORTH;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5773] = block;
  }

  { // ID: 5774
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_NORTH;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5774] = block;
  }

  { // ID: 5775
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_NORTH;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5775] = block;
  }

  { // ID: 5776
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_NORTH;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5776] = block;
  }

  { // ID: 5777
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_NORTH;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5777] = block;
  }

  { // ID: 5778
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_NORTH;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5778] = block;
  }

  { // ID: 5779
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_NORTH;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5779] = block;
  }

  { // ID: 5780
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_NORTH;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5780] = block;
  }

  { // ID: 5781
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_SOUTH;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5781] = block;
  }

  { // ID: 5782
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_SOUTH;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5782] = block;
  }

  { // ID: 5783
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_SOUTH;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5783] = block;
  }

  { // ID: 5784
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_SOUTH;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5784] = block;
  }

  { // ID: 5785
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_SOUTH;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5785] = block;
  }

  { // ID: 5786
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_SOUTH;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5786] = block;
  }

  { // ID: 5787
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_SOUTH;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5787] = block;
  }

  { // ID: 5788
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_SOUTH;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5788] = block;
  }

  { // ID: 5789
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_SOUTH;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5789] = block;
  }

  { // ID: 5790
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_SOUTH;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5790] = block;
  }

  { // ID: 5791
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_SOUTH;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5791] = block;
  }

  { // ID: 5792
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_SOUTH;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5792] = block;
  }

  { // ID: 5793
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_SOUTH;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5793] = block;
  }

  { // ID: 5794
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_SOUTH;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5794] = block;
  }

  { // ID: 5795
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_SOUTH;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5795] = block;
  }

  { // ID: 5796
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_SOUTH;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5796] = block;
  }

  { // ID: 5797
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_SOUTH;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5797] = block;
  }

  { // ID: 5798
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_SOUTH;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5798] = block;
  }

  { // ID: 5799
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_SOUTH;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5799] = block;
  }

  { // ID: 5800
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_SOUTH;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5800] = block;
  }

  { // ID: 5801
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_WEST;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5801] = block;
  }

  { // ID: 5802
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_WEST;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5802] = block;
  }

  { // ID: 5803
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_WEST;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5803] = block;
  }

  { // ID: 5804
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_WEST;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5804] = block;
  }

  { // ID: 5805
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_WEST;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5805] = block;
  }

  { // ID: 5806
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_WEST;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5806] = block;
  }

  { // ID: 5807
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_WEST;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5807] = block;
  }

  { // ID: 5808
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_WEST;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5808] = block;
  }

  { // ID: 5809
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_WEST;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5809] = block;
  }

  { // ID: 5810
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_WEST;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5810] = block;
  }

  { // ID: 5811
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_WEST;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5811] = block;
  }

  { // ID: 5812
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_WEST;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5812] = block;
  }

  { // ID: 5813
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_WEST;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5813] = block;
  }

  { // ID: 5814
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_WEST;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5814] = block;
  }

  { // ID: 5815
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_WEST;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5815] = block;
  }

  { // ID: 5816
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_WEST;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5816] = block;
  }

  { // ID: 5817
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_WEST;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5817] = block;
  }

  { // ID: 5818
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_WEST;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5818] = block;
  }

  { // ID: 5819
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_WEST;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5819] = block;
  }

  { // ID: 5820
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_WEST;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5820] = block;
  }

  { // ID: 5821
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_EAST;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5821] = block;
  }

  { // ID: 5822
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_EAST;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5822] = block;
  }

  { // ID: 5823
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_EAST;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5823] = block;
  }

  { // ID: 5824
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_EAST;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5824] = block;
  }

  { // ID: 5825
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_EAST;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5825] = block;
  }

  { // ID: 5826
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_EAST;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5826] = block;
  }

  { // ID: 5827
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_EAST;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5827] = block;
  }

  { // ID: 5828
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_EAST;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5828] = block;
  }

  { // ID: 5829
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_EAST;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5829] = block;
  }

  { // ID: 5830
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_EAST;
    block->half = SandstoneStairsBlock::HALF_TOP;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5830] = block;
  }

  { // ID: 5831
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_EAST;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5831] = block;
  }

  { // ID: 5832
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_EAST;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5832] = block;
  }

  { // ID: 5833
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_EAST;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5833] = block;
  }

  { // ID: 5834
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_EAST;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5834] = block;
  }

  { // ID: 5835
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_EAST;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5835] = block;
  }

  { // ID: 5836
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_EAST;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5836] = block;
  }

  { // ID: 5837
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_EAST;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5837] = block;
  }

  { // ID: 5838
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_EAST;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5838] = block;
  }

  { // ID: 5839
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_EAST;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[5839] = block;
  }

  { // ID: 5840
    std::shared_ptr<SandstoneStairsBlock> block = std::make_shared<SandstoneStairsBlock>();
    block->facing = SandstoneStairsBlock::FACING_EAST;
    block->half = SandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[5840] = block;
  }

  { // ID: 5996
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_NORTH;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[5996] = block;
  }

  { // ID: 5997
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_NORTH;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[5997] = block;
  }

  { // ID: 5998
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_NORTH;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[5998] = block;
  }

  { // ID: 5999
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_NORTH;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[5999] = block;
  }

  { // ID: 6000
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_NORTH;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6000] = block;
  }

  { // ID: 6001
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_NORTH;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6001] = block;
  }

  { // ID: 6002
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_NORTH;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6002] = block;
  }

  { // ID: 6003
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_NORTH;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6003] = block;
  }

  { // ID: 6004
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_NORTH;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6004] = block;
  }

  { // ID: 6005
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_NORTH;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6005] = block;
  }

  { // ID: 6006
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_NORTH;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6006] = block;
  }

  { // ID: 6007
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_NORTH;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6007] = block;
  }

  { // ID: 6008
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_NORTH;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6008] = block;
  }

  { // ID: 6009
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_NORTH;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6009] = block;
  }

  { // ID: 6010
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_NORTH;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6010] = block;
  }

  { // ID: 6011
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_NORTH;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6011] = block;
  }

  { // ID: 6012
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_NORTH;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6012] = block;
  }

  { // ID: 6013
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_NORTH;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6013] = block;
  }

  { // ID: 6014
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_NORTH;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6014] = block;
  }

  { // ID: 6015
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_NORTH;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6015] = block;
  }

  { // ID: 6016
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_SOUTH;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6016] = block;
  }

  { // ID: 6017
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_SOUTH;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6017] = block;
  }

  { // ID: 6018
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_SOUTH;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6018] = block;
  }

  { // ID: 6019
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_SOUTH;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6019] = block;
  }

  { // ID: 6020
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_SOUTH;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6020] = block;
  }

  { // ID: 6021
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_SOUTH;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6021] = block;
  }

  { // ID: 6022
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_SOUTH;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6022] = block;
  }

  { // ID: 6023
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_SOUTH;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6023] = block;
  }

  { // ID: 6024
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_SOUTH;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6024] = block;
  }

  { // ID: 6025
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_SOUTH;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6025] = block;
  }

  { // ID: 6026
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_SOUTH;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6026] = block;
  }

  { // ID: 6027
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_SOUTH;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6027] = block;
  }

  { // ID: 6028
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_SOUTH;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6028] = block;
  }

  { // ID: 6029
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_SOUTH;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6029] = block;
  }

  { // ID: 6030
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_SOUTH;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6030] = block;
  }

  { // ID: 6031
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_SOUTH;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6031] = block;
  }

  { // ID: 6032
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_SOUTH;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6032] = block;
  }

  { // ID: 6033
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_SOUTH;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6033] = block;
  }

  { // ID: 6034
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_SOUTH;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6034] = block;
  }

  { // ID: 6035
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_SOUTH;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6035] = block;
  }

  { // ID: 6036
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_WEST;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6036] = block;
  }

  { // ID: 6037
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_WEST;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6037] = block;
  }

  { // ID: 6038
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_WEST;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6038] = block;
  }

  { // ID: 6039
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_WEST;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6039] = block;
  }

  { // ID: 6040
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_WEST;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6040] = block;
  }

  { // ID: 6041
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_WEST;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6041] = block;
  }

  { // ID: 6042
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_WEST;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6042] = block;
  }

  { // ID: 6043
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_WEST;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6043] = block;
  }

  { // ID: 6044
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_WEST;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6044] = block;
  }

  { // ID: 6045
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_WEST;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6045] = block;
  }

  { // ID: 6046
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_WEST;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6046] = block;
  }

  { // ID: 6047
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_WEST;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6047] = block;
  }

  { // ID: 6048
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_WEST;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6048] = block;
  }

  { // ID: 6049
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_WEST;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6049] = block;
  }

  { // ID: 6050
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_WEST;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6050] = block;
  }

  { // ID: 6051
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_WEST;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6051] = block;
  }

  { // ID: 6052
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_WEST;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6052] = block;
  }

  { // ID: 6053
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_WEST;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6053] = block;
  }

  { // ID: 6054
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_WEST;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6054] = block;
  }

  { // ID: 6055
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_WEST;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6055] = block;
  }

  { // ID: 6056
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_EAST;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6056] = block;
  }

  { // ID: 6057
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_EAST;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6057] = block;
  }

  { // ID: 6058
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_EAST;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6058] = block;
  }

  { // ID: 6059
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_EAST;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6059] = block;
  }

  { // ID: 6060
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_EAST;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6060] = block;
  }

  { // ID: 6061
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_EAST;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6061] = block;
  }

  { // ID: 6062
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_EAST;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6062] = block;
  }

  { // ID: 6063
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_EAST;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6063] = block;
  }

  { // ID: 6064
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_EAST;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6064] = block;
  }

  { // ID: 6065
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_EAST;
    block->half = SpruceStairsBlock::HALF_TOP;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6065] = block;
  }

  { // ID: 6066
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_EAST;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6066] = block;
  }

  { // ID: 6067
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_EAST;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6067] = block;
  }

  { // ID: 6068
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_EAST;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6068] = block;
  }

  { // ID: 6069
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_EAST;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6069] = block;
  }

  { // ID: 6070
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_EAST;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6070] = block;
  }

  { // ID: 6071
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_EAST;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6071] = block;
  }

  { // ID: 6072
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_EAST;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6072] = block;
  }

  { // ID: 6073
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_EAST;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6073] = block;
  }

  { // ID: 6074
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_EAST;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_TRUE;
    registry[6074] = block;
  }

  { // ID: 6075
    std::shared_ptr<SpruceStairsBlock> block = std::make_shared<SpruceStairsBlock>();
    block->facing = SpruceStairsBlock::FACING_EAST;
    block->half = SpruceStairsBlock::HALF_BOTTOM;
    block->shape = SpruceStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SpruceStairsBlock::WATERLOGGED_FALSE;
    registry[6075] = block;
  }

  { // ID: 6963
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_FLOOR;
    block->facing = SpruceButtonBlock::FACING_NORTH;
    block->powered = SpruceButtonBlock::POWERED_TRUE;
    registry[6963] = block;
  }

  { // ID: 6964
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_FLOOR;
    block->facing = SpruceButtonBlock::FACING_NORTH;
    block->powered = SpruceButtonBlock::POWERED_FALSE;
    registry[6964] = block;
  }

  { // ID: 6965
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_FLOOR;
    block->facing = SpruceButtonBlock::FACING_SOUTH;
    block->powered = SpruceButtonBlock::POWERED_TRUE;
    registry[6965] = block;
  }

  { // ID: 6966
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_FLOOR;
    block->facing = SpruceButtonBlock::FACING_SOUTH;
    block->powered = SpruceButtonBlock::POWERED_FALSE;
    registry[6966] = block;
  }

  { // ID: 6967
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_FLOOR;
    block->facing = SpruceButtonBlock::FACING_WEST;
    block->powered = SpruceButtonBlock::POWERED_TRUE;
    registry[6967] = block;
  }

  { // ID: 6968
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_FLOOR;
    block->facing = SpruceButtonBlock::FACING_WEST;
    block->powered = SpruceButtonBlock::POWERED_FALSE;
    registry[6968] = block;
  }

  { // ID: 6969
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_FLOOR;
    block->facing = SpruceButtonBlock::FACING_EAST;
    block->powered = SpruceButtonBlock::POWERED_TRUE;
    registry[6969] = block;
  }

  { // ID: 6970
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_FLOOR;
    block->facing = SpruceButtonBlock::FACING_EAST;
    block->powered = SpruceButtonBlock::POWERED_FALSE;
    registry[6970] = block;
  }

  { // ID: 6971
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_WALL;
    block->facing = SpruceButtonBlock::FACING_NORTH;
    block->powered = SpruceButtonBlock::POWERED_TRUE;
    registry[6971] = block;
  }

  { // ID: 6972
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_WALL;
    block->facing = SpruceButtonBlock::FACING_NORTH;
    block->powered = SpruceButtonBlock::POWERED_FALSE;
    registry[6972] = block;
  }

  { // ID: 6973
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_WALL;
    block->facing = SpruceButtonBlock::FACING_SOUTH;
    block->powered = SpruceButtonBlock::POWERED_TRUE;
    registry[6973] = block;
  }

  { // ID: 6974
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_WALL;
    block->facing = SpruceButtonBlock::FACING_SOUTH;
    block->powered = SpruceButtonBlock::POWERED_FALSE;
    registry[6974] = block;
  }

  { // ID: 6975
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_WALL;
    block->facing = SpruceButtonBlock::FACING_WEST;
    block->powered = SpruceButtonBlock::POWERED_TRUE;
    registry[6975] = block;
  }

  { // ID: 6976
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_WALL;
    block->facing = SpruceButtonBlock::FACING_WEST;
    block->powered = SpruceButtonBlock::POWERED_FALSE;
    registry[6976] = block;
  }

  { // ID: 6977
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_WALL;
    block->facing = SpruceButtonBlock::FACING_EAST;
    block->powered = SpruceButtonBlock::POWERED_TRUE;
    registry[6977] = block;
  }

  { // ID: 6978
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_WALL;
    block->facing = SpruceButtonBlock::FACING_EAST;
    block->powered = SpruceButtonBlock::POWERED_FALSE;
    registry[6978] = block;
  }

  { // ID: 6979
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_CEILING;
    block->facing = SpruceButtonBlock::FACING_NORTH;
    block->powered = SpruceButtonBlock::POWERED_TRUE;
    registry[6979] = block;
  }

  { // ID: 6980
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_CEILING;
    block->facing = SpruceButtonBlock::FACING_NORTH;
    block->powered = SpruceButtonBlock::POWERED_FALSE;
    registry[6980] = block;
  }

  { // ID: 6981
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_CEILING;
    block->facing = SpruceButtonBlock::FACING_SOUTH;
    block->powered = SpruceButtonBlock::POWERED_TRUE;
    registry[6981] = block;
  }

  { // ID: 6982
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_CEILING;
    block->facing = SpruceButtonBlock::FACING_SOUTH;
    block->powered = SpruceButtonBlock::POWERED_FALSE;
    registry[6982] = block;
  }

  { // ID: 6983
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_CEILING;
    block->facing = SpruceButtonBlock::FACING_WEST;
    block->powered = SpruceButtonBlock::POWERED_TRUE;
    registry[6983] = block;
  }

  { // ID: 6984
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_CEILING;
    block->facing = SpruceButtonBlock::FACING_WEST;
    block->powered = SpruceButtonBlock::POWERED_FALSE;
    registry[6984] = block;
  }

  { // ID: 6985
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_CEILING;
    block->facing = SpruceButtonBlock::FACING_EAST;
    block->powered = SpruceButtonBlock::POWERED_TRUE;
    registry[6985] = block;
  }

  { // ID: 6986
    std::shared_ptr<SpruceButtonBlock> block = std::make_shared<SpruceButtonBlock>();
    block->face = SpruceButtonBlock::FACE_CEILING;
    block->facing = SpruceButtonBlock::FACING_EAST;
    block->powered = SpruceButtonBlock::POWERED_FALSE;
    registry[6986] = block;
  }

  { // ID: 7107
    std::shared_ptr<SkeletonSkullBlock> block = std::make_shared<SkeletonSkullBlock>();
    block->rotation = SkeletonSkullBlock::ROTATION_0;
    registry[7107] = block;
  }

  { // ID: 7108
    std::shared_ptr<SkeletonSkullBlock> block = std::make_shared<SkeletonSkullBlock>();
    block->rotation = SkeletonSkullBlock::ROTATION_1;
    registry[7108] = block;
  }

  { // ID: 7109
    std::shared_ptr<SkeletonSkullBlock> block = std::make_shared<SkeletonSkullBlock>();
    block->rotation = SkeletonSkullBlock::ROTATION_2;
    registry[7109] = block;
  }

  { // ID: 7110
    std::shared_ptr<SkeletonSkullBlock> block = std::make_shared<SkeletonSkullBlock>();
    block->rotation = SkeletonSkullBlock::ROTATION_3;
    registry[7110] = block;
  }

  { // ID: 7111
    std::shared_ptr<SkeletonSkullBlock> block = std::make_shared<SkeletonSkullBlock>();
    block->rotation = SkeletonSkullBlock::ROTATION_4;
    registry[7111] = block;
  }

  { // ID: 7112
    std::shared_ptr<SkeletonSkullBlock> block = std::make_shared<SkeletonSkullBlock>();
    block->rotation = SkeletonSkullBlock::ROTATION_5;
    registry[7112] = block;
  }

  { // ID: 7113
    std::shared_ptr<SkeletonSkullBlock> block = std::make_shared<SkeletonSkullBlock>();
    block->rotation = SkeletonSkullBlock::ROTATION_6;
    registry[7113] = block;
  }

  { // ID: 7114
    std::shared_ptr<SkeletonSkullBlock> block = std::make_shared<SkeletonSkullBlock>();
    block->rotation = SkeletonSkullBlock::ROTATION_7;
    registry[7114] = block;
  }

  { // ID: 7115
    std::shared_ptr<SkeletonSkullBlock> block = std::make_shared<SkeletonSkullBlock>();
    block->rotation = SkeletonSkullBlock::ROTATION_8;
    registry[7115] = block;
  }

  { // ID: 7116
    std::shared_ptr<SkeletonSkullBlock> block = std::make_shared<SkeletonSkullBlock>();
    block->rotation = SkeletonSkullBlock::ROTATION_9;
    registry[7116] = block;
  }

  { // ID: 7117
    std::shared_ptr<SkeletonSkullBlock> block = std::make_shared<SkeletonSkullBlock>();
    block->rotation = SkeletonSkullBlock::ROTATION_10;
    registry[7117] = block;
  }

  { // ID: 7118
    std::shared_ptr<SkeletonSkullBlock> block = std::make_shared<SkeletonSkullBlock>();
    block->rotation = SkeletonSkullBlock::ROTATION_11;
    registry[7118] = block;
  }

  { // ID: 7119
    std::shared_ptr<SkeletonSkullBlock> block = std::make_shared<SkeletonSkullBlock>();
    block->rotation = SkeletonSkullBlock::ROTATION_12;
    registry[7119] = block;
  }

  { // ID: 7120
    std::shared_ptr<SkeletonSkullBlock> block = std::make_shared<SkeletonSkullBlock>();
    block->rotation = SkeletonSkullBlock::ROTATION_13;
    registry[7120] = block;
  }

  { // ID: 7121
    std::shared_ptr<SkeletonSkullBlock> block = std::make_shared<SkeletonSkullBlock>();
    block->rotation = SkeletonSkullBlock::ROTATION_14;
    registry[7121] = block;
  }

  { // ID: 7122
    std::shared_ptr<SkeletonSkullBlock> block = std::make_shared<SkeletonSkullBlock>();
    block->rotation = SkeletonSkullBlock::ROTATION_15;
    registry[7122] = block;
  }

  { // ID: 7123
    std::shared_ptr<SkeletonWallSkullBlock> block = std::make_shared<SkeletonWallSkullBlock>();
    block->facing = SkeletonWallSkullBlock::FACING_NORTH;
    registry[7123] = block;
  }

  { // ID: 7124
    std::shared_ptr<SkeletonWallSkullBlock> block = std::make_shared<SkeletonWallSkullBlock>();
    block->facing = SkeletonWallSkullBlock::FACING_SOUTH;
    registry[7124] = block;
  }

  { // ID: 7125
    std::shared_ptr<SkeletonWallSkullBlock> block = std::make_shared<SkeletonWallSkullBlock>();
    block->facing = SkeletonWallSkullBlock::FACING_WEST;
    registry[7125] = block;
  }

  { // ID: 7126
    std::shared_ptr<SkeletonWallSkullBlock> block = std::make_shared<SkeletonWallSkullBlock>();
    block->facing = SkeletonWallSkullBlock::FACING_EAST;
    registry[7126] = block;
  }

  { // ID: 8244
    std::shared_ptr<SlimeBlockBlock> block = std::make_shared<SlimeBlockBlock>();
    registry[8244] = block;
  }

  { // ID: 8603
    std::shared_ptr<SeaLanternBlock> block = std::make_shared<SeaLanternBlock>();
    registry[8603] = block;
  }

  { // ID: 8626
    std::shared_ptr<SunflowerBlock> block = std::make_shared<SunflowerBlock>();
    block->half = SunflowerBlock::HALF_UPPER;
    registry[8626] = block;
  }

  { // ID: 8627
    std::shared_ptr<SunflowerBlock> block = std::make_shared<SunflowerBlock>();
    block->half = SunflowerBlock::HALF_LOWER;
    registry[8627] = block;
  }

  { // ID: 9047
    std::shared_ptr<SpruceSlabBlock> block = std::make_shared<SpruceSlabBlock>();
    block->type = SpruceSlabBlock::TYPE_TOP;
    block->waterlogged = SpruceSlabBlock::WATERLOGGED_TRUE;
    registry[9047] = block;
  }

  { // ID: 9048
    std::shared_ptr<SpruceSlabBlock> block = std::make_shared<SpruceSlabBlock>();
    block->type = SpruceSlabBlock::TYPE_TOP;
    block->waterlogged = SpruceSlabBlock::WATERLOGGED_FALSE;
    registry[9048] = block;
  }

  { // ID: 9049
    std::shared_ptr<SpruceSlabBlock> block = std::make_shared<SpruceSlabBlock>();
    block->type = SpruceSlabBlock::TYPE_BOTTOM;
    block->waterlogged = SpruceSlabBlock::WATERLOGGED_TRUE;
    registry[9049] = block;
  }

  { // ID: 9050
    std::shared_ptr<SpruceSlabBlock> block = std::make_shared<SpruceSlabBlock>();
    block->type = SpruceSlabBlock::TYPE_BOTTOM;
    block->waterlogged = SpruceSlabBlock::WATERLOGGED_FALSE;
    registry[9050] = block;
  }

  { // ID: 9051
    std::shared_ptr<SpruceSlabBlock> block = std::make_shared<SpruceSlabBlock>();
    block->type = SpruceSlabBlock::TYPE_DOUBLE;
    block->waterlogged = SpruceSlabBlock::WATERLOGGED_TRUE;
    registry[9051] = block;
  }

  { // ID: 9052
    std::shared_ptr<SpruceSlabBlock> block = std::make_shared<SpruceSlabBlock>();
    block->type = SpruceSlabBlock::TYPE_DOUBLE;
    block->waterlogged = SpruceSlabBlock::WATERLOGGED_FALSE;
    registry[9052] = block;
  }

  { // ID: 9083
    std::shared_ptr<StoneSlabBlock> block = std::make_shared<StoneSlabBlock>();
    block->type = StoneSlabBlock::TYPE_TOP;
    block->waterlogged = StoneSlabBlock::WATERLOGGED_TRUE;
    registry[9083] = block;
  }

  { // ID: 9084
    std::shared_ptr<StoneSlabBlock> block = std::make_shared<StoneSlabBlock>();
    block->type = StoneSlabBlock::TYPE_TOP;
    block->waterlogged = StoneSlabBlock::WATERLOGGED_FALSE;
    registry[9084] = block;
  }

  { // ID: 9085
    std::shared_ptr<StoneSlabBlock> block = std::make_shared<StoneSlabBlock>();
    block->type = StoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = StoneSlabBlock::WATERLOGGED_TRUE;
    registry[9085] = block;
  }

  { // ID: 9086
    std::shared_ptr<StoneSlabBlock> block = std::make_shared<StoneSlabBlock>();
    block->type = StoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = StoneSlabBlock::WATERLOGGED_FALSE;
    registry[9086] = block;
  }

  { // ID: 9087
    std::shared_ptr<StoneSlabBlock> block = std::make_shared<StoneSlabBlock>();
    block->type = StoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = StoneSlabBlock::WATERLOGGED_TRUE;
    registry[9087] = block;
  }

  { // ID: 9088
    std::shared_ptr<StoneSlabBlock> block = std::make_shared<StoneSlabBlock>();
    block->type = StoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = StoneSlabBlock::WATERLOGGED_FALSE;
    registry[9088] = block;
  }

  { // ID: 9089
    std::shared_ptr<SmoothStoneSlabBlock> block = std::make_shared<SmoothStoneSlabBlock>();
    block->type = SmoothStoneSlabBlock::TYPE_TOP;
    block->waterlogged = SmoothStoneSlabBlock::WATERLOGGED_TRUE;
    registry[9089] = block;
  }

  { // ID: 9090
    std::shared_ptr<SmoothStoneSlabBlock> block = std::make_shared<SmoothStoneSlabBlock>();
    block->type = SmoothStoneSlabBlock::TYPE_TOP;
    block->waterlogged = SmoothStoneSlabBlock::WATERLOGGED_FALSE;
    registry[9090] = block;
  }

  { // ID: 9091
    std::shared_ptr<SmoothStoneSlabBlock> block = std::make_shared<SmoothStoneSlabBlock>();
    block->type = SmoothStoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = SmoothStoneSlabBlock::WATERLOGGED_TRUE;
    registry[9091] = block;
  }

  { // ID: 9092
    std::shared_ptr<SmoothStoneSlabBlock> block = std::make_shared<SmoothStoneSlabBlock>();
    block->type = SmoothStoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = SmoothStoneSlabBlock::WATERLOGGED_FALSE;
    registry[9092] = block;
  }

  { // ID: 9093
    std::shared_ptr<SmoothStoneSlabBlock> block = std::make_shared<SmoothStoneSlabBlock>();
    block->type = SmoothStoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = SmoothStoneSlabBlock::WATERLOGGED_TRUE;
    registry[9093] = block;
  }

  { // ID: 9094
    std::shared_ptr<SmoothStoneSlabBlock> block = std::make_shared<SmoothStoneSlabBlock>();
    block->type = SmoothStoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = SmoothStoneSlabBlock::WATERLOGGED_FALSE;
    registry[9094] = block;
  }

  { // ID: 9095
    std::shared_ptr<SandstoneSlabBlock> block = std::make_shared<SandstoneSlabBlock>();
    block->type = SandstoneSlabBlock::TYPE_TOP;
    block->waterlogged = SandstoneSlabBlock::WATERLOGGED_TRUE;
    registry[9095] = block;
  }

  { // ID: 9096
    std::shared_ptr<SandstoneSlabBlock> block = std::make_shared<SandstoneSlabBlock>();
    block->type = SandstoneSlabBlock::TYPE_TOP;
    block->waterlogged = SandstoneSlabBlock::WATERLOGGED_FALSE;
    registry[9096] = block;
  }

  { // ID: 9097
    std::shared_ptr<SandstoneSlabBlock> block = std::make_shared<SandstoneSlabBlock>();
    block->type = SandstoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = SandstoneSlabBlock::WATERLOGGED_TRUE;
    registry[9097] = block;
  }

  { // ID: 9098
    std::shared_ptr<SandstoneSlabBlock> block = std::make_shared<SandstoneSlabBlock>();
    block->type = SandstoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = SandstoneSlabBlock::WATERLOGGED_FALSE;
    registry[9098] = block;
  }

  { // ID: 9099
    std::shared_ptr<SandstoneSlabBlock> block = std::make_shared<SandstoneSlabBlock>();
    block->type = SandstoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = SandstoneSlabBlock::WATERLOGGED_TRUE;
    registry[9099] = block;
  }

  { // ID: 9100
    std::shared_ptr<SandstoneSlabBlock> block = std::make_shared<SandstoneSlabBlock>();
    block->type = SandstoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = SandstoneSlabBlock::WATERLOGGED_FALSE;
    registry[9100] = block;
  }

  { // ID: 9125
    std::shared_ptr<StoneBrickSlabBlock> block = std::make_shared<StoneBrickSlabBlock>();
    block->type = StoneBrickSlabBlock::TYPE_TOP;
    block->waterlogged = StoneBrickSlabBlock::WATERLOGGED_TRUE;
    registry[9125] = block;
  }

  { // ID: 9126
    std::shared_ptr<StoneBrickSlabBlock> block = std::make_shared<StoneBrickSlabBlock>();
    block->type = StoneBrickSlabBlock::TYPE_TOP;
    block->waterlogged = StoneBrickSlabBlock::WATERLOGGED_FALSE;
    registry[9126] = block;
  }

  { // ID: 9127
    std::shared_ptr<StoneBrickSlabBlock> block = std::make_shared<StoneBrickSlabBlock>();
    block->type = StoneBrickSlabBlock::TYPE_BOTTOM;
    block->waterlogged = StoneBrickSlabBlock::WATERLOGGED_TRUE;
    registry[9127] = block;
  }

  { // ID: 9128
    std::shared_ptr<StoneBrickSlabBlock> block = std::make_shared<StoneBrickSlabBlock>();
    block->type = StoneBrickSlabBlock::TYPE_BOTTOM;
    block->waterlogged = StoneBrickSlabBlock::WATERLOGGED_FALSE;
    registry[9128] = block;
  }

  { // ID: 9129
    std::shared_ptr<StoneBrickSlabBlock> block = std::make_shared<StoneBrickSlabBlock>();
    block->type = StoneBrickSlabBlock::TYPE_DOUBLE;
    block->waterlogged = StoneBrickSlabBlock::WATERLOGGED_TRUE;
    registry[9129] = block;
  }

  { // ID: 9130
    std::shared_ptr<StoneBrickSlabBlock> block = std::make_shared<StoneBrickSlabBlock>();
    block->type = StoneBrickSlabBlock::TYPE_DOUBLE;
    block->waterlogged = StoneBrickSlabBlock::WATERLOGGED_FALSE;
    registry[9130] = block;
  }

  { // ID: 9167
    std::shared_ptr<SmoothStoneBlock> block = std::make_shared<SmoothStoneBlock>();
    registry[9167] = block;
  }

  { // ID: 9168
    std::shared_ptr<SmoothSandstoneBlock> block = std::make_shared<SmoothSandstoneBlock>();
    registry[9168] = block;
  }

  { // ID: 9169
    std::shared_ptr<SmoothQuartzBlock> block = std::make_shared<SmoothQuartzBlock>();
    registry[9169] = block;
  }

  { // ID: 9170
    std::shared_ptr<SmoothRedSandstoneBlock> block = std::make_shared<SmoothRedSandstoneBlock>();
    registry[9170] = block;
  }

  { // ID: 9171
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_NORTH;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_TRUE;
    block->open = SpruceFenceGateBlock::OPEN_TRUE;
    block->powered = SpruceFenceGateBlock::POWERED_TRUE;
    registry[9171] = block;
  }

  { // ID: 9172
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_NORTH;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_TRUE;
    block->open = SpruceFenceGateBlock::OPEN_TRUE;
    block->powered = SpruceFenceGateBlock::POWERED_FALSE;
    registry[9172] = block;
  }

  { // ID: 9173
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_NORTH;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_TRUE;
    block->open = SpruceFenceGateBlock::OPEN_FALSE;
    block->powered = SpruceFenceGateBlock::POWERED_TRUE;
    registry[9173] = block;
  }

  { // ID: 9174
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_NORTH;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_TRUE;
    block->open = SpruceFenceGateBlock::OPEN_FALSE;
    block->powered = SpruceFenceGateBlock::POWERED_FALSE;
    registry[9174] = block;
  }

  { // ID: 9175
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_NORTH;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_FALSE;
    block->open = SpruceFenceGateBlock::OPEN_TRUE;
    block->powered = SpruceFenceGateBlock::POWERED_TRUE;
    registry[9175] = block;
  }

  { // ID: 9176
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_NORTH;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_FALSE;
    block->open = SpruceFenceGateBlock::OPEN_TRUE;
    block->powered = SpruceFenceGateBlock::POWERED_FALSE;
    registry[9176] = block;
  }

  { // ID: 9177
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_NORTH;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_FALSE;
    block->open = SpruceFenceGateBlock::OPEN_FALSE;
    block->powered = SpruceFenceGateBlock::POWERED_TRUE;
    registry[9177] = block;
  }

  { // ID: 9178
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_NORTH;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_FALSE;
    block->open = SpruceFenceGateBlock::OPEN_FALSE;
    block->powered = SpruceFenceGateBlock::POWERED_FALSE;
    registry[9178] = block;
  }

  { // ID: 9179
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_SOUTH;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_TRUE;
    block->open = SpruceFenceGateBlock::OPEN_TRUE;
    block->powered = SpruceFenceGateBlock::POWERED_TRUE;
    registry[9179] = block;
  }

  { // ID: 9180
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_SOUTH;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_TRUE;
    block->open = SpruceFenceGateBlock::OPEN_TRUE;
    block->powered = SpruceFenceGateBlock::POWERED_FALSE;
    registry[9180] = block;
  }

  { // ID: 9181
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_SOUTH;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_TRUE;
    block->open = SpruceFenceGateBlock::OPEN_FALSE;
    block->powered = SpruceFenceGateBlock::POWERED_TRUE;
    registry[9181] = block;
  }

  { // ID: 9182
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_SOUTH;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_TRUE;
    block->open = SpruceFenceGateBlock::OPEN_FALSE;
    block->powered = SpruceFenceGateBlock::POWERED_FALSE;
    registry[9182] = block;
  }

  { // ID: 9183
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_SOUTH;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_FALSE;
    block->open = SpruceFenceGateBlock::OPEN_TRUE;
    block->powered = SpruceFenceGateBlock::POWERED_TRUE;
    registry[9183] = block;
  }

  { // ID: 9184
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_SOUTH;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_FALSE;
    block->open = SpruceFenceGateBlock::OPEN_TRUE;
    block->powered = SpruceFenceGateBlock::POWERED_FALSE;
    registry[9184] = block;
  }

  { // ID: 9185
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_SOUTH;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_FALSE;
    block->open = SpruceFenceGateBlock::OPEN_FALSE;
    block->powered = SpruceFenceGateBlock::POWERED_TRUE;
    registry[9185] = block;
  }

  { // ID: 9186
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_SOUTH;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_FALSE;
    block->open = SpruceFenceGateBlock::OPEN_FALSE;
    block->powered = SpruceFenceGateBlock::POWERED_FALSE;
    registry[9186] = block;
  }

  { // ID: 9187
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_WEST;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_TRUE;
    block->open = SpruceFenceGateBlock::OPEN_TRUE;
    block->powered = SpruceFenceGateBlock::POWERED_TRUE;
    registry[9187] = block;
  }

  { // ID: 9188
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_WEST;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_TRUE;
    block->open = SpruceFenceGateBlock::OPEN_TRUE;
    block->powered = SpruceFenceGateBlock::POWERED_FALSE;
    registry[9188] = block;
  }

  { // ID: 9189
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_WEST;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_TRUE;
    block->open = SpruceFenceGateBlock::OPEN_FALSE;
    block->powered = SpruceFenceGateBlock::POWERED_TRUE;
    registry[9189] = block;
  }

  { // ID: 9190
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_WEST;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_TRUE;
    block->open = SpruceFenceGateBlock::OPEN_FALSE;
    block->powered = SpruceFenceGateBlock::POWERED_FALSE;
    registry[9190] = block;
  }

  { // ID: 9191
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_WEST;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_FALSE;
    block->open = SpruceFenceGateBlock::OPEN_TRUE;
    block->powered = SpruceFenceGateBlock::POWERED_TRUE;
    registry[9191] = block;
  }

  { // ID: 9192
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_WEST;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_FALSE;
    block->open = SpruceFenceGateBlock::OPEN_TRUE;
    block->powered = SpruceFenceGateBlock::POWERED_FALSE;
    registry[9192] = block;
  }

  { // ID: 9193
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_WEST;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_FALSE;
    block->open = SpruceFenceGateBlock::OPEN_FALSE;
    block->powered = SpruceFenceGateBlock::POWERED_TRUE;
    registry[9193] = block;
  }

  { // ID: 9194
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_WEST;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_FALSE;
    block->open = SpruceFenceGateBlock::OPEN_FALSE;
    block->powered = SpruceFenceGateBlock::POWERED_FALSE;
    registry[9194] = block;
  }

  { // ID: 9195
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_EAST;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_TRUE;
    block->open = SpruceFenceGateBlock::OPEN_TRUE;
    block->powered = SpruceFenceGateBlock::POWERED_TRUE;
    registry[9195] = block;
  }

  { // ID: 9196
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_EAST;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_TRUE;
    block->open = SpruceFenceGateBlock::OPEN_TRUE;
    block->powered = SpruceFenceGateBlock::POWERED_FALSE;
    registry[9196] = block;
  }

  { // ID: 9197
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_EAST;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_TRUE;
    block->open = SpruceFenceGateBlock::OPEN_FALSE;
    block->powered = SpruceFenceGateBlock::POWERED_TRUE;
    registry[9197] = block;
  }

  { // ID: 9198
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_EAST;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_TRUE;
    block->open = SpruceFenceGateBlock::OPEN_FALSE;
    block->powered = SpruceFenceGateBlock::POWERED_FALSE;
    registry[9198] = block;
  }

  { // ID: 9199
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_EAST;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_FALSE;
    block->open = SpruceFenceGateBlock::OPEN_TRUE;
    block->powered = SpruceFenceGateBlock::POWERED_TRUE;
    registry[9199] = block;
  }

  { // ID: 9200
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_EAST;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_FALSE;
    block->open = SpruceFenceGateBlock::OPEN_TRUE;
    block->powered = SpruceFenceGateBlock::POWERED_FALSE;
    registry[9200] = block;
  }

  { // ID: 9201
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_EAST;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_FALSE;
    block->open = SpruceFenceGateBlock::OPEN_FALSE;
    block->powered = SpruceFenceGateBlock::POWERED_TRUE;
    registry[9201] = block;
  }

  { // ID: 9202
    std::shared_ptr<SpruceFenceGateBlock> block = std::make_shared<SpruceFenceGateBlock>();
    block->facing = SpruceFenceGateBlock::FACING_EAST;
    block->in_wall = SpruceFenceGateBlock::IN_WALL_FALSE;
    block->open = SpruceFenceGateBlock::OPEN_FALSE;
    block->powered = SpruceFenceGateBlock::POWERED_FALSE;
    registry[9202] = block;
  }

  { // ID: 9363
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_TRUE;
    block->north = SpruceFenceBlock::NORTH_TRUE;
    block->south = SpruceFenceBlock::SOUTH_TRUE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_TRUE;
    block->west = SpruceFenceBlock::WEST_TRUE;
    registry[9363] = block;
  }

  { // ID: 9364
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_TRUE;
    block->north = SpruceFenceBlock::NORTH_TRUE;
    block->south = SpruceFenceBlock::SOUTH_TRUE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_TRUE;
    block->west = SpruceFenceBlock::WEST_FALSE;
    registry[9364] = block;
  }

  { // ID: 9365
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_TRUE;
    block->north = SpruceFenceBlock::NORTH_TRUE;
    block->south = SpruceFenceBlock::SOUTH_TRUE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_FALSE;
    block->west = SpruceFenceBlock::WEST_TRUE;
    registry[9365] = block;
  }

  { // ID: 9366
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_TRUE;
    block->north = SpruceFenceBlock::NORTH_TRUE;
    block->south = SpruceFenceBlock::SOUTH_TRUE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_FALSE;
    block->west = SpruceFenceBlock::WEST_FALSE;
    registry[9366] = block;
  }

  { // ID: 9367
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_TRUE;
    block->north = SpruceFenceBlock::NORTH_TRUE;
    block->south = SpruceFenceBlock::SOUTH_FALSE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_TRUE;
    block->west = SpruceFenceBlock::WEST_TRUE;
    registry[9367] = block;
  }

  { // ID: 9368
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_TRUE;
    block->north = SpruceFenceBlock::NORTH_TRUE;
    block->south = SpruceFenceBlock::SOUTH_FALSE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_TRUE;
    block->west = SpruceFenceBlock::WEST_FALSE;
    registry[9368] = block;
  }

  { // ID: 9369
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_TRUE;
    block->north = SpruceFenceBlock::NORTH_TRUE;
    block->south = SpruceFenceBlock::SOUTH_FALSE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_FALSE;
    block->west = SpruceFenceBlock::WEST_TRUE;
    registry[9369] = block;
  }

  { // ID: 9370
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_TRUE;
    block->north = SpruceFenceBlock::NORTH_TRUE;
    block->south = SpruceFenceBlock::SOUTH_FALSE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_FALSE;
    block->west = SpruceFenceBlock::WEST_FALSE;
    registry[9370] = block;
  }

  { // ID: 9371
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_TRUE;
    block->north = SpruceFenceBlock::NORTH_FALSE;
    block->south = SpruceFenceBlock::SOUTH_TRUE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_TRUE;
    block->west = SpruceFenceBlock::WEST_TRUE;
    registry[9371] = block;
  }

  { // ID: 9372
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_TRUE;
    block->north = SpruceFenceBlock::NORTH_FALSE;
    block->south = SpruceFenceBlock::SOUTH_TRUE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_TRUE;
    block->west = SpruceFenceBlock::WEST_FALSE;
    registry[9372] = block;
  }

  { // ID: 9373
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_TRUE;
    block->north = SpruceFenceBlock::NORTH_FALSE;
    block->south = SpruceFenceBlock::SOUTH_TRUE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_FALSE;
    block->west = SpruceFenceBlock::WEST_TRUE;
    registry[9373] = block;
  }

  { // ID: 9374
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_TRUE;
    block->north = SpruceFenceBlock::NORTH_FALSE;
    block->south = SpruceFenceBlock::SOUTH_TRUE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_FALSE;
    block->west = SpruceFenceBlock::WEST_FALSE;
    registry[9374] = block;
  }

  { // ID: 9375
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_TRUE;
    block->north = SpruceFenceBlock::NORTH_FALSE;
    block->south = SpruceFenceBlock::SOUTH_FALSE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_TRUE;
    block->west = SpruceFenceBlock::WEST_TRUE;
    registry[9375] = block;
  }

  { // ID: 9376
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_TRUE;
    block->north = SpruceFenceBlock::NORTH_FALSE;
    block->south = SpruceFenceBlock::SOUTH_FALSE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_TRUE;
    block->west = SpruceFenceBlock::WEST_FALSE;
    registry[9376] = block;
  }

  { // ID: 9377
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_TRUE;
    block->north = SpruceFenceBlock::NORTH_FALSE;
    block->south = SpruceFenceBlock::SOUTH_FALSE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_FALSE;
    block->west = SpruceFenceBlock::WEST_TRUE;
    registry[9377] = block;
  }

  { // ID: 9378
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_TRUE;
    block->north = SpruceFenceBlock::NORTH_FALSE;
    block->south = SpruceFenceBlock::SOUTH_FALSE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_FALSE;
    block->west = SpruceFenceBlock::WEST_FALSE;
    registry[9378] = block;
  }

  { // ID: 9379
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_FALSE;
    block->north = SpruceFenceBlock::NORTH_TRUE;
    block->south = SpruceFenceBlock::SOUTH_TRUE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_TRUE;
    block->west = SpruceFenceBlock::WEST_TRUE;
    registry[9379] = block;
  }

  { // ID: 9380
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_FALSE;
    block->north = SpruceFenceBlock::NORTH_TRUE;
    block->south = SpruceFenceBlock::SOUTH_TRUE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_TRUE;
    block->west = SpruceFenceBlock::WEST_FALSE;
    registry[9380] = block;
  }

  { // ID: 9381
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_FALSE;
    block->north = SpruceFenceBlock::NORTH_TRUE;
    block->south = SpruceFenceBlock::SOUTH_TRUE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_FALSE;
    block->west = SpruceFenceBlock::WEST_TRUE;
    registry[9381] = block;
  }

  { // ID: 9382
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_FALSE;
    block->north = SpruceFenceBlock::NORTH_TRUE;
    block->south = SpruceFenceBlock::SOUTH_TRUE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_FALSE;
    block->west = SpruceFenceBlock::WEST_FALSE;
    registry[9382] = block;
  }

  { // ID: 9383
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_FALSE;
    block->north = SpruceFenceBlock::NORTH_TRUE;
    block->south = SpruceFenceBlock::SOUTH_FALSE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_TRUE;
    block->west = SpruceFenceBlock::WEST_TRUE;
    registry[9383] = block;
  }

  { // ID: 9384
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_FALSE;
    block->north = SpruceFenceBlock::NORTH_TRUE;
    block->south = SpruceFenceBlock::SOUTH_FALSE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_TRUE;
    block->west = SpruceFenceBlock::WEST_FALSE;
    registry[9384] = block;
  }

  { // ID: 9385
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_FALSE;
    block->north = SpruceFenceBlock::NORTH_TRUE;
    block->south = SpruceFenceBlock::SOUTH_FALSE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_FALSE;
    block->west = SpruceFenceBlock::WEST_TRUE;
    registry[9385] = block;
  }

  { // ID: 9386
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_FALSE;
    block->north = SpruceFenceBlock::NORTH_TRUE;
    block->south = SpruceFenceBlock::SOUTH_FALSE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_FALSE;
    block->west = SpruceFenceBlock::WEST_FALSE;
    registry[9386] = block;
  }

  { // ID: 9387
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_FALSE;
    block->north = SpruceFenceBlock::NORTH_FALSE;
    block->south = SpruceFenceBlock::SOUTH_TRUE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_TRUE;
    block->west = SpruceFenceBlock::WEST_TRUE;
    registry[9387] = block;
  }

  { // ID: 9388
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_FALSE;
    block->north = SpruceFenceBlock::NORTH_FALSE;
    block->south = SpruceFenceBlock::SOUTH_TRUE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_TRUE;
    block->west = SpruceFenceBlock::WEST_FALSE;
    registry[9388] = block;
  }

  { // ID: 9389
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_FALSE;
    block->north = SpruceFenceBlock::NORTH_FALSE;
    block->south = SpruceFenceBlock::SOUTH_TRUE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_FALSE;
    block->west = SpruceFenceBlock::WEST_TRUE;
    registry[9389] = block;
  }

  { // ID: 9390
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_FALSE;
    block->north = SpruceFenceBlock::NORTH_FALSE;
    block->south = SpruceFenceBlock::SOUTH_TRUE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_FALSE;
    block->west = SpruceFenceBlock::WEST_FALSE;
    registry[9390] = block;
  }

  { // ID: 9391
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_FALSE;
    block->north = SpruceFenceBlock::NORTH_FALSE;
    block->south = SpruceFenceBlock::SOUTH_FALSE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_TRUE;
    block->west = SpruceFenceBlock::WEST_TRUE;
    registry[9391] = block;
  }

  { // ID: 9392
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_FALSE;
    block->north = SpruceFenceBlock::NORTH_FALSE;
    block->south = SpruceFenceBlock::SOUTH_FALSE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_TRUE;
    block->west = SpruceFenceBlock::WEST_FALSE;
    registry[9392] = block;
  }

  { // ID: 9393
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_FALSE;
    block->north = SpruceFenceBlock::NORTH_FALSE;
    block->south = SpruceFenceBlock::SOUTH_FALSE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_FALSE;
    block->west = SpruceFenceBlock::WEST_TRUE;
    registry[9393] = block;
  }

  { // ID: 9394
    std::shared_ptr<SpruceFenceBlock> block = std::make_shared<SpruceFenceBlock>();
    block->east = SpruceFenceBlock::EAST_FALSE;
    block->north = SpruceFenceBlock::NORTH_FALSE;
    block->south = SpruceFenceBlock::SOUTH_FALSE;
    block->waterlogged = SpruceFenceBlock::WATERLOGGED_FALSE;
    block->west = SpruceFenceBlock::WEST_FALSE;
    registry[9394] = block;
  }

  { // ID: 9555
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_NORTH;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9555] = block;
  }

  { // ID: 9556
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_NORTH;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9556] = block;
  }

  { // ID: 9557
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_NORTH;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9557] = block;
  }

  { // ID: 9558
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_NORTH;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9558] = block;
  }

  { // ID: 9559
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_NORTH;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9559] = block;
  }

  { // ID: 9560
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_NORTH;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9560] = block;
  }

  { // ID: 9561
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_NORTH;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9561] = block;
  }

  { // ID: 9562
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_NORTH;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9562] = block;
  }

  { // ID: 9563
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_NORTH;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9563] = block;
  }

  { // ID: 9564
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_NORTH;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9564] = block;
  }

  { // ID: 9565
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_NORTH;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9565] = block;
  }

  { // ID: 9566
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_NORTH;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9566] = block;
  }

  { // ID: 9567
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_NORTH;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9567] = block;
  }

  { // ID: 9568
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_NORTH;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9568] = block;
  }

  { // ID: 9569
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_NORTH;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9569] = block;
  }

  { // ID: 9570
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_NORTH;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9570] = block;
  }

  { // ID: 9571
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_SOUTH;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9571] = block;
  }

  { // ID: 9572
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_SOUTH;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9572] = block;
  }

  { // ID: 9573
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_SOUTH;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9573] = block;
  }

  { // ID: 9574
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_SOUTH;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9574] = block;
  }

  { // ID: 9575
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_SOUTH;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9575] = block;
  }

  { // ID: 9576
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_SOUTH;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9576] = block;
  }

  { // ID: 9577
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_SOUTH;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9577] = block;
  }

  { // ID: 9578
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_SOUTH;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9578] = block;
  }

  { // ID: 9579
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_SOUTH;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9579] = block;
  }

  { // ID: 9580
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_SOUTH;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9580] = block;
  }

  { // ID: 9581
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_SOUTH;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9581] = block;
  }

  { // ID: 9582
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_SOUTH;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9582] = block;
  }

  { // ID: 9583
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_SOUTH;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9583] = block;
  }

  { // ID: 9584
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_SOUTH;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9584] = block;
  }

  { // ID: 9585
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_SOUTH;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9585] = block;
  }

  { // ID: 9586
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_SOUTH;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9586] = block;
  }

  { // ID: 9587
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_WEST;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9587] = block;
  }

  { // ID: 9588
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_WEST;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9588] = block;
  }

  { // ID: 9589
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_WEST;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9589] = block;
  }

  { // ID: 9590
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_WEST;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9590] = block;
  }

  { // ID: 9591
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_WEST;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9591] = block;
  }

  { // ID: 9592
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_WEST;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9592] = block;
  }

  { // ID: 9593
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_WEST;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9593] = block;
  }

  { // ID: 9594
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_WEST;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9594] = block;
  }

  { // ID: 9595
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_WEST;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9595] = block;
  }

  { // ID: 9596
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_WEST;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9596] = block;
  }

  { // ID: 9597
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_WEST;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9597] = block;
  }

  { // ID: 9598
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_WEST;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9598] = block;
  }

  { // ID: 9599
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_WEST;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9599] = block;
  }

  { // ID: 9600
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_WEST;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9600] = block;
  }

  { // ID: 9601
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_WEST;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9601] = block;
  }

  { // ID: 9602
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_WEST;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9602] = block;
  }

  { // ID: 9603
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_EAST;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9603] = block;
  }

  { // ID: 9604
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_EAST;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9604] = block;
  }

  { // ID: 9605
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_EAST;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9605] = block;
  }

  { // ID: 9606
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_EAST;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9606] = block;
  }

  { // ID: 9607
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_EAST;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9607] = block;
  }

  { // ID: 9608
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_EAST;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9608] = block;
  }

  { // ID: 9609
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_EAST;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9609] = block;
  }

  { // ID: 9610
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_EAST;
    block->half = SpruceDoorBlock::HALF_UPPER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9610] = block;
  }

  { // ID: 9611
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_EAST;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9611] = block;
  }

  { // ID: 9612
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_EAST;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9612] = block;
  }

  { // ID: 9613
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_EAST;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9613] = block;
  }

  { // ID: 9614
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_EAST;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_LEFT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9614] = block;
  }

  { // ID: 9615
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_EAST;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9615] = block;
  }

  { // ID: 9616
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_EAST;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_TRUE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9616] = block;
  }

  { // ID: 9617
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_EAST;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_TRUE;
    registry[9617] = block;
  }

  { // ID: 9618
    std::shared_ptr<SpruceDoorBlock> block = std::make_shared<SpruceDoorBlock>();
    block->facing = SpruceDoorBlock::FACING_EAST;
    block->half = SpruceDoorBlock::HALF_LOWER;
    block->hinge = SpruceDoorBlock::HINGE_RIGHT;
    block->open = SpruceDoorBlock::OPEN_FALSE;
    block->powered = SpruceDoorBlock::POWERED_FALSE;
    registry[9618] = block;
  }

  { // ID: 10140
    std::shared_ptr<StructureVoidBlock> block = std::make_shared<StructureVoidBlock>();
    registry[10140] = block;
  }

  { // ID: 10153
    std::shared_ptr<ShulkerBoxBlock> block = std::make_shared<ShulkerBoxBlock>();
    block->facing = ShulkerBoxBlock::FACING_NORTH;
    registry[10153] = block;
  }

  { // ID: 10154
    std::shared_ptr<ShulkerBoxBlock> block = std::make_shared<ShulkerBoxBlock>();
    block->facing = ShulkerBoxBlock::FACING_EAST;
    registry[10154] = block;
  }

  { // ID: 10155
    std::shared_ptr<ShulkerBoxBlock> block = std::make_shared<ShulkerBoxBlock>();
    block->facing = ShulkerBoxBlock::FACING_SOUTH;
    registry[10155] = block;
  }

  { // ID: 10156
    std::shared_ptr<ShulkerBoxBlock> block = std::make_shared<ShulkerBoxBlock>();
    block->facing = ShulkerBoxBlock::FACING_WEST;
    registry[10156] = block;
  }

  { // ID: 10157
    std::shared_ptr<ShulkerBoxBlock> block = std::make_shared<ShulkerBoxBlock>();
    block->facing = ShulkerBoxBlock::FACING_UP;
    registry[10157] = block;
  }

  { // ID: 10158
    std::shared_ptr<ShulkerBoxBlock> block = std::make_shared<ShulkerBoxBlock>();
    block->facing = ShulkerBoxBlock::FACING_DOWN;
    registry[10158] = block;
  }

  { // ID: 10521
    std::shared_ptr<SeaPickleBlock> block = std::make_shared<SeaPickleBlock>();
    block->pickles = SeaPickleBlock::PICKLES_1;
    block->waterlogged = SeaPickleBlock::WATERLOGGED_TRUE;
    registry[10521] = block;
  }

  { // ID: 10522
    std::shared_ptr<SeaPickleBlock> block = std::make_shared<SeaPickleBlock>();
    block->pickles = SeaPickleBlock::PICKLES_1;
    block->waterlogged = SeaPickleBlock::WATERLOGGED_FALSE;
    registry[10522] = block;
  }

  { // ID: 10523
    std::shared_ptr<SeaPickleBlock> block = std::make_shared<SeaPickleBlock>();
    block->pickles = SeaPickleBlock::PICKLES_2;
    block->waterlogged = SeaPickleBlock::WATERLOGGED_TRUE;
    registry[10523] = block;
  }

  { // ID: 10524
    std::shared_ptr<SeaPickleBlock> block = std::make_shared<SeaPickleBlock>();
    block->pickles = SeaPickleBlock::PICKLES_2;
    block->waterlogged = SeaPickleBlock::WATERLOGGED_FALSE;
    registry[10524] = block;
  }

  { // ID: 10525
    std::shared_ptr<SeaPickleBlock> block = std::make_shared<SeaPickleBlock>();
    block->pickles = SeaPickleBlock::PICKLES_3;
    block->waterlogged = SeaPickleBlock::WATERLOGGED_TRUE;
    registry[10525] = block;
  }

  { // ID: 10526
    std::shared_ptr<SeaPickleBlock> block = std::make_shared<SeaPickleBlock>();
    block->pickles = SeaPickleBlock::PICKLES_3;
    block->waterlogged = SeaPickleBlock::WATERLOGGED_FALSE;
    registry[10526] = block;
  }

  { // ID: 10527
    std::shared_ptr<SeaPickleBlock> block = std::make_shared<SeaPickleBlock>();
    block->pickles = SeaPickleBlock::PICKLES_4;
    block->waterlogged = SeaPickleBlock::WATERLOGGED_TRUE;
    registry[10527] = block;
  }

  { // ID: 10528
    std::shared_ptr<SeaPickleBlock> block = std::make_shared<SeaPickleBlock>();
    block->pickles = SeaPickleBlock::PICKLES_4;
    block->waterlogged = SeaPickleBlock::WATERLOGGED_FALSE;
    registry[10528] = block;
  }

  { // ID: 10630
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10630] = block;
  }

  { // ID: 10631
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10631] = block;
  }

  { // ID: 10632
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10632] = block;
  }

  { // ID: 10633
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10633] = block;
  }

  { // ID: 10634
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10634] = block;
  }

  { // ID: 10635
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10635] = block;
  }

  { // ID: 10636
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10636] = block;
  }

  { // ID: 10637
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10637] = block;
  }

  { // ID: 10638
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10638] = block;
  }

  { // ID: 10639
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10639] = block;
  }

  { // ID: 10640
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10640] = block;
  }

  { // ID: 10641
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10641] = block;
  }

  { // ID: 10642
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10642] = block;
  }

  { // ID: 10643
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10643] = block;
  }

  { // ID: 10644
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10644] = block;
  }

  { // ID: 10645
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10645] = block;
  }

  { // ID: 10646
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10646] = block;
  }

  { // ID: 10647
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10647] = block;
  }

  { // ID: 10648
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10648] = block;
  }

  { // ID: 10649
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10649] = block;
  }

  { // ID: 10650
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10650] = block;
  }

  { // ID: 10651
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10651] = block;
  }

  { // ID: 10652
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10652] = block;
  }

  { // ID: 10653
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10653] = block;
  }

  { // ID: 10654
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10654] = block;
  }

  { // ID: 10655
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10655] = block;
  }

  { // ID: 10656
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10656] = block;
  }

  { // ID: 10657
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10657] = block;
  }

  { // ID: 10658
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10658] = block;
  }

  { // ID: 10659
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10659] = block;
  }

  { // ID: 10660
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10660] = block;
  }

  { // ID: 10661
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10661] = block;
  }

  { // ID: 10662
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10662] = block;
  }

  { // ID: 10663
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10663] = block;
  }

  { // ID: 10664
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10664] = block;
  }

  { // ID: 10665
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10665] = block;
  }

  { // ID: 10666
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10666] = block;
  }

  { // ID: 10667
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10667] = block;
  }

  { // ID: 10668
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10668] = block;
  }

  { // ID: 10669
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10669] = block;
  }

  { // ID: 10670
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10670] = block;
  }

  { // ID: 10671
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10671] = block;
  }

  { // ID: 10672
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10672] = block;
  }

  { // ID: 10673
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10673] = block;
  }

  { // ID: 10674
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10674] = block;
  }

  { // ID: 10675
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10675] = block;
  }

  { // ID: 10676
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10676] = block;
  }

  { // ID: 10677
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10677] = block;
  }

  { // ID: 10678
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10678] = block;
  }

  { // ID: 10679
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10679] = block;
  }

  { // ID: 10680
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10680] = block;
  }

  { // ID: 10681
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10681] = block;
  }

  { // ID: 10682
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10682] = block;
  }

  { // ID: 10683
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10683] = block;
  }

  { // ID: 10684
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10684] = block;
  }

  { // ID: 10685
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10685] = block;
  }

  { // ID: 10686
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10686] = block;
  }

  { // ID: 10687
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10687] = block;
  }

  { // ID: 10688
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10688] = block;
  }

  { // ID: 10689
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10689] = block;
  }

  { // ID: 10690
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10690] = block;
  }

  { // ID: 10691
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10691] = block;
  }

  { // ID: 10692
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10692] = block;
  }

  { // ID: 10693
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10693] = block;
  }

  { // ID: 10694
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10694] = block;
  }

  { // ID: 10695
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10695] = block;
  }

  { // ID: 10696
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10696] = block;
  }

  { // ID: 10697
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10697] = block;
  }

  { // ID: 10698
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10698] = block;
  }

  { // ID: 10699
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10699] = block;
  }

  { // ID: 10700
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10700] = block;
  }

  { // ID: 10701
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10701] = block;
  }

  { // ID: 10702
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10702] = block;
  }

  { // ID: 10703
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10703] = block;
  }

  { // ID: 10704
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10704] = block;
  }

  { // ID: 10705
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10705] = block;
  }

  { // ID: 10706
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10706] = block;
  }

  { // ID: 10707
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10707] = block;
  }

  { // ID: 10708
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[10708] = block;
  }

  { // ID: 10709
    std::shared_ptr<SmoothRedSandstoneStairsBlock> block = std::make_shared<SmoothRedSandstoneStairsBlock>();
    block->facing = SmoothRedSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothRedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothRedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothRedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[10709] = block;
  }

  { // ID: 11030
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_NORTH;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11030] = block;
  }

  { // ID: 11031
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_NORTH;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11031] = block;
  }

  { // ID: 11032
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_NORTH;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11032] = block;
  }

  { // ID: 11033
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_NORTH;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11033] = block;
  }

  { // ID: 11034
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_NORTH;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11034] = block;
  }

  { // ID: 11035
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_NORTH;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11035] = block;
  }

  { // ID: 11036
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_NORTH;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11036] = block;
  }

  { // ID: 11037
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_NORTH;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11037] = block;
  }

  { // ID: 11038
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_NORTH;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11038] = block;
  }

  { // ID: 11039
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_NORTH;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11039] = block;
  }

  { // ID: 11040
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_NORTH;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11040] = block;
  }

  { // ID: 11041
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_NORTH;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11041] = block;
  }

  { // ID: 11042
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_NORTH;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11042] = block;
  }

  { // ID: 11043
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_NORTH;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11043] = block;
  }

  { // ID: 11044
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_NORTH;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11044] = block;
  }

  { // ID: 11045
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_NORTH;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11045] = block;
  }

  { // ID: 11046
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_NORTH;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11046] = block;
  }

  { // ID: 11047
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_NORTH;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11047] = block;
  }

  { // ID: 11048
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_NORTH;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11048] = block;
  }

  { // ID: 11049
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_NORTH;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11049] = block;
  }

  { // ID: 11050
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_SOUTH;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11050] = block;
  }

  { // ID: 11051
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_SOUTH;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11051] = block;
  }

  { // ID: 11052
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_SOUTH;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11052] = block;
  }

  { // ID: 11053
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_SOUTH;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11053] = block;
  }

  { // ID: 11054
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_SOUTH;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11054] = block;
  }

  { // ID: 11055
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_SOUTH;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11055] = block;
  }

  { // ID: 11056
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_SOUTH;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11056] = block;
  }

  { // ID: 11057
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_SOUTH;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11057] = block;
  }

  { // ID: 11058
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_SOUTH;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11058] = block;
  }

  { // ID: 11059
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_SOUTH;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11059] = block;
  }

  { // ID: 11060
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_SOUTH;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11060] = block;
  }

  { // ID: 11061
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_SOUTH;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11061] = block;
  }

  { // ID: 11062
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_SOUTH;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11062] = block;
  }

  { // ID: 11063
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_SOUTH;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11063] = block;
  }

  { // ID: 11064
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_SOUTH;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11064] = block;
  }

  { // ID: 11065
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_SOUTH;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11065] = block;
  }

  { // ID: 11066
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_SOUTH;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11066] = block;
  }

  { // ID: 11067
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_SOUTH;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11067] = block;
  }

  { // ID: 11068
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_SOUTH;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11068] = block;
  }

  { // ID: 11069
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_SOUTH;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11069] = block;
  }

  { // ID: 11070
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_WEST;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11070] = block;
  }

  { // ID: 11071
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_WEST;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11071] = block;
  }

  { // ID: 11072
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_WEST;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11072] = block;
  }

  { // ID: 11073
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_WEST;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11073] = block;
  }

  { // ID: 11074
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_WEST;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11074] = block;
  }

  { // ID: 11075
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_WEST;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11075] = block;
  }

  { // ID: 11076
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_WEST;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11076] = block;
  }

  { // ID: 11077
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_WEST;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11077] = block;
  }

  { // ID: 11078
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_WEST;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11078] = block;
  }

  { // ID: 11079
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_WEST;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11079] = block;
  }

  { // ID: 11080
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_WEST;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11080] = block;
  }

  { // ID: 11081
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_WEST;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11081] = block;
  }

  { // ID: 11082
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_WEST;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11082] = block;
  }

  { // ID: 11083
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_WEST;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11083] = block;
  }

  { // ID: 11084
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_WEST;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11084] = block;
  }

  { // ID: 11085
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_WEST;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11085] = block;
  }

  { // ID: 11086
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_WEST;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11086] = block;
  }

  { // ID: 11087
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_WEST;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11087] = block;
  }

  { // ID: 11088
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_WEST;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11088] = block;
  }

  { // ID: 11089
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_WEST;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11089] = block;
  }

  { // ID: 11090
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_EAST;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11090] = block;
  }

  { // ID: 11091
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_EAST;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11091] = block;
  }

  { // ID: 11092
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_EAST;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11092] = block;
  }

  { // ID: 11093
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_EAST;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11093] = block;
  }

  { // ID: 11094
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_EAST;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11094] = block;
  }

  { // ID: 11095
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_EAST;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11095] = block;
  }

  { // ID: 11096
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_EAST;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11096] = block;
  }

  { // ID: 11097
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_EAST;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11097] = block;
  }

  { // ID: 11098
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_EAST;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11098] = block;
  }

  { // ID: 11099
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_EAST;
    block->half = StoneStairsBlock::HALF_TOP;
    block->shape = StoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11099] = block;
  }

  { // ID: 11100
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_EAST;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11100] = block;
  }

  { // ID: 11101
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_EAST;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11101] = block;
  }

  { // ID: 11102
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_EAST;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11102] = block;
  }

  { // ID: 11103
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_EAST;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11103] = block;
  }

  { // ID: 11104
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_EAST;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11104] = block;
  }

  { // ID: 11105
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_EAST;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11105] = block;
  }

  { // ID: 11106
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_EAST;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11106] = block;
  }

  { // ID: 11107
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_EAST;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11107] = block;
  }

  { // ID: 11108
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_EAST;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_TRUE;
    registry[11108] = block;
  }

  { // ID: 11109
    std::shared_ptr<StoneStairsBlock> block = std::make_shared<StoneStairsBlock>();
    block->facing = StoneStairsBlock::FACING_EAST;
    block->half = StoneStairsBlock::HALF_BOTTOM;
    block->shape = StoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = StoneStairsBlock::WATERLOGGED_FALSE;
    registry[11109] = block;
  }

  { // ID: 11110
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11110] = block;
  }

  { // ID: 11111
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11111] = block;
  }

  { // ID: 11112
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11112] = block;
  }

  { // ID: 11113
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11113] = block;
  }

  { // ID: 11114
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11114] = block;
  }

  { // ID: 11115
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11115] = block;
  }

  { // ID: 11116
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11116] = block;
  }

  { // ID: 11117
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11117] = block;
  }

  { // ID: 11118
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11118] = block;
  }

  { // ID: 11119
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11119] = block;
  }

  { // ID: 11120
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11120] = block;
  }

  { // ID: 11121
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11121] = block;
  }

  { // ID: 11122
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11122] = block;
  }

  { // ID: 11123
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11123] = block;
  }

  { // ID: 11124
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11124] = block;
  }

  { // ID: 11125
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11125] = block;
  }

  { // ID: 11126
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11126] = block;
  }

  { // ID: 11127
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11127] = block;
  }

  { // ID: 11128
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11128] = block;
  }

  { // ID: 11129
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_NORTH;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11129] = block;
  }

  { // ID: 11130
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11130] = block;
  }

  { // ID: 11131
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11131] = block;
  }

  { // ID: 11132
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11132] = block;
  }

  { // ID: 11133
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11133] = block;
  }

  { // ID: 11134
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11134] = block;
  }

  { // ID: 11135
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11135] = block;
  }

  { // ID: 11136
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11136] = block;
  }

  { // ID: 11137
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11137] = block;
  }

  { // ID: 11138
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11138] = block;
  }

  { // ID: 11139
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11139] = block;
  }

  { // ID: 11140
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11140] = block;
  }

  { // ID: 11141
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11141] = block;
  }

  { // ID: 11142
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11142] = block;
  }

  { // ID: 11143
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11143] = block;
  }

  { // ID: 11144
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11144] = block;
  }

  { // ID: 11145
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11145] = block;
  }

  { // ID: 11146
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11146] = block;
  }

  { // ID: 11147
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11147] = block;
  }

  { // ID: 11148
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11148] = block;
  }

  { // ID: 11149
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_SOUTH;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11149] = block;
  }

  { // ID: 11150
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11150] = block;
  }

  { // ID: 11151
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11151] = block;
  }

  { // ID: 11152
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11152] = block;
  }

  { // ID: 11153
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11153] = block;
  }

  { // ID: 11154
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11154] = block;
  }

  { // ID: 11155
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11155] = block;
  }

  { // ID: 11156
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11156] = block;
  }

  { // ID: 11157
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11157] = block;
  }

  { // ID: 11158
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11158] = block;
  }

  { // ID: 11159
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11159] = block;
  }

  { // ID: 11160
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11160] = block;
  }

  { // ID: 11161
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11161] = block;
  }

  { // ID: 11162
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11162] = block;
  }

  { // ID: 11163
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11163] = block;
  }

  { // ID: 11164
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11164] = block;
  }

  { // ID: 11165
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11165] = block;
  }

  { // ID: 11166
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11166] = block;
  }

  { // ID: 11167
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11167] = block;
  }

  { // ID: 11168
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11168] = block;
  }

  { // ID: 11169
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_WEST;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11169] = block;
  }

  { // ID: 11170
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11170] = block;
  }

  { // ID: 11171
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11171] = block;
  }

  { // ID: 11172
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11172] = block;
  }

  { // ID: 11173
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11173] = block;
  }

  { // ID: 11174
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11174] = block;
  }

  { // ID: 11175
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11175] = block;
  }

  { // ID: 11176
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11176] = block;
  }

  { // ID: 11177
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11177] = block;
  }

  { // ID: 11178
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11178] = block;
  }

  { // ID: 11179
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothSandstoneStairsBlock::HALF_TOP;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11179] = block;
  }

  { // ID: 11180
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11180] = block;
  }

  { // ID: 11181
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11181] = block;
  }

  { // ID: 11182
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11182] = block;
  }

  { // ID: 11183
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11183] = block;
  }

  { // ID: 11184
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11184] = block;
  }

  { // ID: 11185
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11185] = block;
  }

  { // ID: 11186
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11186] = block;
  }

  { // ID: 11187
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11187] = block;
  }

  { // ID: 11188
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[11188] = block;
  }

  { // ID: 11189
    std::shared_ptr<SmoothSandstoneStairsBlock> block = std::make_shared<SmoothSandstoneStairsBlock>();
    block->facing = SmoothSandstoneStairsBlock::FACING_EAST;
    block->half = SmoothSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = SmoothSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[11189] = block;
  }

  { // ID: 11190
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_NORTH;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11190] = block;
  }

  { // ID: 11191
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_NORTH;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11191] = block;
  }

  { // ID: 11192
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_NORTH;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11192] = block;
  }

  { // ID: 11193
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_NORTH;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11193] = block;
  }

  { // ID: 11194
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_NORTH;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11194] = block;
  }

  { // ID: 11195
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_NORTH;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11195] = block;
  }

  { // ID: 11196
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_NORTH;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11196] = block;
  }

  { // ID: 11197
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_NORTH;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11197] = block;
  }

  { // ID: 11198
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_NORTH;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11198] = block;
  }

  { // ID: 11199
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_NORTH;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11199] = block;
  }

  { // ID: 11200
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_NORTH;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11200] = block;
  }

  { // ID: 11201
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_NORTH;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11201] = block;
  }

  { // ID: 11202
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_NORTH;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11202] = block;
  }

  { // ID: 11203
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_NORTH;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11203] = block;
  }

  { // ID: 11204
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_NORTH;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11204] = block;
  }

  { // ID: 11205
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_NORTH;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11205] = block;
  }

  { // ID: 11206
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_NORTH;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11206] = block;
  }

  { // ID: 11207
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_NORTH;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11207] = block;
  }

  { // ID: 11208
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_NORTH;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11208] = block;
  }

  { // ID: 11209
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_NORTH;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11209] = block;
  }

  { // ID: 11210
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_SOUTH;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11210] = block;
  }

  { // ID: 11211
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_SOUTH;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11211] = block;
  }

  { // ID: 11212
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_SOUTH;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11212] = block;
  }

  { // ID: 11213
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_SOUTH;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11213] = block;
  }

  { // ID: 11214
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_SOUTH;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11214] = block;
  }

  { // ID: 11215
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_SOUTH;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11215] = block;
  }

  { // ID: 11216
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_SOUTH;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11216] = block;
  }

  { // ID: 11217
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_SOUTH;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11217] = block;
  }

  { // ID: 11218
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_SOUTH;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11218] = block;
  }

  { // ID: 11219
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_SOUTH;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11219] = block;
  }

  { // ID: 11220
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_SOUTH;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11220] = block;
  }

  { // ID: 11221
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_SOUTH;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11221] = block;
  }

  { // ID: 11222
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_SOUTH;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11222] = block;
  }

  { // ID: 11223
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_SOUTH;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11223] = block;
  }

  { // ID: 11224
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_SOUTH;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11224] = block;
  }

  { // ID: 11225
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_SOUTH;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11225] = block;
  }

  { // ID: 11226
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_SOUTH;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11226] = block;
  }

  { // ID: 11227
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_SOUTH;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11227] = block;
  }

  { // ID: 11228
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_SOUTH;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11228] = block;
  }

  { // ID: 11229
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_SOUTH;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11229] = block;
  }

  { // ID: 11230
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_WEST;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11230] = block;
  }

  { // ID: 11231
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_WEST;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11231] = block;
  }

  { // ID: 11232
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_WEST;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11232] = block;
  }

  { // ID: 11233
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_WEST;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11233] = block;
  }

  { // ID: 11234
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_WEST;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11234] = block;
  }

  { // ID: 11235
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_WEST;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11235] = block;
  }

  { // ID: 11236
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_WEST;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11236] = block;
  }

  { // ID: 11237
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_WEST;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11237] = block;
  }

  { // ID: 11238
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_WEST;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11238] = block;
  }

  { // ID: 11239
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_WEST;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11239] = block;
  }

  { // ID: 11240
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_WEST;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11240] = block;
  }

  { // ID: 11241
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_WEST;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11241] = block;
  }

  { // ID: 11242
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_WEST;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11242] = block;
  }

  { // ID: 11243
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_WEST;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11243] = block;
  }

  { // ID: 11244
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_WEST;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11244] = block;
  }

  { // ID: 11245
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_WEST;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11245] = block;
  }

  { // ID: 11246
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_WEST;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11246] = block;
  }

  { // ID: 11247
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_WEST;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11247] = block;
  }

  { // ID: 11248
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_WEST;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11248] = block;
  }

  { // ID: 11249
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_WEST;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11249] = block;
  }

  { // ID: 11250
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_EAST;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11250] = block;
  }

  { // ID: 11251
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_EAST;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11251] = block;
  }

  { // ID: 11252
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_EAST;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11252] = block;
  }

  { // ID: 11253
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_EAST;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11253] = block;
  }

  { // ID: 11254
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_EAST;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11254] = block;
  }

  { // ID: 11255
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_EAST;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11255] = block;
  }

  { // ID: 11256
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_EAST;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11256] = block;
  }

  { // ID: 11257
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_EAST;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11257] = block;
  }

  { // ID: 11258
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_EAST;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11258] = block;
  }

  { // ID: 11259
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_EAST;
    block->half = SmoothQuartzStairsBlock::HALF_TOP;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11259] = block;
  }

  { // ID: 11260
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_EAST;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11260] = block;
  }

  { // ID: 11261
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_EAST;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11261] = block;
  }

  { // ID: 11262
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_EAST;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11262] = block;
  }

  { // ID: 11263
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_EAST;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11263] = block;
  }

  { // ID: 11264
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_EAST;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11264] = block;
  }

  { // ID: 11265
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_EAST;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11265] = block;
  }

  { // ID: 11266
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_EAST;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11266] = block;
  }

  { // ID: 11267
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_EAST;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11267] = block;
  }

  { // ID: 11268
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_EAST;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_TRUE;
    registry[11268] = block;
  }

  { // ID: 11269
    std::shared_ptr<SmoothQuartzStairsBlock> block = std::make_shared<SmoothQuartzStairsBlock>();
    block->facing = SmoothQuartzStairsBlock::FACING_EAST;
    block->half = SmoothQuartzStairsBlock::HALF_BOTTOM;
    block->shape = SmoothQuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = SmoothQuartzStairsBlock::WATERLOGGED_FALSE;
    registry[11269] = block;
  }

  { // ID: 11676
    std::shared_ptr<SmoothRedSandstoneSlabBlock> block = std::make_shared<SmoothRedSandstoneSlabBlock>();
    block->type = SmoothRedSandstoneSlabBlock::TYPE_TOP;
    block->waterlogged = SmoothRedSandstoneSlabBlock::WATERLOGGED_TRUE;
    registry[11676] = block;
  }

  { // ID: 11677
    std::shared_ptr<SmoothRedSandstoneSlabBlock> block = std::make_shared<SmoothRedSandstoneSlabBlock>();
    block->type = SmoothRedSandstoneSlabBlock::TYPE_TOP;
    block->waterlogged = SmoothRedSandstoneSlabBlock::WATERLOGGED_FALSE;
    registry[11677] = block;
  }

  { // ID: 11678
    std::shared_ptr<SmoothRedSandstoneSlabBlock> block = std::make_shared<SmoothRedSandstoneSlabBlock>();
    block->type = SmoothRedSandstoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = SmoothRedSandstoneSlabBlock::WATERLOGGED_TRUE;
    registry[11678] = block;
  }

  { // ID: 11679
    std::shared_ptr<SmoothRedSandstoneSlabBlock> block = std::make_shared<SmoothRedSandstoneSlabBlock>();
    block->type = SmoothRedSandstoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = SmoothRedSandstoneSlabBlock::WATERLOGGED_FALSE;
    registry[11679] = block;
  }

  { // ID: 11680
    std::shared_ptr<SmoothRedSandstoneSlabBlock> block = std::make_shared<SmoothRedSandstoneSlabBlock>();
    block->type = SmoothRedSandstoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = SmoothRedSandstoneSlabBlock::WATERLOGGED_TRUE;
    registry[11680] = block;
  }

  { // ID: 11681
    std::shared_ptr<SmoothRedSandstoneSlabBlock> block = std::make_shared<SmoothRedSandstoneSlabBlock>();
    block->type = SmoothRedSandstoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = SmoothRedSandstoneSlabBlock::WATERLOGGED_FALSE;
    registry[11681] = block;
  }

  { // ID: 11706
    std::shared_ptr<SmoothSandstoneSlabBlock> block = std::make_shared<SmoothSandstoneSlabBlock>();
    block->type = SmoothSandstoneSlabBlock::TYPE_TOP;
    block->waterlogged = SmoothSandstoneSlabBlock::WATERLOGGED_TRUE;
    registry[11706] = block;
  }

  { // ID: 11707
    std::shared_ptr<SmoothSandstoneSlabBlock> block = std::make_shared<SmoothSandstoneSlabBlock>();
    block->type = SmoothSandstoneSlabBlock::TYPE_TOP;
    block->waterlogged = SmoothSandstoneSlabBlock::WATERLOGGED_FALSE;
    registry[11707] = block;
  }

  { // ID: 11708
    std::shared_ptr<SmoothSandstoneSlabBlock> block = std::make_shared<SmoothSandstoneSlabBlock>();
    block->type = SmoothSandstoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = SmoothSandstoneSlabBlock::WATERLOGGED_TRUE;
    registry[11708] = block;
  }

  { // ID: 11709
    std::shared_ptr<SmoothSandstoneSlabBlock> block = std::make_shared<SmoothSandstoneSlabBlock>();
    block->type = SmoothSandstoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = SmoothSandstoneSlabBlock::WATERLOGGED_FALSE;
    registry[11709] = block;
  }

  { // ID: 11710
    std::shared_ptr<SmoothSandstoneSlabBlock> block = std::make_shared<SmoothSandstoneSlabBlock>();
    block->type = SmoothSandstoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = SmoothSandstoneSlabBlock::WATERLOGGED_TRUE;
    registry[11710] = block;
  }

  { // ID: 11711
    std::shared_ptr<SmoothSandstoneSlabBlock> block = std::make_shared<SmoothSandstoneSlabBlock>();
    block->type = SmoothSandstoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = SmoothSandstoneSlabBlock::WATERLOGGED_FALSE;
    registry[11711] = block;
  }

  { // ID: 11712
    std::shared_ptr<SmoothQuartzSlabBlock> block = std::make_shared<SmoothQuartzSlabBlock>();
    block->type = SmoothQuartzSlabBlock::TYPE_TOP;
    block->waterlogged = SmoothQuartzSlabBlock::WATERLOGGED_TRUE;
    registry[11712] = block;
  }

  { // ID: 11713
    std::shared_ptr<SmoothQuartzSlabBlock> block = std::make_shared<SmoothQuartzSlabBlock>();
    block->type = SmoothQuartzSlabBlock::TYPE_TOP;
    block->waterlogged = SmoothQuartzSlabBlock::WATERLOGGED_FALSE;
    registry[11713] = block;
  }

  { // ID: 11714
    std::shared_ptr<SmoothQuartzSlabBlock> block = std::make_shared<SmoothQuartzSlabBlock>();
    block->type = SmoothQuartzSlabBlock::TYPE_BOTTOM;
    block->waterlogged = SmoothQuartzSlabBlock::WATERLOGGED_TRUE;
    registry[11714] = block;
  }

  { // ID: 11715
    std::shared_ptr<SmoothQuartzSlabBlock> block = std::make_shared<SmoothQuartzSlabBlock>();
    block->type = SmoothQuartzSlabBlock::TYPE_BOTTOM;
    block->waterlogged = SmoothQuartzSlabBlock::WATERLOGGED_FALSE;
    registry[11715] = block;
  }

  { // ID: 11716
    std::shared_ptr<SmoothQuartzSlabBlock> block = std::make_shared<SmoothQuartzSlabBlock>();
    block->type = SmoothQuartzSlabBlock::TYPE_DOUBLE;
    block->waterlogged = SmoothQuartzSlabBlock::WATERLOGGED_TRUE;
    registry[11716] = block;
  }

  { // ID: 11717
    std::shared_ptr<SmoothQuartzSlabBlock> block = std::make_shared<SmoothQuartzSlabBlock>();
    block->type = SmoothQuartzSlabBlock::TYPE_DOUBLE;
    block->waterlogged = SmoothQuartzSlabBlock::WATERLOGGED_FALSE;
    registry[11717] = block;
  }

  { // ID: 13368
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13368] = block;
  }

  { // ID: 13369
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13369] = block;
  }

  { // ID: 13370
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13370] = block;
  }

  { // ID: 13371
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13371] = block;
  }

  { // ID: 13372
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13372] = block;
  }

  { // ID: 13373
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13373] = block;
  }

  { // ID: 13374
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13374] = block;
  }

  { // ID: 13375
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13375] = block;
  }

  { // ID: 13376
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13376] = block;
  }

  { // ID: 13377
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13377] = block;
  }

  { // ID: 13378
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13378] = block;
  }

  { // ID: 13379
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13379] = block;
  }

  { // ID: 13380
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13380] = block;
  }

  { // ID: 13381
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13381] = block;
  }

  { // ID: 13382
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13382] = block;
  }

  { // ID: 13383
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13383] = block;
  }

  { // ID: 13384
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13384] = block;
  }

  { // ID: 13385
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13385] = block;
  }

  { // ID: 13386
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13386] = block;
  }

  { // ID: 13387
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13387] = block;
  }

  { // ID: 13388
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13388] = block;
  }

  { // ID: 13389
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13389] = block;
  }

  { // ID: 13390
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13390] = block;
  }

  { // ID: 13391
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13391] = block;
  }

  { // ID: 13392
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13392] = block;
  }

  { // ID: 13393
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13393] = block;
  }

  { // ID: 13394
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13394] = block;
  }

  { // ID: 13395
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13395] = block;
  }

  { // ID: 13396
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13396] = block;
  }

  { // ID: 13397
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13397] = block;
  }

  { // ID: 13398
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13398] = block;
  }

  { // ID: 13399
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13399] = block;
  }

  { // ID: 13400
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13400] = block;
  }

  { // ID: 13401
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13401] = block;
  }

  { // ID: 13402
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13402] = block;
  }

  { // ID: 13403
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13403] = block;
  }

  { // ID: 13404
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13404] = block;
  }

  { // ID: 13405
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13405] = block;
  }

  { // ID: 13406
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13406] = block;
  }

  { // ID: 13407
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13407] = block;
  }

  { // ID: 13408
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13408] = block;
  }

  { // ID: 13409
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13409] = block;
  }

  { // ID: 13410
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13410] = block;
  }

  { // ID: 13411
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13411] = block;
  }

  { // ID: 13412
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13412] = block;
  }

  { // ID: 13413
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13413] = block;
  }

  { // ID: 13414
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13414] = block;
  }

  { // ID: 13415
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13415] = block;
  }

  { // ID: 13416
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13416] = block;
  }

  { // ID: 13417
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13417] = block;
  }

  { // ID: 13418
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13418] = block;
  }

  { // ID: 13419
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13419] = block;
  }

  { // ID: 13420
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13420] = block;
  }

  { // ID: 13421
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13421] = block;
  }

  { // ID: 13422
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13422] = block;
  }

  { // ID: 13423
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13423] = block;
  }

  { // ID: 13424
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13424] = block;
  }

  { // ID: 13425
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13425] = block;
  }

  { // ID: 13426
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13426] = block;
  }

  { // ID: 13427
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13427] = block;
  }

  { // ID: 13428
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13428] = block;
  }

  { // ID: 13429
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13429] = block;
  }

  { // ID: 13430
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13430] = block;
  }

  { // ID: 13431
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13431] = block;
  }

  { // ID: 13432
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13432] = block;
  }

  { // ID: 13433
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13433] = block;
  }

  { // ID: 13434
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13434] = block;
  }

  { // ID: 13435
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13435] = block;
  }

  { // ID: 13436
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13436] = block;
  }

  { // ID: 13437
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13437] = block;
  }

  { // ID: 13438
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13438] = block;
  }

  { // ID: 13439
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13439] = block;
  }

  { // ID: 13440
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13440] = block;
  }

  { // ID: 13441
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13441] = block;
  }

  { // ID: 13442
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13442] = block;
  }

  { // ID: 13443
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13443] = block;
  }

  { // ID: 13444
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13444] = block;
  }

  { // ID: 13445
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13445] = block;
  }

  { // ID: 13446
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13446] = block;
  }

  { // ID: 13447
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13447] = block;
  }

  { // ID: 13448
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13448] = block;
  }

  { // ID: 13449
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13449] = block;
  }

  { // ID: 13450
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13450] = block;
  }

  { // ID: 13451
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13451] = block;
  }

  { // ID: 13452
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13452] = block;
  }

  { // ID: 13453
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13453] = block;
  }

  { // ID: 13454
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13454] = block;
  }

  { // ID: 13455
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13455] = block;
  }

  { // ID: 13456
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13456] = block;
  }

  { // ID: 13457
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13457] = block;
  }

  { // ID: 13458
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13458] = block;
  }

  { // ID: 13459
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13459] = block;
  }

  { // ID: 13460
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13460] = block;
  }

  { // ID: 13461
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13461] = block;
  }

  { // ID: 13462
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13462] = block;
  }

  { // ID: 13463
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13463] = block;
  }

  { // ID: 13464
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13464] = block;
  }

  { // ID: 13465
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13465] = block;
  }

  { // ID: 13466
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13466] = block;
  }

  { // ID: 13467
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13467] = block;
  }

  { // ID: 13468
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13468] = block;
  }

  { // ID: 13469
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13469] = block;
  }

  { // ID: 13470
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13470] = block;
  }

  { // ID: 13471
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13471] = block;
  }

  { // ID: 13472
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13472] = block;
  }

  { // ID: 13473
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13473] = block;
  }

  { // ID: 13474
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13474] = block;
  }

  { // ID: 13475
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_NONE;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13475] = block;
  }

  { // ID: 13476
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13476] = block;
  }

  { // ID: 13477
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13477] = block;
  }

  { // ID: 13478
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13478] = block;
  }

  { // ID: 13479
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13479] = block;
  }

  { // ID: 13480
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13480] = block;
  }

  { // ID: 13481
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13481] = block;
  }

  { // ID: 13482
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13482] = block;
  }

  { // ID: 13483
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13483] = block;
  }

  { // ID: 13484
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13484] = block;
  }

  { // ID: 13485
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13485] = block;
  }

  { // ID: 13486
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13486] = block;
  }

  { // ID: 13487
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13487] = block;
  }

  { // ID: 13488
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13488] = block;
  }

  { // ID: 13489
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13489] = block;
  }

  { // ID: 13490
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13490] = block;
  }

  { // ID: 13491
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13491] = block;
  }

  { // ID: 13492
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13492] = block;
  }

  { // ID: 13493
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13493] = block;
  }

  { // ID: 13494
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13494] = block;
  }

  { // ID: 13495
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13495] = block;
  }

  { // ID: 13496
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13496] = block;
  }

  { // ID: 13497
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13497] = block;
  }

  { // ID: 13498
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13498] = block;
  }

  { // ID: 13499
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13499] = block;
  }

  { // ID: 13500
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13500] = block;
  }

  { // ID: 13501
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13501] = block;
  }

  { // ID: 13502
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13502] = block;
  }

  { // ID: 13503
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13503] = block;
  }

  { // ID: 13504
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13504] = block;
  }

  { // ID: 13505
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13505] = block;
  }

  { // ID: 13506
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13506] = block;
  }

  { // ID: 13507
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13507] = block;
  }

  { // ID: 13508
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13508] = block;
  }

  { // ID: 13509
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13509] = block;
  }

  { // ID: 13510
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13510] = block;
  }

  { // ID: 13511
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13511] = block;
  }

  { // ID: 13512
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13512] = block;
  }

  { // ID: 13513
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13513] = block;
  }

  { // ID: 13514
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13514] = block;
  }

  { // ID: 13515
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13515] = block;
  }

  { // ID: 13516
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13516] = block;
  }

  { // ID: 13517
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13517] = block;
  }

  { // ID: 13518
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13518] = block;
  }

  { // ID: 13519
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13519] = block;
  }

  { // ID: 13520
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13520] = block;
  }

  { // ID: 13521
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13521] = block;
  }

  { // ID: 13522
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13522] = block;
  }

  { // ID: 13523
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13523] = block;
  }

  { // ID: 13524
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13524] = block;
  }

  { // ID: 13525
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13525] = block;
  }

  { // ID: 13526
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13526] = block;
  }

  { // ID: 13527
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13527] = block;
  }

  { // ID: 13528
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13528] = block;
  }

  { // ID: 13529
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13529] = block;
  }

  { // ID: 13530
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13530] = block;
  }

  { // ID: 13531
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13531] = block;
  }

  { // ID: 13532
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13532] = block;
  }

  { // ID: 13533
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13533] = block;
  }

  { // ID: 13534
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13534] = block;
  }

  { // ID: 13535
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13535] = block;
  }

  { // ID: 13536
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13536] = block;
  }

  { // ID: 13537
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13537] = block;
  }

  { // ID: 13538
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13538] = block;
  }

  { // ID: 13539
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13539] = block;
  }

  { // ID: 13540
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13540] = block;
  }

  { // ID: 13541
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13541] = block;
  }

  { // ID: 13542
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13542] = block;
  }

  { // ID: 13543
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13543] = block;
  }

  { // ID: 13544
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13544] = block;
  }

  { // ID: 13545
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13545] = block;
  }

  { // ID: 13546
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13546] = block;
  }

  { // ID: 13547
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13547] = block;
  }

  { // ID: 13548
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13548] = block;
  }

  { // ID: 13549
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13549] = block;
  }

  { // ID: 13550
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13550] = block;
  }

  { // ID: 13551
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13551] = block;
  }

  { // ID: 13552
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13552] = block;
  }

  { // ID: 13553
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13553] = block;
  }

  { // ID: 13554
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13554] = block;
  }

  { // ID: 13555
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13555] = block;
  }

  { // ID: 13556
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13556] = block;
  }

  { // ID: 13557
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13557] = block;
  }

  { // ID: 13558
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13558] = block;
  }

  { // ID: 13559
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13559] = block;
  }

  { // ID: 13560
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13560] = block;
  }

  { // ID: 13561
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13561] = block;
  }

  { // ID: 13562
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13562] = block;
  }

  { // ID: 13563
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13563] = block;
  }

  { // ID: 13564
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13564] = block;
  }

  { // ID: 13565
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13565] = block;
  }

  { // ID: 13566
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13566] = block;
  }

  { // ID: 13567
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13567] = block;
  }

  { // ID: 13568
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13568] = block;
  }

  { // ID: 13569
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13569] = block;
  }

  { // ID: 13570
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13570] = block;
  }

  { // ID: 13571
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13571] = block;
  }

  { // ID: 13572
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13572] = block;
  }

  { // ID: 13573
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13573] = block;
  }

  { // ID: 13574
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13574] = block;
  }

  { // ID: 13575
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13575] = block;
  }

  { // ID: 13576
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13576] = block;
  }

  { // ID: 13577
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13577] = block;
  }

  { // ID: 13578
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13578] = block;
  }

  { // ID: 13579
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13579] = block;
  }

  { // ID: 13580
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13580] = block;
  }

  { // ID: 13581
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13581] = block;
  }

  { // ID: 13582
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13582] = block;
  }

  { // ID: 13583
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_LOW;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13583] = block;
  }

  { // ID: 13584
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13584] = block;
  }

  { // ID: 13585
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13585] = block;
  }

  { // ID: 13586
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13586] = block;
  }

  { // ID: 13587
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13587] = block;
  }

  { // ID: 13588
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13588] = block;
  }

  { // ID: 13589
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13589] = block;
  }

  { // ID: 13590
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13590] = block;
  }

  { // ID: 13591
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13591] = block;
  }

  { // ID: 13592
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13592] = block;
  }

  { // ID: 13593
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13593] = block;
  }

  { // ID: 13594
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13594] = block;
  }

  { // ID: 13595
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13595] = block;
  }

  { // ID: 13596
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13596] = block;
  }

  { // ID: 13597
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13597] = block;
  }

  { // ID: 13598
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13598] = block;
  }

  { // ID: 13599
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13599] = block;
  }

  { // ID: 13600
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13600] = block;
  }

  { // ID: 13601
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13601] = block;
  }

  { // ID: 13602
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13602] = block;
  }

  { // ID: 13603
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13603] = block;
  }

  { // ID: 13604
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13604] = block;
  }

  { // ID: 13605
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13605] = block;
  }

  { // ID: 13606
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13606] = block;
  }

  { // ID: 13607
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13607] = block;
  }

  { // ID: 13608
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13608] = block;
  }

  { // ID: 13609
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13609] = block;
  }

  { // ID: 13610
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13610] = block;
  }

  { // ID: 13611
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13611] = block;
  }

  { // ID: 13612
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13612] = block;
  }

  { // ID: 13613
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13613] = block;
  }

  { // ID: 13614
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13614] = block;
  }

  { // ID: 13615
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13615] = block;
  }

  { // ID: 13616
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13616] = block;
  }

  { // ID: 13617
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13617] = block;
  }

  { // ID: 13618
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13618] = block;
  }

  { // ID: 13619
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_NONE;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13619] = block;
  }

  { // ID: 13620
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13620] = block;
  }

  { // ID: 13621
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13621] = block;
  }

  { // ID: 13622
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13622] = block;
  }

  { // ID: 13623
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13623] = block;
  }

  { // ID: 13624
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13624] = block;
  }

  { // ID: 13625
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13625] = block;
  }

  { // ID: 13626
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13626] = block;
  }

  { // ID: 13627
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13627] = block;
  }

  { // ID: 13628
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13628] = block;
  }

  { // ID: 13629
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13629] = block;
  }

  { // ID: 13630
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13630] = block;
  }

  { // ID: 13631
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13631] = block;
  }

  { // ID: 13632
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13632] = block;
  }

  { // ID: 13633
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13633] = block;
  }

  { // ID: 13634
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13634] = block;
  }

  { // ID: 13635
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13635] = block;
  }

  { // ID: 13636
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13636] = block;
  }

  { // ID: 13637
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13637] = block;
  }

  { // ID: 13638
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13638] = block;
  }

  { // ID: 13639
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13639] = block;
  }

  { // ID: 13640
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13640] = block;
  }

  { // ID: 13641
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13641] = block;
  }

  { // ID: 13642
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13642] = block;
  }

  { // ID: 13643
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13643] = block;
  }

  { // ID: 13644
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13644] = block;
  }

  { // ID: 13645
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13645] = block;
  }

  { // ID: 13646
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13646] = block;
  }

  { // ID: 13647
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13647] = block;
  }

  { // ID: 13648
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13648] = block;
  }

  { // ID: 13649
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13649] = block;
  }

  { // ID: 13650
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13650] = block;
  }

  { // ID: 13651
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13651] = block;
  }

  { // ID: 13652
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13652] = block;
  }

  { // ID: 13653
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13653] = block;
  }

  { // ID: 13654
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13654] = block;
  }

  { // ID: 13655
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_LOW;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13655] = block;
  }

  { // ID: 13656
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13656] = block;
  }

  { // ID: 13657
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13657] = block;
  }

  { // ID: 13658
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13658] = block;
  }

  { // ID: 13659
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13659] = block;
  }

  { // ID: 13660
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13660] = block;
  }

  { // ID: 13661
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13661] = block;
  }

  { // ID: 13662
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13662] = block;
  }

  { // ID: 13663
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13663] = block;
  }

  { // ID: 13664
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13664] = block;
  }

  { // ID: 13665
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13665] = block;
  }

  { // ID: 13666
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13666] = block;
  }

  { // ID: 13667
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_NONE;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13667] = block;
  }

  { // ID: 13668
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13668] = block;
  }

  { // ID: 13669
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13669] = block;
  }

  { // ID: 13670
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13670] = block;
  }

  { // ID: 13671
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13671] = block;
  }

  { // ID: 13672
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13672] = block;
  }

  { // ID: 13673
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13673] = block;
  }

  { // ID: 13674
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13674] = block;
  }

  { // ID: 13675
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13675] = block;
  }

  { // ID: 13676
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13676] = block;
  }

  { // ID: 13677
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13677] = block;
  }

  { // ID: 13678
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13678] = block;
  }

  { // ID: 13679
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_LOW;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13679] = block;
  }

  { // ID: 13680
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13680] = block;
  }

  { // ID: 13681
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13681] = block;
  }

  { // ID: 13682
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13682] = block;
  }

  { // ID: 13683
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13683] = block;
  }

  { // ID: 13684
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13684] = block;
  }

  { // ID: 13685
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_TRUE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13685] = block;
  }

  { // ID: 13686
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13686] = block;
  }

  { // ID: 13687
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13687] = block;
  }

  { // ID: 13688
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13688] = block;
  }

  { // ID: 13689
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_NONE;
    registry[13689] = block;
  }

  { // ID: 13690
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_LOW;
    registry[13690] = block;
  }

  { // ID: 13691
    std::shared_ptr<StoneBrickWallBlock> block = std::make_shared<StoneBrickWallBlock>();
    block->east = StoneBrickWallBlock::EAST_TALL;
    block->north = StoneBrickWallBlock::NORTH_TALL;
    block->south = StoneBrickWallBlock::SOUTH_TALL;
    block->up = StoneBrickWallBlock::UP_FALSE;
    block->waterlogged = StoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = StoneBrickWallBlock::WEST_TALL;
    registry[13691] = block;
  }

  { // ID: 14988
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[14988] = block;
  }

  { // ID: 14989
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[14989] = block;
  }

  { // ID: 14990
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[14990] = block;
  }

  { // ID: 14991
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[14991] = block;
  }

  { // ID: 14992
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[14992] = block;
  }

  { // ID: 14993
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[14993] = block;
  }

  { // ID: 14994
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[14994] = block;
  }

  { // ID: 14995
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[14995] = block;
  }

  { // ID: 14996
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[14996] = block;
  }

  { // ID: 14997
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[14997] = block;
  }

  { // ID: 14998
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[14998] = block;
  }

  { // ID: 14999
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[14999] = block;
  }

  { // ID: 15000
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15000] = block;
  }

  { // ID: 15001
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15001] = block;
  }

  { // ID: 15002
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15002] = block;
  }

  { // ID: 15003
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15003] = block;
  }

  { // ID: 15004
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15004] = block;
  }

  { // ID: 15005
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15005] = block;
  }

  { // ID: 15006
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15006] = block;
  }

  { // ID: 15007
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15007] = block;
  }

  { // ID: 15008
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15008] = block;
  }

  { // ID: 15009
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15009] = block;
  }

  { // ID: 15010
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15010] = block;
  }

  { // ID: 15011
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15011] = block;
  }

  { // ID: 15012
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15012] = block;
  }

  { // ID: 15013
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15013] = block;
  }

  { // ID: 15014
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15014] = block;
  }

  { // ID: 15015
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15015] = block;
  }

  { // ID: 15016
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15016] = block;
  }

  { // ID: 15017
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15017] = block;
  }

  { // ID: 15018
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15018] = block;
  }

  { // ID: 15019
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15019] = block;
  }

  { // ID: 15020
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15020] = block;
  }

  { // ID: 15021
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15021] = block;
  }

  { // ID: 15022
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15022] = block;
  }

  { // ID: 15023
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15023] = block;
  }

  { // ID: 15024
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15024] = block;
  }

  { // ID: 15025
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15025] = block;
  }

  { // ID: 15026
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15026] = block;
  }

  { // ID: 15027
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15027] = block;
  }

  { // ID: 15028
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15028] = block;
  }

  { // ID: 15029
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15029] = block;
  }

  { // ID: 15030
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15030] = block;
  }

  { // ID: 15031
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15031] = block;
  }

  { // ID: 15032
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15032] = block;
  }

  { // ID: 15033
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15033] = block;
  }

  { // ID: 15034
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15034] = block;
  }

  { // ID: 15035
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15035] = block;
  }

  { // ID: 15036
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15036] = block;
  }

  { // ID: 15037
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15037] = block;
  }

  { // ID: 15038
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15038] = block;
  }

  { // ID: 15039
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15039] = block;
  }

  { // ID: 15040
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15040] = block;
  }

  { // ID: 15041
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15041] = block;
  }

  { // ID: 15042
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15042] = block;
  }

  { // ID: 15043
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15043] = block;
  }

  { // ID: 15044
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15044] = block;
  }

  { // ID: 15045
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15045] = block;
  }

  { // ID: 15046
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15046] = block;
  }

  { // ID: 15047
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15047] = block;
  }

  { // ID: 15048
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15048] = block;
  }

  { // ID: 15049
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15049] = block;
  }

  { // ID: 15050
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15050] = block;
  }

  { // ID: 15051
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15051] = block;
  }

  { // ID: 15052
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15052] = block;
  }

  { // ID: 15053
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15053] = block;
  }

  { // ID: 15054
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15054] = block;
  }

  { // ID: 15055
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15055] = block;
  }

  { // ID: 15056
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15056] = block;
  }

  { // ID: 15057
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15057] = block;
  }

  { // ID: 15058
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15058] = block;
  }

  { // ID: 15059
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15059] = block;
  }

  { // ID: 15060
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15060] = block;
  }

  { // ID: 15061
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15061] = block;
  }

  { // ID: 15062
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15062] = block;
  }

  { // ID: 15063
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15063] = block;
  }

  { // ID: 15064
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15064] = block;
  }

  { // ID: 15065
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15065] = block;
  }

  { // ID: 15066
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15066] = block;
  }

  { // ID: 15067
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15067] = block;
  }

  { // ID: 15068
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15068] = block;
  }

  { // ID: 15069
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15069] = block;
  }

  { // ID: 15070
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15070] = block;
  }

  { // ID: 15071
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15071] = block;
  }

  { // ID: 15072
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15072] = block;
  }

  { // ID: 15073
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15073] = block;
  }

  { // ID: 15074
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15074] = block;
  }

  { // ID: 15075
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15075] = block;
  }

  { // ID: 15076
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15076] = block;
  }

  { // ID: 15077
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15077] = block;
  }

  { // ID: 15078
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15078] = block;
  }

  { // ID: 15079
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15079] = block;
  }

  { // ID: 15080
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15080] = block;
  }

  { // ID: 15081
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15081] = block;
  }

  { // ID: 15082
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15082] = block;
  }

  { // ID: 15083
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15083] = block;
  }

  { // ID: 15084
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15084] = block;
  }

  { // ID: 15085
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15085] = block;
  }

  { // ID: 15086
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15086] = block;
  }

  { // ID: 15087
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15087] = block;
  }

  { // ID: 15088
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15088] = block;
  }

  { // ID: 15089
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15089] = block;
  }

  { // ID: 15090
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15090] = block;
  }

  { // ID: 15091
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15091] = block;
  }

  { // ID: 15092
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15092] = block;
  }

  { // ID: 15093
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15093] = block;
  }

  { // ID: 15094
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15094] = block;
  }

  { // ID: 15095
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_NONE;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15095] = block;
  }

  { // ID: 15096
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15096] = block;
  }

  { // ID: 15097
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15097] = block;
  }

  { // ID: 15098
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15098] = block;
  }

  { // ID: 15099
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15099] = block;
  }

  { // ID: 15100
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15100] = block;
  }

  { // ID: 15101
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15101] = block;
  }

  { // ID: 15102
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15102] = block;
  }

  { // ID: 15103
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15103] = block;
  }

  { // ID: 15104
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15104] = block;
  }

  { // ID: 15105
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15105] = block;
  }

  { // ID: 15106
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15106] = block;
  }

  { // ID: 15107
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15107] = block;
  }

  { // ID: 15108
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15108] = block;
  }

  { // ID: 15109
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15109] = block;
  }

  { // ID: 15110
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15110] = block;
  }

  { // ID: 15111
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15111] = block;
  }

  { // ID: 15112
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15112] = block;
  }

  { // ID: 15113
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15113] = block;
  }

  { // ID: 15114
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15114] = block;
  }

  { // ID: 15115
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15115] = block;
  }

  { // ID: 15116
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15116] = block;
  }

  { // ID: 15117
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15117] = block;
  }

  { // ID: 15118
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15118] = block;
  }

  { // ID: 15119
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15119] = block;
  }

  { // ID: 15120
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15120] = block;
  }

  { // ID: 15121
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15121] = block;
  }

  { // ID: 15122
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15122] = block;
  }

  { // ID: 15123
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15123] = block;
  }

  { // ID: 15124
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15124] = block;
  }

  { // ID: 15125
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15125] = block;
  }

  { // ID: 15126
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15126] = block;
  }

  { // ID: 15127
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15127] = block;
  }

  { // ID: 15128
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15128] = block;
  }

  { // ID: 15129
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15129] = block;
  }

  { // ID: 15130
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15130] = block;
  }

  { // ID: 15131
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15131] = block;
  }

  { // ID: 15132
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15132] = block;
  }

  { // ID: 15133
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15133] = block;
  }

  { // ID: 15134
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15134] = block;
  }

  { // ID: 15135
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15135] = block;
  }

  { // ID: 15136
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15136] = block;
  }

  { // ID: 15137
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15137] = block;
  }

  { // ID: 15138
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15138] = block;
  }

  { // ID: 15139
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15139] = block;
  }

  { // ID: 15140
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15140] = block;
  }

  { // ID: 15141
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15141] = block;
  }

  { // ID: 15142
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15142] = block;
  }

  { // ID: 15143
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15143] = block;
  }

  { // ID: 15144
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15144] = block;
  }

  { // ID: 15145
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15145] = block;
  }

  { // ID: 15146
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15146] = block;
  }

  { // ID: 15147
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15147] = block;
  }

  { // ID: 15148
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15148] = block;
  }

  { // ID: 15149
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15149] = block;
  }

  { // ID: 15150
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15150] = block;
  }

  { // ID: 15151
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15151] = block;
  }

  { // ID: 15152
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15152] = block;
  }

  { // ID: 15153
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15153] = block;
  }

  { // ID: 15154
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15154] = block;
  }

  { // ID: 15155
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15155] = block;
  }

  { // ID: 15156
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15156] = block;
  }

  { // ID: 15157
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15157] = block;
  }

  { // ID: 15158
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15158] = block;
  }

  { // ID: 15159
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15159] = block;
  }

  { // ID: 15160
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15160] = block;
  }

  { // ID: 15161
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15161] = block;
  }

  { // ID: 15162
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15162] = block;
  }

  { // ID: 15163
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15163] = block;
  }

  { // ID: 15164
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15164] = block;
  }

  { // ID: 15165
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15165] = block;
  }

  { // ID: 15166
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15166] = block;
  }

  { // ID: 15167
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15167] = block;
  }

  { // ID: 15168
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15168] = block;
  }

  { // ID: 15169
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15169] = block;
  }

  { // ID: 15170
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15170] = block;
  }

  { // ID: 15171
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15171] = block;
  }

  { // ID: 15172
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15172] = block;
  }

  { // ID: 15173
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15173] = block;
  }

  { // ID: 15174
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15174] = block;
  }

  { // ID: 15175
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15175] = block;
  }

  { // ID: 15176
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15176] = block;
  }

  { // ID: 15177
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15177] = block;
  }

  { // ID: 15178
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15178] = block;
  }

  { // ID: 15179
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15179] = block;
  }

  { // ID: 15180
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15180] = block;
  }

  { // ID: 15181
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15181] = block;
  }

  { // ID: 15182
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15182] = block;
  }

  { // ID: 15183
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15183] = block;
  }

  { // ID: 15184
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15184] = block;
  }

  { // ID: 15185
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15185] = block;
  }

  { // ID: 15186
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15186] = block;
  }

  { // ID: 15187
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15187] = block;
  }

  { // ID: 15188
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15188] = block;
  }

  { // ID: 15189
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15189] = block;
  }

  { // ID: 15190
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15190] = block;
  }

  { // ID: 15191
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15191] = block;
  }

  { // ID: 15192
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15192] = block;
  }

  { // ID: 15193
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15193] = block;
  }

  { // ID: 15194
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15194] = block;
  }

  { // ID: 15195
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15195] = block;
  }

  { // ID: 15196
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15196] = block;
  }

  { // ID: 15197
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15197] = block;
  }

  { // ID: 15198
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15198] = block;
  }

  { // ID: 15199
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15199] = block;
  }

  { // ID: 15200
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15200] = block;
  }

  { // ID: 15201
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15201] = block;
  }

  { // ID: 15202
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15202] = block;
  }

  { // ID: 15203
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_LOW;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15203] = block;
  }

  { // ID: 15204
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15204] = block;
  }

  { // ID: 15205
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15205] = block;
  }

  { // ID: 15206
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15206] = block;
  }

  { // ID: 15207
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15207] = block;
  }

  { // ID: 15208
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15208] = block;
  }

  { // ID: 15209
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15209] = block;
  }

  { // ID: 15210
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15210] = block;
  }

  { // ID: 15211
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15211] = block;
  }

  { // ID: 15212
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15212] = block;
  }

  { // ID: 15213
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15213] = block;
  }

  { // ID: 15214
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15214] = block;
  }

  { // ID: 15215
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15215] = block;
  }

  { // ID: 15216
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15216] = block;
  }

  { // ID: 15217
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15217] = block;
  }

  { // ID: 15218
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15218] = block;
  }

  { // ID: 15219
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15219] = block;
  }

  { // ID: 15220
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15220] = block;
  }

  { // ID: 15221
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15221] = block;
  }

  { // ID: 15222
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15222] = block;
  }

  { // ID: 15223
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15223] = block;
  }

  { // ID: 15224
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15224] = block;
  }

  { // ID: 15225
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15225] = block;
  }

  { // ID: 15226
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15226] = block;
  }

  { // ID: 15227
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15227] = block;
  }

  { // ID: 15228
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15228] = block;
  }

  { // ID: 15229
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15229] = block;
  }

  { // ID: 15230
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15230] = block;
  }

  { // ID: 15231
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15231] = block;
  }

  { // ID: 15232
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15232] = block;
  }

  { // ID: 15233
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15233] = block;
  }

  { // ID: 15234
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15234] = block;
  }

  { // ID: 15235
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15235] = block;
  }

  { // ID: 15236
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15236] = block;
  }

  { // ID: 15237
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15237] = block;
  }

  { // ID: 15238
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15238] = block;
  }

  { // ID: 15239
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_NONE;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15239] = block;
  }

  { // ID: 15240
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15240] = block;
  }

  { // ID: 15241
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15241] = block;
  }

  { // ID: 15242
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15242] = block;
  }

  { // ID: 15243
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15243] = block;
  }

  { // ID: 15244
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15244] = block;
  }

  { // ID: 15245
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15245] = block;
  }

  { // ID: 15246
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15246] = block;
  }

  { // ID: 15247
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15247] = block;
  }

  { // ID: 15248
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15248] = block;
  }

  { // ID: 15249
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15249] = block;
  }

  { // ID: 15250
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15250] = block;
  }

  { // ID: 15251
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15251] = block;
  }

  { // ID: 15252
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15252] = block;
  }

  { // ID: 15253
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15253] = block;
  }

  { // ID: 15254
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15254] = block;
  }

  { // ID: 15255
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15255] = block;
  }

  { // ID: 15256
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15256] = block;
  }

  { // ID: 15257
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15257] = block;
  }

  { // ID: 15258
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15258] = block;
  }

  { // ID: 15259
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15259] = block;
  }

  { // ID: 15260
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15260] = block;
  }

  { // ID: 15261
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15261] = block;
  }

  { // ID: 15262
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15262] = block;
  }

  { // ID: 15263
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15263] = block;
  }

  { // ID: 15264
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15264] = block;
  }

  { // ID: 15265
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15265] = block;
  }

  { // ID: 15266
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15266] = block;
  }

  { // ID: 15267
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15267] = block;
  }

  { // ID: 15268
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15268] = block;
  }

  { // ID: 15269
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15269] = block;
  }

  { // ID: 15270
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15270] = block;
  }

  { // ID: 15271
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15271] = block;
  }

  { // ID: 15272
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15272] = block;
  }

  { // ID: 15273
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15273] = block;
  }

  { // ID: 15274
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15274] = block;
  }

  { // ID: 15275
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_LOW;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15275] = block;
  }

  { // ID: 15276
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15276] = block;
  }

  { // ID: 15277
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15277] = block;
  }

  { // ID: 15278
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15278] = block;
  }

  { // ID: 15279
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15279] = block;
  }

  { // ID: 15280
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15280] = block;
  }

  { // ID: 15281
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15281] = block;
  }

  { // ID: 15282
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15282] = block;
  }

  { // ID: 15283
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15283] = block;
  }

  { // ID: 15284
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15284] = block;
  }

  { // ID: 15285
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15285] = block;
  }

  { // ID: 15286
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15286] = block;
  }

  { // ID: 15287
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_NONE;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15287] = block;
  }

  { // ID: 15288
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15288] = block;
  }

  { // ID: 15289
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15289] = block;
  }

  { // ID: 15290
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15290] = block;
  }

  { // ID: 15291
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15291] = block;
  }

  { // ID: 15292
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15292] = block;
  }

  { // ID: 15293
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15293] = block;
  }

  { // ID: 15294
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15294] = block;
  }

  { // ID: 15295
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15295] = block;
  }

  { // ID: 15296
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15296] = block;
  }

  { // ID: 15297
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15297] = block;
  }

  { // ID: 15298
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15298] = block;
  }

  { // ID: 15299
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_LOW;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15299] = block;
  }

  { // ID: 15300
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15300] = block;
  }

  { // ID: 15301
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15301] = block;
  }

  { // ID: 15302
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15302] = block;
  }

  { // ID: 15303
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15303] = block;
  }

  { // ID: 15304
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15304] = block;
  }

  { // ID: 15305
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_TRUE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15305] = block;
  }

  { // ID: 15306
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15306] = block;
  }

  { // ID: 15307
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15307] = block;
  }

  { // ID: 15308
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15308] = block;
  }

  { // ID: 15309
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_NONE;
    registry[15309] = block;
  }

  { // ID: 15310
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_LOW;
    registry[15310] = block;
  }

  { // ID: 15311
    std::shared_ptr<SandstoneWallBlock> block = std::make_shared<SandstoneWallBlock>();
    block->east = SandstoneWallBlock::EAST_TALL;
    block->north = SandstoneWallBlock::NORTH_TALL;
    block->south = SandstoneWallBlock::SOUTH_TALL;
    block->up = SandstoneWallBlock::UP_FALSE;
    block->waterlogged = SandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = SandstoneWallBlock::WEST_TALL;
    registry[15311] = block;
  }

  { // ID: 15960
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_TRUE;
    block->distance = ScaffoldingBlock::DISTANCE_0;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_TRUE;
    registry[15960] = block;
  }

  { // ID: 15961
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_TRUE;
    block->distance = ScaffoldingBlock::DISTANCE_0;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_FALSE;
    registry[15961] = block;
  }

  { // ID: 15962
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_TRUE;
    block->distance = ScaffoldingBlock::DISTANCE_1;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_TRUE;
    registry[15962] = block;
  }

  { // ID: 15963
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_TRUE;
    block->distance = ScaffoldingBlock::DISTANCE_1;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_FALSE;
    registry[15963] = block;
  }

  { // ID: 15964
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_TRUE;
    block->distance = ScaffoldingBlock::DISTANCE_2;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_TRUE;
    registry[15964] = block;
  }

  { // ID: 15965
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_TRUE;
    block->distance = ScaffoldingBlock::DISTANCE_2;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_FALSE;
    registry[15965] = block;
  }

  { // ID: 15966
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_TRUE;
    block->distance = ScaffoldingBlock::DISTANCE_3;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_TRUE;
    registry[15966] = block;
  }

  { // ID: 15967
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_TRUE;
    block->distance = ScaffoldingBlock::DISTANCE_3;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_FALSE;
    registry[15967] = block;
  }

  { // ID: 15968
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_TRUE;
    block->distance = ScaffoldingBlock::DISTANCE_4;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_TRUE;
    registry[15968] = block;
  }

  { // ID: 15969
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_TRUE;
    block->distance = ScaffoldingBlock::DISTANCE_4;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_FALSE;
    registry[15969] = block;
  }

  { // ID: 15970
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_TRUE;
    block->distance = ScaffoldingBlock::DISTANCE_5;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_TRUE;
    registry[15970] = block;
  }

  { // ID: 15971
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_TRUE;
    block->distance = ScaffoldingBlock::DISTANCE_5;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_FALSE;
    registry[15971] = block;
  }

  { // ID: 15972
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_TRUE;
    block->distance = ScaffoldingBlock::DISTANCE_6;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_TRUE;
    registry[15972] = block;
  }

  { // ID: 15973
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_TRUE;
    block->distance = ScaffoldingBlock::DISTANCE_6;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_FALSE;
    registry[15973] = block;
  }

  { // ID: 15974
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_TRUE;
    block->distance = ScaffoldingBlock::DISTANCE_7;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_TRUE;
    registry[15974] = block;
  }

  { // ID: 15975
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_TRUE;
    block->distance = ScaffoldingBlock::DISTANCE_7;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_FALSE;
    registry[15975] = block;
  }

  { // ID: 15976
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_FALSE;
    block->distance = ScaffoldingBlock::DISTANCE_0;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_TRUE;
    registry[15976] = block;
  }

  { // ID: 15977
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_FALSE;
    block->distance = ScaffoldingBlock::DISTANCE_0;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_FALSE;
    registry[15977] = block;
  }

  { // ID: 15978
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_FALSE;
    block->distance = ScaffoldingBlock::DISTANCE_1;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_TRUE;
    registry[15978] = block;
  }

  { // ID: 15979
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_FALSE;
    block->distance = ScaffoldingBlock::DISTANCE_1;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_FALSE;
    registry[15979] = block;
  }

  { // ID: 15980
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_FALSE;
    block->distance = ScaffoldingBlock::DISTANCE_2;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_TRUE;
    registry[15980] = block;
  }

  { // ID: 15981
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_FALSE;
    block->distance = ScaffoldingBlock::DISTANCE_2;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_FALSE;
    registry[15981] = block;
  }

  { // ID: 15982
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_FALSE;
    block->distance = ScaffoldingBlock::DISTANCE_3;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_TRUE;
    registry[15982] = block;
  }

  { // ID: 15983
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_FALSE;
    block->distance = ScaffoldingBlock::DISTANCE_3;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_FALSE;
    registry[15983] = block;
  }

  { // ID: 15984
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_FALSE;
    block->distance = ScaffoldingBlock::DISTANCE_4;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_TRUE;
    registry[15984] = block;
  }

  { // ID: 15985
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_FALSE;
    block->distance = ScaffoldingBlock::DISTANCE_4;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_FALSE;
    registry[15985] = block;
  }

  { // ID: 15986
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_FALSE;
    block->distance = ScaffoldingBlock::DISTANCE_5;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_TRUE;
    registry[15986] = block;
  }

  { // ID: 15987
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_FALSE;
    block->distance = ScaffoldingBlock::DISTANCE_5;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_FALSE;
    registry[15987] = block;
  }

  { // ID: 15988
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_FALSE;
    block->distance = ScaffoldingBlock::DISTANCE_6;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_TRUE;
    registry[15988] = block;
  }

  { // ID: 15989
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_FALSE;
    block->distance = ScaffoldingBlock::DISTANCE_6;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_FALSE;
    registry[15989] = block;
  }

  { // ID: 15990
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_FALSE;
    block->distance = ScaffoldingBlock::DISTANCE_7;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_TRUE;
    registry[15990] = block;
  }

  { // ID: 15991
    std::shared_ptr<ScaffoldingBlock> block = std::make_shared<ScaffoldingBlock>();
    block->bottom = ScaffoldingBlock::BOTTOM_FALSE;
    block->distance = ScaffoldingBlock::DISTANCE_7;
    block->waterlogged = ScaffoldingBlock::WATERLOGGED_FALSE;
    registry[15991] = block;
  }

  { // ID: 16008
    std::shared_ptr<SmokerBlock> block = std::make_shared<SmokerBlock>();
    block->facing = SmokerBlock::FACING_NORTH;
    block->lit = SmokerBlock::LIT_TRUE;
    registry[16008] = block;
  }

  { // ID: 16009
    std::shared_ptr<SmokerBlock> block = std::make_shared<SmokerBlock>();
    block->facing = SmokerBlock::FACING_NORTH;
    block->lit = SmokerBlock::LIT_FALSE;
    registry[16009] = block;
  }

  { // ID: 16010
    std::shared_ptr<SmokerBlock> block = std::make_shared<SmokerBlock>();
    block->facing = SmokerBlock::FACING_SOUTH;
    block->lit = SmokerBlock::LIT_TRUE;
    registry[16010] = block;
  }

  { // ID: 16011
    std::shared_ptr<SmokerBlock> block = std::make_shared<SmokerBlock>();
    block->facing = SmokerBlock::FACING_SOUTH;
    block->lit = SmokerBlock::LIT_FALSE;
    registry[16011] = block;
  }

  { // ID: 16012
    std::shared_ptr<SmokerBlock> block = std::make_shared<SmokerBlock>();
    block->facing = SmokerBlock::FACING_WEST;
    block->lit = SmokerBlock::LIT_TRUE;
    registry[16012] = block;
  }

  { // ID: 16013
    std::shared_ptr<SmokerBlock> block = std::make_shared<SmokerBlock>();
    block->facing = SmokerBlock::FACING_WEST;
    block->lit = SmokerBlock::LIT_FALSE;
    registry[16013] = block;
  }

  { // ID: 16014
    std::shared_ptr<SmokerBlock> block = std::make_shared<SmokerBlock>();
    block->facing = SmokerBlock::FACING_EAST;
    block->lit = SmokerBlock::LIT_TRUE;
    registry[16014] = block;
  }

  { // ID: 16015
    std::shared_ptr<SmokerBlock> block = std::make_shared<SmokerBlock>();
    block->facing = SmokerBlock::FACING_EAST;
    block->lit = SmokerBlock::LIT_FALSE;
    registry[16015] = block;
  }

  { // ID: 16054
    std::shared_ptr<SmithingTableBlock> block = std::make_shared<SmithingTableBlock>();
    registry[16054] = block;
  }

  { // ID: 16055
    std::shared_ptr<StonecutterBlock> block = std::make_shared<StonecutterBlock>();
    block->facing = StonecutterBlock::FACING_NORTH;
    registry[16055] = block;
  }

  { // ID: 16056
    std::shared_ptr<StonecutterBlock> block = std::make_shared<StonecutterBlock>();
    block->facing = StonecutterBlock::FACING_SOUTH;
    registry[16056] = block;
  }

  { // ID: 16057
    std::shared_ptr<StonecutterBlock> block = std::make_shared<StonecutterBlock>();
    block->facing = StonecutterBlock::FACING_WEST;
    registry[16057] = block;
  }

  { // ID: 16058
    std::shared_ptr<StonecutterBlock> block = std::make_shared<StonecutterBlock>();
    block->facing = StonecutterBlock::FACING_EAST;
    registry[16058] = block;
  }

  { // ID: 16095
    std::shared_ptr<SoulLanternBlock> block = std::make_shared<SoulLanternBlock>();
    block->hanging = SoulLanternBlock::HANGING_TRUE;
    block->waterlogged = SoulLanternBlock::WATERLOGGED_TRUE;
    registry[16095] = block;
  }

  { // ID: 16096
    std::shared_ptr<SoulLanternBlock> block = std::make_shared<SoulLanternBlock>();
    block->hanging = SoulLanternBlock::HANGING_TRUE;
    block->waterlogged = SoulLanternBlock::WATERLOGGED_FALSE;
    registry[16096] = block;
  }

  { // ID: 16097
    std::shared_ptr<SoulLanternBlock> block = std::make_shared<SoulLanternBlock>();
    block->hanging = SoulLanternBlock::HANGING_FALSE;
    block->waterlogged = SoulLanternBlock::WATERLOGGED_TRUE;
    registry[16097] = block;
  }

  { // ID: 16098
    std::shared_ptr<SoulLanternBlock> block = std::make_shared<SoulLanternBlock>();
    block->hanging = SoulLanternBlock::HANGING_FALSE;
    block->waterlogged = SoulLanternBlock::WATERLOGGED_FALSE;
    registry[16098] = block;
  }

  { // ID: 16131
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_NORTH;
    block->lit = SoulCampfireBlock::LIT_TRUE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_TRUE;
    registry[16131] = block;
  }

  { // ID: 16132
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_NORTH;
    block->lit = SoulCampfireBlock::LIT_TRUE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_FALSE;
    registry[16132] = block;
  }

  { // ID: 16133
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_NORTH;
    block->lit = SoulCampfireBlock::LIT_TRUE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_TRUE;
    registry[16133] = block;
  }

  { // ID: 16134
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_NORTH;
    block->lit = SoulCampfireBlock::LIT_TRUE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_FALSE;
    registry[16134] = block;
  }

  { // ID: 16135
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_NORTH;
    block->lit = SoulCampfireBlock::LIT_FALSE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_TRUE;
    registry[16135] = block;
  }

  { // ID: 16136
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_NORTH;
    block->lit = SoulCampfireBlock::LIT_FALSE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_FALSE;
    registry[16136] = block;
  }

  { // ID: 16137
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_NORTH;
    block->lit = SoulCampfireBlock::LIT_FALSE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_TRUE;
    registry[16137] = block;
  }

  { // ID: 16138
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_NORTH;
    block->lit = SoulCampfireBlock::LIT_FALSE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_FALSE;
    registry[16138] = block;
  }

  { // ID: 16139
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_SOUTH;
    block->lit = SoulCampfireBlock::LIT_TRUE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_TRUE;
    registry[16139] = block;
  }

  { // ID: 16140
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_SOUTH;
    block->lit = SoulCampfireBlock::LIT_TRUE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_FALSE;
    registry[16140] = block;
  }

  { // ID: 16141
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_SOUTH;
    block->lit = SoulCampfireBlock::LIT_TRUE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_TRUE;
    registry[16141] = block;
  }

  { // ID: 16142
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_SOUTH;
    block->lit = SoulCampfireBlock::LIT_TRUE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_FALSE;
    registry[16142] = block;
  }

  { // ID: 16143
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_SOUTH;
    block->lit = SoulCampfireBlock::LIT_FALSE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_TRUE;
    registry[16143] = block;
  }

  { // ID: 16144
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_SOUTH;
    block->lit = SoulCampfireBlock::LIT_FALSE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_FALSE;
    registry[16144] = block;
  }

  { // ID: 16145
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_SOUTH;
    block->lit = SoulCampfireBlock::LIT_FALSE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_TRUE;
    registry[16145] = block;
  }

  { // ID: 16146
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_SOUTH;
    block->lit = SoulCampfireBlock::LIT_FALSE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_FALSE;
    registry[16146] = block;
  }

  { // ID: 16147
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_WEST;
    block->lit = SoulCampfireBlock::LIT_TRUE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_TRUE;
    registry[16147] = block;
  }

  { // ID: 16148
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_WEST;
    block->lit = SoulCampfireBlock::LIT_TRUE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_FALSE;
    registry[16148] = block;
  }

  { // ID: 16149
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_WEST;
    block->lit = SoulCampfireBlock::LIT_TRUE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_TRUE;
    registry[16149] = block;
  }

  { // ID: 16150
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_WEST;
    block->lit = SoulCampfireBlock::LIT_TRUE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_FALSE;
    registry[16150] = block;
  }

  { // ID: 16151
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_WEST;
    block->lit = SoulCampfireBlock::LIT_FALSE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_TRUE;
    registry[16151] = block;
  }

  { // ID: 16152
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_WEST;
    block->lit = SoulCampfireBlock::LIT_FALSE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_FALSE;
    registry[16152] = block;
  }

  { // ID: 16153
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_WEST;
    block->lit = SoulCampfireBlock::LIT_FALSE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_TRUE;
    registry[16153] = block;
  }

  { // ID: 16154
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_WEST;
    block->lit = SoulCampfireBlock::LIT_FALSE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_FALSE;
    registry[16154] = block;
  }

  { // ID: 16155
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_EAST;
    block->lit = SoulCampfireBlock::LIT_TRUE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_TRUE;
    registry[16155] = block;
  }

  { // ID: 16156
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_EAST;
    block->lit = SoulCampfireBlock::LIT_TRUE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_FALSE;
    registry[16156] = block;
  }

  { // ID: 16157
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_EAST;
    block->lit = SoulCampfireBlock::LIT_TRUE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_TRUE;
    registry[16157] = block;
  }

  { // ID: 16158
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_EAST;
    block->lit = SoulCampfireBlock::LIT_TRUE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_FALSE;
    registry[16158] = block;
  }

  { // ID: 16159
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_EAST;
    block->lit = SoulCampfireBlock::LIT_FALSE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_TRUE;
    registry[16159] = block;
  }

  { // ID: 16160
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_EAST;
    block->lit = SoulCampfireBlock::LIT_FALSE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_FALSE;
    registry[16160] = block;
  }

  { // ID: 16161
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_EAST;
    block->lit = SoulCampfireBlock::LIT_FALSE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_TRUE;
    registry[16161] = block;
  }

  { // ID: 16162
    std::shared_ptr<SoulCampfireBlock> block = std::make_shared<SoulCampfireBlock>();
    block->facing = SoulCampfireBlock::FACING_EAST;
    block->lit = SoulCampfireBlock::LIT_FALSE;
    block->signal_fire = SoulCampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = SoulCampfireBlock::WATERLOGGED_FALSE;
    registry[16162] = block;
  }

  { // ID: 16163
    std::shared_ptr<SweetBerryBushBlock> block = std::make_shared<SweetBerryBushBlock>();
    block->age = SweetBerryBushBlock::AGE_0;
    registry[16163] = block;
  }

  { // ID: 16164
    std::shared_ptr<SweetBerryBushBlock> block = std::make_shared<SweetBerryBushBlock>();
    block->age = SweetBerryBushBlock::AGE_1;
    registry[16164] = block;
  }

  { // ID: 16165
    std::shared_ptr<SweetBerryBushBlock> block = std::make_shared<SweetBerryBushBlock>();
    block->age = SweetBerryBushBlock::AGE_2;
    registry[16165] = block;
  }

  { // ID: 16166
    std::shared_ptr<SweetBerryBushBlock> block = std::make_shared<SweetBerryBushBlock>();
    block->age = SweetBerryBushBlock::AGE_3;
    registry[16166] = block;
  }

  { // ID: 16170
    std::shared_ptr<StrippedWarpedStemBlock> block = std::make_shared<StrippedWarpedStemBlock>();
    block->axis = StrippedWarpedStemBlock::AXIS_X;
    registry[16170] = block;
  }

  { // ID: 16171
    std::shared_ptr<StrippedWarpedStemBlock> block = std::make_shared<StrippedWarpedStemBlock>();
    block->axis = StrippedWarpedStemBlock::AXIS_Y;
    registry[16171] = block;
  }

  { // ID: 16172
    std::shared_ptr<StrippedWarpedStemBlock> block = std::make_shared<StrippedWarpedStemBlock>();
    block->axis = StrippedWarpedStemBlock::AXIS_Z;
    registry[16172] = block;
  }

  { // ID: 16176
    std::shared_ptr<StrippedWarpedHyphaeBlock> block = std::make_shared<StrippedWarpedHyphaeBlock>();
    block->axis = StrippedWarpedHyphaeBlock::AXIS_X;
    registry[16176] = block;
  }

  { // ID: 16177
    std::shared_ptr<StrippedWarpedHyphaeBlock> block = std::make_shared<StrippedWarpedHyphaeBlock>();
    block->axis = StrippedWarpedHyphaeBlock::AXIS_Y;
    registry[16177] = block;
  }

  { // ID: 16178
    std::shared_ptr<StrippedWarpedHyphaeBlock> block = std::make_shared<StrippedWarpedHyphaeBlock>();
    block->axis = StrippedWarpedHyphaeBlock::AXIS_Z;
    registry[16178] = block;
  }

  { // ID: 16187
    std::shared_ptr<StrippedCrimsonStemBlock> block = std::make_shared<StrippedCrimsonStemBlock>();
    block->axis = StrippedCrimsonStemBlock::AXIS_X;
    registry[16187] = block;
  }

  { // ID: 16188
    std::shared_ptr<StrippedCrimsonStemBlock> block = std::make_shared<StrippedCrimsonStemBlock>();
    block->axis = StrippedCrimsonStemBlock::AXIS_Y;
    registry[16188] = block;
  }

  { // ID: 16189
    std::shared_ptr<StrippedCrimsonStemBlock> block = std::make_shared<StrippedCrimsonStemBlock>();
    block->axis = StrippedCrimsonStemBlock::AXIS_Z;
    registry[16189] = block;
  }

  { // ID: 16193
    std::shared_ptr<StrippedCrimsonHyphaeBlock> block = std::make_shared<StrippedCrimsonHyphaeBlock>();
    block->axis = StrippedCrimsonHyphaeBlock::AXIS_X;
    registry[16193] = block;
  }

  { // ID: 16194
    std::shared_ptr<StrippedCrimsonHyphaeBlock> block = std::make_shared<StrippedCrimsonHyphaeBlock>();
    block->axis = StrippedCrimsonHyphaeBlock::AXIS_Y;
    registry[16194] = block;
  }

  { // ID: 16195
    std::shared_ptr<StrippedCrimsonHyphaeBlock> block = std::make_shared<StrippedCrimsonHyphaeBlock>();
    block->axis = StrippedCrimsonHyphaeBlock::AXIS_Z;
    registry[16195] = block;
  }

  { // ID: 16198
    std::shared_ptr<ShroomlightBlock> block = std::make_shared<ShroomlightBlock>();
    registry[16198] = block;
  }

  { // ID: 16944
    std::shared_ptr<StructureBlockBlock> block = std::make_shared<StructureBlockBlock>();
    block->mode = StructureBlockBlock::MODE_SAVE;
    registry[16944] = block;
  }

  { // ID: 16945
    std::shared_ptr<StructureBlockBlock> block = std::make_shared<StructureBlockBlock>();
    block->mode = StructureBlockBlock::MODE_LOAD;
    registry[16945] = block;
  }

  { // ID: 16946
    std::shared_ptr<StructureBlockBlock> block = std::make_shared<StructureBlockBlock>();
    block->mode = StructureBlockBlock::MODE_CORNER;
    registry[16946] = block;
  }

  { // ID: 16947
    std::shared_ptr<StructureBlockBlock> block = std::make_shared<StructureBlockBlock>();
    block->mode = StructureBlockBlock::MODE_DATA;
    registry[16947] = block;
  }

  { // ID: 18657
    std::shared_ptr<SmallAmethystBudBlock> block = std::make_shared<SmallAmethystBudBlock>();
    block->facing = SmallAmethystBudBlock::FACING_NORTH;
    block->waterlogged = SmallAmethystBudBlock::WATERLOGGED_TRUE;
    registry[18657] = block;
  }

  { // ID: 18658
    std::shared_ptr<SmallAmethystBudBlock> block = std::make_shared<SmallAmethystBudBlock>();
    block->facing = SmallAmethystBudBlock::FACING_NORTH;
    block->waterlogged = SmallAmethystBudBlock::WATERLOGGED_FALSE;
    registry[18658] = block;
  }

  { // ID: 18659
    std::shared_ptr<SmallAmethystBudBlock> block = std::make_shared<SmallAmethystBudBlock>();
    block->facing = SmallAmethystBudBlock::FACING_EAST;
    block->waterlogged = SmallAmethystBudBlock::WATERLOGGED_TRUE;
    registry[18659] = block;
  }

  { // ID: 18660
    std::shared_ptr<SmallAmethystBudBlock> block = std::make_shared<SmallAmethystBudBlock>();
    block->facing = SmallAmethystBudBlock::FACING_EAST;
    block->waterlogged = SmallAmethystBudBlock::WATERLOGGED_FALSE;
    registry[18660] = block;
  }

  { // ID: 18661
    std::shared_ptr<SmallAmethystBudBlock> block = std::make_shared<SmallAmethystBudBlock>();
    block->facing = SmallAmethystBudBlock::FACING_SOUTH;
    block->waterlogged = SmallAmethystBudBlock::WATERLOGGED_TRUE;
    registry[18661] = block;
  }

  { // ID: 18662
    std::shared_ptr<SmallAmethystBudBlock> block = std::make_shared<SmallAmethystBudBlock>();
    block->facing = SmallAmethystBudBlock::FACING_SOUTH;
    block->waterlogged = SmallAmethystBudBlock::WATERLOGGED_FALSE;
    registry[18662] = block;
  }

  { // ID: 18663
    std::shared_ptr<SmallAmethystBudBlock> block = std::make_shared<SmallAmethystBudBlock>();
    block->facing = SmallAmethystBudBlock::FACING_WEST;
    block->waterlogged = SmallAmethystBudBlock::WATERLOGGED_TRUE;
    registry[18663] = block;
  }

  { // ID: 18664
    std::shared_ptr<SmallAmethystBudBlock> block = std::make_shared<SmallAmethystBudBlock>();
    block->facing = SmallAmethystBudBlock::FACING_WEST;
    block->waterlogged = SmallAmethystBudBlock::WATERLOGGED_FALSE;
    registry[18664] = block;
  }

  { // ID: 18665
    std::shared_ptr<SmallAmethystBudBlock> block = std::make_shared<SmallAmethystBudBlock>();
    block->facing = SmallAmethystBudBlock::FACING_UP;
    block->waterlogged = SmallAmethystBudBlock::WATERLOGGED_TRUE;
    registry[18665] = block;
  }

  { // ID: 18666
    std::shared_ptr<SmallAmethystBudBlock> block = std::make_shared<SmallAmethystBudBlock>();
    block->facing = SmallAmethystBudBlock::FACING_UP;
    block->waterlogged = SmallAmethystBudBlock::WATERLOGGED_FALSE;
    registry[18666] = block;
  }

  { // ID: 18667
    std::shared_ptr<SmallAmethystBudBlock> block = std::make_shared<SmallAmethystBudBlock>();
    block->facing = SmallAmethystBudBlock::FACING_DOWN;
    block->waterlogged = SmallAmethystBudBlock::WATERLOGGED_TRUE;
    registry[18667] = block;
  }

  { // ID: 18668
    std::shared_ptr<SmallAmethystBudBlock> block = std::make_shared<SmallAmethystBudBlock>();
    block->facing = SmallAmethystBudBlock::FACING_DOWN;
    block->waterlogged = SmallAmethystBudBlock::WATERLOGGED_FALSE;
    registry[18668] = block;
  }

  { // ID: 18673
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_0;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18673] = block;
  }

  { // ID: 18674
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_0;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18674] = block;
  }

  { // ID: 18675
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_0;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18675] = block;
  }

  { // ID: 18676
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_0;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18676] = block;
  }

  { // ID: 18677
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_0;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18677] = block;
  }

  { // ID: 18678
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_0;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18678] = block;
  }

  { // ID: 18679
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_1;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18679] = block;
  }

  { // ID: 18680
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_1;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18680] = block;
  }

  { // ID: 18681
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_1;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18681] = block;
  }

  { // ID: 18682
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_1;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18682] = block;
  }

  { // ID: 18683
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_1;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18683] = block;
  }

  { // ID: 18684
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_1;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18684] = block;
  }

  { // ID: 18685
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_2;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18685] = block;
  }

  { // ID: 18686
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_2;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18686] = block;
  }

  { // ID: 18687
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_2;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18687] = block;
  }

  { // ID: 18688
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_2;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18688] = block;
  }

  { // ID: 18689
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_2;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18689] = block;
  }

  { // ID: 18690
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_2;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18690] = block;
  }

  { // ID: 18691
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_3;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18691] = block;
  }

  { // ID: 18692
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_3;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18692] = block;
  }

  { // ID: 18693
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_3;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18693] = block;
  }

  { // ID: 18694
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_3;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18694] = block;
  }

  { // ID: 18695
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_3;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18695] = block;
  }

  { // ID: 18696
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_3;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18696] = block;
  }

  { // ID: 18697
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_4;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18697] = block;
  }

  { // ID: 18698
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_4;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18698] = block;
  }

  { // ID: 18699
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_4;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18699] = block;
  }

  { // ID: 18700
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_4;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18700] = block;
  }

  { // ID: 18701
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_4;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18701] = block;
  }

  { // ID: 18702
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_4;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18702] = block;
  }

  { // ID: 18703
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_5;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18703] = block;
  }

  { // ID: 18704
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_5;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18704] = block;
  }

  { // ID: 18705
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_5;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18705] = block;
  }

  { // ID: 18706
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_5;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18706] = block;
  }

  { // ID: 18707
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_5;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18707] = block;
  }

  { // ID: 18708
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_5;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18708] = block;
  }

  { // ID: 18709
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_6;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18709] = block;
  }

  { // ID: 18710
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_6;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18710] = block;
  }

  { // ID: 18711
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_6;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18711] = block;
  }

  { // ID: 18712
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_6;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18712] = block;
  }

  { // ID: 18713
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_6;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18713] = block;
  }

  { // ID: 18714
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_6;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18714] = block;
  }

  { // ID: 18715
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_7;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18715] = block;
  }

  { // ID: 18716
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_7;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18716] = block;
  }

  { // ID: 18717
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_7;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18717] = block;
  }

  { // ID: 18718
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_7;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18718] = block;
  }

  { // ID: 18719
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_7;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18719] = block;
  }

  { // ID: 18720
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_7;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18720] = block;
  }

  { // ID: 18721
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_8;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18721] = block;
  }

  { // ID: 18722
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_8;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18722] = block;
  }

  { // ID: 18723
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_8;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18723] = block;
  }

  { // ID: 18724
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_8;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18724] = block;
  }

  { // ID: 18725
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_8;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18725] = block;
  }

  { // ID: 18726
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_8;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18726] = block;
  }

  { // ID: 18727
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_9;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18727] = block;
  }

  { // ID: 18728
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_9;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18728] = block;
  }

  { // ID: 18729
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_9;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18729] = block;
  }

  { // ID: 18730
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_9;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18730] = block;
  }

  { // ID: 18731
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_9;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18731] = block;
  }

  { // ID: 18732
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_9;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18732] = block;
  }

  { // ID: 18733
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_10;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18733] = block;
  }

  { // ID: 18734
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_10;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18734] = block;
  }

  { // ID: 18735
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_10;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18735] = block;
  }

  { // ID: 18736
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_10;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18736] = block;
  }

  { // ID: 18737
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_10;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18737] = block;
  }

  { // ID: 18738
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_10;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18738] = block;
  }

  { // ID: 18739
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_11;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18739] = block;
  }

  { // ID: 18740
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_11;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18740] = block;
  }

  { // ID: 18741
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_11;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18741] = block;
  }

  { // ID: 18742
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_11;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18742] = block;
  }

  { // ID: 18743
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_11;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18743] = block;
  }

  { // ID: 18744
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_11;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18744] = block;
  }

  { // ID: 18745
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_12;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18745] = block;
  }

  { // ID: 18746
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_12;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18746] = block;
  }

  { // ID: 18747
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_12;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18747] = block;
  }

  { // ID: 18748
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_12;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18748] = block;
  }

  { // ID: 18749
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_12;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18749] = block;
  }

  { // ID: 18750
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_12;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18750] = block;
  }

  { // ID: 18751
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_13;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18751] = block;
  }

  { // ID: 18752
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_13;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18752] = block;
  }

  { // ID: 18753
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_13;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18753] = block;
  }

  { // ID: 18754
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_13;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18754] = block;
  }

  { // ID: 18755
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_13;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18755] = block;
  }

  { // ID: 18756
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_13;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18756] = block;
  }

  { // ID: 18757
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_14;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18757] = block;
  }

  { // ID: 18758
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_14;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18758] = block;
  }

  { // ID: 18759
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_14;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18759] = block;
  }

  { // ID: 18760
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_14;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18760] = block;
  }

  { // ID: 18761
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_14;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18761] = block;
  }

  { // ID: 18762
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_14;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18762] = block;
  }

  { // ID: 18763
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_15;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18763] = block;
  }

  { // ID: 18764
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_15;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_INACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18764] = block;
  }

  { // ID: 18765
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_15;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18765] = block;
  }

  { // ID: 18766
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_15;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_ACTIVE;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18766] = block;
  }

  { // ID: 18767
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_15;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_TRUE;
    registry[18767] = block;
  }

  { // ID: 18768
    std::shared_ptr<SculkSensorBlock> block = std::make_shared<SculkSensorBlock>();
    block->power = SculkSensorBlock::POWER_15;
    block->sculk_sensor_phase = SculkSensorBlock::SCULK_SENSOR_PHASE_COOLDOWN;
    block->waterlogged = SculkSensorBlock::WATERLOGGED_FALSE;
    registry[18768] = block;
  }

  { // ID: 18769
    std::shared_ptr<SculkBlock> block = std::make_shared<SculkBlock>();
    registry[18769] = block;
  }

  { // ID: 18770
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18770] = block;
  }

  { // ID: 18771
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18771] = block;
  }

  { // ID: 18772
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18772] = block;
  }

  { // ID: 18773
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18773] = block;
  }

  { // ID: 18774
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18774] = block;
  }

  { // ID: 18775
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18775] = block;
  }

  { // ID: 18776
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18776] = block;
  }

  { // ID: 18777
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18777] = block;
  }

  { // ID: 18778
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18778] = block;
  }

  { // ID: 18779
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18779] = block;
  }

  { // ID: 18780
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18780] = block;
  }

  { // ID: 18781
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18781] = block;
  }

  { // ID: 18782
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18782] = block;
  }

  { // ID: 18783
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18783] = block;
  }

  { // ID: 18784
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18784] = block;
  }

  { // ID: 18785
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18785] = block;
  }

  { // ID: 18786
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18786] = block;
  }

  { // ID: 18787
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18787] = block;
  }

  { // ID: 18788
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18788] = block;
  }

  { // ID: 18789
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18789] = block;
  }

  { // ID: 18790
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18790] = block;
  }

  { // ID: 18791
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18791] = block;
  }

  { // ID: 18792
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18792] = block;
  }

  { // ID: 18793
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18793] = block;
  }

  { // ID: 18794
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18794] = block;
  }

  { // ID: 18795
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18795] = block;
  }

  { // ID: 18796
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18796] = block;
  }

  { // ID: 18797
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18797] = block;
  }

  { // ID: 18798
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18798] = block;
  }

  { // ID: 18799
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18799] = block;
  }

  { // ID: 18800
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18800] = block;
  }

  { // ID: 18801
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18801] = block;
  }

  { // ID: 18802
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18802] = block;
  }

  { // ID: 18803
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18803] = block;
  }

  { // ID: 18804
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18804] = block;
  }

  { // ID: 18805
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18805] = block;
  }

  { // ID: 18806
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18806] = block;
  }

  { // ID: 18807
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18807] = block;
  }

  { // ID: 18808
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18808] = block;
  }

  { // ID: 18809
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18809] = block;
  }

  { // ID: 18810
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18810] = block;
  }

  { // ID: 18811
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18811] = block;
  }

  { // ID: 18812
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18812] = block;
  }

  { // ID: 18813
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18813] = block;
  }

  { // ID: 18814
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18814] = block;
  }

  { // ID: 18815
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18815] = block;
  }

  { // ID: 18816
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18816] = block;
  }

  { // ID: 18817
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18817] = block;
  }

  { // ID: 18818
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18818] = block;
  }

  { // ID: 18819
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18819] = block;
  }

  { // ID: 18820
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18820] = block;
  }

  { // ID: 18821
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18821] = block;
  }

  { // ID: 18822
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18822] = block;
  }

  { // ID: 18823
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18823] = block;
  }

  { // ID: 18824
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18824] = block;
  }

  { // ID: 18825
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18825] = block;
  }

  { // ID: 18826
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18826] = block;
  }

  { // ID: 18827
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18827] = block;
  }

  { // ID: 18828
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18828] = block;
  }

  { // ID: 18829
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18829] = block;
  }

  { // ID: 18830
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18830] = block;
  }

  { // ID: 18831
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18831] = block;
  }

  { // ID: 18832
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18832] = block;
  }

  { // ID: 18833
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_TRUE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18833] = block;
  }

  { // ID: 18834
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18834] = block;
  }

  { // ID: 18835
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18835] = block;
  }

  { // ID: 18836
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18836] = block;
  }

  { // ID: 18837
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18837] = block;
  }

  { // ID: 18838
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18838] = block;
  }

  { // ID: 18839
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18839] = block;
  }

  { // ID: 18840
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18840] = block;
  }

  { // ID: 18841
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18841] = block;
  }

  { // ID: 18842
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18842] = block;
  }

  { // ID: 18843
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18843] = block;
  }

  { // ID: 18844
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18844] = block;
  }

  { // ID: 18845
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18845] = block;
  }

  { // ID: 18846
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18846] = block;
  }

  { // ID: 18847
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18847] = block;
  }

  { // ID: 18848
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18848] = block;
  }

  { // ID: 18849
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18849] = block;
  }

  { // ID: 18850
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18850] = block;
  }

  { // ID: 18851
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18851] = block;
  }

  { // ID: 18852
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18852] = block;
  }

  { // ID: 18853
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18853] = block;
  }

  { // ID: 18854
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18854] = block;
  }

  { // ID: 18855
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18855] = block;
  }

  { // ID: 18856
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18856] = block;
  }

  { // ID: 18857
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18857] = block;
  }

  { // ID: 18858
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18858] = block;
  }

  { // ID: 18859
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18859] = block;
  }

  { // ID: 18860
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18860] = block;
  }

  { // ID: 18861
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18861] = block;
  }

  { // ID: 18862
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18862] = block;
  }

  { // ID: 18863
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18863] = block;
  }

  { // ID: 18864
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18864] = block;
  }

  { // ID: 18865
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_TRUE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18865] = block;
  }

  { // ID: 18866
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18866] = block;
  }

  { // ID: 18867
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18867] = block;
  }

  { // ID: 18868
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18868] = block;
  }

  { // ID: 18869
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18869] = block;
  }

  { // ID: 18870
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18870] = block;
  }

  { // ID: 18871
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18871] = block;
  }

  { // ID: 18872
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18872] = block;
  }

  { // ID: 18873
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18873] = block;
  }

  { // ID: 18874
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18874] = block;
  }

  { // ID: 18875
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18875] = block;
  }

  { // ID: 18876
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18876] = block;
  }

  { // ID: 18877
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18877] = block;
  }

  { // ID: 18878
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18878] = block;
  }

  { // ID: 18879
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18879] = block;
  }

  { // ID: 18880
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18880] = block;
  }

  { // ID: 18881
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_TRUE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18881] = block;
  }

  { // ID: 18882
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18882] = block;
  }

  { // ID: 18883
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18883] = block;
  }

  { // ID: 18884
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18884] = block;
  }

  { // ID: 18885
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18885] = block;
  }

  { // ID: 18886
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18886] = block;
  }

  { // ID: 18887
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18887] = block;
  }

  { // ID: 18888
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18888] = block;
  }

  { // ID: 18889
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_TRUE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18889] = block;
  }

  { // ID: 18890
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18890] = block;
  }

  { // ID: 18891
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18891] = block;
  }

  { // ID: 18892
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18892] = block;
  }

  { // ID: 18893
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_TRUE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18893] = block;
  }

  { // ID: 18894
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18894] = block;
  }

  { // ID: 18895
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_TRUE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18895] = block;
  }

  { // ID: 18896
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_TRUE;
    registry[18896] = block;
  }

  { // ID: 18897
    std::shared_ptr<SculkVeinBlock> block = std::make_shared<SculkVeinBlock>();
    block->down = SculkVeinBlock::DOWN_FALSE;
    block->east = SculkVeinBlock::EAST_FALSE;
    block->north = SculkVeinBlock::NORTH_FALSE;
    block->south = SculkVeinBlock::SOUTH_FALSE;
    block->up = SculkVeinBlock::UP_FALSE;
    block->waterlogged = SculkVeinBlock::WATERLOGGED_FALSE;
    block->west = SculkVeinBlock::WEST_FALSE;
    registry[18897] = block;
  }

  { // ID: 18898
    std::shared_ptr<SculkCatalystBlock> block = std::make_shared<SculkCatalystBlock>();
    block->bloom = SculkCatalystBlock::BLOOM_TRUE;
    registry[18898] = block;
  }

  { // ID: 18899
    std::shared_ptr<SculkCatalystBlock> block = std::make_shared<SculkCatalystBlock>();
    block->bloom = SculkCatalystBlock::BLOOM_FALSE;
    registry[18899] = block;
  }

  { // ID: 18900
    std::shared_ptr<SculkShriekerBlock> block = std::make_shared<SculkShriekerBlock>();
    block->can_summon = SculkShriekerBlock::CAN_SUMMON_TRUE;
    block->shrieking = SculkShriekerBlock::SHRIEKING_TRUE;
    block->waterlogged = SculkShriekerBlock::WATERLOGGED_TRUE;
    registry[18900] = block;
  }

  { // ID: 18901
    std::shared_ptr<SculkShriekerBlock> block = std::make_shared<SculkShriekerBlock>();
    block->can_summon = SculkShriekerBlock::CAN_SUMMON_TRUE;
    block->shrieking = SculkShriekerBlock::SHRIEKING_TRUE;
    block->waterlogged = SculkShriekerBlock::WATERLOGGED_FALSE;
    registry[18901] = block;
  }

  { // ID: 18902
    std::shared_ptr<SculkShriekerBlock> block = std::make_shared<SculkShriekerBlock>();
    block->can_summon = SculkShriekerBlock::CAN_SUMMON_TRUE;
    block->shrieking = SculkShriekerBlock::SHRIEKING_FALSE;
    block->waterlogged = SculkShriekerBlock::WATERLOGGED_TRUE;
    registry[18902] = block;
  }

  { // ID: 18903
    std::shared_ptr<SculkShriekerBlock> block = std::make_shared<SculkShriekerBlock>();
    block->can_summon = SculkShriekerBlock::CAN_SUMMON_TRUE;
    block->shrieking = SculkShriekerBlock::SHRIEKING_FALSE;
    block->waterlogged = SculkShriekerBlock::WATERLOGGED_FALSE;
    registry[18903] = block;
  }

  { // ID: 18904
    std::shared_ptr<SculkShriekerBlock> block = std::make_shared<SculkShriekerBlock>();
    block->can_summon = SculkShriekerBlock::CAN_SUMMON_FALSE;
    block->shrieking = SculkShriekerBlock::SHRIEKING_TRUE;
    block->waterlogged = SculkShriekerBlock::WATERLOGGED_TRUE;
    registry[18904] = block;
  }

  { // ID: 18905
    std::shared_ptr<SculkShriekerBlock> block = std::make_shared<SculkShriekerBlock>();
    block->can_summon = SculkShriekerBlock::CAN_SUMMON_FALSE;
    block->shrieking = SculkShriekerBlock::SHRIEKING_TRUE;
    block->waterlogged = SculkShriekerBlock::WATERLOGGED_FALSE;
    registry[18905] = block;
  }

  { // ID: 18906
    std::shared_ptr<SculkShriekerBlock> block = std::make_shared<SculkShriekerBlock>();
    block->can_summon = SculkShriekerBlock::CAN_SUMMON_FALSE;
    block->shrieking = SculkShriekerBlock::SHRIEKING_FALSE;
    block->waterlogged = SculkShriekerBlock::WATERLOGGED_TRUE;
    registry[18906] = block;
  }

  { // ID: 18907
    std::shared_ptr<SculkShriekerBlock> block = std::make_shared<SculkShriekerBlock>();
    block->can_summon = SculkShriekerBlock::CAN_SUMMON_FALSE;
    block->shrieking = SculkShriekerBlock::SHRIEKING_FALSE;
    block->waterlogged = SculkShriekerBlock::WATERLOGGED_FALSE;
    registry[18907] = block;
  }

  { // ID: 19713
    std::shared_ptr<SporeBlossomBlock> block = std::make_shared<SporeBlossomBlock>();
    registry[19713] = block;
  }

  { // ID: 19758
    std::shared_ptr<SmallDripleafBlock> block = std::make_shared<SmallDripleafBlock>();
    block->facing = SmallDripleafBlock::FACING_NORTH;
    block->half = SmallDripleafBlock::HALF_UPPER;
    block->waterlogged = SmallDripleafBlock::WATERLOGGED_TRUE;
    registry[19758] = block;
  }

  { // ID: 19759
    std::shared_ptr<SmallDripleafBlock> block = std::make_shared<SmallDripleafBlock>();
    block->facing = SmallDripleafBlock::FACING_NORTH;
    block->half = SmallDripleafBlock::HALF_UPPER;
    block->waterlogged = SmallDripleafBlock::WATERLOGGED_FALSE;
    registry[19759] = block;
  }

  { // ID: 19760
    std::shared_ptr<SmallDripleafBlock> block = std::make_shared<SmallDripleafBlock>();
    block->facing = SmallDripleafBlock::FACING_NORTH;
    block->half = SmallDripleafBlock::HALF_LOWER;
    block->waterlogged = SmallDripleafBlock::WATERLOGGED_TRUE;
    registry[19760] = block;
  }

  { // ID: 19761
    std::shared_ptr<SmallDripleafBlock> block = std::make_shared<SmallDripleafBlock>();
    block->facing = SmallDripleafBlock::FACING_NORTH;
    block->half = SmallDripleafBlock::HALF_LOWER;
    block->waterlogged = SmallDripleafBlock::WATERLOGGED_FALSE;
    registry[19761] = block;
  }

  { // ID: 19762
    std::shared_ptr<SmallDripleafBlock> block = std::make_shared<SmallDripleafBlock>();
    block->facing = SmallDripleafBlock::FACING_SOUTH;
    block->half = SmallDripleafBlock::HALF_UPPER;
    block->waterlogged = SmallDripleafBlock::WATERLOGGED_TRUE;
    registry[19762] = block;
  }

  { // ID: 19763
    std::shared_ptr<SmallDripleafBlock> block = std::make_shared<SmallDripleafBlock>();
    block->facing = SmallDripleafBlock::FACING_SOUTH;
    block->half = SmallDripleafBlock::HALF_UPPER;
    block->waterlogged = SmallDripleafBlock::WATERLOGGED_FALSE;
    registry[19763] = block;
  }

  { // ID: 19764
    std::shared_ptr<SmallDripleafBlock> block = std::make_shared<SmallDripleafBlock>();
    block->facing = SmallDripleafBlock::FACING_SOUTH;
    block->half = SmallDripleafBlock::HALF_LOWER;
    block->waterlogged = SmallDripleafBlock::WATERLOGGED_TRUE;
    registry[19764] = block;
  }

  { // ID: 19765
    std::shared_ptr<SmallDripleafBlock> block = std::make_shared<SmallDripleafBlock>();
    block->facing = SmallDripleafBlock::FACING_SOUTH;
    block->half = SmallDripleafBlock::HALF_LOWER;
    block->waterlogged = SmallDripleafBlock::WATERLOGGED_FALSE;
    registry[19765] = block;
  }

  { // ID: 19766
    std::shared_ptr<SmallDripleafBlock> block = std::make_shared<SmallDripleafBlock>();
    block->facing = SmallDripleafBlock::FACING_WEST;
    block->half = SmallDripleafBlock::HALF_UPPER;
    block->waterlogged = SmallDripleafBlock::WATERLOGGED_TRUE;
    registry[19766] = block;
  }

  { // ID: 19767
    std::shared_ptr<SmallDripleafBlock> block = std::make_shared<SmallDripleafBlock>();
    block->facing = SmallDripleafBlock::FACING_WEST;
    block->half = SmallDripleafBlock::HALF_UPPER;
    block->waterlogged = SmallDripleafBlock::WATERLOGGED_FALSE;
    registry[19767] = block;
  }

  { // ID: 19768
    std::shared_ptr<SmallDripleafBlock> block = std::make_shared<SmallDripleafBlock>();
    block->facing = SmallDripleafBlock::FACING_WEST;
    block->half = SmallDripleafBlock::HALF_LOWER;
    block->waterlogged = SmallDripleafBlock::WATERLOGGED_TRUE;
    registry[19768] = block;
  }

  { // ID: 19769
    std::shared_ptr<SmallDripleafBlock> block = std::make_shared<SmallDripleafBlock>();
    block->facing = SmallDripleafBlock::FACING_WEST;
    block->half = SmallDripleafBlock::HALF_LOWER;
    block->waterlogged = SmallDripleafBlock::WATERLOGGED_FALSE;
    registry[19769] = block;
  }

  { // ID: 19770
    std::shared_ptr<SmallDripleafBlock> block = std::make_shared<SmallDripleafBlock>();
    block->facing = SmallDripleafBlock::FACING_EAST;
    block->half = SmallDripleafBlock::HALF_UPPER;
    block->waterlogged = SmallDripleafBlock::WATERLOGGED_TRUE;
    registry[19770] = block;
  }

  { // ID: 19771
    std::shared_ptr<SmallDripleafBlock> block = std::make_shared<SmallDripleafBlock>();
    block->facing = SmallDripleafBlock::FACING_EAST;
    block->half = SmallDripleafBlock::HALF_UPPER;
    block->waterlogged = SmallDripleafBlock::WATERLOGGED_FALSE;
    registry[19771] = block;
  }

  { // ID: 19772
    std::shared_ptr<SmallDripleafBlock> block = std::make_shared<SmallDripleafBlock>();
    block->facing = SmallDripleafBlock::FACING_EAST;
    block->half = SmallDripleafBlock::HALF_LOWER;
    block->waterlogged = SmallDripleafBlock::WATERLOGGED_TRUE;
    registry[19772] = block;
  }

  { // ID: 19773
    std::shared_ptr<SmallDripleafBlock> block = std::make_shared<SmallDripleafBlock>();
    block->facing = SmallDripleafBlock::FACING_EAST;
    block->half = SmallDripleafBlock::HALF_LOWER;
    block->waterlogged = SmallDripleafBlock::WATERLOGGED_FALSE;
    registry[19773] = block;
  }

  { // ID: 21431
    std::shared_ptr<SmoothBasaltBlock> block = std::make_shared<SmoothBasaltBlock>();
    registry[21431] = block;
  }
}