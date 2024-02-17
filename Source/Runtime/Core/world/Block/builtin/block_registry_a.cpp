

#include "block_registry.h"

#include "acacia_button_block.h"
#include "acacia_door_block.h"
#include "acacia_fence_block.h"
#include "acacia_fence_gate_block.h"
#include "acacia_leaves_block.h"
#include "acacia_log_block.h"
#include "acacia_planks_block.h"
#include "acacia_pressure_plate_block.h"
#include "acacia_sapling_block.h"
#include "acacia_sign_block.h"
#include "acacia_slab_block.h"
#include "acacia_stairs_block.h"
#include "acacia_trapdoor_block.h"
#include "acacia_wall_sign_block.h"
#include "acacia_wood_block.h"
#include "activator_rail_block.h"
#include "air_block.h"
#include "allium_block.h"
#include "amethyst_block_block.h"
#include "amethyst_cluster_block.h"
#include "ancient_debris_block.h"
#include "andesite_block.h"
#include "andesite_slab_block.h"
#include "andesite_stairs_block.h"
#include "andesite_wall_block.h"
#include "anvil_block.h"
#include "attached_melon_stem_block.h"
#include "attached_pumpkin_stem_block.h"
#include "azalea_block.h"
#include "azalea_leaves_block.h"
#include "azure_bluet_block.h"

void BlockRegistry::generateA() {

  { // ID: 0
    std::shared_ptr<AirBlock> block = std::make_shared<AirBlock>();
    registry[0] = block;
  }

  { // ID: 6
    std::shared_ptr<AndesiteBlock> block = std::make_shared<AndesiteBlock>();
    registry[6] = block;
  }

  { // ID: 19
    std::shared_ptr<AcaciaPlanksBlock> block = std::make_shared<AcaciaPlanksBlock>();
    registry[19] = block;
  }

  { // ID: 30
    std::shared_ptr<AcaciaSaplingBlock> block = std::make_shared<AcaciaSaplingBlock>();
    block->stage = AcaciaSaplingBlock::STAGE_0;
    registry[30] = block;
  }

  { // ID: 31
    std::shared_ptr<AcaciaSaplingBlock> block = std::make_shared<AcaciaSaplingBlock>();
    block->stage = AcaciaSaplingBlock::STAGE_1;
    registry[31] = block;
  }

  { // ID: 129
    std::shared_ptr<AcaciaLogBlock> block = std::make_shared<AcaciaLogBlock>();
    block->axis = AcaciaLogBlock::AXIS_X;
    registry[129] = block;
  }

  { // ID: 130
    std::shared_ptr<AcaciaLogBlock> block = std::make_shared<AcaciaLogBlock>();
    block->axis = AcaciaLogBlock::AXIS_Y;
    registry[130] = block;
  }

  { // ID: 131
    std::shared_ptr<AcaciaLogBlock> block = std::make_shared<AcaciaLogBlock>();
    block->axis = AcaciaLogBlock::AXIS_Z;
    registry[131] = block;
  }

  { // ID: 176
    std::shared_ptr<AcaciaWoodBlock> block = std::make_shared<AcaciaWoodBlock>();
    block->axis = AcaciaWoodBlock::AXIS_X;
    registry[176] = block;
  }

  { // ID: 177
    std::shared_ptr<AcaciaWoodBlock> block = std::make_shared<AcaciaWoodBlock>();
    block->axis = AcaciaWoodBlock::AXIS_Y;
    registry[177] = block;
  }

  { // ID: 178
    std::shared_ptr<AcaciaWoodBlock> block = std::make_shared<AcaciaWoodBlock>();
    block->axis = AcaciaWoodBlock::AXIS_Z;
    registry[178] = block;
  }

  { // ID: 318
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_1;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_TRUE;
    registry[318] = block;
  }

  { // ID: 319
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_1;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_FALSE;
    registry[319] = block;
  }

  { // ID: 320
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_1;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_TRUE;
    registry[320] = block;
  }

  { // ID: 321
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_1;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_FALSE;
    registry[321] = block;
  }

  { // ID: 322
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_2;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_TRUE;
    registry[322] = block;
  }

  { // ID: 323
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_2;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_FALSE;
    registry[323] = block;
  }

  { // ID: 324
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_2;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_TRUE;
    registry[324] = block;
  }

  { // ID: 325
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_2;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_FALSE;
    registry[325] = block;
  }

  { // ID: 326
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_3;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_TRUE;
    registry[326] = block;
  }

  { // ID: 327
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_3;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_FALSE;
    registry[327] = block;
  }

  { // ID: 328
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_3;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_TRUE;
    registry[328] = block;
  }

  { // ID: 329
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_3;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_FALSE;
    registry[329] = block;
  }

  { // ID: 330
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_4;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_TRUE;
    registry[330] = block;
  }

  { // ID: 331
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_4;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_FALSE;
    registry[331] = block;
  }

  { // ID: 332
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_4;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_TRUE;
    registry[332] = block;
  }

  { // ID: 333
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_4;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_FALSE;
    registry[333] = block;
  }

  { // ID: 334
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_5;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_TRUE;
    registry[334] = block;
  }

  { // ID: 335
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_5;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_FALSE;
    registry[335] = block;
  }

  { // ID: 336
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_5;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_TRUE;
    registry[336] = block;
  }

  { // ID: 337
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_5;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_FALSE;
    registry[337] = block;
  }

  { // ID: 338
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_6;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_TRUE;
    registry[338] = block;
  }

  { // ID: 339
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_6;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_FALSE;
    registry[339] = block;
  }

  { // ID: 340
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_6;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_TRUE;
    registry[340] = block;
  }

  { // ID: 341
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_6;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_FALSE;
    registry[341] = block;
  }

  { // ID: 342
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_7;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_TRUE;
    registry[342] = block;
  }

  { // ID: 343
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_7;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_FALSE;
    registry[343] = block;
  }

  { // ID: 344
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_7;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_TRUE;
    registry[344] = block;
  }

  { // ID: 345
    std::shared_ptr<AcaciaLeavesBlock> block = std::make_shared<AcaciaLeavesBlock>();
    block->distance = AcaciaLeavesBlock::DISTANCE_7;
    block->persistent = AcaciaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AcaciaLeavesBlock::WATERLOGGED_FALSE;
    registry[345] = block;
  }

  { // ID: 402
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_1;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[402] = block;
  }

  { // ID: 403
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_1;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[403] = block;
  }

  { // ID: 404
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_1;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[404] = block;
  }

  { // ID: 405
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_1;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[405] = block;
  }

  { // ID: 406
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_2;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[406] = block;
  }

  { // ID: 407
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_2;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[407] = block;
  }

  { // ID: 408
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_2;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[408] = block;
  }

  { // ID: 409
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_2;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[409] = block;
  }

  { // ID: 410
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_3;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[410] = block;
  }

  { // ID: 411
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_3;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[411] = block;
  }

  { // ID: 412
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_3;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[412] = block;
  }

  { // ID: 413
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_3;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[413] = block;
  }

  { // ID: 414
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_4;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[414] = block;
  }

  { // ID: 415
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_4;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[415] = block;
  }

  { // ID: 416
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_4;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[416] = block;
  }

  { // ID: 417
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_4;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[417] = block;
  }

  { // ID: 418
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_5;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[418] = block;
  }

  { // ID: 419
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_5;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[419] = block;
  }

  { // ID: 420
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_5;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[420] = block;
  }

  { // ID: 421
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_5;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[421] = block;
  }

  { // ID: 422
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_6;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[422] = block;
  }

  { // ID: 423
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_6;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[423] = block;
  }

  { // ID: 424
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_6;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[424] = block;
  }

  { // ID: 425
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_6;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[425] = block;
  }

  { // ID: 426
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_7;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[426] = block;
  }

  { // ID: 427
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_7;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[427] = block;
  }

  { // ID: 428
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_7;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_TRUE;
    registry[428] = block;
  }

  { // ID: 429
    std::shared_ptr<AzaleaLeavesBlock> block = std::make_shared<AzaleaLeavesBlock>();
    block->distance = AzaleaLeavesBlock::DISTANCE_7;
    block->persistent = AzaleaLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = AzaleaLeavesBlock::WATERLOGGED_FALSE;
    registry[429] = block;
  }

  { // ID: 1669
    std::shared_ptr<AlliumBlock> block = std::make_shared<AlliumBlock>();
    registry[1669] = block;
  }

  { // ID: 1670
    std::shared_ptr<AzureBluetBlock> block = std::make_shared<AzureBluetBlock>();
    registry[1670] = block;
  }

  { // ID: 3732
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_0;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_TRUE;
    registry[3732] = block;
  }

  { // ID: 3733
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_0;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_FALSE;
    registry[3733] = block;
  }

  { // ID: 3734
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_1;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_TRUE;
    registry[3734] = block;
  }

  { // ID: 3735
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_1;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_FALSE;
    registry[3735] = block;
  }

  { // ID: 3736
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_2;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_TRUE;
    registry[3736] = block;
  }

  { // ID: 3737
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_2;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_FALSE;
    registry[3737] = block;
  }

  { // ID: 3738
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_3;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_TRUE;
    registry[3738] = block;
  }

  { // ID: 3739
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_3;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_FALSE;
    registry[3739] = block;
  }

  { // ID: 3740
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_4;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_TRUE;
    registry[3740] = block;
  }

  { // ID: 3741
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_4;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_FALSE;
    registry[3741] = block;
  }

  { // ID: 3742
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_5;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_TRUE;
    registry[3742] = block;
  }

  { // ID: 3743
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_5;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_FALSE;
    registry[3743] = block;
  }

  { // ID: 3744
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_6;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_TRUE;
    registry[3744] = block;
  }

  { // ID: 3745
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_6;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_FALSE;
    registry[3745] = block;
  }

  { // ID: 3746
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_7;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_TRUE;
    registry[3746] = block;
  }

  { // ID: 3747
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_7;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_FALSE;
    registry[3747] = block;
  }

  { // ID: 3748
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_8;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_TRUE;
    registry[3748] = block;
  }

  { // ID: 3749
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_8;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_FALSE;
    registry[3749] = block;
  }

  { // ID: 3750
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_9;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_TRUE;
    registry[3750] = block;
  }

  { // ID: 3751
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_9;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_FALSE;
    registry[3751] = block;
  }

  { // ID: 3752
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_10;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_TRUE;
    registry[3752] = block;
  }

  { // ID: 3753
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_10;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_FALSE;
    registry[3753] = block;
  }

  { // ID: 3754
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_11;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_TRUE;
    registry[3754] = block;
  }

  { // ID: 3755
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_11;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_FALSE;
    registry[3755] = block;
  }

  { // ID: 3756
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_12;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_TRUE;
    registry[3756] = block;
  }

  { // ID: 3757
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_12;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_FALSE;
    registry[3757] = block;
  }

  { // ID: 3758
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_13;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_TRUE;
    registry[3758] = block;
  }

  { // ID: 3759
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_13;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_FALSE;
    registry[3759] = block;
  }

  { // ID: 3760
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_14;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_TRUE;
    registry[3760] = block;
  }

  { // ID: 3761
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_14;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_FALSE;
    registry[3761] = block;
  }

  { // ID: 3762
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_15;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_TRUE;
    registry[3762] = block;
  }

  { // ID: 3763
    std::shared_ptr<AcaciaSignBlock> block = std::make_shared<AcaciaSignBlock>();
    block->rotation = AcaciaSignBlock::ROTATION_15;
    block->waterlogged = AcaciaSignBlock::WATERLOGGED_FALSE;
    registry[3763] = block;
  }

  { // ID: 4056
    std::shared_ptr<AcaciaWallSignBlock> block = std::make_shared<AcaciaWallSignBlock>();
    block->facing = AcaciaWallSignBlock::FACING_NORTH;
    block->waterlogged = AcaciaWallSignBlock::WATERLOGGED_TRUE;
    registry[4056] = block;
  }

  { // ID: 4057
    std::shared_ptr<AcaciaWallSignBlock> block = std::make_shared<AcaciaWallSignBlock>();
    block->facing = AcaciaWallSignBlock::FACING_NORTH;
    block->waterlogged = AcaciaWallSignBlock::WATERLOGGED_FALSE;
    registry[4057] = block;
  }

  { // ID: 4058
    std::shared_ptr<AcaciaWallSignBlock> block = std::make_shared<AcaciaWallSignBlock>();
    block->facing = AcaciaWallSignBlock::FACING_SOUTH;
    block->waterlogged = AcaciaWallSignBlock::WATERLOGGED_TRUE;
    registry[4058] = block;
  }

  { // ID: 4059
    std::shared_ptr<AcaciaWallSignBlock> block = std::make_shared<AcaciaWallSignBlock>();
    block->facing = AcaciaWallSignBlock::FACING_SOUTH;
    block->waterlogged = AcaciaWallSignBlock::WATERLOGGED_FALSE;
    registry[4059] = block;
  }

  { // ID: 4060
    std::shared_ptr<AcaciaWallSignBlock> block = std::make_shared<AcaciaWallSignBlock>();
    block->facing = AcaciaWallSignBlock::FACING_WEST;
    block->waterlogged = AcaciaWallSignBlock::WATERLOGGED_TRUE;
    registry[4060] = block;
  }

  { // ID: 4061
    std::shared_ptr<AcaciaWallSignBlock> block = std::make_shared<AcaciaWallSignBlock>();
    block->facing = AcaciaWallSignBlock::FACING_WEST;
    block->waterlogged = AcaciaWallSignBlock::WATERLOGGED_FALSE;
    registry[4061] = block;
  }

  { // ID: 4062
    std::shared_ptr<AcaciaWallSignBlock> block = std::make_shared<AcaciaWallSignBlock>();
    block->facing = AcaciaWallSignBlock::FACING_EAST;
    block->waterlogged = AcaciaWallSignBlock::WATERLOGGED_TRUE;
    registry[4062] = block;
  }

  { // ID: 4063
    std::shared_ptr<AcaciaWallSignBlock> block = std::make_shared<AcaciaWallSignBlock>();
    block->facing = AcaciaWallSignBlock::FACING_EAST;
    block->waterlogged = AcaciaWallSignBlock::WATERLOGGED_FALSE;
    registry[4063] = block;
  }

  { // ID: 4186
    std::shared_ptr<AcaciaPressurePlateBlock> block = std::make_shared<AcaciaPressurePlateBlock>();
    block->powered = AcaciaPressurePlateBlock::POWERED_TRUE;
    registry[4186] = block;
  }

  { // ID: 4187
    std::shared_ptr<AcaciaPressurePlateBlock> block = std::make_shared<AcaciaPressurePlateBlock>();
    block->powered = AcaciaPressurePlateBlock::POWERED_FALSE;
    registry[4187] = block;
  }

  { // ID: 4676
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_NORTH;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4676] = block;
  }

  { // ID: 4677
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_NORTH;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4677] = block;
  }

  { // ID: 4678
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_NORTH;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4678] = block;
  }

  { // ID: 4679
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_NORTH;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4679] = block;
  }

  { // ID: 4680
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_NORTH;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4680] = block;
  }

  { // ID: 4681
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_NORTH;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4681] = block;
  }

  { // ID: 4682
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_NORTH;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4682] = block;
  }

  { // ID: 4683
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_NORTH;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4683] = block;
  }

  { // ID: 4684
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_NORTH;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4684] = block;
  }

  { // ID: 4685
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_NORTH;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4685] = block;
  }

  { // ID: 4686
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_NORTH;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4686] = block;
  }

  { // ID: 4687
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_NORTH;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4687] = block;
  }

  { // ID: 4688
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_NORTH;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4688] = block;
  }

  { // ID: 4689
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_NORTH;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4689] = block;
  }

  { // ID: 4690
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_NORTH;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4690] = block;
  }

  { // ID: 4691
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_NORTH;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4691] = block;
  }

  { // ID: 4692
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_SOUTH;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4692] = block;
  }

  { // ID: 4693
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_SOUTH;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4693] = block;
  }

  { // ID: 4694
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_SOUTH;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4694] = block;
  }

  { // ID: 4695
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_SOUTH;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4695] = block;
  }

  { // ID: 4696
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_SOUTH;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4696] = block;
  }

  { // ID: 4697
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_SOUTH;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4697] = block;
  }

  { // ID: 4698
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_SOUTH;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4698] = block;
  }

  { // ID: 4699
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_SOUTH;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4699] = block;
  }

  { // ID: 4700
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_SOUTH;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4700] = block;
  }

  { // ID: 4701
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_SOUTH;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4701] = block;
  }

  { // ID: 4702
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_SOUTH;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4702] = block;
  }

  { // ID: 4703
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_SOUTH;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4703] = block;
  }

  { // ID: 4704
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_SOUTH;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4704] = block;
  }

  { // ID: 4705
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_SOUTH;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4705] = block;
  }

  { // ID: 4706
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_SOUTH;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4706] = block;
  }

  { // ID: 4707
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_SOUTH;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4707] = block;
  }

  { // ID: 4708
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_WEST;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4708] = block;
  }

  { // ID: 4709
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_WEST;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4709] = block;
  }

  { // ID: 4710
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_WEST;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4710] = block;
  }

  { // ID: 4711
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_WEST;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4711] = block;
  }

  { // ID: 4712
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_WEST;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4712] = block;
  }

  { // ID: 4713
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_WEST;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4713] = block;
  }

  { // ID: 4714
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_WEST;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4714] = block;
  }

  { // ID: 4715
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_WEST;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4715] = block;
  }

  { // ID: 4716
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_WEST;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4716] = block;
  }

  { // ID: 4717
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_WEST;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4717] = block;
  }

  { // ID: 4718
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_WEST;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4718] = block;
  }

  { // ID: 4719
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_WEST;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4719] = block;
  }

  { // ID: 4720
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_WEST;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4720] = block;
  }

  { // ID: 4721
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_WEST;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4721] = block;
  }

  { // ID: 4722
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_WEST;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4722] = block;
  }

  { // ID: 4723
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_WEST;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4723] = block;
  }

  { // ID: 4724
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_EAST;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4724] = block;
  }

  { // ID: 4725
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_EAST;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4725] = block;
  }

  { // ID: 4726
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_EAST;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4726] = block;
  }

  { // ID: 4727
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_EAST;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4727] = block;
  }

  { // ID: 4728
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_EAST;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4728] = block;
  }

  { // ID: 4729
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_EAST;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4729] = block;
  }

  { // ID: 4730
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_EAST;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4730] = block;
  }

  { // ID: 4731
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_EAST;
    block->half = AcaciaTrapdoorBlock::HALF_TOP;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4731] = block;
  }

  { // ID: 4732
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_EAST;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4732] = block;
  }

  { // ID: 4733
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_EAST;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4733] = block;
  }

  { // ID: 4734
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_EAST;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4734] = block;
  }

  { // ID: 4735
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_EAST;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_TRUE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4735] = block;
  }

  { // ID: 4736
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_EAST;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4736] = block;
  }

  { // ID: 4737
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_EAST;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4737] = block;
  }

  { // ID: 4738
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_EAST;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4738] = block;
  }

  { // ID: 4739
    std::shared_ptr<AcaciaTrapdoorBlock> block = std::make_shared<AcaciaTrapdoorBlock>();
    block->facing = AcaciaTrapdoorBlock::FACING_EAST;
    block->half = AcaciaTrapdoorBlock::HALF_BOTTOM;
    block->open = AcaciaTrapdoorBlock::OPEN_FALSE;
    block->powered = AcaciaTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = AcaciaTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4739] = block;
  }

  { // ID: 5143
    std::shared_ptr<AttachedPumpkinStemBlock> block = std::make_shared<AttachedPumpkinStemBlock>();
    block->facing = AttachedPumpkinStemBlock::FACING_NORTH;
    registry[5143] = block;
  }

  { // ID: 5144
    std::shared_ptr<AttachedPumpkinStemBlock> block = std::make_shared<AttachedPumpkinStemBlock>();
    block->facing = AttachedPumpkinStemBlock::FACING_SOUTH;
    registry[5144] = block;
  }

  { // ID: 5145
    std::shared_ptr<AttachedPumpkinStemBlock> block = std::make_shared<AttachedPumpkinStemBlock>();
    block->facing = AttachedPumpkinStemBlock::FACING_WEST;
    registry[5145] = block;
  }

  { // ID: 5146
    std::shared_ptr<AttachedPumpkinStemBlock> block = std::make_shared<AttachedPumpkinStemBlock>();
    block->facing = AttachedPumpkinStemBlock::FACING_EAST;
    registry[5146] = block;
  }

  { // ID: 5147
    std::shared_ptr<AttachedMelonStemBlock> block = std::make_shared<AttachedMelonStemBlock>();
    block->facing = AttachedMelonStemBlock::FACING_NORTH;
    registry[5147] = block;
  }

  { // ID: 5148
    std::shared_ptr<AttachedMelonStemBlock> block = std::make_shared<AttachedMelonStemBlock>();
    block->facing = AttachedMelonStemBlock::FACING_SOUTH;
    registry[5148] = block;
  }

  { // ID: 5149
    std::shared_ptr<AttachedMelonStemBlock> block = std::make_shared<AttachedMelonStemBlock>();
    block->facing = AttachedMelonStemBlock::FACING_WEST;
    registry[5149] = block;
  }

  { // ID: 5150
    std::shared_ptr<AttachedMelonStemBlock> block = std::make_shared<AttachedMelonStemBlock>();
    block->facing = AttachedMelonStemBlock::FACING_EAST;
    registry[5150] = block;
  }

  { // ID: 7035
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_FLOOR;
    block->facing = AcaciaButtonBlock::FACING_NORTH;
    block->powered = AcaciaButtonBlock::POWERED_TRUE;
    registry[7035] = block;
  }

  { // ID: 7036
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_FLOOR;
    block->facing = AcaciaButtonBlock::FACING_NORTH;
    block->powered = AcaciaButtonBlock::POWERED_FALSE;
    registry[7036] = block;
  }

  { // ID: 7037
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_FLOOR;
    block->facing = AcaciaButtonBlock::FACING_SOUTH;
    block->powered = AcaciaButtonBlock::POWERED_TRUE;
    registry[7037] = block;
  }

  { // ID: 7038
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_FLOOR;
    block->facing = AcaciaButtonBlock::FACING_SOUTH;
    block->powered = AcaciaButtonBlock::POWERED_FALSE;
    registry[7038] = block;
  }

  { // ID: 7039
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_FLOOR;
    block->facing = AcaciaButtonBlock::FACING_WEST;
    block->powered = AcaciaButtonBlock::POWERED_TRUE;
    registry[7039] = block;
  }

  { // ID: 7040
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_FLOOR;
    block->facing = AcaciaButtonBlock::FACING_WEST;
    block->powered = AcaciaButtonBlock::POWERED_FALSE;
    registry[7040] = block;
  }

  { // ID: 7041
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_FLOOR;
    block->facing = AcaciaButtonBlock::FACING_EAST;
    block->powered = AcaciaButtonBlock::POWERED_TRUE;
    registry[7041] = block;
  }

  { // ID: 7042
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_FLOOR;
    block->facing = AcaciaButtonBlock::FACING_EAST;
    block->powered = AcaciaButtonBlock::POWERED_FALSE;
    registry[7042] = block;
  }

  { // ID: 7043
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_WALL;
    block->facing = AcaciaButtonBlock::FACING_NORTH;
    block->powered = AcaciaButtonBlock::POWERED_TRUE;
    registry[7043] = block;
  }

  { // ID: 7044
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_WALL;
    block->facing = AcaciaButtonBlock::FACING_NORTH;
    block->powered = AcaciaButtonBlock::POWERED_FALSE;
    registry[7044] = block;
  }

  { // ID: 7045
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_WALL;
    block->facing = AcaciaButtonBlock::FACING_SOUTH;
    block->powered = AcaciaButtonBlock::POWERED_TRUE;
    registry[7045] = block;
  }

  { // ID: 7046
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_WALL;
    block->facing = AcaciaButtonBlock::FACING_SOUTH;
    block->powered = AcaciaButtonBlock::POWERED_FALSE;
    registry[7046] = block;
  }

  { // ID: 7047
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_WALL;
    block->facing = AcaciaButtonBlock::FACING_WEST;
    block->powered = AcaciaButtonBlock::POWERED_TRUE;
    registry[7047] = block;
  }

  { // ID: 7048
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_WALL;
    block->facing = AcaciaButtonBlock::FACING_WEST;
    block->powered = AcaciaButtonBlock::POWERED_FALSE;
    registry[7048] = block;
  }

  { // ID: 7049
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_WALL;
    block->facing = AcaciaButtonBlock::FACING_EAST;
    block->powered = AcaciaButtonBlock::POWERED_TRUE;
    registry[7049] = block;
  }

  { // ID: 7050
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_WALL;
    block->facing = AcaciaButtonBlock::FACING_EAST;
    block->powered = AcaciaButtonBlock::POWERED_FALSE;
    registry[7050] = block;
  }

  { // ID: 7051
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_CEILING;
    block->facing = AcaciaButtonBlock::FACING_NORTH;
    block->powered = AcaciaButtonBlock::POWERED_TRUE;
    registry[7051] = block;
  }

  { // ID: 7052
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_CEILING;
    block->facing = AcaciaButtonBlock::FACING_NORTH;
    block->powered = AcaciaButtonBlock::POWERED_FALSE;
    registry[7052] = block;
  }

  { // ID: 7053
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_CEILING;
    block->facing = AcaciaButtonBlock::FACING_SOUTH;
    block->powered = AcaciaButtonBlock::POWERED_TRUE;
    registry[7053] = block;
  }

  { // ID: 7054
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_CEILING;
    block->facing = AcaciaButtonBlock::FACING_SOUTH;
    block->powered = AcaciaButtonBlock::POWERED_FALSE;
    registry[7054] = block;
  }

  { // ID: 7055
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_CEILING;
    block->facing = AcaciaButtonBlock::FACING_WEST;
    block->powered = AcaciaButtonBlock::POWERED_TRUE;
    registry[7055] = block;
  }

  { // ID: 7056
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_CEILING;
    block->facing = AcaciaButtonBlock::FACING_WEST;
    block->powered = AcaciaButtonBlock::POWERED_FALSE;
    registry[7056] = block;
  }

  { // ID: 7057
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_CEILING;
    block->facing = AcaciaButtonBlock::FACING_EAST;
    block->powered = AcaciaButtonBlock::POWERED_TRUE;
    registry[7057] = block;
  }

  { // ID: 7058
    std::shared_ptr<AcaciaButtonBlock> block = std::make_shared<AcaciaButtonBlock>();
    block->face = AcaciaButtonBlock::FACE_CEILING;
    block->facing = AcaciaButtonBlock::FACING_EAST;
    block->powered = AcaciaButtonBlock::POWERED_FALSE;
    registry[7058] = block;
  }

  { // ID: 7227
    std::shared_ptr<AnvilBlock> block = std::make_shared<AnvilBlock>();
    block->facing = AnvilBlock::FACING_NORTH;
    registry[7227] = block;
  }

  { // ID: 7228
    std::shared_ptr<AnvilBlock> block = std::make_shared<AnvilBlock>();
    block->facing = AnvilBlock::FACING_SOUTH;
    registry[7228] = block;
  }

  { // ID: 7229
    std::shared_ptr<AnvilBlock> block = std::make_shared<AnvilBlock>();
    block->facing = AnvilBlock::FACING_WEST;
    registry[7229] = block;
  }

  { // ID: 7230
    std::shared_ptr<AnvilBlock> block = std::make_shared<AnvilBlock>();
    block->facing = AnvilBlock::FACING_EAST;
    registry[7230] = block;
  }

  { // ID: 7440
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_TRUE;
    block->shape = ActivatorRailBlock::SHAPE_NORTH_SOUTH;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_TRUE;
    registry[7440] = block;
  }

  { // ID: 7441
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_TRUE;
    block->shape = ActivatorRailBlock::SHAPE_NORTH_SOUTH;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_FALSE;
    registry[7441] = block;
  }

  { // ID: 7442
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_TRUE;
    block->shape = ActivatorRailBlock::SHAPE_EAST_WEST;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_TRUE;
    registry[7442] = block;
  }

  { // ID: 7443
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_TRUE;
    block->shape = ActivatorRailBlock::SHAPE_EAST_WEST;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_FALSE;
    registry[7443] = block;
  }

  { // ID: 7444
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_TRUE;
    block->shape = ActivatorRailBlock::SHAPE_ASCENDING_EAST;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_TRUE;
    registry[7444] = block;
  }

  { // ID: 7445
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_TRUE;
    block->shape = ActivatorRailBlock::SHAPE_ASCENDING_EAST;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_FALSE;
    registry[7445] = block;
  }

  { // ID: 7446
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_TRUE;
    block->shape = ActivatorRailBlock::SHAPE_ASCENDING_WEST;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_TRUE;
    registry[7446] = block;
  }

  { // ID: 7447
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_TRUE;
    block->shape = ActivatorRailBlock::SHAPE_ASCENDING_WEST;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_FALSE;
    registry[7447] = block;
  }

  { // ID: 7448
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_TRUE;
    block->shape = ActivatorRailBlock::SHAPE_ASCENDING_NORTH;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_TRUE;
    registry[7448] = block;
  }

  { // ID: 7449
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_TRUE;
    block->shape = ActivatorRailBlock::SHAPE_ASCENDING_NORTH;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_FALSE;
    registry[7449] = block;
  }

  { // ID: 7450
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_TRUE;
    block->shape = ActivatorRailBlock::SHAPE_ASCENDING_SOUTH;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_TRUE;
    registry[7450] = block;
  }

  { // ID: 7451
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_TRUE;
    block->shape = ActivatorRailBlock::SHAPE_ASCENDING_SOUTH;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_FALSE;
    registry[7451] = block;
  }

  { // ID: 7452
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_FALSE;
    block->shape = ActivatorRailBlock::SHAPE_NORTH_SOUTH;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_TRUE;
    registry[7452] = block;
  }

  { // ID: 7453
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_FALSE;
    block->shape = ActivatorRailBlock::SHAPE_NORTH_SOUTH;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_FALSE;
    registry[7453] = block;
  }

  { // ID: 7454
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_FALSE;
    block->shape = ActivatorRailBlock::SHAPE_EAST_WEST;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_TRUE;
    registry[7454] = block;
  }

  { // ID: 7455
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_FALSE;
    block->shape = ActivatorRailBlock::SHAPE_EAST_WEST;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_FALSE;
    registry[7455] = block;
  }

  { // ID: 7456
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_FALSE;
    block->shape = ActivatorRailBlock::SHAPE_ASCENDING_EAST;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_TRUE;
    registry[7456] = block;
  }

  { // ID: 7457
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_FALSE;
    block->shape = ActivatorRailBlock::SHAPE_ASCENDING_EAST;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_FALSE;
    registry[7457] = block;
  }

  { // ID: 7458
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_FALSE;
    block->shape = ActivatorRailBlock::SHAPE_ASCENDING_WEST;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_TRUE;
    registry[7458] = block;
  }

  { // ID: 7459
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_FALSE;
    block->shape = ActivatorRailBlock::SHAPE_ASCENDING_WEST;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_FALSE;
    registry[7459] = block;
  }

  { // ID: 7460
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_FALSE;
    block->shape = ActivatorRailBlock::SHAPE_ASCENDING_NORTH;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_TRUE;
    registry[7460] = block;
  }

  { // ID: 7461
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_FALSE;
    block->shape = ActivatorRailBlock::SHAPE_ASCENDING_NORTH;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_FALSE;
    registry[7461] = block;
  }

  { // ID: 7462
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_FALSE;
    block->shape = ActivatorRailBlock::SHAPE_ASCENDING_SOUTH;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_TRUE;
    registry[7462] = block;
  }

  { // ID: 7463
    std::shared_ptr<ActivatorRailBlock> block = std::make_shared<ActivatorRailBlock>();
    block->powered = ActivatorRailBlock::POWERED_FALSE;
    block->shape = ActivatorRailBlock::SHAPE_ASCENDING_SOUTH;
    block->waterlogged = ActivatorRailBlock::WATERLOGGED_FALSE;
    registry[7463] = block;
  }

  { // ID: 8004
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_NORTH;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8004] = block;
  }

  { // ID: 8005
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_NORTH;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8005] = block;
  }

  { // ID: 8006
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_NORTH;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8006] = block;
  }

  { // ID: 8007
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_NORTH;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8007] = block;
  }

  { // ID: 8008
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_NORTH;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8008] = block;
  }

  { // ID: 8009
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_NORTH;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8009] = block;
  }

  { // ID: 8010
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_NORTH;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8010] = block;
  }

  { // ID: 8011
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_NORTH;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8011] = block;
  }

  { // ID: 8012
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_NORTH;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8012] = block;
  }

  { // ID: 8013
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_NORTH;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8013] = block;
  }

  { // ID: 8014
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_NORTH;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8014] = block;
  }

  { // ID: 8015
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_NORTH;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8015] = block;
  }

  { // ID: 8016
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_NORTH;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8016] = block;
  }

  { // ID: 8017
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_NORTH;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8017] = block;
  }

  { // ID: 8018
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_NORTH;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8018] = block;
  }

  { // ID: 8019
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_NORTH;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8019] = block;
  }

  { // ID: 8020
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_NORTH;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8020] = block;
  }

  { // ID: 8021
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_NORTH;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8021] = block;
  }

  { // ID: 8022
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_NORTH;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8022] = block;
  }

  { // ID: 8023
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_NORTH;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8023] = block;
  }

  { // ID: 8024
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_SOUTH;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8024] = block;
  }

  { // ID: 8025
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_SOUTH;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8025] = block;
  }

  { // ID: 8026
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_SOUTH;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8026] = block;
  }

  { // ID: 8027
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_SOUTH;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8027] = block;
  }

  { // ID: 8028
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_SOUTH;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8028] = block;
  }

  { // ID: 8029
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_SOUTH;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8029] = block;
  }

  { // ID: 8030
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_SOUTH;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8030] = block;
  }

  { // ID: 8031
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_SOUTH;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8031] = block;
  }

  { // ID: 8032
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_SOUTH;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8032] = block;
  }

  { // ID: 8033
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_SOUTH;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8033] = block;
  }

  { // ID: 8034
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_SOUTH;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8034] = block;
  }

  { // ID: 8035
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_SOUTH;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8035] = block;
  }

  { // ID: 8036
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_SOUTH;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8036] = block;
  }

  { // ID: 8037
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_SOUTH;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8037] = block;
  }

  { // ID: 8038
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_SOUTH;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8038] = block;
  }

  { // ID: 8039
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_SOUTH;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8039] = block;
  }

  { // ID: 8040
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_SOUTH;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8040] = block;
  }

  { // ID: 8041
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_SOUTH;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8041] = block;
  }

  { // ID: 8042
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_SOUTH;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8042] = block;
  }

  { // ID: 8043
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_SOUTH;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8043] = block;
  }

  { // ID: 8044
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_WEST;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8044] = block;
  }

  { // ID: 8045
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_WEST;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8045] = block;
  }

  { // ID: 8046
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_WEST;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8046] = block;
  }

  { // ID: 8047
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_WEST;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8047] = block;
  }

  { // ID: 8048
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_WEST;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8048] = block;
  }

  { // ID: 8049
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_WEST;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8049] = block;
  }

  { // ID: 8050
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_WEST;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8050] = block;
  }

  { // ID: 8051
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_WEST;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8051] = block;
  }

  { // ID: 8052
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_WEST;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8052] = block;
  }

  { // ID: 8053
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_WEST;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8053] = block;
  }

  { // ID: 8054
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_WEST;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8054] = block;
  }

  { // ID: 8055
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_WEST;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8055] = block;
  }

  { // ID: 8056
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_WEST;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8056] = block;
  }

  { // ID: 8057
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_WEST;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8057] = block;
  }

  { // ID: 8058
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_WEST;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8058] = block;
  }

  { // ID: 8059
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_WEST;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8059] = block;
  }

  { // ID: 8060
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_WEST;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8060] = block;
  }

  { // ID: 8061
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_WEST;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8061] = block;
  }

  { // ID: 8062
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_WEST;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8062] = block;
  }

  { // ID: 8063
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_WEST;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8063] = block;
  }

  { // ID: 8064
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_EAST;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8064] = block;
  }

  { // ID: 8065
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_EAST;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8065] = block;
  }

  { // ID: 8066
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_EAST;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8066] = block;
  }

  { // ID: 8067
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_EAST;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8067] = block;
  }

  { // ID: 8068
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_EAST;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8068] = block;
  }

  { // ID: 8069
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_EAST;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8069] = block;
  }

  { // ID: 8070
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_EAST;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8070] = block;
  }

  { // ID: 8071
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_EAST;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8071] = block;
  }

  { // ID: 8072
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_EAST;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8072] = block;
  }

  { // ID: 8073
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_EAST;
    block->half = AcaciaStairsBlock::HALF_TOP;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8073] = block;
  }

  { // ID: 8074
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_EAST;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8074] = block;
  }

  { // ID: 8075
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_EAST;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8075] = block;
  }

  { // ID: 8076
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_EAST;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8076] = block;
  }

  { // ID: 8077
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_EAST;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8077] = block;
  }

  { // ID: 8078
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_EAST;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8078] = block;
  }

  { // ID: 8079
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_EAST;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8079] = block;
  }

  { // ID: 8080
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_EAST;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8080] = block;
  }

  { // ID: 8081
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_EAST;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8081] = block;
  }

  { // ID: 8082
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_EAST;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_TRUE;
    registry[8082] = block;
  }

  { // ID: 8083
    std::shared_ptr<AcaciaStairsBlock> block = std::make_shared<AcaciaStairsBlock>();
    block->facing = AcaciaStairsBlock::FACING_EAST;
    block->half = AcaciaStairsBlock::HALF_BOTTOM;
    block->shape = AcaciaStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AcaciaStairsBlock::WATERLOGGED_FALSE;
    registry[8083] = block;
  }

  { // ID: 9065
    std::shared_ptr<AcaciaSlabBlock> block = std::make_shared<AcaciaSlabBlock>();
    block->type = AcaciaSlabBlock::TYPE_TOP;
    block->waterlogged = AcaciaSlabBlock::WATERLOGGED_TRUE;
    registry[9065] = block;
  }

  { // ID: 9066
    std::shared_ptr<AcaciaSlabBlock> block = std::make_shared<AcaciaSlabBlock>();
    block->type = AcaciaSlabBlock::TYPE_TOP;
    block->waterlogged = AcaciaSlabBlock::WATERLOGGED_FALSE;
    registry[9066] = block;
  }

  { // ID: 9067
    std::shared_ptr<AcaciaSlabBlock> block = std::make_shared<AcaciaSlabBlock>();
    block->type = AcaciaSlabBlock::TYPE_BOTTOM;
    block->waterlogged = AcaciaSlabBlock::WATERLOGGED_TRUE;
    registry[9067] = block;
  }

  { // ID: 9068
    std::shared_ptr<AcaciaSlabBlock> block = std::make_shared<AcaciaSlabBlock>();
    block->type = AcaciaSlabBlock::TYPE_BOTTOM;
    block->waterlogged = AcaciaSlabBlock::WATERLOGGED_FALSE;
    registry[9068] = block;
  }

  { // ID: 9069
    std::shared_ptr<AcaciaSlabBlock> block = std::make_shared<AcaciaSlabBlock>();
    block->type = AcaciaSlabBlock::TYPE_DOUBLE;
    block->waterlogged = AcaciaSlabBlock::WATERLOGGED_TRUE;
    registry[9069] = block;
  }

  { // ID: 9070
    std::shared_ptr<AcaciaSlabBlock> block = std::make_shared<AcaciaSlabBlock>();
    block->type = AcaciaSlabBlock::TYPE_DOUBLE;
    block->waterlogged = AcaciaSlabBlock::WATERLOGGED_FALSE;
    registry[9070] = block;
  }

  { // ID: 9267
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_NORTH;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_TRUE;
    block->open = AcaciaFenceGateBlock::OPEN_TRUE;
    block->powered = AcaciaFenceGateBlock::POWERED_TRUE;
    registry[9267] = block;
  }

  { // ID: 9268
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_NORTH;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_TRUE;
    block->open = AcaciaFenceGateBlock::OPEN_TRUE;
    block->powered = AcaciaFenceGateBlock::POWERED_FALSE;
    registry[9268] = block;
  }

  { // ID: 9269
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_NORTH;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_TRUE;
    block->open = AcaciaFenceGateBlock::OPEN_FALSE;
    block->powered = AcaciaFenceGateBlock::POWERED_TRUE;
    registry[9269] = block;
  }

  { // ID: 9270
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_NORTH;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_TRUE;
    block->open = AcaciaFenceGateBlock::OPEN_FALSE;
    block->powered = AcaciaFenceGateBlock::POWERED_FALSE;
    registry[9270] = block;
  }

  { // ID: 9271
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_NORTH;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_FALSE;
    block->open = AcaciaFenceGateBlock::OPEN_TRUE;
    block->powered = AcaciaFenceGateBlock::POWERED_TRUE;
    registry[9271] = block;
  }

  { // ID: 9272
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_NORTH;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_FALSE;
    block->open = AcaciaFenceGateBlock::OPEN_TRUE;
    block->powered = AcaciaFenceGateBlock::POWERED_FALSE;
    registry[9272] = block;
  }

  { // ID: 9273
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_NORTH;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_FALSE;
    block->open = AcaciaFenceGateBlock::OPEN_FALSE;
    block->powered = AcaciaFenceGateBlock::POWERED_TRUE;
    registry[9273] = block;
  }

  { // ID: 9274
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_NORTH;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_FALSE;
    block->open = AcaciaFenceGateBlock::OPEN_FALSE;
    block->powered = AcaciaFenceGateBlock::POWERED_FALSE;
    registry[9274] = block;
  }

  { // ID: 9275
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_SOUTH;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_TRUE;
    block->open = AcaciaFenceGateBlock::OPEN_TRUE;
    block->powered = AcaciaFenceGateBlock::POWERED_TRUE;
    registry[9275] = block;
  }

  { // ID: 9276
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_SOUTH;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_TRUE;
    block->open = AcaciaFenceGateBlock::OPEN_TRUE;
    block->powered = AcaciaFenceGateBlock::POWERED_FALSE;
    registry[9276] = block;
  }

  { // ID: 9277
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_SOUTH;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_TRUE;
    block->open = AcaciaFenceGateBlock::OPEN_FALSE;
    block->powered = AcaciaFenceGateBlock::POWERED_TRUE;
    registry[9277] = block;
  }

  { // ID: 9278
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_SOUTH;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_TRUE;
    block->open = AcaciaFenceGateBlock::OPEN_FALSE;
    block->powered = AcaciaFenceGateBlock::POWERED_FALSE;
    registry[9278] = block;
  }

  { // ID: 9279
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_SOUTH;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_FALSE;
    block->open = AcaciaFenceGateBlock::OPEN_TRUE;
    block->powered = AcaciaFenceGateBlock::POWERED_TRUE;
    registry[9279] = block;
  }

  { // ID: 9280
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_SOUTH;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_FALSE;
    block->open = AcaciaFenceGateBlock::OPEN_TRUE;
    block->powered = AcaciaFenceGateBlock::POWERED_FALSE;
    registry[9280] = block;
  }

  { // ID: 9281
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_SOUTH;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_FALSE;
    block->open = AcaciaFenceGateBlock::OPEN_FALSE;
    block->powered = AcaciaFenceGateBlock::POWERED_TRUE;
    registry[9281] = block;
  }

  { // ID: 9282
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_SOUTH;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_FALSE;
    block->open = AcaciaFenceGateBlock::OPEN_FALSE;
    block->powered = AcaciaFenceGateBlock::POWERED_FALSE;
    registry[9282] = block;
  }

  { // ID: 9283
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_WEST;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_TRUE;
    block->open = AcaciaFenceGateBlock::OPEN_TRUE;
    block->powered = AcaciaFenceGateBlock::POWERED_TRUE;
    registry[9283] = block;
  }

  { // ID: 9284
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_WEST;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_TRUE;
    block->open = AcaciaFenceGateBlock::OPEN_TRUE;
    block->powered = AcaciaFenceGateBlock::POWERED_FALSE;
    registry[9284] = block;
  }

  { // ID: 9285
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_WEST;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_TRUE;
    block->open = AcaciaFenceGateBlock::OPEN_FALSE;
    block->powered = AcaciaFenceGateBlock::POWERED_TRUE;
    registry[9285] = block;
  }

  { // ID: 9286
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_WEST;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_TRUE;
    block->open = AcaciaFenceGateBlock::OPEN_FALSE;
    block->powered = AcaciaFenceGateBlock::POWERED_FALSE;
    registry[9286] = block;
  }

  { // ID: 9287
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_WEST;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_FALSE;
    block->open = AcaciaFenceGateBlock::OPEN_TRUE;
    block->powered = AcaciaFenceGateBlock::POWERED_TRUE;
    registry[9287] = block;
  }

  { // ID: 9288
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_WEST;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_FALSE;
    block->open = AcaciaFenceGateBlock::OPEN_TRUE;
    block->powered = AcaciaFenceGateBlock::POWERED_FALSE;
    registry[9288] = block;
  }

  { // ID: 9289
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_WEST;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_FALSE;
    block->open = AcaciaFenceGateBlock::OPEN_FALSE;
    block->powered = AcaciaFenceGateBlock::POWERED_TRUE;
    registry[9289] = block;
  }

  { // ID: 9290
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_WEST;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_FALSE;
    block->open = AcaciaFenceGateBlock::OPEN_FALSE;
    block->powered = AcaciaFenceGateBlock::POWERED_FALSE;
    registry[9290] = block;
  }

  { // ID: 9291
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_EAST;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_TRUE;
    block->open = AcaciaFenceGateBlock::OPEN_TRUE;
    block->powered = AcaciaFenceGateBlock::POWERED_TRUE;
    registry[9291] = block;
  }

  { // ID: 9292
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_EAST;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_TRUE;
    block->open = AcaciaFenceGateBlock::OPEN_TRUE;
    block->powered = AcaciaFenceGateBlock::POWERED_FALSE;
    registry[9292] = block;
  }

  { // ID: 9293
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_EAST;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_TRUE;
    block->open = AcaciaFenceGateBlock::OPEN_FALSE;
    block->powered = AcaciaFenceGateBlock::POWERED_TRUE;
    registry[9293] = block;
  }

  { // ID: 9294
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_EAST;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_TRUE;
    block->open = AcaciaFenceGateBlock::OPEN_FALSE;
    block->powered = AcaciaFenceGateBlock::POWERED_FALSE;
    registry[9294] = block;
  }

  { // ID: 9295
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_EAST;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_FALSE;
    block->open = AcaciaFenceGateBlock::OPEN_TRUE;
    block->powered = AcaciaFenceGateBlock::POWERED_TRUE;
    registry[9295] = block;
  }

  { // ID: 9296
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_EAST;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_FALSE;
    block->open = AcaciaFenceGateBlock::OPEN_TRUE;
    block->powered = AcaciaFenceGateBlock::POWERED_FALSE;
    registry[9296] = block;
  }

  { // ID: 9297
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_EAST;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_FALSE;
    block->open = AcaciaFenceGateBlock::OPEN_FALSE;
    block->powered = AcaciaFenceGateBlock::POWERED_TRUE;
    registry[9297] = block;
  }

  { // ID: 9298
    std::shared_ptr<AcaciaFenceGateBlock> block = std::make_shared<AcaciaFenceGateBlock>();
    block->facing = AcaciaFenceGateBlock::FACING_EAST;
    block->in_wall = AcaciaFenceGateBlock::IN_WALL_FALSE;
    block->open = AcaciaFenceGateBlock::OPEN_FALSE;
    block->powered = AcaciaFenceGateBlock::POWERED_FALSE;
    registry[9298] = block;
  }

  { // ID: 9459
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_TRUE;
    block->north = AcaciaFenceBlock::NORTH_TRUE;
    block->south = AcaciaFenceBlock::SOUTH_TRUE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_TRUE;
    block->west = AcaciaFenceBlock::WEST_TRUE;
    registry[9459] = block;
  }

  { // ID: 9460
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_TRUE;
    block->north = AcaciaFenceBlock::NORTH_TRUE;
    block->south = AcaciaFenceBlock::SOUTH_TRUE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_TRUE;
    block->west = AcaciaFenceBlock::WEST_FALSE;
    registry[9460] = block;
  }

  { // ID: 9461
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_TRUE;
    block->north = AcaciaFenceBlock::NORTH_TRUE;
    block->south = AcaciaFenceBlock::SOUTH_TRUE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_FALSE;
    block->west = AcaciaFenceBlock::WEST_TRUE;
    registry[9461] = block;
  }

  { // ID: 9462
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_TRUE;
    block->north = AcaciaFenceBlock::NORTH_TRUE;
    block->south = AcaciaFenceBlock::SOUTH_TRUE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_FALSE;
    block->west = AcaciaFenceBlock::WEST_FALSE;
    registry[9462] = block;
  }

  { // ID: 9463
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_TRUE;
    block->north = AcaciaFenceBlock::NORTH_TRUE;
    block->south = AcaciaFenceBlock::SOUTH_FALSE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_TRUE;
    block->west = AcaciaFenceBlock::WEST_TRUE;
    registry[9463] = block;
  }

  { // ID: 9464
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_TRUE;
    block->north = AcaciaFenceBlock::NORTH_TRUE;
    block->south = AcaciaFenceBlock::SOUTH_FALSE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_TRUE;
    block->west = AcaciaFenceBlock::WEST_FALSE;
    registry[9464] = block;
  }

  { // ID: 9465
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_TRUE;
    block->north = AcaciaFenceBlock::NORTH_TRUE;
    block->south = AcaciaFenceBlock::SOUTH_FALSE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_FALSE;
    block->west = AcaciaFenceBlock::WEST_TRUE;
    registry[9465] = block;
  }

  { // ID: 9466
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_TRUE;
    block->north = AcaciaFenceBlock::NORTH_TRUE;
    block->south = AcaciaFenceBlock::SOUTH_FALSE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_FALSE;
    block->west = AcaciaFenceBlock::WEST_FALSE;
    registry[9466] = block;
  }

  { // ID: 9467
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_TRUE;
    block->north = AcaciaFenceBlock::NORTH_FALSE;
    block->south = AcaciaFenceBlock::SOUTH_TRUE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_TRUE;
    block->west = AcaciaFenceBlock::WEST_TRUE;
    registry[9467] = block;
  }

  { // ID: 9468
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_TRUE;
    block->north = AcaciaFenceBlock::NORTH_FALSE;
    block->south = AcaciaFenceBlock::SOUTH_TRUE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_TRUE;
    block->west = AcaciaFenceBlock::WEST_FALSE;
    registry[9468] = block;
  }

  { // ID: 9469
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_TRUE;
    block->north = AcaciaFenceBlock::NORTH_FALSE;
    block->south = AcaciaFenceBlock::SOUTH_TRUE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_FALSE;
    block->west = AcaciaFenceBlock::WEST_TRUE;
    registry[9469] = block;
  }

  { // ID: 9470
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_TRUE;
    block->north = AcaciaFenceBlock::NORTH_FALSE;
    block->south = AcaciaFenceBlock::SOUTH_TRUE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_FALSE;
    block->west = AcaciaFenceBlock::WEST_FALSE;
    registry[9470] = block;
  }

  { // ID: 9471
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_TRUE;
    block->north = AcaciaFenceBlock::NORTH_FALSE;
    block->south = AcaciaFenceBlock::SOUTH_FALSE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_TRUE;
    block->west = AcaciaFenceBlock::WEST_TRUE;
    registry[9471] = block;
  }

  { // ID: 9472
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_TRUE;
    block->north = AcaciaFenceBlock::NORTH_FALSE;
    block->south = AcaciaFenceBlock::SOUTH_FALSE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_TRUE;
    block->west = AcaciaFenceBlock::WEST_FALSE;
    registry[9472] = block;
  }

  { // ID: 9473
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_TRUE;
    block->north = AcaciaFenceBlock::NORTH_FALSE;
    block->south = AcaciaFenceBlock::SOUTH_FALSE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_FALSE;
    block->west = AcaciaFenceBlock::WEST_TRUE;
    registry[9473] = block;
  }

  { // ID: 9474
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_TRUE;
    block->north = AcaciaFenceBlock::NORTH_FALSE;
    block->south = AcaciaFenceBlock::SOUTH_FALSE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_FALSE;
    block->west = AcaciaFenceBlock::WEST_FALSE;
    registry[9474] = block;
  }

  { // ID: 9475
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_FALSE;
    block->north = AcaciaFenceBlock::NORTH_TRUE;
    block->south = AcaciaFenceBlock::SOUTH_TRUE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_TRUE;
    block->west = AcaciaFenceBlock::WEST_TRUE;
    registry[9475] = block;
  }

  { // ID: 9476
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_FALSE;
    block->north = AcaciaFenceBlock::NORTH_TRUE;
    block->south = AcaciaFenceBlock::SOUTH_TRUE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_TRUE;
    block->west = AcaciaFenceBlock::WEST_FALSE;
    registry[9476] = block;
  }

  { // ID: 9477
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_FALSE;
    block->north = AcaciaFenceBlock::NORTH_TRUE;
    block->south = AcaciaFenceBlock::SOUTH_TRUE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_FALSE;
    block->west = AcaciaFenceBlock::WEST_TRUE;
    registry[9477] = block;
  }

  { // ID: 9478
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_FALSE;
    block->north = AcaciaFenceBlock::NORTH_TRUE;
    block->south = AcaciaFenceBlock::SOUTH_TRUE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_FALSE;
    block->west = AcaciaFenceBlock::WEST_FALSE;
    registry[9478] = block;
  }

  { // ID: 9479
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_FALSE;
    block->north = AcaciaFenceBlock::NORTH_TRUE;
    block->south = AcaciaFenceBlock::SOUTH_FALSE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_TRUE;
    block->west = AcaciaFenceBlock::WEST_TRUE;
    registry[9479] = block;
  }

  { // ID: 9480
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_FALSE;
    block->north = AcaciaFenceBlock::NORTH_TRUE;
    block->south = AcaciaFenceBlock::SOUTH_FALSE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_TRUE;
    block->west = AcaciaFenceBlock::WEST_FALSE;
    registry[9480] = block;
  }

  { // ID: 9481
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_FALSE;
    block->north = AcaciaFenceBlock::NORTH_TRUE;
    block->south = AcaciaFenceBlock::SOUTH_FALSE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_FALSE;
    block->west = AcaciaFenceBlock::WEST_TRUE;
    registry[9481] = block;
  }

  { // ID: 9482
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_FALSE;
    block->north = AcaciaFenceBlock::NORTH_TRUE;
    block->south = AcaciaFenceBlock::SOUTH_FALSE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_FALSE;
    block->west = AcaciaFenceBlock::WEST_FALSE;
    registry[9482] = block;
  }

  { // ID: 9483
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_FALSE;
    block->north = AcaciaFenceBlock::NORTH_FALSE;
    block->south = AcaciaFenceBlock::SOUTH_TRUE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_TRUE;
    block->west = AcaciaFenceBlock::WEST_TRUE;
    registry[9483] = block;
  }

  { // ID: 9484
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_FALSE;
    block->north = AcaciaFenceBlock::NORTH_FALSE;
    block->south = AcaciaFenceBlock::SOUTH_TRUE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_TRUE;
    block->west = AcaciaFenceBlock::WEST_FALSE;
    registry[9484] = block;
  }

  { // ID: 9485
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_FALSE;
    block->north = AcaciaFenceBlock::NORTH_FALSE;
    block->south = AcaciaFenceBlock::SOUTH_TRUE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_FALSE;
    block->west = AcaciaFenceBlock::WEST_TRUE;
    registry[9485] = block;
  }

  { // ID: 9486
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_FALSE;
    block->north = AcaciaFenceBlock::NORTH_FALSE;
    block->south = AcaciaFenceBlock::SOUTH_TRUE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_FALSE;
    block->west = AcaciaFenceBlock::WEST_FALSE;
    registry[9486] = block;
  }

  { // ID: 9487
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_FALSE;
    block->north = AcaciaFenceBlock::NORTH_FALSE;
    block->south = AcaciaFenceBlock::SOUTH_FALSE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_TRUE;
    block->west = AcaciaFenceBlock::WEST_TRUE;
    registry[9487] = block;
  }

  { // ID: 9488
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_FALSE;
    block->north = AcaciaFenceBlock::NORTH_FALSE;
    block->south = AcaciaFenceBlock::SOUTH_FALSE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_TRUE;
    block->west = AcaciaFenceBlock::WEST_FALSE;
    registry[9488] = block;
  }

  { // ID: 9489
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_FALSE;
    block->north = AcaciaFenceBlock::NORTH_FALSE;
    block->south = AcaciaFenceBlock::SOUTH_FALSE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_FALSE;
    block->west = AcaciaFenceBlock::WEST_TRUE;
    registry[9489] = block;
  }

  { // ID: 9490
    std::shared_ptr<AcaciaFenceBlock> block = std::make_shared<AcaciaFenceBlock>();
    block->east = AcaciaFenceBlock::EAST_FALSE;
    block->north = AcaciaFenceBlock::NORTH_FALSE;
    block->south = AcaciaFenceBlock::SOUTH_FALSE;
    block->waterlogged = AcaciaFenceBlock::WATERLOGGED_FALSE;
    block->west = AcaciaFenceBlock::WEST_FALSE;
    registry[9490] = block;
  }

  { // ID: 9747
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_NORTH;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9747] = block;
  }

  { // ID: 9748
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_NORTH;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9748] = block;
  }

  { // ID: 9749
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_NORTH;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9749] = block;
  }

  { // ID: 9750
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_NORTH;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9750] = block;
  }

  { // ID: 9751
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_NORTH;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9751] = block;
  }

  { // ID: 9752
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_NORTH;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9752] = block;
  }

  { // ID: 9753
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_NORTH;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9753] = block;
  }

  { // ID: 9754
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_NORTH;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9754] = block;
  }

  { // ID: 9755
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_NORTH;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9755] = block;
  }

  { // ID: 9756
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_NORTH;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9756] = block;
  }

  { // ID: 9757
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_NORTH;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9757] = block;
  }

  { // ID: 9758
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_NORTH;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9758] = block;
  }

  { // ID: 9759
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_NORTH;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9759] = block;
  }

  { // ID: 9760
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_NORTH;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9760] = block;
  }

  { // ID: 9761
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_NORTH;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9761] = block;
  }

  { // ID: 9762
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_NORTH;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9762] = block;
  }

  { // ID: 9763
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_SOUTH;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9763] = block;
  }

  { // ID: 9764
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_SOUTH;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9764] = block;
  }

  { // ID: 9765
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_SOUTH;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9765] = block;
  }

  { // ID: 9766
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_SOUTH;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9766] = block;
  }

  { // ID: 9767
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_SOUTH;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9767] = block;
  }

  { // ID: 9768
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_SOUTH;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9768] = block;
  }

  { // ID: 9769
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_SOUTH;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9769] = block;
  }

  { // ID: 9770
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_SOUTH;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9770] = block;
  }

  { // ID: 9771
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_SOUTH;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9771] = block;
  }

  { // ID: 9772
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_SOUTH;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9772] = block;
  }

  { // ID: 9773
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_SOUTH;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9773] = block;
  }

  { // ID: 9774
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_SOUTH;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9774] = block;
  }

  { // ID: 9775
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_SOUTH;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9775] = block;
  }

  { // ID: 9776
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_SOUTH;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9776] = block;
  }

  { // ID: 9777
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_SOUTH;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9777] = block;
  }

  { // ID: 9778
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_SOUTH;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9778] = block;
  }

  { // ID: 9779
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_WEST;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9779] = block;
  }

  { // ID: 9780
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_WEST;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9780] = block;
  }

  { // ID: 9781
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_WEST;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9781] = block;
  }

  { // ID: 9782
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_WEST;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9782] = block;
  }

  { // ID: 9783
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_WEST;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9783] = block;
  }

  { // ID: 9784
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_WEST;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9784] = block;
  }

  { // ID: 9785
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_WEST;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9785] = block;
  }

  { // ID: 9786
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_WEST;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9786] = block;
  }

  { // ID: 9787
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_WEST;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9787] = block;
  }

  { // ID: 9788
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_WEST;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9788] = block;
  }

  { // ID: 9789
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_WEST;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9789] = block;
  }

  { // ID: 9790
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_WEST;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9790] = block;
  }

  { // ID: 9791
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_WEST;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9791] = block;
  }

  { // ID: 9792
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_WEST;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9792] = block;
  }

  { // ID: 9793
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_WEST;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9793] = block;
  }

  { // ID: 9794
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_WEST;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9794] = block;
  }

  { // ID: 9795
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_EAST;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9795] = block;
  }

  { // ID: 9796
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_EAST;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9796] = block;
  }

  { // ID: 9797
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_EAST;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9797] = block;
  }

  { // ID: 9798
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_EAST;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9798] = block;
  }

  { // ID: 9799
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_EAST;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9799] = block;
  }

  { // ID: 9800
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_EAST;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9800] = block;
  }

  { // ID: 9801
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_EAST;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9801] = block;
  }

  { // ID: 9802
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_EAST;
    block->half = AcaciaDoorBlock::HALF_UPPER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9802] = block;
  }

  { // ID: 9803
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_EAST;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9803] = block;
  }

  { // ID: 9804
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_EAST;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9804] = block;
  }

  { // ID: 9805
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_EAST;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9805] = block;
  }

  { // ID: 9806
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_EAST;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_LEFT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9806] = block;
  }

  { // ID: 9807
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_EAST;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9807] = block;
  }

  { // ID: 9808
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_EAST;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_TRUE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9808] = block;
  }

  { // ID: 9809
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_EAST;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_TRUE;
    registry[9809] = block;
  }

  { // ID: 9810
    std::shared_ptr<AcaciaDoorBlock> block = std::make_shared<AcaciaDoorBlock>();
    block->facing = AcaciaDoorBlock::FACING_EAST;
    block->half = AcaciaDoorBlock::HALF_LOWER;
    block->hinge = AcaciaDoorBlock::HINGE_RIGHT;
    block->open = AcaciaDoorBlock::OPEN_FALSE;
    block->powered = AcaciaDoorBlock::POWERED_FALSE;
    registry[9810] = block;
  }

  { // ID: 11350
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_NORTH;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11350] = block;
  }

  { // ID: 11351
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_NORTH;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11351] = block;
  }

  { // ID: 11352
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_NORTH;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11352] = block;
  }

  { // ID: 11353
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_NORTH;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11353] = block;
  }

  { // ID: 11354
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_NORTH;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11354] = block;
  }

  { // ID: 11355
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_NORTH;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11355] = block;
  }

  { // ID: 11356
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_NORTH;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11356] = block;
  }

  { // ID: 11357
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_NORTH;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11357] = block;
  }

  { // ID: 11358
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_NORTH;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11358] = block;
  }

  { // ID: 11359
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_NORTH;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11359] = block;
  }

  { // ID: 11360
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_NORTH;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11360] = block;
  }

  { // ID: 11361
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_NORTH;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11361] = block;
  }

  { // ID: 11362
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_NORTH;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11362] = block;
  }

  { // ID: 11363
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_NORTH;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11363] = block;
  }

  { // ID: 11364
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_NORTH;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11364] = block;
  }

  { // ID: 11365
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_NORTH;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11365] = block;
  }

  { // ID: 11366
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_NORTH;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11366] = block;
  }

  { // ID: 11367
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_NORTH;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11367] = block;
  }

  { // ID: 11368
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_NORTH;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11368] = block;
  }

  { // ID: 11369
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_NORTH;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11369] = block;
  }

  { // ID: 11370
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_SOUTH;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11370] = block;
  }

  { // ID: 11371
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_SOUTH;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11371] = block;
  }

  { // ID: 11372
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_SOUTH;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11372] = block;
  }

  { // ID: 11373
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_SOUTH;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11373] = block;
  }

  { // ID: 11374
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_SOUTH;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11374] = block;
  }

  { // ID: 11375
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_SOUTH;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11375] = block;
  }

  { // ID: 11376
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_SOUTH;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11376] = block;
  }

  { // ID: 11377
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_SOUTH;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11377] = block;
  }

  { // ID: 11378
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_SOUTH;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11378] = block;
  }

  { // ID: 11379
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_SOUTH;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11379] = block;
  }

  { // ID: 11380
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_SOUTH;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11380] = block;
  }

  { // ID: 11381
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_SOUTH;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11381] = block;
  }

  { // ID: 11382
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_SOUTH;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11382] = block;
  }

  { // ID: 11383
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_SOUTH;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11383] = block;
  }

  { // ID: 11384
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_SOUTH;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11384] = block;
  }

  { // ID: 11385
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_SOUTH;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11385] = block;
  }

  { // ID: 11386
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_SOUTH;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11386] = block;
  }

  { // ID: 11387
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_SOUTH;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11387] = block;
  }

  { // ID: 11388
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_SOUTH;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11388] = block;
  }

  { // ID: 11389
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_SOUTH;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11389] = block;
  }

  { // ID: 11390
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_WEST;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11390] = block;
  }

  { // ID: 11391
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_WEST;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11391] = block;
  }

  { // ID: 11392
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_WEST;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11392] = block;
  }

  { // ID: 11393
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_WEST;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11393] = block;
  }

  { // ID: 11394
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_WEST;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11394] = block;
  }

  { // ID: 11395
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_WEST;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11395] = block;
  }

  { // ID: 11396
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_WEST;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11396] = block;
  }

  { // ID: 11397
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_WEST;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11397] = block;
  }

  { // ID: 11398
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_WEST;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11398] = block;
  }

  { // ID: 11399
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_WEST;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11399] = block;
  }

  { // ID: 11400
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_WEST;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11400] = block;
  }

  { // ID: 11401
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_WEST;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11401] = block;
  }

  { // ID: 11402
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_WEST;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11402] = block;
  }

  { // ID: 11403
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_WEST;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11403] = block;
  }

  { // ID: 11404
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_WEST;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11404] = block;
  }

  { // ID: 11405
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_WEST;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11405] = block;
  }

  { // ID: 11406
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_WEST;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11406] = block;
  }

  { // ID: 11407
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_WEST;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11407] = block;
  }

  { // ID: 11408
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_WEST;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11408] = block;
  }

  { // ID: 11409
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_WEST;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11409] = block;
  }

  { // ID: 11410
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_EAST;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11410] = block;
  }

  { // ID: 11411
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_EAST;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11411] = block;
  }

  { // ID: 11412
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_EAST;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11412] = block;
  }

  { // ID: 11413
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_EAST;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11413] = block;
  }

  { // ID: 11414
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_EAST;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11414] = block;
  }

  { // ID: 11415
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_EAST;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11415] = block;
  }

  { // ID: 11416
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_EAST;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11416] = block;
  }

  { // ID: 11417
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_EAST;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11417] = block;
  }

  { // ID: 11418
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_EAST;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11418] = block;
  }

  { // ID: 11419
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_EAST;
    block->half = AndesiteStairsBlock::HALF_TOP;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11419] = block;
  }

  { // ID: 11420
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_EAST;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11420] = block;
  }

  { // ID: 11421
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_EAST;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11421] = block;
  }

  { // ID: 11422
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_EAST;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11422] = block;
  }

  { // ID: 11423
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_EAST;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11423] = block;
  }

  { // ID: 11424
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_EAST;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11424] = block;
  }

  { // ID: 11425
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_EAST;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11425] = block;
  }

  { // ID: 11426
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_EAST;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11426] = block;
  }

  { // ID: 11427
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_EAST;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11427] = block;
  }

  { // ID: 11428
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_EAST;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_TRUE;
    registry[11428] = block;
  }

  { // ID: 11429
    std::shared_ptr<AndesiteStairsBlock> block = std::make_shared<AndesiteStairsBlock>();
    block->facing = AndesiteStairsBlock::FACING_EAST;
    block->half = AndesiteStairsBlock::HALF_BOTTOM;
    block->shape = AndesiteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = AndesiteStairsBlock::WATERLOGGED_FALSE;
    registry[11429] = block;
  }

  { // ID: 11724
    std::shared_ptr<AndesiteSlabBlock> block = std::make_shared<AndesiteSlabBlock>();
    block->type = AndesiteSlabBlock::TYPE_TOP;
    block->waterlogged = AndesiteSlabBlock::WATERLOGGED_TRUE;
    registry[11724] = block;
  }

  { // ID: 11725
    std::shared_ptr<AndesiteSlabBlock> block = std::make_shared<AndesiteSlabBlock>();
    block->type = AndesiteSlabBlock::TYPE_TOP;
    block->waterlogged = AndesiteSlabBlock::WATERLOGGED_FALSE;
    registry[11725] = block;
  }

  { // ID: 11726
    std::shared_ptr<AndesiteSlabBlock> block = std::make_shared<AndesiteSlabBlock>();
    block->type = AndesiteSlabBlock::TYPE_BOTTOM;
    block->waterlogged = AndesiteSlabBlock::WATERLOGGED_TRUE;
    registry[11726] = block;
  }

  { // ID: 11727
    std::shared_ptr<AndesiteSlabBlock> block = std::make_shared<AndesiteSlabBlock>();
    block->type = AndesiteSlabBlock::TYPE_BOTTOM;
    block->waterlogged = AndesiteSlabBlock::WATERLOGGED_FALSE;
    registry[11727] = block;
  }

  { // ID: 11728
    std::shared_ptr<AndesiteSlabBlock> block = std::make_shared<AndesiteSlabBlock>();
    block->type = AndesiteSlabBlock::TYPE_DOUBLE;
    block->waterlogged = AndesiteSlabBlock::WATERLOGGED_TRUE;
    registry[11728] = block;
  }

  { // ID: 11729
    std::shared_ptr<AndesiteSlabBlock> block = std::make_shared<AndesiteSlabBlock>();
    block->type = AndesiteSlabBlock::TYPE_DOUBLE;
    block->waterlogged = AndesiteSlabBlock::WATERLOGGED_FALSE;
    registry[11729] = block;
  }

  { // ID: 14340
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14340] = block;
  }

  { // ID: 14341
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14341] = block;
  }

  { // ID: 14342
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14342] = block;
  }

  { // ID: 14343
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14343] = block;
  }

  { // ID: 14344
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14344] = block;
  }

  { // ID: 14345
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14345] = block;
  }

  { // ID: 14346
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14346] = block;
  }

  { // ID: 14347
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14347] = block;
  }

  { // ID: 14348
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14348] = block;
  }

  { // ID: 14349
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14349] = block;
  }

  { // ID: 14350
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14350] = block;
  }

  { // ID: 14351
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14351] = block;
  }

  { // ID: 14352
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14352] = block;
  }

  { // ID: 14353
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14353] = block;
  }

  { // ID: 14354
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14354] = block;
  }

  { // ID: 14355
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14355] = block;
  }

  { // ID: 14356
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14356] = block;
  }

  { // ID: 14357
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14357] = block;
  }

  { // ID: 14358
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14358] = block;
  }

  { // ID: 14359
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14359] = block;
  }

  { // ID: 14360
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14360] = block;
  }

  { // ID: 14361
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14361] = block;
  }

  { // ID: 14362
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14362] = block;
  }

  { // ID: 14363
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14363] = block;
  }

  { // ID: 14364
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14364] = block;
  }

  { // ID: 14365
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14365] = block;
  }

  { // ID: 14366
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14366] = block;
  }

  { // ID: 14367
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14367] = block;
  }

  { // ID: 14368
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14368] = block;
  }

  { // ID: 14369
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14369] = block;
  }

  { // ID: 14370
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14370] = block;
  }

  { // ID: 14371
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14371] = block;
  }

  { // ID: 14372
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14372] = block;
  }

  { // ID: 14373
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14373] = block;
  }

  { // ID: 14374
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14374] = block;
  }

  { // ID: 14375
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14375] = block;
  }

  { // ID: 14376
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14376] = block;
  }

  { // ID: 14377
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14377] = block;
  }

  { // ID: 14378
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14378] = block;
  }

  { // ID: 14379
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14379] = block;
  }

  { // ID: 14380
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14380] = block;
  }

  { // ID: 14381
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14381] = block;
  }

  { // ID: 14382
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14382] = block;
  }

  { // ID: 14383
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14383] = block;
  }

  { // ID: 14384
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14384] = block;
  }

  { // ID: 14385
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14385] = block;
  }

  { // ID: 14386
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14386] = block;
  }

  { // ID: 14387
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14387] = block;
  }

  { // ID: 14388
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14388] = block;
  }

  { // ID: 14389
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14389] = block;
  }

  { // ID: 14390
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14390] = block;
  }

  { // ID: 14391
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14391] = block;
  }

  { // ID: 14392
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14392] = block;
  }

  { // ID: 14393
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14393] = block;
  }

  { // ID: 14394
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14394] = block;
  }

  { // ID: 14395
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14395] = block;
  }

  { // ID: 14396
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14396] = block;
  }

  { // ID: 14397
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14397] = block;
  }

  { // ID: 14398
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14398] = block;
  }

  { // ID: 14399
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14399] = block;
  }

  { // ID: 14400
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14400] = block;
  }

  { // ID: 14401
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14401] = block;
  }

  { // ID: 14402
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14402] = block;
  }

  { // ID: 14403
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14403] = block;
  }

  { // ID: 14404
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14404] = block;
  }

  { // ID: 14405
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14405] = block;
  }

  { // ID: 14406
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14406] = block;
  }

  { // ID: 14407
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14407] = block;
  }

  { // ID: 14408
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14408] = block;
  }

  { // ID: 14409
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14409] = block;
  }

  { // ID: 14410
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14410] = block;
  }

  { // ID: 14411
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14411] = block;
  }

  { // ID: 14412
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14412] = block;
  }

  { // ID: 14413
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14413] = block;
  }

  { // ID: 14414
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14414] = block;
  }

  { // ID: 14415
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14415] = block;
  }

  { // ID: 14416
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14416] = block;
  }

  { // ID: 14417
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14417] = block;
  }

  { // ID: 14418
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14418] = block;
  }

  { // ID: 14419
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14419] = block;
  }

  { // ID: 14420
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14420] = block;
  }

  { // ID: 14421
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14421] = block;
  }

  { // ID: 14422
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14422] = block;
  }

  { // ID: 14423
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14423] = block;
  }

  { // ID: 14424
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14424] = block;
  }

  { // ID: 14425
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14425] = block;
  }

  { // ID: 14426
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14426] = block;
  }

  { // ID: 14427
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14427] = block;
  }

  { // ID: 14428
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14428] = block;
  }

  { // ID: 14429
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14429] = block;
  }

  { // ID: 14430
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14430] = block;
  }

  { // ID: 14431
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14431] = block;
  }

  { // ID: 14432
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14432] = block;
  }

  { // ID: 14433
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14433] = block;
  }

  { // ID: 14434
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14434] = block;
  }

  { // ID: 14435
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14435] = block;
  }

  { // ID: 14436
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14436] = block;
  }

  { // ID: 14437
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14437] = block;
  }

  { // ID: 14438
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14438] = block;
  }

  { // ID: 14439
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14439] = block;
  }

  { // ID: 14440
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14440] = block;
  }

  { // ID: 14441
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14441] = block;
  }

  { // ID: 14442
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14442] = block;
  }

  { // ID: 14443
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14443] = block;
  }

  { // ID: 14444
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14444] = block;
  }

  { // ID: 14445
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14445] = block;
  }

  { // ID: 14446
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14446] = block;
  }

  { // ID: 14447
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_NONE;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14447] = block;
  }

  { // ID: 14448
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14448] = block;
  }

  { // ID: 14449
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14449] = block;
  }

  { // ID: 14450
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14450] = block;
  }

  { // ID: 14451
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14451] = block;
  }

  { // ID: 14452
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14452] = block;
  }

  { // ID: 14453
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14453] = block;
  }

  { // ID: 14454
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14454] = block;
  }

  { // ID: 14455
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14455] = block;
  }

  { // ID: 14456
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14456] = block;
  }

  { // ID: 14457
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14457] = block;
  }

  { // ID: 14458
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14458] = block;
  }

  { // ID: 14459
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14459] = block;
  }

  { // ID: 14460
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14460] = block;
  }

  { // ID: 14461
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14461] = block;
  }

  { // ID: 14462
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14462] = block;
  }

  { // ID: 14463
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14463] = block;
  }

  { // ID: 14464
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14464] = block;
  }

  { // ID: 14465
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14465] = block;
  }

  { // ID: 14466
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14466] = block;
  }

  { // ID: 14467
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14467] = block;
  }

  { // ID: 14468
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14468] = block;
  }

  { // ID: 14469
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14469] = block;
  }

  { // ID: 14470
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14470] = block;
  }

  { // ID: 14471
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14471] = block;
  }

  { // ID: 14472
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14472] = block;
  }

  { // ID: 14473
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14473] = block;
  }

  { // ID: 14474
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14474] = block;
  }

  { // ID: 14475
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14475] = block;
  }

  { // ID: 14476
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14476] = block;
  }

  { // ID: 14477
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14477] = block;
  }

  { // ID: 14478
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14478] = block;
  }

  { // ID: 14479
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14479] = block;
  }

  { // ID: 14480
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14480] = block;
  }

  { // ID: 14481
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14481] = block;
  }

  { // ID: 14482
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14482] = block;
  }

  { // ID: 14483
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14483] = block;
  }

  { // ID: 14484
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14484] = block;
  }

  { // ID: 14485
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14485] = block;
  }

  { // ID: 14486
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14486] = block;
  }

  { // ID: 14487
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14487] = block;
  }

  { // ID: 14488
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14488] = block;
  }

  { // ID: 14489
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14489] = block;
  }

  { // ID: 14490
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14490] = block;
  }

  { // ID: 14491
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14491] = block;
  }

  { // ID: 14492
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14492] = block;
  }

  { // ID: 14493
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14493] = block;
  }

  { // ID: 14494
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14494] = block;
  }

  { // ID: 14495
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14495] = block;
  }

  { // ID: 14496
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14496] = block;
  }

  { // ID: 14497
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14497] = block;
  }

  { // ID: 14498
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14498] = block;
  }

  { // ID: 14499
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14499] = block;
  }

  { // ID: 14500
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14500] = block;
  }

  { // ID: 14501
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14501] = block;
  }

  { // ID: 14502
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14502] = block;
  }

  { // ID: 14503
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14503] = block;
  }

  { // ID: 14504
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14504] = block;
  }

  { // ID: 14505
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14505] = block;
  }

  { // ID: 14506
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14506] = block;
  }

  { // ID: 14507
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14507] = block;
  }

  { // ID: 14508
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14508] = block;
  }

  { // ID: 14509
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14509] = block;
  }

  { // ID: 14510
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14510] = block;
  }

  { // ID: 14511
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14511] = block;
  }

  { // ID: 14512
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14512] = block;
  }

  { // ID: 14513
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14513] = block;
  }

  { // ID: 14514
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14514] = block;
  }

  { // ID: 14515
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14515] = block;
  }

  { // ID: 14516
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14516] = block;
  }

  { // ID: 14517
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14517] = block;
  }

  { // ID: 14518
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14518] = block;
  }

  { // ID: 14519
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14519] = block;
  }

  { // ID: 14520
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14520] = block;
  }

  { // ID: 14521
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14521] = block;
  }

  { // ID: 14522
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14522] = block;
  }

  { // ID: 14523
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14523] = block;
  }

  { // ID: 14524
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14524] = block;
  }

  { // ID: 14525
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14525] = block;
  }

  { // ID: 14526
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14526] = block;
  }

  { // ID: 14527
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14527] = block;
  }

  { // ID: 14528
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14528] = block;
  }

  { // ID: 14529
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14529] = block;
  }

  { // ID: 14530
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14530] = block;
  }

  { // ID: 14531
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14531] = block;
  }

  { // ID: 14532
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14532] = block;
  }

  { // ID: 14533
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14533] = block;
  }

  { // ID: 14534
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14534] = block;
  }

  { // ID: 14535
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14535] = block;
  }

  { // ID: 14536
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14536] = block;
  }

  { // ID: 14537
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14537] = block;
  }

  { // ID: 14538
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14538] = block;
  }

  { // ID: 14539
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14539] = block;
  }

  { // ID: 14540
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14540] = block;
  }

  { // ID: 14541
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14541] = block;
  }

  { // ID: 14542
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14542] = block;
  }

  { // ID: 14543
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14543] = block;
  }

  { // ID: 14544
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14544] = block;
  }

  { // ID: 14545
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14545] = block;
  }

  { // ID: 14546
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14546] = block;
  }

  { // ID: 14547
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14547] = block;
  }

  { // ID: 14548
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14548] = block;
  }

  { // ID: 14549
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14549] = block;
  }

  { // ID: 14550
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14550] = block;
  }

  { // ID: 14551
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14551] = block;
  }

  { // ID: 14552
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14552] = block;
  }

  { // ID: 14553
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14553] = block;
  }

  { // ID: 14554
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14554] = block;
  }

  { // ID: 14555
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_LOW;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14555] = block;
  }

  { // ID: 14556
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14556] = block;
  }

  { // ID: 14557
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14557] = block;
  }

  { // ID: 14558
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14558] = block;
  }

  { // ID: 14559
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14559] = block;
  }

  { // ID: 14560
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14560] = block;
  }

  { // ID: 14561
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14561] = block;
  }

  { // ID: 14562
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14562] = block;
  }

  { // ID: 14563
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14563] = block;
  }

  { // ID: 14564
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14564] = block;
  }

  { // ID: 14565
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14565] = block;
  }

  { // ID: 14566
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14566] = block;
  }

  { // ID: 14567
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14567] = block;
  }

  { // ID: 14568
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14568] = block;
  }

  { // ID: 14569
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14569] = block;
  }

  { // ID: 14570
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14570] = block;
  }

  { // ID: 14571
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14571] = block;
  }

  { // ID: 14572
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14572] = block;
  }

  { // ID: 14573
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14573] = block;
  }

  { // ID: 14574
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14574] = block;
  }

  { // ID: 14575
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14575] = block;
  }

  { // ID: 14576
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14576] = block;
  }

  { // ID: 14577
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14577] = block;
  }

  { // ID: 14578
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14578] = block;
  }

  { // ID: 14579
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14579] = block;
  }

  { // ID: 14580
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14580] = block;
  }

  { // ID: 14581
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14581] = block;
  }

  { // ID: 14582
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14582] = block;
  }

  { // ID: 14583
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14583] = block;
  }

  { // ID: 14584
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14584] = block;
  }

  { // ID: 14585
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14585] = block;
  }

  { // ID: 14586
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14586] = block;
  }

  { // ID: 14587
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14587] = block;
  }

  { // ID: 14588
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14588] = block;
  }

  { // ID: 14589
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14589] = block;
  }

  { // ID: 14590
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14590] = block;
  }

  { // ID: 14591
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_NONE;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14591] = block;
  }

  { // ID: 14592
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14592] = block;
  }

  { // ID: 14593
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14593] = block;
  }

  { // ID: 14594
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14594] = block;
  }

  { // ID: 14595
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14595] = block;
  }

  { // ID: 14596
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14596] = block;
  }

  { // ID: 14597
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14597] = block;
  }

  { // ID: 14598
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14598] = block;
  }

  { // ID: 14599
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14599] = block;
  }

  { // ID: 14600
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14600] = block;
  }

  { // ID: 14601
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14601] = block;
  }

  { // ID: 14602
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14602] = block;
  }

  { // ID: 14603
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14603] = block;
  }

  { // ID: 14604
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14604] = block;
  }

  { // ID: 14605
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14605] = block;
  }

  { // ID: 14606
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14606] = block;
  }

  { // ID: 14607
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14607] = block;
  }

  { // ID: 14608
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14608] = block;
  }

  { // ID: 14609
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14609] = block;
  }

  { // ID: 14610
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14610] = block;
  }

  { // ID: 14611
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14611] = block;
  }

  { // ID: 14612
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14612] = block;
  }

  { // ID: 14613
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14613] = block;
  }

  { // ID: 14614
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14614] = block;
  }

  { // ID: 14615
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14615] = block;
  }

  { // ID: 14616
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14616] = block;
  }

  { // ID: 14617
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14617] = block;
  }

  { // ID: 14618
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14618] = block;
  }

  { // ID: 14619
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14619] = block;
  }

  { // ID: 14620
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14620] = block;
  }

  { // ID: 14621
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14621] = block;
  }

  { // ID: 14622
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14622] = block;
  }

  { // ID: 14623
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14623] = block;
  }

  { // ID: 14624
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14624] = block;
  }

  { // ID: 14625
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14625] = block;
  }

  { // ID: 14626
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14626] = block;
  }

  { // ID: 14627
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_LOW;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14627] = block;
  }

  { // ID: 14628
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14628] = block;
  }

  { // ID: 14629
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14629] = block;
  }

  { // ID: 14630
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14630] = block;
  }

  { // ID: 14631
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14631] = block;
  }

  { // ID: 14632
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14632] = block;
  }

  { // ID: 14633
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14633] = block;
  }

  { // ID: 14634
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14634] = block;
  }

  { // ID: 14635
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14635] = block;
  }

  { // ID: 14636
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14636] = block;
  }

  { // ID: 14637
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14637] = block;
  }

  { // ID: 14638
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14638] = block;
  }

  { // ID: 14639
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_NONE;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14639] = block;
  }

  { // ID: 14640
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14640] = block;
  }

  { // ID: 14641
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14641] = block;
  }

  { // ID: 14642
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14642] = block;
  }

  { // ID: 14643
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14643] = block;
  }

  { // ID: 14644
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14644] = block;
  }

  { // ID: 14645
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14645] = block;
  }

  { // ID: 14646
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14646] = block;
  }

  { // ID: 14647
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14647] = block;
  }

  { // ID: 14648
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14648] = block;
  }

  { // ID: 14649
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14649] = block;
  }

  { // ID: 14650
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14650] = block;
  }

  { // ID: 14651
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_LOW;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14651] = block;
  }

  { // ID: 14652
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14652] = block;
  }

  { // ID: 14653
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14653] = block;
  }

  { // ID: 14654
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14654] = block;
  }

  { // ID: 14655
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14655] = block;
  }

  { // ID: 14656
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14656] = block;
  }

  { // ID: 14657
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_TRUE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14657] = block;
  }

  { // ID: 14658
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14658] = block;
  }

  { // ID: 14659
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14659] = block;
  }

  { // ID: 14660
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_TRUE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14660] = block;
  }

  { // ID: 14661
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_NONE;
    registry[14661] = block;
  }

  { // ID: 14662
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_LOW;
    registry[14662] = block;
  }

  { // ID: 14663
    std::shared_ptr<AndesiteWallBlock> block = std::make_shared<AndesiteWallBlock>();
    block->east = AndesiteWallBlock::EAST_TALL;
    block->north = AndesiteWallBlock::NORTH_TALL;
    block->south = AndesiteWallBlock::SOUTH_TALL;
    block->up = AndesiteWallBlock::UP_FALSE;
    block->waterlogged = AndesiteWallBlock::WATERLOGGED_FALSE;
    block->west = AndesiteWallBlock::WEST_TALL;
    registry[14663] = block;
  }

  { // ID: 17036
    std::shared_ptr<AncientDebrisBlock> block = std::make_shared<AncientDebrisBlock>();
    registry[17036] = block;
  }

  { // ID: 18619
    std::shared_ptr<AmethystBlockBlock> block = std::make_shared<AmethystBlockBlock>();
    registry[18619] = block;
  }

  { // ID: 18621
    std::shared_ptr<AmethystClusterBlock> block = std::make_shared<AmethystClusterBlock>();
    block->facing = AmethystClusterBlock::FACING_NORTH;
    block->waterlogged = AmethystClusterBlock::WATERLOGGED_TRUE;
    registry[18621] = block;
  }

  { // ID: 18622
    std::shared_ptr<AmethystClusterBlock> block = std::make_shared<AmethystClusterBlock>();
    block->facing = AmethystClusterBlock::FACING_NORTH;
    block->waterlogged = AmethystClusterBlock::WATERLOGGED_FALSE;
    registry[18622] = block;
  }

  { // ID: 18623
    std::shared_ptr<AmethystClusterBlock> block = std::make_shared<AmethystClusterBlock>();
    block->facing = AmethystClusterBlock::FACING_EAST;
    block->waterlogged = AmethystClusterBlock::WATERLOGGED_TRUE;
    registry[18623] = block;
  }

  { // ID: 18624
    std::shared_ptr<AmethystClusterBlock> block = std::make_shared<AmethystClusterBlock>();
    block->facing = AmethystClusterBlock::FACING_EAST;
    block->waterlogged = AmethystClusterBlock::WATERLOGGED_FALSE;
    registry[18624] = block;
  }

  { // ID: 18625
    std::shared_ptr<AmethystClusterBlock> block = std::make_shared<AmethystClusterBlock>();
    block->facing = AmethystClusterBlock::FACING_SOUTH;
    block->waterlogged = AmethystClusterBlock::WATERLOGGED_TRUE;
    registry[18625] = block;
  }

  { // ID: 18626
    std::shared_ptr<AmethystClusterBlock> block = std::make_shared<AmethystClusterBlock>();
    block->facing = AmethystClusterBlock::FACING_SOUTH;
    block->waterlogged = AmethystClusterBlock::WATERLOGGED_FALSE;
    registry[18626] = block;
  }

  { // ID: 18627
    std::shared_ptr<AmethystClusterBlock> block = std::make_shared<AmethystClusterBlock>();
    block->facing = AmethystClusterBlock::FACING_WEST;
    block->waterlogged = AmethystClusterBlock::WATERLOGGED_TRUE;
    registry[18627] = block;
  }

  { // ID: 18628
    std::shared_ptr<AmethystClusterBlock> block = std::make_shared<AmethystClusterBlock>();
    block->facing = AmethystClusterBlock::FACING_WEST;
    block->waterlogged = AmethystClusterBlock::WATERLOGGED_FALSE;
    registry[18628] = block;
  }

  { // ID: 18629
    std::shared_ptr<AmethystClusterBlock> block = std::make_shared<AmethystClusterBlock>();
    block->facing = AmethystClusterBlock::FACING_UP;
    block->waterlogged = AmethystClusterBlock::WATERLOGGED_TRUE;
    registry[18629] = block;
  }

  { // ID: 18630
    std::shared_ptr<AmethystClusterBlock> block = std::make_shared<AmethystClusterBlock>();
    block->facing = AmethystClusterBlock::FACING_UP;
    block->waterlogged = AmethystClusterBlock::WATERLOGGED_FALSE;
    registry[18630] = block;
  }

  { // ID: 18631
    std::shared_ptr<AmethystClusterBlock> block = std::make_shared<AmethystClusterBlock>();
    block->facing = AmethystClusterBlock::FACING_DOWN;
    block->waterlogged = AmethystClusterBlock::WATERLOGGED_TRUE;
    registry[18631] = block;
  }

  { // ID: 18632
    std::shared_ptr<AmethystClusterBlock> block = std::make_shared<AmethystClusterBlock>();
    block->facing = AmethystClusterBlock::FACING_DOWN;
    block->waterlogged = AmethystClusterBlock::WATERLOGGED_FALSE;
    registry[18632] = block;
  }

  { // ID: 19714
    std::shared_ptr<AzaleaBlock> block = std::make_shared<AzaleaBlock>();
    registry[19714] = block;
  }
}