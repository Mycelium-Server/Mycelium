

#include "block_registry.h"

#include "gilded_blackstone_block.h"
#include "glass_block.h"
#include "glass_pane_block.h"
#include "glow_lichen_block.h"
#include "glowstone_block.h"
#include "gold_block_block.h"
#include "gold_ore_block.h"
#include "granite_block.h"
#include "granite_slab_block.h"
#include "granite_stairs_block.h"
#include "granite_wall_block.h"
#include "grass_block.h"
#include "grass_block_block.h"
#include "gravel_block.h"
#include "gray_banner_block.h"
#include "gray_bed_block.h"
#include "gray_candle_block.h"
#include "gray_candle_cake_block.h"
#include "gray_carpet_block.h"
#include "gray_concrete_block.h"
#include "gray_concrete_powder_block.h"
#include "gray_glazed_terracotta_block.h"
#include "gray_shulker_box_block.h"
#include "gray_stained_glass_block.h"
#include "gray_stained_glass_pane_block.h"
#include "gray_terracotta_block.h"
#include "gray_wall_banner_block.h"
#include "gray_wool_block.h"
#include "green_banner_block.h"
#include "green_bed_block.h"
#include "green_candle_block.h"
#include "green_candle_cake_block.h"
#include "green_carpet_block.h"
#include "green_concrete_block.h"
#include "green_concrete_powder_block.h"
#include "green_glazed_terracotta_block.h"
#include "green_shulker_box_block.h"
#include "green_stained_glass_block.h"
#include "green_stained_glass_pane_block.h"
#include "green_terracotta_block.h"
#include "green_wall_banner_block.h"
#include "green_wool_block.h"
#include "grindstone_block.h"

void BlockRegistry::generateG() {

  { // ID: 2
    std::shared_ptr<GraniteBlock> block = std::make_shared<GraniteBlock>();
    registry[2] = block;
  }

  { // ID: 8
    std::shared_ptr<GrassBlockBlock> block = std::make_shared<GrassBlockBlock>();
    block->snowy = GrassBlockBlock::SNOWY_TRUE;
    registry[8] = block;
  }

  { // ID: 9
    std::shared_ptr<GrassBlockBlock> block = std::make_shared<GrassBlockBlock>();
    block->snowy = GrassBlockBlock::SNOWY_FALSE;
    registry[9] = block;
  }

  { // ID: 109
    std::shared_ptr<GravelBlock> block = std::make_shared<GravelBlock>();
    registry[109] = block;
  }

  { // ID: 110
    std::shared_ptr<GoldOreBlock> block = std::make_shared<GoldOreBlock>();
    registry[110] = block;
  }

  { // ID: 460
    std::shared_ptr<GlassBlock> block = std::make_shared<GlassBlock>();
    registry[460] = block;
  }

  { // ID: 1391
    std::shared_ptr<GrayBedBlock> block = std::make_shared<GrayBedBlock>();
    block->facing = GrayBedBlock::FACING_NORTH;
    block->occupied = GrayBedBlock::OCCUPIED_TRUE;
    block->part = GrayBedBlock::PART_HEAD;
    registry[1391] = block;
  }

  { // ID: 1392
    std::shared_ptr<GrayBedBlock> block = std::make_shared<GrayBedBlock>();
    block->facing = GrayBedBlock::FACING_NORTH;
    block->occupied = GrayBedBlock::OCCUPIED_TRUE;
    block->part = GrayBedBlock::PART_FOOT;
    registry[1392] = block;
  }

  { // ID: 1393
    std::shared_ptr<GrayBedBlock> block = std::make_shared<GrayBedBlock>();
    block->facing = GrayBedBlock::FACING_NORTH;
    block->occupied = GrayBedBlock::OCCUPIED_FALSE;
    block->part = GrayBedBlock::PART_HEAD;
    registry[1393] = block;
  }

  { // ID: 1394
    std::shared_ptr<GrayBedBlock> block = std::make_shared<GrayBedBlock>();
    block->facing = GrayBedBlock::FACING_NORTH;
    block->occupied = GrayBedBlock::OCCUPIED_FALSE;
    block->part = GrayBedBlock::PART_FOOT;
    registry[1394] = block;
  }

  { // ID: 1395
    std::shared_ptr<GrayBedBlock> block = std::make_shared<GrayBedBlock>();
    block->facing = GrayBedBlock::FACING_SOUTH;
    block->occupied = GrayBedBlock::OCCUPIED_TRUE;
    block->part = GrayBedBlock::PART_HEAD;
    registry[1395] = block;
  }

  { // ID: 1396
    std::shared_ptr<GrayBedBlock> block = std::make_shared<GrayBedBlock>();
    block->facing = GrayBedBlock::FACING_SOUTH;
    block->occupied = GrayBedBlock::OCCUPIED_TRUE;
    block->part = GrayBedBlock::PART_FOOT;
    registry[1396] = block;
  }

  { // ID: 1397
    std::shared_ptr<GrayBedBlock> block = std::make_shared<GrayBedBlock>();
    block->facing = GrayBedBlock::FACING_SOUTH;
    block->occupied = GrayBedBlock::OCCUPIED_FALSE;
    block->part = GrayBedBlock::PART_HEAD;
    registry[1397] = block;
  }

  { // ID: 1398
    std::shared_ptr<GrayBedBlock> block = std::make_shared<GrayBedBlock>();
    block->facing = GrayBedBlock::FACING_SOUTH;
    block->occupied = GrayBedBlock::OCCUPIED_FALSE;
    block->part = GrayBedBlock::PART_FOOT;
    registry[1398] = block;
  }

  { // ID: 1399
    std::shared_ptr<GrayBedBlock> block = std::make_shared<GrayBedBlock>();
    block->facing = GrayBedBlock::FACING_WEST;
    block->occupied = GrayBedBlock::OCCUPIED_TRUE;
    block->part = GrayBedBlock::PART_HEAD;
    registry[1399] = block;
  }

  { // ID: 1400
    std::shared_ptr<GrayBedBlock> block = std::make_shared<GrayBedBlock>();
    block->facing = GrayBedBlock::FACING_WEST;
    block->occupied = GrayBedBlock::OCCUPIED_TRUE;
    block->part = GrayBedBlock::PART_FOOT;
    registry[1400] = block;
  }

  { // ID: 1401
    std::shared_ptr<GrayBedBlock> block = std::make_shared<GrayBedBlock>();
    block->facing = GrayBedBlock::FACING_WEST;
    block->occupied = GrayBedBlock::OCCUPIED_FALSE;
    block->part = GrayBedBlock::PART_HEAD;
    registry[1401] = block;
  }

  { // ID: 1402
    std::shared_ptr<GrayBedBlock> block = std::make_shared<GrayBedBlock>();
    block->facing = GrayBedBlock::FACING_WEST;
    block->occupied = GrayBedBlock::OCCUPIED_FALSE;
    block->part = GrayBedBlock::PART_FOOT;
    registry[1402] = block;
  }

  { // ID: 1403
    std::shared_ptr<GrayBedBlock> block = std::make_shared<GrayBedBlock>();
    block->facing = GrayBedBlock::FACING_EAST;
    block->occupied = GrayBedBlock::OCCUPIED_TRUE;
    block->part = GrayBedBlock::PART_HEAD;
    registry[1403] = block;
  }

  { // ID: 1404
    std::shared_ptr<GrayBedBlock> block = std::make_shared<GrayBedBlock>();
    block->facing = GrayBedBlock::FACING_EAST;
    block->occupied = GrayBedBlock::OCCUPIED_TRUE;
    block->part = GrayBedBlock::PART_FOOT;
    registry[1404] = block;
  }

  { // ID: 1405
    std::shared_ptr<GrayBedBlock> block = std::make_shared<GrayBedBlock>();
    block->facing = GrayBedBlock::FACING_EAST;
    block->occupied = GrayBedBlock::OCCUPIED_FALSE;
    block->part = GrayBedBlock::PART_HEAD;
    registry[1405] = block;
  }

  { // ID: 1406
    std::shared_ptr<GrayBedBlock> block = std::make_shared<GrayBedBlock>();
    block->facing = GrayBedBlock::FACING_EAST;
    block->occupied = GrayBedBlock::OCCUPIED_FALSE;
    block->part = GrayBedBlock::PART_FOOT;
    registry[1406] = block;
  }

  { // ID: 1487
    std::shared_ptr<GreenBedBlock> block = std::make_shared<GreenBedBlock>();
    block->facing = GreenBedBlock::FACING_NORTH;
    block->occupied = GreenBedBlock::OCCUPIED_TRUE;
    block->part = GreenBedBlock::PART_HEAD;
    registry[1487] = block;
  }

  { // ID: 1488
    std::shared_ptr<GreenBedBlock> block = std::make_shared<GreenBedBlock>();
    block->facing = GreenBedBlock::FACING_NORTH;
    block->occupied = GreenBedBlock::OCCUPIED_TRUE;
    block->part = GreenBedBlock::PART_FOOT;
    registry[1488] = block;
  }

  { // ID: 1489
    std::shared_ptr<GreenBedBlock> block = std::make_shared<GreenBedBlock>();
    block->facing = GreenBedBlock::FACING_NORTH;
    block->occupied = GreenBedBlock::OCCUPIED_FALSE;
    block->part = GreenBedBlock::PART_HEAD;
    registry[1489] = block;
  }

  { // ID: 1490
    std::shared_ptr<GreenBedBlock> block = std::make_shared<GreenBedBlock>();
    block->facing = GreenBedBlock::FACING_NORTH;
    block->occupied = GreenBedBlock::OCCUPIED_FALSE;
    block->part = GreenBedBlock::PART_FOOT;
    registry[1490] = block;
  }

  { // ID: 1491
    std::shared_ptr<GreenBedBlock> block = std::make_shared<GreenBedBlock>();
    block->facing = GreenBedBlock::FACING_SOUTH;
    block->occupied = GreenBedBlock::OCCUPIED_TRUE;
    block->part = GreenBedBlock::PART_HEAD;
    registry[1491] = block;
  }

  { // ID: 1492
    std::shared_ptr<GreenBedBlock> block = std::make_shared<GreenBedBlock>();
    block->facing = GreenBedBlock::FACING_SOUTH;
    block->occupied = GreenBedBlock::OCCUPIED_TRUE;
    block->part = GreenBedBlock::PART_FOOT;
    registry[1492] = block;
  }

  { // ID: 1493
    std::shared_ptr<GreenBedBlock> block = std::make_shared<GreenBedBlock>();
    block->facing = GreenBedBlock::FACING_SOUTH;
    block->occupied = GreenBedBlock::OCCUPIED_FALSE;
    block->part = GreenBedBlock::PART_HEAD;
    registry[1493] = block;
  }

  { // ID: 1494
    std::shared_ptr<GreenBedBlock> block = std::make_shared<GreenBedBlock>();
    block->facing = GreenBedBlock::FACING_SOUTH;
    block->occupied = GreenBedBlock::OCCUPIED_FALSE;
    block->part = GreenBedBlock::PART_FOOT;
    registry[1494] = block;
  }

  { // ID: 1495
    std::shared_ptr<GreenBedBlock> block = std::make_shared<GreenBedBlock>();
    block->facing = GreenBedBlock::FACING_WEST;
    block->occupied = GreenBedBlock::OCCUPIED_TRUE;
    block->part = GreenBedBlock::PART_HEAD;
    registry[1495] = block;
  }

  { // ID: 1496
    std::shared_ptr<GreenBedBlock> block = std::make_shared<GreenBedBlock>();
    block->facing = GreenBedBlock::FACING_WEST;
    block->occupied = GreenBedBlock::OCCUPIED_TRUE;
    block->part = GreenBedBlock::PART_FOOT;
    registry[1496] = block;
  }

  { // ID: 1497
    std::shared_ptr<GreenBedBlock> block = std::make_shared<GreenBedBlock>();
    block->facing = GreenBedBlock::FACING_WEST;
    block->occupied = GreenBedBlock::OCCUPIED_FALSE;
    block->part = GreenBedBlock::PART_HEAD;
    registry[1497] = block;
  }

  { // ID: 1498
    std::shared_ptr<GreenBedBlock> block = std::make_shared<GreenBedBlock>();
    block->facing = GreenBedBlock::FACING_WEST;
    block->occupied = GreenBedBlock::OCCUPIED_FALSE;
    block->part = GreenBedBlock::PART_FOOT;
    registry[1498] = block;
  }

  { // ID: 1499
    std::shared_ptr<GreenBedBlock> block = std::make_shared<GreenBedBlock>();
    block->facing = GreenBedBlock::FACING_EAST;
    block->occupied = GreenBedBlock::OCCUPIED_TRUE;
    block->part = GreenBedBlock::PART_HEAD;
    registry[1499] = block;
  }

  { // ID: 1500
    std::shared_ptr<GreenBedBlock> block = std::make_shared<GreenBedBlock>();
    block->facing = GreenBedBlock::FACING_EAST;
    block->occupied = GreenBedBlock::OCCUPIED_TRUE;
    block->part = GreenBedBlock::PART_FOOT;
    registry[1500] = block;
  }

  { // ID: 1501
    std::shared_ptr<GreenBedBlock> block = std::make_shared<GreenBedBlock>();
    block->facing = GreenBedBlock::FACING_EAST;
    block->occupied = GreenBedBlock::OCCUPIED_FALSE;
    block->part = GreenBedBlock::PART_HEAD;
    registry[1501] = block;
  }

  { // ID: 1502
    std::shared_ptr<GreenBedBlock> block = std::make_shared<GreenBedBlock>();
    block->facing = GreenBedBlock::FACING_EAST;
    block->occupied = GreenBedBlock::OCCUPIED_FALSE;
    block->part = GreenBedBlock::PART_FOOT;
    registry[1502] = block;
  }

  { // ID: 1596
    std::shared_ptr<GrassBlock> block = std::make_shared<GrassBlock>();
    registry[1596] = block;
  }

  { // ID: 1645
    std::shared_ptr<GrayWoolBlock> block = std::make_shared<GrayWoolBlock>();
    registry[1645] = block;
  }

  { // ID: 1651
    std::shared_ptr<GreenWoolBlock> block = std::make_shared<GreenWoolBlock>();
    registry[1651] = block;
  }

  { // ID: 1681
    std::shared_ptr<GoldBlockBlock> block = std::make_shared<GoldBlockBlock>();
    registry[1681] = block;
  }

  { // ID: 4322
    std::shared_ptr<GlowstoneBlock> block = std::make_shared<GlowstoneBlock>();
    registry[4322] = block;
  }

  { // ID: 4411
    std::shared_ptr<GrayStainedGlassBlock> block = std::make_shared<GrayStainedGlassBlock>();
    registry[4411] = block;
  }

  { // ID: 4417
    std::shared_ptr<GreenStainedGlassBlock> block = std::make_shared<GreenStainedGlassBlock>();
    registry[4417] = block;
  }

  { // ID: 5110
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_TRUE;
    block->north = GlassPaneBlock::NORTH_TRUE;
    block->south = GlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GlassPaneBlock::WEST_TRUE;
    registry[5110] = block;
  }

  { // ID: 5111
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_TRUE;
    block->north = GlassPaneBlock::NORTH_TRUE;
    block->south = GlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GlassPaneBlock::WEST_FALSE;
    registry[5111] = block;
  }

  { // ID: 5112
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_TRUE;
    block->north = GlassPaneBlock::NORTH_TRUE;
    block->south = GlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GlassPaneBlock::WEST_TRUE;
    registry[5112] = block;
  }

  { // ID: 5113
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_TRUE;
    block->north = GlassPaneBlock::NORTH_TRUE;
    block->south = GlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GlassPaneBlock::WEST_FALSE;
    registry[5113] = block;
  }

  { // ID: 5114
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_TRUE;
    block->north = GlassPaneBlock::NORTH_TRUE;
    block->south = GlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GlassPaneBlock::WEST_TRUE;
    registry[5114] = block;
  }

  { // ID: 5115
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_TRUE;
    block->north = GlassPaneBlock::NORTH_TRUE;
    block->south = GlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GlassPaneBlock::WEST_FALSE;
    registry[5115] = block;
  }

  { // ID: 5116
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_TRUE;
    block->north = GlassPaneBlock::NORTH_TRUE;
    block->south = GlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GlassPaneBlock::WEST_TRUE;
    registry[5116] = block;
  }

  { // ID: 5117
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_TRUE;
    block->north = GlassPaneBlock::NORTH_TRUE;
    block->south = GlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GlassPaneBlock::WEST_FALSE;
    registry[5117] = block;
  }

  { // ID: 5118
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_TRUE;
    block->north = GlassPaneBlock::NORTH_FALSE;
    block->south = GlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GlassPaneBlock::WEST_TRUE;
    registry[5118] = block;
  }

  { // ID: 5119
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_TRUE;
    block->north = GlassPaneBlock::NORTH_FALSE;
    block->south = GlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GlassPaneBlock::WEST_FALSE;
    registry[5119] = block;
  }

  { // ID: 5120
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_TRUE;
    block->north = GlassPaneBlock::NORTH_FALSE;
    block->south = GlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GlassPaneBlock::WEST_TRUE;
    registry[5120] = block;
  }

  { // ID: 5121
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_TRUE;
    block->north = GlassPaneBlock::NORTH_FALSE;
    block->south = GlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GlassPaneBlock::WEST_FALSE;
    registry[5121] = block;
  }

  { // ID: 5122
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_TRUE;
    block->north = GlassPaneBlock::NORTH_FALSE;
    block->south = GlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GlassPaneBlock::WEST_TRUE;
    registry[5122] = block;
  }

  { // ID: 5123
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_TRUE;
    block->north = GlassPaneBlock::NORTH_FALSE;
    block->south = GlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GlassPaneBlock::WEST_FALSE;
    registry[5123] = block;
  }

  { // ID: 5124
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_TRUE;
    block->north = GlassPaneBlock::NORTH_FALSE;
    block->south = GlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GlassPaneBlock::WEST_TRUE;
    registry[5124] = block;
  }

  { // ID: 5125
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_TRUE;
    block->north = GlassPaneBlock::NORTH_FALSE;
    block->south = GlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GlassPaneBlock::WEST_FALSE;
    registry[5125] = block;
  }

  { // ID: 5126
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_FALSE;
    block->north = GlassPaneBlock::NORTH_TRUE;
    block->south = GlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GlassPaneBlock::WEST_TRUE;
    registry[5126] = block;
  }

  { // ID: 5127
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_FALSE;
    block->north = GlassPaneBlock::NORTH_TRUE;
    block->south = GlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GlassPaneBlock::WEST_FALSE;
    registry[5127] = block;
  }

  { // ID: 5128
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_FALSE;
    block->north = GlassPaneBlock::NORTH_TRUE;
    block->south = GlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GlassPaneBlock::WEST_TRUE;
    registry[5128] = block;
  }

  { // ID: 5129
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_FALSE;
    block->north = GlassPaneBlock::NORTH_TRUE;
    block->south = GlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GlassPaneBlock::WEST_FALSE;
    registry[5129] = block;
  }

  { // ID: 5130
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_FALSE;
    block->north = GlassPaneBlock::NORTH_TRUE;
    block->south = GlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GlassPaneBlock::WEST_TRUE;
    registry[5130] = block;
  }

  { // ID: 5131
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_FALSE;
    block->north = GlassPaneBlock::NORTH_TRUE;
    block->south = GlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GlassPaneBlock::WEST_FALSE;
    registry[5131] = block;
  }

  { // ID: 5132
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_FALSE;
    block->north = GlassPaneBlock::NORTH_TRUE;
    block->south = GlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GlassPaneBlock::WEST_TRUE;
    registry[5132] = block;
  }

  { // ID: 5133
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_FALSE;
    block->north = GlassPaneBlock::NORTH_TRUE;
    block->south = GlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GlassPaneBlock::WEST_FALSE;
    registry[5133] = block;
  }

  { // ID: 5134
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_FALSE;
    block->north = GlassPaneBlock::NORTH_FALSE;
    block->south = GlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GlassPaneBlock::WEST_TRUE;
    registry[5134] = block;
  }

  { // ID: 5135
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_FALSE;
    block->north = GlassPaneBlock::NORTH_FALSE;
    block->south = GlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GlassPaneBlock::WEST_FALSE;
    registry[5135] = block;
  }

  { // ID: 5136
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_FALSE;
    block->north = GlassPaneBlock::NORTH_FALSE;
    block->south = GlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GlassPaneBlock::WEST_TRUE;
    registry[5136] = block;
  }

  { // ID: 5137
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_FALSE;
    block->north = GlassPaneBlock::NORTH_FALSE;
    block->south = GlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GlassPaneBlock::WEST_FALSE;
    registry[5137] = block;
  }

  { // ID: 5138
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_FALSE;
    block->north = GlassPaneBlock::NORTH_FALSE;
    block->south = GlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GlassPaneBlock::WEST_TRUE;
    registry[5138] = block;
  }

  { // ID: 5139
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_FALSE;
    block->north = GlassPaneBlock::NORTH_FALSE;
    block->south = GlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GlassPaneBlock::WEST_FALSE;
    registry[5139] = block;
  }

  { // ID: 5140
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_FALSE;
    block->north = GlassPaneBlock::NORTH_FALSE;
    block->south = GlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GlassPaneBlock::WEST_TRUE;
    registry[5140] = block;
  }

  { // ID: 5141
    std::shared_ptr<GlassPaneBlock> block = std::make_shared<GlassPaneBlock>();
    block->east = GlassPaneBlock::EAST_FALSE;
    block->north = GlassPaneBlock::NORTH_FALSE;
    block->south = GlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GlassPaneBlock::WEST_FALSE;
    registry[5141] = block;
  }

  { // ID: 5199
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5199] = block;
  }

  { // ID: 5200
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5200] = block;
  }

  { // ID: 5201
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5201] = block;
  }

  { // ID: 5202
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5202] = block;
  }

  { // ID: 5203
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5203] = block;
  }

  { // ID: 5204
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5204] = block;
  }

  { // ID: 5205
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5205] = block;
  }

  { // ID: 5206
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5206] = block;
  }

  { // ID: 5207
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5207] = block;
  }

  { // ID: 5208
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5208] = block;
  }

  { // ID: 5209
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5209] = block;
  }

  { // ID: 5210
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5210] = block;
  }

  { // ID: 5211
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5211] = block;
  }

  { // ID: 5212
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5212] = block;
  }

  { // ID: 5213
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5213] = block;
  }

  { // ID: 5214
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5214] = block;
  }

  { // ID: 5215
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5215] = block;
  }

  { // ID: 5216
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5216] = block;
  }

  { // ID: 5217
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5217] = block;
  }

  { // ID: 5218
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5218] = block;
  }

  { // ID: 5219
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5219] = block;
  }

  { // ID: 5220
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5220] = block;
  }

  { // ID: 5221
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5221] = block;
  }

  { // ID: 5222
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5222] = block;
  }

  { // ID: 5223
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5223] = block;
  }

  { // ID: 5224
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5224] = block;
  }

  { // ID: 5225
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5225] = block;
  }

  { // ID: 5226
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5226] = block;
  }

  { // ID: 5227
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5227] = block;
  }

  { // ID: 5228
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5228] = block;
  }

  { // ID: 5229
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5229] = block;
  }

  { // ID: 5230
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5230] = block;
  }

  { // ID: 5231
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5231] = block;
  }

  { // ID: 5232
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5232] = block;
  }

  { // ID: 5233
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5233] = block;
  }

  { // ID: 5234
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5234] = block;
  }

  { // ID: 5235
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5235] = block;
  }

  { // ID: 5236
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5236] = block;
  }

  { // ID: 5237
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5237] = block;
  }

  { // ID: 5238
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5238] = block;
  }

  { // ID: 5239
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5239] = block;
  }

  { // ID: 5240
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5240] = block;
  }

  { // ID: 5241
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5241] = block;
  }

  { // ID: 5242
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5242] = block;
  }

  { // ID: 5243
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5243] = block;
  }

  { // ID: 5244
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5244] = block;
  }

  { // ID: 5245
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5245] = block;
  }

  { // ID: 5246
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5246] = block;
  }

  { // ID: 5247
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5247] = block;
  }

  { // ID: 5248
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5248] = block;
  }

  { // ID: 5249
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5249] = block;
  }

  { // ID: 5250
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5250] = block;
  }

  { // ID: 5251
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5251] = block;
  }

  { // ID: 5252
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5252] = block;
  }

  { // ID: 5253
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5253] = block;
  }

  { // ID: 5254
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5254] = block;
  }

  { // ID: 5255
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5255] = block;
  }

  { // ID: 5256
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5256] = block;
  }

  { // ID: 5257
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5257] = block;
  }

  { // ID: 5258
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5258] = block;
  }

  { // ID: 5259
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5259] = block;
  }

  { // ID: 5260
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5260] = block;
  }

  { // ID: 5261
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5261] = block;
  }

  { // ID: 5262
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_TRUE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5262] = block;
  }

  { // ID: 5263
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5263] = block;
  }

  { // ID: 5264
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5264] = block;
  }

  { // ID: 5265
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5265] = block;
  }

  { // ID: 5266
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5266] = block;
  }

  { // ID: 5267
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5267] = block;
  }

  { // ID: 5268
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5268] = block;
  }

  { // ID: 5269
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5269] = block;
  }

  { // ID: 5270
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5270] = block;
  }

  { // ID: 5271
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5271] = block;
  }

  { // ID: 5272
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5272] = block;
  }

  { // ID: 5273
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5273] = block;
  }

  { // ID: 5274
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5274] = block;
  }

  { // ID: 5275
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5275] = block;
  }

  { // ID: 5276
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5276] = block;
  }

  { // ID: 5277
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5277] = block;
  }

  { // ID: 5278
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5278] = block;
  }

  { // ID: 5279
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5279] = block;
  }

  { // ID: 5280
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5280] = block;
  }

  { // ID: 5281
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5281] = block;
  }

  { // ID: 5282
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5282] = block;
  }

  { // ID: 5283
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5283] = block;
  }

  { // ID: 5284
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5284] = block;
  }

  { // ID: 5285
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5285] = block;
  }

  { // ID: 5286
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5286] = block;
  }

  { // ID: 5287
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5287] = block;
  }

  { // ID: 5288
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5288] = block;
  }

  { // ID: 5289
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5289] = block;
  }

  { // ID: 5290
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5290] = block;
  }

  { // ID: 5291
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5291] = block;
  }

  { // ID: 5292
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5292] = block;
  }

  { // ID: 5293
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5293] = block;
  }

  { // ID: 5294
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_TRUE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5294] = block;
  }

  { // ID: 5295
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5295] = block;
  }

  { // ID: 5296
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5296] = block;
  }

  { // ID: 5297
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5297] = block;
  }

  { // ID: 5298
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5298] = block;
  }

  { // ID: 5299
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5299] = block;
  }

  { // ID: 5300
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5300] = block;
  }

  { // ID: 5301
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5301] = block;
  }

  { // ID: 5302
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5302] = block;
  }

  { // ID: 5303
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5303] = block;
  }

  { // ID: 5304
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5304] = block;
  }

  { // ID: 5305
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5305] = block;
  }

  { // ID: 5306
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5306] = block;
  }

  { // ID: 5307
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5307] = block;
  }

  { // ID: 5308
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5308] = block;
  }

  { // ID: 5309
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5309] = block;
  }

  { // ID: 5310
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_TRUE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5310] = block;
  }

  { // ID: 5311
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5311] = block;
  }

  { // ID: 5312
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5312] = block;
  }

  { // ID: 5313
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5313] = block;
  }

  { // ID: 5314
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5314] = block;
  }

  { // ID: 5315
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5315] = block;
  }

  { // ID: 5316
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5316] = block;
  }

  { // ID: 5317
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5317] = block;
  }

  { // ID: 5318
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_TRUE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5318] = block;
  }

  { // ID: 5319
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5319] = block;
  }

  { // ID: 5320
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5320] = block;
  }

  { // ID: 5321
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5321] = block;
  }

  { // ID: 5322
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_TRUE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5322] = block;
  }

  { // ID: 5323
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5323] = block;
  }

  { // ID: 5324
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_TRUE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5324] = block;
  }

  { // ID: 5325
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_TRUE;
    registry[5325] = block;
  }

  { // ID: 5326
    std::shared_ptr<GlowLichenBlock> block = std::make_shared<GlowLichenBlock>();
    block->down = GlowLichenBlock::DOWN_FALSE;
    block->east = GlowLichenBlock::EAST_FALSE;
    block->north = GlowLichenBlock::NORTH_FALSE;
    block->south = GlowLichenBlock::SOUTH_FALSE;
    block->up = GlowLichenBlock::UP_FALSE;
    block->waterlogged = GlowLichenBlock::WATERLOGGED_FALSE;
    block->west = GlowLichenBlock::WEST_FALSE;
    registry[5326] = block;
  }

  { // ID: 7483
    std::shared_ptr<GrayTerracottaBlock> block = std::make_shared<GrayTerracottaBlock>();
    registry[7483] = block;
  }

  { // ID: 7489
    std::shared_ptr<GreenTerracottaBlock> block = std::make_shared<GreenTerracottaBlock>();
    registry[7489] = block;
  }

  { // ID: 7716
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = GrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7716] = block;
  }

  { // ID: 7717
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = GrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7717] = block;
  }

  { // ID: 7718
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = GrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7718] = block;
  }

  { // ID: 7719
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = GrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7719] = block;
  }

  { // ID: 7720
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = GrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7720] = block;
  }

  { // ID: 7721
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = GrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7721] = block;
  }

  { // ID: 7722
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = GrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7722] = block;
  }

  { // ID: 7723
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = GrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7723] = block;
  }

  { // ID: 7724
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = GrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7724] = block;
  }

  { // ID: 7725
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = GrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7725] = block;
  }

  { // ID: 7726
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = GrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7726] = block;
  }

  { // ID: 7727
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = GrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7727] = block;
  }

  { // ID: 7728
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = GrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7728] = block;
  }

  { // ID: 7729
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = GrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7729] = block;
  }

  { // ID: 7730
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = GrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7730] = block;
  }

  { // ID: 7731
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = GrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7731] = block;
  }

  { // ID: 7732
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = GrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7732] = block;
  }

  { // ID: 7733
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = GrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7733] = block;
  }

  { // ID: 7734
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = GrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7734] = block;
  }

  { // ID: 7735
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = GrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7735] = block;
  }

  { // ID: 7736
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = GrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7736] = block;
  }

  { // ID: 7737
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = GrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7737] = block;
  }

  { // ID: 7738
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = GrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7738] = block;
  }

  { // ID: 7739
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = GrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7739] = block;
  }

  { // ID: 7740
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = GrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7740] = block;
  }

  { // ID: 7741
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = GrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7741] = block;
  }

  { // ID: 7742
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = GrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7742] = block;
  }

  { // ID: 7743
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = GrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7743] = block;
  }

  { // ID: 7744
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = GrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7744] = block;
  }

  { // ID: 7745
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = GrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7745] = block;
  }

  { // ID: 7746
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = GrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7746] = block;
  }

  { // ID: 7747
    std::shared_ptr<GrayStainedGlassPaneBlock> block = std::make_shared<GrayStainedGlassPaneBlock>();
    block->east = GrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = GrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7747] = block;
  }

  { // ID: 7908
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_TRUE;
    block->north = GreenStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GreenStainedGlassPaneBlock::WEST_TRUE;
    registry[7908] = block;
  }

  { // ID: 7909
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_TRUE;
    block->north = GreenStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GreenStainedGlassPaneBlock::WEST_FALSE;
    registry[7909] = block;
  }

  { // ID: 7910
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_TRUE;
    block->north = GreenStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GreenStainedGlassPaneBlock::WEST_TRUE;
    registry[7910] = block;
  }

  { // ID: 7911
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_TRUE;
    block->north = GreenStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GreenStainedGlassPaneBlock::WEST_FALSE;
    registry[7911] = block;
  }

  { // ID: 7912
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_TRUE;
    block->north = GreenStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GreenStainedGlassPaneBlock::WEST_TRUE;
    registry[7912] = block;
  }

  { // ID: 7913
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_TRUE;
    block->north = GreenStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GreenStainedGlassPaneBlock::WEST_FALSE;
    registry[7913] = block;
  }

  { // ID: 7914
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_TRUE;
    block->north = GreenStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GreenStainedGlassPaneBlock::WEST_TRUE;
    registry[7914] = block;
  }

  { // ID: 7915
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_TRUE;
    block->north = GreenStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GreenStainedGlassPaneBlock::WEST_FALSE;
    registry[7915] = block;
  }

  { // ID: 7916
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_TRUE;
    block->north = GreenStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GreenStainedGlassPaneBlock::WEST_TRUE;
    registry[7916] = block;
  }

  { // ID: 7917
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_TRUE;
    block->north = GreenStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GreenStainedGlassPaneBlock::WEST_FALSE;
    registry[7917] = block;
  }

  { // ID: 7918
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_TRUE;
    block->north = GreenStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GreenStainedGlassPaneBlock::WEST_TRUE;
    registry[7918] = block;
  }

  { // ID: 7919
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_TRUE;
    block->north = GreenStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GreenStainedGlassPaneBlock::WEST_FALSE;
    registry[7919] = block;
  }

  { // ID: 7920
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_TRUE;
    block->north = GreenStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GreenStainedGlassPaneBlock::WEST_TRUE;
    registry[7920] = block;
  }

  { // ID: 7921
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_TRUE;
    block->north = GreenStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GreenStainedGlassPaneBlock::WEST_FALSE;
    registry[7921] = block;
  }

  { // ID: 7922
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_TRUE;
    block->north = GreenStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GreenStainedGlassPaneBlock::WEST_TRUE;
    registry[7922] = block;
  }

  { // ID: 7923
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_TRUE;
    block->north = GreenStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GreenStainedGlassPaneBlock::WEST_FALSE;
    registry[7923] = block;
  }

  { // ID: 7924
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_FALSE;
    block->north = GreenStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GreenStainedGlassPaneBlock::WEST_TRUE;
    registry[7924] = block;
  }

  { // ID: 7925
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_FALSE;
    block->north = GreenStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GreenStainedGlassPaneBlock::WEST_FALSE;
    registry[7925] = block;
  }

  { // ID: 7926
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_FALSE;
    block->north = GreenStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GreenStainedGlassPaneBlock::WEST_TRUE;
    registry[7926] = block;
  }

  { // ID: 7927
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_FALSE;
    block->north = GreenStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GreenStainedGlassPaneBlock::WEST_FALSE;
    registry[7927] = block;
  }

  { // ID: 7928
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_FALSE;
    block->north = GreenStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GreenStainedGlassPaneBlock::WEST_TRUE;
    registry[7928] = block;
  }

  { // ID: 7929
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_FALSE;
    block->north = GreenStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GreenStainedGlassPaneBlock::WEST_FALSE;
    registry[7929] = block;
  }

  { // ID: 7930
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_FALSE;
    block->north = GreenStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GreenStainedGlassPaneBlock::WEST_TRUE;
    registry[7930] = block;
  }

  { // ID: 7931
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_FALSE;
    block->north = GreenStainedGlassPaneBlock::NORTH_TRUE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GreenStainedGlassPaneBlock::WEST_FALSE;
    registry[7931] = block;
  }

  { // ID: 7932
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_FALSE;
    block->north = GreenStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GreenStainedGlassPaneBlock::WEST_TRUE;
    registry[7932] = block;
  }

  { // ID: 7933
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_FALSE;
    block->north = GreenStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GreenStainedGlassPaneBlock::WEST_FALSE;
    registry[7933] = block;
  }

  { // ID: 7934
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_FALSE;
    block->north = GreenStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GreenStainedGlassPaneBlock::WEST_TRUE;
    registry[7934] = block;
  }

  { // ID: 7935
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_FALSE;
    block->north = GreenStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GreenStainedGlassPaneBlock::WEST_FALSE;
    registry[7935] = block;
  }

  { // ID: 7936
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_FALSE;
    block->north = GreenStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GreenStainedGlassPaneBlock::WEST_TRUE;
    registry[7936] = block;
  }

  { // ID: 7937
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_FALSE;
    block->north = GreenStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = GreenStainedGlassPaneBlock::WEST_FALSE;
    registry[7937] = block;
  }

  { // ID: 7938
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_FALSE;
    block->north = GreenStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GreenStainedGlassPaneBlock::WEST_TRUE;
    registry[7938] = block;
  }

  { // ID: 7939
    std::shared_ptr<GreenStainedGlassPaneBlock> block = std::make_shared<GreenStainedGlassPaneBlock>();
    block->east = GreenStainedGlassPaneBlock::EAST_FALSE;
    block->north = GreenStainedGlassPaneBlock::NORTH_FALSE;
    block->south = GreenStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = GreenStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = GreenStainedGlassPaneBlock::WEST_FALSE;
    registry[7939] = block;
  }

  { // ID: 8614
    std::shared_ptr<GrayCarpetBlock> block = std::make_shared<GrayCarpetBlock>();
    registry[8614] = block;
  }

  { // ID: 8620
    std::shared_ptr<GreenCarpetBlock> block = std::make_shared<GreenCarpetBlock>();
    registry[8620] = block;
  }

  { // ID: 8750
    std::shared_ptr<GrayBannerBlock> block = std::make_shared<GrayBannerBlock>();
    block->rotation = GrayBannerBlock::ROTATION_0;
    registry[8750] = block;
  }

  { // ID: 8751
    std::shared_ptr<GrayBannerBlock> block = std::make_shared<GrayBannerBlock>();
    block->rotation = GrayBannerBlock::ROTATION_1;
    registry[8751] = block;
  }

  { // ID: 8752
    std::shared_ptr<GrayBannerBlock> block = std::make_shared<GrayBannerBlock>();
    block->rotation = GrayBannerBlock::ROTATION_2;
    registry[8752] = block;
  }

  { // ID: 8753
    std::shared_ptr<GrayBannerBlock> block = std::make_shared<GrayBannerBlock>();
    block->rotation = GrayBannerBlock::ROTATION_3;
    registry[8753] = block;
  }

  { // ID: 8754
    std::shared_ptr<GrayBannerBlock> block = std::make_shared<GrayBannerBlock>();
    block->rotation = GrayBannerBlock::ROTATION_4;
    registry[8754] = block;
  }

  { // ID: 8755
    std::shared_ptr<GrayBannerBlock> block = std::make_shared<GrayBannerBlock>();
    block->rotation = GrayBannerBlock::ROTATION_5;
    registry[8755] = block;
  }

  { // ID: 8756
    std::shared_ptr<GrayBannerBlock> block = std::make_shared<GrayBannerBlock>();
    block->rotation = GrayBannerBlock::ROTATION_6;
    registry[8756] = block;
  }

  { // ID: 8757
    std::shared_ptr<GrayBannerBlock> block = std::make_shared<GrayBannerBlock>();
    block->rotation = GrayBannerBlock::ROTATION_7;
    registry[8757] = block;
  }

  { // ID: 8758
    std::shared_ptr<GrayBannerBlock> block = std::make_shared<GrayBannerBlock>();
    block->rotation = GrayBannerBlock::ROTATION_8;
    registry[8758] = block;
  }

  { // ID: 8759
    std::shared_ptr<GrayBannerBlock> block = std::make_shared<GrayBannerBlock>();
    block->rotation = GrayBannerBlock::ROTATION_9;
    registry[8759] = block;
  }

  { // ID: 8760
    std::shared_ptr<GrayBannerBlock> block = std::make_shared<GrayBannerBlock>();
    block->rotation = GrayBannerBlock::ROTATION_10;
    registry[8760] = block;
  }

  { // ID: 8761
    std::shared_ptr<GrayBannerBlock> block = std::make_shared<GrayBannerBlock>();
    block->rotation = GrayBannerBlock::ROTATION_11;
    registry[8761] = block;
  }

  { // ID: 8762
    std::shared_ptr<GrayBannerBlock> block = std::make_shared<GrayBannerBlock>();
    block->rotation = GrayBannerBlock::ROTATION_12;
    registry[8762] = block;
  }

  { // ID: 8763
    std::shared_ptr<GrayBannerBlock> block = std::make_shared<GrayBannerBlock>();
    block->rotation = GrayBannerBlock::ROTATION_13;
    registry[8763] = block;
  }

  { // ID: 8764
    std::shared_ptr<GrayBannerBlock> block = std::make_shared<GrayBannerBlock>();
    block->rotation = GrayBannerBlock::ROTATION_14;
    registry[8764] = block;
  }

  { // ID: 8765
    std::shared_ptr<GrayBannerBlock> block = std::make_shared<GrayBannerBlock>();
    block->rotation = GrayBannerBlock::ROTATION_15;
    registry[8765] = block;
  }

  { // ID: 8846
    std::shared_ptr<GreenBannerBlock> block = std::make_shared<GreenBannerBlock>();
    block->rotation = GreenBannerBlock::ROTATION_0;
    registry[8846] = block;
  }

  { // ID: 8847
    std::shared_ptr<GreenBannerBlock> block = std::make_shared<GreenBannerBlock>();
    block->rotation = GreenBannerBlock::ROTATION_1;
    registry[8847] = block;
  }

  { // ID: 8848
    std::shared_ptr<GreenBannerBlock> block = std::make_shared<GreenBannerBlock>();
    block->rotation = GreenBannerBlock::ROTATION_2;
    registry[8848] = block;
  }

  { // ID: 8849
    std::shared_ptr<GreenBannerBlock> block = std::make_shared<GreenBannerBlock>();
    block->rotation = GreenBannerBlock::ROTATION_3;
    registry[8849] = block;
  }

  { // ID: 8850
    std::shared_ptr<GreenBannerBlock> block = std::make_shared<GreenBannerBlock>();
    block->rotation = GreenBannerBlock::ROTATION_4;
    registry[8850] = block;
  }

  { // ID: 8851
    std::shared_ptr<GreenBannerBlock> block = std::make_shared<GreenBannerBlock>();
    block->rotation = GreenBannerBlock::ROTATION_5;
    registry[8851] = block;
  }

  { // ID: 8852
    std::shared_ptr<GreenBannerBlock> block = std::make_shared<GreenBannerBlock>();
    block->rotation = GreenBannerBlock::ROTATION_6;
    registry[8852] = block;
  }

  { // ID: 8853
    std::shared_ptr<GreenBannerBlock> block = std::make_shared<GreenBannerBlock>();
    block->rotation = GreenBannerBlock::ROTATION_7;
    registry[8853] = block;
  }

  { // ID: 8854
    std::shared_ptr<GreenBannerBlock> block = std::make_shared<GreenBannerBlock>();
    block->rotation = GreenBannerBlock::ROTATION_8;
    registry[8854] = block;
  }

  { // ID: 8855
    std::shared_ptr<GreenBannerBlock> block = std::make_shared<GreenBannerBlock>();
    block->rotation = GreenBannerBlock::ROTATION_9;
    registry[8855] = block;
  }

  { // ID: 8856
    std::shared_ptr<GreenBannerBlock> block = std::make_shared<GreenBannerBlock>();
    block->rotation = GreenBannerBlock::ROTATION_10;
    registry[8856] = block;
  }

  { // ID: 8857
    std::shared_ptr<GreenBannerBlock> block = std::make_shared<GreenBannerBlock>();
    block->rotation = GreenBannerBlock::ROTATION_11;
    registry[8857] = block;
  }

  { // ID: 8858
    std::shared_ptr<GreenBannerBlock> block = std::make_shared<GreenBannerBlock>();
    block->rotation = GreenBannerBlock::ROTATION_12;
    registry[8858] = block;
  }

  { // ID: 8859
    std::shared_ptr<GreenBannerBlock> block = std::make_shared<GreenBannerBlock>();
    block->rotation = GreenBannerBlock::ROTATION_13;
    registry[8859] = block;
  }

  { // ID: 8860
    std::shared_ptr<GreenBannerBlock> block = std::make_shared<GreenBannerBlock>();
    block->rotation = GreenBannerBlock::ROTATION_14;
    registry[8860] = block;
  }

  { // ID: 8861
    std::shared_ptr<GreenBannerBlock> block = std::make_shared<GreenBannerBlock>();
    block->rotation = GreenBannerBlock::ROTATION_15;
    registry[8861] = block;
  }

  { // ID: 8922
    std::shared_ptr<GrayWallBannerBlock> block = std::make_shared<GrayWallBannerBlock>();
    block->facing = GrayWallBannerBlock::FACING_NORTH;
    registry[8922] = block;
  }

  { // ID: 8923
    std::shared_ptr<GrayWallBannerBlock> block = std::make_shared<GrayWallBannerBlock>();
    block->facing = GrayWallBannerBlock::FACING_SOUTH;
    registry[8923] = block;
  }

  { // ID: 8924
    std::shared_ptr<GrayWallBannerBlock> block = std::make_shared<GrayWallBannerBlock>();
    block->facing = GrayWallBannerBlock::FACING_WEST;
    registry[8924] = block;
  }

  { // ID: 8925
    std::shared_ptr<GrayWallBannerBlock> block = std::make_shared<GrayWallBannerBlock>();
    block->facing = GrayWallBannerBlock::FACING_EAST;
    registry[8925] = block;
  }

  { // ID: 8946
    std::shared_ptr<GreenWallBannerBlock> block = std::make_shared<GreenWallBannerBlock>();
    block->facing = GreenWallBannerBlock::FACING_NORTH;
    registry[8946] = block;
  }

  { // ID: 8947
    std::shared_ptr<GreenWallBannerBlock> block = std::make_shared<GreenWallBannerBlock>();
    block->facing = GreenWallBannerBlock::FACING_SOUTH;
    registry[8947] = block;
  }

  { // ID: 8948
    std::shared_ptr<GreenWallBannerBlock> block = std::make_shared<GreenWallBannerBlock>();
    block->facing = GreenWallBannerBlock::FACING_WEST;
    registry[8948] = block;
  }

  { // ID: 8949
    std::shared_ptr<GreenWallBannerBlock> block = std::make_shared<GreenWallBannerBlock>();
    block->facing = GreenWallBannerBlock::FACING_EAST;
    registry[8949] = block;
  }

  { // ID: 10201
    std::shared_ptr<GrayShulkerBoxBlock> block = std::make_shared<GrayShulkerBoxBlock>();
    block->facing = GrayShulkerBoxBlock::FACING_NORTH;
    registry[10201] = block;
  }

  { // ID: 10202
    std::shared_ptr<GrayShulkerBoxBlock> block = std::make_shared<GrayShulkerBoxBlock>();
    block->facing = GrayShulkerBoxBlock::FACING_EAST;
    registry[10202] = block;
  }

  { // ID: 10203
    std::shared_ptr<GrayShulkerBoxBlock> block = std::make_shared<GrayShulkerBoxBlock>();
    block->facing = GrayShulkerBoxBlock::FACING_SOUTH;
    registry[10203] = block;
  }

  { // ID: 10204
    std::shared_ptr<GrayShulkerBoxBlock> block = std::make_shared<GrayShulkerBoxBlock>();
    block->facing = GrayShulkerBoxBlock::FACING_WEST;
    registry[10204] = block;
  }

  { // ID: 10205
    std::shared_ptr<GrayShulkerBoxBlock> block = std::make_shared<GrayShulkerBoxBlock>();
    block->facing = GrayShulkerBoxBlock::FACING_UP;
    registry[10205] = block;
  }

  { // ID: 10206
    std::shared_ptr<GrayShulkerBoxBlock> block = std::make_shared<GrayShulkerBoxBlock>();
    block->facing = GrayShulkerBoxBlock::FACING_DOWN;
    registry[10206] = block;
  }

  { // ID: 10237
    std::shared_ptr<GreenShulkerBoxBlock> block = std::make_shared<GreenShulkerBoxBlock>();
    block->facing = GreenShulkerBoxBlock::FACING_NORTH;
    registry[10237] = block;
  }

  { // ID: 10238
    std::shared_ptr<GreenShulkerBoxBlock> block = std::make_shared<GreenShulkerBoxBlock>();
    block->facing = GreenShulkerBoxBlock::FACING_EAST;
    registry[10238] = block;
  }

  { // ID: 10239
    std::shared_ptr<GreenShulkerBoxBlock> block = std::make_shared<GreenShulkerBoxBlock>();
    block->facing = GreenShulkerBoxBlock::FACING_SOUTH;
    registry[10239] = block;
  }

  { // ID: 10240
    std::shared_ptr<GreenShulkerBoxBlock> block = std::make_shared<GreenShulkerBoxBlock>();
    block->facing = GreenShulkerBoxBlock::FACING_WEST;
    registry[10240] = block;
  }

  { // ID: 10241
    std::shared_ptr<GreenShulkerBoxBlock> block = std::make_shared<GreenShulkerBoxBlock>();
    block->facing = GreenShulkerBoxBlock::FACING_UP;
    registry[10241] = block;
  }

  { // ID: 10242
    std::shared_ptr<GreenShulkerBoxBlock> block = std::make_shared<GreenShulkerBoxBlock>();
    block->facing = GreenShulkerBoxBlock::FACING_DOWN;
    registry[10242] = block;
  }

  { // ID: 10283
    std::shared_ptr<GrayGlazedTerracottaBlock> block = std::make_shared<GrayGlazedTerracottaBlock>();
    block->facing = GrayGlazedTerracottaBlock::FACING_NORTH;
    registry[10283] = block;
  }

  { // ID: 10284
    std::shared_ptr<GrayGlazedTerracottaBlock> block = std::make_shared<GrayGlazedTerracottaBlock>();
    block->facing = GrayGlazedTerracottaBlock::FACING_SOUTH;
    registry[10284] = block;
  }

  { // ID: 10285
    std::shared_ptr<GrayGlazedTerracottaBlock> block = std::make_shared<GrayGlazedTerracottaBlock>();
    block->facing = GrayGlazedTerracottaBlock::FACING_WEST;
    registry[10285] = block;
  }

  { // ID: 10286
    std::shared_ptr<GrayGlazedTerracottaBlock> block = std::make_shared<GrayGlazedTerracottaBlock>();
    block->facing = GrayGlazedTerracottaBlock::FACING_EAST;
    registry[10286] = block;
  }

  { // ID: 10307
    std::shared_ptr<GreenGlazedTerracottaBlock> block = std::make_shared<GreenGlazedTerracottaBlock>();
    block->facing = GreenGlazedTerracottaBlock::FACING_NORTH;
    registry[10307] = block;
  }

  { // ID: 10308
    std::shared_ptr<GreenGlazedTerracottaBlock> block = std::make_shared<GreenGlazedTerracottaBlock>();
    block->facing = GreenGlazedTerracottaBlock::FACING_SOUTH;
    registry[10308] = block;
  }

  { // ID: 10309
    std::shared_ptr<GreenGlazedTerracottaBlock> block = std::make_shared<GreenGlazedTerracottaBlock>();
    block->facing = GreenGlazedTerracottaBlock::FACING_WEST;
    registry[10309] = block;
  }

  { // ID: 10310
    std::shared_ptr<GreenGlazedTerracottaBlock> block = std::make_shared<GreenGlazedTerracottaBlock>();
    block->facing = GreenGlazedTerracottaBlock::FACING_EAST;
    registry[10310] = block;
  }

  { // ID: 10326
    std::shared_ptr<GrayConcreteBlock> block = std::make_shared<GrayConcreteBlock>();
    registry[10326] = block;
  }

  { // ID: 10332
    std::shared_ptr<GreenConcreteBlock> block = std::make_shared<GreenConcreteBlock>();
    registry[10332] = block;
  }

  { // ID: 10342
    std::shared_ptr<GrayConcretePowderBlock> block = std::make_shared<GrayConcretePowderBlock>();
    registry[10342] = block;
  }

  { // ID: 10348
    std::shared_ptr<GreenConcretePowderBlock> block = std::make_shared<GreenConcretePowderBlock>();
    registry[10348] = block;
  }

  { // ID: 11270
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_NORTH;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11270] = block;
  }

  { // ID: 11271
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_NORTH;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11271] = block;
  }

  { // ID: 11272
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_NORTH;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11272] = block;
  }

  { // ID: 11273
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_NORTH;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11273] = block;
  }

  { // ID: 11274
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_NORTH;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11274] = block;
  }

  { // ID: 11275
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_NORTH;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11275] = block;
  }

  { // ID: 11276
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_NORTH;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11276] = block;
  }

  { // ID: 11277
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_NORTH;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11277] = block;
  }

  { // ID: 11278
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_NORTH;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11278] = block;
  }

  { // ID: 11279
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_NORTH;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11279] = block;
  }

  { // ID: 11280
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_NORTH;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11280] = block;
  }

  { // ID: 11281
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_NORTH;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11281] = block;
  }

  { // ID: 11282
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_NORTH;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11282] = block;
  }

  { // ID: 11283
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_NORTH;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11283] = block;
  }

  { // ID: 11284
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_NORTH;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11284] = block;
  }

  { // ID: 11285
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_NORTH;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11285] = block;
  }

  { // ID: 11286
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_NORTH;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11286] = block;
  }

  { // ID: 11287
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_NORTH;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11287] = block;
  }

  { // ID: 11288
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_NORTH;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11288] = block;
  }

  { // ID: 11289
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_NORTH;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11289] = block;
  }

  { // ID: 11290
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_SOUTH;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11290] = block;
  }

  { // ID: 11291
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_SOUTH;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11291] = block;
  }

  { // ID: 11292
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_SOUTH;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11292] = block;
  }

  { // ID: 11293
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_SOUTH;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11293] = block;
  }

  { // ID: 11294
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_SOUTH;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11294] = block;
  }

  { // ID: 11295
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_SOUTH;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11295] = block;
  }

  { // ID: 11296
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_SOUTH;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11296] = block;
  }

  { // ID: 11297
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_SOUTH;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11297] = block;
  }

  { // ID: 11298
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_SOUTH;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11298] = block;
  }

  { // ID: 11299
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_SOUTH;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11299] = block;
  }

  { // ID: 11300
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_SOUTH;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11300] = block;
  }

  { // ID: 11301
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_SOUTH;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11301] = block;
  }

  { // ID: 11302
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_SOUTH;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11302] = block;
  }

  { // ID: 11303
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_SOUTH;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11303] = block;
  }

  { // ID: 11304
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_SOUTH;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11304] = block;
  }

  { // ID: 11305
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_SOUTH;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11305] = block;
  }

  { // ID: 11306
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_SOUTH;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11306] = block;
  }

  { // ID: 11307
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_SOUTH;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11307] = block;
  }

  { // ID: 11308
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_SOUTH;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11308] = block;
  }

  { // ID: 11309
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_SOUTH;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11309] = block;
  }

  { // ID: 11310
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_WEST;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11310] = block;
  }

  { // ID: 11311
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_WEST;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11311] = block;
  }

  { // ID: 11312
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_WEST;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11312] = block;
  }

  { // ID: 11313
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_WEST;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11313] = block;
  }

  { // ID: 11314
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_WEST;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11314] = block;
  }

  { // ID: 11315
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_WEST;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11315] = block;
  }

  { // ID: 11316
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_WEST;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11316] = block;
  }

  { // ID: 11317
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_WEST;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11317] = block;
  }

  { // ID: 11318
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_WEST;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11318] = block;
  }

  { // ID: 11319
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_WEST;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11319] = block;
  }

  { // ID: 11320
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_WEST;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11320] = block;
  }

  { // ID: 11321
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_WEST;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11321] = block;
  }

  { // ID: 11322
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_WEST;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11322] = block;
  }

  { // ID: 11323
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_WEST;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11323] = block;
  }

  { // ID: 11324
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_WEST;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11324] = block;
  }

  { // ID: 11325
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_WEST;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11325] = block;
  }

  { // ID: 11326
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_WEST;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11326] = block;
  }

  { // ID: 11327
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_WEST;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11327] = block;
  }

  { // ID: 11328
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_WEST;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11328] = block;
  }

  { // ID: 11329
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_WEST;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11329] = block;
  }

  { // ID: 11330
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_EAST;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11330] = block;
  }

  { // ID: 11331
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_EAST;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11331] = block;
  }

  { // ID: 11332
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_EAST;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11332] = block;
  }

  { // ID: 11333
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_EAST;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11333] = block;
  }

  { // ID: 11334
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_EAST;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11334] = block;
  }

  { // ID: 11335
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_EAST;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11335] = block;
  }

  { // ID: 11336
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_EAST;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11336] = block;
  }

  { // ID: 11337
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_EAST;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11337] = block;
  }

  { // ID: 11338
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_EAST;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11338] = block;
  }

  { // ID: 11339
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_EAST;
    block->half = GraniteStairsBlock::HALF_TOP;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11339] = block;
  }

  { // ID: 11340
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_EAST;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11340] = block;
  }

  { // ID: 11341
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_EAST;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11341] = block;
  }

  { // ID: 11342
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_EAST;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11342] = block;
  }

  { // ID: 11343
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_EAST;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11343] = block;
  }

  { // ID: 11344
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_EAST;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11344] = block;
  }

  { // ID: 11345
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_EAST;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11345] = block;
  }

  { // ID: 11346
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_EAST;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11346] = block;
  }

  { // ID: 11347
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_EAST;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11347] = block;
  }

  { // ID: 11348
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_EAST;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_TRUE;
    registry[11348] = block;
  }

  { // ID: 11349
    std::shared_ptr<GraniteStairsBlock> block = std::make_shared<GraniteStairsBlock>();
    block->facing = GraniteStairsBlock::FACING_EAST;
    block->half = GraniteStairsBlock::HALF_BOTTOM;
    block->shape = GraniteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = GraniteStairsBlock::WATERLOGGED_FALSE;
    registry[11349] = block;
  }

  { // ID: 11718
    std::shared_ptr<GraniteSlabBlock> block = std::make_shared<GraniteSlabBlock>();
    block->type = GraniteSlabBlock::TYPE_TOP;
    block->waterlogged = GraniteSlabBlock::WATERLOGGED_TRUE;
    registry[11718] = block;
  }

  { // ID: 11719
    std::shared_ptr<GraniteSlabBlock> block = std::make_shared<GraniteSlabBlock>();
    block->type = GraniteSlabBlock::TYPE_TOP;
    block->waterlogged = GraniteSlabBlock::WATERLOGGED_FALSE;
    registry[11719] = block;
  }

  { // ID: 11720
    std::shared_ptr<GraniteSlabBlock> block = std::make_shared<GraniteSlabBlock>();
    block->type = GraniteSlabBlock::TYPE_BOTTOM;
    block->waterlogged = GraniteSlabBlock::WATERLOGGED_TRUE;
    registry[11720] = block;
  }

  { // ID: 11721
    std::shared_ptr<GraniteSlabBlock> block = std::make_shared<GraniteSlabBlock>();
    block->type = GraniteSlabBlock::TYPE_BOTTOM;
    block->waterlogged = GraniteSlabBlock::WATERLOGGED_FALSE;
    registry[11721] = block;
  }

  { // ID: 11722
    std::shared_ptr<GraniteSlabBlock> block = std::make_shared<GraniteSlabBlock>();
    block->type = GraniteSlabBlock::TYPE_DOUBLE;
    block->waterlogged = GraniteSlabBlock::WATERLOGGED_TRUE;
    registry[11722] = block;
  }

  { // ID: 11723
    std::shared_ptr<GraniteSlabBlock> block = std::make_shared<GraniteSlabBlock>();
    block->type = GraniteSlabBlock::TYPE_DOUBLE;
    block->waterlogged = GraniteSlabBlock::WATERLOGGED_FALSE;
    registry[11723] = block;
  }

  { // ID: 13044
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13044] = block;
  }

  { // ID: 13045
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13045] = block;
  }

  { // ID: 13046
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13046] = block;
  }

  { // ID: 13047
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13047] = block;
  }

  { // ID: 13048
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13048] = block;
  }

  { // ID: 13049
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13049] = block;
  }

  { // ID: 13050
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13050] = block;
  }

  { // ID: 13051
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13051] = block;
  }

  { // ID: 13052
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13052] = block;
  }

  { // ID: 13053
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13053] = block;
  }

  { // ID: 13054
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13054] = block;
  }

  { // ID: 13055
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13055] = block;
  }

  { // ID: 13056
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13056] = block;
  }

  { // ID: 13057
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13057] = block;
  }

  { // ID: 13058
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13058] = block;
  }

  { // ID: 13059
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13059] = block;
  }

  { // ID: 13060
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13060] = block;
  }

  { // ID: 13061
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13061] = block;
  }

  { // ID: 13062
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13062] = block;
  }

  { // ID: 13063
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13063] = block;
  }

  { // ID: 13064
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13064] = block;
  }

  { // ID: 13065
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13065] = block;
  }

  { // ID: 13066
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13066] = block;
  }

  { // ID: 13067
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13067] = block;
  }

  { // ID: 13068
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13068] = block;
  }

  { // ID: 13069
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13069] = block;
  }

  { // ID: 13070
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13070] = block;
  }

  { // ID: 13071
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13071] = block;
  }

  { // ID: 13072
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13072] = block;
  }

  { // ID: 13073
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13073] = block;
  }

  { // ID: 13074
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13074] = block;
  }

  { // ID: 13075
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13075] = block;
  }

  { // ID: 13076
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13076] = block;
  }

  { // ID: 13077
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13077] = block;
  }

  { // ID: 13078
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13078] = block;
  }

  { // ID: 13079
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13079] = block;
  }

  { // ID: 13080
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13080] = block;
  }

  { // ID: 13081
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13081] = block;
  }

  { // ID: 13082
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13082] = block;
  }

  { // ID: 13083
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13083] = block;
  }

  { // ID: 13084
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13084] = block;
  }

  { // ID: 13085
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13085] = block;
  }

  { // ID: 13086
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13086] = block;
  }

  { // ID: 13087
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13087] = block;
  }

  { // ID: 13088
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13088] = block;
  }

  { // ID: 13089
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13089] = block;
  }

  { // ID: 13090
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13090] = block;
  }

  { // ID: 13091
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13091] = block;
  }

  { // ID: 13092
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13092] = block;
  }

  { // ID: 13093
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13093] = block;
  }

  { // ID: 13094
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13094] = block;
  }

  { // ID: 13095
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13095] = block;
  }

  { // ID: 13096
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13096] = block;
  }

  { // ID: 13097
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13097] = block;
  }

  { // ID: 13098
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13098] = block;
  }

  { // ID: 13099
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13099] = block;
  }

  { // ID: 13100
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13100] = block;
  }

  { // ID: 13101
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13101] = block;
  }

  { // ID: 13102
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13102] = block;
  }

  { // ID: 13103
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13103] = block;
  }

  { // ID: 13104
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13104] = block;
  }

  { // ID: 13105
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13105] = block;
  }

  { // ID: 13106
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13106] = block;
  }

  { // ID: 13107
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13107] = block;
  }

  { // ID: 13108
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13108] = block;
  }

  { // ID: 13109
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13109] = block;
  }

  { // ID: 13110
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13110] = block;
  }

  { // ID: 13111
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13111] = block;
  }

  { // ID: 13112
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13112] = block;
  }

  { // ID: 13113
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13113] = block;
  }

  { // ID: 13114
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13114] = block;
  }

  { // ID: 13115
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13115] = block;
  }

  { // ID: 13116
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13116] = block;
  }

  { // ID: 13117
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13117] = block;
  }

  { // ID: 13118
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13118] = block;
  }

  { // ID: 13119
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13119] = block;
  }

  { // ID: 13120
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13120] = block;
  }

  { // ID: 13121
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13121] = block;
  }

  { // ID: 13122
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13122] = block;
  }

  { // ID: 13123
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13123] = block;
  }

  { // ID: 13124
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13124] = block;
  }

  { // ID: 13125
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13125] = block;
  }

  { // ID: 13126
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13126] = block;
  }

  { // ID: 13127
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13127] = block;
  }

  { // ID: 13128
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13128] = block;
  }

  { // ID: 13129
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13129] = block;
  }

  { // ID: 13130
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13130] = block;
  }

  { // ID: 13131
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13131] = block;
  }

  { // ID: 13132
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13132] = block;
  }

  { // ID: 13133
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13133] = block;
  }

  { // ID: 13134
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13134] = block;
  }

  { // ID: 13135
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13135] = block;
  }

  { // ID: 13136
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13136] = block;
  }

  { // ID: 13137
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13137] = block;
  }

  { // ID: 13138
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13138] = block;
  }

  { // ID: 13139
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13139] = block;
  }

  { // ID: 13140
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13140] = block;
  }

  { // ID: 13141
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13141] = block;
  }

  { // ID: 13142
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13142] = block;
  }

  { // ID: 13143
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13143] = block;
  }

  { // ID: 13144
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13144] = block;
  }

  { // ID: 13145
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13145] = block;
  }

  { // ID: 13146
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13146] = block;
  }

  { // ID: 13147
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13147] = block;
  }

  { // ID: 13148
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13148] = block;
  }

  { // ID: 13149
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13149] = block;
  }

  { // ID: 13150
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13150] = block;
  }

  { // ID: 13151
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_NONE;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13151] = block;
  }

  { // ID: 13152
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13152] = block;
  }

  { // ID: 13153
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13153] = block;
  }

  { // ID: 13154
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13154] = block;
  }

  { // ID: 13155
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13155] = block;
  }

  { // ID: 13156
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13156] = block;
  }

  { // ID: 13157
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13157] = block;
  }

  { // ID: 13158
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13158] = block;
  }

  { // ID: 13159
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13159] = block;
  }

  { // ID: 13160
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13160] = block;
  }

  { // ID: 13161
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13161] = block;
  }

  { // ID: 13162
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13162] = block;
  }

  { // ID: 13163
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13163] = block;
  }

  { // ID: 13164
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13164] = block;
  }

  { // ID: 13165
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13165] = block;
  }

  { // ID: 13166
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13166] = block;
  }

  { // ID: 13167
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13167] = block;
  }

  { // ID: 13168
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13168] = block;
  }

  { // ID: 13169
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13169] = block;
  }

  { // ID: 13170
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13170] = block;
  }

  { // ID: 13171
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13171] = block;
  }

  { // ID: 13172
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13172] = block;
  }

  { // ID: 13173
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13173] = block;
  }

  { // ID: 13174
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13174] = block;
  }

  { // ID: 13175
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13175] = block;
  }

  { // ID: 13176
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13176] = block;
  }

  { // ID: 13177
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13177] = block;
  }

  { // ID: 13178
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13178] = block;
  }

  { // ID: 13179
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13179] = block;
  }

  { // ID: 13180
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13180] = block;
  }

  { // ID: 13181
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13181] = block;
  }

  { // ID: 13182
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13182] = block;
  }

  { // ID: 13183
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13183] = block;
  }

  { // ID: 13184
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13184] = block;
  }

  { // ID: 13185
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13185] = block;
  }

  { // ID: 13186
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13186] = block;
  }

  { // ID: 13187
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13187] = block;
  }

  { // ID: 13188
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13188] = block;
  }

  { // ID: 13189
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13189] = block;
  }

  { // ID: 13190
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13190] = block;
  }

  { // ID: 13191
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13191] = block;
  }

  { // ID: 13192
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13192] = block;
  }

  { // ID: 13193
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13193] = block;
  }

  { // ID: 13194
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13194] = block;
  }

  { // ID: 13195
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13195] = block;
  }

  { // ID: 13196
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13196] = block;
  }

  { // ID: 13197
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13197] = block;
  }

  { // ID: 13198
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13198] = block;
  }

  { // ID: 13199
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13199] = block;
  }

  { // ID: 13200
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13200] = block;
  }

  { // ID: 13201
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13201] = block;
  }

  { // ID: 13202
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13202] = block;
  }

  { // ID: 13203
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13203] = block;
  }

  { // ID: 13204
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13204] = block;
  }

  { // ID: 13205
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13205] = block;
  }

  { // ID: 13206
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13206] = block;
  }

  { // ID: 13207
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13207] = block;
  }

  { // ID: 13208
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13208] = block;
  }

  { // ID: 13209
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13209] = block;
  }

  { // ID: 13210
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13210] = block;
  }

  { // ID: 13211
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13211] = block;
  }

  { // ID: 13212
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13212] = block;
  }

  { // ID: 13213
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13213] = block;
  }

  { // ID: 13214
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13214] = block;
  }

  { // ID: 13215
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13215] = block;
  }

  { // ID: 13216
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13216] = block;
  }

  { // ID: 13217
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13217] = block;
  }

  { // ID: 13218
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13218] = block;
  }

  { // ID: 13219
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13219] = block;
  }

  { // ID: 13220
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13220] = block;
  }

  { // ID: 13221
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13221] = block;
  }

  { // ID: 13222
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13222] = block;
  }

  { // ID: 13223
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13223] = block;
  }

  { // ID: 13224
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13224] = block;
  }

  { // ID: 13225
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13225] = block;
  }

  { // ID: 13226
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13226] = block;
  }

  { // ID: 13227
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13227] = block;
  }

  { // ID: 13228
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13228] = block;
  }

  { // ID: 13229
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13229] = block;
  }

  { // ID: 13230
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13230] = block;
  }

  { // ID: 13231
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13231] = block;
  }

  { // ID: 13232
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13232] = block;
  }

  { // ID: 13233
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13233] = block;
  }

  { // ID: 13234
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13234] = block;
  }

  { // ID: 13235
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13235] = block;
  }

  { // ID: 13236
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13236] = block;
  }

  { // ID: 13237
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13237] = block;
  }

  { // ID: 13238
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13238] = block;
  }

  { // ID: 13239
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13239] = block;
  }

  { // ID: 13240
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13240] = block;
  }

  { // ID: 13241
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13241] = block;
  }

  { // ID: 13242
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13242] = block;
  }

  { // ID: 13243
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13243] = block;
  }

  { // ID: 13244
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13244] = block;
  }

  { // ID: 13245
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13245] = block;
  }

  { // ID: 13246
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13246] = block;
  }

  { // ID: 13247
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13247] = block;
  }

  { // ID: 13248
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13248] = block;
  }

  { // ID: 13249
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13249] = block;
  }

  { // ID: 13250
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13250] = block;
  }

  { // ID: 13251
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13251] = block;
  }

  { // ID: 13252
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13252] = block;
  }

  { // ID: 13253
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13253] = block;
  }

  { // ID: 13254
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13254] = block;
  }

  { // ID: 13255
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13255] = block;
  }

  { // ID: 13256
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13256] = block;
  }

  { // ID: 13257
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13257] = block;
  }

  { // ID: 13258
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13258] = block;
  }

  { // ID: 13259
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_LOW;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13259] = block;
  }

  { // ID: 13260
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13260] = block;
  }

  { // ID: 13261
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13261] = block;
  }

  { // ID: 13262
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13262] = block;
  }

  { // ID: 13263
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13263] = block;
  }

  { // ID: 13264
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13264] = block;
  }

  { // ID: 13265
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13265] = block;
  }

  { // ID: 13266
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13266] = block;
  }

  { // ID: 13267
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13267] = block;
  }

  { // ID: 13268
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13268] = block;
  }

  { // ID: 13269
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13269] = block;
  }

  { // ID: 13270
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13270] = block;
  }

  { // ID: 13271
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13271] = block;
  }

  { // ID: 13272
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13272] = block;
  }

  { // ID: 13273
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13273] = block;
  }

  { // ID: 13274
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13274] = block;
  }

  { // ID: 13275
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13275] = block;
  }

  { // ID: 13276
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13276] = block;
  }

  { // ID: 13277
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13277] = block;
  }

  { // ID: 13278
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13278] = block;
  }

  { // ID: 13279
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13279] = block;
  }

  { // ID: 13280
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13280] = block;
  }

  { // ID: 13281
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13281] = block;
  }

  { // ID: 13282
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13282] = block;
  }

  { // ID: 13283
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13283] = block;
  }

  { // ID: 13284
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13284] = block;
  }

  { // ID: 13285
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13285] = block;
  }

  { // ID: 13286
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13286] = block;
  }

  { // ID: 13287
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13287] = block;
  }

  { // ID: 13288
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13288] = block;
  }

  { // ID: 13289
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13289] = block;
  }

  { // ID: 13290
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13290] = block;
  }

  { // ID: 13291
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13291] = block;
  }

  { // ID: 13292
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13292] = block;
  }

  { // ID: 13293
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13293] = block;
  }

  { // ID: 13294
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13294] = block;
  }

  { // ID: 13295
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_NONE;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13295] = block;
  }

  { // ID: 13296
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13296] = block;
  }

  { // ID: 13297
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13297] = block;
  }

  { // ID: 13298
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13298] = block;
  }

  { // ID: 13299
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13299] = block;
  }

  { // ID: 13300
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13300] = block;
  }

  { // ID: 13301
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13301] = block;
  }

  { // ID: 13302
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13302] = block;
  }

  { // ID: 13303
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13303] = block;
  }

  { // ID: 13304
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13304] = block;
  }

  { // ID: 13305
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13305] = block;
  }

  { // ID: 13306
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13306] = block;
  }

  { // ID: 13307
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13307] = block;
  }

  { // ID: 13308
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13308] = block;
  }

  { // ID: 13309
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13309] = block;
  }

  { // ID: 13310
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13310] = block;
  }

  { // ID: 13311
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13311] = block;
  }

  { // ID: 13312
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13312] = block;
  }

  { // ID: 13313
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13313] = block;
  }

  { // ID: 13314
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13314] = block;
  }

  { // ID: 13315
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13315] = block;
  }

  { // ID: 13316
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13316] = block;
  }

  { // ID: 13317
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13317] = block;
  }

  { // ID: 13318
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13318] = block;
  }

  { // ID: 13319
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13319] = block;
  }

  { // ID: 13320
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13320] = block;
  }

  { // ID: 13321
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13321] = block;
  }

  { // ID: 13322
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13322] = block;
  }

  { // ID: 13323
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13323] = block;
  }

  { // ID: 13324
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13324] = block;
  }

  { // ID: 13325
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13325] = block;
  }

  { // ID: 13326
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13326] = block;
  }

  { // ID: 13327
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13327] = block;
  }

  { // ID: 13328
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13328] = block;
  }

  { // ID: 13329
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13329] = block;
  }

  { // ID: 13330
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13330] = block;
  }

  { // ID: 13331
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_LOW;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13331] = block;
  }

  { // ID: 13332
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13332] = block;
  }

  { // ID: 13333
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13333] = block;
  }

  { // ID: 13334
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13334] = block;
  }

  { // ID: 13335
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13335] = block;
  }

  { // ID: 13336
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13336] = block;
  }

  { // ID: 13337
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13337] = block;
  }

  { // ID: 13338
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13338] = block;
  }

  { // ID: 13339
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13339] = block;
  }

  { // ID: 13340
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13340] = block;
  }

  { // ID: 13341
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13341] = block;
  }

  { // ID: 13342
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13342] = block;
  }

  { // ID: 13343
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_NONE;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13343] = block;
  }

  { // ID: 13344
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13344] = block;
  }

  { // ID: 13345
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13345] = block;
  }

  { // ID: 13346
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13346] = block;
  }

  { // ID: 13347
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13347] = block;
  }

  { // ID: 13348
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13348] = block;
  }

  { // ID: 13349
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13349] = block;
  }

  { // ID: 13350
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13350] = block;
  }

  { // ID: 13351
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13351] = block;
  }

  { // ID: 13352
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13352] = block;
  }

  { // ID: 13353
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13353] = block;
  }

  { // ID: 13354
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13354] = block;
  }

  { // ID: 13355
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_LOW;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13355] = block;
  }

  { // ID: 13356
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13356] = block;
  }

  { // ID: 13357
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13357] = block;
  }

  { // ID: 13358
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13358] = block;
  }

  { // ID: 13359
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13359] = block;
  }

  { // ID: 13360
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13360] = block;
  }

  { // ID: 13361
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_TRUE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13361] = block;
  }

  { // ID: 13362
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13362] = block;
  }

  { // ID: 13363
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13363] = block;
  }

  { // ID: 13364
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_TRUE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13364] = block;
  }

  { // ID: 13365
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_NONE;
    registry[13365] = block;
  }

  { // ID: 13366
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_LOW;
    registry[13366] = block;
  }

  { // ID: 13367
    std::shared_ptr<GraniteWallBlock> block = std::make_shared<GraniteWallBlock>();
    block->east = GraniteWallBlock::EAST_TALL;
    block->north = GraniteWallBlock::NORTH_TALL;
    block->south = GraniteWallBlock::SOUTH_TALL;
    block->up = GraniteWallBlock::UP_FALSE;
    block->waterlogged = GraniteWallBlock::WATERLOGGED_FALSE;
    block->west = GraniteWallBlock::WEST_TALL;
    registry[13367] = block;
  }

  { // ID: 16026
    std::shared_ptr<GrindstoneBlock> block = std::make_shared<GrindstoneBlock>();
    block->face = GrindstoneBlock::FACE_FLOOR;
    block->facing = GrindstoneBlock::FACING_NORTH;
    registry[16026] = block;
  }

  { // ID: 16027
    std::shared_ptr<GrindstoneBlock> block = std::make_shared<GrindstoneBlock>();
    block->face = GrindstoneBlock::FACE_FLOOR;
    block->facing = GrindstoneBlock::FACING_SOUTH;
    registry[16027] = block;
  }

  { // ID: 16028
    std::shared_ptr<GrindstoneBlock> block = std::make_shared<GrindstoneBlock>();
    block->face = GrindstoneBlock::FACE_FLOOR;
    block->facing = GrindstoneBlock::FACING_WEST;
    registry[16028] = block;
  }

  { // ID: 16029
    std::shared_ptr<GrindstoneBlock> block = std::make_shared<GrindstoneBlock>();
    block->face = GrindstoneBlock::FACE_FLOOR;
    block->facing = GrindstoneBlock::FACING_EAST;
    registry[16029] = block;
  }

  { // ID: 16030
    std::shared_ptr<GrindstoneBlock> block = std::make_shared<GrindstoneBlock>();
    block->face = GrindstoneBlock::FACE_WALL;
    block->facing = GrindstoneBlock::FACING_NORTH;
    registry[16030] = block;
  }

  { // ID: 16031
    std::shared_ptr<GrindstoneBlock> block = std::make_shared<GrindstoneBlock>();
    block->face = GrindstoneBlock::FACE_WALL;
    block->facing = GrindstoneBlock::FACING_SOUTH;
    registry[16031] = block;
  }

  { // ID: 16032
    std::shared_ptr<GrindstoneBlock> block = std::make_shared<GrindstoneBlock>();
    block->face = GrindstoneBlock::FACE_WALL;
    block->facing = GrindstoneBlock::FACING_WEST;
    registry[16032] = block;
  }

  { // ID: 16033
    std::shared_ptr<GrindstoneBlock> block = std::make_shared<GrindstoneBlock>();
    block->face = GrindstoneBlock::FACE_WALL;
    block->facing = GrindstoneBlock::FACING_EAST;
    registry[16033] = block;
  }

  { // ID: 16034
    std::shared_ptr<GrindstoneBlock> block = std::make_shared<GrindstoneBlock>();
    block->face = GrindstoneBlock::FACE_CEILING;
    block->facing = GrindstoneBlock::FACING_NORTH;
    registry[16034] = block;
  }

  { // ID: 16035
    std::shared_ptr<GrindstoneBlock> block = std::make_shared<GrindstoneBlock>();
    block->face = GrindstoneBlock::FACE_CEILING;
    block->facing = GrindstoneBlock::FACING_SOUTH;
    registry[16035] = block;
  }

  { // ID: 16036
    std::shared_ptr<GrindstoneBlock> block = std::make_shared<GrindstoneBlock>();
    block->face = GrindstoneBlock::FACE_CEILING;
    block->facing = GrindstoneBlock::FACING_WEST;
    registry[16036] = block;
  }

  { // ID: 16037
    std::shared_ptr<GrindstoneBlock> block = std::make_shared<GrindstoneBlock>();
    block->face = GrindstoneBlock::FACE_CEILING;
    block->facing = GrindstoneBlock::FACING_EAST;
    registry[16037] = block;
  }

  { // ID: 17873
    std::shared_ptr<GildedBlackstoneBlock> block = std::make_shared<GildedBlackstoneBlock>();
    registry[17873] = block;
  }

  { // ID: 18441
    std::shared_ptr<GrayCandleBlock> block = std::make_shared<GrayCandleBlock>();
    block->candles = GrayCandleBlock::CANDLES_1;
    block->lit = GrayCandleBlock::LIT_TRUE;
    block->waterlogged = GrayCandleBlock::WATERLOGGED_TRUE;
    registry[18441] = block;
  }

  { // ID: 18442
    std::shared_ptr<GrayCandleBlock> block = std::make_shared<GrayCandleBlock>();
    block->candles = GrayCandleBlock::CANDLES_1;
    block->lit = GrayCandleBlock::LIT_TRUE;
    block->waterlogged = GrayCandleBlock::WATERLOGGED_FALSE;
    registry[18442] = block;
  }

  { // ID: 18443
    std::shared_ptr<GrayCandleBlock> block = std::make_shared<GrayCandleBlock>();
    block->candles = GrayCandleBlock::CANDLES_1;
    block->lit = GrayCandleBlock::LIT_FALSE;
    block->waterlogged = GrayCandleBlock::WATERLOGGED_TRUE;
    registry[18443] = block;
  }

  { // ID: 18444
    std::shared_ptr<GrayCandleBlock> block = std::make_shared<GrayCandleBlock>();
    block->candles = GrayCandleBlock::CANDLES_1;
    block->lit = GrayCandleBlock::LIT_FALSE;
    block->waterlogged = GrayCandleBlock::WATERLOGGED_FALSE;
    registry[18444] = block;
  }

  { // ID: 18445
    std::shared_ptr<GrayCandleBlock> block = std::make_shared<GrayCandleBlock>();
    block->candles = GrayCandleBlock::CANDLES_2;
    block->lit = GrayCandleBlock::LIT_TRUE;
    block->waterlogged = GrayCandleBlock::WATERLOGGED_TRUE;
    registry[18445] = block;
  }

  { // ID: 18446
    std::shared_ptr<GrayCandleBlock> block = std::make_shared<GrayCandleBlock>();
    block->candles = GrayCandleBlock::CANDLES_2;
    block->lit = GrayCandleBlock::LIT_TRUE;
    block->waterlogged = GrayCandleBlock::WATERLOGGED_FALSE;
    registry[18446] = block;
  }

  { // ID: 18447
    std::shared_ptr<GrayCandleBlock> block = std::make_shared<GrayCandleBlock>();
    block->candles = GrayCandleBlock::CANDLES_2;
    block->lit = GrayCandleBlock::LIT_FALSE;
    block->waterlogged = GrayCandleBlock::WATERLOGGED_TRUE;
    registry[18447] = block;
  }

  { // ID: 18448
    std::shared_ptr<GrayCandleBlock> block = std::make_shared<GrayCandleBlock>();
    block->candles = GrayCandleBlock::CANDLES_2;
    block->lit = GrayCandleBlock::LIT_FALSE;
    block->waterlogged = GrayCandleBlock::WATERLOGGED_FALSE;
    registry[18448] = block;
  }

  { // ID: 18449
    std::shared_ptr<GrayCandleBlock> block = std::make_shared<GrayCandleBlock>();
    block->candles = GrayCandleBlock::CANDLES_3;
    block->lit = GrayCandleBlock::LIT_TRUE;
    block->waterlogged = GrayCandleBlock::WATERLOGGED_TRUE;
    registry[18449] = block;
  }

  { // ID: 18450
    std::shared_ptr<GrayCandleBlock> block = std::make_shared<GrayCandleBlock>();
    block->candles = GrayCandleBlock::CANDLES_3;
    block->lit = GrayCandleBlock::LIT_TRUE;
    block->waterlogged = GrayCandleBlock::WATERLOGGED_FALSE;
    registry[18450] = block;
  }

  { // ID: 18451
    std::shared_ptr<GrayCandleBlock> block = std::make_shared<GrayCandleBlock>();
    block->candles = GrayCandleBlock::CANDLES_3;
    block->lit = GrayCandleBlock::LIT_FALSE;
    block->waterlogged = GrayCandleBlock::WATERLOGGED_TRUE;
    registry[18451] = block;
  }

  { // ID: 18452
    std::shared_ptr<GrayCandleBlock> block = std::make_shared<GrayCandleBlock>();
    block->candles = GrayCandleBlock::CANDLES_3;
    block->lit = GrayCandleBlock::LIT_FALSE;
    block->waterlogged = GrayCandleBlock::WATERLOGGED_FALSE;
    registry[18452] = block;
  }

  { // ID: 18453
    std::shared_ptr<GrayCandleBlock> block = std::make_shared<GrayCandleBlock>();
    block->candles = GrayCandleBlock::CANDLES_4;
    block->lit = GrayCandleBlock::LIT_TRUE;
    block->waterlogged = GrayCandleBlock::WATERLOGGED_TRUE;
    registry[18453] = block;
  }

  { // ID: 18454
    std::shared_ptr<GrayCandleBlock> block = std::make_shared<GrayCandleBlock>();
    block->candles = GrayCandleBlock::CANDLES_4;
    block->lit = GrayCandleBlock::LIT_TRUE;
    block->waterlogged = GrayCandleBlock::WATERLOGGED_FALSE;
    registry[18454] = block;
  }

  { // ID: 18455
    std::shared_ptr<GrayCandleBlock> block = std::make_shared<GrayCandleBlock>();
    block->candles = GrayCandleBlock::CANDLES_4;
    block->lit = GrayCandleBlock::LIT_FALSE;
    block->waterlogged = GrayCandleBlock::WATERLOGGED_TRUE;
    registry[18455] = block;
  }

  { // ID: 18456
    std::shared_ptr<GrayCandleBlock> block = std::make_shared<GrayCandleBlock>();
    block->candles = GrayCandleBlock::CANDLES_4;
    block->lit = GrayCandleBlock::LIT_FALSE;
    block->waterlogged = GrayCandleBlock::WATERLOGGED_FALSE;
    registry[18456] = block;
  }

  { // ID: 18537
    std::shared_ptr<GreenCandleBlock> block = std::make_shared<GreenCandleBlock>();
    block->candles = GreenCandleBlock::CANDLES_1;
    block->lit = GreenCandleBlock::LIT_TRUE;
    block->waterlogged = GreenCandleBlock::WATERLOGGED_TRUE;
    registry[18537] = block;
  }

  { // ID: 18538
    std::shared_ptr<GreenCandleBlock> block = std::make_shared<GreenCandleBlock>();
    block->candles = GreenCandleBlock::CANDLES_1;
    block->lit = GreenCandleBlock::LIT_TRUE;
    block->waterlogged = GreenCandleBlock::WATERLOGGED_FALSE;
    registry[18538] = block;
  }

  { // ID: 18539
    std::shared_ptr<GreenCandleBlock> block = std::make_shared<GreenCandleBlock>();
    block->candles = GreenCandleBlock::CANDLES_1;
    block->lit = GreenCandleBlock::LIT_FALSE;
    block->waterlogged = GreenCandleBlock::WATERLOGGED_TRUE;
    registry[18539] = block;
  }

  { // ID: 18540
    std::shared_ptr<GreenCandleBlock> block = std::make_shared<GreenCandleBlock>();
    block->candles = GreenCandleBlock::CANDLES_1;
    block->lit = GreenCandleBlock::LIT_FALSE;
    block->waterlogged = GreenCandleBlock::WATERLOGGED_FALSE;
    registry[18540] = block;
  }

  { // ID: 18541
    std::shared_ptr<GreenCandleBlock> block = std::make_shared<GreenCandleBlock>();
    block->candles = GreenCandleBlock::CANDLES_2;
    block->lit = GreenCandleBlock::LIT_TRUE;
    block->waterlogged = GreenCandleBlock::WATERLOGGED_TRUE;
    registry[18541] = block;
  }

  { // ID: 18542
    std::shared_ptr<GreenCandleBlock> block = std::make_shared<GreenCandleBlock>();
    block->candles = GreenCandleBlock::CANDLES_2;
    block->lit = GreenCandleBlock::LIT_TRUE;
    block->waterlogged = GreenCandleBlock::WATERLOGGED_FALSE;
    registry[18542] = block;
  }

  { // ID: 18543
    std::shared_ptr<GreenCandleBlock> block = std::make_shared<GreenCandleBlock>();
    block->candles = GreenCandleBlock::CANDLES_2;
    block->lit = GreenCandleBlock::LIT_FALSE;
    block->waterlogged = GreenCandleBlock::WATERLOGGED_TRUE;
    registry[18543] = block;
  }

  { // ID: 18544
    std::shared_ptr<GreenCandleBlock> block = std::make_shared<GreenCandleBlock>();
    block->candles = GreenCandleBlock::CANDLES_2;
    block->lit = GreenCandleBlock::LIT_FALSE;
    block->waterlogged = GreenCandleBlock::WATERLOGGED_FALSE;
    registry[18544] = block;
  }

  { // ID: 18545
    std::shared_ptr<GreenCandleBlock> block = std::make_shared<GreenCandleBlock>();
    block->candles = GreenCandleBlock::CANDLES_3;
    block->lit = GreenCandleBlock::LIT_TRUE;
    block->waterlogged = GreenCandleBlock::WATERLOGGED_TRUE;
    registry[18545] = block;
  }

  { // ID: 18546
    std::shared_ptr<GreenCandleBlock> block = std::make_shared<GreenCandleBlock>();
    block->candles = GreenCandleBlock::CANDLES_3;
    block->lit = GreenCandleBlock::LIT_TRUE;
    block->waterlogged = GreenCandleBlock::WATERLOGGED_FALSE;
    registry[18546] = block;
  }

  { // ID: 18547
    std::shared_ptr<GreenCandleBlock> block = std::make_shared<GreenCandleBlock>();
    block->candles = GreenCandleBlock::CANDLES_3;
    block->lit = GreenCandleBlock::LIT_FALSE;
    block->waterlogged = GreenCandleBlock::WATERLOGGED_TRUE;
    registry[18547] = block;
  }

  { // ID: 18548
    std::shared_ptr<GreenCandleBlock> block = std::make_shared<GreenCandleBlock>();
    block->candles = GreenCandleBlock::CANDLES_3;
    block->lit = GreenCandleBlock::LIT_FALSE;
    block->waterlogged = GreenCandleBlock::WATERLOGGED_FALSE;
    registry[18548] = block;
  }

  { // ID: 18549
    std::shared_ptr<GreenCandleBlock> block = std::make_shared<GreenCandleBlock>();
    block->candles = GreenCandleBlock::CANDLES_4;
    block->lit = GreenCandleBlock::LIT_TRUE;
    block->waterlogged = GreenCandleBlock::WATERLOGGED_TRUE;
    registry[18549] = block;
  }

  { // ID: 18550
    std::shared_ptr<GreenCandleBlock> block = std::make_shared<GreenCandleBlock>();
    block->candles = GreenCandleBlock::CANDLES_4;
    block->lit = GreenCandleBlock::LIT_TRUE;
    block->waterlogged = GreenCandleBlock::WATERLOGGED_FALSE;
    registry[18550] = block;
  }

  { // ID: 18551
    std::shared_ptr<GreenCandleBlock> block = std::make_shared<GreenCandleBlock>();
    block->candles = GreenCandleBlock::CANDLES_4;
    block->lit = GreenCandleBlock::LIT_FALSE;
    block->waterlogged = GreenCandleBlock::WATERLOGGED_TRUE;
    registry[18551] = block;
  }

  { // ID: 18552
    std::shared_ptr<GreenCandleBlock> block = std::make_shared<GreenCandleBlock>();
    block->candles = GreenCandleBlock::CANDLES_4;
    block->lit = GreenCandleBlock::LIT_FALSE;
    block->waterlogged = GreenCandleBlock::WATERLOGGED_FALSE;
    registry[18552] = block;
  }

  { // ID: 18601
    std::shared_ptr<GrayCandleCakeBlock> block = std::make_shared<GrayCandleCakeBlock>();
    block->lit = GrayCandleCakeBlock::LIT_TRUE;
    registry[18601] = block;
  }

  { // ID: 18602
    std::shared_ptr<GrayCandleCakeBlock> block = std::make_shared<GrayCandleCakeBlock>();
    block->lit = GrayCandleCakeBlock::LIT_FALSE;
    registry[18602] = block;
  }

  { // ID: 18613
    std::shared_ptr<GreenCandleCakeBlock> block = std::make_shared<GreenCandleCakeBlock>();
    block->lit = GreenCandleCakeBlock::LIT_TRUE;
    registry[18613] = block;
  }

  { // ID: 18614
    std::shared_ptr<GreenCandleCakeBlock> block = std::make_shared<GreenCandleCakeBlock>();
    block->lit = GreenCandleCakeBlock::LIT_FALSE;
    registry[18614] = block;
  }
}