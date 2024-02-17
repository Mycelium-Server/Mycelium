

#include "block_registry.h"

#include "quartz_block_block.h"
#include "quartz_bricks_block.h"
#include "quartz_pillar_block.h"
#include "quartz_slab_block.h"
#include "quartz_stairs_block.h"

void BlockRegistry::generateQ() {

  { // ID: 7355
    std::shared_ptr<QuartzBlockBlock> block = std::make_shared<QuartzBlockBlock>();
    registry[7355] = block;
  }

  { // ID: 7357
    std::shared_ptr<QuartzPillarBlock> block = std::make_shared<QuartzPillarBlock>();
    block->axis = QuartzPillarBlock::AXIS_X;
    registry[7357] = block;
  }

  { // ID: 7358
    std::shared_ptr<QuartzPillarBlock> block = std::make_shared<QuartzPillarBlock>();
    block->axis = QuartzPillarBlock::AXIS_Y;
    registry[7358] = block;
  }

  { // ID: 7359
    std::shared_ptr<QuartzPillarBlock> block = std::make_shared<QuartzPillarBlock>();
    block->axis = QuartzPillarBlock::AXIS_Z;
    registry[7359] = block;
  }

  { // ID: 7360
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_NORTH;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7360] = block;
  }

  { // ID: 7361
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_NORTH;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7361] = block;
  }

  { // ID: 7362
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_NORTH;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7362] = block;
  }

  { // ID: 7363
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_NORTH;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7363] = block;
  }

  { // ID: 7364
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_NORTH;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7364] = block;
  }

  { // ID: 7365
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_NORTH;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7365] = block;
  }

  { // ID: 7366
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_NORTH;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7366] = block;
  }

  { // ID: 7367
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_NORTH;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7367] = block;
  }

  { // ID: 7368
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_NORTH;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7368] = block;
  }

  { // ID: 7369
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_NORTH;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7369] = block;
  }

  { // ID: 7370
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_NORTH;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7370] = block;
  }

  { // ID: 7371
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_NORTH;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7371] = block;
  }

  { // ID: 7372
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_NORTH;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7372] = block;
  }

  { // ID: 7373
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_NORTH;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7373] = block;
  }

  { // ID: 7374
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_NORTH;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7374] = block;
  }

  { // ID: 7375
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_NORTH;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7375] = block;
  }

  { // ID: 7376
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_NORTH;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7376] = block;
  }

  { // ID: 7377
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_NORTH;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7377] = block;
  }

  { // ID: 7378
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_NORTH;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7378] = block;
  }

  { // ID: 7379
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_NORTH;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7379] = block;
  }

  { // ID: 7380
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_SOUTH;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7380] = block;
  }

  { // ID: 7381
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_SOUTH;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7381] = block;
  }

  { // ID: 7382
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_SOUTH;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7382] = block;
  }

  { // ID: 7383
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_SOUTH;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7383] = block;
  }

  { // ID: 7384
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_SOUTH;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7384] = block;
  }

  { // ID: 7385
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_SOUTH;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7385] = block;
  }

  { // ID: 7386
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_SOUTH;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7386] = block;
  }

  { // ID: 7387
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_SOUTH;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7387] = block;
  }

  { // ID: 7388
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_SOUTH;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7388] = block;
  }

  { // ID: 7389
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_SOUTH;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7389] = block;
  }

  { // ID: 7390
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_SOUTH;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7390] = block;
  }

  { // ID: 7391
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_SOUTH;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7391] = block;
  }

  { // ID: 7392
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_SOUTH;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7392] = block;
  }

  { // ID: 7393
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_SOUTH;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7393] = block;
  }

  { // ID: 7394
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_SOUTH;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7394] = block;
  }

  { // ID: 7395
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_SOUTH;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7395] = block;
  }

  { // ID: 7396
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_SOUTH;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7396] = block;
  }

  { // ID: 7397
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_SOUTH;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7397] = block;
  }

  { // ID: 7398
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_SOUTH;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7398] = block;
  }

  { // ID: 7399
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_SOUTH;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7399] = block;
  }

  { // ID: 7400
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_WEST;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7400] = block;
  }

  { // ID: 7401
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_WEST;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7401] = block;
  }

  { // ID: 7402
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_WEST;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7402] = block;
  }

  { // ID: 7403
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_WEST;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7403] = block;
  }

  { // ID: 7404
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_WEST;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7404] = block;
  }

  { // ID: 7405
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_WEST;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7405] = block;
  }

  { // ID: 7406
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_WEST;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7406] = block;
  }

  { // ID: 7407
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_WEST;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7407] = block;
  }

  { // ID: 7408
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_WEST;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7408] = block;
  }

  { // ID: 7409
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_WEST;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7409] = block;
  }

  { // ID: 7410
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_WEST;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7410] = block;
  }

  { // ID: 7411
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_WEST;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7411] = block;
  }

  { // ID: 7412
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_WEST;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7412] = block;
  }

  { // ID: 7413
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_WEST;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7413] = block;
  }

  { // ID: 7414
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_WEST;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7414] = block;
  }

  { // ID: 7415
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_WEST;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7415] = block;
  }

  { // ID: 7416
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_WEST;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7416] = block;
  }

  { // ID: 7417
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_WEST;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7417] = block;
  }

  { // ID: 7418
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_WEST;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7418] = block;
  }

  { // ID: 7419
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_WEST;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7419] = block;
  }

  { // ID: 7420
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_EAST;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7420] = block;
  }

  { // ID: 7421
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_EAST;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7421] = block;
  }

  { // ID: 7422
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_EAST;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7422] = block;
  }

  { // ID: 7423
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_EAST;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7423] = block;
  }

  { // ID: 7424
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_EAST;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7424] = block;
  }

  { // ID: 7425
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_EAST;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7425] = block;
  }

  { // ID: 7426
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_EAST;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7426] = block;
  }

  { // ID: 7427
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_EAST;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7427] = block;
  }

  { // ID: 7428
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_EAST;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7428] = block;
  }

  { // ID: 7429
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_EAST;
    block->half = QuartzStairsBlock::HALF_TOP;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7429] = block;
  }

  { // ID: 7430
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_EAST;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7430] = block;
  }

  { // ID: 7431
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_EAST;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7431] = block;
  }

  { // ID: 7432
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_EAST;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7432] = block;
  }

  { // ID: 7433
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_EAST;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7433] = block;
  }

  { // ID: 7434
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_EAST;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7434] = block;
  }

  { // ID: 7435
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_EAST;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7435] = block;
  }

  { // ID: 7436
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_EAST;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7436] = block;
  }

  { // ID: 7437
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_EAST;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7437] = block;
  }

  { // ID: 7438
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_EAST;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_TRUE;
    registry[7438] = block;
  }

  { // ID: 7439
    std::shared_ptr<QuartzStairsBlock> block = std::make_shared<QuartzStairsBlock>();
    block->facing = QuartzStairsBlock::FACING_EAST;
    block->half = QuartzStairsBlock::HALF_BOTTOM;
    block->shape = QuartzStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = QuartzStairsBlock::WATERLOGGED_FALSE;
    registry[7439] = block;
  }

  { // ID: 9143
    std::shared_ptr<QuartzSlabBlock> block = std::make_shared<QuartzSlabBlock>();
    block->type = QuartzSlabBlock::TYPE_TOP;
    block->waterlogged = QuartzSlabBlock::WATERLOGGED_TRUE;
    registry[9143] = block;
  }

  { // ID: 9144
    std::shared_ptr<QuartzSlabBlock> block = std::make_shared<QuartzSlabBlock>();
    block->type = QuartzSlabBlock::TYPE_TOP;
    block->waterlogged = QuartzSlabBlock::WATERLOGGED_FALSE;
    registry[9144] = block;
  }

  { // ID: 9145
    std::shared_ptr<QuartzSlabBlock> block = std::make_shared<QuartzSlabBlock>();
    block->type = QuartzSlabBlock::TYPE_BOTTOM;
    block->waterlogged = QuartzSlabBlock::WATERLOGGED_TRUE;
    registry[9145] = block;
  }

  { // ID: 9146
    std::shared_ptr<QuartzSlabBlock> block = std::make_shared<QuartzSlabBlock>();
    block->type = QuartzSlabBlock::TYPE_BOTTOM;
    block->waterlogged = QuartzSlabBlock::WATERLOGGED_FALSE;
    registry[9146] = block;
  }

  { // ID: 9147
    std::shared_ptr<QuartzSlabBlock> block = std::make_shared<QuartzSlabBlock>();
    block->type = QuartzSlabBlock::TYPE_DOUBLE;
    block->waterlogged = QuartzSlabBlock::WATERLOGGED_TRUE;
    registry[9147] = block;
  }

  { // ID: 9148
    std::shared_ptr<QuartzSlabBlock> block = std::make_shared<QuartzSlabBlock>();
    block->type = QuartzSlabBlock::TYPE_DOUBLE;
    block->waterlogged = QuartzSlabBlock::WATERLOGGED_FALSE;
    registry[9148] = block;
  }

  { // ID: 18312
    std::shared_ptr<QuartzBricksBlock> block = std::make_shared<QuartzBricksBlock>();
    registry[18312] = block;
  }
}