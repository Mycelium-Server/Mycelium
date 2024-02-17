

#include "block_registry.h"

#include "rail_block.h"
#include "raw_copper_block_block.h"
#include "raw_gold_block_block.h"
#include "raw_iron_block_block.h"
#include "red_banner_block.h"
#include "red_bed_block.h"
#include "red_candle_block.h"
#include "red_candle_cake_block.h"
#include "red_carpet_block.h"
#include "red_concrete_block.h"
#include "red_concrete_powder_block.h"
#include "red_glazed_terracotta_block.h"
#include "red_mushroom_block.h"
#include "red_mushroom_block_block.h"
#include "red_nether_brick_slab_block.h"
#include "red_nether_brick_stairs_block.h"
#include "red_nether_brick_wall_block.h"
#include "red_nether_bricks_block.h"
#include "red_sand_block.h"
#include "red_sandstone_block.h"
#include "red_sandstone_slab_block.h"
#include "red_sandstone_stairs_block.h"
#include "red_sandstone_wall_block.h"
#include "red_shulker_box_block.h"
#include "red_stained_glass_block.h"
#include "red_stained_glass_pane_block.h"
#include "red_terracotta_block.h"
#include "red_tulip_block.h"
#include "red_wall_banner_block.h"
#include "red_wool_block.h"
#include "redstone_block_block.h"
#include "redstone_lamp_block.h"
#include "redstone_ore_block.h"
#include "redstone_torch_block.h"
#include "redstone_wall_torch_block.h"
#include "redstone_wire_block.h"
#include "reinforced_deepslate_block.h"
#include "repeater_block.h"
#include "repeating_command_block_block.h"
#include "respawn_anchor_block.h"
#include "rooted_dirt_block.h"
#include "rose_bush_block.h"

void BlockRegistry::generateR() {

  { // ID: 108
    std::shared_ptr<RedSandBlock> block = std::make_shared<RedSandBlock>();
    registry[108] = block;
  }

  { // ID: 1503
    std::shared_ptr<RedBedBlock> block = std::make_shared<RedBedBlock>();
    block->facing = RedBedBlock::FACING_NORTH;
    block->occupied = RedBedBlock::OCCUPIED_TRUE;
    block->part = RedBedBlock::PART_HEAD;
    registry[1503] = block;
  }

  { // ID: 1504
    std::shared_ptr<RedBedBlock> block = std::make_shared<RedBedBlock>();
    block->facing = RedBedBlock::FACING_NORTH;
    block->occupied = RedBedBlock::OCCUPIED_TRUE;
    block->part = RedBedBlock::PART_FOOT;
    registry[1504] = block;
  }

  { // ID: 1505
    std::shared_ptr<RedBedBlock> block = std::make_shared<RedBedBlock>();
    block->facing = RedBedBlock::FACING_NORTH;
    block->occupied = RedBedBlock::OCCUPIED_FALSE;
    block->part = RedBedBlock::PART_HEAD;
    registry[1505] = block;
  }

  { // ID: 1506
    std::shared_ptr<RedBedBlock> block = std::make_shared<RedBedBlock>();
    block->facing = RedBedBlock::FACING_NORTH;
    block->occupied = RedBedBlock::OCCUPIED_FALSE;
    block->part = RedBedBlock::PART_FOOT;
    registry[1506] = block;
  }

  { // ID: 1507
    std::shared_ptr<RedBedBlock> block = std::make_shared<RedBedBlock>();
    block->facing = RedBedBlock::FACING_SOUTH;
    block->occupied = RedBedBlock::OCCUPIED_TRUE;
    block->part = RedBedBlock::PART_HEAD;
    registry[1507] = block;
  }

  { // ID: 1508
    std::shared_ptr<RedBedBlock> block = std::make_shared<RedBedBlock>();
    block->facing = RedBedBlock::FACING_SOUTH;
    block->occupied = RedBedBlock::OCCUPIED_TRUE;
    block->part = RedBedBlock::PART_FOOT;
    registry[1508] = block;
  }

  { // ID: 1509
    std::shared_ptr<RedBedBlock> block = std::make_shared<RedBedBlock>();
    block->facing = RedBedBlock::FACING_SOUTH;
    block->occupied = RedBedBlock::OCCUPIED_FALSE;
    block->part = RedBedBlock::PART_HEAD;
    registry[1509] = block;
  }

  { // ID: 1510
    std::shared_ptr<RedBedBlock> block = std::make_shared<RedBedBlock>();
    block->facing = RedBedBlock::FACING_SOUTH;
    block->occupied = RedBedBlock::OCCUPIED_FALSE;
    block->part = RedBedBlock::PART_FOOT;
    registry[1510] = block;
  }

  { // ID: 1511
    std::shared_ptr<RedBedBlock> block = std::make_shared<RedBedBlock>();
    block->facing = RedBedBlock::FACING_WEST;
    block->occupied = RedBedBlock::OCCUPIED_TRUE;
    block->part = RedBedBlock::PART_HEAD;
    registry[1511] = block;
  }

  { // ID: 1512
    std::shared_ptr<RedBedBlock> block = std::make_shared<RedBedBlock>();
    block->facing = RedBedBlock::FACING_WEST;
    block->occupied = RedBedBlock::OCCUPIED_TRUE;
    block->part = RedBedBlock::PART_FOOT;
    registry[1512] = block;
  }

  { // ID: 1513
    std::shared_ptr<RedBedBlock> block = std::make_shared<RedBedBlock>();
    block->facing = RedBedBlock::FACING_WEST;
    block->occupied = RedBedBlock::OCCUPIED_FALSE;
    block->part = RedBedBlock::PART_HEAD;
    registry[1513] = block;
  }

  { // ID: 1514
    std::shared_ptr<RedBedBlock> block = std::make_shared<RedBedBlock>();
    block->facing = RedBedBlock::FACING_WEST;
    block->occupied = RedBedBlock::OCCUPIED_FALSE;
    block->part = RedBedBlock::PART_FOOT;
    registry[1514] = block;
  }

  { // ID: 1515
    std::shared_ptr<RedBedBlock> block = std::make_shared<RedBedBlock>();
    block->facing = RedBedBlock::FACING_EAST;
    block->occupied = RedBedBlock::OCCUPIED_TRUE;
    block->part = RedBedBlock::PART_HEAD;
    registry[1515] = block;
  }

  { // ID: 1516
    std::shared_ptr<RedBedBlock> block = std::make_shared<RedBedBlock>();
    block->facing = RedBedBlock::FACING_EAST;
    block->occupied = RedBedBlock::OCCUPIED_TRUE;
    block->part = RedBedBlock::PART_FOOT;
    registry[1516] = block;
  }

  { // ID: 1517
    std::shared_ptr<RedBedBlock> block = std::make_shared<RedBedBlock>();
    block->facing = RedBedBlock::FACING_EAST;
    block->occupied = RedBedBlock::OCCUPIED_FALSE;
    block->part = RedBedBlock::PART_HEAD;
    registry[1517] = block;
  }

  { // ID: 1518
    std::shared_ptr<RedBedBlock> block = std::make_shared<RedBedBlock>();
    block->facing = RedBedBlock::FACING_EAST;
    block->occupied = RedBedBlock::OCCUPIED_FALSE;
    block->part = RedBedBlock::PART_FOOT;
    registry[1518] = block;
  }

  { // ID: 1652
    std::shared_ptr<RedWoolBlock> block = std::make_shared<RedWoolBlock>();
    registry[1652] = block;
  }

  { // ID: 1671
    std::shared_ptr<RedTulipBlock> block = std::make_shared<RedTulipBlock>();
    registry[1671] = block;
  }

  { // ID: 1680
    std::shared_ptr<RedMushroomBlock> block = std::make_shared<RedMushroomBlock>();
    registry[1680] = block;
  }

  { // ID: 2312
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2312] = block;
  }

  { // ID: 2313
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2313] = block;
  }

  { // ID: 2314
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2314] = block;
  }

  { // ID: 2315
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2315] = block;
  }

  { // ID: 2316
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2316] = block;
  }

  { // ID: 2317
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2317] = block;
  }

  { // ID: 2318
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2318] = block;
  }

  { // ID: 2319
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2319] = block;
  }

  { // ID: 2320
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2320] = block;
  }

  { // ID: 2321
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2321] = block;
  }

  { // ID: 2322
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2322] = block;
  }

  { // ID: 2323
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2323] = block;
  }

  { // ID: 2324
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2324] = block;
  }

  { // ID: 2325
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2325] = block;
  }

  { // ID: 2326
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2326] = block;
  }

  { // ID: 2327
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2327] = block;
  }

  { // ID: 2328
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2328] = block;
  }

  { // ID: 2329
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2329] = block;
  }

  { // ID: 2330
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2330] = block;
  }

  { // ID: 2331
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2331] = block;
  }

  { // ID: 2332
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2332] = block;
  }

  { // ID: 2333
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2333] = block;
  }

  { // ID: 2334
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2334] = block;
  }

  { // ID: 2335
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2335] = block;
  }

  { // ID: 2336
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2336] = block;
  }

  { // ID: 2337
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2337] = block;
  }

  { // ID: 2338
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2338] = block;
  }

  { // ID: 2339
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2339] = block;
  }

  { // ID: 2340
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2340] = block;
  }

  { // ID: 2341
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2341] = block;
  }

  { // ID: 2342
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2342] = block;
  }

  { // ID: 2343
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2343] = block;
  }

  { // ID: 2344
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2344] = block;
  }

  { // ID: 2345
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2345] = block;
  }

  { // ID: 2346
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2346] = block;
  }

  { // ID: 2347
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2347] = block;
  }

  { // ID: 2348
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2348] = block;
  }

  { // ID: 2349
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2349] = block;
  }

  { // ID: 2350
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2350] = block;
  }

  { // ID: 2351
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2351] = block;
  }

  { // ID: 2352
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2352] = block;
  }

  { // ID: 2353
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2353] = block;
  }

  { // ID: 2354
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2354] = block;
  }

  { // ID: 2355
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2355] = block;
  }

  { // ID: 2356
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2356] = block;
  }

  { // ID: 2357
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2357] = block;
  }

  { // ID: 2358
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2358] = block;
  }

  { // ID: 2359
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2359] = block;
  }

  { // ID: 2360
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2360] = block;
  }

  { // ID: 2361
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2361] = block;
  }

  { // ID: 2362
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2362] = block;
  }

  { // ID: 2363
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2363] = block;
  }

  { // ID: 2364
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2364] = block;
  }

  { // ID: 2365
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2365] = block;
  }

  { // ID: 2366
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2366] = block;
  }

  { // ID: 2367
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2367] = block;
  }

  { // ID: 2368
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2368] = block;
  }

  { // ID: 2369
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2369] = block;
  }

  { // ID: 2370
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2370] = block;
  }

  { // ID: 2371
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2371] = block;
  }

  { // ID: 2372
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2372] = block;
  }

  { // ID: 2373
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2373] = block;
  }

  { // ID: 2374
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2374] = block;
  }

  { // ID: 2375
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2375] = block;
  }

  { // ID: 2376
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2376] = block;
  }

  { // ID: 2377
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2377] = block;
  }

  { // ID: 2378
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2378] = block;
  }

  { // ID: 2379
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2379] = block;
  }

  { // ID: 2380
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2380] = block;
  }

  { // ID: 2381
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2381] = block;
  }

  { // ID: 2382
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2382] = block;
  }

  { // ID: 2383
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2383] = block;
  }

  { // ID: 2384
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2384] = block;
  }

  { // ID: 2385
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2385] = block;
  }

  { // ID: 2386
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2386] = block;
  }

  { // ID: 2387
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2387] = block;
  }

  { // ID: 2388
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2388] = block;
  }

  { // ID: 2389
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2389] = block;
  }

  { // ID: 2390
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2390] = block;
  }

  { // ID: 2391
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2391] = block;
  }

  { // ID: 2392
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2392] = block;
  }

  { // ID: 2393
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2393] = block;
  }

  { // ID: 2394
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2394] = block;
  }

  { // ID: 2395
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2395] = block;
  }

  { // ID: 2396
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2396] = block;
  }

  { // ID: 2397
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2397] = block;
  }

  { // ID: 2398
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2398] = block;
  }

  { // ID: 2399
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2399] = block;
  }

  { // ID: 2400
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2400] = block;
  }

  { // ID: 2401
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2401] = block;
  }

  { // ID: 2402
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2402] = block;
  }

  { // ID: 2403
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2403] = block;
  }

  { // ID: 2404
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2404] = block;
  }

  { // ID: 2405
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2405] = block;
  }

  { // ID: 2406
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2406] = block;
  }

  { // ID: 2407
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2407] = block;
  }

  { // ID: 2408
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2408] = block;
  }

  { // ID: 2409
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2409] = block;
  }

  { // ID: 2410
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2410] = block;
  }

  { // ID: 2411
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2411] = block;
  }

  { // ID: 2412
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2412] = block;
  }

  { // ID: 2413
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2413] = block;
  }

  { // ID: 2414
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2414] = block;
  }

  { // ID: 2415
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2415] = block;
  }

  { // ID: 2416
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2416] = block;
  }

  { // ID: 2417
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2417] = block;
  }

  { // ID: 2418
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2418] = block;
  }

  { // ID: 2419
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2419] = block;
  }

  { // ID: 2420
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2420] = block;
  }

  { // ID: 2421
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2421] = block;
  }

  { // ID: 2422
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2422] = block;
  }

  { // ID: 2423
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2423] = block;
  }

  { // ID: 2424
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2424] = block;
  }

  { // ID: 2425
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2425] = block;
  }

  { // ID: 2426
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2426] = block;
  }

  { // ID: 2427
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2427] = block;
  }

  { // ID: 2428
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2428] = block;
  }

  { // ID: 2429
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2429] = block;
  }

  { // ID: 2430
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2430] = block;
  }

  { // ID: 2431
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2431] = block;
  }

  { // ID: 2432
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2432] = block;
  }

  { // ID: 2433
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2433] = block;
  }

  { // ID: 2434
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2434] = block;
  }

  { // ID: 2435
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2435] = block;
  }

  { // ID: 2436
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2436] = block;
  }

  { // ID: 2437
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2437] = block;
  }

  { // ID: 2438
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2438] = block;
  }

  { // ID: 2439
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2439] = block;
  }

  { // ID: 2440
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2440] = block;
  }

  { // ID: 2441
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2441] = block;
  }

  { // ID: 2442
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2442] = block;
  }

  { // ID: 2443
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2443] = block;
  }

  { // ID: 2444
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2444] = block;
  }

  { // ID: 2445
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2445] = block;
  }

  { // ID: 2446
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2446] = block;
  }

  { // ID: 2447
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2447] = block;
  }

  { // ID: 2448
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2448] = block;
  }

  { // ID: 2449
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2449] = block;
  }

  { // ID: 2450
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2450] = block;
  }

  { // ID: 2451
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2451] = block;
  }

  { // ID: 2452
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2452] = block;
  }

  { // ID: 2453
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2453] = block;
  }

  { // ID: 2454
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2454] = block;
  }

  { // ID: 2455
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2455] = block;
  }

  { // ID: 2456
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2456] = block;
  }

  { // ID: 2457
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2457] = block;
  }

  { // ID: 2458
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2458] = block;
  }

  { // ID: 2459
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2459] = block;
  }

  { // ID: 2460
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2460] = block;
  }

  { // ID: 2461
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2461] = block;
  }

  { // ID: 2462
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2462] = block;
  }

  { // ID: 2463
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2463] = block;
  }

  { // ID: 2464
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2464] = block;
  }

  { // ID: 2465
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2465] = block;
  }

  { // ID: 2466
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2466] = block;
  }

  { // ID: 2467
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2467] = block;
  }

  { // ID: 2468
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2468] = block;
  }

  { // ID: 2469
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2469] = block;
  }

  { // ID: 2470
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2470] = block;
  }

  { // ID: 2471
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2471] = block;
  }

  { // ID: 2472
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2472] = block;
  }

  { // ID: 2473
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2473] = block;
  }

  { // ID: 2474
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2474] = block;
  }

  { // ID: 2475
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2475] = block;
  }

  { // ID: 2476
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2476] = block;
  }

  { // ID: 2477
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2477] = block;
  }

  { // ID: 2478
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2478] = block;
  }

  { // ID: 2479
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2479] = block;
  }

  { // ID: 2480
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2480] = block;
  }

  { // ID: 2481
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2481] = block;
  }

  { // ID: 2482
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2482] = block;
  }

  { // ID: 2483
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2483] = block;
  }

  { // ID: 2484
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2484] = block;
  }

  { // ID: 2485
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2485] = block;
  }

  { // ID: 2486
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2486] = block;
  }

  { // ID: 2487
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2487] = block;
  }

  { // ID: 2488
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2488] = block;
  }

  { // ID: 2489
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2489] = block;
  }

  { // ID: 2490
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2490] = block;
  }

  { // ID: 2491
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2491] = block;
  }

  { // ID: 2492
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2492] = block;
  }

  { // ID: 2493
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2493] = block;
  }

  { // ID: 2494
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2494] = block;
  }

  { // ID: 2495
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2495] = block;
  }

  { // ID: 2496
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2496] = block;
  }

  { // ID: 2497
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2497] = block;
  }

  { // ID: 2498
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2498] = block;
  }

  { // ID: 2499
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2499] = block;
  }

  { // ID: 2500
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2500] = block;
  }

  { // ID: 2501
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2501] = block;
  }

  { // ID: 2502
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2502] = block;
  }

  { // ID: 2503
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2503] = block;
  }

  { // ID: 2504
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2504] = block;
  }

  { // ID: 2505
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2505] = block;
  }

  { // ID: 2506
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2506] = block;
  }

  { // ID: 2507
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2507] = block;
  }

  { // ID: 2508
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2508] = block;
  }

  { // ID: 2509
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2509] = block;
  }

  { // ID: 2510
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2510] = block;
  }

  { // ID: 2511
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2511] = block;
  }

  { // ID: 2512
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2512] = block;
  }

  { // ID: 2513
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2513] = block;
  }

  { // ID: 2514
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2514] = block;
  }

  { // ID: 2515
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2515] = block;
  }

  { // ID: 2516
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2516] = block;
  }

  { // ID: 2517
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2517] = block;
  }

  { // ID: 2518
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2518] = block;
  }

  { // ID: 2519
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2519] = block;
  }

  { // ID: 2520
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2520] = block;
  }

  { // ID: 2521
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2521] = block;
  }

  { // ID: 2522
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2522] = block;
  }

  { // ID: 2523
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2523] = block;
  }

  { // ID: 2524
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2524] = block;
  }

  { // ID: 2525
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2525] = block;
  }

  { // ID: 2526
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2526] = block;
  }

  { // ID: 2527
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2527] = block;
  }

  { // ID: 2528
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2528] = block;
  }

  { // ID: 2529
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2529] = block;
  }

  { // ID: 2530
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2530] = block;
  }

  { // ID: 2531
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2531] = block;
  }

  { // ID: 2532
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2532] = block;
  }

  { // ID: 2533
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2533] = block;
  }

  { // ID: 2534
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2534] = block;
  }

  { // ID: 2535
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2535] = block;
  }

  { // ID: 2536
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2536] = block;
  }

  { // ID: 2537
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2537] = block;
  }

  { // ID: 2538
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2538] = block;
  }

  { // ID: 2539
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2539] = block;
  }

  { // ID: 2540
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2540] = block;
  }

  { // ID: 2541
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2541] = block;
  }

  { // ID: 2542
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2542] = block;
  }

  { // ID: 2543
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2543] = block;
  }

  { // ID: 2544
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2544] = block;
  }

  { // ID: 2545
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2545] = block;
  }

  { // ID: 2546
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2546] = block;
  }

  { // ID: 2547
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2547] = block;
  }

  { // ID: 2548
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2548] = block;
  }

  { // ID: 2549
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2549] = block;
  }

  { // ID: 2550
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2550] = block;
  }

  { // ID: 2551
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2551] = block;
  }

  { // ID: 2552
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2552] = block;
  }

  { // ID: 2553
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2553] = block;
  }

  { // ID: 2554
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2554] = block;
  }

  { // ID: 2555
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2555] = block;
  }

  { // ID: 2556
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2556] = block;
  }

  { // ID: 2557
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2557] = block;
  }

  { // ID: 2558
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2558] = block;
  }

  { // ID: 2559
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2559] = block;
  }

  { // ID: 2560
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2560] = block;
  }

  { // ID: 2561
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2561] = block;
  }

  { // ID: 2562
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2562] = block;
  }

  { // ID: 2563
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2563] = block;
  }

  { // ID: 2564
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2564] = block;
  }

  { // ID: 2565
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2565] = block;
  }

  { // ID: 2566
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2566] = block;
  }

  { // ID: 2567
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2567] = block;
  }

  { // ID: 2568
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2568] = block;
  }

  { // ID: 2569
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2569] = block;
  }

  { // ID: 2570
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2570] = block;
  }

  { // ID: 2571
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2571] = block;
  }

  { // ID: 2572
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2572] = block;
  }

  { // ID: 2573
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2573] = block;
  }

  { // ID: 2574
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2574] = block;
  }

  { // ID: 2575
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2575] = block;
  }

  { // ID: 2576
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2576] = block;
  }

  { // ID: 2577
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2577] = block;
  }

  { // ID: 2578
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2578] = block;
  }

  { // ID: 2579
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2579] = block;
  }

  { // ID: 2580
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2580] = block;
  }

  { // ID: 2581
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2581] = block;
  }

  { // ID: 2582
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2582] = block;
  }

  { // ID: 2583
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2583] = block;
  }

  { // ID: 2584
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2584] = block;
  }

  { // ID: 2585
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2585] = block;
  }

  { // ID: 2586
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2586] = block;
  }

  { // ID: 2587
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2587] = block;
  }

  { // ID: 2588
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2588] = block;
  }

  { // ID: 2589
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2589] = block;
  }

  { // ID: 2590
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2590] = block;
  }

  { // ID: 2591
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2591] = block;
  }

  { // ID: 2592
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2592] = block;
  }

  { // ID: 2593
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2593] = block;
  }

  { // ID: 2594
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2594] = block;
  }

  { // ID: 2595
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2595] = block;
  }

  { // ID: 2596
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2596] = block;
  }

  { // ID: 2597
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2597] = block;
  }

  { // ID: 2598
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2598] = block;
  }

  { // ID: 2599
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2599] = block;
  }

  { // ID: 2600
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2600] = block;
  }

  { // ID: 2601
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2601] = block;
  }

  { // ID: 2602
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2602] = block;
  }

  { // ID: 2603
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2603] = block;
  }

  { // ID: 2604
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2604] = block;
  }

  { // ID: 2605
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2605] = block;
  }

  { // ID: 2606
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2606] = block;
  }

  { // ID: 2607
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2607] = block;
  }

  { // ID: 2608
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2608] = block;
  }

  { // ID: 2609
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2609] = block;
  }

  { // ID: 2610
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2610] = block;
  }

  { // ID: 2611
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2611] = block;
  }

  { // ID: 2612
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2612] = block;
  }

  { // ID: 2613
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2613] = block;
  }

  { // ID: 2614
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2614] = block;
  }

  { // ID: 2615
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2615] = block;
  }

  { // ID: 2616
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2616] = block;
  }

  { // ID: 2617
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2617] = block;
  }

  { // ID: 2618
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2618] = block;
  }

  { // ID: 2619
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2619] = block;
  }

  { // ID: 2620
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2620] = block;
  }

  { // ID: 2621
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2621] = block;
  }

  { // ID: 2622
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2622] = block;
  }

  { // ID: 2623
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2623] = block;
  }

  { // ID: 2624
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2624] = block;
  }

  { // ID: 2625
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2625] = block;
  }

  { // ID: 2626
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2626] = block;
  }

  { // ID: 2627
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2627] = block;
  }

  { // ID: 2628
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2628] = block;
  }

  { // ID: 2629
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2629] = block;
  }

  { // ID: 2630
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2630] = block;
  }

  { // ID: 2631
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2631] = block;
  }

  { // ID: 2632
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2632] = block;
  }

  { // ID: 2633
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2633] = block;
  }

  { // ID: 2634
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2634] = block;
  }

  { // ID: 2635
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2635] = block;
  }

  { // ID: 2636
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2636] = block;
  }

  { // ID: 2637
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2637] = block;
  }

  { // ID: 2638
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2638] = block;
  }

  { // ID: 2639
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2639] = block;
  }

  { // ID: 2640
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2640] = block;
  }

  { // ID: 2641
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2641] = block;
  }

  { // ID: 2642
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2642] = block;
  }

  { // ID: 2643
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2643] = block;
  }

  { // ID: 2644
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2644] = block;
  }

  { // ID: 2645
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2645] = block;
  }

  { // ID: 2646
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2646] = block;
  }

  { // ID: 2647
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2647] = block;
  }

  { // ID: 2648
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2648] = block;
  }

  { // ID: 2649
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2649] = block;
  }

  { // ID: 2650
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2650] = block;
  }

  { // ID: 2651
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2651] = block;
  }

  { // ID: 2652
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2652] = block;
  }

  { // ID: 2653
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2653] = block;
  }

  { // ID: 2654
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2654] = block;
  }

  { // ID: 2655
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2655] = block;
  }

  { // ID: 2656
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2656] = block;
  }

  { // ID: 2657
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2657] = block;
  }

  { // ID: 2658
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2658] = block;
  }

  { // ID: 2659
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2659] = block;
  }

  { // ID: 2660
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2660] = block;
  }

  { // ID: 2661
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2661] = block;
  }

  { // ID: 2662
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2662] = block;
  }

  { // ID: 2663
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2663] = block;
  }

  { // ID: 2664
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2664] = block;
  }

  { // ID: 2665
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2665] = block;
  }

  { // ID: 2666
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2666] = block;
  }

  { // ID: 2667
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2667] = block;
  }

  { // ID: 2668
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2668] = block;
  }

  { // ID: 2669
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2669] = block;
  }

  { // ID: 2670
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2670] = block;
  }

  { // ID: 2671
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2671] = block;
  }

  { // ID: 2672
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2672] = block;
  }

  { // ID: 2673
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2673] = block;
  }

  { // ID: 2674
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2674] = block;
  }

  { // ID: 2675
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2675] = block;
  }

  { // ID: 2676
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2676] = block;
  }

  { // ID: 2677
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2677] = block;
  }

  { // ID: 2678
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2678] = block;
  }

  { // ID: 2679
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2679] = block;
  }

  { // ID: 2680
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2680] = block;
  }

  { // ID: 2681
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2681] = block;
  }

  { // ID: 2682
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2682] = block;
  }

  { // ID: 2683
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2683] = block;
  }

  { // ID: 2684
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2684] = block;
  }

  { // ID: 2685
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2685] = block;
  }

  { // ID: 2686
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2686] = block;
  }

  { // ID: 2687
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2687] = block;
  }

  { // ID: 2688
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2688] = block;
  }

  { // ID: 2689
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2689] = block;
  }

  { // ID: 2690
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2690] = block;
  }

  { // ID: 2691
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2691] = block;
  }

  { // ID: 2692
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2692] = block;
  }

  { // ID: 2693
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2693] = block;
  }

  { // ID: 2694
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2694] = block;
  }

  { // ID: 2695
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2695] = block;
  }

  { // ID: 2696
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2696] = block;
  }

  { // ID: 2697
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2697] = block;
  }

  { // ID: 2698
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2698] = block;
  }

  { // ID: 2699
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2699] = block;
  }

  { // ID: 2700
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2700] = block;
  }

  { // ID: 2701
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2701] = block;
  }

  { // ID: 2702
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2702] = block;
  }

  { // ID: 2703
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2703] = block;
  }

  { // ID: 2704
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2704] = block;
  }

  { // ID: 2705
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2705] = block;
  }

  { // ID: 2706
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2706] = block;
  }

  { // ID: 2707
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2707] = block;
  }

  { // ID: 2708
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2708] = block;
  }

  { // ID: 2709
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2709] = block;
  }

  { // ID: 2710
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2710] = block;
  }

  { // ID: 2711
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2711] = block;
  }

  { // ID: 2712
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2712] = block;
  }

  { // ID: 2713
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2713] = block;
  }

  { // ID: 2714
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2714] = block;
  }

  { // ID: 2715
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2715] = block;
  }

  { // ID: 2716
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2716] = block;
  }

  { // ID: 2717
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2717] = block;
  }

  { // ID: 2718
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2718] = block;
  }

  { // ID: 2719
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2719] = block;
  }

  { // ID: 2720
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2720] = block;
  }

  { // ID: 2721
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2721] = block;
  }

  { // ID: 2722
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2722] = block;
  }

  { // ID: 2723
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2723] = block;
  }

  { // ID: 2724
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2724] = block;
  }

  { // ID: 2725
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2725] = block;
  }

  { // ID: 2726
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2726] = block;
  }

  { // ID: 2727
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2727] = block;
  }

  { // ID: 2728
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2728] = block;
  }

  { // ID: 2729
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2729] = block;
  }

  { // ID: 2730
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2730] = block;
  }

  { // ID: 2731
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2731] = block;
  }

  { // ID: 2732
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2732] = block;
  }

  { // ID: 2733
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2733] = block;
  }

  { // ID: 2734
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2734] = block;
  }

  { // ID: 2735
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2735] = block;
  }

  { // ID: 2736
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2736] = block;
  }

  { // ID: 2737
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2737] = block;
  }

  { // ID: 2738
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2738] = block;
  }

  { // ID: 2739
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2739] = block;
  }

  { // ID: 2740
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2740] = block;
  }

  { // ID: 2741
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2741] = block;
  }

  { // ID: 2742
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2742] = block;
  }

  { // ID: 2743
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_UP;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2743] = block;
  }

  { // ID: 2744
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2744] = block;
  }

  { // ID: 2745
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2745] = block;
  }

  { // ID: 2746
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2746] = block;
  }

  { // ID: 2747
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2747] = block;
  }

  { // ID: 2748
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2748] = block;
  }

  { // ID: 2749
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2749] = block;
  }

  { // ID: 2750
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2750] = block;
  }

  { // ID: 2751
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2751] = block;
  }

  { // ID: 2752
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2752] = block;
  }

  { // ID: 2753
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2753] = block;
  }

  { // ID: 2754
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2754] = block;
  }

  { // ID: 2755
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2755] = block;
  }

  { // ID: 2756
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2756] = block;
  }

  { // ID: 2757
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2757] = block;
  }

  { // ID: 2758
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2758] = block;
  }

  { // ID: 2759
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2759] = block;
  }

  { // ID: 2760
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2760] = block;
  }

  { // ID: 2761
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2761] = block;
  }

  { // ID: 2762
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2762] = block;
  }

  { // ID: 2763
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2763] = block;
  }

  { // ID: 2764
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2764] = block;
  }

  { // ID: 2765
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2765] = block;
  }

  { // ID: 2766
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2766] = block;
  }

  { // ID: 2767
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2767] = block;
  }

  { // ID: 2768
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2768] = block;
  }

  { // ID: 2769
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2769] = block;
  }

  { // ID: 2770
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2770] = block;
  }

  { // ID: 2771
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2771] = block;
  }

  { // ID: 2772
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2772] = block;
  }

  { // ID: 2773
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2773] = block;
  }

  { // ID: 2774
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2774] = block;
  }

  { // ID: 2775
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2775] = block;
  }

  { // ID: 2776
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2776] = block;
  }

  { // ID: 2777
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2777] = block;
  }

  { // ID: 2778
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2778] = block;
  }

  { // ID: 2779
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2779] = block;
  }

  { // ID: 2780
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2780] = block;
  }

  { // ID: 2781
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2781] = block;
  }

  { // ID: 2782
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2782] = block;
  }

  { // ID: 2783
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2783] = block;
  }

  { // ID: 2784
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2784] = block;
  }

  { // ID: 2785
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2785] = block;
  }

  { // ID: 2786
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2786] = block;
  }

  { // ID: 2787
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2787] = block;
  }

  { // ID: 2788
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2788] = block;
  }

  { // ID: 2789
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2789] = block;
  }

  { // ID: 2790
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2790] = block;
  }

  { // ID: 2791
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2791] = block;
  }

  { // ID: 2792
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2792] = block;
  }

  { // ID: 2793
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2793] = block;
  }

  { // ID: 2794
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2794] = block;
  }

  { // ID: 2795
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2795] = block;
  }

  { // ID: 2796
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2796] = block;
  }

  { // ID: 2797
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2797] = block;
  }

  { // ID: 2798
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2798] = block;
  }

  { // ID: 2799
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2799] = block;
  }

  { // ID: 2800
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2800] = block;
  }

  { // ID: 2801
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2801] = block;
  }

  { // ID: 2802
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2802] = block;
  }

  { // ID: 2803
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2803] = block;
  }

  { // ID: 2804
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2804] = block;
  }

  { // ID: 2805
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2805] = block;
  }

  { // ID: 2806
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2806] = block;
  }

  { // ID: 2807
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2807] = block;
  }

  { // ID: 2808
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2808] = block;
  }

  { // ID: 2809
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2809] = block;
  }

  { // ID: 2810
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2810] = block;
  }

  { // ID: 2811
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2811] = block;
  }

  { // ID: 2812
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2812] = block;
  }

  { // ID: 2813
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2813] = block;
  }

  { // ID: 2814
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2814] = block;
  }

  { // ID: 2815
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2815] = block;
  }

  { // ID: 2816
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2816] = block;
  }

  { // ID: 2817
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2817] = block;
  }

  { // ID: 2818
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2818] = block;
  }

  { // ID: 2819
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2819] = block;
  }

  { // ID: 2820
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2820] = block;
  }

  { // ID: 2821
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2821] = block;
  }

  { // ID: 2822
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2822] = block;
  }

  { // ID: 2823
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2823] = block;
  }

  { // ID: 2824
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2824] = block;
  }

  { // ID: 2825
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2825] = block;
  }

  { // ID: 2826
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2826] = block;
  }

  { // ID: 2827
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2827] = block;
  }

  { // ID: 2828
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2828] = block;
  }

  { // ID: 2829
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2829] = block;
  }

  { // ID: 2830
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2830] = block;
  }

  { // ID: 2831
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2831] = block;
  }

  { // ID: 2832
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2832] = block;
  }

  { // ID: 2833
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2833] = block;
  }

  { // ID: 2834
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2834] = block;
  }

  { // ID: 2835
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2835] = block;
  }

  { // ID: 2836
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2836] = block;
  }

  { // ID: 2837
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2837] = block;
  }

  { // ID: 2838
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2838] = block;
  }

  { // ID: 2839
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2839] = block;
  }

  { // ID: 2840
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2840] = block;
  }

  { // ID: 2841
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2841] = block;
  }

  { // ID: 2842
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2842] = block;
  }

  { // ID: 2843
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2843] = block;
  }

  { // ID: 2844
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2844] = block;
  }

  { // ID: 2845
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2845] = block;
  }

  { // ID: 2846
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2846] = block;
  }

  { // ID: 2847
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2847] = block;
  }

  { // ID: 2848
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2848] = block;
  }

  { // ID: 2849
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2849] = block;
  }

  { // ID: 2850
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2850] = block;
  }

  { // ID: 2851
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2851] = block;
  }

  { // ID: 2852
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2852] = block;
  }

  { // ID: 2853
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2853] = block;
  }

  { // ID: 2854
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2854] = block;
  }

  { // ID: 2855
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2855] = block;
  }

  { // ID: 2856
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2856] = block;
  }

  { // ID: 2857
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2857] = block;
  }

  { // ID: 2858
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2858] = block;
  }

  { // ID: 2859
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2859] = block;
  }

  { // ID: 2860
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2860] = block;
  }

  { // ID: 2861
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2861] = block;
  }

  { // ID: 2862
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2862] = block;
  }

  { // ID: 2863
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2863] = block;
  }

  { // ID: 2864
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2864] = block;
  }

  { // ID: 2865
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2865] = block;
  }

  { // ID: 2866
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2866] = block;
  }

  { // ID: 2867
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2867] = block;
  }

  { // ID: 2868
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2868] = block;
  }

  { // ID: 2869
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2869] = block;
  }

  { // ID: 2870
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2870] = block;
  }

  { // ID: 2871
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2871] = block;
  }

  { // ID: 2872
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2872] = block;
  }

  { // ID: 2873
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2873] = block;
  }

  { // ID: 2874
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2874] = block;
  }

  { // ID: 2875
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2875] = block;
  }

  { // ID: 2876
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2876] = block;
  }

  { // ID: 2877
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2877] = block;
  }

  { // ID: 2878
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2878] = block;
  }

  { // ID: 2879
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2879] = block;
  }

  { // ID: 2880
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2880] = block;
  }

  { // ID: 2881
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2881] = block;
  }

  { // ID: 2882
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2882] = block;
  }

  { // ID: 2883
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2883] = block;
  }

  { // ID: 2884
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2884] = block;
  }

  { // ID: 2885
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2885] = block;
  }

  { // ID: 2886
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2886] = block;
  }

  { // ID: 2887
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2887] = block;
  }

  { // ID: 2888
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2888] = block;
  }

  { // ID: 2889
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2889] = block;
  }

  { // ID: 2890
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2890] = block;
  }

  { // ID: 2891
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2891] = block;
  }

  { // ID: 2892
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2892] = block;
  }

  { // ID: 2893
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2893] = block;
  }

  { // ID: 2894
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2894] = block;
  }

  { // ID: 2895
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2895] = block;
  }

  { // ID: 2896
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2896] = block;
  }

  { // ID: 2897
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2897] = block;
  }

  { // ID: 2898
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2898] = block;
  }

  { // ID: 2899
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2899] = block;
  }

  { // ID: 2900
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2900] = block;
  }

  { // ID: 2901
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2901] = block;
  }

  { // ID: 2902
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2902] = block;
  }

  { // ID: 2903
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2903] = block;
  }

  { // ID: 2904
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2904] = block;
  }

  { // ID: 2905
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2905] = block;
  }

  { // ID: 2906
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2906] = block;
  }

  { // ID: 2907
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2907] = block;
  }

  { // ID: 2908
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2908] = block;
  }

  { // ID: 2909
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2909] = block;
  }

  { // ID: 2910
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2910] = block;
  }

  { // ID: 2911
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2911] = block;
  }

  { // ID: 2912
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2912] = block;
  }

  { // ID: 2913
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2913] = block;
  }

  { // ID: 2914
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2914] = block;
  }

  { // ID: 2915
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2915] = block;
  }

  { // ID: 2916
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2916] = block;
  }

  { // ID: 2917
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2917] = block;
  }

  { // ID: 2918
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2918] = block;
  }

  { // ID: 2919
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2919] = block;
  }

  { // ID: 2920
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2920] = block;
  }

  { // ID: 2921
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2921] = block;
  }

  { // ID: 2922
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2922] = block;
  }

  { // ID: 2923
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2923] = block;
  }

  { // ID: 2924
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2924] = block;
  }

  { // ID: 2925
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2925] = block;
  }

  { // ID: 2926
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2926] = block;
  }

  { // ID: 2927
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2927] = block;
  }

  { // ID: 2928
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2928] = block;
  }

  { // ID: 2929
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2929] = block;
  }

  { // ID: 2930
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2930] = block;
  }

  { // ID: 2931
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2931] = block;
  }

  { // ID: 2932
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2932] = block;
  }

  { // ID: 2933
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2933] = block;
  }

  { // ID: 2934
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2934] = block;
  }

  { // ID: 2935
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2935] = block;
  }

  { // ID: 2936
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2936] = block;
  }

  { // ID: 2937
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2937] = block;
  }

  { // ID: 2938
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2938] = block;
  }

  { // ID: 2939
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2939] = block;
  }

  { // ID: 2940
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2940] = block;
  }

  { // ID: 2941
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2941] = block;
  }

  { // ID: 2942
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2942] = block;
  }

  { // ID: 2943
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2943] = block;
  }

  { // ID: 2944
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2944] = block;
  }

  { // ID: 2945
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2945] = block;
  }

  { // ID: 2946
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2946] = block;
  }

  { // ID: 2947
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2947] = block;
  }

  { // ID: 2948
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2948] = block;
  }

  { // ID: 2949
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2949] = block;
  }

  { // ID: 2950
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2950] = block;
  }

  { // ID: 2951
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2951] = block;
  }

  { // ID: 2952
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2952] = block;
  }

  { // ID: 2953
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2953] = block;
  }

  { // ID: 2954
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2954] = block;
  }

  { // ID: 2955
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2955] = block;
  }

  { // ID: 2956
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2956] = block;
  }

  { // ID: 2957
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2957] = block;
  }

  { // ID: 2958
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2958] = block;
  }

  { // ID: 2959
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2959] = block;
  }

  { // ID: 2960
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2960] = block;
  }

  { // ID: 2961
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2961] = block;
  }

  { // ID: 2962
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2962] = block;
  }

  { // ID: 2963
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2963] = block;
  }

  { // ID: 2964
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2964] = block;
  }

  { // ID: 2965
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2965] = block;
  }

  { // ID: 2966
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2966] = block;
  }

  { // ID: 2967
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2967] = block;
  }

  { // ID: 2968
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2968] = block;
  }

  { // ID: 2969
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2969] = block;
  }

  { // ID: 2970
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2970] = block;
  }

  { // ID: 2971
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2971] = block;
  }

  { // ID: 2972
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2972] = block;
  }

  { // ID: 2973
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2973] = block;
  }

  { // ID: 2974
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2974] = block;
  }

  { // ID: 2975
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2975] = block;
  }

  { // ID: 2976
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2976] = block;
  }

  { // ID: 2977
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2977] = block;
  }

  { // ID: 2978
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2978] = block;
  }

  { // ID: 2979
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2979] = block;
  }

  { // ID: 2980
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2980] = block;
  }

  { // ID: 2981
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2981] = block;
  }

  { // ID: 2982
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2982] = block;
  }

  { // ID: 2983
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2983] = block;
  }

  { // ID: 2984
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2984] = block;
  }

  { // ID: 2985
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2985] = block;
  }

  { // ID: 2986
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2986] = block;
  }

  { // ID: 2987
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2987] = block;
  }

  { // ID: 2988
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2988] = block;
  }

  { // ID: 2989
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2989] = block;
  }

  { // ID: 2990
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2990] = block;
  }

  { // ID: 2991
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2991] = block;
  }

  { // ID: 2992
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2992] = block;
  }

  { // ID: 2993
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2993] = block;
  }

  { // ID: 2994
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2994] = block;
  }

  { // ID: 2995
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2995] = block;
  }

  { // ID: 2996
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2996] = block;
  }

  { // ID: 2997
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[2997] = block;
  }

  { // ID: 2998
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[2998] = block;
  }

  { // ID: 2999
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[2999] = block;
  }

  { // ID: 3000
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3000] = block;
  }

  { // ID: 3001
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3001] = block;
  }

  { // ID: 3002
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3002] = block;
  }

  { // ID: 3003
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3003] = block;
  }

  { // ID: 3004
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3004] = block;
  }

  { // ID: 3005
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3005] = block;
  }

  { // ID: 3006
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3006] = block;
  }

  { // ID: 3007
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3007] = block;
  }

  { // ID: 3008
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3008] = block;
  }

  { // ID: 3009
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3009] = block;
  }

  { // ID: 3010
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3010] = block;
  }

  { // ID: 3011
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3011] = block;
  }

  { // ID: 3012
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3012] = block;
  }

  { // ID: 3013
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3013] = block;
  }

  { // ID: 3014
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3014] = block;
  }

  { // ID: 3015
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3015] = block;
  }

  { // ID: 3016
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3016] = block;
  }

  { // ID: 3017
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3017] = block;
  }

  { // ID: 3018
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3018] = block;
  }

  { // ID: 3019
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3019] = block;
  }

  { // ID: 3020
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3020] = block;
  }

  { // ID: 3021
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3021] = block;
  }

  { // ID: 3022
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3022] = block;
  }

  { // ID: 3023
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3023] = block;
  }

  { // ID: 3024
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3024] = block;
  }

  { // ID: 3025
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3025] = block;
  }

  { // ID: 3026
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3026] = block;
  }

  { // ID: 3027
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3027] = block;
  }

  { // ID: 3028
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3028] = block;
  }

  { // ID: 3029
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3029] = block;
  }

  { // ID: 3030
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3030] = block;
  }

  { // ID: 3031
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3031] = block;
  }

  { // ID: 3032
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3032] = block;
  }

  { // ID: 3033
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3033] = block;
  }

  { // ID: 3034
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3034] = block;
  }

  { // ID: 3035
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3035] = block;
  }

  { // ID: 3036
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3036] = block;
  }

  { // ID: 3037
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3037] = block;
  }

  { // ID: 3038
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3038] = block;
  }

  { // ID: 3039
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3039] = block;
  }

  { // ID: 3040
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3040] = block;
  }

  { // ID: 3041
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3041] = block;
  }

  { // ID: 3042
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3042] = block;
  }

  { // ID: 3043
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3043] = block;
  }

  { // ID: 3044
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3044] = block;
  }

  { // ID: 3045
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3045] = block;
  }

  { // ID: 3046
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3046] = block;
  }

  { // ID: 3047
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3047] = block;
  }

  { // ID: 3048
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3048] = block;
  }

  { // ID: 3049
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3049] = block;
  }

  { // ID: 3050
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3050] = block;
  }

  { // ID: 3051
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3051] = block;
  }

  { // ID: 3052
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3052] = block;
  }

  { // ID: 3053
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3053] = block;
  }

  { // ID: 3054
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3054] = block;
  }

  { // ID: 3055
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3055] = block;
  }

  { // ID: 3056
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3056] = block;
  }

  { // ID: 3057
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3057] = block;
  }

  { // ID: 3058
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3058] = block;
  }

  { // ID: 3059
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3059] = block;
  }

  { // ID: 3060
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3060] = block;
  }

  { // ID: 3061
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3061] = block;
  }

  { // ID: 3062
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3062] = block;
  }

  { // ID: 3063
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3063] = block;
  }

  { // ID: 3064
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3064] = block;
  }

  { // ID: 3065
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3065] = block;
  }

  { // ID: 3066
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3066] = block;
  }

  { // ID: 3067
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3067] = block;
  }

  { // ID: 3068
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3068] = block;
  }

  { // ID: 3069
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3069] = block;
  }

  { // ID: 3070
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3070] = block;
  }

  { // ID: 3071
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3071] = block;
  }

  { // ID: 3072
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3072] = block;
  }

  { // ID: 3073
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3073] = block;
  }

  { // ID: 3074
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3074] = block;
  }

  { // ID: 3075
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3075] = block;
  }

  { // ID: 3076
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3076] = block;
  }

  { // ID: 3077
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3077] = block;
  }

  { // ID: 3078
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3078] = block;
  }

  { // ID: 3079
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3079] = block;
  }

  { // ID: 3080
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3080] = block;
  }

  { // ID: 3081
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3081] = block;
  }

  { // ID: 3082
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3082] = block;
  }

  { // ID: 3083
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3083] = block;
  }

  { // ID: 3084
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3084] = block;
  }

  { // ID: 3085
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3085] = block;
  }

  { // ID: 3086
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3086] = block;
  }

  { // ID: 3087
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3087] = block;
  }

  { // ID: 3088
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3088] = block;
  }

  { // ID: 3089
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3089] = block;
  }

  { // ID: 3090
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3090] = block;
  }

  { // ID: 3091
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3091] = block;
  }

  { // ID: 3092
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3092] = block;
  }

  { // ID: 3093
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3093] = block;
  }

  { // ID: 3094
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3094] = block;
  }

  { // ID: 3095
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3095] = block;
  }

  { // ID: 3096
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3096] = block;
  }

  { // ID: 3097
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3097] = block;
  }

  { // ID: 3098
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3098] = block;
  }

  { // ID: 3099
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3099] = block;
  }

  { // ID: 3100
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3100] = block;
  }

  { // ID: 3101
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3101] = block;
  }

  { // ID: 3102
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3102] = block;
  }

  { // ID: 3103
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3103] = block;
  }

  { // ID: 3104
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3104] = block;
  }

  { // ID: 3105
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3105] = block;
  }

  { // ID: 3106
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3106] = block;
  }

  { // ID: 3107
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3107] = block;
  }

  { // ID: 3108
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3108] = block;
  }

  { // ID: 3109
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3109] = block;
  }

  { // ID: 3110
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3110] = block;
  }

  { // ID: 3111
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3111] = block;
  }

  { // ID: 3112
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3112] = block;
  }

  { // ID: 3113
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3113] = block;
  }

  { // ID: 3114
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3114] = block;
  }

  { // ID: 3115
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3115] = block;
  }

  { // ID: 3116
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3116] = block;
  }

  { // ID: 3117
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3117] = block;
  }

  { // ID: 3118
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3118] = block;
  }

  { // ID: 3119
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3119] = block;
  }

  { // ID: 3120
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3120] = block;
  }

  { // ID: 3121
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3121] = block;
  }

  { // ID: 3122
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3122] = block;
  }

  { // ID: 3123
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3123] = block;
  }

  { // ID: 3124
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3124] = block;
  }

  { // ID: 3125
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3125] = block;
  }

  { // ID: 3126
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3126] = block;
  }

  { // ID: 3127
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3127] = block;
  }

  { // ID: 3128
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3128] = block;
  }

  { // ID: 3129
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3129] = block;
  }

  { // ID: 3130
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3130] = block;
  }

  { // ID: 3131
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3131] = block;
  }

  { // ID: 3132
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3132] = block;
  }

  { // ID: 3133
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3133] = block;
  }

  { // ID: 3134
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3134] = block;
  }

  { // ID: 3135
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3135] = block;
  }

  { // ID: 3136
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3136] = block;
  }

  { // ID: 3137
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3137] = block;
  }

  { // ID: 3138
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3138] = block;
  }

  { // ID: 3139
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3139] = block;
  }

  { // ID: 3140
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3140] = block;
  }

  { // ID: 3141
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3141] = block;
  }

  { // ID: 3142
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3142] = block;
  }

  { // ID: 3143
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3143] = block;
  }

  { // ID: 3144
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3144] = block;
  }

  { // ID: 3145
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3145] = block;
  }

  { // ID: 3146
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3146] = block;
  }

  { // ID: 3147
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3147] = block;
  }

  { // ID: 3148
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3148] = block;
  }

  { // ID: 3149
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3149] = block;
  }

  { // ID: 3150
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3150] = block;
  }

  { // ID: 3151
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3151] = block;
  }

  { // ID: 3152
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3152] = block;
  }

  { // ID: 3153
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3153] = block;
  }

  { // ID: 3154
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3154] = block;
  }

  { // ID: 3155
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3155] = block;
  }

  { // ID: 3156
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3156] = block;
  }

  { // ID: 3157
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3157] = block;
  }

  { // ID: 3158
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3158] = block;
  }

  { // ID: 3159
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3159] = block;
  }

  { // ID: 3160
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3160] = block;
  }

  { // ID: 3161
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3161] = block;
  }

  { // ID: 3162
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3162] = block;
  }

  { // ID: 3163
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3163] = block;
  }

  { // ID: 3164
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3164] = block;
  }

  { // ID: 3165
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3165] = block;
  }

  { // ID: 3166
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3166] = block;
  }

  { // ID: 3167
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3167] = block;
  }

  { // ID: 3168
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3168] = block;
  }

  { // ID: 3169
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3169] = block;
  }

  { // ID: 3170
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3170] = block;
  }

  { // ID: 3171
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3171] = block;
  }

  { // ID: 3172
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3172] = block;
  }

  { // ID: 3173
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3173] = block;
  }

  { // ID: 3174
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3174] = block;
  }

  { // ID: 3175
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_SIDE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3175] = block;
  }

  { // ID: 3176
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3176] = block;
  }

  { // ID: 3177
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3177] = block;
  }

  { // ID: 3178
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3178] = block;
  }

  { // ID: 3179
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3179] = block;
  }

  { // ID: 3180
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3180] = block;
  }

  { // ID: 3181
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3181] = block;
  }

  { // ID: 3182
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3182] = block;
  }

  { // ID: 3183
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3183] = block;
  }

  { // ID: 3184
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3184] = block;
  }

  { // ID: 3185
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3185] = block;
  }

  { // ID: 3186
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3186] = block;
  }

  { // ID: 3187
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3187] = block;
  }

  { // ID: 3188
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3188] = block;
  }

  { // ID: 3189
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3189] = block;
  }

  { // ID: 3190
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3190] = block;
  }

  { // ID: 3191
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3191] = block;
  }

  { // ID: 3192
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3192] = block;
  }

  { // ID: 3193
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3193] = block;
  }

  { // ID: 3194
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3194] = block;
  }

  { // ID: 3195
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3195] = block;
  }

  { // ID: 3196
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3196] = block;
  }

  { // ID: 3197
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3197] = block;
  }

  { // ID: 3198
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3198] = block;
  }

  { // ID: 3199
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3199] = block;
  }

  { // ID: 3200
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3200] = block;
  }

  { // ID: 3201
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3201] = block;
  }

  { // ID: 3202
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3202] = block;
  }

  { // ID: 3203
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3203] = block;
  }

  { // ID: 3204
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3204] = block;
  }

  { // ID: 3205
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3205] = block;
  }

  { // ID: 3206
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3206] = block;
  }

  { // ID: 3207
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3207] = block;
  }

  { // ID: 3208
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3208] = block;
  }

  { // ID: 3209
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3209] = block;
  }

  { // ID: 3210
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3210] = block;
  }

  { // ID: 3211
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3211] = block;
  }

  { // ID: 3212
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3212] = block;
  }

  { // ID: 3213
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3213] = block;
  }

  { // ID: 3214
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3214] = block;
  }

  { // ID: 3215
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3215] = block;
  }

  { // ID: 3216
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3216] = block;
  }

  { // ID: 3217
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3217] = block;
  }

  { // ID: 3218
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3218] = block;
  }

  { // ID: 3219
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3219] = block;
  }

  { // ID: 3220
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3220] = block;
  }

  { // ID: 3221
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3221] = block;
  }

  { // ID: 3222
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3222] = block;
  }

  { // ID: 3223
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3223] = block;
  }

  { // ID: 3224
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3224] = block;
  }

  { // ID: 3225
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3225] = block;
  }

  { // ID: 3226
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3226] = block;
  }

  { // ID: 3227
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3227] = block;
  }

  { // ID: 3228
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3228] = block;
  }

  { // ID: 3229
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3229] = block;
  }

  { // ID: 3230
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3230] = block;
  }

  { // ID: 3231
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3231] = block;
  }

  { // ID: 3232
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3232] = block;
  }

  { // ID: 3233
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3233] = block;
  }

  { // ID: 3234
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3234] = block;
  }

  { // ID: 3235
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3235] = block;
  }

  { // ID: 3236
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3236] = block;
  }

  { // ID: 3237
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3237] = block;
  }

  { // ID: 3238
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3238] = block;
  }

  { // ID: 3239
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3239] = block;
  }

  { // ID: 3240
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3240] = block;
  }

  { // ID: 3241
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3241] = block;
  }

  { // ID: 3242
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3242] = block;
  }

  { // ID: 3243
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3243] = block;
  }

  { // ID: 3244
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3244] = block;
  }

  { // ID: 3245
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3245] = block;
  }

  { // ID: 3246
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3246] = block;
  }

  { // ID: 3247
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3247] = block;
  }

  { // ID: 3248
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3248] = block;
  }

  { // ID: 3249
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3249] = block;
  }

  { // ID: 3250
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3250] = block;
  }

  { // ID: 3251
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3251] = block;
  }

  { // ID: 3252
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3252] = block;
  }

  { // ID: 3253
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3253] = block;
  }

  { // ID: 3254
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3254] = block;
  }

  { // ID: 3255
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3255] = block;
  }

  { // ID: 3256
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3256] = block;
  }

  { // ID: 3257
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3257] = block;
  }

  { // ID: 3258
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3258] = block;
  }

  { // ID: 3259
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3259] = block;
  }

  { // ID: 3260
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3260] = block;
  }

  { // ID: 3261
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3261] = block;
  }

  { // ID: 3262
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3262] = block;
  }

  { // ID: 3263
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3263] = block;
  }

  { // ID: 3264
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3264] = block;
  }

  { // ID: 3265
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3265] = block;
  }

  { // ID: 3266
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3266] = block;
  }

  { // ID: 3267
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3267] = block;
  }

  { // ID: 3268
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3268] = block;
  }

  { // ID: 3269
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3269] = block;
  }

  { // ID: 3270
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3270] = block;
  }

  { // ID: 3271
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3271] = block;
  }

  { // ID: 3272
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3272] = block;
  }

  { // ID: 3273
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3273] = block;
  }

  { // ID: 3274
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3274] = block;
  }

  { // ID: 3275
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3275] = block;
  }

  { // ID: 3276
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3276] = block;
  }

  { // ID: 3277
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3277] = block;
  }

  { // ID: 3278
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3278] = block;
  }

  { // ID: 3279
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3279] = block;
  }

  { // ID: 3280
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3280] = block;
  }

  { // ID: 3281
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3281] = block;
  }

  { // ID: 3282
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3282] = block;
  }

  { // ID: 3283
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3283] = block;
  }

  { // ID: 3284
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3284] = block;
  }

  { // ID: 3285
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3285] = block;
  }

  { // ID: 3286
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3286] = block;
  }

  { // ID: 3287
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3287] = block;
  }

  { // ID: 3288
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3288] = block;
  }

  { // ID: 3289
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3289] = block;
  }

  { // ID: 3290
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3290] = block;
  }

  { // ID: 3291
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3291] = block;
  }

  { // ID: 3292
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3292] = block;
  }

  { // ID: 3293
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3293] = block;
  }

  { // ID: 3294
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3294] = block;
  }

  { // ID: 3295
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3295] = block;
  }

  { // ID: 3296
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3296] = block;
  }

  { // ID: 3297
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3297] = block;
  }

  { // ID: 3298
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3298] = block;
  }

  { // ID: 3299
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3299] = block;
  }

  { // ID: 3300
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3300] = block;
  }

  { // ID: 3301
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3301] = block;
  }

  { // ID: 3302
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3302] = block;
  }

  { // ID: 3303
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3303] = block;
  }

  { // ID: 3304
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3304] = block;
  }

  { // ID: 3305
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3305] = block;
  }

  { // ID: 3306
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3306] = block;
  }

  { // ID: 3307
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3307] = block;
  }

  { // ID: 3308
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3308] = block;
  }

  { // ID: 3309
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3309] = block;
  }

  { // ID: 3310
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3310] = block;
  }

  { // ID: 3311
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3311] = block;
  }

  { // ID: 3312
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3312] = block;
  }

  { // ID: 3313
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3313] = block;
  }

  { // ID: 3314
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3314] = block;
  }

  { // ID: 3315
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3315] = block;
  }

  { // ID: 3316
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3316] = block;
  }

  { // ID: 3317
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3317] = block;
  }

  { // ID: 3318
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3318] = block;
  }

  { // ID: 3319
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_UP;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3319] = block;
  }

  { // ID: 3320
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3320] = block;
  }

  { // ID: 3321
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3321] = block;
  }

  { // ID: 3322
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3322] = block;
  }

  { // ID: 3323
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3323] = block;
  }

  { // ID: 3324
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3324] = block;
  }

  { // ID: 3325
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3325] = block;
  }

  { // ID: 3326
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3326] = block;
  }

  { // ID: 3327
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3327] = block;
  }

  { // ID: 3328
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3328] = block;
  }

  { // ID: 3329
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3329] = block;
  }

  { // ID: 3330
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3330] = block;
  }

  { // ID: 3331
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3331] = block;
  }

  { // ID: 3332
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3332] = block;
  }

  { // ID: 3333
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3333] = block;
  }

  { // ID: 3334
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3334] = block;
  }

  { // ID: 3335
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3335] = block;
  }

  { // ID: 3336
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3336] = block;
  }

  { // ID: 3337
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3337] = block;
  }

  { // ID: 3338
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3338] = block;
  }

  { // ID: 3339
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3339] = block;
  }

  { // ID: 3340
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3340] = block;
  }

  { // ID: 3341
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3341] = block;
  }

  { // ID: 3342
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3342] = block;
  }

  { // ID: 3343
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3343] = block;
  }

  { // ID: 3344
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3344] = block;
  }

  { // ID: 3345
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3345] = block;
  }

  { // ID: 3346
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3346] = block;
  }

  { // ID: 3347
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3347] = block;
  }

  { // ID: 3348
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3348] = block;
  }

  { // ID: 3349
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3349] = block;
  }

  { // ID: 3350
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3350] = block;
  }

  { // ID: 3351
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3351] = block;
  }

  { // ID: 3352
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3352] = block;
  }

  { // ID: 3353
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3353] = block;
  }

  { // ID: 3354
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3354] = block;
  }

  { // ID: 3355
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3355] = block;
  }

  { // ID: 3356
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3356] = block;
  }

  { // ID: 3357
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3357] = block;
  }

  { // ID: 3358
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3358] = block;
  }

  { // ID: 3359
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3359] = block;
  }

  { // ID: 3360
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3360] = block;
  }

  { // ID: 3361
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3361] = block;
  }

  { // ID: 3362
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3362] = block;
  }

  { // ID: 3363
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3363] = block;
  }

  { // ID: 3364
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3364] = block;
  }

  { // ID: 3365
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3365] = block;
  }

  { // ID: 3366
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3366] = block;
  }

  { // ID: 3367
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3367] = block;
  }

  { // ID: 3368
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3368] = block;
  }

  { // ID: 3369
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3369] = block;
  }

  { // ID: 3370
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3370] = block;
  }

  { // ID: 3371
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3371] = block;
  }

  { // ID: 3372
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3372] = block;
  }

  { // ID: 3373
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3373] = block;
  }

  { // ID: 3374
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3374] = block;
  }

  { // ID: 3375
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3375] = block;
  }

  { // ID: 3376
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3376] = block;
  }

  { // ID: 3377
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3377] = block;
  }

  { // ID: 3378
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3378] = block;
  }

  { // ID: 3379
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3379] = block;
  }

  { // ID: 3380
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3380] = block;
  }

  { // ID: 3381
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3381] = block;
  }

  { // ID: 3382
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3382] = block;
  }

  { // ID: 3383
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3383] = block;
  }

  { // ID: 3384
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3384] = block;
  }

  { // ID: 3385
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3385] = block;
  }

  { // ID: 3386
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3386] = block;
  }

  { // ID: 3387
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3387] = block;
  }

  { // ID: 3388
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3388] = block;
  }

  { // ID: 3389
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3389] = block;
  }

  { // ID: 3390
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3390] = block;
  }

  { // ID: 3391
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3391] = block;
  }

  { // ID: 3392
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3392] = block;
  }

  { // ID: 3393
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3393] = block;
  }

  { // ID: 3394
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3394] = block;
  }

  { // ID: 3395
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3395] = block;
  }

  { // ID: 3396
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3396] = block;
  }

  { // ID: 3397
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3397] = block;
  }

  { // ID: 3398
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3398] = block;
  }

  { // ID: 3399
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3399] = block;
  }

  { // ID: 3400
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3400] = block;
  }

  { // ID: 3401
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3401] = block;
  }

  { // ID: 3402
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3402] = block;
  }

  { // ID: 3403
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3403] = block;
  }

  { // ID: 3404
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3404] = block;
  }

  { // ID: 3405
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3405] = block;
  }

  { // ID: 3406
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3406] = block;
  }

  { // ID: 3407
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3407] = block;
  }

  { // ID: 3408
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3408] = block;
  }

  { // ID: 3409
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3409] = block;
  }

  { // ID: 3410
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3410] = block;
  }

  { // ID: 3411
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3411] = block;
  }

  { // ID: 3412
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3412] = block;
  }

  { // ID: 3413
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3413] = block;
  }

  { // ID: 3414
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3414] = block;
  }

  { // ID: 3415
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3415] = block;
  }

  { // ID: 3416
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3416] = block;
  }

  { // ID: 3417
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3417] = block;
  }

  { // ID: 3418
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3418] = block;
  }

  { // ID: 3419
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3419] = block;
  }

  { // ID: 3420
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3420] = block;
  }

  { // ID: 3421
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3421] = block;
  }

  { // ID: 3422
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3422] = block;
  }

  { // ID: 3423
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3423] = block;
  }

  { // ID: 3424
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3424] = block;
  }

  { // ID: 3425
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3425] = block;
  }

  { // ID: 3426
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3426] = block;
  }

  { // ID: 3427
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3427] = block;
  }

  { // ID: 3428
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3428] = block;
  }

  { // ID: 3429
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3429] = block;
  }

  { // ID: 3430
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3430] = block;
  }

  { // ID: 3431
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3431] = block;
  }

  { // ID: 3432
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3432] = block;
  }

  { // ID: 3433
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3433] = block;
  }

  { // ID: 3434
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3434] = block;
  }

  { // ID: 3435
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3435] = block;
  }

  { // ID: 3436
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3436] = block;
  }

  { // ID: 3437
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3437] = block;
  }

  { // ID: 3438
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3438] = block;
  }

  { // ID: 3439
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3439] = block;
  }

  { // ID: 3440
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3440] = block;
  }

  { // ID: 3441
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3441] = block;
  }

  { // ID: 3442
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3442] = block;
  }

  { // ID: 3443
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3443] = block;
  }

  { // ID: 3444
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3444] = block;
  }

  { // ID: 3445
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3445] = block;
  }

  { // ID: 3446
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3446] = block;
  }

  { // ID: 3447
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3447] = block;
  }

  { // ID: 3448
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3448] = block;
  }

  { // ID: 3449
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3449] = block;
  }

  { // ID: 3450
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3450] = block;
  }

  { // ID: 3451
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3451] = block;
  }

  { // ID: 3452
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3452] = block;
  }

  { // ID: 3453
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3453] = block;
  }

  { // ID: 3454
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3454] = block;
  }

  { // ID: 3455
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3455] = block;
  }

  { // ID: 3456
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3456] = block;
  }

  { // ID: 3457
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3457] = block;
  }

  { // ID: 3458
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3458] = block;
  }

  { // ID: 3459
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3459] = block;
  }

  { // ID: 3460
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3460] = block;
  }

  { // ID: 3461
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3461] = block;
  }

  { // ID: 3462
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3462] = block;
  }

  { // ID: 3463
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_SIDE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3463] = block;
  }

  { // ID: 3464
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3464] = block;
  }

  { // ID: 3465
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3465] = block;
  }

  { // ID: 3466
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3466] = block;
  }

  { // ID: 3467
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3467] = block;
  }

  { // ID: 3468
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3468] = block;
  }

  { // ID: 3469
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3469] = block;
  }

  { // ID: 3470
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3470] = block;
  }

  { // ID: 3471
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3471] = block;
  }

  { // ID: 3472
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_0;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3472] = block;
  }

  { // ID: 3473
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3473] = block;
  }

  { // ID: 3474
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3474] = block;
  }

  { // ID: 3475
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3475] = block;
  }

  { // ID: 3476
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3476] = block;
  }

  { // ID: 3477
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3477] = block;
  }

  { // ID: 3478
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3478] = block;
  }

  { // ID: 3479
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3479] = block;
  }

  { // ID: 3480
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3480] = block;
  }

  { // ID: 3481
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_1;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3481] = block;
  }

  { // ID: 3482
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3482] = block;
  }

  { // ID: 3483
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3483] = block;
  }

  { // ID: 3484
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3484] = block;
  }

  { // ID: 3485
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3485] = block;
  }

  { // ID: 3486
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3486] = block;
  }

  { // ID: 3487
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3487] = block;
  }

  { // ID: 3488
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3488] = block;
  }

  { // ID: 3489
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3489] = block;
  }

  { // ID: 3490
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_2;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3490] = block;
  }

  { // ID: 3491
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3491] = block;
  }

  { // ID: 3492
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3492] = block;
  }

  { // ID: 3493
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3493] = block;
  }

  { // ID: 3494
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3494] = block;
  }

  { // ID: 3495
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3495] = block;
  }

  { // ID: 3496
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3496] = block;
  }

  { // ID: 3497
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3497] = block;
  }

  { // ID: 3498
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3498] = block;
  }

  { // ID: 3499
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_3;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3499] = block;
  }

  { // ID: 3500
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3500] = block;
  }

  { // ID: 3501
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3501] = block;
  }

  { // ID: 3502
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3502] = block;
  }

  { // ID: 3503
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3503] = block;
  }

  { // ID: 3504
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3504] = block;
  }

  { // ID: 3505
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3505] = block;
  }

  { // ID: 3506
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3506] = block;
  }

  { // ID: 3507
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3507] = block;
  }

  { // ID: 3508
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_4;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3508] = block;
  }

  { // ID: 3509
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3509] = block;
  }

  { // ID: 3510
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3510] = block;
  }

  { // ID: 3511
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3511] = block;
  }

  { // ID: 3512
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3512] = block;
  }

  { // ID: 3513
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3513] = block;
  }

  { // ID: 3514
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3514] = block;
  }

  { // ID: 3515
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3515] = block;
  }

  { // ID: 3516
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3516] = block;
  }

  { // ID: 3517
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_5;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3517] = block;
  }

  { // ID: 3518
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3518] = block;
  }

  { // ID: 3519
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3519] = block;
  }

  { // ID: 3520
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3520] = block;
  }

  { // ID: 3521
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3521] = block;
  }

  { // ID: 3522
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3522] = block;
  }

  { // ID: 3523
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3523] = block;
  }

  { // ID: 3524
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3524] = block;
  }

  { // ID: 3525
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3525] = block;
  }

  { // ID: 3526
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_6;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3526] = block;
  }

  { // ID: 3527
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3527] = block;
  }

  { // ID: 3528
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3528] = block;
  }

  { // ID: 3529
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3529] = block;
  }

  { // ID: 3530
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3530] = block;
  }

  { // ID: 3531
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3531] = block;
  }

  { // ID: 3532
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3532] = block;
  }

  { // ID: 3533
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3533] = block;
  }

  { // ID: 3534
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3534] = block;
  }

  { // ID: 3535
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_7;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3535] = block;
  }

  { // ID: 3536
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3536] = block;
  }

  { // ID: 3537
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3537] = block;
  }

  { // ID: 3538
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3538] = block;
  }

  { // ID: 3539
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3539] = block;
  }

  { // ID: 3540
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3540] = block;
  }

  { // ID: 3541
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3541] = block;
  }

  { // ID: 3542
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3542] = block;
  }

  { // ID: 3543
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3543] = block;
  }

  { // ID: 3544
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_8;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3544] = block;
  }

  { // ID: 3545
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3545] = block;
  }

  { // ID: 3546
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3546] = block;
  }

  { // ID: 3547
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3547] = block;
  }

  { // ID: 3548
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3548] = block;
  }

  { // ID: 3549
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3549] = block;
  }

  { // ID: 3550
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3550] = block;
  }

  { // ID: 3551
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3551] = block;
  }

  { // ID: 3552
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3552] = block;
  }

  { // ID: 3553
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_9;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3553] = block;
  }

  { // ID: 3554
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3554] = block;
  }

  { // ID: 3555
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3555] = block;
  }

  { // ID: 3556
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3556] = block;
  }

  { // ID: 3557
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3557] = block;
  }

  { // ID: 3558
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3558] = block;
  }

  { // ID: 3559
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3559] = block;
  }

  { // ID: 3560
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3560] = block;
  }

  { // ID: 3561
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3561] = block;
  }

  { // ID: 3562
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_10;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3562] = block;
  }

  { // ID: 3563
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3563] = block;
  }

  { // ID: 3564
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3564] = block;
  }

  { // ID: 3565
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3565] = block;
  }

  { // ID: 3566
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3566] = block;
  }

  { // ID: 3567
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3567] = block;
  }

  { // ID: 3568
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3568] = block;
  }

  { // ID: 3569
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3569] = block;
  }

  { // ID: 3570
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3570] = block;
  }

  { // ID: 3571
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_11;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3571] = block;
  }

  { // ID: 3572
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3572] = block;
  }

  { // ID: 3573
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3573] = block;
  }

  { // ID: 3574
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3574] = block;
  }

  { // ID: 3575
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3575] = block;
  }

  { // ID: 3576
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3576] = block;
  }

  { // ID: 3577
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3577] = block;
  }

  { // ID: 3578
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3578] = block;
  }

  { // ID: 3579
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3579] = block;
  }

  { // ID: 3580
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_12;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3580] = block;
  }

  { // ID: 3581
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3581] = block;
  }

  { // ID: 3582
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3582] = block;
  }

  { // ID: 3583
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3583] = block;
  }

  { // ID: 3584
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3584] = block;
  }

  { // ID: 3585
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3585] = block;
  }

  { // ID: 3586
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3586] = block;
  }

  { // ID: 3587
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3587] = block;
  }

  { // ID: 3588
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3588] = block;
  }

  { // ID: 3589
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_13;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3589] = block;
  }

  { // ID: 3590
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3590] = block;
  }

  { // ID: 3591
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3591] = block;
  }

  { // ID: 3592
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3592] = block;
  }

  { // ID: 3593
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3593] = block;
  }

  { // ID: 3594
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3594] = block;
  }

  { // ID: 3595
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3595] = block;
  }

  { // ID: 3596
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3596] = block;
  }

  { // ID: 3597
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3597] = block;
  }

  { // ID: 3598
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_14;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3598] = block;
  }

  { // ID: 3599
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3599] = block;
  }

  { // ID: 3600
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3600] = block;
  }

  { // ID: 3601
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_UP;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3601] = block;
  }

  { // ID: 3602
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3602] = block;
  }

  { // ID: 3603
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3603] = block;
  }

  { // ID: 3604
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_SIDE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3604] = block;
  }

  { // ID: 3605
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_UP;
    registry[3605] = block;
  }

  { // ID: 3606
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_SIDE;
    registry[3606] = block;
  }

  { // ID: 3607
    std::shared_ptr<RedstoneWireBlock> block = std::make_shared<RedstoneWireBlock>();
    block->east = RedstoneWireBlock::EAST_NONE;
    block->north = RedstoneWireBlock::NORTH_NONE;
    block->power = RedstoneWireBlock::POWER_15;
    block->south = RedstoneWireBlock::SOUTH_NONE;
    block->west = RedstoneWireBlock::WEST_NONE;
    registry[3607] = block;
  }

  { // ID: 3932
    std::shared_ptr<RailBlock> block = std::make_shared<RailBlock>();
    block->shape = RailBlock::SHAPE_NORTH_SOUTH;
    block->waterlogged = RailBlock::WATERLOGGED_TRUE;
    registry[3932] = block;
  }

  { // ID: 3933
    std::shared_ptr<RailBlock> block = std::make_shared<RailBlock>();
    block->shape = RailBlock::SHAPE_NORTH_SOUTH;
    block->waterlogged = RailBlock::WATERLOGGED_FALSE;
    registry[3933] = block;
  }

  { // ID: 3934
    std::shared_ptr<RailBlock> block = std::make_shared<RailBlock>();
    block->shape = RailBlock::SHAPE_EAST_WEST;
    block->waterlogged = RailBlock::WATERLOGGED_TRUE;
    registry[3934] = block;
  }

  { // ID: 3935
    std::shared_ptr<RailBlock> block = std::make_shared<RailBlock>();
    block->shape = RailBlock::SHAPE_EAST_WEST;
    block->waterlogged = RailBlock::WATERLOGGED_FALSE;
    registry[3935] = block;
  }

  { // ID: 3936
    std::shared_ptr<RailBlock> block = std::make_shared<RailBlock>();
    block->shape = RailBlock::SHAPE_ASCENDING_EAST;
    block->waterlogged = RailBlock::WATERLOGGED_TRUE;
    registry[3936] = block;
  }

  { // ID: 3937
    std::shared_ptr<RailBlock> block = std::make_shared<RailBlock>();
    block->shape = RailBlock::SHAPE_ASCENDING_EAST;
    block->waterlogged = RailBlock::WATERLOGGED_FALSE;
    registry[3937] = block;
  }

  { // ID: 3938
    std::shared_ptr<RailBlock> block = std::make_shared<RailBlock>();
    block->shape = RailBlock::SHAPE_ASCENDING_WEST;
    block->waterlogged = RailBlock::WATERLOGGED_TRUE;
    registry[3938] = block;
  }

  { // ID: 3939
    std::shared_ptr<RailBlock> block = std::make_shared<RailBlock>();
    block->shape = RailBlock::SHAPE_ASCENDING_WEST;
    block->waterlogged = RailBlock::WATERLOGGED_FALSE;
    registry[3939] = block;
  }

  { // ID: 3940
    std::shared_ptr<RailBlock> block = std::make_shared<RailBlock>();
    block->shape = RailBlock::SHAPE_ASCENDING_NORTH;
    block->waterlogged = RailBlock::WATERLOGGED_TRUE;
    registry[3940] = block;
  }

  { // ID: 3941
    std::shared_ptr<RailBlock> block = std::make_shared<RailBlock>();
    block->shape = RailBlock::SHAPE_ASCENDING_NORTH;
    block->waterlogged = RailBlock::WATERLOGGED_FALSE;
    registry[3941] = block;
  }

  { // ID: 3942
    std::shared_ptr<RailBlock> block = std::make_shared<RailBlock>();
    block->shape = RailBlock::SHAPE_ASCENDING_SOUTH;
    block->waterlogged = RailBlock::WATERLOGGED_TRUE;
    registry[3942] = block;
  }

  { // ID: 3943
    std::shared_ptr<RailBlock> block = std::make_shared<RailBlock>();
    block->shape = RailBlock::SHAPE_ASCENDING_SOUTH;
    block->waterlogged = RailBlock::WATERLOGGED_FALSE;
    registry[3943] = block;
  }

  { // ID: 3944
    std::shared_ptr<RailBlock> block = std::make_shared<RailBlock>();
    block->shape = RailBlock::SHAPE_SOUTH_EAST;
    block->waterlogged = RailBlock::WATERLOGGED_TRUE;
    registry[3944] = block;
  }

  { // ID: 3945
    std::shared_ptr<RailBlock> block = std::make_shared<RailBlock>();
    block->shape = RailBlock::SHAPE_SOUTH_EAST;
    block->waterlogged = RailBlock::WATERLOGGED_FALSE;
    registry[3945] = block;
  }

  { // ID: 3946
    std::shared_ptr<RailBlock> block = std::make_shared<RailBlock>();
    block->shape = RailBlock::SHAPE_SOUTH_WEST;
    block->waterlogged = RailBlock::WATERLOGGED_TRUE;
    registry[3946] = block;
  }

  { // ID: 3947
    std::shared_ptr<RailBlock> block = std::make_shared<RailBlock>();
    block->shape = RailBlock::SHAPE_SOUTH_WEST;
    block->waterlogged = RailBlock::WATERLOGGED_FALSE;
    registry[3947] = block;
  }

  { // ID: 3948
    std::shared_ptr<RailBlock> block = std::make_shared<RailBlock>();
    block->shape = RailBlock::SHAPE_NORTH_WEST;
    block->waterlogged = RailBlock::WATERLOGGED_TRUE;
    registry[3948] = block;
  }

  { // ID: 3949
    std::shared_ptr<RailBlock> block = std::make_shared<RailBlock>();
    block->shape = RailBlock::SHAPE_NORTH_WEST;
    block->waterlogged = RailBlock::WATERLOGGED_FALSE;
    registry[3949] = block;
  }

  { // ID: 3950
    std::shared_ptr<RailBlock> block = std::make_shared<RailBlock>();
    block->shape = RailBlock::SHAPE_NORTH_EAST;
    block->waterlogged = RailBlock::WATERLOGGED_TRUE;
    registry[3950] = block;
  }

  { // ID: 3951
    std::shared_ptr<RailBlock> block = std::make_shared<RailBlock>();
    block->shape = RailBlock::SHAPE_NORTH_EAST;
    block->waterlogged = RailBlock::WATERLOGGED_FALSE;
    registry[3951] = block;
  }

  { // ID: 4192
    std::shared_ptr<RedstoneOreBlock> block = std::make_shared<RedstoneOreBlock>();
    block->lit = RedstoneOreBlock::LIT_TRUE;
    registry[4192] = block;
  }

  { // ID: 4193
    std::shared_ptr<RedstoneOreBlock> block = std::make_shared<RedstoneOreBlock>();
    block->lit = RedstoneOreBlock::LIT_FALSE;
    registry[4193] = block;
  }

  { // ID: 4196
    std::shared_ptr<RedstoneTorchBlock> block = std::make_shared<RedstoneTorchBlock>();
    block->lit = RedstoneTorchBlock::LIT_TRUE;
    registry[4196] = block;
  }

  { // ID: 4197
    std::shared_ptr<RedstoneTorchBlock> block = std::make_shared<RedstoneTorchBlock>();
    block->lit = RedstoneTorchBlock::LIT_FALSE;
    registry[4197] = block;
  }

  { // ID: 4198
    std::shared_ptr<RedstoneWallTorchBlock> block = std::make_shared<RedstoneWallTorchBlock>();
    block->facing = RedstoneWallTorchBlock::FACING_NORTH;
    block->lit = RedstoneWallTorchBlock::LIT_TRUE;
    registry[4198] = block;
  }

  { // ID: 4199
    std::shared_ptr<RedstoneWallTorchBlock> block = std::make_shared<RedstoneWallTorchBlock>();
    block->facing = RedstoneWallTorchBlock::FACING_NORTH;
    block->lit = RedstoneWallTorchBlock::LIT_FALSE;
    registry[4199] = block;
  }

  { // ID: 4200
    std::shared_ptr<RedstoneWallTorchBlock> block = std::make_shared<RedstoneWallTorchBlock>();
    block->facing = RedstoneWallTorchBlock::FACING_SOUTH;
    block->lit = RedstoneWallTorchBlock::LIT_TRUE;
    registry[4200] = block;
  }

  { // ID: 4201
    std::shared_ptr<RedstoneWallTorchBlock> block = std::make_shared<RedstoneWallTorchBlock>();
    block->facing = RedstoneWallTorchBlock::FACING_SOUTH;
    block->lit = RedstoneWallTorchBlock::LIT_FALSE;
    registry[4201] = block;
  }

  { // ID: 4202
    std::shared_ptr<RedstoneWallTorchBlock> block = std::make_shared<RedstoneWallTorchBlock>();
    block->facing = RedstoneWallTorchBlock::FACING_WEST;
    block->lit = RedstoneWallTorchBlock::LIT_TRUE;
    registry[4202] = block;
  }

  { // ID: 4203
    std::shared_ptr<RedstoneWallTorchBlock> block = std::make_shared<RedstoneWallTorchBlock>();
    block->facing = RedstoneWallTorchBlock::FACING_WEST;
    block->lit = RedstoneWallTorchBlock::LIT_FALSE;
    registry[4203] = block;
  }

  { // ID: 4204
    std::shared_ptr<RedstoneWallTorchBlock> block = std::make_shared<RedstoneWallTorchBlock>();
    block->facing = RedstoneWallTorchBlock::FACING_EAST;
    block->lit = RedstoneWallTorchBlock::LIT_TRUE;
    registry[4204] = block;
  }

  { // ID: 4205
    std::shared_ptr<RedstoneWallTorchBlock> block = std::make_shared<RedstoneWallTorchBlock>();
    block->facing = RedstoneWallTorchBlock::FACING_EAST;
    block->lit = RedstoneWallTorchBlock::LIT_FALSE;
    registry[4205] = block;
  }

  { // ID: 4340
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_1;
    block->facing = RepeaterBlock::FACING_NORTH;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4340] = block;
  }

  { // ID: 4341
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_1;
    block->facing = RepeaterBlock::FACING_NORTH;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4341] = block;
  }

  { // ID: 4342
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_1;
    block->facing = RepeaterBlock::FACING_NORTH;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4342] = block;
  }

  { // ID: 4343
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_1;
    block->facing = RepeaterBlock::FACING_NORTH;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4343] = block;
  }

  { // ID: 4344
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_1;
    block->facing = RepeaterBlock::FACING_SOUTH;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4344] = block;
  }

  { // ID: 4345
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_1;
    block->facing = RepeaterBlock::FACING_SOUTH;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4345] = block;
  }

  { // ID: 4346
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_1;
    block->facing = RepeaterBlock::FACING_SOUTH;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4346] = block;
  }

  { // ID: 4347
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_1;
    block->facing = RepeaterBlock::FACING_SOUTH;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4347] = block;
  }

  { // ID: 4348
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_1;
    block->facing = RepeaterBlock::FACING_WEST;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4348] = block;
  }

  { // ID: 4349
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_1;
    block->facing = RepeaterBlock::FACING_WEST;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4349] = block;
  }

  { // ID: 4350
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_1;
    block->facing = RepeaterBlock::FACING_WEST;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4350] = block;
  }

  { // ID: 4351
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_1;
    block->facing = RepeaterBlock::FACING_WEST;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4351] = block;
  }

  { // ID: 4352
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_1;
    block->facing = RepeaterBlock::FACING_EAST;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4352] = block;
  }

  { // ID: 4353
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_1;
    block->facing = RepeaterBlock::FACING_EAST;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4353] = block;
  }

  { // ID: 4354
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_1;
    block->facing = RepeaterBlock::FACING_EAST;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4354] = block;
  }

  { // ID: 4355
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_1;
    block->facing = RepeaterBlock::FACING_EAST;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4355] = block;
  }

  { // ID: 4356
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_2;
    block->facing = RepeaterBlock::FACING_NORTH;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4356] = block;
  }

  { // ID: 4357
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_2;
    block->facing = RepeaterBlock::FACING_NORTH;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4357] = block;
  }

  { // ID: 4358
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_2;
    block->facing = RepeaterBlock::FACING_NORTH;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4358] = block;
  }

  { // ID: 4359
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_2;
    block->facing = RepeaterBlock::FACING_NORTH;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4359] = block;
  }

  { // ID: 4360
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_2;
    block->facing = RepeaterBlock::FACING_SOUTH;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4360] = block;
  }

  { // ID: 4361
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_2;
    block->facing = RepeaterBlock::FACING_SOUTH;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4361] = block;
  }

  { // ID: 4362
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_2;
    block->facing = RepeaterBlock::FACING_SOUTH;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4362] = block;
  }

  { // ID: 4363
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_2;
    block->facing = RepeaterBlock::FACING_SOUTH;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4363] = block;
  }

  { // ID: 4364
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_2;
    block->facing = RepeaterBlock::FACING_WEST;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4364] = block;
  }

  { // ID: 4365
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_2;
    block->facing = RepeaterBlock::FACING_WEST;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4365] = block;
  }

  { // ID: 4366
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_2;
    block->facing = RepeaterBlock::FACING_WEST;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4366] = block;
  }

  { // ID: 4367
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_2;
    block->facing = RepeaterBlock::FACING_WEST;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4367] = block;
  }

  { // ID: 4368
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_2;
    block->facing = RepeaterBlock::FACING_EAST;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4368] = block;
  }

  { // ID: 4369
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_2;
    block->facing = RepeaterBlock::FACING_EAST;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4369] = block;
  }

  { // ID: 4370
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_2;
    block->facing = RepeaterBlock::FACING_EAST;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4370] = block;
  }

  { // ID: 4371
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_2;
    block->facing = RepeaterBlock::FACING_EAST;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4371] = block;
  }

  { // ID: 4372
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_3;
    block->facing = RepeaterBlock::FACING_NORTH;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4372] = block;
  }

  { // ID: 4373
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_3;
    block->facing = RepeaterBlock::FACING_NORTH;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4373] = block;
  }

  { // ID: 4374
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_3;
    block->facing = RepeaterBlock::FACING_NORTH;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4374] = block;
  }

  { // ID: 4375
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_3;
    block->facing = RepeaterBlock::FACING_NORTH;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4375] = block;
  }

  { // ID: 4376
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_3;
    block->facing = RepeaterBlock::FACING_SOUTH;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4376] = block;
  }

  { // ID: 4377
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_3;
    block->facing = RepeaterBlock::FACING_SOUTH;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4377] = block;
  }

  { // ID: 4378
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_3;
    block->facing = RepeaterBlock::FACING_SOUTH;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4378] = block;
  }

  { // ID: 4379
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_3;
    block->facing = RepeaterBlock::FACING_SOUTH;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4379] = block;
  }

  { // ID: 4380
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_3;
    block->facing = RepeaterBlock::FACING_WEST;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4380] = block;
  }

  { // ID: 4381
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_3;
    block->facing = RepeaterBlock::FACING_WEST;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4381] = block;
  }

  { // ID: 4382
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_3;
    block->facing = RepeaterBlock::FACING_WEST;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4382] = block;
  }

  { // ID: 4383
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_3;
    block->facing = RepeaterBlock::FACING_WEST;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4383] = block;
  }

  { // ID: 4384
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_3;
    block->facing = RepeaterBlock::FACING_EAST;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4384] = block;
  }

  { // ID: 4385
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_3;
    block->facing = RepeaterBlock::FACING_EAST;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4385] = block;
  }

  { // ID: 4386
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_3;
    block->facing = RepeaterBlock::FACING_EAST;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4386] = block;
  }

  { // ID: 4387
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_3;
    block->facing = RepeaterBlock::FACING_EAST;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4387] = block;
  }

  { // ID: 4388
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_4;
    block->facing = RepeaterBlock::FACING_NORTH;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4388] = block;
  }

  { // ID: 4389
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_4;
    block->facing = RepeaterBlock::FACING_NORTH;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4389] = block;
  }

  { // ID: 4390
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_4;
    block->facing = RepeaterBlock::FACING_NORTH;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4390] = block;
  }

  { // ID: 4391
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_4;
    block->facing = RepeaterBlock::FACING_NORTH;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4391] = block;
  }

  { // ID: 4392
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_4;
    block->facing = RepeaterBlock::FACING_SOUTH;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4392] = block;
  }

  { // ID: 4393
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_4;
    block->facing = RepeaterBlock::FACING_SOUTH;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4393] = block;
  }

  { // ID: 4394
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_4;
    block->facing = RepeaterBlock::FACING_SOUTH;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4394] = block;
  }

  { // ID: 4395
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_4;
    block->facing = RepeaterBlock::FACING_SOUTH;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4395] = block;
  }

  { // ID: 4396
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_4;
    block->facing = RepeaterBlock::FACING_WEST;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4396] = block;
  }

  { // ID: 4397
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_4;
    block->facing = RepeaterBlock::FACING_WEST;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4397] = block;
  }

  { // ID: 4398
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_4;
    block->facing = RepeaterBlock::FACING_WEST;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4398] = block;
  }

  { // ID: 4399
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_4;
    block->facing = RepeaterBlock::FACING_WEST;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4399] = block;
  }

  { // ID: 4400
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_4;
    block->facing = RepeaterBlock::FACING_EAST;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4400] = block;
  }

  { // ID: 4401
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_4;
    block->facing = RepeaterBlock::FACING_EAST;
    block->locked = RepeaterBlock::LOCKED_TRUE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4401] = block;
  }

  { // ID: 4402
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_4;
    block->facing = RepeaterBlock::FACING_EAST;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_TRUE;
    registry[4402] = block;
  }

  { // ID: 4403
    std::shared_ptr<RepeaterBlock> block = std::make_shared<RepeaterBlock>();
    block->delay = RepeaterBlock::DELAY_4;
    block->facing = RepeaterBlock::FACING_EAST;
    block->locked = RepeaterBlock::LOCKED_FALSE;
    block->powered = RepeaterBlock::POWERED_FALSE;
    registry[4403] = block;
  }

  { // ID: 4418
    std::shared_ptr<RedStainedGlassBlock> block = std::make_shared<RedStainedGlassBlock>();
    registry[4418] = block;
  }

  { // ID: 4944
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4944] = block;
  }

  { // ID: 4945
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4945] = block;
  }

  { // ID: 4946
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4946] = block;
  }

  { // ID: 4947
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4947] = block;
  }

  { // ID: 4948
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4948] = block;
  }

  { // ID: 4949
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4949] = block;
  }

  { // ID: 4950
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4950] = block;
  }

  { // ID: 4951
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4951] = block;
  }

  { // ID: 4952
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4952] = block;
  }

  { // ID: 4953
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4953] = block;
  }

  { // ID: 4954
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4954] = block;
  }

  { // ID: 4955
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4955] = block;
  }

  { // ID: 4956
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4956] = block;
  }

  { // ID: 4957
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4957] = block;
  }

  { // ID: 4958
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4958] = block;
  }

  { // ID: 4959
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4959] = block;
  }

  { // ID: 4960
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4960] = block;
  }

  { // ID: 4961
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4961] = block;
  }

  { // ID: 4962
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4962] = block;
  }

  { // ID: 4963
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4963] = block;
  }

  { // ID: 4964
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4964] = block;
  }

  { // ID: 4965
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4965] = block;
  }

  { // ID: 4966
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4966] = block;
  }

  { // ID: 4967
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4967] = block;
  }

  { // ID: 4968
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4968] = block;
  }

  { // ID: 4969
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4969] = block;
  }

  { // ID: 4970
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4970] = block;
  }

  { // ID: 4971
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4971] = block;
  }

  { // ID: 4972
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4972] = block;
  }

  { // ID: 4973
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4973] = block;
  }

  { // ID: 4974
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4974] = block;
  }

  { // ID: 4975
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_TRUE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4975] = block;
  }

  { // ID: 4976
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4976] = block;
  }

  { // ID: 4977
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4977] = block;
  }

  { // ID: 4978
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4978] = block;
  }

  { // ID: 4979
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4979] = block;
  }

  { // ID: 4980
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4980] = block;
  }

  { // ID: 4981
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4981] = block;
  }

  { // ID: 4982
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4982] = block;
  }

  { // ID: 4983
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4983] = block;
  }

  { // ID: 4984
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4984] = block;
  }

  { // ID: 4985
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4985] = block;
  }

  { // ID: 4986
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4986] = block;
  }

  { // ID: 4987
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4987] = block;
  }

  { // ID: 4988
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4988] = block;
  }

  { // ID: 4989
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4989] = block;
  }

  { // ID: 4990
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4990] = block;
  }

  { // ID: 4991
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_TRUE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4991] = block;
  }

  { // ID: 4992
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4992] = block;
  }

  { // ID: 4993
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4993] = block;
  }

  { // ID: 4994
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4994] = block;
  }

  { // ID: 4995
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4995] = block;
  }

  { // ID: 4996
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4996] = block;
  }

  { // ID: 4997
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4997] = block;
  }

  { // ID: 4998
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[4998] = block;
  }

  { // ID: 4999
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_TRUE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[4999] = block;
  }

  { // ID: 5000
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[5000] = block;
  }

  { // ID: 5001
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[5001] = block;
  }

  { // ID: 5002
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[5002] = block;
  }

  { // ID: 5003
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_TRUE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[5003] = block;
  }

  { // ID: 5004
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[5004] = block;
  }

  { // ID: 5005
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_TRUE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[5005] = block;
  }

  { // ID: 5006
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_TRUE;
    registry[5006] = block;
  }

  { // ID: 5007
    std::shared_ptr<RedMushroomBlockBlock> block = std::make_shared<RedMushroomBlockBlock>();
    block->down = RedMushroomBlockBlock::DOWN_FALSE;
    block->east = RedMushroomBlockBlock::EAST_FALSE;
    block->north = RedMushroomBlockBlock::NORTH_FALSE;
    block->south = RedMushroomBlockBlock::SOUTH_FALSE;
    block->up = RedMushroomBlockBlock::UP_FALSE;
    block->west = RedMushroomBlockBlock::WEST_FALSE;
    registry[5007] = block;
  }

  { // ID: 5747
    std::shared_ptr<RedstoneLampBlock> block = std::make_shared<RedstoneLampBlock>();
    block->lit = RedstoneLampBlock::LIT_TRUE;
    registry[5747] = block;
  }

  { // ID: 5748
    std::shared_ptr<RedstoneLampBlock> block = std::make_shared<RedstoneLampBlock>();
    block->lit = RedstoneLampBlock::LIT_FALSE;
    registry[5748] = block;
  }

  { // ID: 7343
    std::shared_ptr<RedstoneBlockBlock> block = std::make_shared<RedstoneBlockBlock>();
    registry[7343] = block;
  }

  { // ID: 7490
    std::shared_ptr<RedTerracottaBlock> block = std::make_shared<RedTerracottaBlock>();
    registry[7490] = block;
  }

  { // ID: 7940
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_TRUE;
    block->north = RedStainedGlassPaneBlock::NORTH_TRUE;
    block->south = RedStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = RedStainedGlassPaneBlock::WEST_TRUE;
    registry[7940] = block;
  }

  { // ID: 7941
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_TRUE;
    block->north = RedStainedGlassPaneBlock::NORTH_TRUE;
    block->south = RedStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = RedStainedGlassPaneBlock::WEST_FALSE;
    registry[7941] = block;
  }

  { // ID: 7942
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_TRUE;
    block->north = RedStainedGlassPaneBlock::NORTH_TRUE;
    block->south = RedStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = RedStainedGlassPaneBlock::WEST_TRUE;
    registry[7942] = block;
  }

  { // ID: 7943
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_TRUE;
    block->north = RedStainedGlassPaneBlock::NORTH_TRUE;
    block->south = RedStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = RedStainedGlassPaneBlock::WEST_FALSE;
    registry[7943] = block;
  }

  { // ID: 7944
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_TRUE;
    block->north = RedStainedGlassPaneBlock::NORTH_TRUE;
    block->south = RedStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = RedStainedGlassPaneBlock::WEST_TRUE;
    registry[7944] = block;
  }

  { // ID: 7945
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_TRUE;
    block->north = RedStainedGlassPaneBlock::NORTH_TRUE;
    block->south = RedStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = RedStainedGlassPaneBlock::WEST_FALSE;
    registry[7945] = block;
  }

  { // ID: 7946
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_TRUE;
    block->north = RedStainedGlassPaneBlock::NORTH_TRUE;
    block->south = RedStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = RedStainedGlassPaneBlock::WEST_TRUE;
    registry[7946] = block;
  }

  { // ID: 7947
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_TRUE;
    block->north = RedStainedGlassPaneBlock::NORTH_TRUE;
    block->south = RedStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = RedStainedGlassPaneBlock::WEST_FALSE;
    registry[7947] = block;
  }

  { // ID: 7948
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_TRUE;
    block->north = RedStainedGlassPaneBlock::NORTH_FALSE;
    block->south = RedStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = RedStainedGlassPaneBlock::WEST_TRUE;
    registry[7948] = block;
  }

  { // ID: 7949
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_TRUE;
    block->north = RedStainedGlassPaneBlock::NORTH_FALSE;
    block->south = RedStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = RedStainedGlassPaneBlock::WEST_FALSE;
    registry[7949] = block;
  }

  { // ID: 7950
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_TRUE;
    block->north = RedStainedGlassPaneBlock::NORTH_FALSE;
    block->south = RedStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = RedStainedGlassPaneBlock::WEST_TRUE;
    registry[7950] = block;
  }

  { // ID: 7951
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_TRUE;
    block->north = RedStainedGlassPaneBlock::NORTH_FALSE;
    block->south = RedStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = RedStainedGlassPaneBlock::WEST_FALSE;
    registry[7951] = block;
  }

  { // ID: 7952
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_TRUE;
    block->north = RedStainedGlassPaneBlock::NORTH_FALSE;
    block->south = RedStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = RedStainedGlassPaneBlock::WEST_TRUE;
    registry[7952] = block;
  }

  { // ID: 7953
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_TRUE;
    block->north = RedStainedGlassPaneBlock::NORTH_FALSE;
    block->south = RedStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = RedStainedGlassPaneBlock::WEST_FALSE;
    registry[7953] = block;
  }

  { // ID: 7954
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_TRUE;
    block->north = RedStainedGlassPaneBlock::NORTH_FALSE;
    block->south = RedStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = RedStainedGlassPaneBlock::WEST_TRUE;
    registry[7954] = block;
  }

  { // ID: 7955
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_TRUE;
    block->north = RedStainedGlassPaneBlock::NORTH_FALSE;
    block->south = RedStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = RedStainedGlassPaneBlock::WEST_FALSE;
    registry[7955] = block;
  }

  { // ID: 7956
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_FALSE;
    block->north = RedStainedGlassPaneBlock::NORTH_TRUE;
    block->south = RedStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = RedStainedGlassPaneBlock::WEST_TRUE;
    registry[7956] = block;
  }

  { // ID: 7957
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_FALSE;
    block->north = RedStainedGlassPaneBlock::NORTH_TRUE;
    block->south = RedStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = RedStainedGlassPaneBlock::WEST_FALSE;
    registry[7957] = block;
  }

  { // ID: 7958
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_FALSE;
    block->north = RedStainedGlassPaneBlock::NORTH_TRUE;
    block->south = RedStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = RedStainedGlassPaneBlock::WEST_TRUE;
    registry[7958] = block;
  }

  { // ID: 7959
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_FALSE;
    block->north = RedStainedGlassPaneBlock::NORTH_TRUE;
    block->south = RedStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = RedStainedGlassPaneBlock::WEST_FALSE;
    registry[7959] = block;
  }

  { // ID: 7960
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_FALSE;
    block->north = RedStainedGlassPaneBlock::NORTH_TRUE;
    block->south = RedStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = RedStainedGlassPaneBlock::WEST_TRUE;
    registry[7960] = block;
  }

  { // ID: 7961
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_FALSE;
    block->north = RedStainedGlassPaneBlock::NORTH_TRUE;
    block->south = RedStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = RedStainedGlassPaneBlock::WEST_FALSE;
    registry[7961] = block;
  }

  { // ID: 7962
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_FALSE;
    block->north = RedStainedGlassPaneBlock::NORTH_TRUE;
    block->south = RedStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = RedStainedGlassPaneBlock::WEST_TRUE;
    registry[7962] = block;
  }

  { // ID: 7963
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_FALSE;
    block->north = RedStainedGlassPaneBlock::NORTH_TRUE;
    block->south = RedStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = RedStainedGlassPaneBlock::WEST_FALSE;
    registry[7963] = block;
  }

  { // ID: 7964
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_FALSE;
    block->north = RedStainedGlassPaneBlock::NORTH_FALSE;
    block->south = RedStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = RedStainedGlassPaneBlock::WEST_TRUE;
    registry[7964] = block;
  }

  { // ID: 7965
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_FALSE;
    block->north = RedStainedGlassPaneBlock::NORTH_FALSE;
    block->south = RedStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = RedStainedGlassPaneBlock::WEST_FALSE;
    registry[7965] = block;
  }

  { // ID: 7966
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_FALSE;
    block->north = RedStainedGlassPaneBlock::NORTH_FALSE;
    block->south = RedStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = RedStainedGlassPaneBlock::WEST_TRUE;
    registry[7966] = block;
  }

  { // ID: 7967
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_FALSE;
    block->north = RedStainedGlassPaneBlock::NORTH_FALSE;
    block->south = RedStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = RedStainedGlassPaneBlock::WEST_FALSE;
    registry[7967] = block;
  }

  { // ID: 7968
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_FALSE;
    block->north = RedStainedGlassPaneBlock::NORTH_FALSE;
    block->south = RedStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = RedStainedGlassPaneBlock::WEST_TRUE;
    registry[7968] = block;
  }

  { // ID: 7969
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_FALSE;
    block->north = RedStainedGlassPaneBlock::NORTH_FALSE;
    block->south = RedStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = RedStainedGlassPaneBlock::WEST_FALSE;
    registry[7969] = block;
  }

  { // ID: 7970
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_FALSE;
    block->north = RedStainedGlassPaneBlock::NORTH_FALSE;
    block->south = RedStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = RedStainedGlassPaneBlock::WEST_TRUE;
    registry[7970] = block;
  }

  { // ID: 7971
    std::shared_ptr<RedStainedGlassPaneBlock> block = std::make_shared<RedStainedGlassPaneBlock>();
    block->east = RedStainedGlassPaneBlock::EAST_FALSE;
    block->north = RedStainedGlassPaneBlock::NORTH_FALSE;
    block->south = RedStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = RedStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = RedStainedGlassPaneBlock::WEST_FALSE;
    registry[7971] = block;
  }

  { // ID: 8621
    std::shared_ptr<RedCarpetBlock> block = std::make_shared<RedCarpetBlock>();
    registry[8621] = block;
  }

  { // ID: 8630
    std::shared_ptr<RoseBushBlock> block = std::make_shared<RoseBushBlock>();
    block->half = RoseBushBlock::HALF_UPPER;
    registry[8630] = block;
  }

  { // ID: 8631
    std::shared_ptr<RoseBushBlock> block = std::make_shared<RoseBushBlock>();
    block->half = RoseBushBlock::HALF_LOWER;
    registry[8631] = block;
  }

  { // ID: 8862
    std::shared_ptr<RedBannerBlock> block = std::make_shared<RedBannerBlock>();
    block->rotation = RedBannerBlock::ROTATION_0;
    registry[8862] = block;
  }

  { // ID: 8863
    std::shared_ptr<RedBannerBlock> block = std::make_shared<RedBannerBlock>();
    block->rotation = RedBannerBlock::ROTATION_1;
    registry[8863] = block;
  }

  { // ID: 8864
    std::shared_ptr<RedBannerBlock> block = std::make_shared<RedBannerBlock>();
    block->rotation = RedBannerBlock::ROTATION_2;
    registry[8864] = block;
  }

  { // ID: 8865
    std::shared_ptr<RedBannerBlock> block = std::make_shared<RedBannerBlock>();
    block->rotation = RedBannerBlock::ROTATION_3;
    registry[8865] = block;
  }

  { // ID: 8866
    std::shared_ptr<RedBannerBlock> block = std::make_shared<RedBannerBlock>();
    block->rotation = RedBannerBlock::ROTATION_4;
    registry[8866] = block;
  }

  { // ID: 8867
    std::shared_ptr<RedBannerBlock> block = std::make_shared<RedBannerBlock>();
    block->rotation = RedBannerBlock::ROTATION_5;
    registry[8867] = block;
  }

  { // ID: 8868
    std::shared_ptr<RedBannerBlock> block = std::make_shared<RedBannerBlock>();
    block->rotation = RedBannerBlock::ROTATION_6;
    registry[8868] = block;
  }

  { // ID: 8869
    std::shared_ptr<RedBannerBlock> block = std::make_shared<RedBannerBlock>();
    block->rotation = RedBannerBlock::ROTATION_7;
    registry[8869] = block;
  }

  { // ID: 8870
    std::shared_ptr<RedBannerBlock> block = std::make_shared<RedBannerBlock>();
    block->rotation = RedBannerBlock::ROTATION_8;
    registry[8870] = block;
  }

  { // ID: 8871
    std::shared_ptr<RedBannerBlock> block = std::make_shared<RedBannerBlock>();
    block->rotation = RedBannerBlock::ROTATION_9;
    registry[8871] = block;
  }

  { // ID: 8872
    std::shared_ptr<RedBannerBlock> block = std::make_shared<RedBannerBlock>();
    block->rotation = RedBannerBlock::ROTATION_10;
    registry[8872] = block;
  }

  { // ID: 8873
    std::shared_ptr<RedBannerBlock> block = std::make_shared<RedBannerBlock>();
    block->rotation = RedBannerBlock::ROTATION_11;
    registry[8873] = block;
  }

  { // ID: 8874
    std::shared_ptr<RedBannerBlock> block = std::make_shared<RedBannerBlock>();
    block->rotation = RedBannerBlock::ROTATION_12;
    registry[8874] = block;
  }

  { // ID: 8875
    std::shared_ptr<RedBannerBlock> block = std::make_shared<RedBannerBlock>();
    block->rotation = RedBannerBlock::ROTATION_13;
    registry[8875] = block;
  }

  { // ID: 8876
    std::shared_ptr<RedBannerBlock> block = std::make_shared<RedBannerBlock>();
    block->rotation = RedBannerBlock::ROTATION_14;
    registry[8876] = block;
  }

  { // ID: 8877
    std::shared_ptr<RedBannerBlock> block = std::make_shared<RedBannerBlock>();
    block->rotation = RedBannerBlock::ROTATION_15;
    registry[8877] = block;
  }

  { // ID: 8950
    std::shared_ptr<RedWallBannerBlock> block = std::make_shared<RedWallBannerBlock>();
    block->facing = RedWallBannerBlock::FACING_NORTH;
    registry[8950] = block;
  }

  { // ID: 8951
    std::shared_ptr<RedWallBannerBlock> block = std::make_shared<RedWallBannerBlock>();
    block->facing = RedWallBannerBlock::FACING_SOUTH;
    registry[8951] = block;
  }

  { // ID: 8952
    std::shared_ptr<RedWallBannerBlock> block = std::make_shared<RedWallBannerBlock>();
    block->facing = RedWallBannerBlock::FACING_WEST;
    registry[8952] = block;
  }

  { // ID: 8953
    std::shared_ptr<RedWallBannerBlock> block = std::make_shared<RedWallBannerBlock>();
    block->facing = RedWallBannerBlock::FACING_EAST;
    registry[8953] = block;
  }

  { // ID: 8958
    std::shared_ptr<RedSandstoneBlock> block = std::make_shared<RedSandstoneBlock>();
    registry[8958] = block;
  }

  { // ID: 8961
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_NORTH;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[8961] = block;
  }

  { // ID: 8962
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_NORTH;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[8962] = block;
  }

  { // ID: 8963
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_NORTH;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[8963] = block;
  }

  { // ID: 8964
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_NORTH;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[8964] = block;
  }

  { // ID: 8965
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_NORTH;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[8965] = block;
  }

  { // ID: 8966
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_NORTH;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[8966] = block;
  }

  { // ID: 8967
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_NORTH;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[8967] = block;
  }

  { // ID: 8968
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_NORTH;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[8968] = block;
  }

  { // ID: 8969
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_NORTH;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[8969] = block;
  }

  { // ID: 8970
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_NORTH;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[8970] = block;
  }

  { // ID: 8971
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_NORTH;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[8971] = block;
  }

  { // ID: 8972
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_NORTH;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[8972] = block;
  }

  { // ID: 8973
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_NORTH;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[8973] = block;
  }

  { // ID: 8974
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_NORTH;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[8974] = block;
  }

  { // ID: 8975
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_NORTH;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[8975] = block;
  }

  { // ID: 8976
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_NORTH;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[8976] = block;
  }

  { // ID: 8977
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_NORTH;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[8977] = block;
  }

  { // ID: 8978
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_NORTH;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[8978] = block;
  }

  { // ID: 8979
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_NORTH;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[8979] = block;
  }

  { // ID: 8980
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_NORTH;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[8980] = block;
  }

  { // ID: 8981
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_SOUTH;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[8981] = block;
  }

  { // ID: 8982
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_SOUTH;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[8982] = block;
  }

  { // ID: 8983
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_SOUTH;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[8983] = block;
  }

  { // ID: 8984
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_SOUTH;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[8984] = block;
  }

  { // ID: 8985
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_SOUTH;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[8985] = block;
  }

  { // ID: 8986
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_SOUTH;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[8986] = block;
  }

  { // ID: 8987
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_SOUTH;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[8987] = block;
  }

  { // ID: 8988
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_SOUTH;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[8988] = block;
  }

  { // ID: 8989
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_SOUTH;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[8989] = block;
  }

  { // ID: 8990
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_SOUTH;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[8990] = block;
  }

  { // ID: 8991
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_SOUTH;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[8991] = block;
  }

  { // ID: 8992
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_SOUTH;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[8992] = block;
  }

  { // ID: 8993
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_SOUTH;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[8993] = block;
  }

  { // ID: 8994
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_SOUTH;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[8994] = block;
  }

  { // ID: 8995
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_SOUTH;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[8995] = block;
  }

  { // ID: 8996
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_SOUTH;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[8996] = block;
  }

  { // ID: 8997
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_SOUTH;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[8997] = block;
  }

  { // ID: 8998
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_SOUTH;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[8998] = block;
  }

  { // ID: 8999
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_SOUTH;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[8999] = block;
  }

  { // ID: 9000
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_SOUTH;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[9000] = block;
  }

  { // ID: 9001
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_WEST;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[9001] = block;
  }

  { // ID: 9002
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_WEST;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[9002] = block;
  }

  { // ID: 9003
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_WEST;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[9003] = block;
  }

  { // ID: 9004
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_WEST;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[9004] = block;
  }

  { // ID: 9005
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_WEST;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[9005] = block;
  }

  { // ID: 9006
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_WEST;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[9006] = block;
  }

  { // ID: 9007
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_WEST;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[9007] = block;
  }

  { // ID: 9008
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_WEST;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[9008] = block;
  }

  { // ID: 9009
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_WEST;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[9009] = block;
  }

  { // ID: 9010
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_WEST;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[9010] = block;
  }

  { // ID: 9011
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_WEST;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[9011] = block;
  }

  { // ID: 9012
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_WEST;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[9012] = block;
  }

  { // ID: 9013
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_WEST;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[9013] = block;
  }

  { // ID: 9014
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_WEST;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[9014] = block;
  }

  { // ID: 9015
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_WEST;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[9015] = block;
  }

  { // ID: 9016
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_WEST;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[9016] = block;
  }

  { // ID: 9017
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_WEST;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[9017] = block;
  }

  { // ID: 9018
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_WEST;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[9018] = block;
  }

  { // ID: 9019
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_WEST;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[9019] = block;
  }

  { // ID: 9020
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_WEST;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[9020] = block;
  }

  { // ID: 9021
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_EAST;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[9021] = block;
  }

  { // ID: 9022
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_EAST;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[9022] = block;
  }

  { // ID: 9023
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_EAST;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[9023] = block;
  }

  { // ID: 9024
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_EAST;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[9024] = block;
  }

  { // ID: 9025
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_EAST;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[9025] = block;
  }

  { // ID: 9026
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_EAST;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[9026] = block;
  }

  { // ID: 9027
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_EAST;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[9027] = block;
  }

  { // ID: 9028
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_EAST;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[9028] = block;
  }

  { // ID: 9029
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_EAST;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[9029] = block;
  }

  { // ID: 9030
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_EAST;
    block->half = RedSandstoneStairsBlock::HALF_TOP;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[9030] = block;
  }

  { // ID: 9031
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_EAST;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[9031] = block;
  }

  { // ID: 9032
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_EAST;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[9032] = block;
  }

  { // ID: 9033
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_EAST;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[9033] = block;
  }

  { // ID: 9034
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_EAST;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[9034] = block;
  }

  { // ID: 9035
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_EAST;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[9035] = block;
  }

  { // ID: 9036
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_EAST;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[9036] = block;
  }

  { // ID: 9037
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_EAST;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[9037] = block;
  }

  { // ID: 9038
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_EAST;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[9038] = block;
  }

  { // ID: 9039
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_EAST;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_TRUE;
    registry[9039] = block;
  }

  { // ID: 9040
    std::shared_ptr<RedSandstoneStairsBlock> block = std::make_shared<RedSandstoneStairsBlock>();
    block->facing = RedSandstoneStairsBlock::FACING_EAST;
    block->half = RedSandstoneStairsBlock::HALF_BOTTOM;
    block->shape = RedSandstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedSandstoneStairsBlock::WATERLOGGED_FALSE;
    registry[9040] = block;
  }

  { // ID: 9149
    std::shared_ptr<RedSandstoneSlabBlock> block = std::make_shared<RedSandstoneSlabBlock>();
    block->type = RedSandstoneSlabBlock::TYPE_TOP;
    block->waterlogged = RedSandstoneSlabBlock::WATERLOGGED_TRUE;
    registry[9149] = block;
  }

  { // ID: 9150
    std::shared_ptr<RedSandstoneSlabBlock> block = std::make_shared<RedSandstoneSlabBlock>();
    block->type = RedSandstoneSlabBlock::TYPE_TOP;
    block->waterlogged = RedSandstoneSlabBlock::WATERLOGGED_FALSE;
    registry[9150] = block;
  }

  { // ID: 9151
    std::shared_ptr<RedSandstoneSlabBlock> block = std::make_shared<RedSandstoneSlabBlock>();
    block->type = RedSandstoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = RedSandstoneSlabBlock::WATERLOGGED_TRUE;
    registry[9151] = block;
  }

  { // ID: 9152
    std::shared_ptr<RedSandstoneSlabBlock> block = std::make_shared<RedSandstoneSlabBlock>();
    block->type = RedSandstoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = RedSandstoneSlabBlock::WATERLOGGED_FALSE;
    registry[9152] = block;
  }

  { // ID: 9153
    std::shared_ptr<RedSandstoneSlabBlock> block = std::make_shared<RedSandstoneSlabBlock>();
    block->type = RedSandstoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = RedSandstoneSlabBlock::WATERLOGGED_TRUE;
    registry[9153] = block;
  }

  { // ID: 9154
    std::shared_ptr<RedSandstoneSlabBlock> block = std::make_shared<RedSandstoneSlabBlock>();
    block->type = RedSandstoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = RedSandstoneSlabBlock::WATERLOGGED_FALSE;
    registry[9154] = block;
  }

  { // ID: 10106
    std::shared_ptr<RepeatingCommandBlockBlock> block = std::make_shared<RepeatingCommandBlockBlock>();
    block->conditional = RepeatingCommandBlockBlock::CONDITIONAL_TRUE;
    block->facing = RepeatingCommandBlockBlock::FACING_NORTH;
    registry[10106] = block;
  }

  { // ID: 10107
    std::shared_ptr<RepeatingCommandBlockBlock> block = std::make_shared<RepeatingCommandBlockBlock>();
    block->conditional = RepeatingCommandBlockBlock::CONDITIONAL_TRUE;
    block->facing = RepeatingCommandBlockBlock::FACING_EAST;
    registry[10107] = block;
  }

  { // ID: 10108
    std::shared_ptr<RepeatingCommandBlockBlock> block = std::make_shared<RepeatingCommandBlockBlock>();
    block->conditional = RepeatingCommandBlockBlock::CONDITIONAL_TRUE;
    block->facing = RepeatingCommandBlockBlock::FACING_SOUTH;
    registry[10108] = block;
  }

  { // ID: 10109
    std::shared_ptr<RepeatingCommandBlockBlock> block = std::make_shared<RepeatingCommandBlockBlock>();
    block->conditional = RepeatingCommandBlockBlock::CONDITIONAL_TRUE;
    block->facing = RepeatingCommandBlockBlock::FACING_WEST;
    registry[10109] = block;
  }

  { // ID: 10110
    std::shared_ptr<RepeatingCommandBlockBlock> block = std::make_shared<RepeatingCommandBlockBlock>();
    block->conditional = RepeatingCommandBlockBlock::CONDITIONAL_TRUE;
    block->facing = RepeatingCommandBlockBlock::FACING_UP;
    registry[10110] = block;
  }

  { // ID: 10111
    std::shared_ptr<RepeatingCommandBlockBlock> block = std::make_shared<RepeatingCommandBlockBlock>();
    block->conditional = RepeatingCommandBlockBlock::CONDITIONAL_TRUE;
    block->facing = RepeatingCommandBlockBlock::FACING_DOWN;
    registry[10111] = block;
  }

  { // ID: 10112
    std::shared_ptr<RepeatingCommandBlockBlock> block = std::make_shared<RepeatingCommandBlockBlock>();
    block->conditional = RepeatingCommandBlockBlock::CONDITIONAL_FALSE;
    block->facing = RepeatingCommandBlockBlock::FACING_NORTH;
    registry[10112] = block;
  }

  { // ID: 10113
    std::shared_ptr<RepeatingCommandBlockBlock> block = std::make_shared<RepeatingCommandBlockBlock>();
    block->conditional = RepeatingCommandBlockBlock::CONDITIONAL_FALSE;
    block->facing = RepeatingCommandBlockBlock::FACING_EAST;
    registry[10113] = block;
  }

  { // ID: 10114
    std::shared_ptr<RepeatingCommandBlockBlock> block = std::make_shared<RepeatingCommandBlockBlock>();
    block->conditional = RepeatingCommandBlockBlock::CONDITIONAL_FALSE;
    block->facing = RepeatingCommandBlockBlock::FACING_SOUTH;
    registry[10114] = block;
  }

  { // ID: 10115
    std::shared_ptr<RepeatingCommandBlockBlock> block = std::make_shared<RepeatingCommandBlockBlock>();
    block->conditional = RepeatingCommandBlockBlock::CONDITIONAL_FALSE;
    block->facing = RepeatingCommandBlockBlock::FACING_WEST;
    registry[10115] = block;
  }

  { // ID: 10116
    std::shared_ptr<RepeatingCommandBlockBlock> block = std::make_shared<RepeatingCommandBlockBlock>();
    block->conditional = RepeatingCommandBlockBlock::CONDITIONAL_FALSE;
    block->facing = RepeatingCommandBlockBlock::FACING_UP;
    registry[10116] = block;
  }

  { // ID: 10117
    std::shared_ptr<RepeatingCommandBlockBlock> block = std::make_shared<RepeatingCommandBlockBlock>();
    block->conditional = RepeatingCommandBlockBlock::CONDITIONAL_FALSE;
    block->facing = RepeatingCommandBlockBlock::FACING_DOWN;
    registry[10117] = block;
  }

  { // ID: 10136
    std::shared_ptr<RedNetherBricksBlock> block = std::make_shared<RedNetherBricksBlock>();
    registry[10136] = block;
  }

  { // ID: 10243
    std::shared_ptr<RedShulkerBoxBlock> block = std::make_shared<RedShulkerBoxBlock>();
    block->facing = RedShulkerBoxBlock::FACING_NORTH;
    registry[10243] = block;
  }

  { // ID: 10244
    std::shared_ptr<RedShulkerBoxBlock> block = std::make_shared<RedShulkerBoxBlock>();
    block->facing = RedShulkerBoxBlock::FACING_EAST;
    registry[10244] = block;
  }

  { // ID: 10245
    std::shared_ptr<RedShulkerBoxBlock> block = std::make_shared<RedShulkerBoxBlock>();
    block->facing = RedShulkerBoxBlock::FACING_SOUTH;
    registry[10245] = block;
  }

  { // ID: 10246
    std::shared_ptr<RedShulkerBoxBlock> block = std::make_shared<RedShulkerBoxBlock>();
    block->facing = RedShulkerBoxBlock::FACING_WEST;
    registry[10246] = block;
  }

  { // ID: 10247
    std::shared_ptr<RedShulkerBoxBlock> block = std::make_shared<RedShulkerBoxBlock>();
    block->facing = RedShulkerBoxBlock::FACING_UP;
    registry[10247] = block;
  }

  { // ID: 10248
    std::shared_ptr<RedShulkerBoxBlock> block = std::make_shared<RedShulkerBoxBlock>();
    block->facing = RedShulkerBoxBlock::FACING_DOWN;
    registry[10248] = block;
  }

  { // ID: 10311
    std::shared_ptr<RedGlazedTerracottaBlock> block = std::make_shared<RedGlazedTerracottaBlock>();
    block->facing = RedGlazedTerracottaBlock::FACING_NORTH;
    registry[10311] = block;
  }

  { // ID: 10312
    std::shared_ptr<RedGlazedTerracottaBlock> block = std::make_shared<RedGlazedTerracottaBlock>();
    block->facing = RedGlazedTerracottaBlock::FACING_SOUTH;
    registry[10312] = block;
  }

  { // ID: 10313
    std::shared_ptr<RedGlazedTerracottaBlock> block = std::make_shared<RedGlazedTerracottaBlock>();
    block->facing = RedGlazedTerracottaBlock::FACING_WEST;
    registry[10313] = block;
  }

  { // ID: 10314
    std::shared_ptr<RedGlazedTerracottaBlock> block = std::make_shared<RedGlazedTerracottaBlock>();
    block->facing = RedGlazedTerracottaBlock::FACING_EAST;
    registry[10314] = block;
  }

  { // ID: 10333
    std::shared_ptr<RedConcreteBlock> block = std::make_shared<RedConcreteBlock>();
    registry[10333] = block;
  }

  { // ID: 10349
    std::shared_ptr<RedConcretePowderBlock> block = std::make_shared<RedConcretePowderBlock>();
    registry[10349] = block;
  }

  { // ID: 11430
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_NORTH;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11430] = block;
  }

  { // ID: 11431
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_NORTH;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11431] = block;
  }

  { // ID: 11432
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_NORTH;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11432] = block;
  }

  { // ID: 11433
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_NORTH;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11433] = block;
  }

  { // ID: 11434
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_NORTH;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11434] = block;
  }

  { // ID: 11435
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_NORTH;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11435] = block;
  }

  { // ID: 11436
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_NORTH;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11436] = block;
  }

  { // ID: 11437
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_NORTH;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11437] = block;
  }

  { // ID: 11438
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_NORTH;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11438] = block;
  }

  { // ID: 11439
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_NORTH;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11439] = block;
  }

  { // ID: 11440
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_NORTH;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11440] = block;
  }

  { // ID: 11441
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_NORTH;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11441] = block;
  }

  { // ID: 11442
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_NORTH;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11442] = block;
  }

  { // ID: 11443
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_NORTH;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11443] = block;
  }

  { // ID: 11444
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_NORTH;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11444] = block;
  }

  { // ID: 11445
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_NORTH;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11445] = block;
  }

  { // ID: 11446
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_NORTH;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11446] = block;
  }

  { // ID: 11447
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_NORTH;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11447] = block;
  }

  { // ID: 11448
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_NORTH;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11448] = block;
  }

  { // ID: 11449
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_NORTH;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11449] = block;
  }

  { // ID: 11450
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_SOUTH;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11450] = block;
  }

  { // ID: 11451
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_SOUTH;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11451] = block;
  }

  { // ID: 11452
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_SOUTH;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11452] = block;
  }

  { // ID: 11453
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_SOUTH;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11453] = block;
  }

  { // ID: 11454
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_SOUTH;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11454] = block;
  }

  { // ID: 11455
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_SOUTH;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11455] = block;
  }

  { // ID: 11456
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_SOUTH;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11456] = block;
  }

  { // ID: 11457
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_SOUTH;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11457] = block;
  }

  { // ID: 11458
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_SOUTH;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11458] = block;
  }

  { // ID: 11459
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_SOUTH;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11459] = block;
  }

  { // ID: 11460
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_SOUTH;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11460] = block;
  }

  { // ID: 11461
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_SOUTH;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11461] = block;
  }

  { // ID: 11462
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_SOUTH;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11462] = block;
  }

  { // ID: 11463
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_SOUTH;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11463] = block;
  }

  { // ID: 11464
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_SOUTH;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11464] = block;
  }

  { // ID: 11465
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_SOUTH;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11465] = block;
  }

  { // ID: 11466
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_SOUTH;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11466] = block;
  }

  { // ID: 11467
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_SOUTH;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11467] = block;
  }

  { // ID: 11468
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_SOUTH;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11468] = block;
  }

  { // ID: 11469
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_SOUTH;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11469] = block;
  }

  { // ID: 11470
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_WEST;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11470] = block;
  }

  { // ID: 11471
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_WEST;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11471] = block;
  }

  { // ID: 11472
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_WEST;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11472] = block;
  }

  { // ID: 11473
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_WEST;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11473] = block;
  }

  { // ID: 11474
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_WEST;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11474] = block;
  }

  { // ID: 11475
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_WEST;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11475] = block;
  }

  { // ID: 11476
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_WEST;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11476] = block;
  }

  { // ID: 11477
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_WEST;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11477] = block;
  }

  { // ID: 11478
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_WEST;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11478] = block;
  }

  { // ID: 11479
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_WEST;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11479] = block;
  }

  { // ID: 11480
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_WEST;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11480] = block;
  }

  { // ID: 11481
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_WEST;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11481] = block;
  }

  { // ID: 11482
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_WEST;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11482] = block;
  }

  { // ID: 11483
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_WEST;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11483] = block;
  }

  { // ID: 11484
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_WEST;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11484] = block;
  }

  { // ID: 11485
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_WEST;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11485] = block;
  }

  { // ID: 11486
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_WEST;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11486] = block;
  }

  { // ID: 11487
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_WEST;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11487] = block;
  }

  { // ID: 11488
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_WEST;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11488] = block;
  }

  { // ID: 11489
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_WEST;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11489] = block;
  }

  { // ID: 11490
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_EAST;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11490] = block;
  }

  { // ID: 11491
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_EAST;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11491] = block;
  }

  { // ID: 11492
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_EAST;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11492] = block;
  }

  { // ID: 11493
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_EAST;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11493] = block;
  }

  { // ID: 11494
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_EAST;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11494] = block;
  }

  { // ID: 11495
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_EAST;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11495] = block;
  }

  { // ID: 11496
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_EAST;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11496] = block;
  }

  { // ID: 11497
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_EAST;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11497] = block;
  }

  { // ID: 11498
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_EAST;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11498] = block;
  }

  { // ID: 11499
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_EAST;
    block->half = RedNetherBrickStairsBlock::HALF_TOP;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11499] = block;
  }

  { // ID: 11500
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_EAST;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11500] = block;
  }

  { // ID: 11501
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_EAST;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11501] = block;
  }

  { // ID: 11502
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_EAST;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11502] = block;
  }

  { // ID: 11503
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_EAST;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11503] = block;
  }

  { // ID: 11504
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_EAST;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11504] = block;
  }

  { // ID: 11505
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_EAST;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11505] = block;
  }

  { // ID: 11506
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_EAST;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11506] = block;
  }

  { // ID: 11507
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_EAST;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11507] = block;
  }

  { // ID: 11508
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_EAST;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11508] = block;
  }

  { // ID: 11509
    std::shared_ptr<RedNetherBrickStairsBlock> block = std::make_shared<RedNetherBrickStairsBlock>();
    block->facing = RedNetherBrickStairsBlock::FACING_EAST;
    block->half = RedNetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = RedNetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = RedNetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11509] = block;
  }

  { // ID: 11730
    std::shared_ptr<RedNetherBrickSlabBlock> block = std::make_shared<RedNetherBrickSlabBlock>();
    block->type = RedNetherBrickSlabBlock::TYPE_TOP;
    block->waterlogged = RedNetherBrickSlabBlock::WATERLOGGED_TRUE;
    registry[11730] = block;
  }

  { // ID: 11731
    std::shared_ptr<RedNetherBrickSlabBlock> block = std::make_shared<RedNetherBrickSlabBlock>();
    block->type = RedNetherBrickSlabBlock::TYPE_TOP;
    block->waterlogged = RedNetherBrickSlabBlock::WATERLOGGED_FALSE;
    registry[11731] = block;
  }

  { // ID: 11732
    std::shared_ptr<RedNetherBrickSlabBlock> block = std::make_shared<RedNetherBrickSlabBlock>();
    block->type = RedNetherBrickSlabBlock::TYPE_BOTTOM;
    block->waterlogged = RedNetherBrickSlabBlock::WATERLOGGED_TRUE;
    registry[11732] = block;
  }

  { // ID: 11733
    std::shared_ptr<RedNetherBrickSlabBlock> block = std::make_shared<RedNetherBrickSlabBlock>();
    block->type = RedNetherBrickSlabBlock::TYPE_BOTTOM;
    block->waterlogged = RedNetherBrickSlabBlock::WATERLOGGED_FALSE;
    registry[11733] = block;
  }

  { // ID: 11734
    std::shared_ptr<RedNetherBrickSlabBlock> block = std::make_shared<RedNetherBrickSlabBlock>();
    block->type = RedNetherBrickSlabBlock::TYPE_DOUBLE;
    block->waterlogged = RedNetherBrickSlabBlock::WATERLOGGED_TRUE;
    registry[11734] = block;
  }

  { // ID: 11735
    std::shared_ptr<RedNetherBrickSlabBlock> block = std::make_shared<RedNetherBrickSlabBlock>();
    block->type = RedNetherBrickSlabBlock::TYPE_DOUBLE;
    block->waterlogged = RedNetherBrickSlabBlock::WATERLOGGED_FALSE;
    registry[11735] = block;
  }

  { // ID: 12396
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12396] = block;
  }

  { // ID: 12397
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12397] = block;
  }

  { // ID: 12398
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12398] = block;
  }

  { // ID: 12399
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12399] = block;
  }

  { // ID: 12400
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12400] = block;
  }

  { // ID: 12401
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12401] = block;
  }

  { // ID: 12402
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12402] = block;
  }

  { // ID: 12403
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12403] = block;
  }

  { // ID: 12404
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12404] = block;
  }

  { // ID: 12405
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12405] = block;
  }

  { // ID: 12406
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12406] = block;
  }

  { // ID: 12407
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12407] = block;
  }

  { // ID: 12408
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12408] = block;
  }

  { // ID: 12409
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12409] = block;
  }

  { // ID: 12410
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12410] = block;
  }

  { // ID: 12411
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12411] = block;
  }

  { // ID: 12412
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12412] = block;
  }

  { // ID: 12413
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12413] = block;
  }

  { // ID: 12414
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12414] = block;
  }

  { // ID: 12415
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12415] = block;
  }

  { // ID: 12416
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12416] = block;
  }

  { // ID: 12417
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12417] = block;
  }

  { // ID: 12418
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12418] = block;
  }

  { // ID: 12419
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12419] = block;
  }

  { // ID: 12420
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12420] = block;
  }

  { // ID: 12421
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12421] = block;
  }

  { // ID: 12422
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12422] = block;
  }

  { // ID: 12423
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12423] = block;
  }

  { // ID: 12424
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12424] = block;
  }

  { // ID: 12425
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12425] = block;
  }

  { // ID: 12426
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12426] = block;
  }

  { // ID: 12427
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12427] = block;
  }

  { // ID: 12428
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12428] = block;
  }

  { // ID: 12429
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12429] = block;
  }

  { // ID: 12430
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12430] = block;
  }

  { // ID: 12431
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12431] = block;
  }

  { // ID: 12432
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12432] = block;
  }

  { // ID: 12433
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12433] = block;
  }

  { // ID: 12434
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12434] = block;
  }

  { // ID: 12435
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12435] = block;
  }

  { // ID: 12436
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12436] = block;
  }

  { // ID: 12437
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12437] = block;
  }

  { // ID: 12438
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12438] = block;
  }

  { // ID: 12439
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12439] = block;
  }

  { // ID: 12440
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12440] = block;
  }

  { // ID: 12441
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12441] = block;
  }

  { // ID: 12442
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12442] = block;
  }

  { // ID: 12443
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12443] = block;
  }

  { // ID: 12444
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12444] = block;
  }

  { // ID: 12445
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12445] = block;
  }

  { // ID: 12446
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12446] = block;
  }

  { // ID: 12447
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12447] = block;
  }

  { // ID: 12448
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12448] = block;
  }

  { // ID: 12449
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12449] = block;
  }

  { // ID: 12450
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12450] = block;
  }

  { // ID: 12451
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12451] = block;
  }

  { // ID: 12452
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12452] = block;
  }

  { // ID: 12453
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12453] = block;
  }

  { // ID: 12454
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12454] = block;
  }

  { // ID: 12455
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12455] = block;
  }

  { // ID: 12456
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12456] = block;
  }

  { // ID: 12457
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12457] = block;
  }

  { // ID: 12458
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12458] = block;
  }

  { // ID: 12459
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12459] = block;
  }

  { // ID: 12460
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12460] = block;
  }

  { // ID: 12461
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12461] = block;
  }

  { // ID: 12462
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12462] = block;
  }

  { // ID: 12463
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12463] = block;
  }

  { // ID: 12464
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12464] = block;
  }

  { // ID: 12465
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12465] = block;
  }

  { // ID: 12466
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12466] = block;
  }

  { // ID: 12467
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12467] = block;
  }

  { // ID: 12468
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12468] = block;
  }

  { // ID: 12469
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12469] = block;
  }

  { // ID: 12470
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12470] = block;
  }

  { // ID: 12471
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12471] = block;
  }

  { // ID: 12472
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12472] = block;
  }

  { // ID: 12473
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12473] = block;
  }

  { // ID: 12474
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12474] = block;
  }

  { // ID: 12475
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12475] = block;
  }

  { // ID: 12476
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12476] = block;
  }

  { // ID: 12477
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12477] = block;
  }

  { // ID: 12478
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12478] = block;
  }

  { // ID: 12479
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12479] = block;
  }

  { // ID: 12480
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12480] = block;
  }

  { // ID: 12481
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12481] = block;
  }

  { // ID: 12482
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12482] = block;
  }

  { // ID: 12483
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12483] = block;
  }

  { // ID: 12484
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12484] = block;
  }

  { // ID: 12485
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12485] = block;
  }

  { // ID: 12486
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12486] = block;
  }

  { // ID: 12487
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12487] = block;
  }

  { // ID: 12488
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12488] = block;
  }

  { // ID: 12489
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12489] = block;
  }

  { // ID: 12490
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12490] = block;
  }

  { // ID: 12491
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12491] = block;
  }

  { // ID: 12492
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12492] = block;
  }

  { // ID: 12493
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12493] = block;
  }

  { // ID: 12494
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12494] = block;
  }

  { // ID: 12495
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12495] = block;
  }

  { // ID: 12496
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12496] = block;
  }

  { // ID: 12497
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12497] = block;
  }

  { // ID: 12498
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12498] = block;
  }

  { // ID: 12499
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12499] = block;
  }

  { // ID: 12500
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12500] = block;
  }

  { // ID: 12501
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12501] = block;
  }

  { // ID: 12502
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12502] = block;
  }

  { // ID: 12503
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_NONE;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12503] = block;
  }

  { // ID: 12504
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12504] = block;
  }

  { // ID: 12505
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12505] = block;
  }

  { // ID: 12506
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12506] = block;
  }

  { // ID: 12507
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12507] = block;
  }

  { // ID: 12508
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12508] = block;
  }

  { // ID: 12509
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12509] = block;
  }

  { // ID: 12510
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12510] = block;
  }

  { // ID: 12511
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12511] = block;
  }

  { // ID: 12512
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12512] = block;
  }

  { // ID: 12513
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12513] = block;
  }

  { // ID: 12514
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12514] = block;
  }

  { // ID: 12515
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12515] = block;
  }

  { // ID: 12516
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12516] = block;
  }

  { // ID: 12517
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12517] = block;
  }

  { // ID: 12518
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12518] = block;
  }

  { // ID: 12519
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12519] = block;
  }

  { // ID: 12520
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12520] = block;
  }

  { // ID: 12521
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12521] = block;
  }

  { // ID: 12522
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12522] = block;
  }

  { // ID: 12523
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12523] = block;
  }

  { // ID: 12524
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12524] = block;
  }

  { // ID: 12525
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12525] = block;
  }

  { // ID: 12526
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12526] = block;
  }

  { // ID: 12527
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12527] = block;
  }

  { // ID: 12528
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12528] = block;
  }

  { // ID: 12529
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12529] = block;
  }

  { // ID: 12530
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12530] = block;
  }

  { // ID: 12531
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12531] = block;
  }

  { // ID: 12532
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12532] = block;
  }

  { // ID: 12533
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12533] = block;
  }

  { // ID: 12534
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12534] = block;
  }

  { // ID: 12535
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12535] = block;
  }

  { // ID: 12536
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12536] = block;
  }

  { // ID: 12537
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12537] = block;
  }

  { // ID: 12538
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12538] = block;
  }

  { // ID: 12539
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12539] = block;
  }

  { // ID: 12540
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12540] = block;
  }

  { // ID: 12541
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12541] = block;
  }

  { // ID: 12542
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12542] = block;
  }

  { // ID: 12543
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12543] = block;
  }

  { // ID: 12544
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12544] = block;
  }

  { // ID: 12545
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12545] = block;
  }

  { // ID: 12546
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12546] = block;
  }

  { // ID: 12547
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12547] = block;
  }

  { // ID: 12548
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12548] = block;
  }

  { // ID: 12549
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12549] = block;
  }

  { // ID: 12550
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12550] = block;
  }

  { // ID: 12551
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12551] = block;
  }

  { // ID: 12552
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12552] = block;
  }

  { // ID: 12553
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12553] = block;
  }

  { // ID: 12554
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12554] = block;
  }

  { // ID: 12555
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12555] = block;
  }

  { // ID: 12556
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12556] = block;
  }

  { // ID: 12557
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12557] = block;
  }

  { // ID: 12558
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12558] = block;
  }

  { // ID: 12559
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12559] = block;
  }

  { // ID: 12560
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12560] = block;
  }

  { // ID: 12561
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12561] = block;
  }

  { // ID: 12562
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12562] = block;
  }

  { // ID: 12563
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12563] = block;
  }

  { // ID: 12564
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12564] = block;
  }

  { // ID: 12565
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12565] = block;
  }

  { // ID: 12566
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12566] = block;
  }

  { // ID: 12567
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12567] = block;
  }

  { // ID: 12568
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12568] = block;
  }

  { // ID: 12569
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12569] = block;
  }

  { // ID: 12570
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12570] = block;
  }

  { // ID: 12571
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12571] = block;
  }

  { // ID: 12572
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12572] = block;
  }

  { // ID: 12573
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12573] = block;
  }

  { // ID: 12574
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12574] = block;
  }

  { // ID: 12575
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12575] = block;
  }

  { // ID: 12576
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12576] = block;
  }

  { // ID: 12577
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12577] = block;
  }

  { // ID: 12578
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12578] = block;
  }

  { // ID: 12579
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12579] = block;
  }

  { // ID: 12580
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12580] = block;
  }

  { // ID: 12581
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12581] = block;
  }

  { // ID: 12582
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12582] = block;
  }

  { // ID: 12583
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12583] = block;
  }

  { // ID: 12584
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12584] = block;
  }

  { // ID: 12585
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12585] = block;
  }

  { // ID: 12586
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12586] = block;
  }

  { // ID: 12587
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12587] = block;
  }

  { // ID: 12588
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12588] = block;
  }

  { // ID: 12589
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12589] = block;
  }

  { // ID: 12590
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12590] = block;
  }

  { // ID: 12591
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12591] = block;
  }

  { // ID: 12592
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12592] = block;
  }

  { // ID: 12593
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12593] = block;
  }

  { // ID: 12594
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12594] = block;
  }

  { // ID: 12595
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12595] = block;
  }

  { // ID: 12596
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12596] = block;
  }

  { // ID: 12597
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12597] = block;
  }

  { // ID: 12598
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12598] = block;
  }

  { // ID: 12599
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12599] = block;
  }

  { // ID: 12600
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12600] = block;
  }

  { // ID: 12601
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12601] = block;
  }

  { // ID: 12602
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12602] = block;
  }

  { // ID: 12603
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12603] = block;
  }

  { // ID: 12604
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12604] = block;
  }

  { // ID: 12605
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12605] = block;
  }

  { // ID: 12606
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12606] = block;
  }

  { // ID: 12607
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12607] = block;
  }

  { // ID: 12608
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12608] = block;
  }

  { // ID: 12609
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12609] = block;
  }

  { // ID: 12610
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12610] = block;
  }

  { // ID: 12611
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_LOW;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12611] = block;
  }

  { // ID: 12612
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12612] = block;
  }

  { // ID: 12613
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12613] = block;
  }

  { // ID: 12614
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12614] = block;
  }

  { // ID: 12615
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12615] = block;
  }

  { // ID: 12616
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12616] = block;
  }

  { // ID: 12617
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12617] = block;
  }

  { // ID: 12618
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12618] = block;
  }

  { // ID: 12619
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12619] = block;
  }

  { // ID: 12620
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12620] = block;
  }

  { // ID: 12621
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12621] = block;
  }

  { // ID: 12622
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12622] = block;
  }

  { // ID: 12623
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12623] = block;
  }

  { // ID: 12624
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12624] = block;
  }

  { // ID: 12625
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12625] = block;
  }

  { // ID: 12626
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12626] = block;
  }

  { // ID: 12627
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12627] = block;
  }

  { // ID: 12628
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12628] = block;
  }

  { // ID: 12629
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12629] = block;
  }

  { // ID: 12630
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12630] = block;
  }

  { // ID: 12631
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12631] = block;
  }

  { // ID: 12632
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12632] = block;
  }

  { // ID: 12633
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12633] = block;
  }

  { // ID: 12634
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12634] = block;
  }

  { // ID: 12635
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12635] = block;
  }

  { // ID: 12636
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12636] = block;
  }

  { // ID: 12637
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12637] = block;
  }

  { // ID: 12638
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12638] = block;
  }

  { // ID: 12639
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12639] = block;
  }

  { // ID: 12640
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12640] = block;
  }

  { // ID: 12641
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12641] = block;
  }

  { // ID: 12642
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12642] = block;
  }

  { // ID: 12643
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12643] = block;
  }

  { // ID: 12644
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12644] = block;
  }

  { // ID: 12645
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12645] = block;
  }

  { // ID: 12646
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12646] = block;
  }

  { // ID: 12647
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_NONE;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12647] = block;
  }

  { // ID: 12648
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12648] = block;
  }

  { // ID: 12649
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12649] = block;
  }

  { // ID: 12650
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12650] = block;
  }

  { // ID: 12651
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12651] = block;
  }

  { // ID: 12652
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12652] = block;
  }

  { // ID: 12653
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12653] = block;
  }

  { // ID: 12654
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12654] = block;
  }

  { // ID: 12655
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12655] = block;
  }

  { // ID: 12656
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12656] = block;
  }

  { // ID: 12657
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12657] = block;
  }

  { // ID: 12658
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12658] = block;
  }

  { // ID: 12659
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12659] = block;
  }

  { // ID: 12660
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12660] = block;
  }

  { // ID: 12661
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12661] = block;
  }

  { // ID: 12662
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12662] = block;
  }

  { // ID: 12663
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12663] = block;
  }

  { // ID: 12664
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12664] = block;
  }

  { // ID: 12665
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12665] = block;
  }

  { // ID: 12666
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12666] = block;
  }

  { // ID: 12667
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12667] = block;
  }

  { // ID: 12668
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12668] = block;
  }

  { // ID: 12669
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12669] = block;
  }

  { // ID: 12670
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12670] = block;
  }

  { // ID: 12671
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12671] = block;
  }

  { // ID: 12672
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12672] = block;
  }

  { // ID: 12673
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12673] = block;
  }

  { // ID: 12674
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12674] = block;
  }

  { // ID: 12675
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12675] = block;
  }

  { // ID: 12676
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12676] = block;
  }

  { // ID: 12677
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12677] = block;
  }

  { // ID: 12678
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12678] = block;
  }

  { // ID: 12679
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12679] = block;
  }

  { // ID: 12680
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12680] = block;
  }

  { // ID: 12681
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12681] = block;
  }

  { // ID: 12682
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12682] = block;
  }

  { // ID: 12683
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_LOW;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12683] = block;
  }

  { // ID: 12684
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12684] = block;
  }

  { // ID: 12685
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12685] = block;
  }

  { // ID: 12686
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12686] = block;
  }

  { // ID: 12687
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12687] = block;
  }

  { // ID: 12688
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12688] = block;
  }

  { // ID: 12689
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12689] = block;
  }

  { // ID: 12690
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12690] = block;
  }

  { // ID: 12691
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12691] = block;
  }

  { // ID: 12692
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12692] = block;
  }

  { // ID: 12693
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12693] = block;
  }

  { // ID: 12694
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12694] = block;
  }

  { // ID: 12695
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_NONE;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12695] = block;
  }

  { // ID: 12696
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12696] = block;
  }

  { // ID: 12697
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12697] = block;
  }

  { // ID: 12698
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12698] = block;
  }

  { // ID: 12699
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12699] = block;
  }

  { // ID: 12700
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12700] = block;
  }

  { // ID: 12701
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12701] = block;
  }

  { // ID: 12702
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12702] = block;
  }

  { // ID: 12703
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12703] = block;
  }

  { // ID: 12704
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12704] = block;
  }

  { // ID: 12705
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12705] = block;
  }

  { // ID: 12706
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12706] = block;
  }

  { // ID: 12707
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_LOW;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12707] = block;
  }

  { // ID: 12708
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12708] = block;
  }

  { // ID: 12709
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12709] = block;
  }

  { // ID: 12710
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12710] = block;
  }

  { // ID: 12711
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12711] = block;
  }

  { // ID: 12712
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12712] = block;
  }

  { // ID: 12713
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_TRUE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12713] = block;
  }

  { // ID: 12714
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12714] = block;
  }

  { // ID: 12715
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12715] = block;
  }

  { // ID: 12716
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_TRUE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12716] = block;
  }

  { // ID: 12717
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_NONE;
    registry[12717] = block;
  }

  { // ID: 12718
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_LOW;
    registry[12718] = block;
  }

  { // ID: 12719
    std::shared_ptr<RedSandstoneWallBlock> block = std::make_shared<RedSandstoneWallBlock>();
    block->east = RedSandstoneWallBlock::EAST_TALL;
    block->north = RedSandstoneWallBlock::NORTH_TALL;
    block->south = RedSandstoneWallBlock::SOUTH_TALL;
    block->up = RedSandstoneWallBlock::UP_FALSE;
    block->waterlogged = RedSandstoneWallBlock::WATERLOGGED_FALSE;
    block->west = RedSandstoneWallBlock::WEST_TALL;
    registry[12719] = block;
  }

  { // ID: 14664
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14664] = block;
  }

  { // ID: 14665
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14665] = block;
  }

  { // ID: 14666
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14666] = block;
  }

  { // ID: 14667
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14667] = block;
  }

  { // ID: 14668
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14668] = block;
  }

  { // ID: 14669
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14669] = block;
  }

  { // ID: 14670
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14670] = block;
  }

  { // ID: 14671
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14671] = block;
  }

  { // ID: 14672
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14672] = block;
  }

  { // ID: 14673
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14673] = block;
  }

  { // ID: 14674
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14674] = block;
  }

  { // ID: 14675
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14675] = block;
  }

  { // ID: 14676
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14676] = block;
  }

  { // ID: 14677
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14677] = block;
  }

  { // ID: 14678
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14678] = block;
  }

  { // ID: 14679
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14679] = block;
  }

  { // ID: 14680
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14680] = block;
  }

  { // ID: 14681
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14681] = block;
  }

  { // ID: 14682
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14682] = block;
  }

  { // ID: 14683
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14683] = block;
  }

  { // ID: 14684
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14684] = block;
  }

  { // ID: 14685
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14685] = block;
  }

  { // ID: 14686
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14686] = block;
  }

  { // ID: 14687
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14687] = block;
  }

  { // ID: 14688
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14688] = block;
  }

  { // ID: 14689
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14689] = block;
  }

  { // ID: 14690
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14690] = block;
  }

  { // ID: 14691
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14691] = block;
  }

  { // ID: 14692
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14692] = block;
  }

  { // ID: 14693
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14693] = block;
  }

  { // ID: 14694
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14694] = block;
  }

  { // ID: 14695
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14695] = block;
  }

  { // ID: 14696
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14696] = block;
  }

  { // ID: 14697
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14697] = block;
  }

  { // ID: 14698
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14698] = block;
  }

  { // ID: 14699
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14699] = block;
  }

  { // ID: 14700
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14700] = block;
  }

  { // ID: 14701
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14701] = block;
  }

  { // ID: 14702
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14702] = block;
  }

  { // ID: 14703
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14703] = block;
  }

  { // ID: 14704
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14704] = block;
  }

  { // ID: 14705
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14705] = block;
  }

  { // ID: 14706
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14706] = block;
  }

  { // ID: 14707
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14707] = block;
  }

  { // ID: 14708
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14708] = block;
  }

  { // ID: 14709
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14709] = block;
  }

  { // ID: 14710
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14710] = block;
  }

  { // ID: 14711
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14711] = block;
  }

  { // ID: 14712
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14712] = block;
  }

  { // ID: 14713
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14713] = block;
  }

  { // ID: 14714
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14714] = block;
  }

  { // ID: 14715
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14715] = block;
  }

  { // ID: 14716
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14716] = block;
  }

  { // ID: 14717
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14717] = block;
  }

  { // ID: 14718
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14718] = block;
  }

  { // ID: 14719
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14719] = block;
  }

  { // ID: 14720
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14720] = block;
  }

  { // ID: 14721
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14721] = block;
  }

  { // ID: 14722
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14722] = block;
  }

  { // ID: 14723
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14723] = block;
  }

  { // ID: 14724
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14724] = block;
  }

  { // ID: 14725
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14725] = block;
  }

  { // ID: 14726
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14726] = block;
  }

  { // ID: 14727
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14727] = block;
  }

  { // ID: 14728
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14728] = block;
  }

  { // ID: 14729
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14729] = block;
  }

  { // ID: 14730
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14730] = block;
  }

  { // ID: 14731
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14731] = block;
  }

  { // ID: 14732
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14732] = block;
  }

  { // ID: 14733
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14733] = block;
  }

  { // ID: 14734
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14734] = block;
  }

  { // ID: 14735
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14735] = block;
  }

  { // ID: 14736
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14736] = block;
  }

  { // ID: 14737
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14737] = block;
  }

  { // ID: 14738
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14738] = block;
  }

  { // ID: 14739
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14739] = block;
  }

  { // ID: 14740
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14740] = block;
  }

  { // ID: 14741
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14741] = block;
  }

  { // ID: 14742
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14742] = block;
  }

  { // ID: 14743
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14743] = block;
  }

  { // ID: 14744
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14744] = block;
  }

  { // ID: 14745
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14745] = block;
  }

  { // ID: 14746
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14746] = block;
  }

  { // ID: 14747
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14747] = block;
  }

  { // ID: 14748
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14748] = block;
  }

  { // ID: 14749
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14749] = block;
  }

  { // ID: 14750
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14750] = block;
  }

  { // ID: 14751
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14751] = block;
  }

  { // ID: 14752
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14752] = block;
  }

  { // ID: 14753
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14753] = block;
  }

  { // ID: 14754
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14754] = block;
  }

  { // ID: 14755
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14755] = block;
  }

  { // ID: 14756
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14756] = block;
  }

  { // ID: 14757
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14757] = block;
  }

  { // ID: 14758
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14758] = block;
  }

  { // ID: 14759
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14759] = block;
  }

  { // ID: 14760
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14760] = block;
  }

  { // ID: 14761
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14761] = block;
  }

  { // ID: 14762
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14762] = block;
  }

  { // ID: 14763
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14763] = block;
  }

  { // ID: 14764
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14764] = block;
  }

  { // ID: 14765
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14765] = block;
  }

  { // ID: 14766
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14766] = block;
  }

  { // ID: 14767
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14767] = block;
  }

  { // ID: 14768
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14768] = block;
  }

  { // ID: 14769
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14769] = block;
  }

  { // ID: 14770
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14770] = block;
  }

  { // ID: 14771
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_NONE;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14771] = block;
  }

  { // ID: 14772
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14772] = block;
  }

  { // ID: 14773
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14773] = block;
  }

  { // ID: 14774
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14774] = block;
  }

  { // ID: 14775
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14775] = block;
  }

  { // ID: 14776
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14776] = block;
  }

  { // ID: 14777
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14777] = block;
  }

  { // ID: 14778
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14778] = block;
  }

  { // ID: 14779
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14779] = block;
  }

  { // ID: 14780
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14780] = block;
  }

  { // ID: 14781
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14781] = block;
  }

  { // ID: 14782
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14782] = block;
  }

  { // ID: 14783
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14783] = block;
  }

  { // ID: 14784
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14784] = block;
  }

  { // ID: 14785
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14785] = block;
  }

  { // ID: 14786
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14786] = block;
  }

  { // ID: 14787
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14787] = block;
  }

  { // ID: 14788
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14788] = block;
  }

  { // ID: 14789
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14789] = block;
  }

  { // ID: 14790
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14790] = block;
  }

  { // ID: 14791
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14791] = block;
  }

  { // ID: 14792
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14792] = block;
  }

  { // ID: 14793
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14793] = block;
  }

  { // ID: 14794
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14794] = block;
  }

  { // ID: 14795
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14795] = block;
  }

  { // ID: 14796
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14796] = block;
  }

  { // ID: 14797
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14797] = block;
  }

  { // ID: 14798
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14798] = block;
  }

  { // ID: 14799
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14799] = block;
  }

  { // ID: 14800
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14800] = block;
  }

  { // ID: 14801
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14801] = block;
  }

  { // ID: 14802
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14802] = block;
  }

  { // ID: 14803
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14803] = block;
  }

  { // ID: 14804
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14804] = block;
  }

  { // ID: 14805
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14805] = block;
  }

  { // ID: 14806
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14806] = block;
  }

  { // ID: 14807
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14807] = block;
  }

  { // ID: 14808
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14808] = block;
  }

  { // ID: 14809
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14809] = block;
  }

  { // ID: 14810
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14810] = block;
  }

  { // ID: 14811
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14811] = block;
  }

  { // ID: 14812
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14812] = block;
  }

  { // ID: 14813
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14813] = block;
  }

  { // ID: 14814
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14814] = block;
  }

  { // ID: 14815
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14815] = block;
  }

  { // ID: 14816
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14816] = block;
  }

  { // ID: 14817
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14817] = block;
  }

  { // ID: 14818
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14818] = block;
  }

  { // ID: 14819
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14819] = block;
  }

  { // ID: 14820
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14820] = block;
  }

  { // ID: 14821
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14821] = block;
  }

  { // ID: 14822
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14822] = block;
  }

  { // ID: 14823
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14823] = block;
  }

  { // ID: 14824
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14824] = block;
  }

  { // ID: 14825
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14825] = block;
  }

  { // ID: 14826
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14826] = block;
  }

  { // ID: 14827
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14827] = block;
  }

  { // ID: 14828
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14828] = block;
  }

  { // ID: 14829
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14829] = block;
  }

  { // ID: 14830
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14830] = block;
  }

  { // ID: 14831
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14831] = block;
  }

  { // ID: 14832
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14832] = block;
  }

  { // ID: 14833
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14833] = block;
  }

  { // ID: 14834
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14834] = block;
  }

  { // ID: 14835
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14835] = block;
  }

  { // ID: 14836
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14836] = block;
  }

  { // ID: 14837
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14837] = block;
  }

  { // ID: 14838
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14838] = block;
  }

  { // ID: 14839
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14839] = block;
  }

  { // ID: 14840
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14840] = block;
  }

  { // ID: 14841
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14841] = block;
  }

  { // ID: 14842
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14842] = block;
  }

  { // ID: 14843
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14843] = block;
  }

  { // ID: 14844
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14844] = block;
  }

  { // ID: 14845
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14845] = block;
  }

  { // ID: 14846
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14846] = block;
  }

  { // ID: 14847
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14847] = block;
  }

  { // ID: 14848
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14848] = block;
  }

  { // ID: 14849
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14849] = block;
  }

  { // ID: 14850
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14850] = block;
  }

  { // ID: 14851
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14851] = block;
  }

  { // ID: 14852
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14852] = block;
  }

  { // ID: 14853
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14853] = block;
  }

  { // ID: 14854
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14854] = block;
  }

  { // ID: 14855
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14855] = block;
  }

  { // ID: 14856
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14856] = block;
  }

  { // ID: 14857
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14857] = block;
  }

  { // ID: 14858
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14858] = block;
  }

  { // ID: 14859
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14859] = block;
  }

  { // ID: 14860
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14860] = block;
  }

  { // ID: 14861
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14861] = block;
  }

  { // ID: 14862
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14862] = block;
  }

  { // ID: 14863
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14863] = block;
  }

  { // ID: 14864
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14864] = block;
  }

  { // ID: 14865
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14865] = block;
  }

  { // ID: 14866
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14866] = block;
  }

  { // ID: 14867
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14867] = block;
  }

  { // ID: 14868
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14868] = block;
  }

  { // ID: 14869
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14869] = block;
  }

  { // ID: 14870
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14870] = block;
  }

  { // ID: 14871
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14871] = block;
  }

  { // ID: 14872
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14872] = block;
  }

  { // ID: 14873
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14873] = block;
  }

  { // ID: 14874
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14874] = block;
  }

  { // ID: 14875
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14875] = block;
  }

  { // ID: 14876
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14876] = block;
  }

  { // ID: 14877
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14877] = block;
  }

  { // ID: 14878
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14878] = block;
  }

  { // ID: 14879
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_LOW;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14879] = block;
  }

  { // ID: 14880
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14880] = block;
  }

  { // ID: 14881
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14881] = block;
  }

  { // ID: 14882
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14882] = block;
  }

  { // ID: 14883
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14883] = block;
  }

  { // ID: 14884
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14884] = block;
  }

  { // ID: 14885
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14885] = block;
  }

  { // ID: 14886
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14886] = block;
  }

  { // ID: 14887
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14887] = block;
  }

  { // ID: 14888
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14888] = block;
  }

  { // ID: 14889
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14889] = block;
  }

  { // ID: 14890
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14890] = block;
  }

  { // ID: 14891
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14891] = block;
  }

  { // ID: 14892
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14892] = block;
  }

  { // ID: 14893
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14893] = block;
  }

  { // ID: 14894
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14894] = block;
  }

  { // ID: 14895
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14895] = block;
  }

  { // ID: 14896
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14896] = block;
  }

  { // ID: 14897
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14897] = block;
  }

  { // ID: 14898
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14898] = block;
  }

  { // ID: 14899
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14899] = block;
  }

  { // ID: 14900
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14900] = block;
  }

  { // ID: 14901
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14901] = block;
  }

  { // ID: 14902
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14902] = block;
  }

  { // ID: 14903
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14903] = block;
  }

  { // ID: 14904
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14904] = block;
  }

  { // ID: 14905
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14905] = block;
  }

  { // ID: 14906
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14906] = block;
  }

  { // ID: 14907
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14907] = block;
  }

  { // ID: 14908
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14908] = block;
  }

  { // ID: 14909
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14909] = block;
  }

  { // ID: 14910
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14910] = block;
  }

  { // ID: 14911
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14911] = block;
  }

  { // ID: 14912
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14912] = block;
  }

  { // ID: 14913
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14913] = block;
  }

  { // ID: 14914
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14914] = block;
  }

  { // ID: 14915
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_NONE;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14915] = block;
  }

  { // ID: 14916
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14916] = block;
  }

  { // ID: 14917
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14917] = block;
  }

  { // ID: 14918
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14918] = block;
  }

  { // ID: 14919
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14919] = block;
  }

  { // ID: 14920
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14920] = block;
  }

  { // ID: 14921
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14921] = block;
  }

  { // ID: 14922
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14922] = block;
  }

  { // ID: 14923
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14923] = block;
  }

  { // ID: 14924
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14924] = block;
  }

  { // ID: 14925
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14925] = block;
  }

  { // ID: 14926
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14926] = block;
  }

  { // ID: 14927
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14927] = block;
  }

  { // ID: 14928
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14928] = block;
  }

  { // ID: 14929
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14929] = block;
  }

  { // ID: 14930
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14930] = block;
  }

  { // ID: 14931
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14931] = block;
  }

  { // ID: 14932
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14932] = block;
  }

  { // ID: 14933
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14933] = block;
  }

  { // ID: 14934
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14934] = block;
  }

  { // ID: 14935
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14935] = block;
  }

  { // ID: 14936
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14936] = block;
  }

  { // ID: 14937
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14937] = block;
  }

  { // ID: 14938
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14938] = block;
  }

  { // ID: 14939
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14939] = block;
  }

  { // ID: 14940
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14940] = block;
  }

  { // ID: 14941
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14941] = block;
  }

  { // ID: 14942
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14942] = block;
  }

  { // ID: 14943
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14943] = block;
  }

  { // ID: 14944
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14944] = block;
  }

  { // ID: 14945
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14945] = block;
  }

  { // ID: 14946
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14946] = block;
  }

  { // ID: 14947
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14947] = block;
  }

  { // ID: 14948
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14948] = block;
  }

  { // ID: 14949
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14949] = block;
  }

  { // ID: 14950
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14950] = block;
  }

  { // ID: 14951
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_LOW;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14951] = block;
  }

  { // ID: 14952
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14952] = block;
  }

  { // ID: 14953
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14953] = block;
  }

  { // ID: 14954
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14954] = block;
  }

  { // ID: 14955
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14955] = block;
  }

  { // ID: 14956
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14956] = block;
  }

  { // ID: 14957
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14957] = block;
  }

  { // ID: 14958
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14958] = block;
  }

  { // ID: 14959
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14959] = block;
  }

  { // ID: 14960
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14960] = block;
  }

  { // ID: 14961
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14961] = block;
  }

  { // ID: 14962
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14962] = block;
  }

  { // ID: 14963
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_NONE;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14963] = block;
  }

  { // ID: 14964
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14964] = block;
  }

  { // ID: 14965
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14965] = block;
  }

  { // ID: 14966
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14966] = block;
  }

  { // ID: 14967
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14967] = block;
  }

  { // ID: 14968
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14968] = block;
  }

  { // ID: 14969
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14969] = block;
  }

  { // ID: 14970
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14970] = block;
  }

  { // ID: 14971
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14971] = block;
  }

  { // ID: 14972
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14972] = block;
  }

  { // ID: 14973
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14973] = block;
  }

  { // ID: 14974
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14974] = block;
  }

  { // ID: 14975
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_LOW;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14975] = block;
  }

  { // ID: 14976
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14976] = block;
  }

  { // ID: 14977
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14977] = block;
  }

  { // ID: 14978
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14978] = block;
  }

  { // ID: 14979
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14979] = block;
  }

  { // ID: 14980
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14980] = block;
  }

  { // ID: 14981
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_TRUE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14981] = block;
  }

  { // ID: 14982
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14982] = block;
  }

  { // ID: 14983
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14983] = block;
  }

  { // ID: 14984
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14984] = block;
  }

  { // ID: 14985
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_NONE;
    registry[14985] = block;
  }

  { // ID: 14986
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_LOW;
    registry[14986] = block;
  }

  { // ID: 14987
    std::shared_ptr<RedNetherBrickWallBlock> block = std::make_shared<RedNetherBrickWallBlock>();
    block->east = RedNetherBrickWallBlock::EAST_TALL;
    block->north = RedNetherBrickWallBlock::NORTH_TALL;
    block->south = RedNetherBrickWallBlock::SOUTH_TALL;
    block->up = RedNetherBrickWallBlock::UP_FALSE;
    block->waterlogged = RedNetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = RedNetherBrickWallBlock::WEST_TALL;
    registry[14987] = block;
  }

  { // ID: 17038
    std::shared_ptr<RespawnAnchorBlock> block = std::make_shared<RespawnAnchorBlock>();
    block->charges = RespawnAnchorBlock::CHARGES_0;
    registry[17038] = block;
  }

  { // ID: 17039
    std::shared_ptr<RespawnAnchorBlock> block = std::make_shared<RespawnAnchorBlock>();
    block->charges = RespawnAnchorBlock::CHARGES_1;
    registry[17039] = block;
  }

  { // ID: 17040
    std::shared_ptr<RespawnAnchorBlock> block = std::make_shared<RespawnAnchorBlock>();
    block->charges = RespawnAnchorBlock::CHARGES_2;
    registry[17040] = block;
  }

  { // ID: 17041
    std::shared_ptr<RespawnAnchorBlock> block = std::make_shared<RespawnAnchorBlock>();
    block->charges = RespawnAnchorBlock::CHARGES_3;
    registry[17041] = block;
  }

  { // ID: 17042
    std::shared_ptr<RespawnAnchorBlock> block = std::make_shared<RespawnAnchorBlock>();
    block->charges = RespawnAnchorBlock::CHARGES_4;
    registry[17042] = block;
  }

  { // ID: 18553
    std::shared_ptr<RedCandleBlock> block = std::make_shared<RedCandleBlock>();
    block->candles = RedCandleBlock::CANDLES_1;
    block->lit = RedCandleBlock::LIT_TRUE;
    block->waterlogged = RedCandleBlock::WATERLOGGED_TRUE;
    registry[18553] = block;
  }

  { // ID: 18554
    std::shared_ptr<RedCandleBlock> block = std::make_shared<RedCandleBlock>();
    block->candles = RedCandleBlock::CANDLES_1;
    block->lit = RedCandleBlock::LIT_TRUE;
    block->waterlogged = RedCandleBlock::WATERLOGGED_FALSE;
    registry[18554] = block;
  }

  { // ID: 18555
    std::shared_ptr<RedCandleBlock> block = std::make_shared<RedCandleBlock>();
    block->candles = RedCandleBlock::CANDLES_1;
    block->lit = RedCandleBlock::LIT_FALSE;
    block->waterlogged = RedCandleBlock::WATERLOGGED_TRUE;
    registry[18555] = block;
  }

  { // ID: 18556
    std::shared_ptr<RedCandleBlock> block = std::make_shared<RedCandleBlock>();
    block->candles = RedCandleBlock::CANDLES_1;
    block->lit = RedCandleBlock::LIT_FALSE;
    block->waterlogged = RedCandleBlock::WATERLOGGED_FALSE;
    registry[18556] = block;
  }

  { // ID: 18557
    std::shared_ptr<RedCandleBlock> block = std::make_shared<RedCandleBlock>();
    block->candles = RedCandleBlock::CANDLES_2;
    block->lit = RedCandleBlock::LIT_TRUE;
    block->waterlogged = RedCandleBlock::WATERLOGGED_TRUE;
    registry[18557] = block;
  }

  { // ID: 18558
    std::shared_ptr<RedCandleBlock> block = std::make_shared<RedCandleBlock>();
    block->candles = RedCandleBlock::CANDLES_2;
    block->lit = RedCandleBlock::LIT_TRUE;
    block->waterlogged = RedCandleBlock::WATERLOGGED_FALSE;
    registry[18558] = block;
  }

  { // ID: 18559
    std::shared_ptr<RedCandleBlock> block = std::make_shared<RedCandleBlock>();
    block->candles = RedCandleBlock::CANDLES_2;
    block->lit = RedCandleBlock::LIT_FALSE;
    block->waterlogged = RedCandleBlock::WATERLOGGED_TRUE;
    registry[18559] = block;
  }

  { // ID: 18560
    std::shared_ptr<RedCandleBlock> block = std::make_shared<RedCandleBlock>();
    block->candles = RedCandleBlock::CANDLES_2;
    block->lit = RedCandleBlock::LIT_FALSE;
    block->waterlogged = RedCandleBlock::WATERLOGGED_FALSE;
    registry[18560] = block;
  }

  { // ID: 18561
    std::shared_ptr<RedCandleBlock> block = std::make_shared<RedCandleBlock>();
    block->candles = RedCandleBlock::CANDLES_3;
    block->lit = RedCandleBlock::LIT_TRUE;
    block->waterlogged = RedCandleBlock::WATERLOGGED_TRUE;
    registry[18561] = block;
  }

  { // ID: 18562
    std::shared_ptr<RedCandleBlock> block = std::make_shared<RedCandleBlock>();
    block->candles = RedCandleBlock::CANDLES_3;
    block->lit = RedCandleBlock::LIT_TRUE;
    block->waterlogged = RedCandleBlock::WATERLOGGED_FALSE;
    registry[18562] = block;
  }

  { // ID: 18563
    std::shared_ptr<RedCandleBlock> block = std::make_shared<RedCandleBlock>();
    block->candles = RedCandleBlock::CANDLES_3;
    block->lit = RedCandleBlock::LIT_FALSE;
    block->waterlogged = RedCandleBlock::WATERLOGGED_TRUE;
    registry[18563] = block;
  }

  { // ID: 18564
    std::shared_ptr<RedCandleBlock> block = std::make_shared<RedCandleBlock>();
    block->candles = RedCandleBlock::CANDLES_3;
    block->lit = RedCandleBlock::LIT_FALSE;
    block->waterlogged = RedCandleBlock::WATERLOGGED_FALSE;
    registry[18564] = block;
  }

  { // ID: 18565
    std::shared_ptr<RedCandleBlock> block = std::make_shared<RedCandleBlock>();
    block->candles = RedCandleBlock::CANDLES_4;
    block->lit = RedCandleBlock::LIT_TRUE;
    block->waterlogged = RedCandleBlock::WATERLOGGED_TRUE;
    registry[18565] = block;
  }

  { // ID: 18566
    std::shared_ptr<RedCandleBlock> block = std::make_shared<RedCandleBlock>();
    block->candles = RedCandleBlock::CANDLES_4;
    block->lit = RedCandleBlock::LIT_TRUE;
    block->waterlogged = RedCandleBlock::WATERLOGGED_FALSE;
    registry[18566] = block;
  }

  { // ID: 18567
    std::shared_ptr<RedCandleBlock> block = std::make_shared<RedCandleBlock>();
    block->candles = RedCandleBlock::CANDLES_4;
    block->lit = RedCandleBlock::LIT_FALSE;
    block->waterlogged = RedCandleBlock::WATERLOGGED_TRUE;
    registry[18567] = block;
  }

  { // ID: 18568
    std::shared_ptr<RedCandleBlock> block = std::make_shared<RedCandleBlock>();
    block->candles = RedCandleBlock::CANDLES_4;
    block->lit = RedCandleBlock::LIT_FALSE;
    block->waterlogged = RedCandleBlock::WATERLOGGED_FALSE;
    registry[18568] = block;
  }

  { // ID: 18615
    std::shared_ptr<RedCandleCakeBlock> block = std::make_shared<RedCandleCakeBlock>();
    block->lit = RedCandleCakeBlock::LIT_TRUE;
    registry[18615] = block;
  }

  { // ID: 18616
    std::shared_ptr<RedCandleCakeBlock> block = std::make_shared<RedCandleCakeBlock>();
    block->lit = RedCandleCakeBlock::LIT_FALSE;
    registry[18616] = block;
  }

  { // ID: 19776
    std::shared_ptr<RootedDirtBlock> block = std::make_shared<RootedDirtBlock>();
    registry[19776] = block;
  }

  { // ID: 21432
    std::shared_ptr<RawIronBlockBlock> block = std::make_shared<RawIronBlockBlock>();
    registry[21432] = block;
  }

  { // ID: 21433
    std::shared_ptr<RawCopperBlockBlock> block = std::make_shared<RawCopperBlockBlock>();
    registry[21433] = block;
  }

  { // ID: 21434
    std::shared_ptr<RawGoldBlockBlock> block = std::make_shared<RawGoldBlockBlock>();
    registry[21434] = block;
  }

  { // ID: 21447
    std::shared_ptr<ReinforcedDeepslateBlock> block = std::make_shared<ReinforcedDeepslateBlock>();
    registry[21447] = block;
  }
}