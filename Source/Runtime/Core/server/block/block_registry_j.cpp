

#include "block_registry.h"

#include "jack_o_lantern_block.h"
#include "jigsaw_block.h"
#include "jukebox_block.h"
#include "jungle_button_block.h"
#include "jungle_door_block.h"
#include "jungle_fence_block.h"
#include "jungle_fence_gate_block.h"
#include "jungle_leaves_block.h"
#include "jungle_log_block.h"
#include "jungle_planks_block.h"
#include "jungle_pressure_plate_block.h"
#include "jungle_sapling_block.h"
#include "jungle_sign_block.h"
#include "jungle_slab_block.h"
#include "jungle_stairs_block.h"
#include "jungle_trapdoor_block.h"
#include "jungle_wall_sign_block.h"
#include "jungle_wood_block.h"

void BlockRegistry::generateJ() {

  { // ID: 18
    std::shared_ptr<JunglePlanksBlock> block = std::make_shared<JunglePlanksBlock>();
    registry[18] = block;
  }

  { // ID: 28
    std::shared_ptr<JungleSaplingBlock> block = std::make_shared<JungleSaplingBlock>();
    block->stage = JungleSaplingBlock::STAGE_0;
    registry[28] = block;
  }

  { // ID: 29
    std::shared_ptr<JungleSaplingBlock> block = std::make_shared<JungleSaplingBlock>();
    block->stage = JungleSaplingBlock::STAGE_1;
    registry[29] = block;
  }

  { // ID: 126
    std::shared_ptr<JungleLogBlock> block = std::make_shared<JungleLogBlock>();
    block->axis = JungleLogBlock::AXIS_X;
    registry[126] = block;
  }

  { // ID: 127
    std::shared_ptr<JungleLogBlock> block = std::make_shared<JungleLogBlock>();
    block->axis = JungleLogBlock::AXIS_Y;
    registry[127] = block;
  }

  { // ID: 128
    std::shared_ptr<JungleLogBlock> block = std::make_shared<JungleLogBlock>();
    block->axis = JungleLogBlock::AXIS_Z;
    registry[128] = block;
  }

  { // ID: 173
    std::shared_ptr<JungleWoodBlock> block = std::make_shared<JungleWoodBlock>();
    block->axis = JungleWoodBlock::AXIS_X;
    registry[173] = block;
  }

  { // ID: 174
    std::shared_ptr<JungleWoodBlock> block = std::make_shared<JungleWoodBlock>();
    block->axis = JungleWoodBlock::AXIS_Y;
    registry[174] = block;
  }

  { // ID: 175
    std::shared_ptr<JungleWoodBlock> block = std::make_shared<JungleWoodBlock>();
    block->axis = JungleWoodBlock::AXIS_Z;
    registry[175] = block;
  }

  { // ID: 290
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_1;
    block->persistent = JungleLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_TRUE;
    registry[290] = block;
  }

  { // ID: 291
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_1;
    block->persistent = JungleLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_FALSE;
    registry[291] = block;
  }

  { // ID: 292
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_1;
    block->persistent = JungleLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_TRUE;
    registry[292] = block;
  }

  { // ID: 293
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_1;
    block->persistent = JungleLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_FALSE;
    registry[293] = block;
  }

  { // ID: 294
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_2;
    block->persistent = JungleLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_TRUE;
    registry[294] = block;
  }

  { // ID: 295
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_2;
    block->persistent = JungleLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_FALSE;
    registry[295] = block;
  }

  { // ID: 296
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_2;
    block->persistent = JungleLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_TRUE;
    registry[296] = block;
  }

  { // ID: 297
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_2;
    block->persistent = JungleLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_FALSE;
    registry[297] = block;
  }

  { // ID: 298
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_3;
    block->persistent = JungleLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_TRUE;
    registry[298] = block;
  }

  { // ID: 299
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_3;
    block->persistent = JungleLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_FALSE;
    registry[299] = block;
  }

  { // ID: 300
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_3;
    block->persistent = JungleLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_TRUE;
    registry[300] = block;
  }

  { // ID: 301
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_3;
    block->persistent = JungleLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_FALSE;
    registry[301] = block;
  }

  { // ID: 302
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_4;
    block->persistent = JungleLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_TRUE;
    registry[302] = block;
  }

  { // ID: 303
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_4;
    block->persistent = JungleLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_FALSE;
    registry[303] = block;
  }

  { // ID: 304
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_4;
    block->persistent = JungleLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_TRUE;
    registry[304] = block;
  }

  { // ID: 305
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_4;
    block->persistent = JungleLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_FALSE;
    registry[305] = block;
  }

  { // ID: 306
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_5;
    block->persistent = JungleLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_TRUE;
    registry[306] = block;
  }

  { // ID: 307
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_5;
    block->persistent = JungleLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_FALSE;
    registry[307] = block;
  }

  { // ID: 308
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_5;
    block->persistent = JungleLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_TRUE;
    registry[308] = block;
  }

  { // ID: 309
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_5;
    block->persistent = JungleLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_FALSE;
    registry[309] = block;
  }

  { // ID: 310
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_6;
    block->persistent = JungleLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_TRUE;
    registry[310] = block;
  }

  { // ID: 311
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_6;
    block->persistent = JungleLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_FALSE;
    registry[311] = block;
  }

  { // ID: 312
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_6;
    block->persistent = JungleLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_TRUE;
    registry[312] = block;
  }

  { // ID: 313
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_6;
    block->persistent = JungleLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_FALSE;
    registry[313] = block;
  }

  { // ID: 314
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_7;
    block->persistent = JungleLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_TRUE;
    registry[314] = block;
  }

  { // ID: 315
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_7;
    block->persistent = JungleLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_FALSE;
    registry[315] = block;
  }

  { // ID: 316
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_7;
    block->persistent = JungleLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_TRUE;
    registry[316] = block;
  }

  { // ID: 317
    std::shared_ptr<JungleLeavesBlock> block = std::make_shared<JungleLeavesBlock>();
    block->distance = JungleLeavesBlock::DISTANCE_7;
    block->persistent = JungleLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = JungleLeavesBlock::WATERLOGGED_FALSE;
    registry[317] = block;
  }

  { // ID: 3764
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_0;
    block->waterlogged = JungleSignBlock::WATERLOGGED_TRUE;
    registry[3764] = block;
  }

  { // ID: 3765
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_0;
    block->waterlogged = JungleSignBlock::WATERLOGGED_FALSE;
    registry[3765] = block;
  }

  { // ID: 3766
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_1;
    block->waterlogged = JungleSignBlock::WATERLOGGED_TRUE;
    registry[3766] = block;
  }

  { // ID: 3767
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_1;
    block->waterlogged = JungleSignBlock::WATERLOGGED_FALSE;
    registry[3767] = block;
  }

  { // ID: 3768
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_2;
    block->waterlogged = JungleSignBlock::WATERLOGGED_TRUE;
    registry[3768] = block;
  }

  { // ID: 3769
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_2;
    block->waterlogged = JungleSignBlock::WATERLOGGED_FALSE;
    registry[3769] = block;
  }

  { // ID: 3770
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_3;
    block->waterlogged = JungleSignBlock::WATERLOGGED_TRUE;
    registry[3770] = block;
  }

  { // ID: 3771
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_3;
    block->waterlogged = JungleSignBlock::WATERLOGGED_FALSE;
    registry[3771] = block;
  }

  { // ID: 3772
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_4;
    block->waterlogged = JungleSignBlock::WATERLOGGED_TRUE;
    registry[3772] = block;
  }

  { // ID: 3773
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_4;
    block->waterlogged = JungleSignBlock::WATERLOGGED_FALSE;
    registry[3773] = block;
  }

  { // ID: 3774
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_5;
    block->waterlogged = JungleSignBlock::WATERLOGGED_TRUE;
    registry[3774] = block;
  }

  { // ID: 3775
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_5;
    block->waterlogged = JungleSignBlock::WATERLOGGED_FALSE;
    registry[3775] = block;
  }

  { // ID: 3776
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_6;
    block->waterlogged = JungleSignBlock::WATERLOGGED_TRUE;
    registry[3776] = block;
  }

  { // ID: 3777
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_6;
    block->waterlogged = JungleSignBlock::WATERLOGGED_FALSE;
    registry[3777] = block;
  }

  { // ID: 3778
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_7;
    block->waterlogged = JungleSignBlock::WATERLOGGED_TRUE;
    registry[3778] = block;
  }

  { // ID: 3779
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_7;
    block->waterlogged = JungleSignBlock::WATERLOGGED_FALSE;
    registry[3779] = block;
  }

  { // ID: 3780
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_8;
    block->waterlogged = JungleSignBlock::WATERLOGGED_TRUE;
    registry[3780] = block;
  }

  { // ID: 3781
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_8;
    block->waterlogged = JungleSignBlock::WATERLOGGED_FALSE;
    registry[3781] = block;
  }

  { // ID: 3782
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_9;
    block->waterlogged = JungleSignBlock::WATERLOGGED_TRUE;
    registry[3782] = block;
  }

  { // ID: 3783
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_9;
    block->waterlogged = JungleSignBlock::WATERLOGGED_FALSE;
    registry[3783] = block;
  }

  { // ID: 3784
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_10;
    block->waterlogged = JungleSignBlock::WATERLOGGED_TRUE;
    registry[3784] = block;
  }

  { // ID: 3785
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_10;
    block->waterlogged = JungleSignBlock::WATERLOGGED_FALSE;
    registry[3785] = block;
  }

  { // ID: 3786
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_11;
    block->waterlogged = JungleSignBlock::WATERLOGGED_TRUE;
    registry[3786] = block;
  }

  { // ID: 3787
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_11;
    block->waterlogged = JungleSignBlock::WATERLOGGED_FALSE;
    registry[3787] = block;
  }

  { // ID: 3788
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_12;
    block->waterlogged = JungleSignBlock::WATERLOGGED_TRUE;
    registry[3788] = block;
  }

  { // ID: 3789
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_12;
    block->waterlogged = JungleSignBlock::WATERLOGGED_FALSE;
    registry[3789] = block;
  }

  { // ID: 3790
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_13;
    block->waterlogged = JungleSignBlock::WATERLOGGED_TRUE;
    registry[3790] = block;
  }

  { // ID: 3791
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_13;
    block->waterlogged = JungleSignBlock::WATERLOGGED_FALSE;
    registry[3791] = block;
  }

  { // ID: 3792
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_14;
    block->waterlogged = JungleSignBlock::WATERLOGGED_TRUE;
    registry[3792] = block;
  }

  { // ID: 3793
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_14;
    block->waterlogged = JungleSignBlock::WATERLOGGED_FALSE;
    registry[3793] = block;
  }

  { // ID: 3794
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_15;
    block->waterlogged = JungleSignBlock::WATERLOGGED_TRUE;
    registry[3794] = block;
  }

  { // ID: 3795
    std::shared_ptr<JungleSignBlock> block = std::make_shared<JungleSignBlock>();
    block->rotation = JungleSignBlock::ROTATION_15;
    block->waterlogged = JungleSignBlock::WATERLOGGED_FALSE;
    registry[3795] = block;
  }

  { // ID: 4064
    std::shared_ptr<JungleWallSignBlock> block = std::make_shared<JungleWallSignBlock>();
    block->facing = JungleWallSignBlock::FACING_NORTH;
    block->waterlogged = JungleWallSignBlock::WATERLOGGED_TRUE;
    registry[4064] = block;
  }

  { // ID: 4065
    std::shared_ptr<JungleWallSignBlock> block = std::make_shared<JungleWallSignBlock>();
    block->facing = JungleWallSignBlock::FACING_NORTH;
    block->waterlogged = JungleWallSignBlock::WATERLOGGED_FALSE;
    registry[4065] = block;
  }

  { // ID: 4066
    std::shared_ptr<JungleWallSignBlock> block = std::make_shared<JungleWallSignBlock>();
    block->facing = JungleWallSignBlock::FACING_SOUTH;
    block->waterlogged = JungleWallSignBlock::WATERLOGGED_TRUE;
    registry[4066] = block;
  }

  { // ID: 4067
    std::shared_ptr<JungleWallSignBlock> block = std::make_shared<JungleWallSignBlock>();
    block->facing = JungleWallSignBlock::FACING_SOUTH;
    block->waterlogged = JungleWallSignBlock::WATERLOGGED_FALSE;
    registry[4067] = block;
  }

  { // ID: 4068
    std::shared_ptr<JungleWallSignBlock> block = std::make_shared<JungleWallSignBlock>();
    block->facing = JungleWallSignBlock::FACING_WEST;
    block->waterlogged = JungleWallSignBlock::WATERLOGGED_TRUE;
    registry[4068] = block;
  }

  { // ID: 4069
    std::shared_ptr<JungleWallSignBlock> block = std::make_shared<JungleWallSignBlock>();
    block->facing = JungleWallSignBlock::FACING_WEST;
    block->waterlogged = JungleWallSignBlock::WATERLOGGED_FALSE;
    registry[4069] = block;
  }

  { // ID: 4070
    std::shared_ptr<JungleWallSignBlock> block = std::make_shared<JungleWallSignBlock>();
    block->facing = JungleWallSignBlock::FACING_EAST;
    block->waterlogged = JungleWallSignBlock::WATERLOGGED_TRUE;
    registry[4070] = block;
  }

  { // ID: 4071
    std::shared_ptr<JungleWallSignBlock> block = std::make_shared<JungleWallSignBlock>();
    block->facing = JungleWallSignBlock::FACING_EAST;
    block->waterlogged = JungleWallSignBlock::WATERLOGGED_FALSE;
    registry[4071] = block;
  }

  { // ID: 4184
    std::shared_ptr<JunglePressurePlateBlock> block = std::make_shared<JunglePressurePlateBlock>();
    block->powered = JunglePressurePlateBlock::POWERED_TRUE;
    registry[4184] = block;
  }

  { // ID: 4185
    std::shared_ptr<JunglePressurePlateBlock> block = std::make_shared<JunglePressurePlateBlock>();
    block->powered = JunglePressurePlateBlock::POWERED_FALSE;
    registry[4185] = block;
  }

  { // ID: 4273
    std::shared_ptr<JukeboxBlock> block = std::make_shared<JukeboxBlock>();
    block->has_record = JukeboxBlock::HAS_RECORD_TRUE;
    registry[4273] = block;
  }

  { // ID: 4274
    std::shared_ptr<JukeboxBlock> block = std::make_shared<JukeboxBlock>();
    block->has_record = JukeboxBlock::HAS_RECORD_FALSE;
    registry[4274] = block;
  }

  { // ID: 4329
    std::shared_ptr<JackOLanternBlock> block = std::make_shared<JackOLanternBlock>();
    block->facing = JackOLanternBlock::FACING_NORTH;
    registry[4329] = block;
  }

  { // ID: 4330
    std::shared_ptr<JackOLanternBlock> block = std::make_shared<JackOLanternBlock>();
    block->facing = JackOLanternBlock::FACING_SOUTH;
    registry[4330] = block;
  }

  { // ID: 4331
    std::shared_ptr<JackOLanternBlock> block = std::make_shared<JackOLanternBlock>();
    block->facing = JackOLanternBlock::FACING_WEST;
    registry[4331] = block;
  }

  { // ID: 4332
    std::shared_ptr<JackOLanternBlock> block = std::make_shared<JackOLanternBlock>();
    block->facing = JackOLanternBlock::FACING_EAST;
    registry[4332] = block;
  }

  { // ID: 4612
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_NORTH;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4612] = block;
  }

  { // ID: 4613
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_NORTH;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4613] = block;
  }

  { // ID: 4614
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_NORTH;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4614] = block;
  }

  { // ID: 4615
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_NORTH;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4615] = block;
  }

  { // ID: 4616
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_NORTH;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4616] = block;
  }

  { // ID: 4617
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_NORTH;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4617] = block;
  }

  { // ID: 4618
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_NORTH;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4618] = block;
  }

  { // ID: 4619
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_NORTH;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4619] = block;
  }

  { // ID: 4620
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_NORTH;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4620] = block;
  }

  { // ID: 4621
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_NORTH;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4621] = block;
  }

  { // ID: 4622
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_NORTH;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4622] = block;
  }

  { // ID: 4623
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_NORTH;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4623] = block;
  }

  { // ID: 4624
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_NORTH;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4624] = block;
  }

  { // ID: 4625
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_NORTH;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4625] = block;
  }

  { // ID: 4626
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_NORTH;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4626] = block;
  }

  { // ID: 4627
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_NORTH;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4627] = block;
  }

  { // ID: 4628
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_SOUTH;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4628] = block;
  }

  { // ID: 4629
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_SOUTH;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4629] = block;
  }

  { // ID: 4630
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_SOUTH;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4630] = block;
  }

  { // ID: 4631
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_SOUTH;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4631] = block;
  }

  { // ID: 4632
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_SOUTH;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4632] = block;
  }

  { // ID: 4633
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_SOUTH;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4633] = block;
  }

  { // ID: 4634
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_SOUTH;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4634] = block;
  }

  { // ID: 4635
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_SOUTH;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4635] = block;
  }

  { // ID: 4636
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_SOUTH;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4636] = block;
  }

  { // ID: 4637
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_SOUTH;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4637] = block;
  }

  { // ID: 4638
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_SOUTH;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4638] = block;
  }

  { // ID: 4639
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_SOUTH;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4639] = block;
  }

  { // ID: 4640
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_SOUTH;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4640] = block;
  }

  { // ID: 4641
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_SOUTH;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4641] = block;
  }

  { // ID: 4642
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_SOUTH;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4642] = block;
  }

  { // ID: 4643
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_SOUTH;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4643] = block;
  }

  { // ID: 4644
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_WEST;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4644] = block;
  }

  { // ID: 4645
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_WEST;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4645] = block;
  }

  { // ID: 4646
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_WEST;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4646] = block;
  }

  { // ID: 4647
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_WEST;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4647] = block;
  }

  { // ID: 4648
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_WEST;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4648] = block;
  }

  { // ID: 4649
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_WEST;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4649] = block;
  }

  { // ID: 4650
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_WEST;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4650] = block;
  }

  { // ID: 4651
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_WEST;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4651] = block;
  }

  { // ID: 4652
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_WEST;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4652] = block;
  }

  { // ID: 4653
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_WEST;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4653] = block;
  }

  { // ID: 4654
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_WEST;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4654] = block;
  }

  { // ID: 4655
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_WEST;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4655] = block;
  }

  { // ID: 4656
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_WEST;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4656] = block;
  }

  { // ID: 4657
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_WEST;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4657] = block;
  }

  { // ID: 4658
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_WEST;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4658] = block;
  }

  { // ID: 4659
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_WEST;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4659] = block;
  }

  { // ID: 4660
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_EAST;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4660] = block;
  }

  { // ID: 4661
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_EAST;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4661] = block;
  }

  { // ID: 4662
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_EAST;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4662] = block;
  }

  { // ID: 4663
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_EAST;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4663] = block;
  }

  { // ID: 4664
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_EAST;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4664] = block;
  }

  { // ID: 4665
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_EAST;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4665] = block;
  }

  { // ID: 4666
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_EAST;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4666] = block;
  }

  { // ID: 4667
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_EAST;
    block->half = JungleTrapdoorBlock::HALF_TOP;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4667] = block;
  }

  { // ID: 4668
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_EAST;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4668] = block;
  }

  { // ID: 4669
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_EAST;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4669] = block;
  }

  { // ID: 4670
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_EAST;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4670] = block;
  }

  { // ID: 4671
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_EAST;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_TRUE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4671] = block;
  }

  { // ID: 4672
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_EAST;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4672] = block;
  }

  { // ID: 4673
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_EAST;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4673] = block;
  }

  { // ID: 4674
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_EAST;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4674] = block;
  }

  { // ID: 4675
    std::shared_ptr<JungleTrapdoorBlock> block = std::make_shared<JungleTrapdoorBlock>();
    block->facing = JungleTrapdoorBlock::FACING_EAST;
    block->half = JungleTrapdoorBlock::HALF_BOTTOM;
    block->open = JungleTrapdoorBlock::OPEN_FALSE;
    block->powered = JungleTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = JungleTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4675] = block;
  }

  { // ID: 6156
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_NORTH;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6156] = block;
  }

  { // ID: 6157
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_NORTH;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6157] = block;
  }

  { // ID: 6158
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_NORTH;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6158] = block;
  }

  { // ID: 6159
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_NORTH;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6159] = block;
  }

  { // ID: 6160
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_NORTH;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6160] = block;
  }

  { // ID: 6161
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_NORTH;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6161] = block;
  }

  { // ID: 6162
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_NORTH;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6162] = block;
  }

  { // ID: 6163
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_NORTH;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6163] = block;
  }

  { // ID: 6164
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_NORTH;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6164] = block;
  }

  { // ID: 6165
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_NORTH;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6165] = block;
  }

  { // ID: 6166
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_NORTH;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6166] = block;
  }

  { // ID: 6167
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_NORTH;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6167] = block;
  }

  { // ID: 6168
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_NORTH;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6168] = block;
  }

  { // ID: 6169
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_NORTH;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6169] = block;
  }

  { // ID: 6170
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_NORTH;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6170] = block;
  }

  { // ID: 6171
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_NORTH;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6171] = block;
  }

  { // ID: 6172
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_NORTH;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6172] = block;
  }

  { // ID: 6173
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_NORTH;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6173] = block;
  }

  { // ID: 6174
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_NORTH;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6174] = block;
  }

  { // ID: 6175
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_NORTH;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6175] = block;
  }

  { // ID: 6176
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_SOUTH;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6176] = block;
  }

  { // ID: 6177
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_SOUTH;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6177] = block;
  }

  { // ID: 6178
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_SOUTH;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6178] = block;
  }

  { // ID: 6179
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_SOUTH;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6179] = block;
  }

  { // ID: 6180
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_SOUTH;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6180] = block;
  }

  { // ID: 6181
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_SOUTH;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6181] = block;
  }

  { // ID: 6182
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_SOUTH;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6182] = block;
  }

  { // ID: 6183
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_SOUTH;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6183] = block;
  }

  { // ID: 6184
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_SOUTH;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6184] = block;
  }

  { // ID: 6185
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_SOUTH;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6185] = block;
  }

  { // ID: 6186
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_SOUTH;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6186] = block;
  }

  { // ID: 6187
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_SOUTH;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6187] = block;
  }

  { // ID: 6188
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_SOUTH;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6188] = block;
  }

  { // ID: 6189
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_SOUTH;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6189] = block;
  }

  { // ID: 6190
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_SOUTH;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6190] = block;
  }

  { // ID: 6191
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_SOUTH;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6191] = block;
  }

  { // ID: 6192
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_SOUTH;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6192] = block;
  }

  { // ID: 6193
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_SOUTH;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6193] = block;
  }

  { // ID: 6194
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_SOUTH;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6194] = block;
  }

  { // ID: 6195
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_SOUTH;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6195] = block;
  }

  { // ID: 6196
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_WEST;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6196] = block;
  }

  { // ID: 6197
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_WEST;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6197] = block;
  }

  { // ID: 6198
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_WEST;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6198] = block;
  }

  { // ID: 6199
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_WEST;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6199] = block;
  }

  { // ID: 6200
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_WEST;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6200] = block;
  }

  { // ID: 6201
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_WEST;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6201] = block;
  }

  { // ID: 6202
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_WEST;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6202] = block;
  }

  { // ID: 6203
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_WEST;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6203] = block;
  }

  { // ID: 6204
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_WEST;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6204] = block;
  }

  { // ID: 6205
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_WEST;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6205] = block;
  }

  { // ID: 6206
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_WEST;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6206] = block;
  }

  { // ID: 6207
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_WEST;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6207] = block;
  }

  { // ID: 6208
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_WEST;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6208] = block;
  }

  { // ID: 6209
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_WEST;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6209] = block;
  }

  { // ID: 6210
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_WEST;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6210] = block;
  }

  { // ID: 6211
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_WEST;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6211] = block;
  }

  { // ID: 6212
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_WEST;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6212] = block;
  }

  { // ID: 6213
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_WEST;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6213] = block;
  }

  { // ID: 6214
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_WEST;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6214] = block;
  }

  { // ID: 6215
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_WEST;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6215] = block;
  }

  { // ID: 6216
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_EAST;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6216] = block;
  }

  { // ID: 6217
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_EAST;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6217] = block;
  }

  { // ID: 6218
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_EAST;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6218] = block;
  }

  { // ID: 6219
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_EAST;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6219] = block;
  }

  { // ID: 6220
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_EAST;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6220] = block;
  }

  { // ID: 6221
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_EAST;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6221] = block;
  }

  { // ID: 6222
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_EAST;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6222] = block;
  }

  { // ID: 6223
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_EAST;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6223] = block;
  }

  { // ID: 6224
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_EAST;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6224] = block;
  }

  { // ID: 6225
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_EAST;
    block->half = JungleStairsBlock::HALF_TOP;
    block->shape = JungleStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6225] = block;
  }

  { // ID: 6226
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_EAST;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6226] = block;
  }

  { // ID: 6227
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_EAST;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6227] = block;
  }

  { // ID: 6228
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_EAST;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6228] = block;
  }

  { // ID: 6229
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_EAST;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6229] = block;
  }

  { // ID: 6230
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_EAST;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6230] = block;
  }

  { // ID: 6231
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_EAST;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6231] = block;
  }

  { // ID: 6232
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_EAST;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6232] = block;
  }

  { // ID: 6233
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_EAST;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6233] = block;
  }

  { // ID: 6234
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_EAST;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_TRUE;
    registry[6234] = block;
  }

  { // ID: 6235
    std::shared_ptr<JungleStairsBlock> block = std::make_shared<JungleStairsBlock>();
    block->facing = JungleStairsBlock::FACING_EAST;
    block->half = JungleStairsBlock::HALF_BOTTOM;
    block->shape = JungleStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = JungleStairsBlock::WATERLOGGED_FALSE;
    registry[6235] = block;
  }

  { // ID: 7011
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_FLOOR;
    block->facing = JungleButtonBlock::FACING_NORTH;
    block->powered = JungleButtonBlock::POWERED_TRUE;
    registry[7011] = block;
  }

  { // ID: 7012
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_FLOOR;
    block->facing = JungleButtonBlock::FACING_NORTH;
    block->powered = JungleButtonBlock::POWERED_FALSE;
    registry[7012] = block;
  }

  { // ID: 7013
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_FLOOR;
    block->facing = JungleButtonBlock::FACING_SOUTH;
    block->powered = JungleButtonBlock::POWERED_TRUE;
    registry[7013] = block;
  }

  { // ID: 7014
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_FLOOR;
    block->facing = JungleButtonBlock::FACING_SOUTH;
    block->powered = JungleButtonBlock::POWERED_FALSE;
    registry[7014] = block;
  }

  { // ID: 7015
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_FLOOR;
    block->facing = JungleButtonBlock::FACING_WEST;
    block->powered = JungleButtonBlock::POWERED_TRUE;
    registry[7015] = block;
  }

  { // ID: 7016
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_FLOOR;
    block->facing = JungleButtonBlock::FACING_WEST;
    block->powered = JungleButtonBlock::POWERED_FALSE;
    registry[7016] = block;
  }

  { // ID: 7017
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_FLOOR;
    block->facing = JungleButtonBlock::FACING_EAST;
    block->powered = JungleButtonBlock::POWERED_TRUE;
    registry[7017] = block;
  }

  { // ID: 7018
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_FLOOR;
    block->facing = JungleButtonBlock::FACING_EAST;
    block->powered = JungleButtonBlock::POWERED_FALSE;
    registry[7018] = block;
  }

  { // ID: 7019
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_WALL;
    block->facing = JungleButtonBlock::FACING_NORTH;
    block->powered = JungleButtonBlock::POWERED_TRUE;
    registry[7019] = block;
  }

  { // ID: 7020
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_WALL;
    block->facing = JungleButtonBlock::FACING_NORTH;
    block->powered = JungleButtonBlock::POWERED_FALSE;
    registry[7020] = block;
  }

  { // ID: 7021
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_WALL;
    block->facing = JungleButtonBlock::FACING_SOUTH;
    block->powered = JungleButtonBlock::POWERED_TRUE;
    registry[7021] = block;
  }

  { // ID: 7022
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_WALL;
    block->facing = JungleButtonBlock::FACING_SOUTH;
    block->powered = JungleButtonBlock::POWERED_FALSE;
    registry[7022] = block;
  }

  { // ID: 7023
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_WALL;
    block->facing = JungleButtonBlock::FACING_WEST;
    block->powered = JungleButtonBlock::POWERED_TRUE;
    registry[7023] = block;
  }

  { // ID: 7024
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_WALL;
    block->facing = JungleButtonBlock::FACING_WEST;
    block->powered = JungleButtonBlock::POWERED_FALSE;
    registry[7024] = block;
  }

  { // ID: 7025
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_WALL;
    block->facing = JungleButtonBlock::FACING_EAST;
    block->powered = JungleButtonBlock::POWERED_TRUE;
    registry[7025] = block;
  }

  { // ID: 7026
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_WALL;
    block->facing = JungleButtonBlock::FACING_EAST;
    block->powered = JungleButtonBlock::POWERED_FALSE;
    registry[7026] = block;
  }

  { // ID: 7027
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_CEILING;
    block->facing = JungleButtonBlock::FACING_NORTH;
    block->powered = JungleButtonBlock::POWERED_TRUE;
    registry[7027] = block;
  }

  { // ID: 7028
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_CEILING;
    block->facing = JungleButtonBlock::FACING_NORTH;
    block->powered = JungleButtonBlock::POWERED_FALSE;
    registry[7028] = block;
  }

  { // ID: 7029
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_CEILING;
    block->facing = JungleButtonBlock::FACING_SOUTH;
    block->powered = JungleButtonBlock::POWERED_TRUE;
    registry[7029] = block;
  }

  { // ID: 7030
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_CEILING;
    block->facing = JungleButtonBlock::FACING_SOUTH;
    block->powered = JungleButtonBlock::POWERED_FALSE;
    registry[7030] = block;
  }

  { // ID: 7031
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_CEILING;
    block->facing = JungleButtonBlock::FACING_WEST;
    block->powered = JungleButtonBlock::POWERED_TRUE;
    registry[7031] = block;
  }

  { // ID: 7032
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_CEILING;
    block->facing = JungleButtonBlock::FACING_WEST;
    block->powered = JungleButtonBlock::POWERED_FALSE;
    registry[7032] = block;
  }

  { // ID: 7033
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_CEILING;
    block->facing = JungleButtonBlock::FACING_EAST;
    block->powered = JungleButtonBlock::POWERED_TRUE;
    registry[7033] = block;
  }

  { // ID: 7034
    std::shared_ptr<JungleButtonBlock> block = std::make_shared<JungleButtonBlock>();
    block->face = JungleButtonBlock::FACE_CEILING;
    block->facing = JungleButtonBlock::FACING_EAST;
    block->powered = JungleButtonBlock::POWERED_FALSE;
    registry[7034] = block;
  }

  { // ID: 9059
    std::shared_ptr<JungleSlabBlock> block = std::make_shared<JungleSlabBlock>();
    block->type = JungleSlabBlock::TYPE_TOP;
    block->waterlogged = JungleSlabBlock::WATERLOGGED_TRUE;
    registry[9059] = block;
  }

  { // ID: 9060
    std::shared_ptr<JungleSlabBlock> block = std::make_shared<JungleSlabBlock>();
    block->type = JungleSlabBlock::TYPE_TOP;
    block->waterlogged = JungleSlabBlock::WATERLOGGED_FALSE;
    registry[9060] = block;
  }

  { // ID: 9061
    std::shared_ptr<JungleSlabBlock> block = std::make_shared<JungleSlabBlock>();
    block->type = JungleSlabBlock::TYPE_BOTTOM;
    block->waterlogged = JungleSlabBlock::WATERLOGGED_TRUE;
    registry[9061] = block;
  }

  { // ID: 9062
    std::shared_ptr<JungleSlabBlock> block = std::make_shared<JungleSlabBlock>();
    block->type = JungleSlabBlock::TYPE_BOTTOM;
    block->waterlogged = JungleSlabBlock::WATERLOGGED_FALSE;
    registry[9062] = block;
  }

  { // ID: 9063
    std::shared_ptr<JungleSlabBlock> block = std::make_shared<JungleSlabBlock>();
    block->type = JungleSlabBlock::TYPE_DOUBLE;
    block->waterlogged = JungleSlabBlock::WATERLOGGED_TRUE;
    registry[9063] = block;
  }

  { // ID: 9064
    std::shared_ptr<JungleSlabBlock> block = std::make_shared<JungleSlabBlock>();
    block->type = JungleSlabBlock::TYPE_DOUBLE;
    block->waterlogged = JungleSlabBlock::WATERLOGGED_FALSE;
    registry[9064] = block;
  }

  { // ID: 9235
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_NORTH;
    block->in_wall = JungleFenceGateBlock::IN_WALL_TRUE;
    block->open = JungleFenceGateBlock::OPEN_TRUE;
    block->powered = JungleFenceGateBlock::POWERED_TRUE;
    registry[9235] = block;
  }

  { // ID: 9236
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_NORTH;
    block->in_wall = JungleFenceGateBlock::IN_WALL_TRUE;
    block->open = JungleFenceGateBlock::OPEN_TRUE;
    block->powered = JungleFenceGateBlock::POWERED_FALSE;
    registry[9236] = block;
  }

  { // ID: 9237
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_NORTH;
    block->in_wall = JungleFenceGateBlock::IN_WALL_TRUE;
    block->open = JungleFenceGateBlock::OPEN_FALSE;
    block->powered = JungleFenceGateBlock::POWERED_TRUE;
    registry[9237] = block;
  }

  { // ID: 9238
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_NORTH;
    block->in_wall = JungleFenceGateBlock::IN_WALL_TRUE;
    block->open = JungleFenceGateBlock::OPEN_FALSE;
    block->powered = JungleFenceGateBlock::POWERED_FALSE;
    registry[9238] = block;
  }

  { // ID: 9239
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_NORTH;
    block->in_wall = JungleFenceGateBlock::IN_WALL_FALSE;
    block->open = JungleFenceGateBlock::OPEN_TRUE;
    block->powered = JungleFenceGateBlock::POWERED_TRUE;
    registry[9239] = block;
  }

  { // ID: 9240
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_NORTH;
    block->in_wall = JungleFenceGateBlock::IN_WALL_FALSE;
    block->open = JungleFenceGateBlock::OPEN_TRUE;
    block->powered = JungleFenceGateBlock::POWERED_FALSE;
    registry[9240] = block;
  }

  { // ID: 9241
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_NORTH;
    block->in_wall = JungleFenceGateBlock::IN_WALL_FALSE;
    block->open = JungleFenceGateBlock::OPEN_FALSE;
    block->powered = JungleFenceGateBlock::POWERED_TRUE;
    registry[9241] = block;
  }

  { // ID: 9242
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_NORTH;
    block->in_wall = JungleFenceGateBlock::IN_WALL_FALSE;
    block->open = JungleFenceGateBlock::OPEN_FALSE;
    block->powered = JungleFenceGateBlock::POWERED_FALSE;
    registry[9242] = block;
  }

  { // ID: 9243
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_SOUTH;
    block->in_wall = JungleFenceGateBlock::IN_WALL_TRUE;
    block->open = JungleFenceGateBlock::OPEN_TRUE;
    block->powered = JungleFenceGateBlock::POWERED_TRUE;
    registry[9243] = block;
  }

  { // ID: 9244
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_SOUTH;
    block->in_wall = JungleFenceGateBlock::IN_WALL_TRUE;
    block->open = JungleFenceGateBlock::OPEN_TRUE;
    block->powered = JungleFenceGateBlock::POWERED_FALSE;
    registry[9244] = block;
  }

  { // ID: 9245
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_SOUTH;
    block->in_wall = JungleFenceGateBlock::IN_WALL_TRUE;
    block->open = JungleFenceGateBlock::OPEN_FALSE;
    block->powered = JungleFenceGateBlock::POWERED_TRUE;
    registry[9245] = block;
  }

  { // ID: 9246
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_SOUTH;
    block->in_wall = JungleFenceGateBlock::IN_WALL_TRUE;
    block->open = JungleFenceGateBlock::OPEN_FALSE;
    block->powered = JungleFenceGateBlock::POWERED_FALSE;
    registry[9246] = block;
  }

  { // ID: 9247
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_SOUTH;
    block->in_wall = JungleFenceGateBlock::IN_WALL_FALSE;
    block->open = JungleFenceGateBlock::OPEN_TRUE;
    block->powered = JungleFenceGateBlock::POWERED_TRUE;
    registry[9247] = block;
  }

  { // ID: 9248
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_SOUTH;
    block->in_wall = JungleFenceGateBlock::IN_WALL_FALSE;
    block->open = JungleFenceGateBlock::OPEN_TRUE;
    block->powered = JungleFenceGateBlock::POWERED_FALSE;
    registry[9248] = block;
  }

  { // ID: 9249
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_SOUTH;
    block->in_wall = JungleFenceGateBlock::IN_WALL_FALSE;
    block->open = JungleFenceGateBlock::OPEN_FALSE;
    block->powered = JungleFenceGateBlock::POWERED_TRUE;
    registry[9249] = block;
  }

  { // ID: 9250
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_SOUTH;
    block->in_wall = JungleFenceGateBlock::IN_WALL_FALSE;
    block->open = JungleFenceGateBlock::OPEN_FALSE;
    block->powered = JungleFenceGateBlock::POWERED_FALSE;
    registry[9250] = block;
  }

  { // ID: 9251
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_WEST;
    block->in_wall = JungleFenceGateBlock::IN_WALL_TRUE;
    block->open = JungleFenceGateBlock::OPEN_TRUE;
    block->powered = JungleFenceGateBlock::POWERED_TRUE;
    registry[9251] = block;
  }

  { // ID: 9252
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_WEST;
    block->in_wall = JungleFenceGateBlock::IN_WALL_TRUE;
    block->open = JungleFenceGateBlock::OPEN_TRUE;
    block->powered = JungleFenceGateBlock::POWERED_FALSE;
    registry[9252] = block;
  }

  { // ID: 9253
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_WEST;
    block->in_wall = JungleFenceGateBlock::IN_WALL_TRUE;
    block->open = JungleFenceGateBlock::OPEN_FALSE;
    block->powered = JungleFenceGateBlock::POWERED_TRUE;
    registry[9253] = block;
  }

  { // ID: 9254
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_WEST;
    block->in_wall = JungleFenceGateBlock::IN_WALL_TRUE;
    block->open = JungleFenceGateBlock::OPEN_FALSE;
    block->powered = JungleFenceGateBlock::POWERED_FALSE;
    registry[9254] = block;
  }

  { // ID: 9255
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_WEST;
    block->in_wall = JungleFenceGateBlock::IN_WALL_FALSE;
    block->open = JungleFenceGateBlock::OPEN_TRUE;
    block->powered = JungleFenceGateBlock::POWERED_TRUE;
    registry[9255] = block;
  }

  { // ID: 9256
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_WEST;
    block->in_wall = JungleFenceGateBlock::IN_WALL_FALSE;
    block->open = JungleFenceGateBlock::OPEN_TRUE;
    block->powered = JungleFenceGateBlock::POWERED_FALSE;
    registry[9256] = block;
  }

  { // ID: 9257
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_WEST;
    block->in_wall = JungleFenceGateBlock::IN_WALL_FALSE;
    block->open = JungleFenceGateBlock::OPEN_FALSE;
    block->powered = JungleFenceGateBlock::POWERED_TRUE;
    registry[9257] = block;
  }

  { // ID: 9258
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_WEST;
    block->in_wall = JungleFenceGateBlock::IN_WALL_FALSE;
    block->open = JungleFenceGateBlock::OPEN_FALSE;
    block->powered = JungleFenceGateBlock::POWERED_FALSE;
    registry[9258] = block;
  }

  { // ID: 9259
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_EAST;
    block->in_wall = JungleFenceGateBlock::IN_WALL_TRUE;
    block->open = JungleFenceGateBlock::OPEN_TRUE;
    block->powered = JungleFenceGateBlock::POWERED_TRUE;
    registry[9259] = block;
  }

  { // ID: 9260
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_EAST;
    block->in_wall = JungleFenceGateBlock::IN_WALL_TRUE;
    block->open = JungleFenceGateBlock::OPEN_TRUE;
    block->powered = JungleFenceGateBlock::POWERED_FALSE;
    registry[9260] = block;
  }

  { // ID: 9261
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_EAST;
    block->in_wall = JungleFenceGateBlock::IN_WALL_TRUE;
    block->open = JungleFenceGateBlock::OPEN_FALSE;
    block->powered = JungleFenceGateBlock::POWERED_TRUE;
    registry[9261] = block;
  }

  { // ID: 9262
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_EAST;
    block->in_wall = JungleFenceGateBlock::IN_WALL_TRUE;
    block->open = JungleFenceGateBlock::OPEN_FALSE;
    block->powered = JungleFenceGateBlock::POWERED_FALSE;
    registry[9262] = block;
  }

  { // ID: 9263
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_EAST;
    block->in_wall = JungleFenceGateBlock::IN_WALL_FALSE;
    block->open = JungleFenceGateBlock::OPEN_TRUE;
    block->powered = JungleFenceGateBlock::POWERED_TRUE;
    registry[9263] = block;
  }

  { // ID: 9264
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_EAST;
    block->in_wall = JungleFenceGateBlock::IN_WALL_FALSE;
    block->open = JungleFenceGateBlock::OPEN_TRUE;
    block->powered = JungleFenceGateBlock::POWERED_FALSE;
    registry[9264] = block;
  }

  { // ID: 9265
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_EAST;
    block->in_wall = JungleFenceGateBlock::IN_WALL_FALSE;
    block->open = JungleFenceGateBlock::OPEN_FALSE;
    block->powered = JungleFenceGateBlock::POWERED_TRUE;
    registry[9265] = block;
  }

  { // ID: 9266
    std::shared_ptr<JungleFenceGateBlock> block = std::make_shared<JungleFenceGateBlock>();
    block->facing = JungleFenceGateBlock::FACING_EAST;
    block->in_wall = JungleFenceGateBlock::IN_WALL_FALSE;
    block->open = JungleFenceGateBlock::OPEN_FALSE;
    block->powered = JungleFenceGateBlock::POWERED_FALSE;
    registry[9266] = block;
  }

  { // ID: 9427
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_TRUE;
    block->north = JungleFenceBlock::NORTH_TRUE;
    block->south = JungleFenceBlock::SOUTH_TRUE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_TRUE;
    block->west = JungleFenceBlock::WEST_TRUE;
    registry[9427] = block;
  }

  { // ID: 9428
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_TRUE;
    block->north = JungleFenceBlock::NORTH_TRUE;
    block->south = JungleFenceBlock::SOUTH_TRUE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_TRUE;
    block->west = JungleFenceBlock::WEST_FALSE;
    registry[9428] = block;
  }

  { // ID: 9429
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_TRUE;
    block->north = JungleFenceBlock::NORTH_TRUE;
    block->south = JungleFenceBlock::SOUTH_TRUE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_FALSE;
    block->west = JungleFenceBlock::WEST_TRUE;
    registry[9429] = block;
  }

  { // ID: 9430
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_TRUE;
    block->north = JungleFenceBlock::NORTH_TRUE;
    block->south = JungleFenceBlock::SOUTH_TRUE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_FALSE;
    block->west = JungleFenceBlock::WEST_FALSE;
    registry[9430] = block;
  }

  { // ID: 9431
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_TRUE;
    block->north = JungleFenceBlock::NORTH_TRUE;
    block->south = JungleFenceBlock::SOUTH_FALSE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_TRUE;
    block->west = JungleFenceBlock::WEST_TRUE;
    registry[9431] = block;
  }

  { // ID: 9432
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_TRUE;
    block->north = JungleFenceBlock::NORTH_TRUE;
    block->south = JungleFenceBlock::SOUTH_FALSE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_TRUE;
    block->west = JungleFenceBlock::WEST_FALSE;
    registry[9432] = block;
  }

  { // ID: 9433
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_TRUE;
    block->north = JungleFenceBlock::NORTH_TRUE;
    block->south = JungleFenceBlock::SOUTH_FALSE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_FALSE;
    block->west = JungleFenceBlock::WEST_TRUE;
    registry[9433] = block;
  }

  { // ID: 9434
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_TRUE;
    block->north = JungleFenceBlock::NORTH_TRUE;
    block->south = JungleFenceBlock::SOUTH_FALSE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_FALSE;
    block->west = JungleFenceBlock::WEST_FALSE;
    registry[9434] = block;
  }

  { // ID: 9435
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_TRUE;
    block->north = JungleFenceBlock::NORTH_FALSE;
    block->south = JungleFenceBlock::SOUTH_TRUE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_TRUE;
    block->west = JungleFenceBlock::WEST_TRUE;
    registry[9435] = block;
  }

  { // ID: 9436
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_TRUE;
    block->north = JungleFenceBlock::NORTH_FALSE;
    block->south = JungleFenceBlock::SOUTH_TRUE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_TRUE;
    block->west = JungleFenceBlock::WEST_FALSE;
    registry[9436] = block;
  }

  { // ID: 9437
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_TRUE;
    block->north = JungleFenceBlock::NORTH_FALSE;
    block->south = JungleFenceBlock::SOUTH_TRUE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_FALSE;
    block->west = JungleFenceBlock::WEST_TRUE;
    registry[9437] = block;
  }

  { // ID: 9438
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_TRUE;
    block->north = JungleFenceBlock::NORTH_FALSE;
    block->south = JungleFenceBlock::SOUTH_TRUE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_FALSE;
    block->west = JungleFenceBlock::WEST_FALSE;
    registry[9438] = block;
  }

  { // ID: 9439
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_TRUE;
    block->north = JungleFenceBlock::NORTH_FALSE;
    block->south = JungleFenceBlock::SOUTH_FALSE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_TRUE;
    block->west = JungleFenceBlock::WEST_TRUE;
    registry[9439] = block;
  }

  { // ID: 9440
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_TRUE;
    block->north = JungleFenceBlock::NORTH_FALSE;
    block->south = JungleFenceBlock::SOUTH_FALSE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_TRUE;
    block->west = JungleFenceBlock::WEST_FALSE;
    registry[9440] = block;
  }

  { // ID: 9441
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_TRUE;
    block->north = JungleFenceBlock::NORTH_FALSE;
    block->south = JungleFenceBlock::SOUTH_FALSE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_FALSE;
    block->west = JungleFenceBlock::WEST_TRUE;
    registry[9441] = block;
  }

  { // ID: 9442
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_TRUE;
    block->north = JungleFenceBlock::NORTH_FALSE;
    block->south = JungleFenceBlock::SOUTH_FALSE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_FALSE;
    block->west = JungleFenceBlock::WEST_FALSE;
    registry[9442] = block;
  }

  { // ID: 9443
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_FALSE;
    block->north = JungleFenceBlock::NORTH_TRUE;
    block->south = JungleFenceBlock::SOUTH_TRUE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_TRUE;
    block->west = JungleFenceBlock::WEST_TRUE;
    registry[9443] = block;
  }

  { // ID: 9444
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_FALSE;
    block->north = JungleFenceBlock::NORTH_TRUE;
    block->south = JungleFenceBlock::SOUTH_TRUE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_TRUE;
    block->west = JungleFenceBlock::WEST_FALSE;
    registry[9444] = block;
  }

  { // ID: 9445
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_FALSE;
    block->north = JungleFenceBlock::NORTH_TRUE;
    block->south = JungleFenceBlock::SOUTH_TRUE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_FALSE;
    block->west = JungleFenceBlock::WEST_TRUE;
    registry[9445] = block;
  }

  { // ID: 9446
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_FALSE;
    block->north = JungleFenceBlock::NORTH_TRUE;
    block->south = JungleFenceBlock::SOUTH_TRUE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_FALSE;
    block->west = JungleFenceBlock::WEST_FALSE;
    registry[9446] = block;
  }

  { // ID: 9447
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_FALSE;
    block->north = JungleFenceBlock::NORTH_TRUE;
    block->south = JungleFenceBlock::SOUTH_FALSE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_TRUE;
    block->west = JungleFenceBlock::WEST_TRUE;
    registry[9447] = block;
  }

  { // ID: 9448
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_FALSE;
    block->north = JungleFenceBlock::NORTH_TRUE;
    block->south = JungleFenceBlock::SOUTH_FALSE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_TRUE;
    block->west = JungleFenceBlock::WEST_FALSE;
    registry[9448] = block;
  }

  { // ID: 9449
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_FALSE;
    block->north = JungleFenceBlock::NORTH_TRUE;
    block->south = JungleFenceBlock::SOUTH_FALSE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_FALSE;
    block->west = JungleFenceBlock::WEST_TRUE;
    registry[9449] = block;
  }

  { // ID: 9450
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_FALSE;
    block->north = JungleFenceBlock::NORTH_TRUE;
    block->south = JungleFenceBlock::SOUTH_FALSE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_FALSE;
    block->west = JungleFenceBlock::WEST_FALSE;
    registry[9450] = block;
  }

  { // ID: 9451
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_FALSE;
    block->north = JungleFenceBlock::NORTH_FALSE;
    block->south = JungleFenceBlock::SOUTH_TRUE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_TRUE;
    block->west = JungleFenceBlock::WEST_TRUE;
    registry[9451] = block;
  }

  { // ID: 9452
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_FALSE;
    block->north = JungleFenceBlock::NORTH_FALSE;
    block->south = JungleFenceBlock::SOUTH_TRUE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_TRUE;
    block->west = JungleFenceBlock::WEST_FALSE;
    registry[9452] = block;
  }

  { // ID: 9453
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_FALSE;
    block->north = JungleFenceBlock::NORTH_FALSE;
    block->south = JungleFenceBlock::SOUTH_TRUE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_FALSE;
    block->west = JungleFenceBlock::WEST_TRUE;
    registry[9453] = block;
  }

  { // ID: 9454
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_FALSE;
    block->north = JungleFenceBlock::NORTH_FALSE;
    block->south = JungleFenceBlock::SOUTH_TRUE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_FALSE;
    block->west = JungleFenceBlock::WEST_FALSE;
    registry[9454] = block;
  }

  { // ID: 9455
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_FALSE;
    block->north = JungleFenceBlock::NORTH_FALSE;
    block->south = JungleFenceBlock::SOUTH_FALSE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_TRUE;
    block->west = JungleFenceBlock::WEST_TRUE;
    registry[9455] = block;
  }

  { // ID: 9456
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_FALSE;
    block->north = JungleFenceBlock::NORTH_FALSE;
    block->south = JungleFenceBlock::SOUTH_FALSE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_TRUE;
    block->west = JungleFenceBlock::WEST_FALSE;
    registry[9456] = block;
  }

  { // ID: 9457
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_FALSE;
    block->north = JungleFenceBlock::NORTH_FALSE;
    block->south = JungleFenceBlock::SOUTH_FALSE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_FALSE;
    block->west = JungleFenceBlock::WEST_TRUE;
    registry[9457] = block;
  }

  { // ID: 9458
    std::shared_ptr<JungleFenceBlock> block = std::make_shared<JungleFenceBlock>();
    block->east = JungleFenceBlock::EAST_FALSE;
    block->north = JungleFenceBlock::NORTH_FALSE;
    block->south = JungleFenceBlock::SOUTH_FALSE;
    block->waterlogged = JungleFenceBlock::WATERLOGGED_FALSE;
    block->west = JungleFenceBlock::WEST_FALSE;
    registry[9458] = block;
  }

  { // ID: 9683
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_NORTH;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9683] = block;
  }

  { // ID: 9684
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_NORTH;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9684] = block;
  }

  { // ID: 9685
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_NORTH;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9685] = block;
  }

  { // ID: 9686
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_NORTH;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9686] = block;
  }

  { // ID: 9687
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_NORTH;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9687] = block;
  }

  { // ID: 9688
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_NORTH;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9688] = block;
  }

  { // ID: 9689
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_NORTH;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9689] = block;
  }

  { // ID: 9690
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_NORTH;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9690] = block;
  }

  { // ID: 9691
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_NORTH;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9691] = block;
  }

  { // ID: 9692
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_NORTH;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9692] = block;
  }

  { // ID: 9693
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_NORTH;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9693] = block;
  }

  { // ID: 9694
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_NORTH;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9694] = block;
  }

  { // ID: 9695
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_NORTH;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9695] = block;
  }

  { // ID: 9696
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_NORTH;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9696] = block;
  }

  { // ID: 9697
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_NORTH;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9697] = block;
  }

  { // ID: 9698
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_NORTH;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9698] = block;
  }

  { // ID: 9699
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_SOUTH;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9699] = block;
  }

  { // ID: 9700
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_SOUTH;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9700] = block;
  }

  { // ID: 9701
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_SOUTH;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9701] = block;
  }

  { // ID: 9702
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_SOUTH;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9702] = block;
  }

  { // ID: 9703
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_SOUTH;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9703] = block;
  }

  { // ID: 9704
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_SOUTH;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9704] = block;
  }

  { // ID: 9705
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_SOUTH;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9705] = block;
  }

  { // ID: 9706
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_SOUTH;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9706] = block;
  }

  { // ID: 9707
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_SOUTH;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9707] = block;
  }

  { // ID: 9708
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_SOUTH;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9708] = block;
  }

  { // ID: 9709
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_SOUTH;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9709] = block;
  }

  { // ID: 9710
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_SOUTH;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9710] = block;
  }

  { // ID: 9711
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_SOUTH;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9711] = block;
  }

  { // ID: 9712
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_SOUTH;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9712] = block;
  }

  { // ID: 9713
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_SOUTH;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9713] = block;
  }

  { // ID: 9714
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_SOUTH;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9714] = block;
  }

  { // ID: 9715
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_WEST;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9715] = block;
  }

  { // ID: 9716
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_WEST;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9716] = block;
  }

  { // ID: 9717
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_WEST;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9717] = block;
  }

  { // ID: 9718
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_WEST;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9718] = block;
  }

  { // ID: 9719
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_WEST;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9719] = block;
  }

  { // ID: 9720
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_WEST;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9720] = block;
  }

  { // ID: 9721
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_WEST;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9721] = block;
  }

  { // ID: 9722
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_WEST;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9722] = block;
  }

  { // ID: 9723
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_WEST;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9723] = block;
  }

  { // ID: 9724
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_WEST;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9724] = block;
  }

  { // ID: 9725
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_WEST;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9725] = block;
  }

  { // ID: 9726
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_WEST;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9726] = block;
  }

  { // ID: 9727
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_WEST;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9727] = block;
  }

  { // ID: 9728
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_WEST;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9728] = block;
  }

  { // ID: 9729
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_WEST;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9729] = block;
  }

  { // ID: 9730
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_WEST;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9730] = block;
  }

  { // ID: 9731
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_EAST;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9731] = block;
  }

  { // ID: 9732
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_EAST;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9732] = block;
  }

  { // ID: 9733
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_EAST;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9733] = block;
  }

  { // ID: 9734
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_EAST;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9734] = block;
  }

  { // ID: 9735
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_EAST;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9735] = block;
  }

  { // ID: 9736
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_EAST;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9736] = block;
  }

  { // ID: 9737
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_EAST;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9737] = block;
  }

  { // ID: 9738
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_EAST;
    block->half = JungleDoorBlock::HALF_UPPER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9738] = block;
  }

  { // ID: 9739
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_EAST;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9739] = block;
  }

  { // ID: 9740
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_EAST;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9740] = block;
  }

  { // ID: 9741
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_EAST;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9741] = block;
  }

  { // ID: 9742
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_EAST;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_LEFT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9742] = block;
  }

  { // ID: 9743
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_EAST;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9743] = block;
  }

  { // ID: 9744
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_EAST;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_TRUE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9744] = block;
  }

  { // ID: 9745
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_EAST;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_TRUE;
    registry[9745] = block;
  }

  { // ID: 9746
    std::shared_ptr<JungleDoorBlock> block = std::make_shared<JungleDoorBlock>();
    block->facing = JungleDoorBlock::FACING_EAST;
    block->half = JungleDoorBlock::HALF_LOWER;
    block->hinge = JungleDoorBlock::HINGE_RIGHT;
    block->open = JungleDoorBlock::OPEN_FALSE;
    block->powered = JungleDoorBlock::POWERED_FALSE;
    registry[9746] = block;
  }

  { // ID: 16948
    std::shared_ptr<JigsawBlock> block = std::make_shared<JigsawBlock>();
    block->orientation = JigsawBlock::ORIENTATION_DOWN_EAST;
    registry[16948] = block;
  }

  { // ID: 16949
    std::shared_ptr<JigsawBlock> block = std::make_shared<JigsawBlock>();
    block->orientation = JigsawBlock::ORIENTATION_DOWN_NORTH;
    registry[16949] = block;
  }

  { // ID: 16950
    std::shared_ptr<JigsawBlock> block = std::make_shared<JigsawBlock>();
    block->orientation = JigsawBlock::ORIENTATION_DOWN_SOUTH;
    registry[16950] = block;
  }

  { // ID: 16951
    std::shared_ptr<JigsawBlock> block = std::make_shared<JigsawBlock>();
    block->orientation = JigsawBlock::ORIENTATION_DOWN_WEST;
    registry[16951] = block;
  }

  { // ID: 16952
    std::shared_ptr<JigsawBlock> block = std::make_shared<JigsawBlock>();
    block->orientation = JigsawBlock::ORIENTATION_UP_EAST;
    registry[16952] = block;
  }

  { // ID: 16953
    std::shared_ptr<JigsawBlock> block = std::make_shared<JigsawBlock>();
    block->orientation = JigsawBlock::ORIENTATION_UP_NORTH;
    registry[16953] = block;
  }

  { // ID: 16954
    std::shared_ptr<JigsawBlock> block = std::make_shared<JigsawBlock>();
    block->orientation = JigsawBlock::ORIENTATION_UP_SOUTH;
    registry[16954] = block;
  }

  { // ID: 16955
    std::shared_ptr<JigsawBlock> block = std::make_shared<JigsawBlock>();
    block->orientation = JigsawBlock::ORIENTATION_UP_WEST;
    registry[16955] = block;
  }

  { // ID: 16956
    std::shared_ptr<JigsawBlock> block = std::make_shared<JigsawBlock>();
    block->orientation = JigsawBlock::ORIENTATION_WEST_UP;
    registry[16956] = block;
  }

  { // ID: 16957
    std::shared_ptr<JigsawBlock> block = std::make_shared<JigsawBlock>();
    block->orientation = JigsawBlock::ORIENTATION_EAST_UP;
    registry[16957] = block;
  }

  { // ID: 16958
    std::shared_ptr<JigsawBlock> block = std::make_shared<JigsawBlock>();
    block->orientation = JigsawBlock::ORIENTATION_NORTH_UP;
    registry[16958] = block;
  }

  { // ID: 16959
    std::shared_ptr<JigsawBlock> block = std::make_shared<JigsawBlock>();
    block->orientation = JigsawBlock::ORIENTATION_SOUTH_UP;
    registry[16959] = block;
  }
}