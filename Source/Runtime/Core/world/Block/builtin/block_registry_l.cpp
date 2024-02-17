

#include "block_registry.h"

#include "ladder_block.h"
#include "lantern_block.h"
#include "lapis_block_block.h"
#include "lapis_ore_block.h"
#include "large_amethyst_bud_block.h"
#include "large_fern_block.h"
#include "lava_block.h"
#include "lava_cauldron_block.h"
#include "lectern_block.h"
#include "lever_block.h"
#include "light_block.h"
#include "light_blue_banner_block.h"
#include "light_blue_bed_block.h"
#include "light_blue_candle_block.h"
#include "light_blue_candle_cake_block.h"
#include "light_blue_carpet_block.h"
#include "light_blue_concrete_block.h"
#include "light_blue_concrete_powder_block.h"
#include "light_blue_glazed_terracotta_block.h"
#include "light_blue_shulker_box_block.h"
#include "light_blue_stained_glass_block.h"
#include "light_blue_stained_glass_pane_block.h"
#include "light_blue_terracotta_block.h"
#include "light_blue_wall_banner_block.h"
#include "light_blue_wool_block.h"
#include "light_gray_banner_block.h"
#include "light_gray_bed_block.h"
#include "light_gray_candle_block.h"
#include "light_gray_candle_cake_block.h"
#include "light_gray_carpet_block.h"
#include "light_gray_concrete_block.h"
#include "light_gray_concrete_powder_block.h"
#include "light_gray_glazed_terracotta_block.h"
#include "light_gray_shulker_box_block.h"
#include "light_gray_stained_glass_block.h"
#include "light_gray_stained_glass_pane_block.h"
#include "light_gray_terracotta_block.h"
#include "light_gray_wall_banner_block.h"
#include "light_gray_wool_block.h"
#include "light_weighted_pressure_plate_block.h"
#include "lightning_rod_block.h"
#include "lilac_block.h"
#include "lily_of_the_valley_block.h"
#include "lily_pad_block.h"
#include "lime_banner_block.h"
#include "lime_bed_block.h"
#include "lime_candle_block.h"
#include "lime_candle_cake_block.h"
#include "lime_carpet_block.h"
#include "lime_concrete_block.h"
#include "lime_concrete_powder_block.h"
#include "lime_glazed_terracotta_block.h"
#include "lime_shulker_box_block.h"
#include "lime_stained_glass_block.h"
#include "lime_stained_glass_pane_block.h"
#include "lime_terracotta_block.h"
#include "lime_wall_banner_block.h"
#include "lime_wool_block.h"
#include "lodestone_block.h"
#include "loom_block.h"

void BlockRegistry::generateL() {

  { // ID: 91
    std::shared_ptr<LavaBlock> block = std::make_shared<LavaBlock>();
    block->level = LavaBlock::LEVEL_0;
    registry[91] = block;
  }

  { // ID: 92
    std::shared_ptr<LavaBlock> block = std::make_shared<LavaBlock>();
    block->level = LavaBlock::LEVEL_1;
    registry[92] = block;
  }

  { // ID: 93
    std::shared_ptr<LavaBlock> block = std::make_shared<LavaBlock>();
    block->level = LavaBlock::LEVEL_2;
    registry[93] = block;
  }

  { // ID: 94
    std::shared_ptr<LavaBlock> block = std::make_shared<LavaBlock>();
    block->level = LavaBlock::LEVEL_3;
    registry[94] = block;
  }

  { // ID: 95
    std::shared_ptr<LavaBlock> block = std::make_shared<LavaBlock>();
    block->level = LavaBlock::LEVEL_4;
    registry[95] = block;
  }

  { // ID: 96
    std::shared_ptr<LavaBlock> block = std::make_shared<LavaBlock>();
    block->level = LavaBlock::LEVEL_5;
    registry[96] = block;
  }

  { // ID: 97
    std::shared_ptr<LavaBlock> block = std::make_shared<LavaBlock>();
    block->level = LavaBlock::LEVEL_6;
    registry[97] = block;
  }

  { // ID: 98
    std::shared_ptr<LavaBlock> block = std::make_shared<LavaBlock>();
    block->level = LavaBlock::LEVEL_7;
    registry[98] = block;
  }

  { // ID: 99
    std::shared_ptr<LavaBlock> block = std::make_shared<LavaBlock>();
    block->level = LavaBlock::LEVEL_8;
    registry[99] = block;
  }

  { // ID: 100
    std::shared_ptr<LavaBlock> block = std::make_shared<LavaBlock>();
    block->level = LavaBlock::LEVEL_9;
    registry[100] = block;
  }

  { // ID: 101
    std::shared_ptr<LavaBlock> block = std::make_shared<LavaBlock>();
    block->level = LavaBlock::LEVEL_10;
    registry[101] = block;
  }

  { // ID: 102
    std::shared_ptr<LavaBlock> block = std::make_shared<LavaBlock>();
    block->level = LavaBlock::LEVEL_11;
    registry[102] = block;
  }

  { // ID: 103
    std::shared_ptr<LavaBlock> block = std::make_shared<LavaBlock>();
    block->level = LavaBlock::LEVEL_12;
    registry[103] = block;
  }

  { // ID: 104
    std::shared_ptr<LavaBlock> block = std::make_shared<LavaBlock>();
    block->level = LavaBlock::LEVEL_13;
    registry[104] = block;
  }

  { // ID: 105
    std::shared_ptr<LavaBlock> block = std::make_shared<LavaBlock>();
    block->level = LavaBlock::LEVEL_14;
    registry[105] = block;
  }

  { // ID: 106
    std::shared_ptr<LavaBlock> block = std::make_shared<LavaBlock>();
    block->level = LavaBlock::LEVEL_15;
    registry[106] = block;
  }

  { // ID: 461
    std::shared_ptr<LapisOreBlock> block = std::make_shared<LapisOreBlock>();
    registry[461] = block;
  }

  { // ID: 463
    std::shared_ptr<LapisBlockBlock> block = std::make_shared<LapisBlockBlock>();
    registry[463] = block;
  }

  { // ID: 1327
    std::shared_ptr<LightBlueBedBlock> block = std::make_shared<LightBlueBedBlock>();
    block->facing = LightBlueBedBlock::FACING_NORTH;
    block->occupied = LightBlueBedBlock::OCCUPIED_TRUE;
    block->part = LightBlueBedBlock::PART_HEAD;
    registry[1327] = block;
  }

  { // ID: 1328
    std::shared_ptr<LightBlueBedBlock> block = std::make_shared<LightBlueBedBlock>();
    block->facing = LightBlueBedBlock::FACING_NORTH;
    block->occupied = LightBlueBedBlock::OCCUPIED_TRUE;
    block->part = LightBlueBedBlock::PART_FOOT;
    registry[1328] = block;
  }

  { // ID: 1329
    std::shared_ptr<LightBlueBedBlock> block = std::make_shared<LightBlueBedBlock>();
    block->facing = LightBlueBedBlock::FACING_NORTH;
    block->occupied = LightBlueBedBlock::OCCUPIED_FALSE;
    block->part = LightBlueBedBlock::PART_HEAD;
    registry[1329] = block;
  }

  { // ID: 1330
    std::shared_ptr<LightBlueBedBlock> block = std::make_shared<LightBlueBedBlock>();
    block->facing = LightBlueBedBlock::FACING_NORTH;
    block->occupied = LightBlueBedBlock::OCCUPIED_FALSE;
    block->part = LightBlueBedBlock::PART_FOOT;
    registry[1330] = block;
  }

  { // ID: 1331
    std::shared_ptr<LightBlueBedBlock> block = std::make_shared<LightBlueBedBlock>();
    block->facing = LightBlueBedBlock::FACING_SOUTH;
    block->occupied = LightBlueBedBlock::OCCUPIED_TRUE;
    block->part = LightBlueBedBlock::PART_HEAD;
    registry[1331] = block;
  }

  { // ID: 1332
    std::shared_ptr<LightBlueBedBlock> block = std::make_shared<LightBlueBedBlock>();
    block->facing = LightBlueBedBlock::FACING_SOUTH;
    block->occupied = LightBlueBedBlock::OCCUPIED_TRUE;
    block->part = LightBlueBedBlock::PART_FOOT;
    registry[1332] = block;
  }

  { // ID: 1333
    std::shared_ptr<LightBlueBedBlock> block = std::make_shared<LightBlueBedBlock>();
    block->facing = LightBlueBedBlock::FACING_SOUTH;
    block->occupied = LightBlueBedBlock::OCCUPIED_FALSE;
    block->part = LightBlueBedBlock::PART_HEAD;
    registry[1333] = block;
  }

  { // ID: 1334
    std::shared_ptr<LightBlueBedBlock> block = std::make_shared<LightBlueBedBlock>();
    block->facing = LightBlueBedBlock::FACING_SOUTH;
    block->occupied = LightBlueBedBlock::OCCUPIED_FALSE;
    block->part = LightBlueBedBlock::PART_FOOT;
    registry[1334] = block;
  }

  { // ID: 1335
    std::shared_ptr<LightBlueBedBlock> block = std::make_shared<LightBlueBedBlock>();
    block->facing = LightBlueBedBlock::FACING_WEST;
    block->occupied = LightBlueBedBlock::OCCUPIED_TRUE;
    block->part = LightBlueBedBlock::PART_HEAD;
    registry[1335] = block;
  }

  { // ID: 1336
    std::shared_ptr<LightBlueBedBlock> block = std::make_shared<LightBlueBedBlock>();
    block->facing = LightBlueBedBlock::FACING_WEST;
    block->occupied = LightBlueBedBlock::OCCUPIED_TRUE;
    block->part = LightBlueBedBlock::PART_FOOT;
    registry[1336] = block;
  }

  { // ID: 1337
    std::shared_ptr<LightBlueBedBlock> block = std::make_shared<LightBlueBedBlock>();
    block->facing = LightBlueBedBlock::FACING_WEST;
    block->occupied = LightBlueBedBlock::OCCUPIED_FALSE;
    block->part = LightBlueBedBlock::PART_HEAD;
    registry[1337] = block;
  }

  { // ID: 1338
    std::shared_ptr<LightBlueBedBlock> block = std::make_shared<LightBlueBedBlock>();
    block->facing = LightBlueBedBlock::FACING_WEST;
    block->occupied = LightBlueBedBlock::OCCUPIED_FALSE;
    block->part = LightBlueBedBlock::PART_FOOT;
    registry[1338] = block;
  }

  { // ID: 1339
    std::shared_ptr<LightBlueBedBlock> block = std::make_shared<LightBlueBedBlock>();
    block->facing = LightBlueBedBlock::FACING_EAST;
    block->occupied = LightBlueBedBlock::OCCUPIED_TRUE;
    block->part = LightBlueBedBlock::PART_HEAD;
    registry[1339] = block;
  }

  { // ID: 1340
    std::shared_ptr<LightBlueBedBlock> block = std::make_shared<LightBlueBedBlock>();
    block->facing = LightBlueBedBlock::FACING_EAST;
    block->occupied = LightBlueBedBlock::OCCUPIED_TRUE;
    block->part = LightBlueBedBlock::PART_FOOT;
    registry[1340] = block;
  }

  { // ID: 1341
    std::shared_ptr<LightBlueBedBlock> block = std::make_shared<LightBlueBedBlock>();
    block->facing = LightBlueBedBlock::FACING_EAST;
    block->occupied = LightBlueBedBlock::OCCUPIED_FALSE;
    block->part = LightBlueBedBlock::PART_HEAD;
    registry[1341] = block;
  }

  { // ID: 1342
    std::shared_ptr<LightBlueBedBlock> block = std::make_shared<LightBlueBedBlock>();
    block->facing = LightBlueBedBlock::FACING_EAST;
    block->occupied = LightBlueBedBlock::OCCUPIED_FALSE;
    block->part = LightBlueBedBlock::PART_FOOT;
    registry[1342] = block;
  }

  { // ID: 1359
    std::shared_ptr<LimeBedBlock> block = std::make_shared<LimeBedBlock>();
    block->facing = LimeBedBlock::FACING_NORTH;
    block->occupied = LimeBedBlock::OCCUPIED_TRUE;
    block->part = LimeBedBlock::PART_HEAD;
    registry[1359] = block;
  }

  { // ID: 1360
    std::shared_ptr<LimeBedBlock> block = std::make_shared<LimeBedBlock>();
    block->facing = LimeBedBlock::FACING_NORTH;
    block->occupied = LimeBedBlock::OCCUPIED_TRUE;
    block->part = LimeBedBlock::PART_FOOT;
    registry[1360] = block;
  }

  { // ID: 1361
    std::shared_ptr<LimeBedBlock> block = std::make_shared<LimeBedBlock>();
    block->facing = LimeBedBlock::FACING_NORTH;
    block->occupied = LimeBedBlock::OCCUPIED_FALSE;
    block->part = LimeBedBlock::PART_HEAD;
    registry[1361] = block;
  }

  { // ID: 1362
    std::shared_ptr<LimeBedBlock> block = std::make_shared<LimeBedBlock>();
    block->facing = LimeBedBlock::FACING_NORTH;
    block->occupied = LimeBedBlock::OCCUPIED_FALSE;
    block->part = LimeBedBlock::PART_FOOT;
    registry[1362] = block;
  }

  { // ID: 1363
    std::shared_ptr<LimeBedBlock> block = std::make_shared<LimeBedBlock>();
    block->facing = LimeBedBlock::FACING_SOUTH;
    block->occupied = LimeBedBlock::OCCUPIED_TRUE;
    block->part = LimeBedBlock::PART_HEAD;
    registry[1363] = block;
  }

  { // ID: 1364
    std::shared_ptr<LimeBedBlock> block = std::make_shared<LimeBedBlock>();
    block->facing = LimeBedBlock::FACING_SOUTH;
    block->occupied = LimeBedBlock::OCCUPIED_TRUE;
    block->part = LimeBedBlock::PART_FOOT;
    registry[1364] = block;
  }

  { // ID: 1365
    std::shared_ptr<LimeBedBlock> block = std::make_shared<LimeBedBlock>();
    block->facing = LimeBedBlock::FACING_SOUTH;
    block->occupied = LimeBedBlock::OCCUPIED_FALSE;
    block->part = LimeBedBlock::PART_HEAD;
    registry[1365] = block;
  }

  { // ID: 1366
    std::shared_ptr<LimeBedBlock> block = std::make_shared<LimeBedBlock>();
    block->facing = LimeBedBlock::FACING_SOUTH;
    block->occupied = LimeBedBlock::OCCUPIED_FALSE;
    block->part = LimeBedBlock::PART_FOOT;
    registry[1366] = block;
  }

  { // ID: 1367
    std::shared_ptr<LimeBedBlock> block = std::make_shared<LimeBedBlock>();
    block->facing = LimeBedBlock::FACING_WEST;
    block->occupied = LimeBedBlock::OCCUPIED_TRUE;
    block->part = LimeBedBlock::PART_HEAD;
    registry[1367] = block;
  }

  { // ID: 1368
    std::shared_ptr<LimeBedBlock> block = std::make_shared<LimeBedBlock>();
    block->facing = LimeBedBlock::FACING_WEST;
    block->occupied = LimeBedBlock::OCCUPIED_TRUE;
    block->part = LimeBedBlock::PART_FOOT;
    registry[1368] = block;
  }

  { // ID: 1369
    std::shared_ptr<LimeBedBlock> block = std::make_shared<LimeBedBlock>();
    block->facing = LimeBedBlock::FACING_WEST;
    block->occupied = LimeBedBlock::OCCUPIED_FALSE;
    block->part = LimeBedBlock::PART_HEAD;
    registry[1369] = block;
  }

  { // ID: 1370
    std::shared_ptr<LimeBedBlock> block = std::make_shared<LimeBedBlock>();
    block->facing = LimeBedBlock::FACING_WEST;
    block->occupied = LimeBedBlock::OCCUPIED_FALSE;
    block->part = LimeBedBlock::PART_FOOT;
    registry[1370] = block;
  }

  { // ID: 1371
    std::shared_ptr<LimeBedBlock> block = std::make_shared<LimeBedBlock>();
    block->facing = LimeBedBlock::FACING_EAST;
    block->occupied = LimeBedBlock::OCCUPIED_TRUE;
    block->part = LimeBedBlock::PART_HEAD;
    registry[1371] = block;
  }

  { // ID: 1372
    std::shared_ptr<LimeBedBlock> block = std::make_shared<LimeBedBlock>();
    block->facing = LimeBedBlock::FACING_EAST;
    block->occupied = LimeBedBlock::OCCUPIED_TRUE;
    block->part = LimeBedBlock::PART_FOOT;
    registry[1372] = block;
  }

  { // ID: 1373
    std::shared_ptr<LimeBedBlock> block = std::make_shared<LimeBedBlock>();
    block->facing = LimeBedBlock::FACING_EAST;
    block->occupied = LimeBedBlock::OCCUPIED_FALSE;
    block->part = LimeBedBlock::PART_HEAD;
    registry[1373] = block;
  }

  { // ID: 1374
    std::shared_ptr<LimeBedBlock> block = std::make_shared<LimeBedBlock>();
    block->facing = LimeBedBlock::FACING_EAST;
    block->occupied = LimeBedBlock::OCCUPIED_FALSE;
    block->part = LimeBedBlock::PART_FOOT;
    registry[1374] = block;
  }

  { // ID: 1407
    std::shared_ptr<LightGrayBedBlock> block = std::make_shared<LightGrayBedBlock>();
    block->facing = LightGrayBedBlock::FACING_NORTH;
    block->occupied = LightGrayBedBlock::OCCUPIED_TRUE;
    block->part = LightGrayBedBlock::PART_HEAD;
    registry[1407] = block;
  }

  { // ID: 1408
    std::shared_ptr<LightGrayBedBlock> block = std::make_shared<LightGrayBedBlock>();
    block->facing = LightGrayBedBlock::FACING_NORTH;
    block->occupied = LightGrayBedBlock::OCCUPIED_TRUE;
    block->part = LightGrayBedBlock::PART_FOOT;
    registry[1408] = block;
  }

  { // ID: 1409
    std::shared_ptr<LightGrayBedBlock> block = std::make_shared<LightGrayBedBlock>();
    block->facing = LightGrayBedBlock::FACING_NORTH;
    block->occupied = LightGrayBedBlock::OCCUPIED_FALSE;
    block->part = LightGrayBedBlock::PART_HEAD;
    registry[1409] = block;
  }

  { // ID: 1410
    std::shared_ptr<LightGrayBedBlock> block = std::make_shared<LightGrayBedBlock>();
    block->facing = LightGrayBedBlock::FACING_NORTH;
    block->occupied = LightGrayBedBlock::OCCUPIED_FALSE;
    block->part = LightGrayBedBlock::PART_FOOT;
    registry[1410] = block;
  }

  { // ID: 1411
    std::shared_ptr<LightGrayBedBlock> block = std::make_shared<LightGrayBedBlock>();
    block->facing = LightGrayBedBlock::FACING_SOUTH;
    block->occupied = LightGrayBedBlock::OCCUPIED_TRUE;
    block->part = LightGrayBedBlock::PART_HEAD;
    registry[1411] = block;
  }

  { // ID: 1412
    std::shared_ptr<LightGrayBedBlock> block = std::make_shared<LightGrayBedBlock>();
    block->facing = LightGrayBedBlock::FACING_SOUTH;
    block->occupied = LightGrayBedBlock::OCCUPIED_TRUE;
    block->part = LightGrayBedBlock::PART_FOOT;
    registry[1412] = block;
  }

  { // ID: 1413
    std::shared_ptr<LightGrayBedBlock> block = std::make_shared<LightGrayBedBlock>();
    block->facing = LightGrayBedBlock::FACING_SOUTH;
    block->occupied = LightGrayBedBlock::OCCUPIED_FALSE;
    block->part = LightGrayBedBlock::PART_HEAD;
    registry[1413] = block;
  }

  { // ID: 1414
    std::shared_ptr<LightGrayBedBlock> block = std::make_shared<LightGrayBedBlock>();
    block->facing = LightGrayBedBlock::FACING_SOUTH;
    block->occupied = LightGrayBedBlock::OCCUPIED_FALSE;
    block->part = LightGrayBedBlock::PART_FOOT;
    registry[1414] = block;
  }

  { // ID: 1415
    std::shared_ptr<LightGrayBedBlock> block = std::make_shared<LightGrayBedBlock>();
    block->facing = LightGrayBedBlock::FACING_WEST;
    block->occupied = LightGrayBedBlock::OCCUPIED_TRUE;
    block->part = LightGrayBedBlock::PART_HEAD;
    registry[1415] = block;
  }

  { // ID: 1416
    std::shared_ptr<LightGrayBedBlock> block = std::make_shared<LightGrayBedBlock>();
    block->facing = LightGrayBedBlock::FACING_WEST;
    block->occupied = LightGrayBedBlock::OCCUPIED_TRUE;
    block->part = LightGrayBedBlock::PART_FOOT;
    registry[1416] = block;
  }

  { // ID: 1417
    std::shared_ptr<LightGrayBedBlock> block = std::make_shared<LightGrayBedBlock>();
    block->facing = LightGrayBedBlock::FACING_WEST;
    block->occupied = LightGrayBedBlock::OCCUPIED_FALSE;
    block->part = LightGrayBedBlock::PART_HEAD;
    registry[1417] = block;
  }

  { // ID: 1418
    std::shared_ptr<LightGrayBedBlock> block = std::make_shared<LightGrayBedBlock>();
    block->facing = LightGrayBedBlock::FACING_WEST;
    block->occupied = LightGrayBedBlock::OCCUPIED_FALSE;
    block->part = LightGrayBedBlock::PART_FOOT;
    registry[1418] = block;
  }

  { // ID: 1419
    std::shared_ptr<LightGrayBedBlock> block = std::make_shared<LightGrayBedBlock>();
    block->facing = LightGrayBedBlock::FACING_EAST;
    block->occupied = LightGrayBedBlock::OCCUPIED_TRUE;
    block->part = LightGrayBedBlock::PART_HEAD;
    registry[1419] = block;
  }

  { // ID: 1420
    std::shared_ptr<LightGrayBedBlock> block = std::make_shared<LightGrayBedBlock>();
    block->facing = LightGrayBedBlock::FACING_EAST;
    block->occupied = LightGrayBedBlock::OCCUPIED_TRUE;
    block->part = LightGrayBedBlock::PART_FOOT;
    registry[1420] = block;
  }

  { // ID: 1421
    std::shared_ptr<LightGrayBedBlock> block = std::make_shared<LightGrayBedBlock>();
    block->facing = LightGrayBedBlock::FACING_EAST;
    block->occupied = LightGrayBedBlock::OCCUPIED_FALSE;
    block->part = LightGrayBedBlock::PART_HEAD;
    registry[1421] = block;
  }

  { // ID: 1422
    std::shared_ptr<LightGrayBedBlock> block = std::make_shared<LightGrayBedBlock>();
    block->facing = LightGrayBedBlock::FACING_EAST;
    block->occupied = LightGrayBedBlock::OCCUPIED_FALSE;
    block->part = LightGrayBedBlock::PART_FOOT;
    registry[1422] = block;
  }

  { // ID: 1641
    std::shared_ptr<LightBlueWoolBlock> block = std::make_shared<LightBlueWoolBlock>();
    registry[1641] = block;
  }

  { // ID: 1643
    std::shared_ptr<LimeWoolBlock> block = std::make_shared<LimeWoolBlock>();
    registry[1643] = block;
  }

  { // ID: 1646
    std::shared_ptr<LightGrayWoolBlock> block = std::make_shared<LightGrayWoolBlock>();
    registry[1646] = block;
  }

  { // ID: 1678
    std::shared_ptr<LilyOfTheValleyBlock> block = std::make_shared<LilyOfTheValleyBlock>();
    registry[1678] = block;
  }

  { // ID: 3924
    std::shared_ptr<LadderBlock> block = std::make_shared<LadderBlock>();
    block->facing = LadderBlock::FACING_NORTH;
    block->waterlogged = LadderBlock::WATERLOGGED_TRUE;
    registry[3924] = block;
  }

  { // ID: 3925
    std::shared_ptr<LadderBlock> block = std::make_shared<LadderBlock>();
    block->facing = LadderBlock::FACING_NORTH;
    block->waterlogged = LadderBlock::WATERLOGGED_FALSE;
    registry[3925] = block;
  }

  { // ID: 3926
    std::shared_ptr<LadderBlock> block = std::make_shared<LadderBlock>();
    block->facing = LadderBlock::FACING_SOUTH;
    block->waterlogged = LadderBlock::WATERLOGGED_TRUE;
    registry[3926] = block;
  }

  { // ID: 3927
    std::shared_ptr<LadderBlock> block = std::make_shared<LadderBlock>();
    block->facing = LadderBlock::FACING_SOUTH;
    block->waterlogged = LadderBlock::WATERLOGGED_FALSE;
    registry[3927] = block;
  }

  { // ID: 3928
    std::shared_ptr<LadderBlock> block = std::make_shared<LadderBlock>();
    block->facing = LadderBlock::FACING_WEST;
    block->waterlogged = LadderBlock::WATERLOGGED_TRUE;
    registry[3928] = block;
  }

  { // ID: 3929
    std::shared_ptr<LadderBlock> block = std::make_shared<LadderBlock>();
    block->facing = LadderBlock::FACING_WEST;
    block->waterlogged = LadderBlock::WATERLOGGED_FALSE;
    registry[3929] = block;
  }

  { // ID: 3930
    std::shared_ptr<LadderBlock> block = std::make_shared<LadderBlock>();
    block->facing = LadderBlock::FACING_EAST;
    block->waterlogged = LadderBlock::WATERLOGGED_TRUE;
    registry[3930] = block;
  }

  { // ID: 3931
    std::shared_ptr<LadderBlock> block = std::make_shared<LadderBlock>();
    block->facing = LadderBlock::FACING_EAST;
    block->waterlogged = LadderBlock::WATERLOGGED_FALSE;
    registry[3931] = block;
  }

  { // ID: 4088
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_FLOOR;
    block->facing = LeverBlock::FACING_NORTH;
    block->powered = LeverBlock::POWERED_TRUE;
    registry[4088] = block;
  }

  { // ID: 4089
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_FLOOR;
    block->facing = LeverBlock::FACING_NORTH;
    block->powered = LeverBlock::POWERED_FALSE;
    registry[4089] = block;
  }

  { // ID: 4090
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_FLOOR;
    block->facing = LeverBlock::FACING_SOUTH;
    block->powered = LeverBlock::POWERED_TRUE;
    registry[4090] = block;
  }

  { // ID: 4091
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_FLOOR;
    block->facing = LeverBlock::FACING_SOUTH;
    block->powered = LeverBlock::POWERED_FALSE;
    registry[4091] = block;
  }

  { // ID: 4092
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_FLOOR;
    block->facing = LeverBlock::FACING_WEST;
    block->powered = LeverBlock::POWERED_TRUE;
    registry[4092] = block;
  }

  { // ID: 4093
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_FLOOR;
    block->facing = LeverBlock::FACING_WEST;
    block->powered = LeverBlock::POWERED_FALSE;
    registry[4093] = block;
  }

  { // ID: 4094
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_FLOOR;
    block->facing = LeverBlock::FACING_EAST;
    block->powered = LeverBlock::POWERED_TRUE;
    registry[4094] = block;
  }

  { // ID: 4095
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_FLOOR;
    block->facing = LeverBlock::FACING_EAST;
    block->powered = LeverBlock::POWERED_FALSE;
    registry[4095] = block;
  }

  { // ID: 4096
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_WALL;
    block->facing = LeverBlock::FACING_NORTH;
    block->powered = LeverBlock::POWERED_TRUE;
    registry[4096] = block;
  }

  { // ID: 4097
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_WALL;
    block->facing = LeverBlock::FACING_NORTH;
    block->powered = LeverBlock::POWERED_FALSE;
    registry[4097] = block;
  }

  { // ID: 4098
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_WALL;
    block->facing = LeverBlock::FACING_SOUTH;
    block->powered = LeverBlock::POWERED_TRUE;
    registry[4098] = block;
  }

  { // ID: 4099
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_WALL;
    block->facing = LeverBlock::FACING_SOUTH;
    block->powered = LeverBlock::POWERED_FALSE;
    registry[4099] = block;
  }

  { // ID: 4100
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_WALL;
    block->facing = LeverBlock::FACING_WEST;
    block->powered = LeverBlock::POWERED_TRUE;
    registry[4100] = block;
  }

  { // ID: 4101
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_WALL;
    block->facing = LeverBlock::FACING_WEST;
    block->powered = LeverBlock::POWERED_FALSE;
    registry[4101] = block;
  }

  { // ID: 4102
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_WALL;
    block->facing = LeverBlock::FACING_EAST;
    block->powered = LeverBlock::POWERED_TRUE;
    registry[4102] = block;
  }

  { // ID: 4103
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_WALL;
    block->facing = LeverBlock::FACING_EAST;
    block->powered = LeverBlock::POWERED_FALSE;
    registry[4103] = block;
  }

  { // ID: 4104
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_CEILING;
    block->facing = LeverBlock::FACING_NORTH;
    block->powered = LeverBlock::POWERED_TRUE;
    registry[4104] = block;
  }

  { // ID: 4105
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_CEILING;
    block->facing = LeverBlock::FACING_NORTH;
    block->powered = LeverBlock::POWERED_FALSE;
    registry[4105] = block;
  }

  { // ID: 4106
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_CEILING;
    block->facing = LeverBlock::FACING_SOUTH;
    block->powered = LeverBlock::POWERED_TRUE;
    registry[4106] = block;
  }

  { // ID: 4107
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_CEILING;
    block->facing = LeverBlock::FACING_SOUTH;
    block->powered = LeverBlock::POWERED_FALSE;
    registry[4107] = block;
  }

  { // ID: 4108
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_CEILING;
    block->facing = LeverBlock::FACING_WEST;
    block->powered = LeverBlock::POWERED_TRUE;
    registry[4108] = block;
  }

  { // ID: 4109
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_CEILING;
    block->facing = LeverBlock::FACING_WEST;
    block->powered = LeverBlock::POWERED_FALSE;
    registry[4109] = block;
  }

  { // ID: 4110
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_CEILING;
    block->facing = LeverBlock::FACING_EAST;
    block->powered = LeverBlock::POWERED_TRUE;
    registry[4110] = block;
  }

  { // ID: 4111
    std::shared_ptr<LeverBlock> block = std::make_shared<LeverBlock>();
    block->face = LeverBlock::FACE_CEILING;
    block->facing = LeverBlock::FACING_EAST;
    block->powered = LeverBlock::POWERED_FALSE;
    registry[4111] = block;
  }

  { // ID: 4407
    std::shared_ptr<LightBlueStainedGlassBlock> block = std::make_shared<LightBlueStainedGlassBlock>();
    registry[4407] = block;
  }

  { // ID: 4409
    std::shared_ptr<LimeStainedGlassBlock> block = std::make_shared<LimeStainedGlassBlock>();
    registry[4409] = block;
  }

  { // ID: 4412
    std::shared_ptr<LightGrayStainedGlassBlock> block = std::make_shared<LightGrayStainedGlassBlock>();
    registry[4412] = block;
  }

  { // ID: 5601
    std::shared_ptr<LilyPadBlock> block = std::make_shared<LilyPadBlock>();
    registry[5601] = block;
  }

  { // ID: 5732
    std::shared_ptr<LavaCauldronBlock> block = std::make_shared<LavaCauldronBlock>();
    registry[5732] = block;
  }

  { // ID: 7263
    std::shared_ptr<LightWeightedPressurePlateBlock> block = std::make_shared<LightWeightedPressurePlateBlock>();
    block->power = LightWeightedPressurePlateBlock::POWER_0;
    registry[7263] = block;
  }

  { // ID: 7264
    std::shared_ptr<LightWeightedPressurePlateBlock> block = std::make_shared<LightWeightedPressurePlateBlock>();
    block->power = LightWeightedPressurePlateBlock::POWER_1;
    registry[7264] = block;
  }

  { // ID: 7265
    std::shared_ptr<LightWeightedPressurePlateBlock> block = std::make_shared<LightWeightedPressurePlateBlock>();
    block->power = LightWeightedPressurePlateBlock::POWER_2;
    registry[7265] = block;
  }

  { // ID: 7266
    std::shared_ptr<LightWeightedPressurePlateBlock> block = std::make_shared<LightWeightedPressurePlateBlock>();
    block->power = LightWeightedPressurePlateBlock::POWER_3;
    registry[7266] = block;
  }

  { // ID: 7267
    std::shared_ptr<LightWeightedPressurePlateBlock> block = std::make_shared<LightWeightedPressurePlateBlock>();
    block->power = LightWeightedPressurePlateBlock::POWER_4;
    registry[7267] = block;
  }

  { // ID: 7268
    std::shared_ptr<LightWeightedPressurePlateBlock> block = std::make_shared<LightWeightedPressurePlateBlock>();
    block->power = LightWeightedPressurePlateBlock::POWER_5;
    registry[7268] = block;
  }

  { // ID: 7269
    std::shared_ptr<LightWeightedPressurePlateBlock> block = std::make_shared<LightWeightedPressurePlateBlock>();
    block->power = LightWeightedPressurePlateBlock::POWER_6;
    registry[7269] = block;
  }

  { // ID: 7270
    std::shared_ptr<LightWeightedPressurePlateBlock> block = std::make_shared<LightWeightedPressurePlateBlock>();
    block->power = LightWeightedPressurePlateBlock::POWER_7;
    registry[7270] = block;
  }

  { // ID: 7271
    std::shared_ptr<LightWeightedPressurePlateBlock> block = std::make_shared<LightWeightedPressurePlateBlock>();
    block->power = LightWeightedPressurePlateBlock::POWER_8;
    registry[7271] = block;
  }

  { // ID: 7272
    std::shared_ptr<LightWeightedPressurePlateBlock> block = std::make_shared<LightWeightedPressurePlateBlock>();
    block->power = LightWeightedPressurePlateBlock::POWER_9;
    registry[7272] = block;
  }

  { // ID: 7273
    std::shared_ptr<LightWeightedPressurePlateBlock> block = std::make_shared<LightWeightedPressurePlateBlock>();
    block->power = LightWeightedPressurePlateBlock::POWER_10;
    registry[7273] = block;
  }

  { // ID: 7274
    std::shared_ptr<LightWeightedPressurePlateBlock> block = std::make_shared<LightWeightedPressurePlateBlock>();
    block->power = LightWeightedPressurePlateBlock::POWER_11;
    registry[7274] = block;
  }

  { // ID: 7275
    std::shared_ptr<LightWeightedPressurePlateBlock> block = std::make_shared<LightWeightedPressurePlateBlock>();
    block->power = LightWeightedPressurePlateBlock::POWER_12;
    registry[7275] = block;
  }

  { // ID: 7276
    std::shared_ptr<LightWeightedPressurePlateBlock> block = std::make_shared<LightWeightedPressurePlateBlock>();
    block->power = LightWeightedPressurePlateBlock::POWER_13;
    registry[7276] = block;
  }

  { // ID: 7277
    std::shared_ptr<LightWeightedPressurePlateBlock> block = std::make_shared<LightWeightedPressurePlateBlock>();
    block->power = LightWeightedPressurePlateBlock::POWER_14;
    registry[7277] = block;
  }

  { // ID: 7278
    std::shared_ptr<LightWeightedPressurePlateBlock> block = std::make_shared<LightWeightedPressurePlateBlock>();
    block->power = LightWeightedPressurePlateBlock::POWER_15;
    registry[7278] = block;
  }

  { // ID: 7479
    std::shared_ptr<LightBlueTerracottaBlock> block = std::make_shared<LightBlueTerracottaBlock>();
    registry[7479] = block;
  }

  { // ID: 7481
    std::shared_ptr<LimeTerracottaBlock> block = std::make_shared<LimeTerracottaBlock>();
    registry[7481] = block;
  }

  { // ID: 7484
    std::shared_ptr<LightGrayTerracottaBlock> block = std::make_shared<LightGrayTerracottaBlock>();
    registry[7484] = block;
  }

  { // ID: 7588
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7588] = block;
  }

  { // ID: 7589
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7589] = block;
  }

  { // ID: 7590
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7590] = block;
  }

  { // ID: 7591
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7591] = block;
  }

  { // ID: 7592
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7592] = block;
  }

  { // ID: 7593
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7593] = block;
  }

  { // ID: 7594
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7594] = block;
  }

  { // ID: 7595
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7595] = block;
  }

  { // ID: 7596
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7596] = block;
  }

  { // ID: 7597
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7597] = block;
  }

  { // ID: 7598
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7598] = block;
  }

  { // ID: 7599
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7599] = block;
  }

  { // ID: 7600
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7600] = block;
  }

  { // ID: 7601
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7601] = block;
  }

  { // ID: 7602
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7602] = block;
  }

  { // ID: 7603
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7603] = block;
  }

  { // ID: 7604
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7604] = block;
  }

  { // ID: 7605
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7605] = block;
  }

  { // ID: 7606
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7606] = block;
  }

  { // ID: 7607
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7607] = block;
  }

  { // ID: 7608
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7608] = block;
  }

  { // ID: 7609
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7609] = block;
  }

  { // ID: 7610
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7610] = block;
  }

  { // ID: 7611
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7611] = block;
  }

  { // ID: 7612
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7612] = block;
  }

  { // ID: 7613
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7613] = block;
  }

  { // ID: 7614
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7614] = block;
  }

  { // ID: 7615
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7615] = block;
  }

  { // ID: 7616
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7616] = block;
  }

  { // ID: 7617
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7617] = block;
  }

  { // ID: 7618
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7618] = block;
  }

  { // ID: 7619
    std::shared_ptr<LightBlueStainedGlassPaneBlock> block = std::make_shared<LightBlueStainedGlassPaneBlock>();
    block->east = LightBlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightBlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightBlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightBlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightBlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7619] = block;
  }

  { // ID: 7652
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_TRUE;
    block->north = LimeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LimeStainedGlassPaneBlock::WEST_TRUE;
    registry[7652] = block;
  }

  { // ID: 7653
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_TRUE;
    block->north = LimeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LimeStainedGlassPaneBlock::WEST_FALSE;
    registry[7653] = block;
  }

  { // ID: 7654
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_TRUE;
    block->north = LimeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LimeStainedGlassPaneBlock::WEST_TRUE;
    registry[7654] = block;
  }

  { // ID: 7655
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_TRUE;
    block->north = LimeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LimeStainedGlassPaneBlock::WEST_FALSE;
    registry[7655] = block;
  }

  { // ID: 7656
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_TRUE;
    block->north = LimeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LimeStainedGlassPaneBlock::WEST_TRUE;
    registry[7656] = block;
  }

  { // ID: 7657
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_TRUE;
    block->north = LimeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LimeStainedGlassPaneBlock::WEST_FALSE;
    registry[7657] = block;
  }

  { // ID: 7658
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_TRUE;
    block->north = LimeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LimeStainedGlassPaneBlock::WEST_TRUE;
    registry[7658] = block;
  }

  { // ID: 7659
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_TRUE;
    block->north = LimeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LimeStainedGlassPaneBlock::WEST_FALSE;
    registry[7659] = block;
  }

  { // ID: 7660
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_TRUE;
    block->north = LimeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LimeStainedGlassPaneBlock::WEST_TRUE;
    registry[7660] = block;
  }

  { // ID: 7661
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_TRUE;
    block->north = LimeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LimeStainedGlassPaneBlock::WEST_FALSE;
    registry[7661] = block;
  }

  { // ID: 7662
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_TRUE;
    block->north = LimeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LimeStainedGlassPaneBlock::WEST_TRUE;
    registry[7662] = block;
  }

  { // ID: 7663
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_TRUE;
    block->north = LimeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LimeStainedGlassPaneBlock::WEST_FALSE;
    registry[7663] = block;
  }

  { // ID: 7664
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_TRUE;
    block->north = LimeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LimeStainedGlassPaneBlock::WEST_TRUE;
    registry[7664] = block;
  }

  { // ID: 7665
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_TRUE;
    block->north = LimeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LimeStainedGlassPaneBlock::WEST_FALSE;
    registry[7665] = block;
  }

  { // ID: 7666
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_TRUE;
    block->north = LimeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LimeStainedGlassPaneBlock::WEST_TRUE;
    registry[7666] = block;
  }

  { // ID: 7667
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_TRUE;
    block->north = LimeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LimeStainedGlassPaneBlock::WEST_FALSE;
    registry[7667] = block;
  }

  { // ID: 7668
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_FALSE;
    block->north = LimeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LimeStainedGlassPaneBlock::WEST_TRUE;
    registry[7668] = block;
  }

  { // ID: 7669
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_FALSE;
    block->north = LimeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LimeStainedGlassPaneBlock::WEST_FALSE;
    registry[7669] = block;
  }

  { // ID: 7670
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_FALSE;
    block->north = LimeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LimeStainedGlassPaneBlock::WEST_TRUE;
    registry[7670] = block;
  }

  { // ID: 7671
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_FALSE;
    block->north = LimeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LimeStainedGlassPaneBlock::WEST_FALSE;
    registry[7671] = block;
  }

  { // ID: 7672
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_FALSE;
    block->north = LimeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LimeStainedGlassPaneBlock::WEST_TRUE;
    registry[7672] = block;
  }

  { // ID: 7673
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_FALSE;
    block->north = LimeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LimeStainedGlassPaneBlock::WEST_FALSE;
    registry[7673] = block;
  }

  { // ID: 7674
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_FALSE;
    block->north = LimeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LimeStainedGlassPaneBlock::WEST_TRUE;
    registry[7674] = block;
  }

  { // ID: 7675
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_FALSE;
    block->north = LimeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LimeStainedGlassPaneBlock::WEST_FALSE;
    registry[7675] = block;
  }

  { // ID: 7676
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_FALSE;
    block->north = LimeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LimeStainedGlassPaneBlock::WEST_TRUE;
    registry[7676] = block;
  }

  { // ID: 7677
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_FALSE;
    block->north = LimeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LimeStainedGlassPaneBlock::WEST_FALSE;
    registry[7677] = block;
  }

  { // ID: 7678
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_FALSE;
    block->north = LimeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LimeStainedGlassPaneBlock::WEST_TRUE;
    registry[7678] = block;
  }

  { // ID: 7679
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_FALSE;
    block->north = LimeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LimeStainedGlassPaneBlock::WEST_FALSE;
    registry[7679] = block;
  }

  { // ID: 7680
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_FALSE;
    block->north = LimeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LimeStainedGlassPaneBlock::WEST_TRUE;
    registry[7680] = block;
  }

  { // ID: 7681
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_FALSE;
    block->north = LimeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LimeStainedGlassPaneBlock::WEST_FALSE;
    registry[7681] = block;
  }

  { // ID: 7682
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_FALSE;
    block->north = LimeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LimeStainedGlassPaneBlock::WEST_TRUE;
    registry[7682] = block;
  }

  { // ID: 7683
    std::shared_ptr<LimeStainedGlassPaneBlock> block = std::make_shared<LimeStainedGlassPaneBlock>();
    block->east = LimeStainedGlassPaneBlock::EAST_FALSE;
    block->north = LimeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LimeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LimeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LimeStainedGlassPaneBlock::WEST_FALSE;
    registry[7683] = block;
  }

  { // ID: 7748
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7748] = block;
  }

  { // ID: 7749
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7749] = block;
  }

  { // ID: 7750
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7750] = block;
  }

  { // ID: 7751
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7751] = block;
  }

  { // ID: 7752
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7752] = block;
  }

  { // ID: 7753
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7753] = block;
  }

  { // ID: 7754
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7754] = block;
  }

  { // ID: 7755
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7755] = block;
  }

  { // ID: 7756
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7756] = block;
  }

  { // ID: 7757
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7757] = block;
  }

  { // ID: 7758
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7758] = block;
  }

  { // ID: 7759
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7759] = block;
  }

  { // ID: 7760
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7760] = block;
  }

  { // ID: 7761
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7761] = block;
  }

  { // ID: 7762
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7762] = block;
  }

  { // ID: 7763
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_TRUE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7763] = block;
  }

  { // ID: 7764
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7764] = block;
  }

  { // ID: 7765
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7765] = block;
  }

  { // ID: 7766
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7766] = block;
  }

  { // ID: 7767
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7767] = block;
  }

  { // ID: 7768
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7768] = block;
  }

  { // ID: 7769
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7769] = block;
  }

  { // ID: 7770
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7770] = block;
  }

  { // ID: 7771
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_TRUE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7771] = block;
  }

  { // ID: 7772
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7772] = block;
  }

  { // ID: 7773
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7773] = block;
  }

  { // ID: 7774
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7774] = block;
  }

  { // ID: 7775
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7775] = block;
  }

  { // ID: 7776
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7776] = block;
  }

  { // ID: 7777
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7777] = block;
  }

  { // ID: 7778
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_TRUE;
    registry[7778] = block;
  }

  { // ID: 7779
    std::shared_ptr<LightGrayStainedGlassPaneBlock> block = std::make_shared<LightGrayStainedGlassPaneBlock>();
    block->east = LightGrayStainedGlassPaneBlock::EAST_FALSE;
    block->north = LightGrayStainedGlassPaneBlock::NORTH_FALSE;
    block->south = LightGrayStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = LightGrayStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = LightGrayStainedGlassPaneBlock::WEST_FALSE;
    registry[7779] = block;
  }

  { // ID: 8246
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_0;
    block->waterlogged = LightBlock::WATERLOGGED_TRUE;
    registry[8246] = block;
  }

  { // ID: 8247
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_0;
    block->waterlogged = LightBlock::WATERLOGGED_FALSE;
    registry[8247] = block;
  }

  { // ID: 8248
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_1;
    block->waterlogged = LightBlock::WATERLOGGED_TRUE;
    registry[8248] = block;
  }

  { // ID: 8249
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_1;
    block->waterlogged = LightBlock::WATERLOGGED_FALSE;
    registry[8249] = block;
  }

  { // ID: 8250
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_2;
    block->waterlogged = LightBlock::WATERLOGGED_TRUE;
    registry[8250] = block;
  }

  { // ID: 8251
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_2;
    block->waterlogged = LightBlock::WATERLOGGED_FALSE;
    registry[8251] = block;
  }

  { // ID: 8252
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_3;
    block->waterlogged = LightBlock::WATERLOGGED_TRUE;
    registry[8252] = block;
  }

  { // ID: 8253
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_3;
    block->waterlogged = LightBlock::WATERLOGGED_FALSE;
    registry[8253] = block;
  }

  { // ID: 8254
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_4;
    block->waterlogged = LightBlock::WATERLOGGED_TRUE;
    registry[8254] = block;
  }

  { // ID: 8255
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_4;
    block->waterlogged = LightBlock::WATERLOGGED_FALSE;
    registry[8255] = block;
  }

  { // ID: 8256
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_5;
    block->waterlogged = LightBlock::WATERLOGGED_TRUE;
    registry[8256] = block;
  }

  { // ID: 8257
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_5;
    block->waterlogged = LightBlock::WATERLOGGED_FALSE;
    registry[8257] = block;
  }

  { // ID: 8258
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_6;
    block->waterlogged = LightBlock::WATERLOGGED_TRUE;
    registry[8258] = block;
  }

  { // ID: 8259
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_6;
    block->waterlogged = LightBlock::WATERLOGGED_FALSE;
    registry[8259] = block;
  }

  { // ID: 8260
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_7;
    block->waterlogged = LightBlock::WATERLOGGED_TRUE;
    registry[8260] = block;
  }

  { // ID: 8261
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_7;
    block->waterlogged = LightBlock::WATERLOGGED_FALSE;
    registry[8261] = block;
  }

  { // ID: 8262
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_8;
    block->waterlogged = LightBlock::WATERLOGGED_TRUE;
    registry[8262] = block;
  }

  { // ID: 8263
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_8;
    block->waterlogged = LightBlock::WATERLOGGED_FALSE;
    registry[8263] = block;
  }

  { // ID: 8264
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_9;
    block->waterlogged = LightBlock::WATERLOGGED_TRUE;
    registry[8264] = block;
  }

  { // ID: 8265
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_9;
    block->waterlogged = LightBlock::WATERLOGGED_FALSE;
    registry[8265] = block;
  }

  { // ID: 8266
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_10;
    block->waterlogged = LightBlock::WATERLOGGED_TRUE;
    registry[8266] = block;
  }

  { // ID: 8267
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_10;
    block->waterlogged = LightBlock::WATERLOGGED_FALSE;
    registry[8267] = block;
  }

  { // ID: 8268
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_11;
    block->waterlogged = LightBlock::WATERLOGGED_TRUE;
    registry[8268] = block;
  }

  { // ID: 8269
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_11;
    block->waterlogged = LightBlock::WATERLOGGED_FALSE;
    registry[8269] = block;
  }

  { // ID: 8270
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_12;
    block->waterlogged = LightBlock::WATERLOGGED_TRUE;
    registry[8270] = block;
  }

  { // ID: 8271
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_12;
    block->waterlogged = LightBlock::WATERLOGGED_FALSE;
    registry[8271] = block;
  }

  { // ID: 8272
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_13;
    block->waterlogged = LightBlock::WATERLOGGED_TRUE;
    registry[8272] = block;
  }

  { // ID: 8273
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_13;
    block->waterlogged = LightBlock::WATERLOGGED_FALSE;
    registry[8273] = block;
  }

  { // ID: 8274
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_14;
    block->waterlogged = LightBlock::WATERLOGGED_TRUE;
    registry[8274] = block;
  }

  { // ID: 8275
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_14;
    block->waterlogged = LightBlock::WATERLOGGED_FALSE;
    registry[8275] = block;
  }

  { // ID: 8276
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_15;
    block->waterlogged = LightBlock::WATERLOGGED_TRUE;
    registry[8276] = block;
  }

  { // ID: 8277
    std::shared_ptr<LightBlock> block = std::make_shared<LightBlock>();
    block->level = LightBlock::LEVEL_15;
    block->waterlogged = LightBlock::WATERLOGGED_FALSE;
    registry[8277] = block;
  }

  { // ID: 8610
    std::shared_ptr<LightBlueCarpetBlock> block = std::make_shared<LightBlueCarpetBlock>();
    registry[8610] = block;
  }

  { // ID: 8612
    std::shared_ptr<LimeCarpetBlock> block = std::make_shared<LimeCarpetBlock>();
    registry[8612] = block;
  }

  { // ID: 8615
    std::shared_ptr<LightGrayCarpetBlock> block = std::make_shared<LightGrayCarpetBlock>();
    registry[8615] = block;
  }

  { // ID: 8628
    std::shared_ptr<LilacBlock> block = std::make_shared<LilacBlock>();
    block->half = LilacBlock::HALF_UPPER;
    registry[8628] = block;
  }

  { // ID: 8629
    std::shared_ptr<LilacBlock> block = std::make_shared<LilacBlock>();
    block->half = LilacBlock::HALF_LOWER;
    registry[8629] = block;
  }

  { // ID: 8636
    std::shared_ptr<LargeFernBlock> block = std::make_shared<LargeFernBlock>();
    block->half = LargeFernBlock::HALF_UPPER;
    registry[8636] = block;
  }

  { // ID: 8637
    std::shared_ptr<LargeFernBlock> block = std::make_shared<LargeFernBlock>();
    block->half = LargeFernBlock::HALF_LOWER;
    registry[8637] = block;
  }

  { // ID: 8686
    std::shared_ptr<LightBlueBannerBlock> block = std::make_shared<LightBlueBannerBlock>();
    block->rotation = LightBlueBannerBlock::ROTATION_0;
    registry[8686] = block;
  }

  { // ID: 8687
    std::shared_ptr<LightBlueBannerBlock> block = std::make_shared<LightBlueBannerBlock>();
    block->rotation = LightBlueBannerBlock::ROTATION_1;
    registry[8687] = block;
  }

  { // ID: 8688
    std::shared_ptr<LightBlueBannerBlock> block = std::make_shared<LightBlueBannerBlock>();
    block->rotation = LightBlueBannerBlock::ROTATION_2;
    registry[8688] = block;
  }

  { // ID: 8689
    std::shared_ptr<LightBlueBannerBlock> block = std::make_shared<LightBlueBannerBlock>();
    block->rotation = LightBlueBannerBlock::ROTATION_3;
    registry[8689] = block;
  }

  { // ID: 8690
    std::shared_ptr<LightBlueBannerBlock> block = std::make_shared<LightBlueBannerBlock>();
    block->rotation = LightBlueBannerBlock::ROTATION_4;
    registry[8690] = block;
  }

  { // ID: 8691
    std::shared_ptr<LightBlueBannerBlock> block = std::make_shared<LightBlueBannerBlock>();
    block->rotation = LightBlueBannerBlock::ROTATION_5;
    registry[8691] = block;
  }

  { // ID: 8692
    std::shared_ptr<LightBlueBannerBlock> block = std::make_shared<LightBlueBannerBlock>();
    block->rotation = LightBlueBannerBlock::ROTATION_6;
    registry[8692] = block;
  }

  { // ID: 8693
    std::shared_ptr<LightBlueBannerBlock> block = std::make_shared<LightBlueBannerBlock>();
    block->rotation = LightBlueBannerBlock::ROTATION_7;
    registry[8693] = block;
  }

  { // ID: 8694
    std::shared_ptr<LightBlueBannerBlock> block = std::make_shared<LightBlueBannerBlock>();
    block->rotation = LightBlueBannerBlock::ROTATION_8;
    registry[8694] = block;
  }

  { // ID: 8695
    std::shared_ptr<LightBlueBannerBlock> block = std::make_shared<LightBlueBannerBlock>();
    block->rotation = LightBlueBannerBlock::ROTATION_9;
    registry[8695] = block;
  }

  { // ID: 8696
    std::shared_ptr<LightBlueBannerBlock> block = std::make_shared<LightBlueBannerBlock>();
    block->rotation = LightBlueBannerBlock::ROTATION_10;
    registry[8696] = block;
  }

  { // ID: 8697
    std::shared_ptr<LightBlueBannerBlock> block = std::make_shared<LightBlueBannerBlock>();
    block->rotation = LightBlueBannerBlock::ROTATION_11;
    registry[8697] = block;
  }

  { // ID: 8698
    std::shared_ptr<LightBlueBannerBlock> block = std::make_shared<LightBlueBannerBlock>();
    block->rotation = LightBlueBannerBlock::ROTATION_12;
    registry[8698] = block;
  }

  { // ID: 8699
    std::shared_ptr<LightBlueBannerBlock> block = std::make_shared<LightBlueBannerBlock>();
    block->rotation = LightBlueBannerBlock::ROTATION_13;
    registry[8699] = block;
  }

  { // ID: 8700
    std::shared_ptr<LightBlueBannerBlock> block = std::make_shared<LightBlueBannerBlock>();
    block->rotation = LightBlueBannerBlock::ROTATION_14;
    registry[8700] = block;
  }

  { // ID: 8701
    std::shared_ptr<LightBlueBannerBlock> block = std::make_shared<LightBlueBannerBlock>();
    block->rotation = LightBlueBannerBlock::ROTATION_15;
    registry[8701] = block;
  }

  { // ID: 8718
    std::shared_ptr<LimeBannerBlock> block = std::make_shared<LimeBannerBlock>();
    block->rotation = LimeBannerBlock::ROTATION_0;
    registry[8718] = block;
  }

  { // ID: 8719
    std::shared_ptr<LimeBannerBlock> block = std::make_shared<LimeBannerBlock>();
    block->rotation = LimeBannerBlock::ROTATION_1;
    registry[8719] = block;
  }

  { // ID: 8720
    std::shared_ptr<LimeBannerBlock> block = std::make_shared<LimeBannerBlock>();
    block->rotation = LimeBannerBlock::ROTATION_2;
    registry[8720] = block;
  }

  { // ID: 8721
    std::shared_ptr<LimeBannerBlock> block = std::make_shared<LimeBannerBlock>();
    block->rotation = LimeBannerBlock::ROTATION_3;
    registry[8721] = block;
  }

  { // ID: 8722
    std::shared_ptr<LimeBannerBlock> block = std::make_shared<LimeBannerBlock>();
    block->rotation = LimeBannerBlock::ROTATION_4;
    registry[8722] = block;
  }

  { // ID: 8723
    std::shared_ptr<LimeBannerBlock> block = std::make_shared<LimeBannerBlock>();
    block->rotation = LimeBannerBlock::ROTATION_5;
    registry[8723] = block;
  }

  { // ID: 8724
    std::shared_ptr<LimeBannerBlock> block = std::make_shared<LimeBannerBlock>();
    block->rotation = LimeBannerBlock::ROTATION_6;
    registry[8724] = block;
  }

  { // ID: 8725
    std::shared_ptr<LimeBannerBlock> block = std::make_shared<LimeBannerBlock>();
    block->rotation = LimeBannerBlock::ROTATION_7;
    registry[8725] = block;
  }

  { // ID: 8726
    std::shared_ptr<LimeBannerBlock> block = std::make_shared<LimeBannerBlock>();
    block->rotation = LimeBannerBlock::ROTATION_8;
    registry[8726] = block;
  }

  { // ID: 8727
    std::shared_ptr<LimeBannerBlock> block = std::make_shared<LimeBannerBlock>();
    block->rotation = LimeBannerBlock::ROTATION_9;
    registry[8727] = block;
  }

  { // ID: 8728
    std::shared_ptr<LimeBannerBlock> block = std::make_shared<LimeBannerBlock>();
    block->rotation = LimeBannerBlock::ROTATION_10;
    registry[8728] = block;
  }

  { // ID: 8729
    std::shared_ptr<LimeBannerBlock> block = std::make_shared<LimeBannerBlock>();
    block->rotation = LimeBannerBlock::ROTATION_11;
    registry[8729] = block;
  }

  { // ID: 8730
    std::shared_ptr<LimeBannerBlock> block = std::make_shared<LimeBannerBlock>();
    block->rotation = LimeBannerBlock::ROTATION_12;
    registry[8730] = block;
  }

  { // ID: 8731
    std::shared_ptr<LimeBannerBlock> block = std::make_shared<LimeBannerBlock>();
    block->rotation = LimeBannerBlock::ROTATION_13;
    registry[8731] = block;
  }

  { // ID: 8732
    std::shared_ptr<LimeBannerBlock> block = std::make_shared<LimeBannerBlock>();
    block->rotation = LimeBannerBlock::ROTATION_14;
    registry[8732] = block;
  }

  { // ID: 8733
    std::shared_ptr<LimeBannerBlock> block = std::make_shared<LimeBannerBlock>();
    block->rotation = LimeBannerBlock::ROTATION_15;
    registry[8733] = block;
  }

  { // ID: 8766
    std::shared_ptr<LightGrayBannerBlock> block = std::make_shared<LightGrayBannerBlock>();
    block->rotation = LightGrayBannerBlock::ROTATION_0;
    registry[8766] = block;
  }

  { // ID: 8767
    std::shared_ptr<LightGrayBannerBlock> block = std::make_shared<LightGrayBannerBlock>();
    block->rotation = LightGrayBannerBlock::ROTATION_1;
    registry[8767] = block;
  }

  { // ID: 8768
    std::shared_ptr<LightGrayBannerBlock> block = std::make_shared<LightGrayBannerBlock>();
    block->rotation = LightGrayBannerBlock::ROTATION_2;
    registry[8768] = block;
  }

  { // ID: 8769
    std::shared_ptr<LightGrayBannerBlock> block = std::make_shared<LightGrayBannerBlock>();
    block->rotation = LightGrayBannerBlock::ROTATION_3;
    registry[8769] = block;
  }

  { // ID: 8770
    std::shared_ptr<LightGrayBannerBlock> block = std::make_shared<LightGrayBannerBlock>();
    block->rotation = LightGrayBannerBlock::ROTATION_4;
    registry[8770] = block;
  }

  { // ID: 8771
    std::shared_ptr<LightGrayBannerBlock> block = std::make_shared<LightGrayBannerBlock>();
    block->rotation = LightGrayBannerBlock::ROTATION_5;
    registry[8771] = block;
  }

  { // ID: 8772
    std::shared_ptr<LightGrayBannerBlock> block = std::make_shared<LightGrayBannerBlock>();
    block->rotation = LightGrayBannerBlock::ROTATION_6;
    registry[8772] = block;
  }

  { // ID: 8773
    std::shared_ptr<LightGrayBannerBlock> block = std::make_shared<LightGrayBannerBlock>();
    block->rotation = LightGrayBannerBlock::ROTATION_7;
    registry[8773] = block;
  }

  { // ID: 8774
    std::shared_ptr<LightGrayBannerBlock> block = std::make_shared<LightGrayBannerBlock>();
    block->rotation = LightGrayBannerBlock::ROTATION_8;
    registry[8774] = block;
  }

  { // ID: 8775
    std::shared_ptr<LightGrayBannerBlock> block = std::make_shared<LightGrayBannerBlock>();
    block->rotation = LightGrayBannerBlock::ROTATION_9;
    registry[8775] = block;
  }

  { // ID: 8776
    std::shared_ptr<LightGrayBannerBlock> block = std::make_shared<LightGrayBannerBlock>();
    block->rotation = LightGrayBannerBlock::ROTATION_10;
    registry[8776] = block;
  }

  { // ID: 8777
    std::shared_ptr<LightGrayBannerBlock> block = std::make_shared<LightGrayBannerBlock>();
    block->rotation = LightGrayBannerBlock::ROTATION_11;
    registry[8777] = block;
  }

  { // ID: 8778
    std::shared_ptr<LightGrayBannerBlock> block = std::make_shared<LightGrayBannerBlock>();
    block->rotation = LightGrayBannerBlock::ROTATION_12;
    registry[8778] = block;
  }

  { // ID: 8779
    std::shared_ptr<LightGrayBannerBlock> block = std::make_shared<LightGrayBannerBlock>();
    block->rotation = LightGrayBannerBlock::ROTATION_13;
    registry[8779] = block;
  }

  { // ID: 8780
    std::shared_ptr<LightGrayBannerBlock> block = std::make_shared<LightGrayBannerBlock>();
    block->rotation = LightGrayBannerBlock::ROTATION_14;
    registry[8780] = block;
  }

  { // ID: 8781
    std::shared_ptr<LightGrayBannerBlock> block = std::make_shared<LightGrayBannerBlock>();
    block->rotation = LightGrayBannerBlock::ROTATION_15;
    registry[8781] = block;
  }

  { // ID: 8906
    std::shared_ptr<LightBlueWallBannerBlock> block = std::make_shared<LightBlueWallBannerBlock>();
    block->facing = LightBlueWallBannerBlock::FACING_NORTH;
    registry[8906] = block;
  }

  { // ID: 8907
    std::shared_ptr<LightBlueWallBannerBlock> block = std::make_shared<LightBlueWallBannerBlock>();
    block->facing = LightBlueWallBannerBlock::FACING_SOUTH;
    registry[8907] = block;
  }

  { // ID: 8908
    std::shared_ptr<LightBlueWallBannerBlock> block = std::make_shared<LightBlueWallBannerBlock>();
    block->facing = LightBlueWallBannerBlock::FACING_WEST;
    registry[8908] = block;
  }

  { // ID: 8909
    std::shared_ptr<LightBlueWallBannerBlock> block = std::make_shared<LightBlueWallBannerBlock>();
    block->facing = LightBlueWallBannerBlock::FACING_EAST;
    registry[8909] = block;
  }

  { // ID: 8914
    std::shared_ptr<LimeWallBannerBlock> block = std::make_shared<LimeWallBannerBlock>();
    block->facing = LimeWallBannerBlock::FACING_NORTH;
    registry[8914] = block;
  }

  { // ID: 8915
    std::shared_ptr<LimeWallBannerBlock> block = std::make_shared<LimeWallBannerBlock>();
    block->facing = LimeWallBannerBlock::FACING_SOUTH;
    registry[8915] = block;
  }

  { // ID: 8916
    std::shared_ptr<LimeWallBannerBlock> block = std::make_shared<LimeWallBannerBlock>();
    block->facing = LimeWallBannerBlock::FACING_WEST;
    registry[8916] = block;
  }

  { // ID: 8917
    std::shared_ptr<LimeWallBannerBlock> block = std::make_shared<LimeWallBannerBlock>();
    block->facing = LimeWallBannerBlock::FACING_EAST;
    registry[8917] = block;
  }

  { // ID: 8926
    std::shared_ptr<LightGrayWallBannerBlock> block = std::make_shared<LightGrayWallBannerBlock>();
    block->facing = LightGrayWallBannerBlock::FACING_NORTH;
    registry[8926] = block;
  }

  { // ID: 8927
    std::shared_ptr<LightGrayWallBannerBlock> block = std::make_shared<LightGrayWallBannerBlock>();
    block->facing = LightGrayWallBannerBlock::FACING_SOUTH;
    registry[8927] = block;
  }

  { // ID: 8928
    std::shared_ptr<LightGrayWallBannerBlock> block = std::make_shared<LightGrayWallBannerBlock>();
    block->facing = LightGrayWallBannerBlock::FACING_WEST;
    registry[8928] = block;
  }

  { // ID: 8929
    std::shared_ptr<LightGrayWallBannerBlock> block = std::make_shared<LightGrayWallBannerBlock>();
    block->facing = LightGrayWallBannerBlock::FACING_EAST;
    registry[8929] = block;
  }

  { // ID: 10177
    std::shared_ptr<LightBlueShulkerBoxBlock> block = std::make_shared<LightBlueShulkerBoxBlock>();
    block->facing = LightBlueShulkerBoxBlock::FACING_NORTH;
    registry[10177] = block;
  }

  { // ID: 10178
    std::shared_ptr<LightBlueShulkerBoxBlock> block = std::make_shared<LightBlueShulkerBoxBlock>();
    block->facing = LightBlueShulkerBoxBlock::FACING_EAST;
    registry[10178] = block;
  }

  { // ID: 10179
    std::shared_ptr<LightBlueShulkerBoxBlock> block = std::make_shared<LightBlueShulkerBoxBlock>();
    block->facing = LightBlueShulkerBoxBlock::FACING_SOUTH;
    registry[10179] = block;
  }

  { // ID: 10180
    std::shared_ptr<LightBlueShulkerBoxBlock> block = std::make_shared<LightBlueShulkerBoxBlock>();
    block->facing = LightBlueShulkerBoxBlock::FACING_WEST;
    registry[10180] = block;
  }

  { // ID: 10181
    std::shared_ptr<LightBlueShulkerBoxBlock> block = std::make_shared<LightBlueShulkerBoxBlock>();
    block->facing = LightBlueShulkerBoxBlock::FACING_UP;
    registry[10181] = block;
  }

  { // ID: 10182
    std::shared_ptr<LightBlueShulkerBoxBlock> block = std::make_shared<LightBlueShulkerBoxBlock>();
    block->facing = LightBlueShulkerBoxBlock::FACING_DOWN;
    registry[10182] = block;
  }

  { // ID: 10189
    std::shared_ptr<LimeShulkerBoxBlock> block = std::make_shared<LimeShulkerBoxBlock>();
    block->facing = LimeShulkerBoxBlock::FACING_NORTH;
    registry[10189] = block;
  }

  { // ID: 10190
    std::shared_ptr<LimeShulkerBoxBlock> block = std::make_shared<LimeShulkerBoxBlock>();
    block->facing = LimeShulkerBoxBlock::FACING_EAST;
    registry[10190] = block;
  }

  { // ID: 10191
    std::shared_ptr<LimeShulkerBoxBlock> block = std::make_shared<LimeShulkerBoxBlock>();
    block->facing = LimeShulkerBoxBlock::FACING_SOUTH;
    registry[10191] = block;
  }

  { // ID: 10192
    std::shared_ptr<LimeShulkerBoxBlock> block = std::make_shared<LimeShulkerBoxBlock>();
    block->facing = LimeShulkerBoxBlock::FACING_WEST;
    registry[10192] = block;
  }

  { // ID: 10193
    std::shared_ptr<LimeShulkerBoxBlock> block = std::make_shared<LimeShulkerBoxBlock>();
    block->facing = LimeShulkerBoxBlock::FACING_UP;
    registry[10193] = block;
  }

  { // ID: 10194
    std::shared_ptr<LimeShulkerBoxBlock> block = std::make_shared<LimeShulkerBoxBlock>();
    block->facing = LimeShulkerBoxBlock::FACING_DOWN;
    registry[10194] = block;
  }

  { // ID: 10207
    std::shared_ptr<LightGrayShulkerBoxBlock> block = std::make_shared<LightGrayShulkerBoxBlock>();
    block->facing = LightGrayShulkerBoxBlock::FACING_NORTH;
    registry[10207] = block;
  }

  { // ID: 10208
    std::shared_ptr<LightGrayShulkerBoxBlock> block = std::make_shared<LightGrayShulkerBoxBlock>();
    block->facing = LightGrayShulkerBoxBlock::FACING_EAST;
    registry[10208] = block;
  }

  { // ID: 10209
    std::shared_ptr<LightGrayShulkerBoxBlock> block = std::make_shared<LightGrayShulkerBoxBlock>();
    block->facing = LightGrayShulkerBoxBlock::FACING_SOUTH;
    registry[10209] = block;
  }

  { // ID: 10210
    std::shared_ptr<LightGrayShulkerBoxBlock> block = std::make_shared<LightGrayShulkerBoxBlock>();
    block->facing = LightGrayShulkerBoxBlock::FACING_WEST;
    registry[10210] = block;
  }

  { // ID: 10211
    std::shared_ptr<LightGrayShulkerBoxBlock> block = std::make_shared<LightGrayShulkerBoxBlock>();
    block->facing = LightGrayShulkerBoxBlock::FACING_UP;
    registry[10211] = block;
  }

  { // ID: 10212
    std::shared_ptr<LightGrayShulkerBoxBlock> block = std::make_shared<LightGrayShulkerBoxBlock>();
    block->facing = LightGrayShulkerBoxBlock::FACING_DOWN;
    registry[10212] = block;
  }

  { // ID: 10267
    std::shared_ptr<LightBlueGlazedTerracottaBlock> block = std::make_shared<LightBlueGlazedTerracottaBlock>();
    block->facing = LightBlueGlazedTerracottaBlock::FACING_NORTH;
    registry[10267] = block;
  }

  { // ID: 10268
    std::shared_ptr<LightBlueGlazedTerracottaBlock> block = std::make_shared<LightBlueGlazedTerracottaBlock>();
    block->facing = LightBlueGlazedTerracottaBlock::FACING_SOUTH;
    registry[10268] = block;
  }

  { // ID: 10269
    std::shared_ptr<LightBlueGlazedTerracottaBlock> block = std::make_shared<LightBlueGlazedTerracottaBlock>();
    block->facing = LightBlueGlazedTerracottaBlock::FACING_WEST;
    registry[10269] = block;
  }

  { // ID: 10270
    std::shared_ptr<LightBlueGlazedTerracottaBlock> block = std::make_shared<LightBlueGlazedTerracottaBlock>();
    block->facing = LightBlueGlazedTerracottaBlock::FACING_EAST;
    registry[10270] = block;
  }

  { // ID: 10275
    std::shared_ptr<LimeGlazedTerracottaBlock> block = std::make_shared<LimeGlazedTerracottaBlock>();
    block->facing = LimeGlazedTerracottaBlock::FACING_NORTH;
    registry[10275] = block;
  }

  { // ID: 10276
    std::shared_ptr<LimeGlazedTerracottaBlock> block = std::make_shared<LimeGlazedTerracottaBlock>();
    block->facing = LimeGlazedTerracottaBlock::FACING_SOUTH;
    registry[10276] = block;
  }

  { // ID: 10277
    std::shared_ptr<LimeGlazedTerracottaBlock> block = std::make_shared<LimeGlazedTerracottaBlock>();
    block->facing = LimeGlazedTerracottaBlock::FACING_WEST;
    registry[10277] = block;
  }

  { // ID: 10278
    std::shared_ptr<LimeGlazedTerracottaBlock> block = std::make_shared<LimeGlazedTerracottaBlock>();
    block->facing = LimeGlazedTerracottaBlock::FACING_EAST;
    registry[10278] = block;
  }

  { // ID: 10287
    std::shared_ptr<LightGrayGlazedTerracottaBlock> block = std::make_shared<LightGrayGlazedTerracottaBlock>();
    block->facing = LightGrayGlazedTerracottaBlock::FACING_NORTH;
    registry[10287] = block;
  }

  { // ID: 10288
    std::shared_ptr<LightGrayGlazedTerracottaBlock> block = std::make_shared<LightGrayGlazedTerracottaBlock>();
    block->facing = LightGrayGlazedTerracottaBlock::FACING_SOUTH;
    registry[10288] = block;
  }

  { // ID: 10289
    std::shared_ptr<LightGrayGlazedTerracottaBlock> block = std::make_shared<LightGrayGlazedTerracottaBlock>();
    block->facing = LightGrayGlazedTerracottaBlock::FACING_WEST;
    registry[10289] = block;
  }

  { // ID: 10290
    std::shared_ptr<LightGrayGlazedTerracottaBlock> block = std::make_shared<LightGrayGlazedTerracottaBlock>();
    block->facing = LightGrayGlazedTerracottaBlock::FACING_EAST;
    registry[10290] = block;
  }

  { // ID: 10322
    std::shared_ptr<LightBlueConcreteBlock> block = std::make_shared<LightBlueConcreteBlock>();
    registry[10322] = block;
  }

  { // ID: 10324
    std::shared_ptr<LimeConcreteBlock> block = std::make_shared<LimeConcreteBlock>();
    registry[10324] = block;
  }

  { // ID: 10327
    std::shared_ptr<LightGrayConcreteBlock> block = std::make_shared<LightGrayConcreteBlock>();
    registry[10327] = block;
  }

  { // ID: 10338
    std::shared_ptr<LightBlueConcretePowderBlock> block = std::make_shared<LightBlueConcretePowderBlock>();
    registry[10338] = block;
  }

  { // ID: 10340
    std::shared_ptr<LimeConcretePowderBlock> block = std::make_shared<LimeConcretePowderBlock>();
    registry[10340] = block;
  }

  { // ID: 10343
    std::shared_ptr<LightGrayConcretePowderBlock> block = std::make_shared<LightGrayConcretePowderBlock>();
    registry[10343] = block;
  }

  { // ID: 15992
    std::shared_ptr<LoomBlock> block = std::make_shared<LoomBlock>();
    block->facing = LoomBlock::FACING_NORTH;
    registry[15992] = block;
  }

  { // ID: 15993
    std::shared_ptr<LoomBlock> block = std::make_shared<LoomBlock>();
    block->facing = LoomBlock::FACING_SOUTH;
    registry[15993] = block;
  }

  { // ID: 15994
    std::shared_ptr<LoomBlock> block = std::make_shared<LoomBlock>();
    block->facing = LoomBlock::FACING_WEST;
    registry[15994] = block;
  }

  { // ID: 15995
    std::shared_ptr<LoomBlock> block = std::make_shared<LoomBlock>();
    block->facing = LoomBlock::FACING_EAST;
    registry[15995] = block;
  }

  { // ID: 16038
    std::shared_ptr<LecternBlock> block = std::make_shared<LecternBlock>();
    block->facing = LecternBlock::FACING_NORTH;
    block->has_book = LecternBlock::HAS_BOOK_TRUE;
    block->powered = LecternBlock::POWERED_TRUE;
    registry[16038] = block;
  }

  { // ID: 16039
    std::shared_ptr<LecternBlock> block = std::make_shared<LecternBlock>();
    block->facing = LecternBlock::FACING_NORTH;
    block->has_book = LecternBlock::HAS_BOOK_TRUE;
    block->powered = LecternBlock::POWERED_FALSE;
    registry[16039] = block;
  }

  { // ID: 16040
    std::shared_ptr<LecternBlock> block = std::make_shared<LecternBlock>();
    block->facing = LecternBlock::FACING_NORTH;
    block->has_book = LecternBlock::HAS_BOOK_FALSE;
    block->powered = LecternBlock::POWERED_TRUE;
    registry[16040] = block;
  }

  { // ID: 16041
    std::shared_ptr<LecternBlock> block = std::make_shared<LecternBlock>();
    block->facing = LecternBlock::FACING_NORTH;
    block->has_book = LecternBlock::HAS_BOOK_FALSE;
    block->powered = LecternBlock::POWERED_FALSE;
    registry[16041] = block;
  }

  { // ID: 16042
    std::shared_ptr<LecternBlock> block = std::make_shared<LecternBlock>();
    block->facing = LecternBlock::FACING_SOUTH;
    block->has_book = LecternBlock::HAS_BOOK_TRUE;
    block->powered = LecternBlock::POWERED_TRUE;
    registry[16042] = block;
  }

  { // ID: 16043
    std::shared_ptr<LecternBlock> block = std::make_shared<LecternBlock>();
    block->facing = LecternBlock::FACING_SOUTH;
    block->has_book = LecternBlock::HAS_BOOK_TRUE;
    block->powered = LecternBlock::POWERED_FALSE;
    registry[16043] = block;
  }

  { // ID: 16044
    std::shared_ptr<LecternBlock> block = std::make_shared<LecternBlock>();
    block->facing = LecternBlock::FACING_SOUTH;
    block->has_book = LecternBlock::HAS_BOOK_FALSE;
    block->powered = LecternBlock::POWERED_TRUE;
    registry[16044] = block;
  }

  { // ID: 16045
    std::shared_ptr<LecternBlock> block = std::make_shared<LecternBlock>();
    block->facing = LecternBlock::FACING_SOUTH;
    block->has_book = LecternBlock::HAS_BOOK_FALSE;
    block->powered = LecternBlock::POWERED_FALSE;
    registry[16045] = block;
  }

  { // ID: 16046
    std::shared_ptr<LecternBlock> block = std::make_shared<LecternBlock>();
    block->facing = LecternBlock::FACING_WEST;
    block->has_book = LecternBlock::HAS_BOOK_TRUE;
    block->powered = LecternBlock::POWERED_TRUE;
    registry[16046] = block;
  }

  { // ID: 16047
    std::shared_ptr<LecternBlock> block = std::make_shared<LecternBlock>();
    block->facing = LecternBlock::FACING_WEST;
    block->has_book = LecternBlock::HAS_BOOK_TRUE;
    block->powered = LecternBlock::POWERED_FALSE;
    registry[16047] = block;
  }

  { // ID: 16048
    std::shared_ptr<LecternBlock> block = std::make_shared<LecternBlock>();
    block->facing = LecternBlock::FACING_WEST;
    block->has_book = LecternBlock::HAS_BOOK_FALSE;
    block->powered = LecternBlock::POWERED_TRUE;
    registry[16048] = block;
  }

  { // ID: 16049
    std::shared_ptr<LecternBlock> block = std::make_shared<LecternBlock>();
    block->facing = LecternBlock::FACING_WEST;
    block->has_book = LecternBlock::HAS_BOOK_FALSE;
    block->powered = LecternBlock::POWERED_FALSE;
    registry[16049] = block;
  }

  { // ID: 16050
    std::shared_ptr<LecternBlock> block = std::make_shared<LecternBlock>();
    block->facing = LecternBlock::FACING_EAST;
    block->has_book = LecternBlock::HAS_BOOK_TRUE;
    block->powered = LecternBlock::POWERED_TRUE;
    registry[16050] = block;
  }

  { // ID: 16051
    std::shared_ptr<LecternBlock> block = std::make_shared<LecternBlock>();
    block->facing = LecternBlock::FACING_EAST;
    block->has_book = LecternBlock::HAS_BOOK_TRUE;
    block->powered = LecternBlock::POWERED_FALSE;
    registry[16051] = block;
  }

  { // ID: 16052
    std::shared_ptr<LecternBlock> block = std::make_shared<LecternBlock>();
    block->facing = LecternBlock::FACING_EAST;
    block->has_book = LecternBlock::HAS_BOOK_FALSE;
    block->powered = LecternBlock::POWERED_TRUE;
    registry[16052] = block;
  }

  { // ID: 16053
    std::shared_ptr<LecternBlock> block = std::make_shared<LecternBlock>();
    block->facing = LecternBlock::FACING_EAST;
    block->has_book = LecternBlock::HAS_BOOK_FALSE;
    block->powered = LecternBlock::POWERED_FALSE;
    registry[16053] = block;
  }

  { // ID: 16091
    std::shared_ptr<LanternBlock> block = std::make_shared<LanternBlock>();
    block->hanging = LanternBlock::HANGING_TRUE;
    block->waterlogged = LanternBlock::WATERLOGGED_TRUE;
    registry[16091] = block;
  }

  { // ID: 16092
    std::shared_ptr<LanternBlock> block = std::make_shared<LanternBlock>();
    block->hanging = LanternBlock::HANGING_TRUE;
    block->waterlogged = LanternBlock::WATERLOGGED_FALSE;
    registry[16092] = block;
  }

  { // ID: 16093
    std::shared_ptr<LanternBlock> block = std::make_shared<LanternBlock>();
    block->hanging = LanternBlock::HANGING_FALSE;
    block->waterlogged = LanternBlock::WATERLOGGED_TRUE;
    registry[16093] = block;
  }

  { // ID: 16094
    std::shared_ptr<LanternBlock> block = std::make_shared<LanternBlock>();
    block->hanging = LanternBlock::HANGING_FALSE;
    block->waterlogged = LanternBlock::WATERLOGGED_FALSE;
    registry[16094] = block;
  }

  { // ID: 17047
    std::shared_ptr<LodestoneBlock> block = std::make_shared<LodestoneBlock>();
    registry[17047] = block;
  }

  { // ID: 18377
    std::shared_ptr<LightBlueCandleBlock> block = std::make_shared<LightBlueCandleBlock>();
    block->candles = LightBlueCandleBlock::CANDLES_1;
    block->lit = LightBlueCandleBlock::LIT_TRUE;
    block->waterlogged = LightBlueCandleBlock::WATERLOGGED_TRUE;
    registry[18377] = block;
  }

  { // ID: 18378
    std::shared_ptr<LightBlueCandleBlock> block = std::make_shared<LightBlueCandleBlock>();
    block->candles = LightBlueCandleBlock::CANDLES_1;
    block->lit = LightBlueCandleBlock::LIT_TRUE;
    block->waterlogged = LightBlueCandleBlock::WATERLOGGED_FALSE;
    registry[18378] = block;
  }

  { // ID: 18379
    std::shared_ptr<LightBlueCandleBlock> block = std::make_shared<LightBlueCandleBlock>();
    block->candles = LightBlueCandleBlock::CANDLES_1;
    block->lit = LightBlueCandleBlock::LIT_FALSE;
    block->waterlogged = LightBlueCandleBlock::WATERLOGGED_TRUE;
    registry[18379] = block;
  }

  { // ID: 18380
    std::shared_ptr<LightBlueCandleBlock> block = std::make_shared<LightBlueCandleBlock>();
    block->candles = LightBlueCandleBlock::CANDLES_1;
    block->lit = LightBlueCandleBlock::LIT_FALSE;
    block->waterlogged = LightBlueCandleBlock::WATERLOGGED_FALSE;
    registry[18380] = block;
  }

  { // ID: 18381
    std::shared_ptr<LightBlueCandleBlock> block = std::make_shared<LightBlueCandleBlock>();
    block->candles = LightBlueCandleBlock::CANDLES_2;
    block->lit = LightBlueCandleBlock::LIT_TRUE;
    block->waterlogged = LightBlueCandleBlock::WATERLOGGED_TRUE;
    registry[18381] = block;
  }

  { // ID: 18382
    std::shared_ptr<LightBlueCandleBlock> block = std::make_shared<LightBlueCandleBlock>();
    block->candles = LightBlueCandleBlock::CANDLES_2;
    block->lit = LightBlueCandleBlock::LIT_TRUE;
    block->waterlogged = LightBlueCandleBlock::WATERLOGGED_FALSE;
    registry[18382] = block;
  }

  { // ID: 18383
    std::shared_ptr<LightBlueCandleBlock> block = std::make_shared<LightBlueCandleBlock>();
    block->candles = LightBlueCandleBlock::CANDLES_2;
    block->lit = LightBlueCandleBlock::LIT_FALSE;
    block->waterlogged = LightBlueCandleBlock::WATERLOGGED_TRUE;
    registry[18383] = block;
  }

  { // ID: 18384
    std::shared_ptr<LightBlueCandleBlock> block = std::make_shared<LightBlueCandleBlock>();
    block->candles = LightBlueCandleBlock::CANDLES_2;
    block->lit = LightBlueCandleBlock::LIT_FALSE;
    block->waterlogged = LightBlueCandleBlock::WATERLOGGED_FALSE;
    registry[18384] = block;
  }

  { // ID: 18385
    std::shared_ptr<LightBlueCandleBlock> block = std::make_shared<LightBlueCandleBlock>();
    block->candles = LightBlueCandleBlock::CANDLES_3;
    block->lit = LightBlueCandleBlock::LIT_TRUE;
    block->waterlogged = LightBlueCandleBlock::WATERLOGGED_TRUE;
    registry[18385] = block;
  }

  { // ID: 18386
    std::shared_ptr<LightBlueCandleBlock> block = std::make_shared<LightBlueCandleBlock>();
    block->candles = LightBlueCandleBlock::CANDLES_3;
    block->lit = LightBlueCandleBlock::LIT_TRUE;
    block->waterlogged = LightBlueCandleBlock::WATERLOGGED_FALSE;
    registry[18386] = block;
  }

  { // ID: 18387
    std::shared_ptr<LightBlueCandleBlock> block = std::make_shared<LightBlueCandleBlock>();
    block->candles = LightBlueCandleBlock::CANDLES_3;
    block->lit = LightBlueCandleBlock::LIT_FALSE;
    block->waterlogged = LightBlueCandleBlock::WATERLOGGED_TRUE;
    registry[18387] = block;
  }

  { // ID: 18388
    std::shared_ptr<LightBlueCandleBlock> block = std::make_shared<LightBlueCandleBlock>();
    block->candles = LightBlueCandleBlock::CANDLES_3;
    block->lit = LightBlueCandleBlock::LIT_FALSE;
    block->waterlogged = LightBlueCandleBlock::WATERLOGGED_FALSE;
    registry[18388] = block;
  }

  { // ID: 18389
    std::shared_ptr<LightBlueCandleBlock> block = std::make_shared<LightBlueCandleBlock>();
    block->candles = LightBlueCandleBlock::CANDLES_4;
    block->lit = LightBlueCandleBlock::LIT_TRUE;
    block->waterlogged = LightBlueCandleBlock::WATERLOGGED_TRUE;
    registry[18389] = block;
  }

  { // ID: 18390
    std::shared_ptr<LightBlueCandleBlock> block = std::make_shared<LightBlueCandleBlock>();
    block->candles = LightBlueCandleBlock::CANDLES_4;
    block->lit = LightBlueCandleBlock::LIT_TRUE;
    block->waterlogged = LightBlueCandleBlock::WATERLOGGED_FALSE;
    registry[18390] = block;
  }

  { // ID: 18391
    std::shared_ptr<LightBlueCandleBlock> block = std::make_shared<LightBlueCandleBlock>();
    block->candles = LightBlueCandleBlock::CANDLES_4;
    block->lit = LightBlueCandleBlock::LIT_FALSE;
    block->waterlogged = LightBlueCandleBlock::WATERLOGGED_TRUE;
    registry[18391] = block;
  }

  { // ID: 18392
    std::shared_ptr<LightBlueCandleBlock> block = std::make_shared<LightBlueCandleBlock>();
    block->candles = LightBlueCandleBlock::CANDLES_4;
    block->lit = LightBlueCandleBlock::LIT_FALSE;
    block->waterlogged = LightBlueCandleBlock::WATERLOGGED_FALSE;
    registry[18392] = block;
  }

  { // ID: 18409
    std::shared_ptr<LimeCandleBlock> block = std::make_shared<LimeCandleBlock>();
    block->candles = LimeCandleBlock::CANDLES_1;
    block->lit = LimeCandleBlock::LIT_TRUE;
    block->waterlogged = LimeCandleBlock::WATERLOGGED_TRUE;
    registry[18409] = block;
  }

  { // ID: 18410
    std::shared_ptr<LimeCandleBlock> block = std::make_shared<LimeCandleBlock>();
    block->candles = LimeCandleBlock::CANDLES_1;
    block->lit = LimeCandleBlock::LIT_TRUE;
    block->waterlogged = LimeCandleBlock::WATERLOGGED_FALSE;
    registry[18410] = block;
  }

  { // ID: 18411
    std::shared_ptr<LimeCandleBlock> block = std::make_shared<LimeCandleBlock>();
    block->candles = LimeCandleBlock::CANDLES_1;
    block->lit = LimeCandleBlock::LIT_FALSE;
    block->waterlogged = LimeCandleBlock::WATERLOGGED_TRUE;
    registry[18411] = block;
  }

  { // ID: 18412
    std::shared_ptr<LimeCandleBlock> block = std::make_shared<LimeCandleBlock>();
    block->candles = LimeCandleBlock::CANDLES_1;
    block->lit = LimeCandleBlock::LIT_FALSE;
    block->waterlogged = LimeCandleBlock::WATERLOGGED_FALSE;
    registry[18412] = block;
  }

  { // ID: 18413
    std::shared_ptr<LimeCandleBlock> block = std::make_shared<LimeCandleBlock>();
    block->candles = LimeCandleBlock::CANDLES_2;
    block->lit = LimeCandleBlock::LIT_TRUE;
    block->waterlogged = LimeCandleBlock::WATERLOGGED_TRUE;
    registry[18413] = block;
  }

  { // ID: 18414
    std::shared_ptr<LimeCandleBlock> block = std::make_shared<LimeCandleBlock>();
    block->candles = LimeCandleBlock::CANDLES_2;
    block->lit = LimeCandleBlock::LIT_TRUE;
    block->waterlogged = LimeCandleBlock::WATERLOGGED_FALSE;
    registry[18414] = block;
  }

  { // ID: 18415
    std::shared_ptr<LimeCandleBlock> block = std::make_shared<LimeCandleBlock>();
    block->candles = LimeCandleBlock::CANDLES_2;
    block->lit = LimeCandleBlock::LIT_FALSE;
    block->waterlogged = LimeCandleBlock::WATERLOGGED_TRUE;
    registry[18415] = block;
  }

  { // ID: 18416
    std::shared_ptr<LimeCandleBlock> block = std::make_shared<LimeCandleBlock>();
    block->candles = LimeCandleBlock::CANDLES_2;
    block->lit = LimeCandleBlock::LIT_FALSE;
    block->waterlogged = LimeCandleBlock::WATERLOGGED_FALSE;
    registry[18416] = block;
  }

  { // ID: 18417
    std::shared_ptr<LimeCandleBlock> block = std::make_shared<LimeCandleBlock>();
    block->candles = LimeCandleBlock::CANDLES_3;
    block->lit = LimeCandleBlock::LIT_TRUE;
    block->waterlogged = LimeCandleBlock::WATERLOGGED_TRUE;
    registry[18417] = block;
  }

  { // ID: 18418
    std::shared_ptr<LimeCandleBlock> block = std::make_shared<LimeCandleBlock>();
    block->candles = LimeCandleBlock::CANDLES_3;
    block->lit = LimeCandleBlock::LIT_TRUE;
    block->waterlogged = LimeCandleBlock::WATERLOGGED_FALSE;
    registry[18418] = block;
  }

  { // ID: 18419
    std::shared_ptr<LimeCandleBlock> block = std::make_shared<LimeCandleBlock>();
    block->candles = LimeCandleBlock::CANDLES_3;
    block->lit = LimeCandleBlock::LIT_FALSE;
    block->waterlogged = LimeCandleBlock::WATERLOGGED_TRUE;
    registry[18419] = block;
  }

  { // ID: 18420
    std::shared_ptr<LimeCandleBlock> block = std::make_shared<LimeCandleBlock>();
    block->candles = LimeCandleBlock::CANDLES_3;
    block->lit = LimeCandleBlock::LIT_FALSE;
    block->waterlogged = LimeCandleBlock::WATERLOGGED_FALSE;
    registry[18420] = block;
  }

  { // ID: 18421
    std::shared_ptr<LimeCandleBlock> block = std::make_shared<LimeCandleBlock>();
    block->candles = LimeCandleBlock::CANDLES_4;
    block->lit = LimeCandleBlock::LIT_TRUE;
    block->waterlogged = LimeCandleBlock::WATERLOGGED_TRUE;
    registry[18421] = block;
  }

  { // ID: 18422
    std::shared_ptr<LimeCandleBlock> block = std::make_shared<LimeCandleBlock>();
    block->candles = LimeCandleBlock::CANDLES_4;
    block->lit = LimeCandleBlock::LIT_TRUE;
    block->waterlogged = LimeCandleBlock::WATERLOGGED_FALSE;
    registry[18422] = block;
  }

  { // ID: 18423
    std::shared_ptr<LimeCandleBlock> block = std::make_shared<LimeCandleBlock>();
    block->candles = LimeCandleBlock::CANDLES_4;
    block->lit = LimeCandleBlock::LIT_FALSE;
    block->waterlogged = LimeCandleBlock::WATERLOGGED_TRUE;
    registry[18423] = block;
  }

  { // ID: 18424
    std::shared_ptr<LimeCandleBlock> block = std::make_shared<LimeCandleBlock>();
    block->candles = LimeCandleBlock::CANDLES_4;
    block->lit = LimeCandleBlock::LIT_FALSE;
    block->waterlogged = LimeCandleBlock::WATERLOGGED_FALSE;
    registry[18424] = block;
  }

  { // ID: 18457
    std::shared_ptr<LightGrayCandleBlock> block = std::make_shared<LightGrayCandleBlock>();
    block->candles = LightGrayCandleBlock::CANDLES_1;
    block->lit = LightGrayCandleBlock::LIT_TRUE;
    block->waterlogged = LightGrayCandleBlock::WATERLOGGED_TRUE;
    registry[18457] = block;
  }

  { // ID: 18458
    std::shared_ptr<LightGrayCandleBlock> block = std::make_shared<LightGrayCandleBlock>();
    block->candles = LightGrayCandleBlock::CANDLES_1;
    block->lit = LightGrayCandleBlock::LIT_TRUE;
    block->waterlogged = LightGrayCandleBlock::WATERLOGGED_FALSE;
    registry[18458] = block;
  }

  { // ID: 18459
    std::shared_ptr<LightGrayCandleBlock> block = std::make_shared<LightGrayCandleBlock>();
    block->candles = LightGrayCandleBlock::CANDLES_1;
    block->lit = LightGrayCandleBlock::LIT_FALSE;
    block->waterlogged = LightGrayCandleBlock::WATERLOGGED_TRUE;
    registry[18459] = block;
  }

  { // ID: 18460
    std::shared_ptr<LightGrayCandleBlock> block = std::make_shared<LightGrayCandleBlock>();
    block->candles = LightGrayCandleBlock::CANDLES_1;
    block->lit = LightGrayCandleBlock::LIT_FALSE;
    block->waterlogged = LightGrayCandleBlock::WATERLOGGED_FALSE;
    registry[18460] = block;
  }

  { // ID: 18461
    std::shared_ptr<LightGrayCandleBlock> block = std::make_shared<LightGrayCandleBlock>();
    block->candles = LightGrayCandleBlock::CANDLES_2;
    block->lit = LightGrayCandleBlock::LIT_TRUE;
    block->waterlogged = LightGrayCandleBlock::WATERLOGGED_TRUE;
    registry[18461] = block;
  }

  { // ID: 18462
    std::shared_ptr<LightGrayCandleBlock> block = std::make_shared<LightGrayCandleBlock>();
    block->candles = LightGrayCandleBlock::CANDLES_2;
    block->lit = LightGrayCandleBlock::LIT_TRUE;
    block->waterlogged = LightGrayCandleBlock::WATERLOGGED_FALSE;
    registry[18462] = block;
  }

  { // ID: 18463
    std::shared_ptr<LightGrayCandleBlock> block = std::make_shared<LightGrayCandleBlock>();
    block->candles = LightGrayCandleBlock::CANDLES_2;
    block->lit = LightGrayCandleBlock::LIT_FALSE;
    block->waterlogged = LightGrayCandleBlock::WATERLOGGED_TRUE;
    registry[18463] = block;
  }

  { // ID: 18464
    std::shared_ptr<LightGrayCandleBlock> block = std::make_shared<LightGrayCandleBlock>();
    block->candles = LightGrayCandleBlock::CANDLES_2;
    block->lit = LightGrayCandleBlock::LIT_FALSE;
    block->waterlogged = LightGrayCandleBlock::WATERLOGGED_FALSE;
    registry[18464] = block;
  }

  { // ID: 18465
    std::shared_ptr<LightGrayCandleBlock> block = std::make_shared<LightGrayCandleBlock>();
    block->candles = LightGrayCandleBlock::CANDLES_3;
    block->lit = LightGrayCandleBlock::LIT_TRUE;
    block->waterlogged = LightGrayCandleBlock::WATERLOGGED_TRUE;
    registry[18465] = block;
  }

  { // ID: 18466
    std::shared_ptr<LightGrayCandleBlock> block = std::make_shared<LightGrayCandleBlock>();
    block->candles = LightGrayCandleBlock::CANDLES_3;
    block->lit = LightGrayCandleBlock::LIT_TRUE;
    block->waterlogged = LightGrayCandleBlock::WATERLOGGED_FALSE;
    registry[18466] = block;
  }

  { // ID: 18467
    std::shared_ptr<LightGrayCandleBlock> block = std::make_shared<LightGrayCandleBlock>();
    block->candles = LightGrayCandleBlock::CANDLES_3;
    block->lit = LightGrayCandleBlock::LIT_FALSE;
    block->waterlogged = LightGrayCandleBlock::WATERLOGGED_TRUE;
    registry[18467] = block;
  }

  { // ID: 18468
    std::shared_ptr<LightGrayCandleBlock> block = std::make_shared<LightGrayCandleBlock>();
    block->candles = LightGrayCandleBlock::CANDLES_3;
    block->lit = LightGrayCandleBlock::LIT_FALSE;
    block->waterlogged = LightGrayCandleBlock::WATERLOGGED_FALSE;
    registry[18468] = block;
  }

  { // ID: 18469
    std::shared_ptr<LightGrayCandleBlock> block = std::make_shared<LightGrayCandleBlock>();
    block->candles = LightGrayCandleBlock::CANDLES_4;
    block->lit = LightGrayCandleBlock::LIT_TRUE;
    block->waterlogged = LightGrayCandleBlock::WATERLOGGED_TRUE;
    registry[18469] = block;
  }

  { // ID: 18470
    std::shared_ptr<LightGrayCandleBlock> block = std::make_shared<LightGrayCandleBlock>();
    block->candles = LightGrayCandleBlock::CANDLES_4;
    block->lit = LightGrayCandleBlock::LIT_TRUE;
    block->waterlogged = LightGrayCandleBlock::WATERLOGGED_FALSE;
    registry[18470] = block;
  }

  { // ID: 18471
    std::shared_ptr<LightGrayCandleBlock> block = std::make_shared<LightGrayCandleBlock>();
    block->candles = LightGrayCandleBlock::CANDLES_4;
    block->lit = LightGrayCandleBlock::LIT_FALSE;
    block->waterlogged = LightGrayCandleBlock::WATERLOGGED_TRUE;
    registry[18471] = block;
  }

  { // ID: 18472
    std::shared_ptr<LightGrayCandleBlock> block = std::make_shared<LightGrayCandleBlock>();
    block->candles = LightGrayCandleBlock::CANDLES_4;
    block->lit = LightGrayCandleBlock::LIT_FALSE;
    block->waterlogged = LightGrayCandleBlock::WATERLOGGED_FALSE;
    registry[18472] = block;
  }

  { // ID: 18593
    std::shared_ptr<LightBlueCandleCakeBlock> block = std::make_shared<LightBlueCandleCakeBlock>();
    block->lit = LightBlueCandleCakeBlock::LIT_TRUE;
    registry[18593] = block;
  }

  { // ID: 18594
    std::shared_ptr<LightBlueCandleCakeBlock> block = std::make_shared<LightBlueCandleCakeBlock>();
    block->lit = LightBlueCandleCakeBlock::LIT_FALSE;
    registry[18594] = block;
  }

  { // ID: 18597
    std::shared_ptr<LimeCandleCakeBlock> block = std::make_shared<LimeCandleCakeBlock>();
    block->lit = LimeCandleCakeBlock::LIT_TRUE;
    registry[18597] = block;
  }

  { // ID: 18598
    std::shared_ptr<LimeCandleCakeBlock> block = std::make_shared<LimeCandleCakeBlock>();
    block->lit = LimeCandleCakeBlock::LIT_FALSE;
    registry[18598] = block;
  }

  { // ID: 18603
    std::shared_ptr<LightGrayCandleCakeBlock> block = std::make_shared<LightGrayCandleCakeBlock>();
    block->lit = LightGrayCandleCakeBlock::LIT_TRUE;
    registry[18603] = block;
  }

  { // ID: 18604
    std::shared_ptr<LightGrayCandleCakeBlock> block = std::make_shared<LightGrayCandleCakeBlock>();
    block->lit = LightGrayCandleCakeBlock::LIT_FALSE;
    registry[18604] = block;
  }

  { // ID: 18633
    std::shared_ptr<LargeAmethystBudBlock> block = std::make_shared<LargeAmethystBudBlock>();
    block->facing = LargeAmethystBudBlock::FACING_NORTH;
    block->waterlogged = LargeAmethystBudBlock::WATERLOGGED_TRUE;
    registry[18633] = block;
  }

  { // ID: 18634
    std::shared_ptr<LargeAmethystBudBlock> block = std::make_shared<LargeAmethystBudBlock>();
    block->facing = LargeAmethystBudBlock::FACING_NORTH;
    block->waterlogged = LargeAmethystBudBlock::WATERLOGGED_FALSE;
    registry[18634] = block;
  }

  { // ID: 18635
    std::shared_ptr<LargeAmethystBudBlock> block = std::make_shared<LargeAmethystBudBlock>();
    block->facing = LargeAmethystBudBlock::FACING_EAST;
    block->waterlogged = LargeAmethystBudBlock::WATERLOGGED_TRUE;
    registry[18635] = block;
  }

  { // ID: 18636
    std::shared_ptr<LargeAmethystBudBlock> block = std::make_shared<LargeAmethystBudBlock>();
    block->facing = LargeAmethystBudBlock::FACING_EAST;
    block->waterlogged = LargeAmethystBudBlock::WATERLOGGED_FALSE;
    registry[18636] = block;
  }

  { // ID: 18637
    std::shared_ptr<LargeAmethystBudBlock> block = std::make_shared<LargeAmethystBudBlock>();
    block->facing = LargeAmethystBudBlock::FACING_SOUTH;
    block->waterlogged = LargeAmethystBudBlock::WATERLOGGED_TRUE;
    registry[18637] = block;
  }

  { // ID: 18638
    std::shared_ptr<LargeAmethystBudBlock> block = std::make_shared<LargeAmethystBudBlock>();
    block->facing = LargeAmethystBudBlock::FACING_SOUTH;
    block->waterlogged = LargeAmethystBudBlock::WATERLOGGED_FALSE;
    registry[18638] = block;
  }

  { // ID: 18639
    std::shared_ptr<LargeAmethystBudBlock> block = std::make_shared<LargeAmethystBudBlock>();
    block->facing = LargeAmethystBudBlock::FACING_WEST;
    block->waterlogged = LargeAmethystBudBlock::WATERLOGGED_TRUE;
    registry[18639] = block;
  }

  { // ID: 18640
    std::shared_ptr<LargeAmethystBudBlock> block = std::make_shared<LargeAmethystBudBlock>();
    block->facing = LargeAmethystBudBlock::FACING_WEST;
    block->waterlogged = LargeAmethystBudBlock::WATERLOGGED_FALSE;
    registry[18640] = block;
  }

  { // ID: 18641
    std::shared_ptr<LargeAmethystBudBlock> block = std::make_shared<LargeAmethystBudBlock>();
    block->facing = LargeAmethystBudBlock::FACING_UP;
    block->waterlogged = LargeAmethystBudBlock::WATERLOGGED_TRUE;
    registry[18641] = block;
  }

  { // ID: 18642
    std::shared_ptr<LargeAmethystBudBlock> block = std::make_shared<LargeAmethystBudBlock>();
    block->facing = LargeAmethystBudBlock::FACING_UP;
    block->waterlogged = LargeAmethystBudBlock::WATERLOGGED_FALSE;
    registry[18642] = block;
  }

  { // ID: 18643
    std::shared_ptr<LargeAmethystBudBlock> block = std::make_shared<LargeAmethystBudBlock>();
    block->facing = LargeAmethystBudBlock::FACING_DOWN;
    block->waterlogged = LargeAmethystBudBlock::WATERLOGGED_TRUE;
    registry[18643] = block;
  }

  { // ID: 18644
    std::shared_ptr<LargeAmethystBudBlock> block = std::make_shared<LargeAmethystBudBlock>();
    block->facing = LargeAmethystBudBlock::FACING_DOWN;
    block->waterlogged = LargeAmethystBudBlock::WATERLOGGED_FALSE;
    registry[18644] = block;
  }

  { // ID: 19614
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_NORTH;
    block->powered = LightningRodBlock::POWERED_TRUE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_TRUE;
    registry[19614] = block;
  }

  { // ID: 19615
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_NORTH;
    block->powered = LightningRodBlock::POWERED_TRUE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_FALSE;
    registry[19615] = block;
  }

  { // ID: 19616
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_NORTH;
    block->powered = LightningRodBlock::POWERED_FALSE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_TRUE;
    registry[19616] = block;
  }

  { // ID: 19617
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_NORTH;
    block->powered = LightningRodBlock::POWERED_FALSE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_FALSE;
    registry[19617] = block;
  }

  { // ID: 19618
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_EAST;
    block->powered = LightningRodBlock::POWERED_TRUE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_TRUE;
    registry[19618] = block;
  }

  { // ID: 19619
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_EAST;
    block->powered = LightningRodBlock::POWERED_TRUE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_FALSE;
    registry[19619] = block;
  }

  { // ID: 19620
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_EAST;
    block->powered = LightningRodBlock::POWERED_FALSE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_TRUE;
    registry[19620] = block;
  }

  { // ID: 19621
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_EAST;
    block->powered = LightningRodBlock::POWERED_FALSE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_FALSE;
    registry[19621] = block;
  }

  { // ID: 19622
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_SOUTH;
    block->powered = LightningRodBlock::POWERED_TRUE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_TRUE;
    registry[19622] = block;
  }

  { // ID: 19623
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_SOUTH;
    block->powered = LightningRodBlock::POWERED_TRUE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_FALSE;
    registry[19623] = block;
  }

  { // ID: 19624
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_SOUTH;
    block->powered = LightningRodBlock::POWERED_FALSE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_TRUE;
    registry[19624] = block;
  }

  { // ID: 19625
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_SOUTH;
    block->powered = LightningRodBlock::POWERED_FALSE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_FALSE;
    registry[19625] = block;
  }

  { // ID: 19626
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_WEST;
    block->powered = LightningRodBlock::POWERED_TRUE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_TRUE;
    registry[19626] = block;
  }

  { // ID: 19627
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_WEST;
    block->powered = LightningRodBlock::POWERED_TRUE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_FALSE;
    registry[19627] = block;
  }

  { // ID: 19628
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_WEST;
    block->powered = LightningRodBlock::POWERED_FALSE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_TRUE;
    registry[19628] = block;
  }

  { // ID: 19629
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_WEST;
    block->powered = LightningRodBlock::POWERED_FALSE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_FALSE;
    registry[19629] = block;
  }

  { // ID: 19630
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_UP;
    block->powered = LightningRodBlock::POWERED_TRUE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_TRUE;
    registry[19630] = block;
  }

  { // ID: 19631
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_UP;
    block->powered = LightningRodBlock::POWERED_TRUE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_FALSE;
    registry[19631] = block;
  }

  { // ID: 19632
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_UP;
    block->powered = LightningRodBlock::POWERED_FALSE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_TRUE;
    registry[19632] = block;
  }

  { // ID: 19633
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_UP;
    block->powered = LightningRodBlock::POWERED_FALSE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_FALSE;
    registry[19633] = block;
  }

  { // ID: 19634
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_DOWN;
    block->powered = LightningRodBlock::POWERED_TRUE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_TRUE;
    registry[19634] = block;
  }

  { // ID: 19635
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_DOWN;
    block->powered = LightningRodBlock::POWERED_TRUE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_FALSE;
    registry[19635] = block;
  }

  { // ID: 19636
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_DOWN;
    block->powered = LightningRodBlock::POWERED_FALSE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_TRUE;
    registry[19636] = block;
  }

  { // ID: 19637
    std::shared_ptr<LightningRodBlock> block = std::make_shared<LightningRodBlock>();
    block->facing = LightningRodBlock::FACING_DOWN;
    block->powered = LightningRodBlock::POWERED_FALSE;
    block->waterlogged = LightningRodBlock::WATERLOGGED_FALSE;
    registry[19637] = block;
  }
}