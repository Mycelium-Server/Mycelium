

#include "block_registry.h"

#include "farmland_block.h"
#include "fern_block.h"
#include "fire_block.h"
#include "fire_coral_block.h"
#include "fire_coral_block_block.h"
#include "fire_coral_fan_block.h"
#include "fire_coral_wall_fan_block.h"
#include "fletching_table_block.h"
#include "flower_pot_block.h"
#include "flowering_azalea_block.h"
#include "flowering_azalea_leaves_block.h"
#include "frogspawn_block.h"
#include "frosted_ice_block.h"
#include "furnace_block.h"

void BlockRegistry::generateF() {

  { // ID: 430
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_1;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[430] = block;
  }

  { // ID: 431
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_1;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[431] = block;
  }

  { // ID: 432
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_1;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[432] = block;
  }

  { // ID: 433
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_1;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[433] = block;
  }

  { // ID: 434
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_2;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[434] = block;
  }

  { // ID: 435
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_2;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[435] = block;
  }

  { // ID: 436
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_2;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[436] = block;
  }

  { // ID: 437
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_2;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[437] = block;
  }

  { // ID: 438
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_3;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[438] = block;
  }

  { // ID: 439
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_3;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[439] = block;
  }

  { // ID: 440
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_3;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[440] = block;
  }

  { // ID: 441
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_3;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[441] = block;
  }

  { // ID: 442
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_4;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[442] = block;
  }

  { // ID: 443
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_4;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[443] = block;
  }

  { // ID: 444
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_4;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[444] = block;
  }

  { // ID: 445
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_4;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[445] = block;
  }

  { // ID: 446
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_5;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[446] = block;
  }

  { // ID: 447
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_5;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[447] = block;
  }

  { // ID: 448
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_5;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[448] = block;
  }

  { // ID: 449
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_5;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[449] = block;
  }

  { // ID: 450
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_6;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[450] = block;
  }

  { // ID: 451
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_6;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[451] = block;
  }

  { // ID: 452
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_6;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[452] = block;
  }

  { // ID: 453
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_6;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[453] = block;
  }

  { // ID: 454
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_7;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[454] = block;
  }

  { // ID: 455
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_7;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[455] = block;
  }

  { // ID: 456
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_7;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[456] = block;
  }

  { // ID: 457
    std::shared_ptr<FloweringAzaleaLeavesBlock> block = std::make_shared<FloweringAzaleaLeavesBlock>();
    block->distance = FloweringAzaleaLeavesBlock::DISTANCE_7;
    block->persistent = FloweringAzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = FloweringAzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[457] = block;
  }

  { // ID: 1597
    std::shared_ptr<FernBlock> block = std::make_shared<FernBlock>();
    registry[1597] = block;
  }

  { // ID: 1694
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1694] = block;
  }

  { // ID: 1695
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1695] = block;
  }

  { // ID: 1696
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1696] = block;
  }

  { // ID: 1697
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1697] = block;
  }

  { // ID: 1698
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1698] = block;
  }

  { // ID: 1699
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1699] = block;
  }

  { // ID: 1700
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1700] = block;
  }

  { // ID: 1701
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1701] = block;
  }

  { // ID: 1702
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1702] = block;
  }

  { // ID: 1703
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1703] = block;
  }

  { // ID: 1704
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1704] = block;
  }

  { // ID: 1705
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1705] = block;
  }

  { // ID: 1706
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1706] = block;
  }

  { // ID: 1707
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1707] = block;
  }

  { // ID: 1708
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1708] = block;
  }

  { // ID: 1709
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1709] = block;
  }

  { // ID: 1710
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1710] = block;
  }

  { // ID: 1711
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1711] = block;
  }

  { // ID: 1712
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1712] = block;
  }

  { // ID: 1713
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1713] = block;
  }

  { // ID: 1714
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1714] = block;
  }

  { // ID: 1715
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1715] = block;
  }

  { // ID: 1716
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1716] = block;
  }

  { // ID: 1717
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1717] = block;
  }

  { // ID: 1718
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1718] = block;
  }

  { // ID: 1719
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1719] = block;
  }

  { // ID: 1720
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1720] = block;
  }

  { // ID: 1721
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1721] = block;
  }

  { // ID: 1722
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1722] = block;
  }

  { // ID: 1723
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1723] = block;
  }

  { // ID: 1724
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1724] = block;
  }

  { // ID: 1725
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_0;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1725] = block;
  }

  { // ID: 1726
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1726] = block;
  }

  { // ID: 1727
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1727] = block;
  }

  { // ID: 1728
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1728] = block;
  }

  { // ID: 1729
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1729] = block;
  }

  { // ID: 1730
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1730] = block;
  }

  { // ID: 1731
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1731] = block;
  }

  { // ID: 1732
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1732] = block;
  }

  { // ID: 1733
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1733] = block;
  }

  { // ID: 1734
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1734] = block;
  }

  { // ID: 1735
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1735] = block;
  }

  { // ID: 1736
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1736] = block;
  }

  { // ID: 1737
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1737] = block;
  }

  { // ID: 1738
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1738] = block;
  }

  { // ID: 1739
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1739] = block;
  }

  { // ID: 1740
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1740] = block;
  }

  { // ID: 1741
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1741] = block;
  }

  { // ID: 1742
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1742] = block;
  }

  { // ID: 1743
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1743] = block;
  }

  { // ID: 1744
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1744] = block;
  }

  { // ID: 1745
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1745] = block;
  }

  { // ID: 1746
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1746] = block;
  }

  { // ID: 1747
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1747] = block;
  }

  { // ID: 1748
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1748] = block;
  }

  { // ID: 1749
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1749] = block;
  }

  { // ID: 1750
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1750] = block;
  }

  { // ID: 1751
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1751] = block;
  }

  { // ID: 1752
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1752] = block;
  }

  { // ID: 1753
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1753] = block;
  }

  { // ID: 1754
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1754] = block;
  }

  { // ID: 1755
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1755] = block;
  }

  { // ID: 1756
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1756] = block;
  }

  { // ID: 1757
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_1;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1757] = block;
  }

  { // ID: 1758
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1758] = block;
  }

  { // ID: 1759
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1759] = block;
  }

  { // ID: 1760
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1760] = block;
  }

  { // ID: 1761
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1761] = block;
  }

  { // ID: 1762
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1762] = block;
  }

  { // ID: 1763
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1763] = block;
  }

  { // ID: 1764
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1764] = block;
  }

  { // ID: 1765
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1765] = block;
  }

  { // ID: 1766
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1766] = block;
  }

  { // ID: 1767
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1767] = block;
  }

  { // ID: 1768
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1768] = block;
  }

  { // ID: 1769
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1769] = block;
  }

  { // ID: 1770
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1770] = block;
  }

  { // ID: 1771
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1771] = block;
  }

  { // ID: 1772
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1772] = block;
  }

  { // ID: 1773
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1773] = block;
  }

  { // ID: 1774
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1774] = block;
  }

  { // ID: 1775
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1775] = block;
  }

  { // ID: 1776
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1776] = block;
  }

  { // ID: 1777
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1777] = block;
  }

  { // ID: 1778
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1778] = block;
  }

  { // ID: 1779
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1779] = block;
  }

  { // ID: 1780
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1780] = block;
  }

  { // ID: 1781
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1781] = block;
  }

  { // ID: 1782
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1782] = block;
  }

  { // ID: 1783
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1783] = block;
  }

  { // ID: 1784
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1784] = block;
  }

  { // ID: 1785
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1785] = block;
  }

  { // ID: 1786
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1786] = block;
  }

  { // ID: 1787
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1787] = block;
  }

  { // ID: 1788
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1788] = block;
  }

  { // ID: 1789
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_2;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1789] = block;
  }

  { // ID: 1790
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1790] = block;
  }

  { // ID: 1791
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1791] = block;
  }

  { // ID: 1792
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1792] = block;
  }

  { // ID: 1793
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1793] = block;
  }

  { // ID: 1794
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1794] = block;
  }

  { // ID: 1795
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1795] = block;
  }

  { // ID: 1796
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1796] = block;
  }

  { // ID: 1797
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1797] = block;
  }

  { // ID: 1798
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1798] = block;
  }

  { // ID: 1799
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1799] = block;
  }

  { // ID: 1800
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1800] = block;
  }

  { // ID: 1801
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1801] = block;
  }

  { // ID: 1802
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1802] = block;
  }

  { // ID: 1803
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1803] = block;
  }

  { // ID: 1804
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1804] = block;
  }

  { // ID: 1805
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1805] = block;
  }

  { // ID: 1806
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1806] = block;
  }

  { // ID: 1807
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1807] = block;
  }

  { // ID: 1808
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1808] = block;
  }

  { // ID: 1809
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1809] = block;
  }

  { // ID: 1810
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1810] = block;
  }

  { // ID: 1811
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1811] = block;
  }

  { // ID: 1812
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1812] = block;
  }

  { // ID: 1813
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1813] = block;
  }

  { // ID: 1814
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1814] = block;
  }

  { // ID: 1815
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1815] = block;
  }

  { // ID: 1816
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1816] = block;
  }

  { // ID: 1817
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1817] = block;
  }

  { // ID: 1818
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1818] = block;
  }

  { // ID: 1819
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1819] = block;
  }

  { // ID: 1820
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1820] = block;
  }

  { // ID: 1821
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_3;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1821] = block;
  }

  { // ID: 1822
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1822] = block;
  }

  { // ID: 1823
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1823] = block;
  }

  { // ID: 1824
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1824] = block;
  }

  { // ID: 1825
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1825] = block;
  }

  { // ID: 1826
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1826] = block;
  }

  { // ID: 1827
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1827] = block;
  }

  { // ID: 1828
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1828] = block;
  }

  { // ID: 1829
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1829] = block;
  }

  { // ID: 1830
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1830] = block;
  }

  { // ID: 1831
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1831] = block;
  }

  { // ID: 1832
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1832] = block;
  }

  { // ID: 1833
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1833] = block;
  }

  { // ID: 1834
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1834] = block;
  }

  { // ID: 1835
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1835] = block;
  }

  { // ID: 1836
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1836] = block;
  }

  { // ID: 1837
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1837] = block;
  }

  { // ID: 1838
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1838] = block;
  }

  { // ID: 1839
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1839] = block;
  }

  { // ID: 1840
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1840] = block;
  }

  { // ID: 1841
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1841] = block;
  }

  { // ID: 1842
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1842] = block;
  }

  { // ID: 1843
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1843] = block;
  }

  { // ID: 1844
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1844] = block;
  }

  { // ID: 1845
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1845] = block;
  }

  { // ID: 1846
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1846] = block;
  }

  { // ID: 1847
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1847] = block;
  }

  { // ID: 1848
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1848] = block;
  }

  { // ID: 1849
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1849] = block;
  }

  { // ID: 1850
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1850] = block;
  }

  { // ID: 1851
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1851] = block;
  }

  { // ID: 1852
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1852] = block;
  }

  { // ID: 1853
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_4;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1853] = block;
  }

  { // ID: 1854
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1854] = block;
  }

  { // ID: 1855
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1855] = block;
  }

  { // ID: 1856
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1856] = block;
  }

  { // ID: 1857
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1857] = block;
  }

  { // ID: 1858
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1858] = block;
  }

  { // ID: 1859
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1859] = block;
  }

  { // ID: 1860
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1860] = block;
  }

  { // ID: 1861
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1861] = block;
  }

  { // ID: 1862
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1862] = block;
  }

  { // ID: 1863
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1863] = block;
  }

  { // ID: 1864
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1864] = block;
  }

  { // ID: 1865
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1865] = block;
  }

  { // ID: 1866
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1866] = block;
  }

  { // ID: 1867
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1867] = block;
  }

  { // ID: 1868
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1868] = block;
  }

  { // ID: 1869
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1869] = block;
  }

  { // ID: 1870
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1870] = block;
  }

  { // ID: 1871
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1871] = block;
  }

  { // ID: 1872
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1872] = block;
  }

  { // ID: 1873
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1873] = block;
  }

  { // ID: 1874
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1874] = block;
  }

  { // ID: 1875
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1875] = block;
  }

  { // ID: 1876
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1876] = block;
  }

  { // ID: 1877
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1877] = block;
  }

  { // ID: 1878
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1878] = block;
  }

  { // ID: 1879
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1879] = block;
  }

  { // ID: 1880
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1880] = block;
  }

  { // ID: 1881
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1881] = block;
  }

  { // ID: 1882
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1882] = block;
  }

  { // ID: 1883
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1883] = block;
  }

  { // ID: 1884
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1884] = block;
  }

  { // ID: 1885
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_5;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1885] = block;
  }

  { // ID: 1886
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1886] = block;
  }

  { // ID: 1887
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1887] = block;
  }

  { // ID: 1888
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1888] = block;
  }

  { // ID: 1889
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1889] = block;
  }

  { // ID: 1890
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1890] = block;
  }

  { // ID: 1891
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1891] = block;
  }

  { // ID: 1892
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1892] = block;
  }

  { // ID: 1893
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1893] = block;
  }

  { // ID: 1894
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1894] = block;
  }

  { // ID: 1895
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1895] = block;
  }

  { // ID: 1896
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1896] = block;
  }

  { // ID: 1897
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1897] = block;
  }

  { // ID: 1898
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1898] = block;
  }

  { // ID: 1899
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1899] = block;
  }

  { // ID: 1900
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1900] = block;
  }

  { // ID: 1901
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1901] = block;
  }

  { // ID: 1902
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1902] = block;
  }

  { // ID: 1903
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1903] = block;
  }

  { // ID: 1904
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1904] = block;
  }

  { // ID: 1905
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1905] = block;
  }

  { // ID: 1906
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1906] = block;
  }

  { // ID: 1907
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1907] = block;
  }

  { // ID: 1908
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1908] = block;
  }

  { // ID: 1909
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1909] = block;
  }

  { // ID: 1910
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1910] = block;
  }

  { // ID: 1911
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1911] = block;
  }

  { // ID: 1912
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1912] = block;
  }

  { // ID: 1913
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1913] = block;
  }

  { // ID: 1914
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1914] = block;
  }

  { // ID: 1915
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1915] = block;
  }

  { // ID: 1916
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1916] = block;
  }

  { // ID: 1917
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_6;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1917] = block;
  }

  { // ID: 1918
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1918] = block;
  }

  { // ID: 1919
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1919] = block;
  }

  { // ID: 1920
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1920] = block;
  }

  { // ID: 1921
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1921] = block;
  }

  { // ID: 1922
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1922] = block;
  }

  { // ID: 1923
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1923] = block;
  }

  { // ID: 1924
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1924] = block;
  }

  { // ID: 1925
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1925] = block;
  }

  { // ID: 1926
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1926] = block;
  }

  { // ID: 1927
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1927] = block;
  }

  { // ID: 1928
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1928] = block;
  }

  { // ID: 1929
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1929] = block;
  }

  { // ID: 1930
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1930] = block;
  }

  { // ID: 1931
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1931] = block;
  }

  { // ID: 1932
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1932] = block;
  }

  { // ID: 1933
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1933] = block;
  }

  { // ID: 1934
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1934] = block;
  }

  { // ID: 1935
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1935] = block;
  }

  { // ID: 1936
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1936] = block;
  }

  { // ID: 1937
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1937] = block;
  }

  { // ID: 1938
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1938] = block;
  }

  { // ID: 1939
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1939] = block;
  }

  { // ID: 1940
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1940] = block;
  }

  { // ID: 1941
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1941] = block;
  }

  { // ID: 1942
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1942] = block;
  }

  { // ID: 1943
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1943] = block;
  }

  { // ID: 1944
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1944] = block;
  }

  { // ID: 1945
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1945] = block;
  }

  { // ID: 1946
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1946] = block;
  }

  { // ID: 1947
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1947] = block;
  }

  { // ID: 1948
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1948] = block;
  }

  { // ID: 1949
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_7;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1949] = block;
  }

  { // ID: 1950
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1950] = block;
  }

  { // ID: 1951
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1951] = block;
  }

  { // ID: 1952
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1952] = block;
  }

  { // ID: 1953
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1953] = block;
  }

  { // ID: 1954
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1954] = block;
  }

  { // ID: 1955
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1955] = block;
  }

  { // ID: 1956
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1956] = block;
  }

  { // ID: 1957
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1957] = block;
  }

  { // ID: 1958
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1958] = block;
  }

  { // ID: 1959
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1959] = block;
  }

  { // ID: 1960
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1960] = block;
  }

  { // ID: 1961
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1961] = block;
  }

  { // ID: 1962
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1962] = block;
  }

  { // ID: 1963
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1963] = block;
  }

  { // ID: 1964
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1964] = block;
  }

  { // ID: 1965
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1965] = block;
  }

  { // ID: 1966
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1966] = block;
  }

  { // ID: 1967
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1967] = block;
  }

  { // ID: 1968
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1968] = block;
  }

  { // ID: 1969
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1969] = block;
  }

  { // ID: 1970
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1970] = block;
  }

  { // ID: 1971
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1971] = block;
  }

  { // ID: 1972
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1972] = block;
  }

  { // ID: 1973
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1973] = block;
  }

  { // ID: 1974
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1974] = block;
  }

  { // ID: 1975
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1975] = block;
  }

  { // ID: 1976
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1976] = block;
  }

  { // ID: 1977
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1977] = block;
  }

  { // ID: 1978
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1978] = block;
  }

  { // ID: 1979
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1979] = block;
  }

  { // ID: 1980
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1980] = block;
  }

  { // ID: 1981
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_8;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1981] = block;
  }

  { // ID: 1982
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1982] = block;
  }

  { // ID: 1983
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1983] = block;
  }

  { // ID: 1984
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1984] = block;
  }

  { // ID: 1985
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1985] = block;
  }

  { // ID: 1986
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1986] = block;
  }

  { // ID: 1987
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1987] = block;
  }

  { // ID: 1988
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1988] = block;
  }

  { // ID: 1989
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1989] = block;
  }

  { // ID: 1990
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1990] = block;
  }

  { // ID: 1991
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1991] = block;
  }

  { // ID: 1992
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1992] = block;
  }

  { // ID: 1993
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1993] = block;
  }

  { // ID: 1994
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1994] = block;
  }

  { // ID: 1995
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1995] = block;
  }

  { // ID: 1996
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[1996] = block;
  }

  { // ID: 1997
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[1997] = block;
  }

  { // ID: 1998
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[1998] = block;
  }

  { // ID: 1999
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[1999] = block;
  }

  { // ID: 2000
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2000] = block;
  }

  { // ID: 2001
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2001] = block;
  }

  { // ID: 2002
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2002] = block;
  }

  { // ID: 2003
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2003] = block;
  }

  { // ID: 2004
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2004] = block;
  }

  { // ID: 2005
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2005] = block;
  }

  { // ID: 2006
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2006] = block;
  }

  { // ID: 2007
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2007] = block;
  }

  { // ID: 2008
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2008] = block;
  }

  { // ID: 2009
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2009] = block;
  }

  { // ID: 2010
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2010] = block;
  }

  { // ID: 2011
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2011] = block;
  }

  { // ID: 2012
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2012] = block;
  }

  { // ID: 2013
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_9;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2013] = block;
  }

  { // ID: 2014
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2014] = block;
  }

  { // ID: 2015
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2015] = block;
  }

  { // ID: 2016
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2016] = block;
  }

  { // ID: 2017
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2017] = block;
  }

  { // ID: 2018
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2018] = block;
  }

  { // ID: 2019
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2019] = block;
  }

  { // ID: 2020
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2020] = block;
  }

  { // ID: 2021
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2021] = block;
  }

  { // ID: 2022
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2022] = block;
  }

  { // ID: 2023
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2023] = block;
  }

  { // ID: 2024
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2024] = block;
  }

  { // ID: 2025
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2025] = block;
  }

  { // ID: 2026
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2026] = block;
  }

  { // ID: 2027
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2027] = block;
  }

  { // ID: 2028
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2028] = block;
  }

  { // ID: 2029
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2029] = block;
  }

  { // ID: 2030
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2030] = block;
  }

  { // ID: 2031
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2031] = block;
  }

  { // ID: 2032
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2032] = block;
  }

  { // ID: 2033
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2033] = block;
  }

  { // ID: 2034
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2034] = block;
  }

  { // ID: 2035
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2035] = block;
  }

  { // ID: 2036
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2036] = block;
  }

  { // ID: 2037
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2037] = block;
  }

  { // ID: 2038
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2038] = block;
  }

  { // ID: 2039
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2039] = block;
  }

  { // ID: 2040
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2040] = block;
  }

  { // ID: 2041
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2041] = block;
  }

  { // ID: 2042
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2042] = block;
  }

  { // ID: 2043
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2043] = block;
  }

  { // ID: 2044
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2044] = block;
  }

  { // ID: 2045
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_10;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2045] = block;
  }

  { // ID: 2046
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2046] = block;
  }

  { // ID: 2047
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2047] = block;
  }

  { // ID: 2048
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2048] = block;
  }

  { // ID: 2049
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2049] = block;
  }

  { // ID: 2050
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2050] = block;
  }

  { // ID: 2051
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2051] = block;
  }

  { // ID: 2052
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2052] = block;
  }

  { // ID: 2053
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2053] = block;
  }

  { // ID: 2054
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2054] = block;
  }

  { // ID: 2055
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2055] = block;
  }

  { // ID: 2056
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2056] = block;
  }

  { // ID: 2057
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2057] = block;
  }

  { // ID: 2058
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2058] = block;
  }

  { // ID: 2059
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2059] = block;
  }

  { // ID: 2060
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2060] = block;
  }

  { // ID: 2061
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2061] = block;
  }

  { // ID: 2062
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2062] = block;
  }

  { // ID: 2063
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2063] = block;
  }

  { // ID: 2064
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2064] = block;
  }

  { // ID: 2065
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2065] = block;
  }

  { // ID: 2066
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2066] = block;
  }

  { // ID: 2067
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2067] = block;
  }

  { // ID: 2068
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2068] = block;
  }

  { // ID: 2069
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2069] = block;
  }

  { // ID: 2070
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2070] = block;
  }

  { // ID: 2071
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2071] = block;
  }

  { // ID: 2072
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2072] = block;
  }

  { // ID: 2073
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2073] = block;
  }

  { // ID: 2074
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2074] = block;
  }

  { // ID: 2075
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2075] = block;
  }

  { // ID: 2076
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2076] = block;
  }

  { // ID: 2077
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_11;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2077] = block;
  }

  { // ID: 2078
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2078] = block;
  }

  { // ID: 2079
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2079] = block;
  }

  { // ID: 2080
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2080] = block;
  }

  { // ID: 2081
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2081] = block;
  }

  { // ID: 2082
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2082] = block;
  }

  { // ID: 2083
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2083] = block;
  }

  { // ID: 2084
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2084] = block;
  }

  { // ID: 2085
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2085] = block;
  }

  { // ID: 2086
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2086] = block;
  }

  { // ID: 2087
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2087] = block;
  }

  { // ID: 2088
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2088] = block;
  }

  { // ID: 2089
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2089] = block;
  }

  { // ID: 2090
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2090] = block;
  }

  { // ID: 2091
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2091] = block;
  }

  { // ID: 2092
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2092] = block;
  }

  { // ID: 2093
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2093] = block;
  }

  { // ID: 2094
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2094] = block;
  }

  { // ID: 2095
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2095] = block;
  }

  { // ID: 2096
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2096] = block;
  }

  { // ID: 2097
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2097] = block;
  }

  { // ID: 2098
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2098] = block;
  }

  { // ID: 2099
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2099] = block;
  }

  { // ID: 2100
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2100] = block;
  }

  { // ID: 2101
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2101] = block;
  }

  { // ID: 2102
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2102] = block;
  }

  { // ID: 2103
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2103] = block;
  }

  { // ID: 2104
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2104] = block;
  }

  { // ID: 2105
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2105] = block;
  }

  { // ID: 2106
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2106] = block;
  }

  { // ID: 2107
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2107] = block;
  }

  { // ID: 2108
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2108] = block;
  }

  { // ID: 2109
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_12;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2109] = block;
  }

  { // ID: 2110
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2110] = block;
  }

  { // ID: 2111
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2111] = block;
  }

  { // ID: 2112
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2112] = block;
  }

  { // ID: 2113
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2113] = block;
  }

  { // ID: 2114
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2114] = block;
  }

  { // ID: 2115
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2115] = block;
  }

  { // ID: 2116
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2116] = block;
  }

  { // ID: 2117
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2117] = block;
  }

  { // ID: 2118
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2118] = block;
  }

  { // ID: 2119
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2119] = block;
  }

  { // ID: 2120
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2120] = block;
  }

  { // ID: 2121
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2121] = block;
  }

  { // ID: 2122
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2122] = block;
  }

  { // ID: 2123
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2123] = block;
  }

  { // ID: 2124
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2124] = block;
  }

  { // ID: 2125
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2125] = block;
  }

  { // ID: 2126
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2126] = block;
  }

  { // ID: 2127
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2127] = block;
  }

  { // ID: 2128
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2128] = block;
  }

  { // ID: 2129
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2129] = block;
  }

  { // ID: 2130
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2130] = block;
  }

  { // ID: 2131
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2131] = block;
  }

  { // ID: 2132
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2132] = block;
  }

  { // ID: 2133
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2133] = block;
  }

  { // ID: 2134
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2134] = block;
  }

  { // ID: 2135
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2135] = block;
  }

  { // ID: 2136
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2136] = block;
  }

  { // ID: 2137
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2137] = block;
  }

  { // ID: 2138
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2138] = block;
  }

  { // ID: 2139
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2139] = block;
  }

  { // ID: 2140
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2140] = block;
  }

  { // ID: 2141
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_13;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2141] = block;
  }

  { // ID: 2142
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2142] = block;
  }

  { // ID: 2143
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2143] = block;
  }

  { // ID: 2144
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2144] = block;
  }

  { // ID: 2145
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2145] = block;
  }

  { // ID: 2146
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2146] = block;
  }

  { // ID: 2147
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2147] = block;
  }

  { // ID: 2148
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2148] = block;
  }

  { // ID: 2149
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2149] = block;
  }

  { // ID: 2150
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2150] = block;
  }

  { // ID: 2151
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2151] = block;
  }

  { // ID: 2152
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2152] = block;
  }

  { // ID: 2153
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2153] = block;
  }

  { // ID: 2154
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2154] = block;
  }

  { // ID: 2155
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2155] = block;
  }

  { // ID: 2156
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2156] = block;
  }

  { // ID: 2157
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2157] = block;
  }

  { // ID: 2158
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2158] = block;
  }

  { // ID: 2159
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2159] = block;
  }

  { // ID: 2160
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2160] = block;
  }

  { // ID: 2161
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2161] = block;
  }

  { // ID: 2162
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2162] = block;
  }

  { // ID: 2163
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2163] = block;
  }

  { // ID: 2164
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2164] = block;
  }

  { // ID: 2165
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2165] = block;
  }

  { // ID: 2166
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2166] = block;
  }

  { // ID: 2167
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2167] = block;
  }

  { // ID: 2168
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2168] = block;
  }

  { // ID: 2169
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2169] = block;
  }

  { // ID: 2170
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2170] = block;
  }

  { // ID: 2171
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2171] = block;
  }

  { // ID: 2172
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2172] = block;
  }

  { // ID: 2173
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_14;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2173] = block;
  }

  { // ID: 2174
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2174] = block;
  }

  { // ID: 2175
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2175] = block;
  }

  { // ID: 2176
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2176] = block;
  }

  { // ID: 2177
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2177] = block;
  }

  { // ID: 2178
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2178] = block;
  }

  { // ID: 2179
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2179] = block;
  }

  { // ID: 2180
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2180] = block;
  }

  { // ID: 2181
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2181] = block;
  }

  { // ID: 2182
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2182] = block;
  }

  { // ID: 2183
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2183] = block;
  }

  { // ID: 2184
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2184] = block;
  }

  { // ID: 2185
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2185] = block;
  }

  { // ID: 2186
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2186] = block;
  }

  { // ID: 2187
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2187] = block;
  }

  { // ID: 2188
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2188] = block;
  }

  { // ID: 2189
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_TRUE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2189] = block;
  }

  { // ID: 2190
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2190] = block;
  }

  { // ID: 2191
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2191] = block;
  }

  { // ID: 2192
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2192] = block;
  }

  { // ID: 2193
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2193] = block;
  }

  { // ID: 2194
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2194] = block;
  }

  { // ID: 2195
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2195] = block;
  }

  { // ID: 2196
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2196] = block;
  }

  { // ID: 2197
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_TRUE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2197] = block;
  }

  { // ID: 2198
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2198] = block;
  }

  { // ID: 2199
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2199] = block;
  }

  { // ID: 2200
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2200] = block;
  }

  { // ID: 2201
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_TRUE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2201] = block;
  }

  { // ID: 2202
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_TRUE;
    registry[2202] = block;
  }

  { // ID: 2203
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_TRUE;
    block->west = FireBlock::WEST_FALSE;
    registry[2203] = block;
  }

  { // ID: 2204
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_TRUE;
    registry[2204] = block;
  }

  { // ID: 2205
    std::shared_ptr<FireBlock> block = std::make_shared<FireBlock>();
    block->age = FireBlock::AGE_15;
    block->east = FireBlock::EAST_FALSE;
    block->north = FireBlock::NORTH_FALSE;
    block->south = FireBlock::SOUTH_FALSE;
    block->up = FireBlock::UP_FALSE;
    block->west = FireBlock::WEST_FALSE;
    registry[2205] = block;
  }

  { // ID: 3620
    std::shared_ptr<FarmlandBlock> block = std::make_shared<FarmlandBlock>();
    block->moisture = FarmlandBlock::MOISTURE_0;
    registry[3620] = block;
  }

  { // ID: 3621
    std::shared_ptr<FarmlandBlock> block = std::make_shared<FarmlandBlock>();
    block->moisture = FarmlandBlock::MOISTURE_1;
    registry[3621] = block;
  }

  { // ID: 3622
    std::shared_ptr<FarmlandBlock> block = std::make_shared<FarmlandBlock>();
    block->moisture = FarmlandBlock::MOISTURE_2;
    registry[3622] = block;
  }

  { // ID: 3623
    std::shared_ptr<FarmlandBlock> block = std::make_shared<FarmlandBlock>();
    block->moisture = FarmlandBlock::MOISTURE_3;
    registry[3623] = block;
  }

  { // ID: 3624
    std::shared_ptr<FarmlandBlock> block = std::make_shared<FarmlandBlock>();
    block->moisture = FarmlandBlock::MOISTURE_4;
    registry[3624] = block;
  }

  { // ID: 3625
    std::shared_ptr<FarmlandBlock> block = std::make_shared<FarmlandBlock>();
    block->moisture = FarmlandBlock::MOISTURE_5;
    registry[3625] = block;
  }

  { // ID: 3626
    std::shared_ptr<FarmlandBlock> block = std::make_shared<FarmlandBlock>();
    block->moisture = FarmlandBlock::MOISTURE_6;
    registry[3626] = block;
  }

  { // ID: 3627
    std::shared_ptr<FarmlandBlock> block = std::make_shared<FarmlandBlock>();
    block->moisture = FarmlandBlock::MOISTURE_7;
    registry[3627] = block;
  }

  { // ID: 3628
    std::shared_ptr<FurnaceBlock> block = std::make_shared<FurnaceBlock>();
    block->facing = FurnaceBlock::FACING_NORTH;
    block->lit = FurnaceBlock::LIT_TRUE;
    registry[3628] = block;
  }

  { // ID: 3629
    std::shared_ptr<FurnaceBlock> block = std::make_shared<FurnaceBlock>();
    block->facing = FurnaceBlock::FACING_NORTH;
    block->lit = FurnaceBlock::LIT_FALSE;
    registry[3629] = block;
  }

  { // ID: 3630
    std::shared_ptr<FurnaceBlock> block = std::make_shared<FurnaceBlock>();
    block->facing = FurnaceBlock::FACING_SOUTH;
    block->lit = FurnaceBlock::LIT_TRUE;
    registry[3630] = block;
  }

  { // ID: 3631
    std::shared_ptr<FurnaceBlock> block = std::make_shared<FurnaceBlock>();
    block->facing = FurnaceBlock::FACING_SOUTH;
    block->lit = FurnaceBlock::LIT_FALSE;
    registry[3631] = block;
  }

  { // ID: 3632
    std::shared_ptr<FurnaceBlock> block = std::make_shared<FurnaceBlock>();
    block->facing = FurnaceBlock::FACING_WEST;
    block->lit = FurnaceBlock::LIT_TRUE;
    registry[3632] = block;
  }

  { // ID: 3633
    std::shared_ptr<FurnaceBlock> block = std::make_shared<FurnaceBlock>();
    block->facing = FurnaceBlock::FACING_WEST;
    block->lit = FurnaceBlock::LIT_FALSE;
    registry[3633] = block;
  }

  { // ID: 3634
    std::shared_ptr<FurnaceBlock> block = std::make_shared<FurnaceBlock>();
    block->facing = FurnaceBlock::FACING_EAST;
    block->lit = FurnaceBlock::LIT_TRUE;
    registry[3634] = block;
  }

  { // ID: 3635
    std::shared_ptr<FurnaceBlock> block = std::make_shared<FurnaceBlock>();
    block->facing = FurnaceBlock::FACING_EAST;
    block->lit = FurnaceBlock::LIT_FALSE;
    registry[3635] = block;
  }

  { // ID: 6897
    std::shared_ptr<FlowerPotBlock> block = std::make_shared<FlowerPotBlock>();
    registry[6897] = block;
  }

  { // ID: 10130
    std::shared_ptr<FrostedIceBlock> block = std::make_shared<FrostedIceBlock>();
    block->age = FrostedIceBlock::AGE_0;
    registry[10130] = block;
  }

  { // ID: 10131
    std::shared_ptr<FrostedIceBlock> block = std::make_shared<FrostedIceBlock>();
    block->age = FrostedIceBlock::AGE_1;
    registry[10131] = block;
  }

  { // ID: 10132
    std::shared_ptr<FrostedIceBlock> block = std::make_shared<FrostedIceBlock>();
    block->age = FrostedIceBlock::AGE_2;
    registry[10132] = block;
  }

  { // ID: 10133
    std::shared_ptr<FrostedIceBlock> block = std::make_shared<FrostedIceBlock>();
    block->age = FrostedIceBlock::AGE_3;
    registry[10133] = block;
  }

  { // ID: 10399
    std::shared_ptr<FireCoralBlockBlock> block = std::make_shared<FireCoralBlockBlock>();
    registry[10399] = block;
  }

  { // ID: 10417
    std::shared_ptr<FireCoralBlock> block = std::make_shared<FireCoralBlock>();
    block->waterlogged = FireCoralBlock::WATERLOGGED_TRUE;
    registry[10417] = block;
  }

  { // ID: 10418
    std::shared_ptr<FireCoralBlock> block = std::make_shared<FireCoralBlock>();
    block->waterlogged = FireCoralBlock::WATERLOGGED_FALSE;
    registry[10418] = block;
  }

  { // ID: 10437
    std::shared_ptr<FireCoralFanBlock> block = std::make_shared<FireCoralFanBlock>();
    block->waterlogged = FireCoralFanBlock::WATERLOGGED_TRUE;
    registry[10437] = block;
  }

  { // ID: 10438
    std::shared_ptr<FireCoralFanBlock> block = std::make_shared<FireCoralFanBlock>();
    block->waterlogged = FireCoralFanBlock::WATERLOGGED_FALSE;
    registry[10438] = block;
  }

  { // ID: 10505
    std::shared_ptr<FireCoralWallFanBlock> block = std::make_shared<FireCoralWallFanBlock>();
    block->facing = FireCoralWallFanBlock::FACING_NORTH;
    block->waterlogged = FireCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10505] = block;
  }

  { // ID: 10506
    std::shared_ptr<FireCoralWallFanBlock> block = std::make_shared<FireCoralWallFanBlock>();
    block->facing = FireCoralWallFanBlock::FACING_NORTH;
    block->waterlogged = FireCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10506] = block;
  }

  { // ID: 10507
    std::shared_ptr<FireCoralWallFanBlock> block = std::make_shared<FireCoralWallFanBlock>();
    block->facing = FireCoralWallFanBlock::FACING_SOUTH;
    block->waterlogged = FireCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10507] = block;
  }

  { // ID: 10508
    std::shared_ptr<FireCoralWallFanBlock> block = std::make_shared<FireCoralWallFanBlock>();
    block->facing = FireCoralWallFanBlock::FACING_SOUTH;
    block->waterlogged = FireCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10508] = block;
  }

  { // ID: 10509
    std::shared_ptr<FireCoralWallFanBlock> block = std::make_shared<FireCoralWallFanBlock>();
    block->facing = FireCoralWallFanBlock::FACING_WEST;
    block->waterlogged = FireCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10509] = block;
  }

  { // ID: 10510
    std::shared_ptr<FireCoralWallFanBlock> block = std::make_shared<FireCoralWallFanBlock>();
    block->facing = FireCoralWallFanBlock::FACING_WEST;
    block->waterlogged = FireCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10510] = block;
  }

  { // ID: 10511
    std::shared_ptr<FireCoralWallFanBlock> block = std::make_shared<FireCoralWallFanBlock>();
    block->facing = FireCoralWallFanBlock::FACING_EAST;
    block->waterlogged = FireCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10511] = block;
  }

  { // ID: 10512
    std::shared_ptr<FireCoralWallFanBlock> block = std::make_shared<FireCoralWallFanBlock>();
    block->facing = FireCoralWallFanBlock::FACING_EAST;
    block->waterlogged = FireCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10512] = block;
  }

  { // ID: 16025
    std::shared_ptr<FletchingTableBlock> block = std::make_shared<FletchingTableBlock>();
    registry[16025] = block;
  }

  { // ID: 19715
    std::shared_ptr<FloweringAzaleaBlock> block = std::make_shared<FloweringAzaleaBlock>();
    registry[19715] = block;
  }

  { // ID: 21446
    std::shared_ptr<FrogspawnBlock> block = std::make_shared<FrogspawnBlock>();
    registry[21446] = block;
  }
}