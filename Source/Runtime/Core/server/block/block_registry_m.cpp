

#include "block_registry.h"

#include "magenta_banner_block.h"
#include "magenta_bed_block.h"
#include "magenta_candle_block.h"
#include "magenta_candle_cake_block.h"
#include "magenta_carpet_block.h"
#include "magenta_concrete_block.h"
#include "magenta_concrete_powder_block.h"
#include "magenta_glazed_terracotta_block.h"
#include "magenta_shulker_box_block.h"
#include "magenta_stained_glass_block.h"
#include "magenta_stained_glass_pane_block.h"
#include "magenta_terracotta_block.h"
#include "magenta_wall_banner_block.h"
#include "magenta_wool_block.h"
#include "magma_block_block.h"
#include "mangrove_button_block.h"
#include "mangrove_door_block.h"
#include "mangrove_fence_block.h"
#include "mangrove_fence_gate_block.h"
#include "mangrove_leaves_block.h"
#include "mangrove_log_block.h"
#include "mangrove_planks_block.h"
#include "mangrove_pressure_plate_block.h"
#include "mangrove_propagule_block.h"
#include "mangrove_roots_block.h"
#include "mangrove_sign_block.h"
#include "mangrove_slab_block.h"
#include "mangrove_stairs_block.h"
#include "mangrove_trapdoor_block.h"
#include "mangrove_wall_sign_block.h"
#include "mangrove_wood_block.h"
#include "medium_amethyst_bud_block.h"
#include "melon_block.h"
#include "melon_stem_block.h"
#include "moss_block_block.h"
#include "moss_carpet_block.h"
#include "mossy_cobblestone_block.h"
#include "mossy_cobblestone_slab_block.h"
#include "mossy_cobblestone_stairs_block.h"
#include "mossy_cobblestone_wall_block.h"
#include "mossy_stone_brick_slab_block.h"
#include "mossy_stone_brick_stairs_block.h"
#include "mossy_stone_brick_wall_block.h"
#include "mossy_stone_bricks_block.h"
#include "moving_piston_block.h"
#include "mud_block.h"
#include "mud_brick_slab_block.h"
#include "mud_brick_stairs_block.h"
#include "mud_brick_wall_block.h"
#include "mud_bricks_block.h"
#include "muddy_mangrove_roots_block.h"
#include "mushroom_stem_block.h"
#include "mycelium_block.h"

void BlockRegistry::generateM() {

  { // ID: 21
    std::shared_ptr<MangrovePlanksBlock> block = std::make_shared<MangrovePlanksBlock>();
    registry[21] = block;
  }

  { // ID: 34
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_0;
    block->hanging = MangrovePropaguleBlock::HANGING_TRUE;
    block->stage = MangrovePropaguleBlock::STAGE_0;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_TRUE;
    registry[34] = block;
  }

  { // ID: 35
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_0;
    block->hanging = MangrovePropaguleBlock::HANGING_TRUE;
    block->stage = MangrovePropaguleBlock::STAGE_0;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_FALSE;
    registry[35] = block;
  }

  { // ID: 36
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_0;
    block->hanging = MangrovePropaguleBlock::HANGING_TRUE;
    block->stage = MangrovePropaguleBlock::STAGE_1;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_TRUE;
    registry[36] = block;
  }

  { // ID: 37
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_0;
    block->hanging = MangrovePropaguleBlock::HANGING_TRUE;
    block->stage = MangrovePropaguleBlock::STAGE_1;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_FALSE;
    registry[37] = block;
  }

  { // ID: 38
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_0;
    block->hanging = MangrovePropaguleBlock::HANGING_FALSE;
    block->stage = MangrovePropaguleBlock::STAGE_0;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_TRUE;
    registry[38] = block;
  }

  { // ID: 39
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_0;
    block->hanging = MangrovePropaguleBlock::HANGING_FALSE;
    block->stage = MangrovePropaguleBlock::STAGE_0;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_FALSE;
    registry[39] = block;
  }

  { // ID: 40
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_0;
    block->hanging = MangrovePropaguleBlock::HANGING_FALSE;
    block->stage = MangrovePropaguleBlock::STAGE_1;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_TRUE;
    registry[40] = block;
  }

  { // ID: 41
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_0;
    block->hanging = MangrovePropaguleBlock::HANGING_FALSE;
    block->stage = MangrovePropaguleBlock::STAGE_1;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_FALSE;
    registry[41] = block;
  }

  { // ID: 42
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_1;
    block->hanging = MangrovePropaguleBlock::HANGING_TRUE;
    block->stage = MangrovePropaguleBlock::STAGE_0;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_TRUE;
    registry[42] = block;
  }

  { // ID: 43
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_1;
    block->hanging = MangrovePropaguleBlock::HANGING_TRUE;
    block->stage = MangrovePropaguleBlock::STAGE_0;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_FALSE;
    registry[43] = block;
  }

  { // ID: 44
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_1;
    block->hanging = MangrovePropaguleBlock::HANGING_TRUE;
    block->stage = MangrovePropaguleBlock::STAGE_1;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_TRUE;
    registry[44] = block;
  }

  { // ID: 45
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_1;
    block->hanging = MangrovePropaguleBlock::HANGING_TRUE;
    block->stage = MangrovePropaguleBlock::STAGE_1;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_FALSE;
    registry[45] = block;
  }

  { // ID: 46
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_1;
    block->hanging = MangrovePropaguleBlock::HANGING_FALSE;
    block->stage = MangrovePropaguleBlock::STAGE_0;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_TRUE;
    registry[46] = block;
  }

  { // ID: 47
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_1;
    block->hanging = MangrovePropaguleBlock::HANGING_FALSE;
    block->stage = MangrovePropaguleBlock::STAGE_0;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_FALSE;
    registry[47] = block;
  }

  { // ID: 48
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_1;
    block->hanging = MangrovePropaguleBlock::HANGING_FALSE;
    block->stage = MangrovePropaguleBlock::STAGE_1;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_TRUE;
    registry[48] = block;
  }

  { // ID: 49
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_1;
    block->hanging = MangrovePropaguleBlock::HANGING_FALSE;
    block->stage = MangrovePropaguleBlock::STAGE_1;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_FALSE;
    registry[49] = block;
  }

  { // ID: 50
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_2;
    block->hanging = MangrovePropaguleBlock::HANGING_TRUE;
    block->stage = MangrovePropaguleBlock::STAGE_0;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_TRUE;
    registry[50] = block;
  }

  { // ID: 51
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_2;
    block->hanging = MangrovePropaguleBlock::HANGING_TRUE;
    block->stage = MangrovePropaguleBlock::STAGE_0;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_FALSE;
    registry[51] = block;
  }

  { // ID: 52
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_2;
    block->hanging = MangrovePropaguleBlock::HANGING_TRUE;
    block->stage = MangrovePropaguleBlock::STAGE_1;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_TRUE;
    registry[52] = block;
  }

  { // ID: 53
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_2;
    block->hanging = MangrovePropaguleBlock::HANGING_TRUE;
    block->stage = MangrovePropaguleBlock::STAGE_1;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_FALSE;
    registry[53] = block;
  }

  { // ID: 54
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_2;
    block->hanging = MangrovePropaguleBlock::HANGING_FALSE;
    block->stage = MangrovePropaguleBlock::STAGE_0;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_TRUE;
    registry[54] = block;
  }

  { // ID: 55
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_2;
    block->hanging = MangrovePropaguleBlock::HANGING_FALSE;
    block->stage = MangrovePropaguleBlock::STAGE_0;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_FALSE;
    registry[55] = block;
  }

  { // ID: 56
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_2;
    block->hanging = MangrovePropaguleBlock::HANGING_FALSE;
    block->stage = MangrovePropaguleBlock::STAGE_1;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_TRUE;
    registry[56] = block;
  }

  { // ID: 57
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_2;
    block->hanging = MangrovePropaguleBlock::HANGING_FALSE;
    block->stage = MangrovePropaguleBlock::STAGE_1;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_FALSE;
    registry[57] = block;
  }

  { // ID: 58
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_3;
    block->hanging = MangrovePropaguleBlock::HANGING_TRUE;
    block->stage = MangrovePropaguleBlock::STAGE_0;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_TRUE;
    registry[58] = block;
  }

  { // ID: 59
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_3;
    block->hanging = MangrovePropaguleBlock::HANGING_TRUE;
    block->stage = MangrovePropaguleBlock::STAGE_0;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_FALSE;
    registry[59] = block;
  }

  { // ID: 60
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_3;
    block->hanging = MangrovePropaguleBlock::HANGING_TRUE;
    block->stage = MangrovePropaguleBlock::STAGE_1;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_TRUE;
    registry[60] = block;
  }

  { // ID: 61
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_3;
    block->hanging = MangrovePropaguleBlock::HANGING_TRUE;
    block->stage = MangrovePropaguleBlock::STAGE_1;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_FALSE;
    registry[61] = block;
  }

  { // ID: 62
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_3;
    block->hanging = MangrovePropaguleBlock::HANGING_FALSE;
    block->stage = MangrovePropaguleBlock::STAGE_0;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_TRUE;
    registry[62] = block;
  }

  { // ID: 63
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_3;
    block->hanging = MangrovePropaguleBlock::HANGING_FALSE;
    block->stage = MangrovePropaguleBlock::STAGE_0;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_FALSE;
    registry[63] = block;
  }

  { // ID: 64
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_3;
    block->hanging = MangrovePropaguleBlock::HANGING_FALSE;
    block->stage = MangrovePropaguleBlock::STAGE_1;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_TRUE;
    registry[64] = block;
  }

  { // ID: 65
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_3;
    block->hanging = MangrovePropaguleBlock::HANGING_FALSE;
    block->stage = MangrovePropaguleBlock::STAGE_1;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_FALSE;
    registry[65] = block;
  }

  { // ID: 66
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_4;
    block->hanging = MangrovePropaguleBlock::HANGING_TRUE;
    block->stage = MangrovePropaguleBlock::STAGE_0;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_TRUE;
    registry[66] = block;
  }

  { // ID: 67
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_4;
    block->hanging = MangrovePropaguleBlock::HANGING_TRUE;
    block->stage = MangrovePropaguleBlock::STAGE_0;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_FALSE;
    registry[67] = block;
  }

  { // ID: 68
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_4;
    block->hanging = MangrovePropaguleBlock::HANGING_TRUE;
    block->stage = MangrovePropaguleBlock::STAGE_1;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_TRUE;
    registry[68] = block;
  }

  { // ID: 69
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_4;
    block->hanging = MangrovePropaguleBlock::HANGING_TRUE;
    block->stage = MangrovePropaguleBlock::STAGE_1;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_FALSE;
    registry[69] = block;
  }

  { // ID: 70
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_4;
    block->hanging = MangrovePropaguleBlock::HANGING_FALSE;
    block->stage = MangrovePropaguleBlock::STAGE_0;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_TRUE;
    registry[70] = block;
  }

  { // ID: 71
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_4;
    block->hanging = MangrovePropaguleBlock::HANGING_FALSE;
    block->stage = MangrovePropaguleBlock::STAGE_0;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_FALSE;
    registry[71] = block;
  }

  { // ID: 72
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_4;
    block->hanging = MangrovePropaguleBlock::HANGING_FALSE;
    block->stage = MangrovePropaguleBlock::STAGE_1;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_TRUE;
    registry[72] = block;
  }

  { // ID: 73
    std::shared_ptr<MangrovePropaguleBlock> block = std::make_shared<MangrovePropaguleBlock>();
    block->age = MangrovePropaguleBlock::AGE_4;
    block->hanging = MangrovePropaguleBlock::HANGING_FALSE;
    block->stage = MangrovePropaguleBlock::STAGE_1;
    block->waterlogged = MangrovePropaguleBlock::WATERLOGGED_FALSE;
    registry[73] = block;
  }

  { // ID: 135
    std::shared_ptr<MangroveLogBlock> block = std::make_shared<MangroveLogBlock>();
    block->axis = MangroveLogBlock::AXIS_X;
    registry[135] = block;
  }

  { // ID: 136
    std::shared_ptr<MangroveLogBlock> block = std::make_shared<MangroveLogBlock>();
    block->axis = MangroveLogBlock::AXIS_Y;
    registry[136] = block;
  }

  { // ID: 137
    std::shared_ptr<MangroveLogBlock> block = std::make_shared<MangroveLogBlock>();
    block->axis = MangroveLogBlock::AXIS_Z;
    registry[137] = block;
  }

  { // ID: 138
    std::shared_ptr<MangroveRootsBlock> block = std::make_shared<MangroveRootsBlock>();
    block->waterlogged = MangroveRootsBlock::WATERLOGGED_TRUE;
    registry[138] = block;
  }

  { // ID: 139
    std::shared_ptr<MangroveRootsBlock> block = std::make_shared<MangroveRootsBlock>();
    block->waterlogged = MangroveRootsBlock::WATERLOGGED_FALSE;
    registry[139] = block;
  }

  { // ID: 140
    std::shared_ptr<MuddyMangroveRootsBlock> block = std::make_shared<MuddyMangroveRootsBlock>();
    block->axis = MuddyMangroveRootsBlock::AXIS_X;
    registry[140] = block;
  }

  { // ID: 141
    std::shared_ptr<MuddyMangroveRootsBlock> block = std::make_shared<MuddyMangroveRootsBlock>();
    block->axis = MuddyMangroveRootsBlock::AXIS_Y;
    registry[141] = block;
  }

  { // ID: 142
    std::shared_ptr<MuddyMangroveRootsBlock> block = std::make_shared<MuddyMangroveRootsBlock>();
    block->axis = MuddyMangroveRootsBlock::AXIS_Z;
    registry[142] = block;
  }

  { // ID: 182
    std::shared_ptr<MangroveWoodBlock> block = std::make_shared<MangroveWoodBlock>();
    block->axis = MangroveWoodBlock::AXIS_X;
    registry[182] = block;
  }

  { // ID: 183
    std::shared_ptr<MangroveWoodBlock> block = std::make_shared<MangroveWoodBlock>();
    block->axis = MangroveWoodBlock::AXIS_Y;
    registry[183] = block;
  }

  { // ID: 184
    std::shared_ptr<MangroveWoodBlock> block = std::make_shared<MangroveWoodBlock>();
    block->axis = MangroveWoodBlock::AXIS_Z;
    registry[184] = block;
  }

  { // ID: 374
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_1;
    block->persistent = MangroveLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_TRUE;
    registry[374] = block;
  }

  { // ID: 375
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_1;
    block->persistent = MangroveLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_FALSE;
    registry[375] = block;
  }

  { // ID: 376
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_1;
    block->persistent = MangroveLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_TRUE;
    registry[376] = block;
  }

  { // ID: 377
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_1;
    block->persistent = MangroveLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_FALSE;
    registry[377] = block;
  }

  { // ID: 378
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_2;
    block->persistent = MangroveLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_TRUE;
    registry[378] = block;
  }

  { // ID: 379
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_2;
    block->persistent = MangroveLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_FALSE;
    registry[379] = block;
  }

  { // ID: 380
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_2;
    block->persistent = MangroveLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_TRUE;
    registry[380] = block;
  }

  { // ID: 381
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_2;
    block->persistent = MangroveLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_FALSE;
    registry[381] = block;
  }

  { // ID: 382
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_3;
    block->persistent = MangroveLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_TRUE;
    registry[382] = block;
  }

  { // ID: 383
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_3;
    block->persistent = MangroveLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_FALSE;
    registry[383] = block;
  }

  { // ID: 384
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_3;
    block->persistent = MangroveLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_TRUE;
    registry[384] = block;
  }

  { // ID: 385
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_3;
    block->persistent = MangroveLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_FALSE;
    registry[385] = block;
  }

  { // ID: 386
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_4;
    block->persistent = MangroveLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_TRUE;
    registry[386] = block;
  }

  { // ID: 387
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_4;
    block->persistent = MangroveLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_FALSE;
    registry[387] = block;
  }

  { // ID: 388
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_4;
    block->persistent = MangroveLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_TRUE;
    registry[388] = block;
  }

  { // ID: 389
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_4;
    block->persistent = MangroveLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_FALSE;
    registry[389] = block;
  }

  { // ID: 390
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_5;
    block->persistent = MangroveLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_TRUE;
    registry[390] = block;
  }

  { // ID: 391
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_5;
    block->persistent = MangroveLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_FALSE;
    registry[391] = block;
  }

  { // ID: 392
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_5;
    block->persistent = MangroveLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_TRUE;
    registry[392] = block;
  }

  { // ID: 393
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_5;
    block->persistent = MangroveLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_FALSE;
    registry[393] = block;
  }

  { // ID: 394
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_6;
    block->persistent = MangroveLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_TRUE;
    registry[394] = block;
  }

  { // ID: 395
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_6;
    block->persistent = MangroveLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_FALSE;
    registry[395] = block;
  }

  { // ID: 396
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_6;
    block->persistent = MangroveLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_TRUE;
    registry[396] = block;
  }

  { // ID: 397
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_6;
    block->persistent = MangroveLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_FALSE;
    registry[397] = block;
  }

  { // ID: 398
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_7;
    block->persistent = MangroveLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_TRUE;
    registry[398] = block;
  }

  { // ID: 399
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_7;
    block->persistent = MangroveLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_FALSE;
    registry[399] = block;
  }

  { // ID: 400
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_7;
    block->persistent = MangroveLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_TRUE;
    registry[400] = block;
  }

  { // ID: 401
    std::shared_ptr<MangroveLeavesBlock> block = std::make_shared<MangroveLeavesBlock>();
    block->distance = MangroveLeavesBlock::DISTANCE_7;
    block->persistent = MangroveLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = MangroveLeavesBlock::WATERLOGGED_FALSE;
    registry[401] = block;
  }

  { // ID: 1311
    std::shared_ptr<MagentaBedBlock> block = std::make_shared<MagentaBedBlock>();
    block->facing = MagentaBedBlock::FACING_NORTH;
    block->occupied = MagentaBedBlock::OCCUPIED_TRUE;
    block->part = MagentaBedBlock::PART_HEAD;
    registry[1311] = block;
  }

  { // ID: 1312
    std::shared_ptr<MagentaBedBlock> block = std::make_shared<MagentaBedBlock>();
    block->facing = MagentaBedBlock::FACING_NORTH;
    block->occupied = MagentaBedBlock::OCCUPIED_TRUE;
    block->part = MagentaBedBlock::PART_FOOT;
    registry[1312] = block;
  }

  { // ID: 1313
    std::shared_ptr<MagentaBedBlock> block = std::make_shared<MagentaBedBlock>();
    block->facing = MagentaBedBlock::FACING_NORTH;
    block->occupied = MagentaBedBlock::OCCUPIED_FALSE;
    block->part = MagentaBedBlock::PART_HEAD;
    registry[1313] = block;
  }

  { // ID: 1314
    std::shared_ptr<MagentaBedBlock> block = std::make_shared<MagentaBedBlock>();
    block->facing = MagentaBedBlock::FACING_NORTH;
    block->occupied = MagentaBedBlock::OCCUPIED_FALSE;
    block->part = MagentaBedBlock::PART_FOOT;
    registry[1314] = block;
  }

  { // ID: 1315
    std::shared_ptr<MagentaBedBlock> block = std::make_shared<MagentaBedBlock>();
    block->facing = MagentaBedBlock::FACING_SOUTH;
    block->occupied = MagentaBedBlock::OCCUPIED_TRUE;
    block->part = MagentaBedBlock::PART_HEAD;
    registry[1315] = block;
  }

  { // ID: 1316
    std::shared_ptr<MagentaBedBlock> block = std::make_shared<MagentaBedBlock>();
    block->facing = MagentaBedBlock::FACING_SOUTH;
    block->occupied = MagentaBedBlock::OCCUPIED_TRUE;
    block->part = MagentaBedBlock::PART_FOOT;
    registry[1316] = block;
  }

  { // ID: 1317
    std::shared_ptr<MagentaBedBlock> block = std::make_shared<MagentaBedBlock>();
    block->facing = MagentaBedBlock::FACING_SOUTH;
    block->occupied = MagentaBedBlock::OCCUPIED_FALSE;
    block->part = MagentaBedBlock::PART_HEAD;
    registry[1317] = block;
  }

  { // ID: 1318
    std::shared_ptr<MagentaBedBlock> block = std::make_shared<MagentaBedBlock>();
    block->facing = MagentaBedBlock::FACING_SOUTH;
    block->occupied = MagentaBedBlock::OCCUPIED_FALSE;
    block->part = MagentaBedBlock::PART_FOOT;
    registry[1318] = block;
  }

  { // ID: 1319
    std::shared_ptr<MagentaBedBlock> block = std::make_shared<MagentaBedBlock>();
    block->facing = MagentaBedBlock::FACING_WEST;
    block->occupied = MagentaBedBlock::OCCUPIED_TRUE;
    block->part = MagentaBedBlock::PART_HEAD;
    registry[1319] = block;
  }

  { // ID: 1320
    std::shared_ptr<MagentaBedBlock> block = std::make_shared<MagentaBedBlock>();
    block->facing = MagentaBedBlock::FACING_WEST;
    block->occupied = MagentaBedBlock::OCCUPIED_TRUE;
    block->part = MagentaBedBlock::PART_FOOT;
    registry[1320] = block;
  }

  { // ID: 1321
    std::shared_ptr<MagentaBedBlock> block = std::make_shared<MagentaBedBlock>();
    block->facing = MagentaBedBlock::FACING_WEST;
    block->occupied = MagentaBedBlock::OCCUPIED_FALSE;
    block->part = MagentaBedBlock::PART_HEAD;
    registry[1321] = block;
  }

  { // ID: 1322
    std::shared_ptr<MagentaBedBlock> block = std::make_shared<MagentaBedBlock>();
    block->facing = MagentaBedBlock::FACING_WEST;
    block->occupied = MagentaBedBlock::OCCUPIED_FALSE;
    block->part = MagentaBedBlock::PART_FOOT;
    registry[1322] = block;
  }

  { // ID: 1323
    std::shared_ptr<MagentaBedBlock> block = std::make_shared<MagentaBedBlock>();
    block->facing = MagentaBedBlock::FACING_EAST;
    block->occupied = MagentaBedBlock::OCCUPIED_TRUE;
    block->part = MagentaBedBlock::PART_HEAD;
    registry[1323] = block;
  }

  { // ID: 1324
    std::shared_ptr<MagentaBedBlock> block = std::make_shared<MagentaBedBlock>();
    block->facing = MagentaBedBlock::FACING_EAST;
    block->occupied = MagentaBedBlock::OCCUPIED_TRUE;
    block->part = MagentaBedBlock::PART_FOOT;
    registry[1324] = block;
  }

  { // ID: 1325
    std::shared_ptr<MagentaBedBlock> block = std::make_shared<MagentaBedBlock>();
    block->facing = MagentaBedBlock::FACING_EAST;
    block->occupied = MagentaBedBlock::OCCUPIED_FALSE;
    block->part = MagentaBedBlock::PART_HEAD;
    registry[1325] = block;
  }

  { // ID: 1326
    std::shared_ptr<MagentaBedBlock> block = std::make_shared<MagentaBedBlock>();
    block->facing = MagentaBedBlock::FACING_EAST;
    block->occupied = MagentaBedBlock::OCCUPIED_FALSE;
    block->part = MagentaBedBlock::PART_FOOT;
    registry[1326] = block;
  }

  { // ID: 1640
    std::shared_ptr<MagentaWoolBlock> block = std::make_shared<MagentaWoolBlock>();
    registry[1640] = block;
  }

  { // ID: 1654
    std::shared_ptr<MovingPistonBlock> block = std::make_shared<MovingPistonBlock>();
    block->type = MovingPistonBlock::TYPE_NORMAL;
    block->facing = MovingPistonBlock::FACING_NORTH;
    registry[1654] = block;
  }

  { // ID: 1655
    std::shared_ptr<MovingPistonBlock> block = std::make_shared<MovingPistonBlock>();
    block->type = MovingPistonBlock::TYPE_STICKY;
    block->facing = MovingPistonBlock::FACING_NORTH;
    registry[1655] = block;
  }

  { // ID: 1656
    std::shared_ptr<MovingPistonBlock> block = std::make_shared<MovingPistonBlock>();
    block->type = MovingPistonBlock::TYPE_NORMAL;
    block->facing = MovingPistonBlock::FACING_EAST;
    registry[1656] = block;
  }

  { // ID: 1657
    std::shared_ptr<MovingPistonBlock> block = std::make_shared<MovingPistonBlock>();
    block->type = MovingPistonBlock::TYPE_STICKY;
    block->facing = MovingPistonBlock::FACING_EAST;
    registry[1657] = block;
  }

  { // ID: 1658
    std::shared_ptr<MovingPistonBlock> block = std::make_shared<MovingPistonBlock>();
    block->type = MovingPistonBlock::TYPE_NORMAL;
    block->facing = MovingPistonBlock::FACING_SOUTH;
    registry[1658] = block;
  }

  { // ID: 1659
    std::shared_ptr<MovingPistonBlock> block = std::make_shared<MovingPistonBlock>();
    block->type = MovingPistonBlock::TYPE_STICKY;
    block->facing = MovingPistonBlock::FACING_SOUTH;
    registry[1659] = block;
  }

  { // ID: 1660
    std::shared_ptr<MovingPistonBlock> block = std::make_shared<MovingPistonBlock>();
    block->type = MovingPistonBlock::TYPE_NORMAL;
    block->facing = MovingPistonBlock::FACING_WEST;
    registry[1660] = block;
  }

  { // ID: 1661
    std::shared_ptr<MovingPistonBlock> block = std::make_shared<MovingPistonBlock>();
    block->type = MovingPistonBlock::TYPE_STICKY;
    block->facing = MovingPistonBlock::FACING_WEST;
    registry[1661] = block;
  }

  { // ID: 1662
    std::shared_ptr<MovingPistonBlock> block = std::make_shared<MovingPistonBlock>();
    block->type = MovingPistonBlock::TYPE_NORMAL;
    block->facing = MovingPistonBlock::FACING_UP;
    registry[1662] = block;
  }

  { // ID: 1663
    std::shared_ptr<MovingPistonBlock> block = std::make_shared<MovingPistonBlock>();
    block->type = MovingPistonBlock::TYPE_STICKY;
    block->facing = MovingPistonBlock::FACING_UP;
    registry[1663] = block;
  }

  { // ID: 1664
    std::shared_ptr<MovingPistonBlock> block = std::make_shared<MovingPistonBlock>();
    block->type = MovingPistonBlock::TYPE_NORMAL;
    block->facing = MovingPistonBlock::FACING_DOWN;
    registry[1664] = block;
  }

  { // ID: 1665
    std::shared_ptr<MovingPistonBlock> block = std::make_shared<MovingPistonBlock>();
    block->type = MovingPistonBlock::TYPE_STICKY;
    block->facing = MovingPistonBlock::FACING_DOWN;
    registry[1665] = block;
  }

  { // ID: 1687
    std::shared_ptr<MossyCobblestoneBlock> block = std::make_shared<MossyCobblestoneBlock>();
    registry[1687] = block;
  }

  { // ID: 3828
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_0;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_TRUE;
    registry[3828] = block;
  }

  { // ID: 3829
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_0;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_FALSE;
    registry[3829] = block;
  }

  { // ID: 3830
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_1;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_TRUE;
    registry[3830] = block;
  }

  { // ID: 3831
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_1;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_FALSE;
    registry[3831] = block;
  }

  { // ID: 3832
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_2;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_TRUE;
    registry[3832] = block;
  }

  { // ID: 3833
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_2;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_FALSE;
    registry[3833] = block;
  }

  { // ID: 3834
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_3;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_TRUE;
    registry[3834] = block;
  }

  { // ID: 3835
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_3;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_FALSE;
    registry[3835] = block;
  }

  { // ID: 3836
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_4;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_TRUE;
    registry[3836] = block;
  }

  { // ID: 3837
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_4;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_FALSE;
    registry[3837] = block;
  }

  { // ID: 3838
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_5;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_TRUE;
    registry[3838] = block;
  }

  { // ID: 3839
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_5;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_FALSE;
    registry[3839] = block;
  }

  { // ID: 3840
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_6;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_TRUE;
    registry[3840] = block;
  }

  { // ID: 3841
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_6;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_FALSE;
    registry[3841] = block;
  }

  { // ID: 3842
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_7;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_TRUE;
    registry[3842] = block;
  }

  { // ID: 3843
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_7;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_FALSE;
    registry[3843] = block;
  }

  { // ID: 3844
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_8;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_TRUE;
    registry[3844] = block;
  }

  { // ID: 3845
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_8;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_FALSE;
    registry[3845] = block;
  }

  { // ID: 3846
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_9;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_TRUE;
    registry[3846] = block;
  }

  { // ID: 3847
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_9;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_FALSE;
    registry[3847] = block;
  }

  { // ID: 3848
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_10;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_TRUE;
    registry[3848] = block;
  }

  { // ID: 3849
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_10;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_FALSE;
    registry[3849] = block;
  }

  { // ID: 3850
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_11;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_TRUE;
    registry[3850] = block;
  }

  { // ID: 3851
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_11;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_FALSE;
    registry[3851] = block;
  }

  { // ID: 3852
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_12;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_TRUE;
    registry[3852] = block;
  }

  { // ID: 3853
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_12;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_FALSE;
    registry[3853] = block;
  }

  { // ID: 3854
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_13;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_TRUE;
    registry[3854] = block;
  }

  { // ID: 3855
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_13;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_FALSE;
    registry[3855] = block;
  }

  { // ID: 3856
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_14;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_TRUE;
    registry[3856] = block;
  }

  { // ID: 3857
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_14;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_FALSE;
    registry[3857] = block;
  }

  { // ID: 3858
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_15;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_TRUE;
    registry[3858] = block;
  }

  { // ID: 3859
    std::shared_ptr<MangroveSignBlock> block = std::make_shared<MangroveSignBlock>();
    block->rotation = MangroveSignBlock::ROTATION_15;
    block->waterlogged = MangroveSignBlock::WATERLOGGED_FALSE;
    registry[3859] = block;
  }

  { // ID: 4080
    std::shared_ptr<MangroveWallSignBlock> block = std::make_shared<MangroveWallSignBlock>();
    block->facing = MangroveWallSignBlock::FACING_NORTH;
    block->waterlogged = MangroveWallSignBlock::WATERLOGGED_TRUE;
    registry[4080] = block;
  }

  { // ID: 4081
    std::shared_ptr<MangroveWallSignBlock> block = std::make_shared<MangroveWallSignBlock>();
    block->facing = MangroveWallSignBlock::FACING_NORTH;
    block->waterlogged = MangroveWallSignBlock::WATERLOGGED_FALSE;
    registry[4081] = block;
  }

  { // ID: 4082
    std::shared_ptr<MangroveWallSignBlock> block = std::make_shared<MangroveWallSignBlock>();
    block->facing = MangroveWallSignBlock::FACING_SOUTH;
    block->waterlogged = MangroveWallSignBlock::WATERLOGGED_TRUE;
    registry[4082] = block;
  }

  { // ID: 4083
    std::shared_ptr<MangroveWallSignBlock> block = std::make_shared<MangroveWallSignBlock>();
    block->facing = MangroveWallSignBlock::FACING_SOUTH;
    block->waterlogged = MangroveWallSignBlock::WATERLOGGED_FALSE;
    registry[4083] = block;
  }

  { // ID: 4084
    std::shared_ptr<MangroveWallSignBlock> block = std::make_shared<MangroveWallSignBlock>();
    block->facing = MangroveWallSignBlock::FACING_WEST;
    block->waterlogged = MangroveWallSignBlock::WATERLOGGED_TRUE;
    registry[4084] = block;
  }

  { // ID: 4085
    std::shared_ptr<MangroveWallSignBlock> block = std::make_shared<MangroveWallSignBlock>();
    block->facing = MangroveWallSignBlock::FACING_WEST;
    block->waterlogged = MangroveWallSignBlock::WATERLOGGED_FALSE;
    registry[4085] = block;
  }

  { // ID: 4086
    std::shared_ptr<MangroveWallSignBlock> block = std::make_shared<MangroveWallSignBlock>();
    block->facing = MangroveWallSignBlock::FACING_EAST;
    block->waterlogged = MangroveWallSignBlock::WATERLOGGED_TRUE;
    registry[4086] = block;
  }

  { // ID: 4087
    std::shared_ptr<MangroveWallSignBlock> block = std::make_shared<MangroveWallSignBlock>();
    block->facing = MangroveWallSignBlock::FACING_EAST;
    block->waterlogged = MangroveWallSignBlock::WATERLOGGED_FALSE;
    registry[4087] = block;
  }

  { // ID: 4190
    std::shared_ptr<MangrovePressurePlateBlock> block = std::make_shared<MangrovePressurePlateBlock>();
    block->powered = MangrovePressurePlateBlock::POWERED_TRUE;
    registry[4190] = block;
  }

  { // ID: 4191
    std::shared_ptr<MangrovePressurePlateBlock> block = std::make_shared<MangrovePressurePlateBlock>();
    block->powered = MangrovePressurePlateBlock::POWERED_FALSE;
    registry[4191] = block;
  }

  { // ID: 4406
    std::shared_ptr<MagentaStainedGlassBlock> block = std::make_shared<MagentaStainedGlassBlock>();
    registry[4406] = block;
  }

  { // ID: 4804
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_NORTH;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4804] = block;
  }

  { // ID: 4805
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_NORTH;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4805] = block;
  }

  { // ID: 4806
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_NORTH;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4806] = block;
  }

  { // ID: 4807
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_NORTH;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4807] = block;
  }

  { // ID: 4808
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_NORTH;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4808] = block;
  }

  { // ID: 4809
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_NORTH;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4809] = block;
  }

  { // ID: 4810
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_NORTH;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4810] = block;
  }

  { // ID: 4811
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_NORTH;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4811] = block;
  }

  { // ID: 4812
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_NORTH;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4812] = block;
  }

  { // ID: 4813
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_NORTH;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4813] = block;
  }

  { // ID: 4814
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_NORTH;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4814] = block;
  }

  { // ID: 4815
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_NORTH;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4815] = block;
  }

  { // ID: 4816
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_NORTH;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4816] = block;
  }

  { // ID: 4817
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_NORTH;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4817] = block;
  }

  { // ID: 4818
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_NORTH;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4818] = block;
  }

  { // ID: 4819
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_NORTH;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4819] = block;
  }

  { // ID: 4820
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_SOUTH;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4820] = block;
  }

  { // ID: 4821
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_SOUTH;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4821] = block;
  }

  { // ID: 4822
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_SOUTH;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4822] = block;
  }

  { // ID: 4823
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_SOUTH;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4823] = block;
  }

  { // ID: 4824
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_SOUTH;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4824] = block;
  }

  { // ID: 4825
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_SOUTH;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4825] = block;
  }

  { // ID: 4826
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_SOUTH;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4826] = block;
  }

  { // ID: 4827
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_SOUTH;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4827] = block;
  }

  { // ID: 4828
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_SOUTH;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4828] = block;
  }

  { // ID: 4829
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_SOUTH;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4829] = block;
  }

  { // ID: 4830
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_SOUTH;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4830] = block;
  }

  { // ID: 4831
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_SOUTH;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4831] = block;
  }

  { // ID: 4832
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_SOUTH;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4832] = block;
  }

  { // ID: 4833
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_SOUTH;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4833] = block;
  }

  { // ID: 4834
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_SOUTH;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4834] = block;
  }

  { // ID: 4835
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_SOUTH;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4835] = block;
  }

  { // ID: 4836
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_WEST;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4836] = block;
  }

  { // ID: 4837
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_WEST;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4837] = block;
  }

  { // ID: 4838
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_WEST;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4838] = block;
  }

  { // ID: 4839
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_WEST;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4839] = block;
  }

  { // ID: 4840
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_WEST;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4840] = block;
  }

  { // ID: 4841
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_WEST;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4841] = block;
  }

  { // ID: 4842
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_WEST;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4842] = block;
  }

  { // ID: 4843
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_WEST;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4843] = block;
  }

  { // ID: 4844
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_WEST;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4844] = block;
  }

  { // ID: 4845
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_WEST;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4845] = block;
  }

  { // ID: 4846
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_WEST;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4846] = block;
  }

  { // ID: 4847
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_WEST;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4847] = block;
  }

  { // ID: 4848
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_WEST;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4848] = block;
  }

  { // ID: 4849
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_WEST;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4849] = block;
  }

  { // ID: 4850
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_WEST;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4850] = block;
  }

  { // ID: 4851
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_WEST;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4851] = block;
  }

  { // ID: 4852
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_EAST;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4852] = block;
  }

  { // ID: 4853
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_EAST;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4853] = block;
  }

  { // ID: 4854
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_EAST;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4854] = block;
  }

  { // ID: 4855
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_EAST;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4855] = block;
  }

  { // ID: 4856
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_EAST;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4856] = block;
  }

  { // ID: 4857
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_EAST;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4857] = block;
  }

  { // ID: 4858
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_EAST;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4858] = block;
  }

  { // ID: 4859
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_EAST;
    block->half = MangroveTrapdoorBlock::HALF_TOP;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4859] = block;
  }

  { // ID: 4860
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_EAST;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4860] = block;
  }

  { // ID: 4861
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_EAST;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4861] = block;
  }

  { // ID: 4862
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_EAST;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4862] = block;
  }

  { // ID: 4863
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_EAST;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_TRUE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4863] = block;
  }

  { // ID: 4864
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_EAST;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4864] = block;
  }

  { // ID: 4865
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_EAST;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4865] = block;
  }

  { // ID: 4866
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_EAST;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4866] = block;
  }

  { // ID: 4867
    std::shared_ptr<MangroveTrapdoorBlock> block = std::make_shared<MangroveTrapdoorBlock>();
    block->facing = MangroveTrapdoorBlock::FACING_EAST;
    block->half = MangroveTrapdoorBlock::HALF_BOTTOM;
    block->open = MangroveTrapdoorBlock::OPEN_FALSE;
    block->powered = MangroveTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = MangroveTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4867] = block;
  }

  { // ID: 4869
    std::shared_ptr<MossyStoneBricksBlock> block = std::make_shared<MossyStoneBricksBlock>();
    registry[4869] = block;
  }

  { // ID: 4873
    std::shared_ptr<MudBricksBlock> block = std::make_shared<MudBricksBlock>();
    registry[4873] = block;
  }

  { // ID: 5008
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5008] = block;
  }

  { // ID: 5009
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5009] = block;
  }

  { // ID: 5010
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5010] = block;
  }

  { // ID: 5011
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5011] = block;
  }

  { // ID: 5012
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5012] = block;
  }

  { // ID: 5013
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5013] = block;
  }

  { // ID: 5014
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5014] = block;
  }

  { // ID: 5015
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5015] = block;
  }

  { // ID: 5016
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5016] = block;
  }

  { // ID: 5017
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5017] = block;
  }

  { // ID: 5018
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5018] = block;
  }

  { // ID: 5019
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5019] = block;
  }

  { // ID: 5020
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5020] = block;
  }

  { // ID: 5021
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5021] = block;
  }

  { // ID: 5022
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5022] = block;
  }

  { // ID: 5023
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5023] = block;
  }

  { // ID: 5024
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5024] = block;
  }

  { // ID: 5025
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5025] = block;
  }

  { // ID: 5026
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5026] = block;
  }

  { // ID: 5027
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5027] = block;
  }

  { // ID: 5028
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5028] = block;
  }

  { // ID: 5029
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5029] = block;
  }

  { // ID: 5030
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5030] = block;
  }

  { // ID: 5031
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5031] = block;
  }

  { // ID: 5032
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5032] = block;
  }

  { // ID: 5033
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5033] = block;
  }

  { // ID: 5034
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5034] = block;
  }

  { // ID: 5035
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5035] = block;
  }

  { // ID: 5036
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5036] = block;
  }

  { // ID: 5037
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5037] = block;
  }

  { // ID: 5038
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5038] = block;
  }

  { // ID: 5039
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_TRUE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5039] = block;
  }

  { // ID: 5040
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5040] = block;
  }

  { // ID: 5041
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5041] = block;
  }

  { // ID: 5042
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5042] = block;
  }

  { // ID: 5043
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5043] = block;
  }

  { // ID: 5044
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5044] = block;
  }

  { // ID: 5045
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5045] = block;
  }

  { // ID: 5046
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5046] = block;
  }

  { // ID: 5047
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5047] = block;
  }

  { // ID: 5048
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5048] = block;
  }

  { // ID: 5049
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5049] = block;
  }

  { // ID: 5050
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5050] = block;
  }

  { // ID: 5051
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5051] = block;
  }

  { // ID: 5052
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5052] = block;
  }

  { // ID: 5053
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5053] = block;
  }

  { // ID: 5054
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5054] = block;
  }

  { // ID: 5055
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_TRUE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5055] = block;
  }

  { // ID: 5056
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5056] = block;
  }

  { // ID: 5057
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5057] = block;
  }

  { // ID: 5058
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5058] = block;
  }

  { // ID: 5059
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5059] = block;
  }

  { // ID: 5060
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5060] = block;
  }

  { // ID: 5061
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5061] = block;
  }

  { // ID: 5062
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5062] = block;
  }

  { // ID: 5063
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_TRUE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5063] = block;
  }

  { // ID: 5064
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5064] = block;
  }

  { // ID: 5065
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5065] = block;
  }

  { // ID: 5066
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5066] = block;
  }

  { // ID: 5067
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_TRUE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5067] = block;
  }

  { // ID: 5068
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5068] = block;
  }

  { // ID: 5069
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_TRUE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5069] = block;
  }

  { // ID: 5070
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_TRUE;
    registry[5070] = block;
  }

  { // ID: 5071
    std::shared_ptr<MushroomStemBlock> block = std::make_shared<MushroomStemBlock>();
    block->down = MushroomStemBlock::DOWN_FALSE;
    block->east = MushroomStemBlock::EAST_FALSE;
    block->north = MushroomStemBlock::NORTH_FALSE;
    block->south = MushroomStemBlock::SOUTH_FALSE;
    block->up = MushroomStemBlock::UP_FALSE;
    block->west = MushroomStemBlock::WEST_FALSE;
    registry[5071] = block;
  }

  { // ID: 5142
    std::shared_ptr<MelonBlock> block = std::make_shared<MelonBlock>();
    registry[5142] = block;
  }

  { // ID: 5159
    std::shared_ptr<MelonStemBlock> block = std::make_shared<MelonStemBlock>();
    block->age = MelonStemBlock::AGE_0;
    registry[5159] = block;
  }

  { // ID: 5160
    std::shared_ptr<MelonStemBlock> block = std::make_shared<MelonStemBlock>();
    block->age = MelonStemBlock::AGE_1;
    registry[5160] = block;
  }

  { // ID: 5161
    std::shared_ptr<MelonStemBlock> block = std::make_shared<MelonStemBlock>();
    block->age = MelonStemBlock::AGE_2;
    registry[5161] = block;
  }

  { // ID: 5162
    std::shared_ptr<MelonStemBlock> block = std::make_shared<MelonStemBlock>();
    block->age = MelonStemBlock::AGE_3;
    registry[5162] = block;
  }

  { // ID: 5163
    std::shared_ptr<MelonStemBlock> block = std::make_shared<MelonStemBlock>();
    block->age = MelonStemBlock::AGE_4;
    registry[5163] = block;
  }

  { // ID: 5164
    std::shared_ptr<MelonStemBlock> block = std::make_shared<MelonStemBlock>();
    block->age = MelonStemBlock::AGE_5;
    registry[5164] = block;
  }

  { // ID: 5165
    std::shared_ptr<MelonStemBlock> block = std::make_shared<MelonStemBlock>();
    block->age = MelonStemBlock::AGE_6;
    registry[5165] = block;
  }

  { // ID: 5166
    std::shared_ptr<MelonStemBlock> block = std::make_shared<MelonStemBlock>();
    block->age = MelonStemBlock::AGE_7;
    registry[5166] = block;
  }

  { // ID: 5519
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_NORTH;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5519] = block;
  }

  { // ID: 5520
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_NORTH;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5520] = block;
  }

  { // ID: 5521
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_NORTH;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5521] = block;
  }

  { // ID: 5522
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_NORTH;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5522] = block;
  }

  { // ID: 5523
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_NORTH;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5523] = block;
  }

  { // ID: 5524
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_NORTH;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5524] = block;
  }

  { // ID: 5525
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_NORTH;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5525] = block;
  }

  { // ID: 5526
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_NORTH;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5526] = block;
  }

  { // ID: 5527
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_NORTH;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5527] = block;
  }

  { // ID: 5528
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_NORTH;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5528] = block;
  }

  { // ID: 5529
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_NORTH;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5529] = block;
  }

  { // ID: 5530
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_NORTH;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5530] = block;
  }

  { // ID: 5531
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_NORTH;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5531] = block;
  }

  { // ID: 5532
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_NORTH;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5532] = block;
  }

  { // ID: 5533
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_NORTH;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5533] = block;
  }

  { // ID: 5534
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_NORTH;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5534] = block;
  }

  { // ID: 5535
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_NORTH;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5535] = block;
  }

  { // ID: 5536
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_NORTH;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5536] = block;
  }

  { // ID: 5537
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_NORTH;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5537] = block;
  }

  { // ID: 5538
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_NORTH;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5538] = block;
  }

  { // ID: 5539
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_SOUTH;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5539] = block;
  }

  { // ID: 5540
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_SOUTH;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5540] = block;
  }

  { // ID: 5541
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_SOUTH;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5541] = block;
  }

  { // ID: 5542
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_SOUTH;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5542] = block;
  }

  { // ID: 5543
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_SOUTH;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5543] = block;
  }

  { // ID: 5544
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_SOUTH;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5544] = block;
  }

  { // ID: 5545
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_SOUTH;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5545] = block;
  }

  { // ID: 5546
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_SOUTH;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5546] = block;
  }

  { // ID: 5547
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_SOUTH;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5547] = block;
  }

  { // ID: 5548
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_SOUTH;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5548] = block;
  }

  { // ID: 5549
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_SOUTH;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5549] = block;
  }

  { // ID: 5550
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_SOUTH;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5550] = block;
  }

  { // ID: 5551
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_SOUTH;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5551] = block;
  }

  { // ID: 5552
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_SOUTH;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5552] = block;
  }

  { // ID: 5553
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_SOUTH;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5553] = block;
  }

  { // ID: 5554
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_SOUTH;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5554] = block;
  }

  { // ID: 5555
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_SOUTH;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5555] = block;
  }

  { // ID: 5556
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_SOUTH;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5556] = block;
  }

  { // ID: 5557
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_SOUTH;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5557] = block;
  }

  { // ID: 5558
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_SOUTH;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5558] = block;
  }

  { // ID: 5559
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_WEST;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5559] = block;
  }

  { // ID: 5560
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_WEST;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5560] = block;
  }

  { // ID: 5561
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_WEST;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5561] = block;
  }

  { // ID: 5562
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_WEST;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5562] = block;
  }

  { // ID: 5563
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_WEST;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5563] = block;
  }

  { // ID: 5564
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_WEST;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5564] = block;
  }

  { // ID: 5565
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_WEST;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5565] = block;
  }

  { // ID: 5566
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_WEST;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5566] = block;
  }

  { // ID: 5567
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_WEST;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5567] = block;
  }

  { // ID: 5568
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_WEST;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5568] = block;
  }

  { // ID: 5569
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_WEST;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5569] = block;
  }

  { // ID: 5570
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_WEST;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5570] = block;
  }

  { // ID: 5571
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_WEST;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5571] = block;
  }

  { // ID: 5572
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_WEST;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5572] = block;
  }

  { // ID: 5573
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_WEST;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5573] = block;
  }

  { // ID: 5574
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_WEST;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5574] = block;
  }

  { // ID: 5575
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_WEST;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5575] = block;
  }

  { // ID: 5576
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_WEST;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5576] = block;
  }

  { // ID: 5577
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_WEST;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5577] = block;
  }

  { // ID: 5578
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_WEST;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5578] = block;
  }

  { // ID: 5579
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_EAST;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5579] = block;
  }

  { // ID: 5580
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_EAST;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5580] = block;
  }

  { // ID: 5581
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_EAST;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5581] = block;
  }

  { // ID: 5582
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_EAST;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5582] = block;
  }

  { // ID: 5583
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_EAST;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5583] = block;
  }

  { // ID: 5584
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_EAST;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5584] = block;
  }

  { // ID: 5585
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_EAST;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5585] = block;
  }

  { // ID: 5586
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_EAST;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5586] = block;
  }

  { // ID: 5587
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_EAST;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5587] = block;
  }

  { // ID: 5588
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_EAST;
    block->half = MudBrickStairsBlock::HALF_TOP;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5588] = block;
  }

  { // ID: 5589
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_EAST;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5589] = block;
  }

  { // ID: 5590
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_EAST;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5590] = block;
  }

  { // ID: 5591
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_EAST;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5591] = block;
  }

  { // ID: 5592
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_EAST;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5592] = block;
  }

  { // ID: 5593
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_EAST;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5593] = block;
  }

  { // ID: 5594
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_EAST;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5594] = block;
  }

  { // ID: 5595
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_EAST;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5595] = block;
  }

  { // ID: 5596
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_EAST;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5596] = block;
  }

  { // ID: 5597
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_EAST;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5597] = block;
  }

  { // ID: 5598
    std::shared_ptr<MudBrickStairsBlock> block = std::make_shared<MudBrickStairsBlock>();
    block->facing = MudBrickStairsBlock::FACING_EAST;
    block->half = MudBrickStairsBlock::HALF_BOTTOM;
    block->shape = MudBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MudBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5598] = block;
  }

  { // ID: 5599
    std::shared_ptr<MyceliumBlock> block = std::make_shared<MyceliumBlock>();
    block->snowy = MyceliumBlock::SNOWY_TRUE;
    registry[5599] = block;
  }

  { // ID: 5600
    std::shared_ptr<MyceliumBlock> block = std::make_shared<MyceliumBlock>();
    block->snowy = MyceliumBlock::SNOWY_FALSE;
    registry[5600] = block;
  }

  { // ID: 6573
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6573] = block;
  }

  { // ID: 6574
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6574] = block;
  }

  { // ID: 6575
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6575] = block;
  }

  { // ID: 6576
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6576] = block;
  }

  { // ID: 6577
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6577] = block;
  }

  { // ID: 6578
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6578] = block;
  }

  { // ID: 6579
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6579] = block;
  }

  { // ID: 6580
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6580] = block;
  }

  { // ID: 6581
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6581] = block;
  }

  { // ID: 6582
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6582] = block;
  }

  { // ID: 6583
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6583] = block;
  }

  { // ID: 6584
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6584] = block;
  }

  { // ID: 6585
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6585] = block;
  }

  { // ID: 6586
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6586] = block;
  }

  { // ID: 6587
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6587] = block;
  }

  { // ID: 6588
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6588] = block;
  }

  { // ID: 6589
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6589] = block;
  }

  { // ID: 6590
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6590] = block;
  }

  { // ID: 6591
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6591] = block;
  }

  { // ID: 6592
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6592] = block;
  }

  { // ID: 6593
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6593] = block;
  }

  { // ID: 6594
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6594] = block;
  }

  { // ID: 6595
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6595] = block;
  }

  { // ID: 6596
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6596] = block;
  }

  { // ID: 6597
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6597] = block;
  }

  { // ID: 6598
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6598] = block;
  }

  { // ID: 6599
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6599] = block;
  }

  { // ID: 6600
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6600] = block;
  }

  { // ID: 6601
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6601] = block;
  }

  { // ID: 6602
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6602] = block;
  }

  { // ID: 6603
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6603] = block;
  }

  { // ID: 6604
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6604] = block;
  }

  { // ID: 6605
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6605] = block;
  }

  { // ID: 6606
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6606] = block;
  }

  { // ID: 6607
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6607] = block;
  }

  { // ID: 6608
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6608] = block;
  }

  { // ID: 6609
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6609] = block;
  }

  { // ID: 6610
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6610] = block;
  }

  { // ID: 6611
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6611] = block;
  }

  { // ID: 6612
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6612] = block;
  }

  { // ID: 6613
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6613] = block;
  }

  { // ID: 6614
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6614] = block;
  }

  { // ID: 6615
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6615] = block;
  }

  { // ID: 6616
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6616] = block;
  }

  { // ID: 6617
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6617] = block;
  }

  { // ID: 6618
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6618] = block;
  }

  { // ID: 6619
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6619] = block;
  }

  { // ID: 6620
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6620] = block;
  }

  { // ID: 6621
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6621] = block;
  }

  { // ID: 6622
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6622] = block;
  }

  { // ID: 6623
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6623] = block;
  }

  { // ID: 6624
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6624] = block;
  }

  { // ID: 6625
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6625] = block;
  }

  { // ID: 6626
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6626] = block;
  }

  { // ID: 6627
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6627] = block;
  }

  { // ID: 6628
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6628] = block;
  }

  { // ID: 6629
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6629] = block;
  }

  { // ID: 6630
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6630] = block;
  }

  { // ID: 6631
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6631] = block;
  }

  { // ID: 6632
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6632] = block;
  }

  { // ID: 6633
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6633] = block;
  }

  { // ID: 6634
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6634] = block;
  }

  { // ID: 6635
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6635] = block;
  }

  { // ID: 6636
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6636] = block;
  }

  { // ID: 6637
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6637] = block;
  }

  { // ID: 6638
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6638] = block;
  }

  { // ID: 6639
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6639] = block;
  }

  { // ID: 6640
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6640] = block;
  }

  { // ID: 6641
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6641] = block;
  }

  { // ID: 6642
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6642] = block;
  }

  { // ID: 6643
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6643] = block;
  }

  { // ID: 6644
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6644] = block;
  }

  { // ID: 6645
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6645] = block;
  }

  { // ID: 6646
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6646] = block;
  }

  { // ID: 6647
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6647] = block;
  }

  { // ID: 6648
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6648] = block;
  }

  { // ID: 6649
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6649] = block;
  }

  { // ID: 6650
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6650] = block;
  }

  { // ID: 6651
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6651] = block;
  }

  { // ID: 6652
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6652] = block;
  }

  { // ID: 6653
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6653] = block;
  }

  { // ID: 6654
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6654] = block;
  }

  { // ID: 6655
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6655] = block;
  }

  { // ID: 6656
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6656] = block;
  }

  { // ID: 6657
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6657] = block;
  }

  { // ID: 6658
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6658] = block;
  }

  { // ID: 6659
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6659] = block;
  }

  { // ID: 6660
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6660] = block;
  }

  { // ID: 6661
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6661] = block;
  }

  { // ID: 6662
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6662] = block;
  }

  { // ID: 6663
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6663] = block;
  }

  { // ID: 6664
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6664] = block;
  }

  { // ID: 6665
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6665] = block;
  }

  { // ID: 6666
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6666] = block;
  }

  { // ID: 6667
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6667] = block;
  }

  { // ID: 6668
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6668] = block;
  }

  { // ID: 6669
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6669] = block;
  }

  { // ID: 6670
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6670] = block;
  }

  { // ID: 6671
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6671] = block;
  }

  { // ID: 6672
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6672] = block;
  }

  { // ID: 6673
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6673] = block;
  }

  { // ID: 6674
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6674] = block;
  }

  { // ID: 6675
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6675] = block;
  }

  { // ID: 6676
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6676] = block;
  }

  { // ID: 6677
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6677] = block;
  }

  { // ID: 6678
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6678] = block;
  }

  { // ID: 6679
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6679] = block;
  }

  { // ID: 6680
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_NONE;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6680] = block;
  }

  { // ID: 6681
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6681] = block;
  }

  { // ID: 6682
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6682] = block;
  }

  { // ID: 6683
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6683] = block;
  }

  { // ID: 6684
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6684] = block;
  }

  { // ID: 6685
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6685] = block;
  }

  { // ID: 6686
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6686] = block;
  }

  { // ID: 6687
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6687] = block;
  }

  { // ID: 6688
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6688] = block;
  }

  { // ID: 6689
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6689] = block;
  }

  { // ID: 6690
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6690] = block;
  }

  { // ID: 6691
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6691] = block;
  }

  { // ID: 6692
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6692] = block;
  }

  { // ID: 6693
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6693] = block;
  }

  { // ID: 6694
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6694] = block;
  }

  { // ID: 6695
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6695] = block;
  }

  { // ID: 6696
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6696] = block;
  }

  { // ID: 6697
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6697] = block;
  }

  { // ID: 6698
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6698] = block;
  }

  { // ID: 6699
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6699] = block;
  }

  { // ID: 6700
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6700] = block;
  }

  { // ID: 6701
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6701] = block;
  }

  { // ID: 6702
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6702] = block;
  }

  { // ID: 6703
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6703] = block;
  }

  { // ID: 6704
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6704] = block;
  }

  { // ID: 6705
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6705] = block;
  }

  { // ID: 6706
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6706] = block;
  }

  { // ID: 6707
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6707] = block;
  }

  { // ID: 6708
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6708] = block;
  }

  { // ID: 6709
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6709] = block;
  }

  { // ID: 6710
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6710] = block;
  }

  { // ID: 6711
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6711] = block;
  }

  { // ID: 6712
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6712] = block;
  }

  { // ID: 6713
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6713] = block;
  }

  { // ID: 6714
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6714] = block;
  }

  { // ID: 6715
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6715] = block;
  }

  { // ID: 6716
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6716] = block;
  }

  { // ID: 6717
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6717] = block;
  }

  { // ID: 6718
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6718] = block;
  }

  { // ID: 6719
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6719] = block;
  }

  { // ID: 6720
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6720] = block;
  }

  { // ID: 6721
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6721] = block;
  }

  { // ID: 6722
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6722] = block;
  }

  { // ID: 6723
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6723] = block;
  }

  { // ID: 6724
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6724] = block;
  }

  { // ID: 6725
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6725] = block;
  }

  { // ID: 6726
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6726] = block;
  }

  { // ID: 6727
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6727] = block;
  }

  { // ID: 6728
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6728] = block;
  }

  { // ID: 6729
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6729] = block;
  }

  { // ID: 6730
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6730] = block;
  }

  { // ID: 6731
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6731] = block;
  }

  { // ID: 6732
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6732] = block;
  }

  { // ID: 6733
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6733] = block;
  }

  { // ID: 6734
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6734] = block;
  }

  { // ID: 6735
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6735] = block;
  }

  { // ID: 6736
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6736] = block;
  }

  { // ID: 6737
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6737] = block;
  }

  { // ID: 6738
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6738] = block;
  }

  { // ID: 6739
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6739] = block;
  }

  { // ID: 6740
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6740] = block;
  }

  { // ID: 6741
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6741] = block;
  }

  { // ID: 6742
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6742] = block;
  }

  { // ID: 6743
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6743] = block;
  }

  { // ID: 6744
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6744] = block;
  }

  { // ID: 6745
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6745] = block;
  }

  { // ID: 6746
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6746] = block;
  }

  { // ID: 6747
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6747] = block;
  }

  { // ID: 6748
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6748] = block;
  }

  { // ID: 6749
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6749] = block;
  }

  { // ID: 6750
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6750] = block;
  }

  { // ID: 6751
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6751] = block;
  }

  { // ID: 6752
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6752] = block;
  }

  { // ID: 6753
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6753] = block;
  }

  { // ID: 6754
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6754] = block;
  }

  { // ID: 6755
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6755] = block;
  }

  { // ID: 6756
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6756] = block;
  }

  { // ID: 6757
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6757] = block;
  }

  { // ID: 6758
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6758] = block;
  }

  { // ID: 6759
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6759] = block;
  }

  { // ID: 6760
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6760] = block;
  }

  { // ID: 6761
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6761] = block;
  }

  { // ID: 6762
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6762] = block;
  }

  { // ID: 6763
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6763] = block;
  }

  { // ID: 6764
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6764] = block;
  }

  { // ID: 6765
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6765] = block;
  }

  { // ID: 6766
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6766] = block;
  }

  { // ID: 6767
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6767] = block;
  }

  { // ID: 6768
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6768] = block;
  }

  { // ID: 6769
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6769] = block;
  }

  { // ID: 6770
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6770] = block;
  }

  { // ID: 6771
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6771] = block;
  }

  { // ID: 6772
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6772] = block;
  }

  { // ID: 6773
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6773] = block;
  }

  { // ID: 6774
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6774] = block;
  }

  { // ID: 6775
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6775] = block;
  }

  { // ID: 6776
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6776] = block;
  }

  { // ID: 6777
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6777] = block;
  }

  { // ID: 6778
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6778] = block;
  }

  { // ID: 6779
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6779] = block;
  }

  { // ID: 6780
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6780] = block;
  }

  { // ID: 6781
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6781] = block;
  }

  { // ID: 6782
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6782] = block;
  }

  { // ID: 6783
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6783] = block;
  }

  { // ID: 6784
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6784] = block;
  }

  { // ID: 6785
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6785] = block;
  }

  { // ID: 6786
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6786] = block;
  }

  { // ID: 6787
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6787] = block;
  }

  { // ID: 6788
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_LOW;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6788] = block;
  }

  { // ID: 6789
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6789] = block;
  }

  { // ID: 6790
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6790] = block;
  }

  { // ID: 6791
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6791] = block;
  }

  { // ID: 6792
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6792] = block;
  }

  { // ID: 6793
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6793] = block;
  }

  { // ID: 6794
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6794] = block;
  }

  { // ID: 6795
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6795] = block;
  }

  { // ID: 6796
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6796] = block;
  }

  { // ID: 6797
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6797] = block;
  }

  { // ID: 6798
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6798] = block;
  }

  { // ID: 6799
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6799] = block;
  }

  { // ID: 6800
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6800] = block;
  }

  { // ID: 6801
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6801] = block;
  }

  { // ID: 6802
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6802] = block;
  }

  { // ID: 6803
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6803] = block;
  }

  { // ID: 6804
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6804] = block;
  }

  { // ID: 6805
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6805] = block;
  }

  { // ID: 6806
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6806] = block;
  }

  { // ID: 6807
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6807] = block;
  }

  { // ID: 6808
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6808] = block;
  }

  { // ID: 6809
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6809] = block;
  }

  { // ID: 6810
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6810] = block;
  }

  { // ID: 6811
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6811] = block;
  }

  { // ID: 6812
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6812] = block;
  }

  { // ID: 6813
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6813] = block;
  }

  { // ID: 6814
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6814] = block;
  }

  { // ID: 6815
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6815] = block;
  }

  { // ID: 6816
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6816] = block;
  }

  { // ID: 6817
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6817] = block;
  }

  { // ID: 6818
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6818] = block;
  }

  { // ID: 6819
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6819] = block;
  }

  { // ID: 6820
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6820] = block;
  }

  { // ID: 6821
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6821] = block;
  }

  { // ID: 6822
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6822] = block;
  }

  { // ID: 6823
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6823] = block;
  }

  { // ID: 6824
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_NONE;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6824] = block;
  }

  { // ID: 6825
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6825] = block;
  }

  { // ID: 6826
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6826] = block;
  }

  { // ID: 6827
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6827] = block;
  }

  { // ID: 6828
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6828] = block;
  }

  { // ID: 6829
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6829] = block;
  }

  { // ID: 6830
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6830] = block;
  }

  { // ID: 6831
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6831] = block;
  }

  { // ID: 6832
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6832] = block;
  }

  { // ID: 6833
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6833] = block;
  }

  { // ID: 6834
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6834] = block;
  }

  { // ID: 6835
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6835] = block;
  }

  { // ID: 6836
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6836] = block;
  }

  { // ID: 6837
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6837] = block;
  }

  { // ID: 6838
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6838] = block;
  }

  { // ID: 6839
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6839] = block;
  }

  { // ID: 6840
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6840] = block;
  }

  { // ID: 6841
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6841] = block;
  }

  { // ID: 6842
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6842] = block;
  }

  { // ID: 6843
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6843] = block;
  }

  { // ID: 6844
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6844] = block;
  }

  { // ID: 6845
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6845] = block;
  }

  { // ID: 6846
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6846] = block;
  }

  { // ID: 6847
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6847] = block;
  }

  { // ID: 6848
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6848] = block;
  }

  { // ID: 6849
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6849] = block;
  }

  { // ID: 6850
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6850] = block;
  }

  { // ID: 6851
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6851] = block;
  }

  { // ID: 6852
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6852] = block;
  }

  { // ID: 6853
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6853] = block;
  }

  { // ID: 6854
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6854] = block;
  }

  { // ID: 6855
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6855] = block;
  }

  { // ID: 6856
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6856] = block;
  }

  { // ID: 6857
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6857] = block;
  }

  { // ID: 6858
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6858] = block;
  }

  { // ID: 6859
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6859] = block;
  }

  { // ID: 6860
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_LOW;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6860] = block;
  }

  { // ID: 6861
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6861] = block;
  }

  { // ID: 6862
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6862] = block;
  }

  { // ID: 6863
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6863] = block;
  }

  { // ID: 6864
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6864] = block;
  }

  { // ID: 6865
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6865] = block;
  }

  { // ID: 6866
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6866] = block;
  }

  { // ID: 6867
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6867] = block;
  }

  { // ID: 6868
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6868] = block;
  }

  { // ID: 6869
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6869] = block;
  }

  { // ID: 6870
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6870] = block;
  }

  { // ID: 6871
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6871] = block;
  }

  { // ID: 6872
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_NONE;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6872] = block;
  }

  { // ID: 6873
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6873] = block;
  }

  { // ID: 6874
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6874] = block;
  }

  { // ID: 6875
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6875] = block;
  }

  { // ID: 6876
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6876] = block;
  }

  { // ID: 6877
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6877] = block;
  }

  { // ID: 6878
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6878] = block;
  }

  { // ID: 6879
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6879] = block;
  }

  { // ID: 6880
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6880] = block;
  }

  { // ID: 6881
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6881] = block;
  }

  { // ID: 6882
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6882] = block;
  }

  { // ID: 6883
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6883] = block;
  }

  { // ID: 6884
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_LOW;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6884] = block;
  }

  { // ID: 6885
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6885] = block;
  }

  { // ID: 6886
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6886] = block;
  }

  { // ID: 6887
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6887] = block;
  }

  { // ID: 6888
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6888] = block;
  }

  { // ID: 6889
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6889] = block;
  }

  { // ID: 6890
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_TRUE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6890] = block;
  }

  { // ID: 6891
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6891] = block;
  }

  { // ID: 6892
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6892] = block;
  }

  { // ID: 6893
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6893] = block;
  }

  { // ID: 6894
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_NONE;
    registry[6894] = block;
  }

  { // ID: 6895
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_LOW;
    registry[6895] = block;
  }

  { // ID: 6896
    std::shared_ptr<MossyCobblestoneWallBlock> block = std::make_shared<MossyCobblestoneWallBlock>();
    block->east = MossyCobblestoneWallBlock::EAST_TALL;
    block->north = MossyCobblestoneWallBlock::NORTH_TALL;
    block->south = MossyCobblestoneWallBlock::SOUTH_TALL;
    block->up = MossyCobblestoneWallBlock::UP_FALSE;
    block->waterlogged = MossyCobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = MossyCobblestoneWallBlock::WEST_TALL;
    registry[6896] = block;
  }

  { // ID: 7083
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_FLOOR;
    block->facing = MangroveButtonBlock::FACING_NORTH;
    block->powered = MangroveButtonBlock::POWERED_TRUE;
    registry[7083] = block;
  }

  { // ID: 7084
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_FLOOR;
    block->facing = MangroveButtonBlock::FACING_NORTH;
    block->powered = MangroveButtonBlock::POWERED_FALSE;
    registry[7084] = block;
  }

  { // ID: 7085
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_FLOOR;
    block->facing = MangroveButtonBlock::FACING_SOUTH;
    block->powered = MangroveButtonBlock::POWERED_TRUE;
    registry[7085] = block;
  }

  { // ID: 7086
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_FLOOR;
    block->facing = MangroveButtonBlock::FACING_SOUTH;
    block->powered = MangroveButtonBlock::POWERED_FALSE;
    registry[7086] = block;
  }

  { // ID: 7087
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_FLOOR;
    block->facing = MangroveButtonBlock::FACING_WEST;
    block->powered = MangroveButtonBlock::POWERED_TRUE;
    registry[7087] = block;
  }

  { // ID: 7088
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_FLOOR;
    block->facing = MangroveButtonBlock::FACING_WEST;
    block->powered = MangroveButtonBlock::POWERED_FALSE;
    registry[7088] = block;
  }

  { // ID: 7089
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_FLOOR;
    block->facing = MangroveButtonBlock::FACING_EAST;
    block->powered = MangroveButtonBlock::POWERED_TRUE;
    registry[7089] = block;
  }

  { // ID: 7090
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_FLOOR;
    block->facing = MangroveButtonBlock::FACING_EAST;
    block->powered = MangroveButtonBlock::POWERED_FALSE;
    registry[7090] = block;
  }

  { // ID: 7091
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_WALL;
    block->facing = MangroveButtonBlock::FACING_NORTH;
    block->powered = MangroveButtonBlock::POWERED_TRUE;
    registry[7091] = block;
  }

  { // ID: 7092
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_WALL;
    block->facing = MangroveButtonBlock::FACING_NORTH;
    block->powered = MangroveButtonBlock::POWERED_FALSE;
    registry[7092] = block;
  }

  { // ID: 7093
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_WALL;
    block->facing = MangroveButtonBlock::FACING_SOUTH;
    block->powered = MangroveButtonBlock::POWERED_TRUE;
    registry[7093] = block;
  }

  { // ID: 7094
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_WALL;
    block->facing = MangroveButtonBlock::FACING_SOUTH;
    block->powered = MangroveButtonBlock::POWERED_FALSE;
    registry[7094] = block;
  }

  { // ID: 7095
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_WALL;
    block->facing = MangroveButtonBlock::FACING_WEST;
    block->powered = MangroveButtonBlock::POWERED_TRUE;
    registry[7095] = block;
  }

  { // ID: 7096
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_WALL;
    block->facing = MangroveButtonBlock::FACING_WEST;
    block->powered = MangroveButtonBlock::POWERED_FALSE;
    registry[7096] = block;
  }

  { // ID: 7097
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_WALL;
    block->facing = MangroveButtonBlock::FACING_EAST;
    block->powered = MangroveButtonBlock::POWERED_TRUE;
    registry[7097] = block;
  }

  { // ID: 7098
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_WALL;
    block->facing = MangroveButtonBlock::FACING_EAST;
    block->powered = MangroveButtonBlock::POWERED_FALSE;
    registry[7098] = block;
  }

  { // ID: 7099
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_CEILING;
    block->facing = MangroveButtonBlock::FACING_NORTH;
    block->powered = MangroveButtonBlock::POWERED_TRUE;
    registry[7099] = block;
  }

  { // ID: 7100
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_CEILING;
    block->facing = MangroveButtonBlock::FACING_NORTH;
    block->powered = MangroveButtonBlock::POWERED_FALSE;
    registry[7100] = block;
  }

  { // ID: 7101
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_CEILING;
    block->facing = MangroveButtonBlock::FACING_SOUTH;
    block->powered = MangroveButtonBlock::POWERED_TRUE;
    registry[7101] = block;
  }

  { // ID: 7102
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_CEILING;
    block->facing = MangroveButtonBlock::FACING_SOUTH;
    block->powered = MangroveButtonBlock::POWERED_FALSE;
    registry[7102] = block;
  }

  { // ID: 7103
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_CEILING;
    block->facing = MangroveButtonBlock::FACING_WEST;
    block->powered = MangroveButtonBlock::POWERED_TRUE;
    registry[7103] = block;
  }

  { // ID: 7104
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_CEILING;
    block->facing = MangroveButtonBlock::FACING_WEST;
    block->powered = MangroveButtonBlock::POWERED_FALSE;
    registry[7104] = block;
  }

  { // ID: 7105
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_CEILING;
    block->facing = MangroveButtonBlock::FACING_EAST;
    block->powered = MangroveButtonBlock::POWERED_TRUE;
    registry[7105] = block;
  }

  { // ID: 7106
    std::shared_ptr<MangroveButtonBlock> block = std::make_shared<MangroveButtonBlock>();
    block->face = MangroveButtonBlock::FACE_CEILING;
    block->facing = MangroveButtonBlock::FACING_EAST;
    block->powered = MangroveButtonBlock::POWERED_FALSE;
    registry[7106] = block;
  }

  { // ID: 7478
    std::shared_ptr<MagentaTerracottaBlock> block = std::make_shared<MagentaTerracottaBlock>();
    registry[7478] = block;
  }

  { // ID: 7556
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_TRUE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_TRUE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = MagentaStainedGlassPaneBlock::WEST_TRUE;
    registry[7556] = block;
  }

  { // ID: 7557
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_TRUE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_TRUE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = MagentaStainedGlassPaneBlock::WEST_FALSE;
    registry[7557] = block;
  }

  { // ID: 7558
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_TRUE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_TRUE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = MagentaStainedGlassPaneBlock::WEST_TRUE;
    registry[7558] = block;
  }

  { // ID: 7559
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_TRUE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_TRUE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = MagentaStainedGlassPaneBlock::WEST_FALSE;
    registry[7559] = block;
  }

  { // ID: 7560
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_TRUE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_TRUE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = MagentaStainedGlassPaneBlock::WEST_TRUE;
    registry[7560] = block;
  }

  { // ID: 7561
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_TRUE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_TRUE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = MagentaStainedGlassPaneBlock::WEST_FALSE;
    registry[7561] = block;
  }

  { // ID: 7562
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_TRUE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_TRUE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = MagentaStainedGlassPaneBlock::WEST_TRUE;
    registry[7562] = block;
  }

  { // ID: 7563
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_TRUE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_TRUE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = MagentaStainedGlassPaneBlock::WEST_FALSE;
    registry[7563] = block;
  }

  { // ID: 7564
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_TRUE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_FALSE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = MagentaStainedGlassPaneBlock::WEST_TRUE;
    registry[7564] = block;
  }

  { // ID: 7565
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_TRUE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_FALSE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = MagentaStainedGlassPaneBlock::WEST_FALSE;
    registry[7565] = block;
  }

  { // ID: 7566
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_TRUE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_FALSE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = MagentaStainedGlassPaneBlock::WEST_TRUE;
    registry[7566] = block;
  }

  { // ID: 7567
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_TRUE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_FALSE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = MagentaStainedGlassPaneBlock::WEST_FALSE;
    registry[7567] = block;
  }

  { // ID: 7568
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_TRUE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_FALSE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = MagentaStainedGlassPaneBlock::WEST_TRUE;
    registry[7568] = block;
  }

  { // ID: 7569
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_TRUE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_FALSE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = MagentaStainedGlassPaneBlock::WEST_FALSE;
    registry[7569] = block;
  }

  { // ID: 7570
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_TRUE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_FALSE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = MagentaStainedGlassPaneBlock::WEST_TRUE;
    registry[7570] = block;
  }

  { // ID: 7571
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_TRUE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_FALSE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = MagentaStainedGlassPaneBlock::WEST_FALSE;
    registry[7571] = block;
  }

  { // ID: 7572
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_FALSE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_TRUE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = MagentaStainedGlassPaneBlock::WEST_TRUE;
    registry[7572] = block;
  }

  { // ID: 7573
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_FALSE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_TRUE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = MagentaStainedGlassPaneBlock::WEST_FALSE;
    registry[7573] = block;
  }

  { // ID: 7574
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_FALSE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_TRUE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = MagentaStainedGlassPaneBlock::WEST_TRUE;
    registry[7574] = block;
  }

  { // ID: 7575
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_FALSE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_TRUE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = MagentaStainedGlassPaneBlock::WEST_FALSE;
    registry[7575] = block;
  }

  { // ID: 7576
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_FALSE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_TRUE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = MagentaStainedGlassPaneBlock::WEST_TRUE;
    registry[7576] = block;
  }

  { // ID: 7577
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_FALSE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_TRUE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = MagentaStainedGlassPaneBlock::WEST_FALSE;
    registry[7577] = block;
  }

  { // ID: 7578
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_FALSE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_TRUE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = MagentaStainedGlassPaneBlock::WEST_TRUE;
    registry[7578] = block;
  }

  { // ID: 7579
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_FALSE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_TRUE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = MagentaStainedGlassPaneBlock::WEST_FALSE;
    registry[7579] = block;
  }

  { // ID: 7580
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_FALSE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_FALSE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = MagentaStainedGlassPaneBlock::WEST_TRUE;
    registry[7580] = block;
  }

  { // ID: 7581
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_FALSE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_FALSE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = MagentaStainedGlassPaneBlock::WEST_FALSE;
    registry[7581] = block;
  }

  { // ID: 7582
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_FALSE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_FALSE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = MagentaStainedGlassPaneBlock::WEST_TRUE;
    registry[7582] = block;
  }

  { // ID: 7583
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_FALSE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_FALSE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = MagentaStainedGlassPaneBlock::WEST_FALSE;
    registry[7583] = block;
  }

  { // ID: 7584
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_FALSE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_FALSE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = MagentaStainedGlassPaneBlock::WEST_TRUE;
    registry[7584] = block;
  }

  { // ID: 7585
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_FALSE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_FALSE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = MagentaStainedGlassPaneBlock::WEST_FALSE;
    registry[7585] = block;
  }

  { // ID: 7586
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_FALSE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_FALSE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = MagentaStainedGlassPaneBlock::WEST_TRUE;
    registry[7586] = block;
  }

  { // ID: 7587
    std::shared_ptr<MagentaStainedGlassPaneBlock> block = std::make_shared<MagentaStainedGlassPaneBlock>();
    block->east = MagentaStainedGlassPaneBlock::EAST_FALSE;
    block->north = MagentaStainedGlassPaneBlock::NORTH_FALSE;
    block->south = MagentaStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = MagentaStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = MagentaStainedGlassPaneBlock::WEST_FALSE;
    registry[7587] = block;
  }

  { // ID: 8164
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_NORTH;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8164] = block;
  }

  { // ID: 8165
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_NORTH;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8165] = block;
  }

  { // ID: 8166
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_NORTH;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8166] = block;
  }

  { // ID: 8167
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_NORTH;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8167] = block;
  }

  { // ID: 8168
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_NORTH;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8168] = block;
  }

  { // ID: 8169
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_NORTH;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8169] = block;
  }

  { // ID: 8170
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_NORTH;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8170] = block;
  }

  { // ID: 8171
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_NORTH;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8171] = block;
  }

  { // ID: 8172
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_NORTH;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8172] = block;
  }

  { // ID: 8173
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_NORTH;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8173] = block;
  }

  { // ID: 8174
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_NORTH;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8174] = block;
  }

  { // ID: 8175
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_NORTH;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8175] = block;
  }

  { // ID: 8176
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_NORTH;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8176] = block;
  }

  { // ID: 8177
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_NORTH;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8177] = block;
  }

  { // ID: 8178
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_NORTH;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8178] = block;
  }

  { // ID: 8179
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_NORTH;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8179] = block;
  }

  { // ID: 8180
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_NORTH;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8180] = block;
  }

  { // ID: 8181
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_NORTH;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8181] = block;
  }

  { // ID: 8182
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_NORTH;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8182] = block;
  }

  { // ID: 8183
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_NORTH;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8183] = block;
  }

  { // ID: 8184
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_SOUTH;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8184] = block;
  }

  { // ID: 8185
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_SOUTH;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8185] = block;
  }

  { // ID: 8186
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_SOUTH;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8186] = block;
  }

  { // ID: 8187
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_SOUTH;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8187] = block;
  }

  { // ID: 8188
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_SOUTH;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8188] = block;
  }

  { // ID: 8189
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_SOUTH;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8189] = block;
  }

  { // ID: 8190
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_SOUTH;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8190] = block;
  }

  { // ID: 8191
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_SOUTH;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8191] = block;
  }

  { // ID: 8192
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_SOUTH;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8192] = block;
  }

  { // ID: 8193
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_SOUTH;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8193] = block;
  }

  { // ID: 8194
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_SOUTH;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8194] = block;
  }

  { // ID: 8195
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_SOUTH;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8195] = block;
  }

  { // ID: 8196
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_SOUTH;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8196] = block;
  }

  { // ID: 8197
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_SOUTH;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8197] = block;
  }

  { // ID: 8198
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_SOUTH;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8198] = block;
  }

  { // ID: 8199
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_SOUTH;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8199] = block;
  }

  { // ID: 8200
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_SOUTH;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8200] = block;
  }

  { // ID: 8201
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_SOUTH;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8201] = block;
  }

  { // ID: 8202
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_SOUTH;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8202] = block;
  }

  { // ID: 8203
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_SOUTH;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8203] = block;
  }

  { // ID: 8204
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_WEST;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8204] = block;
  }

  { // ID: 8205
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_WEST;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8205] = block;
  }

  { // ID: 8206
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_WEST;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8206] = block;
  }

  { // ID: 8207
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_WEST;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8207] = block;
  }

  { // ID: 8208
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_WEST;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8208] = block;
  }

  { // ID: 8209
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_WEST;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8209] = block;
  }

  { // ID: 8210
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_WEST;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8210] = block;
  }

  { // ID: 8211
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_WEST;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8211] = block;
  }

  { // ID: 8212
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_WEST;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8212] = block;
  }

  { // ID: 8213
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_WEST;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8213] = block;
  }

  { // ID: 8214
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_WEST;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8214] = block;
  }

  { // ID: 8215
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_WEST;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8215] = block;
  }

  { // ID: 8216
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_WEST;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8216] = block;
  }

  { // ID: 8217
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_WEST;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8217] = block;
  }

  { // ID: 8218
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_WEST;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8218] = block;
  }

  { // ID: 8219
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_WEST;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8219] = block;
  }

  { // ID: 8220
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_WEST;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8220] = block;
  }

  { // ID: 8221
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_WEST;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8221] = block;
  }

  { // ID: 8222
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_WEST;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8222] = block;
  }

  { // ID: 8223
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_WEST;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8223] = block;
  }

  { // ID: 8224
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_EAST;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8224] = block;
  }

  { // ID: 8225
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_EAST;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8225] = block;
  }

  { // ID: 8226
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_EAST;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8226] = block;
  }

  { // ID: 8227
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_EAST;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8227] = block;
  }

  { // ID: 8228
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_EAST;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8228] = block;
  }

  { // ID: 8229
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_EAST;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8229] = block;
  }

  { // ID: 8230
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_EAST;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8230] = block;
  }

  { // ID: 8231
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_EAST;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8231] = block;
  }

  { // ID: 8232
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_EAST;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8232] = block;
  }

  { // ID: 8233
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_EAST;
    block->half = MangroveStairsBlock::HALF_TOP;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8233] = block;
  }

  { // ID: 8234
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_EAST;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8234] = block;
  }

  { // ID: 8235
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_EAST;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8235] = block;
  }

  { // ID: 8236
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_EAST;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8236] = block;
  }

  { // ID: 8237
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_EAST;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8237] = block;
  }

  { // ID: 8238
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_EAST;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8238] = block;
  }

  { // ID: 8239
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_EAST;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8239] = block;
  }

  { // ID: 8240
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_EAST;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8240] = block;
  }

  { // ID: 8241
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_EAST;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8241] = block;
  }

  { // ID: 8242
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_EAST;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_TRUE;
    registry[8242] = block;
  }

  { // ID: 8243
    std::shared_ptr<MangroveStairsBlock> block = std::make_shared<MangroveStairsBlock>();
    block->facing = MangroveStairsBlock::FACING_EAST;
    block->half = MangroveStairsBlock::HALF_BOTTOM;
    block->shape = MangroveStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MangroveStairsBlock::WATERLOGGED_FALSE;
    registry[8243] = block;
  }

  { // ID: 8609
    std::shared_ptr<MagentaCarpetBlock> block = std::make_shared<MagentaCarpetBlock>();
    registry[8609] = block;
  }

  { // ID: 8670
    std::shared_ptr<MagentaBannerBlock> block = std::make_shared<MagentaBannerBlock>();
    block->rotation = MagentaBannerBlock::ROTATION_0;
    registry[8670] = block;
  }

  { // ID: 8671
    std::shared_ptr<MagentaBannerBlock> block = std::make_shared<MagentaBannerBlock>();
    block->rotation = MagentaBannerBlock::ROTATION_1;
    registry[8671] = block;
  }

  { // ID: 8672
    std::shared_ptr<MagentaBannerBlock> block = std::make_shared<MagentaBannerBlock>();
    block->rotation = MagentaBannerBlock::ROTATION_2;
    registry[8672] = block;
  }

  { // ID: 8673
    std::shared_ptr<MagentaBannerBlock> block = std::make_shared<MagentaBannerBlock>();
    block->rotation = MagentaBannerBlock::ROTATION_3;
    registry[8673] = block;
  }

  { // ID: 8674
    std::shared_ptr<MagentaBannerBlock> block = std::make_shared<MagentaBannerBlock>();
    block->rotation = MagentaBannerBlock::ROTATION_4;
    registry[8674] = block;
  }

  { // ID: 8675
    std::shared_ptr<MagentaBannerBlock> block = std::make_shared<MagentaBannerBlock>();
    block->rotation = MagentaBannerBlock::ROTATION_5;
    registry[8675] = block;
  }

  { // ID: 8676
    std::shared_ptr<MagentaBannerBlock> block = std::make_shared<MagentaBannerBlock>();
    block->rotation = MagentaBannerBlock::ROTATION_6;
    registry[8676] = block;
  }

  { // ID: 8677
    std::shared_ptr<MagentaBannerBlock> block = std::make_shared<MagentaBannerBlock>();
    block->rotation = MagentaBannerBlock::ROTATION_7;
    registry[8677] = block;
  }

  { // ID: 8678
    std::shared_ptr<MagentaBannerBlock> block = std::make_shared<MagentaBannerBlock>();
    block->rotation = MagentaBannerBlock::ROTATION_8;
    registry[8678] = block;
  }

  { // ID: 8679
    std::shared_ptr<MagentaBannerBlock> block = std::make_shared<MagentaBannerBlock>();
    block->rotation = MagentaBannerBlock::ROTATION_9;
    registry[8679] = block;
  }

  { // ID: 8680
    std::shared_ptr<MagentaBannerBlock> block = std::make_shared<MagentaBannerBlock>();
    block->rotation = MagentaBannerBlock::ROTATION_10;
    registry[8680] = block;
  }

  { // ID: 8681
    std::shared_ptr<MagentaBannerBlock> block = std::make_shared<MagentaBannerBlock>();
    block->rotation = MagentaBannerBlock::ROTATION_11;
    registry[8681] = block;
  }

  { // ID: 8682
    std::shared_ptr<MagentaBannerBlock> block = std::make_shared<MagentaBannerBlock>();
    block->rotation = MagentaBannerBlock::ROTATION_12;
    registry[8682] = block;
  }

  { // ID: 8683
    std::shared_ptr<MagentaBannerBlock> block = std::make_shared<MagentaBannerBlock>();
    block->rotation = MagentaBannerBlock::ROTATION_13;
    registry[8683] = block;
  }

  { // ID: 8684
    std::shared_ptr<MagentaBannerBlock> block = std::make_shared<MagentaBannerBlock>();
    block->rotation = MagentaBannerBlock::ROTATION_14;
    registry[8684] = block;
  }

  { // ID: 8685
    std::shared_ptr<MagentaBannerBlock> block = std::make_shared<MagentaBannerBlock>();
    block->rotation = MagentaBannerBlock::ROTATION_15;
    registry[8685] = block;
  }

  { // ID: 8902
    std::shared_ptr<MagentaWallBannerBlock> block = std::make_shared<MagentaWallBannerBlock>();
    block->facing = MagentaWallBannerBlock::FACING_NORTH;
    registry[8902] = block;
  }

  { // ID: 8903
    std::shared_ptr<MagentaWallBannerBlock> block = std::make_shared<MagentaWallBannerBlock>();
    block->facing = MagentaWallBannerBlock::FACING_SOUTH;
    registry[8903] = block;
  }

  { // ID: 8904
    std::shared_ptr<MagentaWallBannerBlock> block = std::make_shared<MagentaWallBannerBlock>();
    block->facing = MagentaWallBannerBlock::FACING_WEST;
    registry[8904] = block;
  }

  { // ID: 8905
    std::shared_ptr<MagentaWallBannerBlock> block = std::make_shared<MagentaWallBannerBlock>();
    block->facing = MagentaWallBannerBlock::FACING_EAST;
    registry[8905] = block;
  }

  { // ID: 9077
    std::shared_ptr<MangroveSlabBlock> block = std::make_shared<MangroveSlabBlock>();
    block->type = MangroveSlabBlock::TYPE_TOP;
    block->waterlogged = MangroveSlabBlock::WATERLOGGED_TRUE;
    registry[9077] = block;
  }

  { // ID: 9078
    std::shared_ptr<MangroveSlabBlock> block = std::make_shared<MangroveSlabBlock>();
    block->type = MangroveSlabBlock::TYPE_TOP;
    block->waterlogged = MangroveSlabBlock::WATERLOGGED_FALSE;
    registry[9078] = block;
  }

  { // ID: 9079
    std::shared_ptr<MangroveSlabBlock> block = std::make_shared<MangroveSlabBlock>();
    block->type = MangroveSlabBlock::TYPE_BOTTOM;
    block->waterlogged = MangroveSlabBlock::WATERLOGGED_TRUE;
    registry[9079] = block;
  }

  { // ID: 9080
    std::shared_ptr<MangroveSlabBlock> block = std::make_shared<MangroveSlabBlock>();
    block->type = MangroveSlabBlock::TYPE_BOTTOM;
    block->waterlogged = MangroveSlabBlock::WATERLOGGED_FALSE;
    registry[9080] = block;
  }

  { // ID: 9081
    std::shared_ptr<MangroveSlabBlock> block = std::make_shared<MangroveSlabBlock>();
    block->type = MangroveSlabBlock::TYPE_DOUBLE;
    block->waterlogged = MangroveSlabBlock::WATERLOGGED_TRUE;
    registry[9081] = block;
  }

  { // ID: 9082
    std::shared_ptr<MangroveSlabBlock> block = std::make_shared<MangroveSlabBlock>();
    block->type = MangroveSlabBlock::TYPE_DOUBLE;
    block->waterlogged = MangroveSlabBlock::WATERLOGGED_FALSE;
    registry[9082] = block;
  }

  { // ID: 9131
    std::shared_ptr<MudBrickSlabBlock> block = std::make_shared<MudBrickSlabBlock>();
    block->type = MudBrickSlabBlock::TYPE_TOP;
    block->waterlogged = MudBrickSlabBlock::WATERLOGGED_TRUE;
    registry[9131] = block;
  }

  { // ID: 9132
    std::shared_ptr<MudBrickSlabBlock> block = std::make_shared<MudBrickSlabBlock>();
    block->type = MudBrickSlabBlock::TYPE_TOP;
    block->waterlogged = MudBrickSlabBlock::WATERLOGGED_FALSE;
    registry[9132] = block;
  }

  { // ID: 9133
    std::shared_ptr<MudBrickSlabBlock> block = std::make_shared<MudBrickSlabBlock>();
    block->type = MudBrickSlabBlock::TYPE_BOTTOM;
    block->waterlogged = MudBrickSlabBlock::WATERLOGGED_TRUE;
    registry[9133] = block;
  }

  { // ID: 9134
    std::shared_ptr<MudBrickSlabBlock> block = std::make_shared<MudBrickSlabBlock>();
    block->type = MudBrickSlabBlock::TYPE_BOTTOM;
    block->waterlogged = MudBrickSlabBlock::WATERLOGGED_FALSE;
    registry[9134] = block;
  }

  { // ID: 9135
    std::shared_ptr<MudBrickSlabBlock> block = std::make_shared<MudBrickSlabBlock>();
    block->type = MudBrickSlabBlock::TYPE_DOUBLE;
    block->waterlogged = MudBrickSlabBlock::WATERLOGGED_TRUE;
    registry[9135] = block;
  }

  { // ID: 9136
    std::shared_ptr<MudBrickSlabBlock> block = std::make_shared<MudBrickSlabBlock>();
    block->type = MudBrickSlabBlock::TYPE_DOUBLE;
    block->waterlogged = MudBrickSlabBlock::WATERLOGGED_FALSE;
    registry[9136] = block;
  }

  { // ID: 9331
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_NORTH;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_TRUE;
    block->open = MangroveFenceGateBlock::OPEN_TRUE;
    block->powered = MangroveFenceGateBlock::POWERED_TRUE;
    registry[9331] = block;
  }

  { // ID: 9332
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_NORTH;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_TRUE;
    block->open = MangroveFenceGateBlock::OPEN_TRUE;
    block->powered = MangroveFenceGateBlock::POWERED_FALSE;
    registry[9332] = block;
  }

  { // ID: 9333
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_NORTH;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_TRUE;
    block->open = MangroveFenceGateBlock::OPEN_FALSE;
    block->powered = MangroveFenceGateBlock::POWERED_TRUE;
    registry[9333] = block;
  }

  { // ID: 9334
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_NORTH;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_TRUE;
    block->open = MangroveFenceGateBlock::OPEN_FALSE;
    block->powered = MangroveFenceGateBlock::POWERED_FALSE;
    registry[9334] = block;
  }

  { // ID: 9335
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_NORTH;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_FALSE;
    block->open = MangroveFenceGateBlock::OPEN_TRUE;
    block->powered = MangroveFenceGateBlock::POWERED_TRUE;
    registry[9335] = block;
  }

  { // ID: 9336
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_NORTH;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_FALSE;
    block->open = MangroveFenceGateBlock::OPEN_TRUE;
    block->powered = MangroveFenceGateBlock::POWERED_FALSE;
    registry[9336] = block;
  }

  { // ID: 9337
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_NORTH;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_FALSE;
    block->open = MangroveFenceGateBlock::OPEN_FALSE;
    block->powered = MangroveFenceGateBlock::POWERED_TRUE;
    registry[9337] = block;
  }

  { // ID: 9338
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_NORTH;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_FALSE;
    block->open = MangroveFenceGateBlock::OPEN_FALSE;
    block->powered = MangroveFenceGateBlock::POWERED_FALSE;
    registry[9338] = block;
  }

  { // ID: 9339
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_SOUTH;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_TRUE;
    block->open = MangroveFenceGateBlock::OPEN_TRUE;
    block->powered = MangroveFenceGateBlock::POWERED_TRUE;
    registry[9339] = block;
  }

  { // ID: 9340
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_SOUTH;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_TRUE;
    block->open = MangroveFenceGateBlock::OPEN_TRUE;
    block->powered = MangroveFenceGateBlock::POWERED_FALSE;
    registry[9340] = block;
  }

  { // ID: 9341
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_SOUTH;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_TRUE;
    block->open = MangroveFenceGateBlock::OPEN_FALSE;
    block->powered = MangroveFenceGateBlock::POWERED_TRUE;
    registry[9341] = block;
  }

  { // ID: 9342
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_SOUTH;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_TRUE;
    block->open = MangroveFenceGateBlock::OPEN_FALSE;
    block->powered = MangroveFenceGateBlock::POWERED_FALSE;
    registry[9342] = block;
  }

  { // ID: 9343
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_SOUTH;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_FALSE;
    block->open = MangroveFenceGateBlock::OPEN_TRUE;
    block->powered = MangroveFenceGateBlock::POWERED_TRUE;
    registry[9343] = block;
  }

  { // ID: 9344
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_SOUTH;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_FALSE;
    block->open = MangroveFenceGateBlock::OPEN_TRUE;
    block->powered = MangroveFenceGateBlock::POWERED_FALSE;
    registry[9344] = block;
  }

  { // ID: 9345
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_SOUTH;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_FALSE;
    block->open = MangroveFenceGateBlock::OPEN_FALSE;
    block->powered = MangroveFenceGateBlock::POWERED_TRUE;
    registry[9345] = block;
  }

  { // ID: 9346
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_SOUTH;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_FALSE;
    block->open = MangroveFenceGateBlock::OPEN_FALSE;
    block->powered = MangroveFenceGateBlock::POWERED_FALSE;
    registry[9346] = block;
  }

  { // ID: 9347
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_WEST;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_TRUE;
    block->open = MangroveFenceGateBlock::OPEN_TRUE;
    block->powered = MangroveFenceGateBlock::POWERED_TRUE;
    registry[9347] = block;
  }

  { // ID: 9348
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_WEST;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_TRUE;
    block->open = MangroveFenceGateBlock::OPEN_TRUE;
    block->powered = MangroveFenceGateBlock::POWERED_FALSE;
    registry[9348] = block;
  }

  { // ID: 9349
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_WEST;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_TRUE;
    block->open = MangroveFenceGateBlock::OPEN_FALSE;
    block->powered = MangroveFenceGateBlock::POWERED_TRUE;
    registry[9349] = block;
  }

  { // ID: 9350
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_WEST;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_TRUE;
    block->open = MangroveFenceGateBlock::OPEN_FALSE;
    block->powered = MangroveFenceGateBlock::POWERED_FALSE;
    registry[9350] = block;
  }

  { // ID: 9351
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_WEST;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_FALSE;
    block->open = MangroveFenceGateBlock::OPEN_TRUE;
    block->powered = MangroveFenceGateBlock::POWERED_TRUE;
    registry[9351] = block;
  }

  { // ID: 9352
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_WEST;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_FALSE;
    block->open = MangroveFenceGateBlock::OPEN_TRUE;
    block->powered = MangroveFenceGateBlock::POWERED_FALSE;
    registry[9352] = block;
  }

  { // ID: 9353
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_WEST;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_FALSE;
    block->open = MangroveFenceGateBlock::OPEN_FALSE;
    block->powered = MangroveFenceGateBlock::POWERED_TRUE;
    registry[9353] = block;
  }

  { // ID: 9354
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_WEST;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_FALSE;
    block->open = MangroveFenceGateBlock::OPEN_FALSE;
    block->powered = MangroveFenceGateBlock::POWERED_FALSE;
    registry[9354] = block;
  }

  { // ID: 9355
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_EAST;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_TRUE;
    block->open = MangroveFenceGateBlock::OPEN_TRUE;
    block->powered = MangroveFenceGateBlock::POWERED_TRUE;
    registry[9355] = block;
  }

  { // ID: 9356
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_EAST;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_TRUE;
    block->open = MangroveFenceGateBlock::OPEN_TRUE;
    block->powered = MangroveFenceGateBlock::POWERED_FALSE;
    registry[9356] = block;
  }

  { // ID: 9357
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_EAST;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_TRUE;
    block->open = MangroveFenceGateBlock::OPEN_FALSE;
    block->powered = MangroveFenceGateBlock::POWERED_TRUE;
    registry[9357] = block;
  }

  { // ID: 9358
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_EAST;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_TRUE;
    block->open = MangroveFenceGateBlock::OPEN_FALSE;
    block->powered = MangroveFenceGateBlock::POWERED_FALSE;
    registry[9358] = block;
  }

  { // ID: 9359
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_EAST;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_FALSE;
    block->open = MangroveFenceGateBlock::OPEN_TRUE;
    block->powered = MangroveFenceGateBlock::POWERED_TRUE;
    registry[9359] = block;
  }

  { // ID: 9360
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_EAST;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_FALSE;
    block->open = MangroveFenceGateBlock::OPEN_TRUE;
    block->powered = MangroveFenceGateBlock::POWERED_FALSE;
    registry[9360] = block;
  }

  { // ID: 9361
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_EAST;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_FALSE;
    block->open = MangroveFenceGateBlock::OPEN_FALSE;
    block->powered = MangroveFenceGateBlock::POWERED_TRUE;
    registry[9361] = block;
  }

  { // ID: 9362
    std::shared_ptr<MangroveFenceGateBlock> block = std::make_shared<MangroveFenceGateBlock>();
    block->facing = MangroveFenceGateBlock::FACING_EAST;
    block->in_wall = MangroveFenceGateBlock::IN_WALL_FALSE;
    block->open = MangroveFenceGateBlock::OPEN_FALSE;
    block->powered = MangroveFenceGateBlock::POWERED_FALSE;
    registry[9362] = block;
  }

  { // ID: 9523
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_TRUE;
    block->north = MangroveFenceBlock::NORTH_TRUE;
    block->south = MangroveFenceBlock::SOUTH_TRUE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_TRUE;
    block->west = MangroveFenceBlock::WEST_TRUE;
    registry[9523] = block;
  }

  { // ID: 9524
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_TRUE;
    block->north = MangroveFenceBlock::NORTH_TRUE;
    block->south = MangroveFenceBlock::SOUTH_TRUE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_TRUE;
    block->west = MangroveFenceBlock::WEST_FALSE;
    registry[9524] = block;
  }

  { // ID: 9525
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_TRUE;
    block->north = MangroveFenceBlock::NORTH_TRUE;
    block->south = MangroveFenceBlock::SOUTH_TRUE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_FALSE;
    block->west = MangroveFenceBlock::WEST_TRUE;
    registry[9525] = block;
  }

  { // ID: 9526
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_TRUE;
    block->north = MangroveFenceBlock::NORTH_TRUE;
    block->south = MangroveFenceBlock::SOUTH_TRUE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_FALSE;
    block->west = MangroveFenceBlock::WEST_FALSE;
    registry[9526] = block;
  }

  { // ID: 9527
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_TRUE;
    block->north = MangroveFenceBlock::NORTH_TRUE;
    block->south = MangroveFenceBlock::SOUTH_FALSE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_TRUE;
    block->west = MangroveFenceBlock::WEST_TRUE;
    registry[9527] = block;
  }

  { // ID: 9528
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_TRUE;
    block->north = MangroveFenceBlock::NORTH_TRUE;
    block->south = MangroveFenceBlock::SOUTH_FALSE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_TRUE;
    block->west = MangroveFenceBlock::WEST_FALSE;
    registry[9528] = block;
  }

  { // ID: 9529
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_TRUE;
    block->north = MangroveFenceBlock::NORTH_TRUE;
    block->south = MangroveFenceBlock::SOUTH_FALSE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_FALSE;
    block->west = MangroveFenceBlock::WEST_TRUE;
    registry[9529] = block;
  }

  { // ID: 9530
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_TRUE;
    block->north = MangroveFenceBlock::NORTH_TRUE;
    block->south = MangroveFenceBlock::SOUTH_FALSE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_FALSE;
    block->west = MangroveFenceBlock::WEST_FALSE;
    registry[9530] = block;
  }

  { // ID: 9531
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_TRUE;
    block->north = MangroveFenceBlock::NORTH_FALSE;
    block->south = MangroveFenceBlock::SOUTH_TRUE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_TRUE;
    block->west = MangroveFenceBlock::WEST_TRUE;
    registry[9531] = block;
  }

  { // ID: 9532
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_TRUE;
    block->north = MangroveFenceBlock::NORTH_FALSE;
    block->south = MangroveFenceBlock::SOUTH_TRUE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_TRUE;
    block->west = MangroveFenceBlock::WEST_FALSE;
    registry[9532] = block;
  }

  { // ID: 9533
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_TRUE;
    block->north = MangroveFenceBlock::NORTH_FALSE;
    block->south = MangroveFenceBlock::SOUTH_TRUE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_FALSE;
    block->west = MangroveFenceBlock::WEST_TRUE;
    registry[9533] = block;
  }

  { // ID: 9534
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_TRUE;
    block->north = MangroveFenceBlock::NORTH_FALSE;
    block->south = MangroveFenceBlock::SOUTH_TRUE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_FALSE;
    block->west = MangroveFenceBlock::WEST_FALSE;
    registry[9534] = block;
  }

  { // ID: 9535
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_TRUE;
    block->north = MangroveFenceBlock::NORTH_FALSE;
    block->south = MangroveFenceBlock::SOUTH_FALSE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_TRUE;
    block->west = MangroveFenceBlock::WEST_TRUE;
    registry[9535] = block;
  }

  { // ID: 9536
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_TRUE;
    block->north = MangroveFenceBlock::NORTH_FALSE;
    block->south = MangroveFenceBlock::SOUTH_FALSE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_TRUE;
    block->west = MangroveFenceBlock::WEST_FALSE;
    registry[9536] = block;
  }

  { // ID: 9537
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_TRUE;
    block->north = MangroveFenceBlock::NORTH_FALSE;
    block->south = MangroveFenceBlock::SOUTH_FALSE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_FALSE;
    block->west = MangroveFenceBlock::WEST_TRUE;
    registry[9537] = block;
  }

  { // ID: 9538
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_TRUE;
    block->north = MangroveFenceBlock::NORTH_FALSE;
    block->south = MangroveFenceBlock::SOUTH_FALSE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_FALSE;
    block->west = MangroveFenceBlock::WEST_FALSE;
    registry[9538] = block;
  }

  { // ID: 9539
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_FALSE;
    block->north = MangroveFenceBlock::NORTH_TRUE;
    block->south = MangroveFenceBlock::SOUTH_TRUE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_TRUE;
    block->west = MangroveFenceBlock::WEST_TRUE;
    registry[9539] = block;
  }

  { // ID: 9540
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_FALSE;
    block->north = MangroveFenceBlock::NORTH_TRUE;
    block->south = MangroveFenceBlock::SOUTH_TRUE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_TRUE;
    block->west = MangroveFenceBlock::WEST_FALSE;
    registry[9540] = block;
  }

  { // ID: 9541
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_FALSE;
    block->north = MangroveFenceBlock::NORTH_TRUE;
    block->south = MangroveFenceBlock::SOUTH_TRUE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_FALSE;
    block->west = MangroveFenceBlock::WEST_TRUE;
    registry[9541] = block;
  }

  { // ID: 9542
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_FALSE;
    block->north = MangroveFenceBlock::NORTH_TRUE;
    block->south = MangroveFenceBlock::SOUTH_TRUE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_FALSE;
    block->west = MangroveFenceBlock::WEST_FALSE;
    registry[9542] = block;
  }

  { // ID: 9543
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_FALSE;
    block->north = MangroveFenceBlock::NORTH_TRUE;
    block->south = MangroveFenceBlock::SOUTH_FALSE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_TRUE;
    block->west = MangroveFenceBlock::WEST_TRUE;
    registry[9543] = block;
  }

  { // ID: 9544
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_FALSE;
    block->north = MangroveFenceBlock::NORTH_TRUE;
    block->south = MangroveFenceBlock::SOUTH_FALSE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_TRUE;
    block->west = MangroveFenceBlock::WEST_FALSE;
    registry[9544] = block;
  }

  { // ID: 9545
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_FALSE;
    block->north = MangroveFenceBlock::NORTH_TRUE;
    block->south = MangroveFenceBlock::SOUTH_FALSE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_FALSE;
    block->west = MangroveFenceBlock::WEST_TRUE;
    registry[9545] = block;
  }

  { // ID: 9546
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_FALSE;
    block->north = MangroveFenceBlock::NORTH_TRUE;
    block->south = MangroveFenceBlock::SOUTH_FALSE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_FALSE;
    block->west = MangroveFenceBlock::WEST_FALSE;
    registry[9546] = block;
  }

  { // ID: 9547
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_FALSE;
    block->north = MangroveFenceBlock::NORTH_FALSE;
    block->south = MangroveFenceBlock::SOUTH_TRUE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_TRUE;
    block->west = MangroveFenceBlock::WEST_TRUE;
    registry[9547] = block;
  }

  { // ID: 9548
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_FALSE;
    block->north = MangroveFenceBlock::NORTH_FALSE;
    block->south = MangroveFenceBlock::SOUTH_TRUE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_TRUE;
    block->west = MangroveFenceBlock::WEST_FALSE;
    registry[9548] = block;
  }

  { // ID: 9549
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_FALSE;
    block->north = MangroveFenceBlock::NORTH_FALSE;
    block->south = MangroveFenceBlock::SOUTH_TRUE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_FALSE;
    block->west = MangroveFenceBlock::WEST_TRUE;
    registry[9549] = block;
  }

  { // ID: 9550
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_FALSE;
    block->north = MangroveFenceBlock::NORTH_FALSE;
    block->south = MangroveFenceBlock::SOUTH_TRUE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_FALSE;
    block->west = MangroveFenceBlock::WEST_FALSE;
    registry[9550] = block;
  }

  { // ID: 9551
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_FALSE;
    block->north = MangroveFenceBlock::NORTH_FALSE;
    block->south = MangroveFenceBlock::SOUTH_FALSE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_TRUE;
    block->west = MangroveFenceBlock::WEST_TRUE;
    registry[9551] = block;
  }

  { // ID: 9552
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_FALSE;
    block->north = MangroveFenceBlock::NORTH_FALSE;
    block->south = MangroveFenceBlock::SOUTH_FALSE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_TRUE;
    block->west = MangroveFenceBlock::WEST_FALSE;
    registry[9552] = block;
  }

  { // ID: 9553
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_FALSE;
    block->north = MangroveFenceBlock::NORTH_FALSE;
    block->south = MangroveFenceBlock::SOUTH_FALSE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_FALSE;
    block->west = MangroveFenceBlock::WEST_TRUE;
    registry[9553] = block;
  }

  { // ID: 9554
    std::shared_ptr<MangroveFenceBlock> block = std::make_shared<MangroveFenceBlock>();
    block->east = MangroveFenceBlock::EAST_FALSE;
    block->north = MangroveFenceBlock::NORTH_FALSE;
    block->south = MangroveFenceBlock::SOUTH_FALSE;
    block->waterlogged = MangroveFenceBlock::WATERLOGGED_FALSE;
    block->west = MangroveFenceBlock::WEST_FALSE;
    registry[9554] = block;
  }

  { // ID: 9875
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_NORTH;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9875] = block;
  }

  { // ID: 9876
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_NORTH;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9876] = block;
  }

  { // ID: 9877
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_NORTH;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9877] = block;
  }

  { // ID: 9878
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_NORTH;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9878] = block;
  }

  { // ID: 9879
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_NORTH;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9879] = block;
  }

  { // ID: 9880
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_NORTH;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9880] = block;
  }

  { // ID: 9881
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_NORTH;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9881] = block;
  }

  { // ID: 9882
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_NORTH;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9882] = block;
  }

  { // ID: 9883
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_NORTH;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9883] = block;
  }

  { // ID: 9884
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_NORTH;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9884] = block;
  }

  { // ID: 9885
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_NORTH;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9885] = block;
  }

  { // ID: 9886
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_NORTH;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9886] = block;
  }

  { // ID: 9887
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_NORTH;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9887] = block;
  }

  { // ID: 9888
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_NORTH;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9888] = block;
  }

  { // ID: 9889
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_NORTH;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9889] = block;
  }

  { // ID: 9890
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_NORTH;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9890] = block;
  }

  { // ID: 9891
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_SOUTH;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9891] = block;
  }

  { // ID: 9892
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_SOUTH;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9892] = block;
  }

  { // ID: 9893
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_SOUTH;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9893] = block;
  }

  { // ID: 9894
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_SOUTH;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9894] = block;
  }

  { // ID: 9895
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_SOUTH;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9895] = block;
  }

  { // ID: 9896
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_SOUTH;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9896] = block;
  }

  { // ID: 9897
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_SOUTH;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9897] = block;
  }

  { // ID: 9898
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_SOUTH;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9898] = block;
  }

  { // ID: 9899
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_SOUTH;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9899] = block;
  }

  { // ID: 9900
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_SOUTH;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9900] = block;
  }

  { // ID: 9901
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_SOUTH;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9901] = block;
  }

  { // ID: 9902
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_SOUTH;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9902] = block;
  }

  { // ID: 9903
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_SOUTH;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9903] = block;
  }

  { // ID: 9904
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_SOUTH;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9904] = block;
  }

  { // ID: 9905
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_SOUTH;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9905] = block;
  }

  { // ID: 9906
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_SOUTH;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9906] = block;
  }

  { // ID: 9907
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_WEST;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9907] = block;
  }

  { // ID: 9908
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_WEST;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9908] = block;
  }

  { // ID: 9909
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_WEST;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9909] = block;
  }

  { // ID: 9910
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_WEST;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9910] = block;
  }

  { // ID: 9911
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_WEST;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9911] = block;
  }

  { // ID: 9912
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_WEST;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9912] = block;
  }

  { // ID: 9913
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_WEST;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9913] = block;
  }

  { // ID: 9914
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_WEST;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9914] = block;
  }

  { // ID: 9915
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_WEST;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9915] = block;
  }

  { // ID: 9916
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_WEST;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9916] = block;
  }

  { // ID: 9917
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_WEST;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9917] = block;
  }

  { // ID: 9918
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_WEST;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9918] = block;
  }

  { // ID: 9919
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_WEST;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9919] = block;
  }

  { // ID: 9920
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_WEST;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9920] = block;
  }

  { // ID: 9921
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_WEST;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9921] = block;
  }

  { // ID: 9922
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_WEST;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9922] = block;
  }

  { // ID: 9923
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_EAST;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9923] = block;
  }

  { // ID: 9924
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_EAST;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9924] = block;
  }

  { // ID: 9925
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_EAST;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9925] = block;
  }

  { // ID: 9926
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_EAST;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9926] = block;
  }

  { // ID: 9927
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_EAST;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9927] = block;
  }

  { // ID: 9928
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_EAST;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9928] = block;
  }

  { // ID: 9929
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_EAST;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9929] = block;
  }

  { // ID: 9930
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_EAST;
    block->half = MangroveDoorBlock::HALF_UPPER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9930] = block;
  }

  { // ID: 9931
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_EAST;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9931] = block;
  }

  { // ID: 9932
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_EAST;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9932] = block;
  }

  { // ID: 9933
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_EAST;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9933] = block;
  }

  { // ID: 9934
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_EAST;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_LEFT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9934] = block;
  }

  { // ID: 9935
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_EAST;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9935] = block;
  }

  { // ID: 9936
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_EAST;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_TRUE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9936] = block;
  }

  { // ID: 9937
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_EAST;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_TRUE;
    registry[9937] = block;
  }

  { // ID: 9938
    std::shared_ptr<MangroveDoorBlock> block = std::make_shared<MangroveDoorBlock>();
    block->facing = MangroveDoorBlock::FACING_EAST;
    block->half = MangroveDoorBlock::HALF_LOWER;
    block->hinge = MangroveDoorBlock::HINGE_RIGHT;
    block->open = MangroveDoorBlock::OPEN_FALSE;
    block->powered = MangroveDoorBlock::POWERED_FALSE;
    registry[9938] = block;
  }

  { // ID: 10134
    std::shared_ptr<MagmaBlockBlock> block = std::make_shared<MagmaBlockBlock>();
    registry[10134] = block;
  }

  { // ID: 10171
    std::shared_ptr<MagentaShulkerBoxBlock> block = std::make_shared<MagentaShulkerBoxBlock>();
    block->facing = MagentaShulkerBoxBlock::FACING_NORTH;
    registry[10171] = block;
  }

  { // ID: 10172
    std::shared_ptr<MagentaShulkerBoxBlock> block = std::make_shared<MagentaShulkerBoxBlock>();
    block->facing = MagentaShulkerBoxBlock::FACING_EAST;
    registry[10172] = block;
  }

  { // ID: 10173
    std::shared_ptr<MagentaShulkerBoxBlock> block = std::make_shared<MagentaShulkerBoxBlock>();
    block->facing = MagentaShulkerBoxBlock::FACING_SOUTH;
    registry[10173] = block;
  }

  { // ID: 10174
    std::shared_ptr<MagentaShulkerBoxBlock> block = std::make_shared<MagentaShulkerBoxBlock>();
    block->facing = MagentaShulkerBoxBlock::FACING_WEST;
    registry[10174] = block;
  }

  { // ID: 10175
    std::shared_ptr<MagentaShulkerBoxBlock> block = std::make_shared<MagentaShulkerBoxBlock>();
    block->facing = MagentaShulkerBoxBlock::FACING_UP;
    registry[10175] = block;
  }

  { // ID: 10176
    std::shared_ptr<MagentaShulkerBoxBlock> block = std::make_shared<MagentaShulkerBoxBlock>();
    block->facing = MagentaShulkerBoxBlock::FACING_DOWN;
    registry[10176] = block;
  }

  { // ID: 10263
    std::shared_ptr<MagentaGlazedTerracottaBlock> block = std::make_shared<MagentaGlazedTerracottaBlock>();
    block->facing = MagentaGlazedTerracottaBlock::FACING_NORTH;
    registry[10263] = block;
  }

  { // ID: 10264
    std::shared_ptr<MagentaGlazedTerracottaBlock> block = std::make_shared<MagentaGlazedTerracottaBlock>();
    block->facing = MagentaGlazedTerracottaBlock::FACING_SOUTH;
    registry[10264] = block;
  }

  { // ID: 10265
    std::shared_ptr<MagentaGlazedTerracottaBlock> block = std::make_shared<MagentaGlazedTerracottaBlock>();
    block->facing = MagentaGlazedTerracottaBlock::FACING_WEST;
    registry[10265] = block;
  }

  { // ID: 10266
    std::shared_ptr<MagentaGlazedTerracottaBlock> block = std::make_shared<MagentaGlazedTerracottaBlock>();
    block->facing = MagentaGlazedTerracottaBlock::FACING_EAST;
    registry[10266] = block;
  }

  { // ID: 10321
    std::shared_ptr<MagentaConcreteBlock> block = std::make_shared<MagentaConcreteBlock>();
    registry[10321] = block;
  }

  { // ID: 10337
    std::shared_ptr<MagentaConcretePowderBlock> block = std::make_shared<MagentaConcretePowderBlock>();
    registry[10337] = block;
  }

  { // ID: 10710
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_NORTH;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10710] = block;
  }

  { // ID: 10711
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_NORTH;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10711] = block;
  }

  { // ID: 10712
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_NORTH;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10712] = block;
  }

  { // ID: 10713
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_NORTH;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10713] = block;
  }

  { // ID: 10714
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_NORTH;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10714] = block;
  }

  { // ID: 10715
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_NORTH;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10715] = block;
  }

  { // ID: 10716
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_NORTH;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10716] = block;
  }

  { // ID: 10717
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_NORTH;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10717] = block;
  }

  { // ID: 10718
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_NORTH;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10718] = block;
  }

  { // ID: 10719
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_NORTH;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10719] = block;
  }

  { // ID: 10720
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_NORTH;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10720] = block;
  }

  { // ID: 10721
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_NORTH;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10721] = block;
  }

  { // ID: 10722
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_NORTH;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10722] = block;
  }

  { // ID: 10723
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_NORTH;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10723] = block;
  }

  { // ID: 10724
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_NORTH;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10724] = block;
  }

  { // ID: 10725
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_NORTH;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10725] = block;
  }

  { // ID: 10726
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_NORTH;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10726] = block;
  }

  { // ID: 10727
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_NORTH;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10727] = block;
  }

  { // ID: 10728
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_NORTH;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10728] = block;
  }

  { // ID: 10729
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_NORTH;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10729] = block;
  }

  { // ID: 10730
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_SOUTH;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10730] = block;
  }

  { // ID: 10731
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_SOUTH;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10731] = block;
  }

  { // ID: 10732
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_SOUTH;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10732] = block;
  }

  { // ID: 10733
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_SOUTH;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10733] = block;
  }

  { // ID: 10734
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_SOUTH;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10734] = block;
  }

  { // ID: 10735
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_SOUTH;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10735] = block;
  }

  { // ID: 10736
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_SOUTH;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10736] = block;
  }

  { // ID: 10737
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_SOUTH;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10737] = block;
  }

  { // ID: 10738
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_SOUTH;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10738] = block;
  }

  { // ID: 10739
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_SOUTH;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10739] = block;
  }

  { // ID: 10740
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_SOUTH;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10740] = block;
  }

  { // ID: 10741
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_SOUTH;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10741] = block;
  }

  { // ID: 10742
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_SOUTH;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10742] = block;
  }

  { // ID: 10743
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_SOUTH;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10743] = block;
  }

  { // ID: 10744
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_SOUTH;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10744] = block;
  }

  { // ID: 10745
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_SOUTH;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10745] = block;
  }

  { // ID: 10746
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_SOUTH;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10746] = block;
  }

  { // ID: 10747
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_SOUTH;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10747] = block;
  }

  { // ID: 10748
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_SOUTH;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10748] = block;
  }

  { // ID: 10749
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_SOUTH;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10749] = block;
  }

  { // ID: 10750
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_WEST;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10750] = block;
  }

  { // ID: 10751
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_WEST;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10751] = block;
  }

  { // ID: 10752
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_WEST;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10752] = block;
  }

  { // ID: 10753
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_WEST;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10753] = block;
  }

  { // ID: 10754
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_WEST;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10754] = block;
  }

  { // ID: 10755
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_WEST;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10755] = block;
  }

  { // ID: 10756
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_WEST;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10756] = block;
  }

  { // ID: 10757
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_WEST;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10757] = block;
  }

  { // ID: 10758
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_WEST;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10758] = block;
  }

  { // ID: 10759
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_WEST;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10759] = block;
  }

  { // ID: 10760
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_WEST;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10760] = block;
  }

  { // ID: 10761
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_WEST;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10761] = block;
  }

  { // ID: 10762
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_WEST;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10762] = block;
  }

  { // ID: 10763
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_WEST;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10763] = block;
  }

  { // ID: 10764
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_WEST;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10764] = block;
  }

  { // ID: 10765
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_WEST;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10765] = block;
  }

  { // ID: 10766
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_WEST;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10766] = block;
  }

  { // ID: 10767
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_WEST;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10767] = block;
  }

  { // ID: 10768
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_WEST;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10768] = block;
  }

  { // ID: 10769
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_WEST;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10769] = block;
  }

  { // ID: 10770
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_EAST;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10770] = block;
  }

  { // ID: 10771
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_EAST;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10771] = block;
  }

  { // ID: 10772
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_EAST;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10772] = block;
  }

  { // ID: 10773
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_EAST;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10773] = block;
  }

  { // ID: 10774
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_EAST;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10774] = block;
  }

  { // ID: 10775
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_EAST;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10775] = block;
  }

  { // ID: 10776
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_EAST;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10776] = block;
  }

  { // ID: 10777
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_EAST;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10777] = block;
  }

  { // ID: 10778
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_EAST;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10778] = block;
  }

  { // ID: 10779
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_EAST;
    block->half = MossyStoneBrickStairsBlock::HALF_TOP;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10779] = block;
  }

  { // ID: 10780
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_EAST;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10780] = block;
  }

  { // ID: 10781
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_EAST;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10781] = block;
  }

  { // ID: 10782
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_EAST;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10782] = block;
  }

  { // ID: 10783
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_EAST;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10783] = block;
  }

  { // ID: 10784
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_EAST;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10784] = block;
  }

  { // ID: 10785
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_EAST;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10785] = block;
  }

  { // ID: 10786
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_EAST;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10786] = block;
  }

  { // ID: 10787
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_EAST;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10787] = block;
  }

  { // ID: 10788
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_EAST;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10788] = block;
  }

  { // ID: 10789
    std::shared_ptr<MossyStoneBrickStairsBlock> block = std::make_shared<MossyStoneBrickStairsBlock>();
    block->facing = MossyStoneBrickStairsBlock::FACING_EAST;
    block->half = MossyStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = MossyStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10789] = block;
  }

  { // ID: 10870
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_NORTH;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10870] = block;
  }

  { // ID: 10871
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_NORTH;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10871] = block;
  }

  { // ID: 10872
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_NORTH;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10872] = block;
  }

  { // ID: 10873
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_NORTH;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10873] = block;
  }

  { // ID: 10874
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_NORTH;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10874] = block;
  }

  { // ID: 10875
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_NORTH;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10875] = block;
  }

  { // ID: 10876
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_NORTH;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10876] = block;
  }

  { // ID: 10877
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_NORTH;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10877] = block;
  }

  { // ID: 10878
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_NORTH;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10878] = block;
  }

  { // ID: 10879
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_NORTH;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10879] = block;
  }

  { // ID: 10880
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_NORTH;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10880] = block;
  }

  { // ID: 10881
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_NORTH;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10881] = block;
  }

  { // ID: 10882
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_NORTH;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10882] = block;
  }

  { // ID: 10883
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_NORTH;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10883] = block;
  }

  { // ID: 10884
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_NORTH;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10884] = block;
  }

  { // ID: 10885
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_NORTH;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10885] = block;
  }

  { // ID: 10886
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_NORTH;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10886] = block;
  }

  { // ID: 10887
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_NORTH;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10887] = block;
  }

  { // ID: 10888
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_NORTH;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10888] = block;
  }

  { // ID: 10889
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_NORTH;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10889] = block;
  }

  { // ID: 10890
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_SOUTH;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10890] = block;
  }

  { // ID: 10891
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_SOUTH;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10891] = block;
  }

  { // ID: 10892
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_SOUTH;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10892] = block;
  }

  { // ID: 10893
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_SOUTH;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10893] = block;
  }

  { // ID: 10894
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_SOUTH;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10894] = block;
  }

  { // ID: 10895
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_SOUTH;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10895] = block;
  }

  { // ID: 10896
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_SOUTH;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10896] = block;
  }

  { // ID: 10897
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_SOUTH;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10897] = block;
  }

  { // ID: 10898
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_SOUTH;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10898] = block;
  }

  { // ID: 10899
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_SOUTH;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10899] = block;
  }

  { // ID: 10900
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_SOUTH;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10900] = block;
  }

  { // ID: 10901
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_SOUTH;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10901] = block;
  }

  { // ID: 10902
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_SOUTH;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10902] = block;
  }

  { // ID: 10903
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_SOUTH;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10903] = block;
  }

  { // ID: 10904
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_SOUTH;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10904] = block;
  }

  { // ID: 10905
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_SOUTH;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10905] = block;
  }

  { // ID: 10906
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_SOUTH;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10906] = block;
  }

  { // ID: 10907
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_SOUTH;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10907] = block;
  }

  { // ID: 10908
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_SOUTH;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10908] = block;
  }

  { // ID: 10909
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_SOUTH;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10909] = block;
  }

  { // ID: 10910
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_WEST;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10910] = block;
  }

  { // ID: 10911
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_WEST;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10911] = block;
  }

  { // ID: 10912
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_WEST;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10912] = block;
  }

  { // ID: 10913
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_WEST;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10913] = block;
  }

  { // ID: 10914
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_WEST;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10914] = block;
  }

  { // ID: 10915
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_WEST;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10915] = block;
  }

  { // ID: 10916
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_WEST;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10916] = block;
  }

  { // ID: 10917
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_WEST;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10917] = block;
  }

  { // ID: 10918
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_WEST;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10918] = block;
  }

  { // ID: 10919
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_WEST;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10919] = block;
  }

  { // ID: 10920
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_WEST;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10920] = block;
  }

  { // ID: 10921
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_WEST;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10921] = block;
  }

  { // ID: 10922
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_WEST;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10922] = block;
  }

  { // ID: 10923
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_WEST;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10923] = block;
  }

  { // ID: 10924
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_WEST;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10924] = block;
  }

  { // ID: 10925
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_WEST;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10925] = block;
  }

  { // ID: 10926
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_WEST;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10926] = block;
  }

  { // ID: 10927
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_WEST;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10927] = block;
  }

  { // ID: 10928
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_WEST;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10928] = block;
  }

  { // ID: 10929
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_WEST;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10929] = block;
  }

  { // ID: 10930
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_EAST;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10930] = block;
  }

  { // ID: 10931
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_EAST;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10931] = block;
  }

  { // ID: 10932
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_EAST;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10932] = block;
  }

  { // ID: 10933
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_EAST;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10933] = block;
  }

  { // ID: 10934
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_EAST;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10934] = block;
  }

  { // ID: 10935
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_EAST;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10935] = block;
  }

  { // ID: 10936
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_EAST;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10936] = block;
  }

  { // ID: 10937
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_EAST;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10937] = block;
  }

  { // ID: 10938
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_EAST;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10938] = block;
  }

  { // ID: 10939
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_EAST;
    block->half = MossyCobblestoneStairsBlock::HALF_TOP;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10939] = block;
  }

  { // ID: 10940
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_EAST;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10940] = block;
  }

  { // ID: 10941
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_EAST;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10941] = block;
  }

  { // ID: 10942
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_EAST;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10942] = block;
  }

  { // ID: 10943
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_EAST;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10943] = block;
  }

  { // ID: 10944
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_EAST;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10944] = block;
  }

  { // ID: 10945
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_EAST;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10945] = block;
  }

  { // ID: 10946
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_EAST;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10946] = block;
  }

  { // ID: 10947
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_EAST;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10947] = block;
  }

  { // ID: 10948
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_EAST;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[10948] = block;
  }

  { // ID: 10949
    std::shared_ptr<MossyCobblestoneStairsBlock> block = std::make_shared<MossyCobblestoneStairsBlock>();
    block->facing = MossyCobblestoneStairsBlock::FACING_EAST;
    block->half = MossyCobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = MossyCobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = MossyCobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[10949] = block;
  }

  { // ID: 11682
    std::shared_ptr<MossyStoneBrickSlabBlock> block = std::make_shared<MossyStoneBrickSlabBlock>();
    block->type = MossyStoneBrickSlabBlock::TYPE_TOP;
    block->waterlogged = MossyStoneBrickSlabBlock::WATERLOGGED_TRUE;
    registry[11682] = block;
  }

  { // ID: 11683
    std::shared_ptr<MossyStoneBrickSlabBlock> block = std::make_shared<MossyStoneBrickSlabBlock>();
    block->type = MossyStoneBrickSlabBlock::TYPE_TOP;
    block->waterlogged = MossyStoneBrickSlabBlock::WATERLOGGED_FALSE;
    registry[11683] = block;
  }

  { // ID: 11684
    std::shared_ptr<MossyStoneBrickSlabBlock> block = std::make_shared<MossyStoneBrickSlabBlock>();
    block->type = MossyStoneBrickSlabBlock::TYPE_BOTTOM;
    block->waterlogged = MossyStoneBrickSlabBlock::WATERLOGGED_TRUE;
    registry[11684] = block;
  }

  { // ID: 11685
    std::shared_ptr<MossyStoneBrickSlabBlock> block = std::make_shared<MossyStoneBrickSlabBlock>();
    block->type = MossyStoneBrickSlabBlock::TYPE_BOTTOM;
    block->waterlogged = MossyStoneBrickSlabBlock::WATERLOGGED_FALSE;
    registry[11685] = block;
  }

  { // ID: 11686
    std::shared_ptr<MossyStoneBrickSlabBlock> block = std::make_shared<MossyStoneBrickSlabBlock>();
    block->type = MossyStoneBrickSlabBlock::TYPE_DOUBLE;
    block->waterlogged = MossyStoneBrickSlabBlock::WATERLOGGED_TRUE;
    registry[11686] = block;
  }

  { // ID: 11687
    std::shared_ptr<MossyStoneBrickSlabBlock> block = std::make_shared<MossyStoneBrickSlabBlock>();
    block->type = MossyStoneBrickSlabBlock::TYPE_DOUBLE;
    block->waterlogged = MossyStoneBrickSlabBlock::WATERLOGGED_FALSE;
    registry[11687] = block;
  }

  { // ID: 11694
    std::shared_ptr<MossyCobblestoneSlabBlock> block = std::make_shared<MossyCobblestoneSlabBlock>();
    block->type = MossyCobblestoneSlabBlock::TYPE_TOP;
    block->waterlogged = MossyCobblestoneSlabBlock::WATERLOGGED_TRUE;
    registry[11694] = block;
  }

  { // ID: 11695
    std::shared_ptr<MossyCobblestoneSlabBlock> block = std::make_shared<MossyCobblestoneSlabBlock>();
    block->type = MossyCobblestoneSlabBlock::TYPE_TOP;
    block->waterlogged = MossyCobblestoneSlabBlock::WATERLOGGED_FALSE;
    registry[11695] = block;
  }

  { // ID: 11696
    std::shared_ptr<MossyCobblestoneSlabBlock> block = std::make_shared<MossyCobblestoneSlabBlock>();
    block->type = MossyCobblestoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = MossyCobblestoneSlabBlock::WATERLOGGED_TRUE;
    registry[11696] = block;
  }

  { // ID: 11697
    std::shared_ptr<MossyCobblestoneSlabBlock> block = std::make_shared<MossyCobblestoneSlabBlock>();
    block->type = MossyCobblestoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = MossyCobblestoneSlabBlock::WATERLOGGED_FALSE;
    registry[11697] = block;
  }

  { // ID: 11698
    std::shared_ptr<MossyCobblestoneSlabBlock> block = std::make_shared<MossyCobblestoneSlabBlock>();
    block->type = MossyCobblestoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = MossyCobblestoneSlabBlock::WATERLOGGED_TRUE;
    registry[11698] = block;
  }

  { // ID: 11699
    std::shared_ptr<MossyCobblestoneSlabBlock> block = std::make_shared<MossyCobblestoneSlabBlock>();
    block->type = MossyCobblestoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = MossyCobblestoneSlabBlock::WATERLOGGED_FALSE;
    registry[11699] = block;
  }

  { // ID: 12720
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12720] = block;
  }

  { // ID: 12721
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12721] = block;
  }

  { // ID: 12722
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12722] = block;
  }

  { // ID: 12723
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12723] = block;
  }

  { // ID: 12724
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12724] = block;
  }

  { // ID: 12725
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12725] = block;
  }

  { // ID: 12726
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12726] = block;
  }

  { // ID: 12727
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12727] = block;
  }

  { // ID: 12728
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12728] = block;
  }

  { // ID: 12729
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12729] = block;
  }

  { // ID: 12730
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12730] = block;
  }

  { // ID: 12731
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12731] = block;
  }

  { // ID: 12732
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12732] = block;
  }

  { // ID: 12733
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12733] = block;
  }

  { // ID: 12734
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12734] = block;
  }

  { // ID: 12735
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12735] = block;
  }

  { // ID: 12736
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12736] = block;
  }

  { // ID: 12737
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12737] = block;
  }

  { // ID: 12738
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12738] = block;
  }

  { // ID: 12739
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12739] = block;
  }

  { // ID: 12740
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12740] = block;
  }

  { // ID: 12741
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12741] = block;
  }

  { // ID: 12742
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12742] = block;
  }

  { // ID: 12743
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12743] = block;
  }

  { // ID: 12744
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12744] = block;
  }

  { // ID: 12745
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12745] = block;
  }

  { // ID: 12746
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12746] = block;
  }

  { // ID: 12747
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12747] = block;
  }

  { // ID: 12748
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12748] = block;
  }

  { // ID: 12749
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12749] = block;
  }

  { // ID: 12750
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12750] = block;
  }

  { // ID: 12751
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12751] = block;
  }

  { // ID: 12752
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12752] = block;
  }

  { // ID: 12753
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12753] = block;
  }

  { // ID: 12754
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12754] = block;
  }

  { // ID: 12755
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12755] = block;
  }

  { // ID: 12756
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12756] = block;
  }

  { // ID: 12757
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12757] = block;
  }

  { // ID: 12758
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12758] = block;
  }

  { // ID: 12759
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12759] = block;
  }

  { // ID: 12760
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12760] = block;
  }

  { // ID: 12761
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12761] = block;
  }

  { // ID: 12762
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12762] = block;
  }

  { // ID: 12763
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12763] = block;
  }

  { // ID: 12764
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12764] = block;
  }

  { // ID: 12765
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12765] = block;
  }

  { // ID: 12766
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12766] = block;
  }

  { // ID: 12767
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12767] = block;
  }

  { // ID: 12768
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12768] = block;
  }

  { // ID: 12769
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12769] = block;
  }

  { // ID: 12770
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12770] = block;
  }

  { // ID: 12771
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12771] = block;
  }

  { // ID: 12772
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12772] = block;
  }

  { // ID: 12773
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12773] = block;
  }

  { // ID: 12774
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12774] = block;
  }

  { // ID: 12775
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12775] = block;
  }

  { // ID: 12776
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12776] = block;
  }

  { // ID: 12777
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12777] = block;
  }

  { // ID: 12778
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12778] = block;
  }

  { // ID: 12779
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12779] = block;
  }

  { // ID: 12780
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12780] = block;
  }

  { // ID: 12781
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12781] = block;
  }

  { // ID: 12782
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12782] = block;
  }

  { // ID: 12783
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12783] = block;
  }

  { // ID: 12784
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12784] = block;
  }

  { // ID: 12785
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12785] = block;
  }

  { // ID: 12786
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12786] = block;
  }

  { // ID: 12787
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12787] = block;
  }

  { // ID: 12788
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12788] = block;
  }

  { // ID: 12789
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12789] = block;
  }

  { // ID: 12790
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12790] = block;
  }

  { // ID: 12791
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12791] = block;
  }

  { // ID: 12792
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12792] = block;
  }

  { // ID: 12793
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12793] = block;
  }

  { // ID: 12794
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12794] = block;
  }

  { // ID: 12795
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12795] = block;
  }

  { // ID: 12796
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12796] = block;
  }

  { // ID: 12797
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12797] = block;
  }

  { // ID: 12798
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12798] = block;
  }

  { // ID: 12799
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12799] = block;
  }

  { // ID: 12800
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12800] = block;
  }

  { // ID: 12801
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12801] = block;
  }

  { // ID: 12802
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12802] = block;
  }

  { // ID: 12803
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12803] = block;
  }

  { // ID: 12804
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12804] = block;
  }

  { // ID: 12805
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12805] = block;
  }

  { // ID: 12806
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12806] = block;
  }

  { // ID: 12807
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12807] = block;
  }

  { // ID: 12808
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12808] = block;
  }

  { // ID: 12809
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12809] = block;
  }

  { // ID: 12810
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12810] = block;
  }

  { // ID: 12811
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12811] = block;
  }

  { // ID: 12812
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12812] = block;
  }

  { // ID: 12813
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12813] = block;
  }

  { // ID: 12814
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12814] = block;
  }

  { // ID: 12815
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12815] = block;
  }

  { // ID: 12816
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12816] = block;
  }

  { // ID: 12817
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12817] = block;
  }

  { // ID: 12818
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12818] = block;
  }

  { // ID: 12819
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12819] = block;
  }

  { // ID: 12820
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12820] = block;
  }

  { // ID: 12821
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12821] = block;
  }

  { // ID: 12822
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12822] = block;
  }

  { // ID: 12823
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12823] = block;
  }

  { // ID: 12824
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12824] = block;
  }

  { // ID: 12825
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12825] = block;
  }

  { // ID: 12826
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12826] = block;
  }

  { // ID: 12827
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_NONE;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12827] = block;
  }

  { // ID: 12828
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12828] = block;
  }

  { // ID: 12829
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12829] = block;
  }

  { // ID: 12830
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12830] = block;
  }

  { // ID: 12831
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12831] = block;
  }

  { // ID: 12832
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12832] = block;
  }

  { // ID: 12833
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12833] = block;
  }

  { // ID: 12834
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12834] = block;
  }

  { // ID: 12835
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12835] = block;
  }

  { // ID: 12836
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12836] = block;
  }

  { // ID: 12837
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12837] = block;
  }

  { // ID: 12838
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12838] = block;
  }

  { // ID: 12839
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12839] = block;
  }

  { // ID: 12840
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12840] = block;
  }

  { // ID: 12841
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12841] = block;
  }

  { // ID: 12842
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12842] = block;
  }

  { // ID: 12843
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12843] = block;
  }

  { // ID: 12844
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12844] = block;
  }

  { // ID: 12845
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12845] = block;
  }

  { // ID: 12846
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12846] = block;
  }

  { // ID: 12847
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12847] = block;
  }

  { // ID: 12848
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12848] = block;
  }

  { // ID: 12849
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12849] = block;
  }

  { // ID: 12850
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12850] = block;
  }

  { // ID: 12851
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12851] = block;
  }

  { // ID: 12852
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12852] = block;
  }

  { // ID: 12853
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12853] = block;
  }

  { // ID: 12854
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12854] = block;
  }

  { // ID: 12855
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12855] = block;
  }

  { // ID: 12856
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12856] = block;
  }

  { // ID: 12857
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12857] = block;
  }

  { // ID: 12858
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12858] = block;
  }

  { // ID: 12859
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12859] = block;
  }

  { // ID: 12860
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12860] = block;
  }

  { // ID: 12861
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12861] = block;
  }

  { // ID: 12862
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12862] = block;
  }

  { // ID: 12863
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12863] = block;
  }

  { // ID: 12864
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12864] = block;
  }

  { // ID: 12865
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12865] = block;
  }

  { // ID: 12866
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12866] = block;
  }

  { // ID: 12867
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12867] = block;
  }

  { // ID: 12868
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12868] = block;
  }

  { // ID: 12869
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12869] = block;
  }

  { // ID: 12870
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12870] = block;
  }

  { // ID: 12871
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12871] = block;
  }

  { // ID: 12872
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12872] = block;
  }

  { // ID: 12873
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12873] = block;
  }

  { // ID: 12874
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12874] = block;
  }

  { // ID: 12875
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12875] = block;
  }

  { // ID: 12876
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12876] = block;
  }

  { // ID: 12877
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12877] = block;
  }

  { // ID: 12878
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12878] = block;
  }

  { // ID: 12879
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12879] = block;
  }

  { // ID: 12880
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12880] = block;
  }

  { // ID: 12881
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12881] = block;
  }

  { // ID: 12882
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12882] = block;
  }

  { // ID: 12883
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12883] = block;
  }

  { // ID: 12884
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12884] = block;
  }

  { // ID: 12885
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12885] = block;
  }

  { // ID: 12886
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12886] = block;
  }

  { // ID: 12887
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12887] = block;
  }

  { // ID: 12888
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12888] = block;
  }

  { // ID: 12889
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12889] = block;
  }

  { // ID: 12890
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12890] = block;
  }

  { // ID: 12891
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12891] = block;
  }

  { // ID: 12892
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12892] = block;
  }

  { // ID: 12893
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12893] = block;
  }

  { // ID: 12894
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12894] = block;
  }

  { // ID: 12895
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12895] = block;
  }

  { // ID: 12896
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12896] = block;
  }

  { // ID: 12897
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12897] = block;
  }

  { // ID: 12898
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12898] = block;
  }

  { // ID: 12899
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12899] = block;
  }

  { // ID: 12900
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12900] = block;
  }

  { // ID: 12901
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12901] = block;
  }

  { // ID: 12902
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12902] = block;
  }

  { // ID: 12903
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12903] = block;
  }

  { // ID: 12904
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12904] = block;
  }

  { // ID: 12905
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12905] = block;
  }

  { // ID: 12906
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12906] = block;
  }

  { // ID: 12907
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12907] = block;
  }

  { // ID: 12908
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12908] = block;
  }

  { // ID: 12909
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12909] = block;
  }

  { // ID: 12910
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12910] = block;
  }

  { // ID: 12911
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12911] = block;
  }

  { // ID: 12912
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12912] = block;
  }

  { // ID: 12913
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12913] = block;
  }

  { // ID: 12914
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12914] = block;
  }

  { // ID: 12915
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12915] = block;
  }

  { // ID: 12916
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12916] = block;
  }

  { // ID: 12917
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12917] = block;
  }

  { // ID: 12918
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12918] = block;
  }

  { // ID: 12919
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12919] = block;
  }

  { // ID: 12920
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12920] = block;
  }

  { // ID: 12921
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12921] = block;
  }

  { // ID: 12922
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12922] = block;
  }

  { // ID: 12923
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12923] = block;
  }

  { // ID: 12924
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12924] = block;
  }

  { // ID: 12925
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12925] = block;
  }

  { // ID: 12926
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12926] = block;
  }

  { // ID: 12927
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12927] = block;
  }

  { // ID: 12928
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12928] = block;
  }

  { // ID: 12929
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12929] = block;
  }

  { // ID: 12930
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12930] = block;
  }

  { // ID: 12931
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12931] = block;
  }

  { // ID: 12932
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12932] = block;
  }

  { // ID: 12933
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12933] = block;
  }

  { // ID: 12934
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12934] = block;
  }

  { // ID: 12935
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_LOW;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12935] = block;
  }

  { // ID: 12936
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12936] = block;
  }

  { // ID: 12937
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12937] = block;
  }

  { // ID: 12938
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12938] = block;
  }

  { // ID: 12939
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12939] = block;
  }

  { // ID: 12940
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12940] = block;
  }

  { // ID: 12941
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12941] = block;
  }

  { // ID: 12942
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12942] = block;
  }

  { // ID: 12943
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12943] = block;
  }

  { // ID: 12944
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12944] = block;
  }

  { // ID: 12945
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12945] = block;
  }

  { // ID: 12946
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12946] = block;
  }

  { // ID: 12947
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12947] = block;
  }

  { // ID: 12948
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12948] = block;
  }

  { // ID: 12949
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12949] = block;
  }

  { // ID: 12950
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12950] = block;
  }

  { // ID: 12951
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12951] = block;
  }

  { // ID: 12952
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12952] = block;
  }

  { // ID: 12953
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12953] = block;
  }

  { // ID: 12954
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12954] = block;
  }

  { // ID: 12955
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12955] = block;
  }

  { // ID: 12956
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12956] = block;
  }

  { // ID: 12957
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12957] = block;
  }

  { // ID: 12958
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12958] = block;
  }

  { // ID: 12959
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12959] = block;
  }

  { // ID: 12960
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12960] = block;
  }

  { // ID: 12961
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12961] = block;
  }

  { // ID: 12962
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12962] = block;
  }

  { // ID: 12963
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12963] = block;
  }

  { // ID: 12964
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12964] = block;
  }

  { // ID: 12965
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12965] = block;
  }

  { // ID: 12966
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12966] = block;
  }

  { // ID: 12967
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12967] = block;
  }

  { // ID: 12968
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12968] = block;
  }

  { // ID: 12969
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12969] = block;
  }

  { // ID: 12970
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12970] = block;
  }

  { // ID: 12971
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_NONE;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12971] = block;
  }

  { // ID: 12972
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12972] = block;
  }

  { // ID: 12973
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12973] = block;
  }

  { // ID: 12974
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12974] = block;
  }

  { // ID: 12975
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12975] = block;
  }

  { // ID: 12976
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12976] = block;
  }

  { // ID: 12977
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12977] = block;
  }

  { // ID: 12978
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12978] = block;
  }

  { // ID: 12979
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12979] = block;
  }

  { // ID: 12980
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12980] = block;
  }

  { // ID: 12981
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12981] = block;
  }

  { // ID: 12982
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12982] = block;
  }

  { // ID: 12983
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12983] = block;
  }

  { // ID: 12984
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12984] = block;
  }

  { // ID: 12985
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12985] = block;
  }

  { // ID: 12986
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12986] = block;
  }

  { // ID: 12987
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12987] = block;
  }

  { // ID: 12988
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12988] = block;
  }

  { // ID: 12989
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12989] = block;
  }

  { // ID: 12990
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12990] = block;
  }

  { // ID: 12991
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12991] = block;
  }

  { // ID: 12992
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12992] = block;
  }

  { // ID: 12993
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12993] = block;
  }

  { // ID: 12994
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12994] = block;
  }

  { // ID: 12995
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12995] = block;
  }

  { // ID: 12996
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12996] = block;
  }

  { // ID: 12997
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[12997] = block;
  }

  { // ID: 12998
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[12998] = block;
  }

  { // ID: 12999
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[12999] = block;
  }

  { // ID: 13000
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[13000] = block;
  }

  { // ID: 13001
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[13001] = block;
  }

  { // ID: 13002
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[13002] = block;
  }

  { // ID: 13003
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[13003] = block;
  }

  { // ID: 13004
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[13004] = block;
  }

  { // ID: 13005
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[13005] = block;
  }

  { // ID: 13006
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[13006] = block;
  }

  { // ID: 13007
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_LOW;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[13007] = block;
  }

  { // ID: 13008
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[13008] = block;
  }

  { // ID: 13009
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[13009] = block;
  }

  { // ID: 13010
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[13010] = block;
  }

  { // ID: 13011
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[13011] = block;
  }

  { // ID: 13012
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[13012] = block;
  }

  { // ID: 13013
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[13013] = block;
  }

  { // ID: 13014
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[13014] = block;
  }

  { // ID: 13015
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[13015] = block;
  }

  { // ID: 13016
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[13016] = block;
  }

  { // ID: 13017
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[13017] = block;
  }

  { // ID: 13018
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[13018] = block;
  }

  { // ID: 13019
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_NONE;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[13019] = block;
  }

  { // ID: 13020
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[13020] = block;
  }

  { // ID: 13021
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[13021] = block;
  }

  { // ID: 13022
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[13022] = block;
  }

  { // ID: 13023
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[13023] = block;
  }

  { // ID: 13024
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[13024] = block;
  }

  { // ID: 13025
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[13025] = block;
  }

  { // ID: 13026
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[13026] = block;
  }

  { // ID: 13027
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[13027] = block;
  }

  { // ID: 13028
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[13028] = block;
  }

  { // ID: 13029
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[13029] = block;
  }

  { // ID: 13030
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[13030] = block;
  }

  { // ID: 13031
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_LOW;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[13031] = block;
  }

  { // ID: 13032
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[13032] = block;
  }

  { // ID: 13033
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[13033] = block;
  }

  { // ID: 13034
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[13034] = block;
  }

  { // ID: 13035
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[13035] = block;
  }

  { // ID: 13036
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[13036] = block;
  }

  { // ID: 13037
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[13037] = block;
  }

  { // ID: 13038
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[13038] = block;
  }

  { // ID: 13039
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[13039] = block;
  }

  { // ID: 13040
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[13040] = block;
  }

  { // ID: 13041
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_NONE;
    registry[13041] = block;
  }

  { // ID: 13042
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_LOW;
    registry[13042] = block;
  }

  { // ID: 13043
    std::shared_ptr<MossyStoneBrickWallBlock> block = std::make_shared<MossyStoneBrickWallBlock>();
    block->east = MossyStoneBrickWallBlock::EAST_TALL;
    block->north = MossyStoneBrickWallBlock::NORTH_TALL;
    block->south = MossyStoneBrickWallBlock::SOUTH_TALL;
    block->up = MossyStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = MossyStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MossyStoneBrickWallBlock::WEST_TALL;
    registry[13043] = block;
  }

  { // ID: 13692
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13692] = block;
  }

  { // ID: 13693
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13693] = block;
  }

  { // ID: 13694
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13694] = block;
  }

  { // ID: 13695
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13695] = block;
  }

  { // ID: 13696
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13696] = block;
  }

  { // ID: 13697
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13697] = block;
  }

  { // ID: 13698
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13698] = block;
  }

  { // ID: 13699
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13699] = block;
  }

  { // ID: 13700
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13700] = block;
  }

  { // ID: 13701
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13701] = block;
  }

  { // ID: 13702
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13702] = block;
  }

  { // ID: 13703
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13703] = block;
  }

  { // ID: 13704
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13704] = block;
  }

  { // ID: 13705
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13705] = block;
  }

  { // ID: 13706
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13706] = block;
  }

  { // ID: 13707
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13707] = block;
  }

  { // ID: 13708
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13708] = block;
  }

  { // ID: 13709
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13709] = block;
  }

  { // ID: 13710
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13710] = block;
  }

  { // ID: 13711
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13711] = block;
  }

  { // ID: 13712
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13712] = block;
  }

  { // ID: 13713
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13713] = block;
  }

  { // ID: 13714
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13714] = block;
  }

  { // ID: 13715
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13715] = block;
  }

  { // ID: 13716
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13716] = block;
  }

  { // ID: 13717
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13717] = block;
  }

  { // ID: 13718
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13718] = block;
  }

  { // ID: 13719
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13719] = block;
  }

  { // ID: 13720
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13720] = block;
  }

  { // ID: 13721
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13721] = block;
  }

  { // ID: 13722
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13722] = block;
  }

  { // ID: 13723
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13723] = block;
  }

  { // ID: 13724
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13724] = block;
  }

  { // ID: 13725
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13725] = block;
  }

  { // ID: 13726
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13726] = block;
  }

  { // ID: 13727
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13727] = block;
  }

  { // ID: 13728
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13728] = block;
  }

  { // ID: 13729
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13729] = block;
  }

  { // ID: 13730
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13730] = block;
  }

  { // ID: 13731
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13731] = block;
  }

  { // ID: 13732
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13732] = block;
  }

  { // ID: 13733
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13733] = block;
  }

  { // ID: 13734
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13734] = block;
  }

  { // ID: 13735
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13735] = block;
  }

  { // ID: 13736
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13736] = block;
  }

  { // ID: 13737
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13737] = block;
  }

  { // ID: 13738
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13738] = block;
  }

  { // ID: 13739
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13739] = block;
  }

  { // ID: 13740
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13740] = block;
  }

  { // ID: 13741
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13741] = block;
  }

  { // ID: 13742
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13742] = block;
  }

  { // ID: 13743
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13743] = block;
  }

  { // ID: 13744
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13744] = block;
  }

  { // ID: 13745
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13745] = block;
  }

  { // ID: 13746
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13746] = block;
  }

  { // ID: 13747
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13747] = block;
  }

  { // ID: 13748
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13748] = block;
  }

  { // ID: 13749
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13749] = block;
  }

  { // ID: 13750
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13750] = block;
  }

  { // ID: 13751
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13751] = block;
  }

  { // ID: 13752
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13752] = block;
  }

  { // ID: 13753
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13753] = block;
  }

  { // ID: 13754
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13754] = block;
  }

  { // ID: 13755
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13755] = block;
  }

  { // ID: 13756
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13756] = block;
  }

  { // ID: 13757
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13757] = block;
  }

  { // ID: 13758
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13758] = block;
  }

  { // ID: 13759
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13759] = block;
  }

  { // ID: 13760
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13760] = block;
  }

  { // ID: 13761
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13761] = block;
  }

  { // ID: 13762
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13762] = block;
  }

  { // ID: 13763
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13763] = block;
  }

  { // ID: 13764
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13764] = block;
  }

  { // ID: 13765
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13765] = block;
  }

  { // ID: 13766
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13766] = block;
  }

  { // ID: 13767
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13767] = block;
  }

  { // ID: 13768
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13768] = block;
  }

  { // ID: 13769
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13769] = block;
  }

  { // ID: 13770
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13770] = block;
  }

  { // ID: 13771
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13771] = block;
  }

  { // ID: 13772
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13772] = block;
  }

  { // ID: 13773
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13773] = block;
  }

  { // ID: 13774
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13774] = block;
  }

  { // ID: 13775
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13775] = block;
  }

  { // ID: 13776
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13776] = block;
  }

  { // ID: 13777
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13777] = block;
  }

  { // ID: 13778
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13778] = block;
  }

  { // ID: 13779
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13779] = block;
  }

  { // ID: 13780
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13780] = block;
  }

  { // ID: 13781
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13781] = block;
  }

  { // ID: 13782
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13782] = block;
  }

  { // ID: 13783
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13783] = block;
  }

  { // ID: 13784
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13784] = block;
  }

  { // ID: 13785
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13785] = block;
  }

  { // ID: 13786
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13786] = block;
  }

  { // ID: 13787
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13787] = block;
  }

  { // ID: 13788
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13788] = block;
  }

  { // ID: 13789
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13789] = block;
  }

  { // ID: 13790
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13790] = block;
  }

  { // ID: 13791
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13791] = block;
  }

  { // ID: 13792
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13792] = block;
  }

  { // ID: 13793
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13793] = block;
  }

  { // ID: 13794
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13794] = block;
  }

  { // ID: 13795
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13795] = block;
  }

  { // ID: 13796
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13796] = block;
  }

  { // ID: 13797
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13797] = block;
  }

  { // ID: 13798
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13798] = block;
  }

  { // ID: 13799
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_NONE;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13799] = block;
  }

  { // ID: 13800
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13800] = block;
  }

  { // ID: 13801
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13801] = block;
  }

  { // ID: 13802
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13802] = block;
  }

  { // ID: 13803
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13803] = block;
  }

  { // ID: 13804
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13804] = block;
  }

  { // ID: 13805
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13805] = block;
  }

  { // ID: 13806
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13806] = block;
  }

  { // ID: 13807
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13807] = block;
  }

  { // ID: 13808
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13808] = block;
  }

  { // ID: 13809
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13809] = block;
  }

  { // ID: 13810
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13810] = block;
  }

  { // ID: 13811
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13811] = block;
  }

  { // ID: 13812
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13812] = block;
  }

  { // ID: 13813
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13813] = block;
  }

  { // ID: 13814
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13814] = block;
  }

  { // ID: 13815
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13815] = block;
  }

  { // ID: 13816
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13816] = block;
  }

  { // ID: 13817
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13817] = block;
  }

  { // ID: 13818
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13818] = block;
  }

  { // ID: 13819
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13819] = block;
  }

  { // ID: 13820
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13820] = block;
  }

  { // ID: 13821
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13821] = block;
  }

  { // ID: 13822
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13822] = block;
  }

  { // ID: 13823
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13823] = block;
  }

  { // ID: 13824
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13824] = block;
  }

  { // ID: 13825
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13825] = block;
  }

  { // ID: 13826
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13826] = block;
  }

  { // ID: 13827
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13827] = block;
  }

  { // ID: 13828
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13828] = block;
  }

  { // ID: 13829
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13829] = block;
  }

  { // ID: 13830
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13830] = block;
  }

  { // ID: 13831
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13831] = block;
  }

  { // ID: 13832
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13832] = block;
  }

  { // ID: 13833
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13833] = block;
  }

  { // ID: 13834
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13834] = block;
  }

  { // ID: 13835
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13835] = block;
  }

  { // ID: 13836
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13836] = block;
  }

  { // ID: 13837
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13837] = block;
  }

  { // ID: 13838
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13838] = block;
  }

  { // ID: 13839
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13839] = block;
  }

  { // ID: 13840
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13840] = block;
  }

  { // ID: 13841
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13841] = block;
  }

  { // ID: 13842
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13842] = block;
  }

  { // ID: 13843
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13843] = block;
  }

  { // ID: 13844
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13844] = block;
  }

  { // ID: 13845
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13845] = block;
  }

  { // ID: 13846
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13846] = block;
  }

  { // ID: 13847
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13847] = block;
  }

  { // ID: 13848
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13848] = block;
  }

  { // ID: 13849
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13849] = block;
  }

  { // ID: 13850
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13850] = block;
  }

  { // ID: 13851
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13851] = block;
  }

  { // ID: 13852
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13852] = block;
  }

  { // ID: 13853
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13853] = block;
  }

  { // ID: 13854
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13854] = block;
  }

  { // ID: 13855
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13855] = block;
  }

  { // ID: 13856
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13856] = block;
  }

  { // ID: 13857
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13857] = block;
  }

  { // ID: 13858
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13858] = block;
  }

  { // ID: 13859
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13859] = block;
  }

  { // ID: 13860
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13860] = block;
  }

  { // ID: 13861
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13861] = block;
  }

  { // ID: 13862
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13862] = block;
  }

  { // ID: 13863
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13863] = block;
  }

  { // ID: 13864
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13864] = block;
  }

  { // ID: 13865
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13865] = block;
  }

  { // ID: 13866
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13866] = block;
  }

  { // ID: 13867
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13867] = block;
  }

  { // ID: 13868
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13868] = block;
  }

  { // ID: 13869
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13869] = block;
  }

  { // ID: 13870
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13870] = block;
  }

  { // ID: 13871
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13871] = block;
  }

  { // ID: 13872
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13872] = block;
  }

  { // ID: 13873
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13873] = block;
  }

  { // ID: 13874
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13874] = block;
  }

  { // ID: 13875
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13875] = block;
  }

  { // ID: 13876
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13876] = block;
  }

  { // ID: 13877
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13877] = block;
  }

  { // ID: 13878
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13878] = block;
  }

  { // ID: 13879
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13879] = block;
  }

  { // ID: 13880
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13880] = block;
  }

  { // ID: 13881
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13881] = block;
  }

  { // ID: 13882
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13882] = block;
  }

  { // ID: 13883
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13883] = block;
  }

  { // ID: 13884
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13884] = block;
  }

  { // ID: 13885
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13885] = block;
  }

  { // ID: 13886
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13886] = block;
  }

  { // ID: 13887
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13887] = block;
  }

  { // ID: 13888
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13888] = block;
  }

  { // ID: 13889
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13889] = block;
  }

  { // ID: 13890
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13890] = block;
  }

  { // ID: 13891
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13891] = block;
  }

  { // ID: 13892
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13892] = block;
  }

  { // ID: 13893
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13893] = block;
  }

  { // ID: 13894
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13894] = block;
  }

  { // ID: 13895
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13895] = block;
  }

  { // ID: 13896
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13896] = block;
  }

  { // ID: 13897
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13897] = block;
  }

  { // ID: 13898
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13898] = block;
  }

  { // ID: 13899
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13899] = block;
  }

  { // ID: 13900
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13900] = block;
  }

  { // ID: 13901
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13901] = block;
  }

  { // ID: 13902
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13902] = block;
  }

  { // ID: 13903
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13903] = block;
  }

  { // ID: 13904
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13904] = block;
  }

  { // ID: 13905
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13905] = block;
  }

  { // ID: 13906
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13906] = block;
  }

  { // ID: 13907
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_LOW;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13907] = block;
  }

  { // ID: 13908
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13908] = block;
  }

  { // ID: 13909
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13909] = block;
  }

  { // ID: 13910
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13910] = block;
  }

  { // ID: 13911
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13911] = block;
  }

  { // ID: 13912
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13912] = block;
  }

  { // ID: 13913
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13913] = block;
  }

  { // ID: 13914
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13914] = block;
  }

  { // ID: 13915
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13915] = block;
  }

  { // ID: 13916
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13916] = block;
  }

  { // ID: 13917
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13917] = block;
  }

  { // ID: 13918
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13918] = block;
  }

  { // ID: 13919
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13919] = block;
  }

  { // ID: 13920
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13920] = block;
  }

  { // ID: 13921
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13921] = block;
  }

  { // ID: 13922
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13922] = block;
  }

  { // ID: 13923
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13923] = block;
  }

  { // ID: 13924
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13924] = block;
  }

  { // ID: 13925
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13925] = block;
  }

  { // ID: 13926
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13926] = block;
  }

  { // ID: 13927
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13927] = block;
  }

  { // ID: 13928
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13928] = block;
  }

  { // ID: 13929
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13929] = block;
  }

  { // ID: 13930
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13930] = block;
  }

  { // ID: 13931
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13931] = block;
  }

  { // ID: 13932
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13932] = block;
  }

  { // ID: 13933
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13933] = block;
  }

  { // ID: 13934
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13934] = block;
  }

  { // ID: 13935
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13935] = block;
  }

  { // ID: 13936
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13936] = block;
  }

  { // ID: 13937
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13937] = block;
  }

  { // ID: 13938
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13938] = block;
  }

  { // ID: 13939
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13939] = block;
  }

  { // ID: 13940
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13940] = block;
  }

  { // ID: 13941
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13941] = block;
  }

  { // ID: 13942
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13942] = block;
  }

  { // ID: 13943
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_NONE;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13943] = block;
  }

  { // ID: 13944
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13944] = block;
  }

  { // ID: 13945
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13945] = block;
  }

  { // ID: 13946
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13946] = block;
  }

  { // ID: 13947
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13947] = block;
  }

  { // ID: 13948
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13948] = block;
  }

  { // ID: 13949
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13949] = block;
  }

  { // ID: 13950
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13950] = block;
  }

  { // ID: 13951
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13951] = block;
  }

  { // ID: 13952
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13952] = block;
  }

  { // ID: 13953
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13953] = block;
  }

  { // ID: 13954
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13954] = block;
  }

  { // ID: 13955
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13955] = block;
  }

  { // ID: 13956
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13956] = block;
  }

  { // ID: 13957
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13957] = block;
  }

  { // ID: 13958
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13958] = block;
  }

  { // ID: 13959
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13959] = block;
  }

  { // ID: 13960
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13960] = block;
  }

  { // ID: 13961
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13961] = block;
  }

  { // ID: 13962
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13962] = block;
  }

  { // ID: 13963
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13963] = block;
  }

  { // ID: 13964
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13964] = block;
  }

  { // ID: 13965
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13965] = block;
  }

  { // ID: 13966
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13966] = block;
  }

  { // ID: 13967
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13967] = block;
  }

  { // ID: 13968
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13968] = block;
  }

  { // ID: 13969
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13969] = block;
  }

  { // ID: 13970
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13970] = block;
  }

  { // ID: 13971
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13971] = block;
  }

  { // ID: 13972
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13972] = block;
  }

  { // ID: 13973
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13973] = block;
  }

  { // ID: 13974
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13974] = block;
  }

  { // ID: 13975
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13975] = block;
  }

  { // ID: 13976
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13976] = block;
  }

  { // ID: 13977
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13977] = block;
  }

  { // ID: 13978
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13978] = block;
  }

  { // ID: 13979
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_LOW;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13979] = block;
  }

  { // ID: 13980
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13980] = block;
  }

  { // ID: 13981
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13981] = block;
  }

  { // ID: 13982
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13982] = block;
  }

  { // ID: 13983
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13983] = block;
  }

  { // ID: 13984
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13984] = block;
  }

  { // ID: 13985
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13985] = block;
  }

  { // ID: 13986
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13986] = block;
  }

  { // ID: 13987
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13987] = block;
  }

  { // ID: 13988
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13988] = block;
  }

  { // ID: 13989
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13989] = block;
  }

  { // ID: 13990
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13990] = block;
  }

  { // ID: 13991
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_NONE;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13991] = block;
  }

  { // ID: 13992
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13992] = block;
  }

  { // ID: 13993
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13993] = block;
  }

  { // ID: 13994
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13994] = block;
  }

  { // ID: 13995
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13995] = block;
  }

  { // ID: 13996
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13996] = block;
  }

  { // ID: 13997
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[13997] = block;
  }

  { // ID: 13998
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[13998] = block;
  }

  { // ID: 13999
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[13999] = block;
  }

  { // ID: 14000
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[14000] = block;
  }

  { // ID: 14001
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[14001] = block;
  }

  { // ID: 14002
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[14002] = block;
  }

  { // ID: 14003
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_LOW;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[14003] = block;
  }

  { // ID: 14004
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[14004] = block;
  }

  { // ID: 14005
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[14005] = block;
  }

  { // ID: 14006
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[14006] = block;
  }

  { // ID: 14007
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[14007] = block;
  }

  { // ID: 14008
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[14008] = block;
  }

  { // ID: 14009
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_TRUE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[14009] = block;
  }

  { // ID: 14010
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[14010] = block;
  }

  { // ID: 14011
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[14011] = block;
  }

  { // ID: 14012
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_TRUE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[14012] = block;
  }

  { // ID: 14013
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_NONE;
    registry[14013] = block;
  }

  { // ID: 14014
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_LOW;
    registry[14014] = block;
  }

  { // ID: 14015
    std::shared_ptr<MudBrickWallBlock> block = std::make_shared<MudBrickWallBlock>();
    block->east = MudBrickWallBlock::EAST_TALL;
    block->north = MudBrickWallBlock::NORTH_TALL;
    block->south = MudBrickWallBlock::SOUTH_TALL;
    block->up = MudBrickWallBlock::UP_FALSE;
    block->waterlogged = MudBrickWallBlock::WATERLOGGED_FALSE;
    block->west = MudBrickWallBlock::WEST_TALL;
    registry[14015] = block;
  }

  { // ID: 18361
    std::shared_ptr<MagentaCandleBlock> block = std::make_shared<MagentaCandleBlock>();
    block->candles = MagentaCandleBlock::CANDLES_1;
    block->lit = MagentaCandleBlock::LIT_TRUE;
    block->waterlogged = MagentaCandleBlock::WATERLOGGED_TRUE;
    registry[18361] = block;
  }

  { // ID: 18362
    std::shared_ptr<MagentaCandleBlock> block = std::make_shared<MagentaCandleBlock>();
    block->candles = MagentaCandleBlock::CANDLES_1;
    block->lit = MagentaCandleBlock::LIT_TRUE;
    block->waterlogged = MagentaCandleBlock::WATERLOGGED_FALSE;
    registry[18362] = block;
  }

  { // ID: 18363
    std::shared_ptr<MagentaCandleBlock> block = std::make_shared<MagentaCandleBlock>();
    block->candles = MagentaCandleBlock::CANDLES_1;
    block->lit = MagentaCandleBlock::LIT_FALSE;
    block->waterlogged = MagentaCandleBlock::WATERLOGGED_TRUE;
    registry[18363] = block;
  }

  { // ID: 18364
    std::shared_ptr<MagentaCandleBlock> block = std::make_shared<MagentaCandleBlock>();
    block->candles = MagentaCandleBlock::CANDLES_1;
    block->lit = MagentaCandleBlock::LIT_FALSE;
    block->waterlogged = MagentaCandleBlock::WATERLOGGED_FALSE;
    registry[18364] = block;
  }

  { // ID: 18365
    std::shared_ptr<MagentaCandleBlock> block = std::make_shared<MagentaCandleBlock>();
    block->candles = MagentaCandleBlock::CANDLES_2;
    block->lit = MagentaCandleBlock::LIT_TRUE;
    block->waterlogged = MagentaCandleBlock::WATERLOGGED_TRUE;
    registry[18365] = block;
  }

  { // ID: 18366
    std::shared_ptr<MagentaCandleBlock> block = std::make_shared<MagentaCandleBlock>();
    block->candles = MagentaCandleBlock::CANDLES_2;
    block->lit = MagentaCandleBlock::LIT_TRUE;
    block->waterlogged = MagentaCandleBlock::WATERLOGGED_FALSE;
    registry[18366] = block;
  }

  { // ID: 18367
    std::shared_ptr<MagentaCandleBlock> block = std::make_shared<MagentaCandleBlock>();
    block->candles = MagentaCandleBlock::CANDLES_2;
    block->lit = MagentaCandleBlock::LIT_FALSE;
    block->waterlogged = MagentaCandleBlock::WATERLOGGED_TRUE;
    registry[18367] = block;
  }

  { // ID: 18368
    std::shared_ptr<MagentaCandleBlock> block = std::make_shared<MagentaCandleBlock>();
    block->candles = MagentaCandleBlock::CANDLES_2;
    block->lit = MagentaCandleBlock::LIT_FALSE;
    block->waterlogged = MagentaCandleBlock::WATERLOGGED_FALSE;
    registry[18368] = block;
  }

  { // ID: 18369
    std::shared_ptr<MagentaCandleBlock> block = std::make_shared<MagentaCandleBlock>();
    block->candles = MagentaCandleBlock::CANDLES_3;
    block->lit = MagentaCandleBlock::LIT_TRUE;
    block->waterlogged = MagentaCandleBlock::WATERLOGGED_TRUE;
    registry[18369] = block;
  }

  { // ID: 18370
    std::shared_ptr<MagentaCandleBlock> block = std::make_shared<MagentaCandleBlock>();
    block->candles = MagentaCandleBlock::CANDLES_3;
    block->lit = MagentaCandleBlock::LIT_TRUE;
    block->waterlogged = MagentaCandleBlock::WATERLOGGED_FALSE;
    registry[18370] = block;
  }

  { // ID: 18371
    std::shared_ptr<MagentaCandleBlock> block = std::make_shared<MagentaCandleBlock>();
    block->candles = MagentaCandleBlock::CANDLES_3;
    block->lit = MagentaCandleBlock::LIT_FALSE;
    block->waterlogged = MagentaCandleBlock::WATERLOGGED_TRUE;
    registry[18371] = block;
  }

  { // ID: 18372
    std::shared_ptr<MagentaCandleBlock> block = std::make_shared<MagentaCandleBlock>();
    block->candles = MagentaCandleBlock::CANDLES_3;
    block->lit = MagentaCandleBlock::LIT_FALSE;
    block->waterlogged = MagentaCandleBlock::WATERLOGGED_FALSE;
    registry[18372] = block;
  }

  { // ID: 18373
    std::shared_ptr<MagentaCandleBlock> block = std::make_shared<MagentaCandleBlock>();
    block->candles = MagentaCandleBlock::CANDLES_4;
    block->lit = MagentaCandleBlock::LIT_TRUE;
    block->waterlogged = MagentaCandleBlock::WATERLOGGED_TRUE;
    registry[18373] = block;
  }

  { // ID: 18374
    std::shared_ptr<MagentaCandleBlock> block = std::make_shared<MagentaCandleBlock>();
    block->candles = MagentaCandleBlock::CANDLES_4;
    block->lit = MagentaCandleBlock::LIT_TRUE;
    block->waterlogged = MagentaCandleBlock::WATERLOGGED_FALSE;
    registry[18374] = block;
  }

  { // ID: 18375
    std::shared_ptr<MagentaCandleBlock> block = std::make_shared<MagentaCandleBlock>();
    block->candles = MagentaCandleBlock::CANDLES_4;
    block->lit = MagentaCandleBlock::LIT_FALSE;
    block->waterlogged = MagentaCandleBlock::WATERLOGGED_TRUE;
    registry[18375] = block;
  }

  { // ID: 18376
    std::shared_ptr<MagentaCandleBlock> block = std::make_shared<MagentaCandleBlock>();
    block->candles = MagentaCandleBlock::CANDLES_4;
    block->lit = MagentaCandleBlock::LIT_FALSE;
    block->waterlogged = MagentaCandleBlock::WATERLOGGED_FALSE;
    registry[18376] = block;
  }

  { // ID: 18591
    std::shared_ptr<MagentaCandleCakeBlock> block = std::make_shared<MagentaCandleCakeBlock>();
    block->lit = MagentaCandleCakeBlock::LIT_TRUE;
    registry[18591] = block;
  }

  { // ID: 18592
    std::shared_ptr<MagentaCandleCakeBlock> block = std::make_shared<MagentaCandleCakeBlock>();
    block->lit = MagentaCandleCakeBlock::LIT_FALSE;
    registry[18592] = block;
  }

  { // ID: 18645
    std::shared_ptr<MediumAmethystBudBlock> block = std::make_shared<MediumAmethystBudBlock>();
    block->facing = MediumAmethystBudBlock::FACING_NORTH;
    block->waterlogged = MediumAmethystBudBlock::WATERLOGGED_TRUE;
    registry[18645] = block;
  }

  { // ID: 18646
    std::shared_ptr<MediumAmethystBudBlock> block = std::make_shared<MediumAmethystBudBlock>();
    block->facing = MediumAmethystBudBlock::FACING_NORTH;
    block->waterlogged = MediumAmethystBudBlock::WATERLOGGED_FALSE;
    registry[18646] = block;
  }

  { // ID: 18647
    std::shared_ptr<MediumAmethystBudBlock> block = std::make_shared<MediumAmethystBudBlock>();
    block->facing = MediumAmethystBudBlock::FACING_EAST;
    block->waterlogged = MediumAmethystBudBlock::WATERLOGGED_TRUE;
    registry[18647] = block;
  }

  { // ID: 18648
    std::shared_ptr<MediumAmethystBudBlock> block = std::make_shared<MediumAmethystBudBlock>();
    block->facing = MediumAmethystBudBlock::FACING_EAST;
    block->waterlogged = MediumAmethystBudBlock::WATERLOGGED_FALSE;
    registry[18648] = block;
  }

  { // ID: 18649
    std::shared_ptr<MediumAmethystBudBlock> block = std::make_shared<MediumAmethystBudBlock>();
    block->facing = MediumAmethystBudBlock::FACING_SOUTH;
    block->waterlogged = MediumAmethystBudBlock::WATERLOGGED_TRUE;
    registry[18649] = block;
  }

  { // ID: 18650
    std::shared_ptr<MediumAmethystBudBlock> block = std::make_shared<MediumAmethystBudBlock>();
    block->facing = MediumAmethystBudBlock::FACING_SOUTH;
    block->waterlogged = MediumAmethystBudBlock::WATERLOGGED_FALSE;
    registry[18650] = block;
  }

  { // ID: 18651
    std::shared_ptr<MediumAmethystBudBlock> block = std::make_shared<MediumAmethystBudBlock>();
    block->facing = MediumAmethystBudBlock::FACING_WEST;
    block->waterlogged = MediumAmethystBudBlock::WATERLOGGED_TRUE;
    registry[18651] = block;
  }

  { // ID: 18652
    std::shared_ptr<MediumAmethystBudBlock> block = std::make_shared<MediumAmethystBudBlock>();
    block->facing = MediumAmethystBudBlock::FACING_WEST;
    block->waterlogged = MediumAmethystBudBlock::WATERLOGGED_FALSE;
    registry[18652] = block;
  }

  { // ID: 18653
    std::shared_ptr<MediumAmethystBudBlock> block = std::make_shared<MediumAmethystBudBlock>();
    block->facing = MediumAmethystBudBlock::FACING_UP;
    block->waterlogged = MediumAmethystBudBlock::WATERLOGGED_TRUE;
    registry[18653] = block;
  }

  { // ID: 18654
    std::shared_ptr<MediumAmethystBudBlock> block = std::make_shared<MediumAmethystBudBlock>();
    block->facing = MediumAmethystBudBlock::FACING_UP;
    block->waterlogged = MediumAmethystBudBlock::WATERLOGGED_FALSE;
    registry[18654] = block;
  }

  { // ID: 18655
    std::shared_ptr<MediumAmethystBudBlock> block = std::make_shared<MediumAmethystBudBlock>();
    block->facing = MediumAmethystBudBlock::FACING_DOWN;
    block->waterlogged = MediumAmethystBudBlock::WATERLOGGED_TRUE;
    registry[18655] = block;
  }

  { // ID: 18656
    std::shared_ptr<MediumAmethystBudBlock> block = std::make_shared<MediumAmethystBudBlock>();
    block->facing = MediumAmethystBudBlock::FACING_DOWN;
    block->waterlogged = MediumAmethystBudBlock::WATERLOGGED_FALSE;
    registry[18656] = block;
  }

  { // ID: 19716
    std::shared_ptr<MossCarpetBlock> block = std::make_shared<MossCarpetBlock>();
    registry[19716] = block;
  }

  { // ID: 19717
    std::shared_ptr<MossBlockBlock> block = std::make_shared<MossBlockBlock>();
    registry[19717] = block;
  }

  { // ID: 19777
    std::shared_ptr<MudBlock> block = std::make_shared<MudBlock>();
    registry[19777] = block;
  }
}