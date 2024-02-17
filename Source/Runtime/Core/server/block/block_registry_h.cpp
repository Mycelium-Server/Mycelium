

#include "block_registry.h"

#include "hanging_roots_block.h"
#include "hay_block_block.h"
#include "heavy_weighted_pressure_plate_block.h"
#include "honey_block_block.h"
#include "honeycomb_block_block.h"
#include "hopper_block.h"
#include "horn_coral_block.h"
#include "horn_coral_block_block.h"
#include "horn_coral_fan_block.h"
#include "horn_coral_wall_fan_block.h"

void BlockRegistry::generateH() {

  { // ID: 7279
    std::shared_ptr<HeavyWeightedPressurePlateBlock> block = std::make_shared<HeavyWeightedPressurePlateBlock>();
    block->power = HeavyWeightedPressurePlateBlock::POWER_0;
    registry[7279] = block;
  }

  { // ID: 7280
    std::shared_ptr<HeavyWeightedPressurePlateBlock> block = std::make_shared<HeavyWeightedPressurePlateBlock>();
    block->power = HeavyWeightedPressurePlateBlock::POWER_1;
    registry[7280] = block;
  }

  { // ID: 7281
    std::shared_ptr<HeavyWeightedPressurePlateBlock> block = std::make_shared<HeavyWeightedPressurePlateBlock>();
    block->power = HeavyWeightedPressurePlateBlock::POWER_2;
    registry[7281] = block;
  }

  { // ID: 7282
    std::shared_ptr<HeavyWeightedPressurePlateBlock> block = std::make_shared<HeavyWeightedPressurePlateBlock>();
    block->power = HeavyWeightedPressurePlateBlock::POWER_3;
    registry[7282] = block;
  }

  { // ID: 7283
    std::shared_ptr<HeavyWeightedPressurePlateBlock> block = std::make_shared<HeavyWeightedPressurePlateBlock>();
    block->power = HeavyWeightedPressurePlateBlock::POWER_4;
    registry[7283] = block;
  }

  { // ID: 7284
    std::shared_ptr<HeavyWeightedPressurePlateBlock> block = std::make_shared<HeavyWeightedPressurePlateBlock>();
    block->power = HeavyWeightedPressurePlateBlock::POWER_5;
    registry[7284] = block;
  }

  { // ID: 7285
    std::shared_ptr<HeavyWeightedPressurePlateBlock> block = std::make_shared<HeavyWeightedPressurePlateBlock>();
    block->power = HeavyWeightedPressurePlateBlock::POWER_6;
    registry[7285] = block;
  }

  { // ID: 7286
    std::shared_ptr<HeavyWeightedPressurePlateBlock> block = std::make_shared<HeavyWeightedPressurePlateBlock>();
    block->power = HeavyWeightedPressurePlateBlock::POWER_7;
    registry[7286] = block;
  }

  { // ID: 7287
    std::shared_ptr<HeavyWeightedPressurePlateBlock> block = std::make_shared<HeavyWeightedPressurePlateBlock>();
    block->power = HeavyWeightedPressurePlateBlock::POWER_8;
    registry[7287] = block;
  }

  { // ID: 7288
    std::shared_ptr<HeavyWeightedPressurePlateBlock> block = std::make_shared<HeavyWeightedPressurePlateBlock>();
    block->power = HeavyWeightedPressurePlateBlock::POWER_9;
    registry[7288] = block;
  }

  { // ID: 7289
    std::shared_ptr<HeavyWeightedPressurePlateBlock> block = std::make_shared<HeavyWeightedPressurePlateBlock>();
    block->power = HeavyWeightedPressurePlateBlock::POWER_10;
    registry[7289] = block;
  }

  { // ID: 7290
    std::shared_ptr<HeavyWeightedPressurePlateBlock> block = std::make_shared<HeavyWeightedPressurePlateBlock>();
    block->power = HeavyWeightedPressurePlateBlock::POWER_11;
    registry[7290] = block;
  }

  { // ID: 7291
    std::shared_ptr<HeavyWeightedPressurePlateBlock> block = std::make_shared<HeavyWeightedPressurePlateBlock>();
    block->power = HeavyWeightedPressurePlateBlock::POWER_12;
    registry[7291] = block;
  }

  { // ID: 7292
    std::shared_ptr<HeavyWeightedPressurePlateBlock> block = std::make_shared<HeavyWeightedPressurePlateBlock>();
    block->power = HeavyWeightedPressurePlateBlock::POWER_13;
    registry[7292] = block;
  }

  { // ID: 7293
    std::shared_ptr<HeavyWeightedPressurePlateBlock> block = std::make_shared<HeavyWeightedPressurePlateBlock>();
    block->power = HeavyWeightedPressurePlateBlock::POWER_14;
    registry[7293] = block;
  }

  { // ID: 7294
    std::shared_ptr<HeavyWeightedPressurePlateBlock> block = std::make_shared<HeavyWeightedPressurePlateBlock>();
    block->power = HeavyWeightedPressurePlateBlock::POWER_15;
    registry[7294] = block;
  }

  { // ID: 7345
    std::shared_ptr<HopperBlock> block = std::make_shared<HopperBlock>();
    block->enabled = HopperBlock::ENABLED_TRUE;
    block->facing = HopperBlock::FACING_DOWN;
    registry[7345] = block;
  }

  { // ID: 7346
    std::shared_ptr<HopperBlock> block = std::make_shared<HopperBlock>();
    block->enabled = HopperBlock::ENABLED_TRUE;
    block->facing = HopperBlock::FACING_NORTH;
    registry[7346] = block;
  }

  { // ID: 7347
    std::shared_ptr<HopperBlock> block = std::make_shared<HopperBlock>();
    block->enabled = HopperBlock::ENABLED_TRUE;
    block->facing = HopperBlock::FACING_SOUTH;
    registry[7347] = block;
  }

  { // ID: 7348
    std::shared_ptr<HopperBlock> block = std::make_shared<HopperBlock>();
    block->enabled = HopperBlock::ENABLED_TRUE;
    block->facing = HopperBlock::FACING_WEST;
    registry[7348] = block;
  }

  { // ID: 7349
    std::shared_ptr<HopperBlock> block = std::make_shared<HopperBlock>();
    block->enabled = HopperBlock::ENABLED_TRUE;
    block->facing = HopperBlock::FACING_EAST;
    registry[7349] = block;
  }

  { // ID: 7350
    std::shared_ptr<HopperBlock> block = std::make_shared<HopperBlock>();
    block->enabled = HopperBlock::ENABLED_FALSE;
    block->facing = HopperBlock::FACING_DOWN;
    registry[7350] = block;
  }

  { // ID: 7351
    std::shared_ptr<HopperBlock> block = std::make_shared<HopperBlock>();
    block->enabled = HopperBlock::ENABLED_FALSE;
    block->facing = HopperBlock::FACING_NORTH;
    registry[7351] = block;
  }

  { // ID: 7352
    std::shared_ptr<HopperBlock> block = std::make_shared<HopperBlock>();
    block->enabled = HopperBlock::ENABLED_FALSE;
    block->facing = HopperBlock::FACING_SOUTH;
    registry[7352] = block;
  }

  { // ID: 7353
    std::shared_ptr<HopperBlock> block = std::make_shared<HopperBlock>();
    block->enabled = HopperBlock::ENABLED_FALSE;
    block->facing = HopperBlock::FACING_WEST;
    registry[7353] = block;
  }

  { // ID: 7354
    std::shared_ptr<HopperBlock> block = std::make_shared<HopperBlock>();
    block->enabled = HopperBlock::ENABLED_FALSE;
    block->facing = HopperBlock::FACING_EAST;
    registry[7354] = block;
  }

  { // ID: 8604
    std::shared_ptr<HayBlockBlock> block = std::make_shared<HayBlockBlock>();
    block->axis = HayBlockBlock::AXIS_X;
    registry[8604] = block;
  }

  { // ID: 8605
    std::shared_ptr<HayBlockBlock> block = std::make_shared<HayBlockBlock>();
    block->axis = HayBlockBlock::AXIS_Y;
    registry[8605] = block;
  }

  { // ID: 8606
    std::shared_ptr<HayBlockBlock> block = std::make_shared<HayBlockBlock>();
    block->axis = HayBlockBlock::AXIS_Z;
    registry[8606] = block;
  }

  { // ID: 10400
    std::shared_ptr<HornCoralBlockBlock> block = std::make_shared<HornCoralBlockBlock>();
    registry[10400] = block;
  }

  { // ID: 10419
    std::shared_ptr<HornCoralBlock> block = std::make_shared<HornCoralBlock>();
    block->waterlogged = HornCoralBlock::WATERLOGGED_TRUE;
    registry[10419] = block;
  }

  { // ID: 10420
    std::shared_ptr<HornCoralBlock> block = std::make_shared<HornCoralBlock>();
    block->waterlogged = HornCoralBlock::WATERLOGGED_FALSE;
    registry[10420] = block;
  }

  { // ID: 10439
    std::shared_ptr<HornCoralFanBlock> block = std::make_shared<HornCoralFanBlock>();
    block->waterlogged = HornCoralFanBlock::WATERLOGGED_TRUE;
    registry[10439] = block;
  }

  { // ID: 10440
    std::shared_ptr<HornCoralFanBlock> block = std::make_shared<HornCoralFanBlock>();
    block->waterlogged = HornCoralFanBlock::WATERLOGGED_FALSE;
    registry[10440] = block;
  }

  { // ID: 10513
    std::shared_ptr<HornCoralWallFanBlock> block = std::make_shared<HornCoralWallFanBlock>();
    block->facing = HornCoralWallFanBlock::FACING_NORTH;
    block->waterlogged = HornCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10513] = block;
  }

  { // ID: 10514
    std::shared_ptr<HornCoralWallFanBlock> block = std::make_shared<HornCoralWallFanBlock>();
    block->facing = HornCoralWallFanBlock::FACING_NORTH;
    block->waterlogged = HornCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10514] = block;
  }

  { // ID: 10515
    std::shared_ptr<HornCoralWallFanBlock> block = std::make_shared<HornCoralWallFanBlock>();
    block->facing = HornCoralWallFanBlock::FACING_SOUTH;
    block->waterlogged = HornCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10515] = block;
  }

  { // ID: 10516
    std::shared_ptr<HornCoralWallFanBlock> block = std::make_shared<HornCoralWallFanBlock>();
    block->facing = HornCoralWallFanBlock::FACING_SOUTH;
    block->waterlogged = HornCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10516] = block;
  }

  { // ID: 10517
    std::shared_ptr<HornCoralWallFanBlock> block = std::make_shared<HornCoralWallFanBlock>();
    block->facing = HornCoralWallFanBlock::FACING_WEST;
    block->waterlogged = HornCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10517] = block;
  }

  { // ID: 10518
    std::shared_ptr<HornCoralWallFanBlock> block = std::make_shared<HornCoralWallFanBlock>();
    block->facing = HornCoralWallFanBlock::FACING_WEST;
    block->waterlogged = HornCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10518] = block;
  }

  { // ID: 10519
    std::shared_ptr<HornCoralWallFanBlock> block = std::make_shared<HornCoralWallFanBlock>();
    block->facing = HornCoralWallFanBlock::FACING_EAST;
    block->waterlogged = HornCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10519] = block;
  }

  { // ID: 10520
    std::shared_ptr<HornCoralWallFanBlock> block = std::make_shared<HornCoralWallFanBlock>();
    block->facing = HornCoralWallFanBlock::FACING_EAST;
    block->waterlogged = HornCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10520] = block;
  }

  { // ID: 17033
    std::shared_ptr<HoneyBlockBlock> block = std::make_shared<HoneyBlockBlock>();
    registry[17033] = block;
  }

  { // ID: 17034
    std::shared_ptr<HoneycombBlockBlock> block = std::make_shared<HoneycombBlockBlock>();
    registry[17034] = block;
  }

  { // ID: 19774
    std::shared_ptr<HangingRootsBlock> block = std::make_shared<HangingRootsBlock>();
    block->waterlogged = HangingRootsBlock::WATERLOGGED_TRUE;
    registry[19774] = block;
  }

  { // ID: 19775
    std::shared_ptr<HangingRootsBlock> block = std::make_shared<HangingRootsBlock>();
    block->waterlogged = HangingRootsBlock::WATERLOGGED_FALSE;
    registry[19775] = block;
  }
}