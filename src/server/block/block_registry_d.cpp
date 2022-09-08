/*
 * Mycelium
 * Copyright (C) 2022  JNNGL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#include "block_registry.h"

#include "damaged_anvil_block.h"
#include "dandelion_block.h"
#include "dark_oak_button_block.h"
#include "dark_oak_door_block.h"
#include "dark_oak_fence_block.h"
#include "dark_oak_fence_gate_block.h"
#include "dark_oak_leaves_block.h"
#include "dark_oak_log_block.h"
#include "dark_oak_planks_block.h"
#include "dark_oak_pressure_plate_block.h"
#include "dark_oak_sapling_block.h"
#include "dark_oak_sign_block.h"
#include "dark_oak_slab_block.h"
#include "dark_oak_stairs_block.h"
#include "dark_oak_trapdoor_block.h"
#include "dark_oak_wall_sign_block.h"
#include "dark_oak_wood_block.h"
#include "dark_prismarine_block.h"
#include "dark_prismarine_slab_block.h"
#include "dark_prismarine_stairs_block.h"
#include "daylight_detector_block.h"
#include "dead_brain_coral_block.h"
#include "dead_brain_coral_block_block.h"
#include "dead_brain_coral_fan_block.h"
#include "dead_brain_coral_wall_fan_block.h"
#include "dead_bubble_coral_block.h"
#include "dead_bubble_coral_block_block.h"
#include "dead_bubble_coral_fan_block.h"
#include "dead_bubble_coral_wall_fan_block.h"
#include "dead_bush_block.h"
#include "dead_fire_coral_block.h"
#include "dead_fire_coral_block_block.h"
#include "dead_fire_coral_fan_block.h"
#include "dead_fire_coral_wall_fan_block.h"
#include "dead_horn_coral_block.h"
#include "dead_horn_coral_block_block.h"
#include "dead_horn_coral_fan_block.h"
#include "dead_horn_coral_wall_fan_block.h"
#include "dead_tube_coral_block.h"
#include "dead_tube_coral_block_block.h"
#include "dead_tube_coral_fan_block.h"
#include "dead_tube_coral_wall_fan_block.h"
#include "deepslate_block.h"
#include "deepslate_brick_slab_block.h"
#include "deepslate_brick_stairs_block.h"
#include "deepslate_brick_wall_block.h"
#include "deepslate_bricks_block.h"
#include "deepslate_coal_ore_block.h"
#include "deepslate_copper_ore_block.h"
#include "deepslate_diamond_ore_block.h"
#include "deepslate_emerald_ore_block.h"
#include "deepslate_gold_ore_block.h"
#include "deepslate_iron_ore_block.h"
#include "deepslate_lapis_ore_block.h"
#include "deepslate_redstone_ore_block.h"
#include "deepslate_tile_slab_block.h"
#include "deepslate_tile_stairs_block.h"
#include "deepslate_tile_wall_block.h"
#include "deepslate_tiles_block.h"
#include "detector_rail_block.h"
#include "diamond_block_block.h"
#include "diamond_ore_block.h"
#include "diorite_block.h"
#include "diorite_slab_block.h"
#include "diorite_stairs_block.h"
#include "diorite_wall_block.h"
#include "dirt_block.h"
#include "dirt_path_block.h"
#include "dispenser_block.h"
#include "dragon_egg_block.h"
#include "dragon_head_block.h"
#include "dragon_wall_head_block.h"
#include "dried_kelp_block_block.h"
#include "dripstone_block_block.h"
#include "dropper_block.h"

void BlockRegistry::generateD() {

  { // ID: 4
    std::shared_ptr<DioriteBlock> block = std::make_shared<DioriteBlock>();
    registry[4] = block;
  }

  { // ID: 10
    std::shared_ptr<DirtBlock> block = std::make_shared<DirtBlock>();
    registry[10] = block;
  }

  { // ID: 20
    std::shared_ptr<DarkOakPlanksBlock> block = std::make_shared<DarkOakPlanksBlock>();
    registry[20] = block;
  }

  { // ID: 32
    std::shared_ptr<DarkOakSaplingBlock> block = std::make_shared<DarkOakSaplingBlock>();
    block->stage = DarkOakSaplingBlock::STAGE_0;
    registry[32] = block;
  }

  { // ID: 33
    std::shared_ptr<DarkOakSaplingBlock> block = std::make_shared<DarkOakSaplingBlock>();
    block->stage = DarkOakSaplingBlock::STAGE_1;
    registry[33] = block;
  }

  { // ID: 111
    std::shared_ptr<DeepslateGoldOreBlock> block = std::make_shared<DeepslateGoldOreBlock>();
    registry[111] = block;
  }

  { // ID: 113
    std::shared_ptr<DeepslateIronOreBlock> block = std::make_shared<DeepslateIronOreBlock>();
    registry[113] = block;
  }

  { // ID: 115
    std::shared_ptr<DeepslateCoalOreBlock> block = std::make_shared<DeepslateCoalOreBlock>();
    registry[115] = block;
  }

  { // ID: 132
    std::shared_ptr<DarkOakLogBlock> block = std::make_shared<DarkOakLogBlock>();
    block->axis = DarkOakLogBlock::AXIS_X;
    registry[132] = block;
  }

  { // ID: 133
    std::shared_ptr<DarkOakLogBlock> block = std::make_shared<DarkOakLogBlock>();
    block->axis = DarkOakLogBlock::AXIS_Y;
    registry[133] = block;
  }

  { // ID: 134
    std::shared_ptr<DarkOakLogBlock> block = std::make_shared<DarkOakLogBlock>();
    block->axis = DarkOakLogBlock::AXIS_Z;
    registry[134] = block;
  }

  { // ID: 179
    std::shared_ptr<DarkOakWoodBlock> block = std::make_shared<DarkOakWoodBlock>();
    block->axis = DarkOakWoodBlock::AXIS_X;
    registry[179] = block;
  }

  { // ID: 180
    std::shared_ptr<DarkOakWoodBlock> block = std::make_shared<DarkOakWoodBlock>();
    block->axis = DarkOakWoodBlock::AXIS_Y;
    registry[180] = block;
  }

  { // ID: 181
    std::shared_ptr<DarkOakWoodBlock> block = std::make_shared<DarkOakWoodBlock>();
    block->axis = DarkOakWoodBlock::AXIS_Z;
    registry[181] = block;
  }

  { // ID: 346
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_1;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_TRUE;
    registry[346] = block;
  }

  { // ID: 347
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_1;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_FALSE;
    registry[347] = block;
  }

  { // ID: 348
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_1;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_TRUE;
    registry[348] = block;
  }

  { // ID: 349
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_1;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_FALSE;
    registry[349] = block;
  }

  { // ID: 350
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_2;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_TRUE;
    registry[350] = block;
  }

  { // ID: 351
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_2;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_FALSE;
    registry[351] = block;
  }

  { // ID: 352
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_2;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_TRUE;
    registry[352] = block;
  }

  { // ID: 353
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_2;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_FALSE;
    registry[353] = block;
  }

  { // ID: 354
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_3;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_TRUE;
    registry[354] = block;
  }

  { // ID: 355
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_3;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_FALSE;
    registry[355] = block;
  }

  { // ID: 356
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_3;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_TRUE;
    registry[356] = block;
  }

  { // ID: 357
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_3;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_FALSE;
    registry[357] = block;
  }

  { // ID: 358
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_4;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_TRUE;
    registry[358] = block;
  }

  { // ID: 359
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_4;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_FALSE;
    registry[359] = block;
  }

  { // ID: 360
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_4;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_TRUE;
    registry[360] = block;
  }

  { // ID: 361
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_4;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_FALSE;
    registry[361] = block;
  }

  { // ID: 362
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_5;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_TRUE;
    registry[362] = block;
  }

  { // ID: 363
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_5;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_FALSE;
    registry[363] = block;
  }

  { // ID: 364
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_5;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_TRUE;
    registry[364] = block;
  }

  { // ID: 365
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_5;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_FALSE;
    registry[365] = block;
  }

  { // ID: 366
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_6;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_TRUE;
    registry[366] = block;
  }

  { // ID: 367
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_6;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_FALSE;
    registry[367] = block;
  }

  { // ID: 368
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_6;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_TRUE;
    registry[368] = block;
  }

  { // ID: 369
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_6;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_FALSE;
    registry[369] = block;
  }

  { // ID: 370
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_7;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_TRUE;
    registry[370] = block;
  }

  { // ID: 371
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_7;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_FALSE;
    registry[371] = block;
  }

  { // ID: 372
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_7;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_TRUE;
    registry[372] = block;
  }

  { // ID: 373
    std::shared_ptr<DarkOakLeavesBlock> block = std::make_shared<DarkOakLeavesBlock>();
    block->distance = DarkOakLeavesBlock::DISTANCE_7;
    block->persistent = DarkOakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = DarkOakLeavesBlock::WATERLOGGED_FALSE;
    registry[373] = block;
  }

  { // ID: 462
    std::shared_ptr<DeepslateLapisOreBlock> block = std::make_shared<DeepslateLapisOreBlock>();
    registry[462] = block;
  }

  { // ID: 464
    std::shared_ptr<DispenserBlock> block = std::make_shared<DispenserBlock>();
    block->facing = DispenserBlock::FACING_NORTH;
    block->triggered = DispenserBlock::TRIGGERED_TRUE;
    registry[464] = block;
  }

  { // ID: 465
    std::shared_ptr<DispenserBlock> block = std::make_shared<DispenserBlock>();
    block->facing = DispenserBlock::FACING_NORTH;
    block->triggered = DispenserBlock::TRIGGERED_FALSE;
    registry[465] = block;
  }

  { // ID: 466
    std::shared_ptr<DispenserBlock> block = std::make_shared<DispenserBlock>();
    block->facing = DispenserBlock::FACING_EAST;
    block->triggered = DispenserBlock::TRIGGERED_TRUE;
    registry[466] = block;
  }

  { // ID: 467
    std::shared_ptr<DispenserBlock> block = std::make_shared<DispenserBlock>();
    block->facing = DispenserBlock::FACING_EAST;
    block->triggered = DispenserBlock::TRIGGERED_FALSE;
    registry[467] = block;
  }

  { // ID: 468
    std::shared_ptr<DispenserBlock> block = std::make_shared<DispenserBlock>();
    block->facing = DispenserBlock::FACING_SOUTH;
    block->triggered = DispenserBlock::TRIGGERED_TRUE;
    registry[468] = block;
  }

  { // ID: 469
    std::shared_ptr<DispenserBlock> block = std::make_shared<DispenserBlock>();
    block->facing = DispenserBlock::FACING_SOUTH;
    block->triggered = DispenserBlock::TRIGGERED_FALSE;
    registry[469] = block;
  }

  { // ID: 470
    std::shared_ptr<DispenserBlock> block = std::make_shared<DispenserBlock>();
    block->facing = DispenserBlock::FACING_WEST;
    block->triggered = DispenserBlock::TRIGGERED_TRUE;
    registry[470] = block;
  }

  { // ID: 471
    std::shared_ptr<DispenserBlock> block = std::make_shared<DispenserBlock>();
    block->facing = DispenserBlock::FACING_WEST;
    block->triggered = DispenserBlock::TRIGGERED_FALSE;
    registry[471] = block;
  }

  { // ID: 472
    std::shared_ptr<DispenserBlock> block = std::make_shared<DispenserBlock>();
    block->facing = DispenserBlock::FACING_UP;
    block->triggered = DispenserBlock::TRIGGERED_TRUE;
    registry[472] = block;
  }

  { // ID: 473
    std::shared_ptr<DispenserBlock> block = std::make_shared<DispenserBlock>();
    block->facing = DispenserBlock::FACING_UP;
    block->triggered = DispenserBlock::TRIGGERED_FALSE;
    registry[473] = block;
  }

  { // ID: 474
    std::shared_ptr<DispenserBlock> block = std::make_shared<DispenserBlock>();
    block->facing = DispenserBlock::FACING_DOWN;
    block->triggered = DispenserBlock::TRIGGERED_TRUE;
    registry[474] = block;
  }

  { // ID: 475
    std::shared_ptr<DispenserBlock> block = std::make_shared<DispenserBlock>();
    block->facing = DispenserBlock::FACING_DOWN;
    block->triggered = DispenserBlock::TRIGGERED_FALSE;
    registry[475] = block;
  }

  { // ID: 1559
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_TRUE;
    block->shape = DetectorRailBlock::SHAPE_NORTH_SOUTH;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_TRUE;
    registry[1559] = block;
  }

  { // ID: 1560
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_TRUE;
    block->shape = DetectorRailBlock::SHAPE_NORTH_SOUTH;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_FALSE;
    registry[1560] = block;
  }

  { // ID: 1561
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_TRUE;
    block->shape = DetectorRailBlock::SHAPE_EAST_WEST;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_TRUE;
    registry[1561] = block;
  }

  { // ID: 1562
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_TRUE;
    block->shape = DetectorRailBlock::SHAPE_EAST_WEST;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_FALSE;
    registry[1562] = block;
  }

  { // ID: 1563
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_TRUE;
    block->shape = DetectorRailBlock::SHAPE_ASCENDING_EAST;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_TRUE;
    registry[1563] = block;
  }

  { // ID: 1564
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_TRUE;
    block->shape = DetectorRailBlock::SHAPE_ASCENDING_EAST;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_FALSE;
    registry[1564] = block;
  }

  { // ID: 1565
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_TRUE;
    block->shape = DetectorRailBlock::SHAPE_ASCENDING_WEST;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_TRUE;
    registry[1565] = block;
  }

  { // ID: 1566
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_TRUE;
    block->shape = DetectorRailBlock::SHAPE_ASCENDING_WEST;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_FALSE;
    registry[1566] = block;
  }

  { // ID: 1567
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_TRUE;
    block->shape = DetectorRailBlock::SHAPE_ASCENDING_NORTH;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_TRUE;
    registry[1567] = block;
  }

  { // ID: 1568
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_TRUE;
    block->shape = DetectorRailBlock::SHAPE_ASCENDING_NORTH;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_FALSE;
    registry[1568] = block;
  }

  { // ID: 1569
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_TRUE;
    block->shape = DetectorRailBlock::SHAPE_ASCENDING_SOUTH;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_TRUE;
    registry[1569] = block;
  }

  { // ID: 1570
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_TRUE;
    block->shape = DetectorRailBlock::SHAPE_ASCENDING_SOUTH;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_FALSE;
    registry[1570] = block;
  }

  { // ID: 1571
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_FALSE;
    block->shape = DetectorRailBlock::SHAPE_NORTH_SOUTH;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_TRUE;
    registry[1571] = block;
  }

  { // ID: 1572
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_FALSE;
    block->shape = DetectorRailBlock::SHAPE_NORTH_SOUTH;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_FALSE;
    registry[1572] = block;
  }

  { // ID: 1573
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_FALSE;
    block->shape = DetectorRailBlock::SHAPE_EAST_WEST;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_TRUE;
    registry[1573] = block;
  }

  { // ID: 1574
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_FALSE;
    block->shape = DetectorRailBlock::SHAPE_EAST_WEST;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_FALSE;
    registry[1574] = block;
  }

  { // ID: 1575
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_FALSE;
    block->shape = DetectorRailBlock::SHAPE_ASCENDING_EAST;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_TRUE;
    registry[1575] = block;
  }

  { // ID: 1576
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_FALSE;
    block->shape = DetectorRailBlock::SHAPE_ASCENDING_EAST;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_FALSE;
    registry[1576] = block;
  }

  { // ID: 1577
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_FALSE;
    block->shape = DetectorRailBlock::SHAPE_ASCENDING_WEST;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_TRUE;
    registry[1577] = block;
  }

  { // ID: 1578
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_FALSE;
    block->shape = DetectorRailBlock::SHAPE_ASCENDING_WEST;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_FALSE;
    registry[1578] = block;
  }

  { // ID: 1579
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_FALSE;
    block->shape = DetectorRailBlock::SHAPE_ASCENDING_NORTH;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_TRUE;
    registry[1579] = block;
  }

  { // ID: 1580
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_FALSE;
    block->shape = DetectorRailBlock::SHAPE_ASCENDING_NORTH;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_FALSE;
    registry[1580] = block;
  }

  { // ID: 1581
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_FALSE;
    block->shape = DetectorRailBlock::SHAPE_ASCENDING_SOUTH;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_TRUE;
    registry[1581] = block;
  }

  { // ID: 1582
    std::shared_ptr<DetectorRailBlock> block = std::make_shared<DetectorRailBlock>();
    block->powered = DetectorRailBlock::POWERED_FALSE;
    block->shape = DetectorRailBlock::SHAPE_ASCENDING_SOUTH;
    block->waterlogged = DetectorRailBlock::WATERLOGGED_FALSE;
    registry[1582] = block;
  }

  { // ID: 1598
    std::shared_ptr<DeadBushBlock> block = std::make_shared<DeadBushBlock>();
    registry[1598] = block;
  }

  { // ID: 1666
    std::shared_ptr<DandelionBlock> block = std::make_shared<DandelionBlock>();
    registry[1666] = block;
  }

  { // ID: 3608
    std::shared_ptr<DiamondOreBlock> block = std::make_shared<DiamondOreBlock>();
    registry[3608] = block;
  }

  { // ID: 3609
    std::shared_ptr<DeepslateDiamondOreBlock> block = std::make_shared<DeepslateDiamondOreBlock>();
    registry[3609] = block;
  }

  { // ID: 3610
    std::shared_ptr<DiamondBlockBlock> block = std::make_shared<DiamondBlockBlock>();
    registry[3610] = block;
  }

  { // ID: 3796
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_0;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_TRUE;
    registry[3796] = block;
  }

  { // ID: 3797
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_0;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_FALSE;
    registry[3797] = block;
  }

  { // ID: 3798
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_1;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_TRUE;
    registry[3798] = block;
  }

  { // ID: 3799
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_1;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_FALSE;
    registry[3799] = block;
  }

  { // ID: 3800
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_2;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_TRUE;
    registry[3800] = block;
  }

  { // ID: 3801
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_2;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_FALSE;
    registry[3801] = block;
  }

  { // ID: 3802
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_3;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_TRUE;
    registry[3802] = block;
  }

  { // ID: 3803
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_3;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_FALSE;
    registry[3803] = block;
  }

  { // ID: 3804
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_4;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_TRUE;
    registry[3804] = block;
  }

  { // ID: 3805
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_4;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_FALSE;
    registry[3805] = block;
  }

  { // ID: 3806
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_5;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_TRUE;
    registry[3806] = block;
  }

  { // ID: 3807
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_5;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_FALSE;
    registry[3807] = block;
  }

  { // ID: 3808
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_6;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_TRUE;
    registry[3808] = block;
  }

  { // ID: 3809
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_6;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_FALSE;
    registry[3809] = block;
  }

  { // ID: 3810
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_7;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_TRUE;
    registry[3810] = block;
  }

  { // ID: 3811
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_7;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_FALSE;
    registry[3811] = block;
  }

  { // ID: 3812
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_8;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_TRUE;
    registry[3812] = block;
  }

  { // ID: 3813
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_8;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_FALSE;
    registry[3813] = block;
  }

  { // ID: 3814
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_9;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_TRUE;
    registry[3814] = block;
  }

  { // ID: 3815
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_9;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_FALSE;
    registry[3815] = block;
  }

  { // ID: 3816
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_10;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_TRUE;
    registry[3816] = block;
  }

  { // ID: 3817
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_10;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_FALSE;
    registry[3817] = block;
  }

  { // ID: 3818
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_11;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_TRUE;
    registry[3818] = block;
  }

  { // ID: 3819
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_11;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_FALSE;
    registry[3819] = block;
  }

  { // ID: 3820
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_12;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_TRUE;
    registry[3820] = block;
  }

  { // ID: 3821
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_12;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_FALSE;
    registry[3821] = block;
  }

  { // ID: 3822
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_13;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_TRUE;
    registry[3822] = block;
  }

  { // ID: 3823
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_13;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_FALSE;
    registry[3823] = block;
  }

  { // ID: 3824
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_14;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_TRUE;
    registry[3824] = block;
  }

  { // ID: 3825
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_14;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_FALSE;
    registry[3825] = block;
  }

  { // ID: 3826
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_15;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_TRUE;
    registry[3826] = block;
  }

  { // ID: 3827
    std::shared_ptr<DarkOakSignBlock> block = std::make_shared<DarkOakSignBlock>();
    block->rotation = DarkOakSignBlock::ROTATION_15;
    block->waterlogged = DarkOakSignBlock::WATERLOGGED_FALSE;
    registry[3827] = block;
  }

  { // ID: 4072
    std::shared_ptr<DarkOakWallSignBlock> block = std::make_shared<DarkOakWallSignBlock>();
    block->facing = DarkOakWallSignBlock::FACING_NORTH;
    block->waterlogged = DarkOakWallSignBlock::WATERLOGGED_TRUE;
    registry[4072] = block;
  }

  { // ID: 4073
    std::shared_ptr<DarkOakWallSignBlock> block = std::make_shared<DarkOakWallSignBlock>();
    block->facing = DarkOakWallSignBlock::FACING_NORTH;
    block->waterlogged = DarkOakWallSignBlock::WATERLOGGED_FALSE;
    registry[4073] = block;
  }

  { // ID: 4074
    std::shared_ptr<DarkOakWallSignBlock> block = std::make_shared<DarkOakWallSignBlock>();
    block->facing = DarkOakWallSignBlock::FACING_SOUTH;
    block->waterlogged = DarkOakWallSignBlock::WATERLOGGED_TRUE;
    registry[4074] = block;
  }

  { // ID: 4075
    std::shared_ptr<DarkOakWallSignBlock> block = std::make_shared<DarkOakWallSignBlock>();
    block->facing = DarkOakWallSignBlock::FACING_SOUTH;
    block->waterlogged = DarkOakWallSignBlock::WATERLOGGED_FALSE;
    registry[4075] = block;
  }

  { // ID: 4076
    std::shared_ptr<DarkOakWallSignBlock> block = std::make_shared<DarkOakWallSignBlock>();
    block->facing = DarkOakWallSignBlock::FACING_WEST;
    block->waterlogged = DarkOakWallSignBlock::WATERLOGGED_TRUE;
    registry[4076] = block;
  }

  { // ID: 4077
    std::shared_ptr<DarkOakWallSignBlock> block = std::make_shared<DarkOakWallSignBlock>();
    block->facing = DarkOakWallSignBlock::FACING_WEST;
    block->waterlogged = DarkOakWallSignBlock::WATERLOGGED_FALSE;
    registry[4077] = block;
  }

  { // ID: 4078
    std::shared_ptr<DarkOakWallSignBlock> block = std::make_shared<DarkOakWallSignBlock>();
    block->facing = DarkOakWallSignBlock::FACING_EAST;
    block->waterlogged = DarkOakWallSignBlock::WATERLOGGED_TRUE;
    registry[4078] = block;
  }

  { // ID: 4079
    std::shared_ptr<DarkOakWallSignBlock> block = std::make_shared<DarkOakWallSignBlock>();
    block->facing = DarkOakWallSignBlock::FACING_EAST;
    block->waterlogged = DarkOakWallSignBlock::WATERLOGGED_FALSE;
    registry[4079] = block;
  }

  { // ID: 4188
    std::shared_ptr<DarkOakPressurePlateBlock> block = std::make_shared<DarkOakPressurePlateBlock>();
    block->powered = DarkOakPressurePlateBlock::POWERED_TRUE;
    registry[4188] = block;
  }

  { // ID: 4189
    std::shared_ptr<DarkOakPressurePlateBlock> block = std::make_shared<DarkOakPressurePlateBlock>();
    block->powered = DarkOakPressurePlateBlock::POWERED_FALSE;
    registry[4189] = block;
  }

  { // ID: 4194
    std::shared_ptr<DeepslateRedstoneOreBlock> block = std::make_shared<DeepslateRedstoneOreBlock>();
    block->lit = DeepslateRedstoneOreBlock::LIT_TRUE;
    registry[4194] = block;
  }

  { // ID: 4195
    std::shared_ptr<DeepslateRedstoneOreBlock> block = std::make_shared<DeepslateRedstoneOreBlock>();
    block->lit = DeepslateRedstoneOreBlock::LIT_FALSE;
    registry[4195] = block;
  }

  { // ID: 4740
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_NORTH;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4740] = block;
  }

  { // ID: 4741
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_NORTH;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4741] = block;
  }

  { // ID: 4742
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_NORTH;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4742] = block;
  }

  { // ID: 4743
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_NORTH;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4743] = block;
  }

  { // ID: 4744
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_NORTH;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4744] = block;
  }

  { // ID: 4745
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_NORTH;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4745] = block;
  }

  { // ID: 4746
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_NORTH;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4746] = block;
  }

  { // ID: 4747
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_NORTH;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4747] = block;
  }

  { // ID: 4748
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_NORTH;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4748] = block;
  }

  { // ID: 4749
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_NORTH;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4749] = block;
  }

  { // ID: 4750
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_NORTH;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4750] = block;
  }

  { // ID: 4751
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_NORTH;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4751] = block;
  }

  { // ID: 4752
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_NORTH;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4752] = block;
  }

  { // ID: 4753
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_NORTH;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4753] = block;
  }

  { // ID: 4754
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_NORTH;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4754] = block;
  }

  { // ID: 4755
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_NORTH;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4755] = block;
  }

  { // ID: 4756
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_SOUTH;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4756] = block;
  }

  { // ID: 4757
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_SOUTH;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4757] = block;
  }

  { // ID: 4758
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_SOUTH;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4758] = block;
  }

  { // ID: 4759
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_SOUTH;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4759] = block;
  }

  { // ID: 4760
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_SOUTH;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4760] = block;
  }

  { // ID: 4761
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_SOUTH;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4761] = block;
  }

  { // ID: 4762
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_SOUTH;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4762] = block;
  }

  { // ID: 4763
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_SOUTH;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4763] = block;
  }

  { // ID: 4764
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_SOUTH;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4764] = block;
  }

  { // ID: 4765
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_SOUTH;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4765] = block;
  }

  { // ID: 4766
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_SOUTH;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4766] = block;
  }

  { // ID: 4767
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_SOUTH;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4767] = block;
  }

  { // ID: 4768
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_SOUTH;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4768] = block;
  }

  { // ID: 4769
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_SOUTH;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4769] = block;
  }

  { // ID: 4770
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_SOUTH;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4770] = block;
  }

  { // ID: 4771
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_SOUTH;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4771] = block;
  }

  { // ID: 4772
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_WEST;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4772] = block;
  }

  { // ID: 4773
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_WEST;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4773] = block;
  }

  { // ID: 4774
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_WEST;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4774] = block;
  }

  { // ID: 4775
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_WEST;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4775] = block;
  }

  { // ID: 4776
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_WEST;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4776] = block;
  }

  { // ID: 4777
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_WEST;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4777] = block;
  }

  { // ID: 4778
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_WEST;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4778] = block;
  }

  { // ID: 4779
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_WEST;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4779] = block;
  }

  { // ID: 4780
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_WEST;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4780] = block;
  }

  { // ID: 4781
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_WEST;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4781] = block;
  }

  { // ID: 4782
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_WEST;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4782] = block;
  }

  { // ID: 4783
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_WEST;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4783] = block;
  }

  { // ID: 4784
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_WEST;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4784] = block;
  }

  { // ID: 4785
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_WEST;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4785] = block;
  }

  { // ID: 4786
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_WEST;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4786] = block;
  }

  { // ID: 4787
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_WEST;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4787] = block;
  }

  { // ID: 4788
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_EAST;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4788] = block;
  }

  { // ID: 4789
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_EAST;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4789] = block;
  }

  { // ID: 4790
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_EAST;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4790] = block;
  }

  { // ID: 4791
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_EAST;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4791] = block;
  }

  { // ID: 4792
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_EAST;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4792] = block;
  }

  { // ID: 4793
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_EAST;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4793] = block;
  }

  { // ID: 4794
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_EAST;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4794] = block;
  }

  { // ID: 4795
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_EAST;
    block->half = DarkOakTrapdoorBlock::HALF_TOP;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4795] = block;
  }

  { // ID: 4796
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_EAST;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4796] = block;
  }

  { // ID: 4797
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_EAST;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4797] = block;
  }

  { // ID: 4798
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_EAST;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4798] = block;
  }

  { // ID: 4799
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_EAST;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_TRUE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4799] = block;
  }

  { // ID: 4800
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_EAST;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4800] = block;
  }

  { // ID: 4801
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_EAST;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4801] = block;
  }

  { // ID: 4802
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_EAST;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4802] = block;
  }

  { // ID: 4803
    std::shared_ptr<DarkOakTrapdoorBlock> block = std::make_shared<DarkOakTrapdoorBlock>();
    block->facing = DarkOakTrapdoorBlock::FACING_EAST;
    block->half = DarkOakTrapdoorBlock::HALF_BOTTOM;
    block->open = DarkOakTrapdoorBlock::OPEN_FALSE;
    block->powered = DarkOakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = DarkOakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4803] = block;
  }

  { // ID: 5746
    std::shared_ptr<DragonEggBlock> block = std::make_shared<DragonEggBlock>();
    registry[5746] = block;
  }

  { // ID: 5842
    std::shared_ptr<DeepslateEmeraldOreBlock> block = std::make_shared<DeepslateEmeraldOreBlock>();
    registry[5842] = block;
  }

  { // ID: 7059
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_FLOOR;
    block->facing = DarkOakButtonBlock::FACING_NORTH;
    block->powered = DarkOakButtonBlock::POWERED_TRUE;
    registry[7059] = block;
  }

  { // ID: 7060
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_FLOOR;
    block->facing = DarkOakButtonBlock::FACING_NORTH;
    block->powered = DarkOakButtonBlock::POWERED_FALSE;
    registry[7060] = block;
  }

  { // ID: 7061
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_FLOOR;
    block->facing = DarkOakButtonBlock::FACING_SOUTH;
    block->powered = DarkOakButtonBlock::POWERED_TRUE;
    registry[7061] = block;
  }

  { // ID: 7062
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_FLOOR;
    block->facing = DarkOakButtonBlock::FACING_SOUTH;
    block->powered = DarkOakButtonBlock::POWERED_FALSE;
    registry[7062] = block;
  }

  { // ID: 7063
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_FLOOR;
    block->facing = DarkOakButtonBlock::FACING_WEST;
    block->powered = DarkOakButtonBlock::POWERED_TRUE;
    registry[7063] = block;
  }

  { // ID: 7064
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_FLOOR;
    block->facing = DarkOakButtonBlock::FACING_WEST;
    block->powered = DarkOakButtonBlock::POWERED_FALSE;
    registry[7064] = block;
  }

  { // ID: 7065
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_FLOOR;
    block->facing = DarkOakButtonBlock::FACING_EAST;
    block->powered = DarkOakButtonBlock::POWERED_TRUE;
    registry[7065] = block;
  }

  { // ID: 7066
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_FLOOR;
    block->facing = DarkOakButtonBlock::FACING_EAST;
    block->powered = DarkOakButtonBlock::POWERED_FALSE;
    registry[7066] = block;
  }

  { // ID: 7067
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_WALL;
    block->facing = DarkOakButtonBlock::FACING_NORTH;
    block->powered = DarkOakButtonBlock::POWERED_TRUE;
    registry[7067] = block;
  }

  { // ID: 7068
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_WALL;
    block->facing = DarkOakButtonBlock::FACING_NORTH;
    block->powered = DarkOakButtonBlock::POWERED_FALSE;
    registry[7068] = block;
  }

  { // ID: 7069
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_WALL;
    block->facing = DarkOakButtonBlock::FACING_SOUTH;
    block->powered = DarkOakButtonBlock::POWERED_TRUE;
    registry[7069] = block;
  }

  { // ID: 7070
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_WALL;
    block->facing = DarkOakButtonBlock::FACING_SOUTH;
    block->powered = DarkOakButtonBlock::POWERED_FALSE;
    registry[7070] = block;
  }

  { // ID: 7071
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_WALL;
    block->facing = DarkOakButtonBlock::FACING_WEST;
    block->powered = DarkOakButtonBlock::POWERED_TRUE;
    registry[7071] = block;
  }

  { // ID: 7072
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_WALL;
    block->facing = DarkOakButtonBlock::FACING_WEST;
    block->powered = DarkOakButtonBlock::POWERED_FALSE;
    registry[7072] = block;
  }

  { // ID: 7073
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_WALL;
    block->facing = DarkOakButtonBlock::FACING_EAST;
    block->powered = DarkOakButtonBlock::POWERED_TRUE;
    registry[7073] = block;
  }

  { // ID: 7074
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_WALL;
    block->facing = DarkOakButtonBlock::FACING_EAST;
    block->powered = DarkOakButtonBlock::POWERED_FALSE;
    registry[7074] = block;
  }

  { // ID: 7075
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_CEILING;
    block->facing = DarkOakButtonBlock::FACING_NORTH;
    block->powered = DarkOakButtonBlock::POWERED_TRUE;
    registry[7075] = block;
  }

  { // ID: 7076
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_CEILING;
    block->facing = DarkOakButtonBlock::FACING_NORTH;
    block->powered = DarkOakButtonBlock::POWERED_FALSE;
    registry[7076] = block;
  }

  { // ID: 7077
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_CEILING;
    block->facing = DarkOakButtonBlock::FACING_SOUTH;
    block->powered = DarkOakButtonBlock::POWERED_TRUE;
    registry[7077] = block;
  }

  { // ID: 7078
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_CEILING;
    block->facing = DarkOakButtonBlock::FACING_SOUTH;
    block->powered = DarkOakButtonBlock::POWERED_FALSE;
    registry[7078] = block;
  }

  { // ID: 7079
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_CEILING;
    block->facing = DarkOakButtonBlock::FACING_WEST;
    block->powered = DarkOakButtonBlock::POWERED_TRUE;
    registry[7079] = block;
  }

  { // ID: 7080
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_CEILING;
    block->facing = DarkOakButtonBlock::FACING_WEST;
    block->powered = DarkOakButtonBlock::POWERED_FALSE;
    registry[7080] = block;
  }

  { // ID: 7081
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_CEILING;
    block->facing = DarkOakButtonBlock::FACING_EAST;
    block->powered = DarkOakButtonBlock::POWERED_TRUE;
    registry[7081] = block;
  }

  { // ID: 7082
    std::shared_ptr<DarkOakButtonBlock> block = std::make_shared<DarkOakButtonBlock>();
    block->face = DarkOakButtonBlock::FACE_CEILING;
    block->facing = DarkOakButtonBlock::FACING_EAST;
    block->powered = DarkOakButtonBlock::POWERED_FALSE;
    registry[7082] = block;
  }

  { // ID: 7207
    std::shared_ptr<DragonHeadBlock> block = std::make_shared<DragonHeadBlock>();
    block->rotation = DragonHeadBlock::ROTATION_0;
    registry[7207] = block;
  }

  { // ID: 7208
    std::shared_ptr<DragonHeadBlock> block = std::make_shared<DragonHeadBlock>();
    block->rotation = DragonHeadBlock::ROTATION_1;
    registry[7208] = block;
  }

  { // ID: 7209
    std::shared_ptr<DragonHeadBlock> block = std::make_shared<DragonHeadBlock>();
    block->rotation = DragonHeadBlock::ROTATION_2;
    registry[7209] = block;
  }

  { // ID: 7210
    std::shared_ptr<DragonHeadBlock> block = std::make_shared<DragonHeadBlock>();
    block->rotation = DragonHeadBlock::ROTATION_3;
    registry[7210] = block;
  }

  { // ID: 7211
    std::shared_ptr<DragonHeadBlock> block = std::make_shared<DragonHeadBlock>();
    block->rotation = DragonHeadBlock::ROTATION_4;
    registry[7211] = block;
  }

  { // ID: 7212
    std::shared_ptr<DragonHeadBlock> block = std::make_shared<DragonHeadBlock>();
    block->rotation = DragonHeadBlock::ROTATION_5;
    registry[7212] = block;
  }

  { // ID: 7213
    std::shared_ptr<DragonHeadBlock> block = std::make_shared<DragonHeadBlock>();
    block->rotation = DragonHeadBlock::ROTATION_6;
    registry[7213] = block;
  }

  { // ID: 7214
    std::shared_ptr<DragonHeadBlock> block = std::make_shared<DragonHeadBlock>();
    block->rotation = DragonHeadBlock::ROTATION_7;
    registry[7214] = block;
  }

  { // ID: 7215
    std::shared_ptr<DragonHeadBlock> block = std::make_shared<DragonHeadBlock>();
    block->rotation = DragonHeadBlock::ROTATION_8;
    registry[7215] = block;
  }

  { // ID: 7216
    std::shared_ptr<DragonHeadBlock> block = std::make_shared<DragonHeadBlock>();
    block->rotation = DragonHeadBlock::ROTATION_9;
    registry[7216] = block;
  }

  { // ID: 7217
    std::shared_ptr<DragonHeadBlock> block = std::make_shared<DragonHeadBlock>();
    block->rotation = DragonHeadBlock::ROTATION_10;
    registry[7217] = block;
  }

  { // ID: 7218
    std::shared_ptr<DragonHeadBlock> block = std::make_shared<DragonHeadBlock>();
    block->rotation = DragonHeadBlock::ROTATION_11;
    registry[7218] = block;
  }

  { // ID: 7219
    std::shared_ptr<DragonHeadBlock> block = std::make_shared<DragonHeadBlock>();
    block->rotation = DragonHeadBlock::ROTATION_12;
    registry[7219] = block;
  }

  { // ID: 7220
    std::shared_ptr<DragonHeadBlock> block = std::make_shared<DragonHeadBlock>();
    block->rotation = DragonHeadBlock::ROTATION_13;
    registry[7220] = block;
  }

  { // ID: 7221
    std::shared_ptr<DragonHeadBlock> block = std::make_shared<DragonHeadBlock>();
    block->rotation = DragonHeadBlock::ROTATION_14;
    registry[7221] = block;
  }

  { // ID: 7222
    std::shared_ptr<DragonHeadBlock> block = std::make_shared<DragonHeadBlock>();
    block->rotation = DragonHeadBlock::ROTATION_15;
    registry[7222] = block;
  }

  { // ID: 7223
    std::shared_ptr<DragonWallHeadBlock> block = std::make_shared<DragonWallHeadBlock>();
    block->facing = DragonWallHeadBlock::FACING_NORTH;
    registry[7223] = block;
  }

  { // ID: 7224
    std::shared_ptr<DragonWallHeadBlock> block = std::make_shared<DragonWallHeadBlock>();
    block->facing = DragonWallHeadBlock::FACING_SOUTH;
    registry[7224] = block;
  }

  { // ID: 7225
    std::shared_ptr<DragonWallHeadBlock> block = std::make_shared<DragonWallHeadBlock>();
    block->facing = DragonWallHeadBlock::FACING_WEST;
    registry[7225] = block;
  }

  { // ID: 7226
    std::shared_ptr<DragonWallHeadBlock> block = std::make_shared<DragonWallHeadBlock>();
    block->facing = DragonWallHeadBlock::FACING_EAST;
    registry[7226] = block;
  }

  { // ID: 7235
    std::shared_ptr<DamagedAnvilBlock> block = std::make_shared<DamagedAnvilBlock>();
    block->facing = DamagedAnvilBlock::FACING_NORTH;
    registry[7235] = block;
  }

  { // ID: 7236
    std::shared_ptr<DamagedAnvilBlock> block = std::make_shared<DamagedAnvilBlock>();
    block->facing = DamagedAnvilBlock::FACING_SOUTH;
    registry[7236] = block;
  }

  { // ID: 7237
    std::shared_ptr<DamagedAnvilBlock> block = std::make_shared<DamagedAnvilBlock>();
    block->facing = DamagedAnvilBlock::FACING_WEST;
    registry[7237] = block;
  }

  { // ID: 7238
    std::shared_ptr<DamagedAnvilBlock> block = std::make_shared<DamagedAnvilBlock>();
    block->facing = DamagedAnvilBlock::FACING_EAST;
    registry[7238] = block;
  }

  { // ID: 7311
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_TRUE;
    block->power = DaylightDetectorBlock::POWER_0;
    registry[7311] = block;
  }

  { // ID: 7312
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_TRUE;
    block->power = DaylightDetectorBlock::POWER_1;
    registry[7312] = block;
  }

  { // ID: 7313
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_TRUE;
    block->power = DaylightDetectorBlock::POWER_2;
    registry[7313] = block;
  }

  { // ID: 7314
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_TRUE;
    block->power = DaylightDetectorBlock::POWER_3;
    registry[7314] = block;
  }

  { // ID: 7315
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_TRUE;
    block->power = DaylightDetectorBlock::POWER_4;
    registry[7315] = block;
  }

  { // ID: 7316
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_TRUE;
    block->power = DaylightDetectorBlock::POWER_5;
    registry[7316] = block;
  }

  { // ID: 7317
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_TRUE;
    block->power = DaylightDetectorBlock::POWER_6;
    registry[7317] = block;
  }

  { // ID: 7318
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_TRUE;
    block->power = DaylightDetectorBlock::POWER_7;
    registry[7318] = block;
  }

  { // ID: 7319
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_TRUE;
    block->power = DaylightDetectorBlock::POWER_8;
    registry[7319] = block;
  }

  { // ID: 7320
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_TRUE;
    block->power = DaylightDetectorBlock::POWER_9;
    registry[7320] = block;
  }

  { // ID: 7321
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_TRUE;
    block->power = DaylightDetectorBlock::POWER_10;
    registry[7321] = block;
  }

  { // ID: 7322
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_TRUE;
    block->power = DaylightDetectorBlock::POWER_11;
    registry[7322] = block;
  }

  { // ID: 7323
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_TRUE;
    block->power = DaylightDetectorBlock::POWER_12;
    registry[7323] = block;
  }

  { // ID: 7324
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_TRUE;
    block->power = DaylightDetectorBlock::POWER_13;
    registry[7324] = block;
  }

  { // ID: 7325
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_TRUE;
    block->power = DaylightDetectorBlock::POWER_14;
    registry[7325] = block;
  }

  { // ID: 7326
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_TRUE;
    block->power = DaylightDetectorBlock::POWER_15;
    registry[7326] = block;
  }

  { // ID: 7327
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_FALSE;
    block->power = DaylightDetectorBlock::POWER_0;
    registry[7327] = block;
  }

  { // ID: 7328
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_FALSE;
    block->power = DaylightDetectorBlock::POWER_1;
    registry[7328] = block;
  }

  { // ID: 7329
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_FALSE;
    block->power = DaylightDetectorBlock::POWER_2;
    registry[7329] = block;
  }

  { // ID: 7330
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_FALSE;
    block->power = DaylightDetectorBlock::POWER_3;
    registry[7330] = block;
  }

  { // ID: 7331
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_FALSE;
    block->power = DaylightDetectorBlock::POWER_4;
    registry[7331] = block;
  }

  { // ID: 7332
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_FALSE;
    block->power = DaylightDetectorBlock::POWER_5;
    registry[7332] = block;
  }

  { // ID: 7333
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_FALSE;
    block->power = DaylightDetectorBlock::POWER_6;
    registry[7333] = block;
  }

  { // ID: 7334
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_FALSE;
    block->power = DaylightDetectorBlock::POWER_7;
    registry[7334] = block;
  }

  { // ID: 7335
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_FALSE;
    block->power = DaylightDetectorBlock::POWER_8;
    registry[7335] = block;
  }

  { // ID: 7336
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_FALSE;
    block->power = DaylightDetectorBlock::POWER_9;
    registry[7336] = block;
  }

  { // ID: 7337
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_FALSE;
    block->power = DaylightDetectorBlock::POWER_10;
    registry[7337] = block;
  }

  { // ID: 7338
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_FALSE;
    block->power = DaylightDetectorBlock::POWER_11;
    registry[7338] = block;
  }

  { // ID: 7339
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_FALSE;
    block->power = DaylightDetectorBlock::POWER_12;
    registry[7339] = block;
  }

  { // ID: 7340
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_FALSE;
    block->power = DaylightDetectorBlock::POWER_13;
    registry[7340] = block;
  }

  { // ID: 7341
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_FALSE;
    block->power = DaylightDetectorBlock::POWER_14;
    registry[7341] = block;
  }

  { // ID: 7342
    std::shared_ptr<DaylightDetectorBlock> block = std::make_shared<DaylightDetectorBlock>();
    block->inverted = DaylightDetectorBlock::INVERTED_FALSE;
    block->power = DaylightDetectorBlock::POWER_15;
    registry[7342] = block;
  }

  { // ID: 7464
    std::shared_ptr<DropperBlock> block = std::make_shared<DropperBlock>();
    block->facing = DropperBlock::FACING_NORTH;
    block->triggered = DropperBlock::TRIGGERED_TRUE;
    registry[7464] = block;
  }

  { // ID: 7465
    std::shared_ptr<DropperBlock> block = std::make_shared<DropperBlock>();
    block->facing = DropperBlock::FACING_NORTH;
    block->triggered = DropperBlock::TRIGGERED_FALSE;
    registry[7465] = block;
  }

  { // ID: 7466
    std::shared_ptr<DropperBlock> block = std::make_shared<DropperBlock>();
    block->facing = DropperBlock::FACING_EAST;
    block->triggered = DropperBlock::TRIGGERED_TRUE;
    registry[7466] = block;
  }

  { // ID: 7467
    std::shared_ptr<DropperBlock> block = std::make_shared<DropperBlock>();
    block->facing = DropperBlock::FACING_EAST;
    block->triggered = DropperBlock::TRIGGERED_FALSE;
    registry[7467] = block;
  }

  { // ID: 7468
    std::shared_ptr<DropperBlock> block = std::make_shared<DropperBlock>();
    block->facing = DropperBlock::FACING_SOUTH;
    block->triggered = DropperBlock::TRIGGERED_TRUE;
    registry[7468] = block;
  }

  { // ID: 7469
    std::shared_ptr<DropperBlock> block = std::make_shared<DropperBlock>();
    block->facing = DropperBlock::FACING_SOUTH;
    block->triggered = DropperBlock::TRIGGERED_FALSE;
    registry[7469] = block;
  }

  { // ID: 7470
    std::shared_ptr<DropperBlock> block = std::make_shared<DropperBlock>();
    block->facing = DropperBlock::FACING_WEST;
    block->triggered = DropperBlock::TRIGGERED_TRUE;
    registry[7470] = block;
  }

  { // ID: 7471
    std::shared_ptr<DropperBlock> block = std::make_shared<DropperBlock>();
    block->facing = DropperBlock::FACING_WEST;
    block->triggered = DropperBlock::TRIGGERED_FALSE;
    registry[7471] = block;
  }

  { // ID: 7472
    std::shared_ptr<DropperBlock> block = std::make_shared<DropperBlock>();
    block->facing = DropperBlock::FACING_UP;
    block->triggered = DropperBlock::TRIGGERED_TRUE;
    registry[7472] = block;
  }

  { // ID: 7473
    std::shared_ptr<DropperBlock> block = std::make_shared<DropperBlock>();
    block->facing = DropperBlock::FACING_UP;
    block->triggered = DropperBlock::TRIGGERED_FALSE;
    registry[7473] = block;
  }

  { // ID: 7474
    std::shared_ptr<DropperBlock> block = std::make_shared<DropperBlock>();
    block->facing = DropperBlock::FACING_DOWN;
    block->triggered = DropperBlock::TRIGGERED_TRUE;
    registry[7474] = block;
  }

  { // ID: 7475
    std::shared_ptr<DropperBlock> block = std::make_shared<DropperBlock>();
    block->facing = DropperBlock::FACING_DOWN;
    block->triggered = DropperBlock::TRIGGERED_FALSE;
    registry[7475] = block;
  }

  { // ID: 8084
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_NORTH;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8084] = block;
  }

  { // ID: 8085
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_NORTH;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8085] = block;
  }

  { // ID: 8086
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_NORTH;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8086] = block;
  }

  { // ID: 8087
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_NORTH;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8087] = block;
  }

  { // ID: 8088
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_NORTH;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8088] = block;
  }

  { // ID: 8089
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_NORTH;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8089] = block;
  }

  { // ID: 8090
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_NORTH;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8090] = block;
  }

  { // ID: 8091
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_NORTH;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8091] = block;
  }

  { // ID: 8092
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_NORTH;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8092] = block;
  }

  { // ID: 8093
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_NORTH;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8093] = block;
  }

  { // ID: 8094
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_NORTH;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8094] = block;
  }

  { // ID: 8095
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_NORTH;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8095] = block;
  }

  { // ID: 8096
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_NORTH;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8096] = block;
  }

  { // ID: 8097
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_NORTH;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8097] = block;
  }

  { // ID: 8098
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_NORTH;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8098] = block;
  }

  { // ID: 8099
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_NORTH;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8099] = block;
  }

  { // ID: 8100
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_NORTH;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8100] = block;
  }

  { // ID: 8101
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_NORTH;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8101] = block;
  }

  { // ID: 8102
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_NORTH;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8102] = block;
  }

  { // ID: 8103
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_NORTH;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8103] = block;
  }

  { // ID: 8104
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_SOUTH;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8104] = block;
  }

  { // ID: 8105
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_SOUTH;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8105] = block;
  }

  { // ID: 8106
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_SOUTH;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8106] = block;
  }

  { // ID: 8107
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_SOUTH;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8107] = block;
  }

  { // ID: 8108
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_SOUTH;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8108] = block;
  }

  { // ID: 8109
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_SOUTH;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8109] = block;
  }

  { // ID: 8110
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_SOUTH;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8110] = block;
  }

  { // ID: 8111
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_SOUTH;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8111] = block;
  }

  { // ID: 8112
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_SOUTH;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8112] = block;
  }

  { // ID: 8113
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_SOUTH;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8113] = block;
  }

  { // ID: 8114
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_SOUTH;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8114] = block;
  }

  { // ID: 8115
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_SOUTH;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8115] = block;
  }

  { // ID: 8116
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_SOUTH;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8116] = block;
  }

  { // ID: 8117
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_SOUTH;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8117] = block;
  }

  { // ID: 8118
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_SOUTH;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8118] = block;
  }

  { // ID: 8119
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_SOUTH;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8119] = block;
  }

  { // ID: 8120
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_SOUTH;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8120] = block;
  }

  { // ID: 8121
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_SOUTH;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8121] = block;
  }

  { // ID: 8122
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_SOUTH;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8122] = block;
  }

  { // ID: 8123
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_SOUTH;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8123] = block;
  }

  { // ID: 8124
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_WEST;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8124] = block;
  }

  { // ID: 8125
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_WEST;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8125] = block;
  }

  { // ID: 8126
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_WEST;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8126] = block;
  }

  { // ID: 8127
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_WEST;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8127] = block;
  }

  { // ID: 8128
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_WEST;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8128] = block;
  }

  { // ID: 8129
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_WEST;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8129] = block;
  }

  { // ID: 8130
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_WEST;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8130] = block;
  }

  { // ID: 8131
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_WEST;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8131] = block;
  }

  { // ID: 8132
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_WEST;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8132] = block;
  }

  { // ID: 8133
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_WEST;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8133] = block;
  }

  { // ID: 8134
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_WEST;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8134] = block;
  }

  { // ID: 8135
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_WEST;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8135] = block;
  }

  { // ID: 8136
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_WEST;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8136] = block;
  }

  { // ID: 8137
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_WEST;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8137] = block;
  }

  { // ID: 8138
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_WEST;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8138] = block;
  }

  { // ID: 8139
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_WEST;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8139] = block;
  }

  { // ID: 8140
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_WEST;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8140] = block;
  }

  { // ID: 8141
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_WEST;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8141] = block;
  }

  { // ID: 8142
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_WEST;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8142] = block;
  }

  { // ID: 8143
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_WEST;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8143] = block;
  }

  { // ID: 8144
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_EAST;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8144] = block;
  }

  { // ID: 8145
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_EAST;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8145] = block;
  }

  { // ID: 8146
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_EAST;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8146] = block;
  }

  { // ID: 8147
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_EAST;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8147] = block;
  }

  { // ID: 8148
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_EAST;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8148] = block;
  }

  { // ID: 8149
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_EAST;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8149] = block;
  }

  { // ID: 8150
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_EAST;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8150] = block;
  }

  { // ID: 8151
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_EAST;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8151] = block;
  }

  { // ID: 8152
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_EAST;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8152] = block;
  }

  { // ID: 8153
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_EAST;
    block->half = DarkOakStairsBlock::HALF_TOP;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8153] = block;
  }

  { // ID: 8154
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_EAST;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8154] = block;
  }

  { // ID: 8155
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_EAST;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8155] = block;
  }

  { // ID: 8156
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_EAST;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8156] = block;
  }

  { // ID: 8157
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_EAST;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8157] = block;
  }

  { // ID: 8158
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_EAST;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8158] = block;
  }

  { // ID: 8159
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_EAST;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8159] = block;
  }

  { // ID: 8160
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_EAST;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8160] = block;
  }

  { // ID: 8161
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_EAST;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8161] = block;
  }

  { // ID: 8162
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_EAST;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_TRUE;
    registry[8162] = block;
  }

  { // ID: 8163
    std::shared_ptr<DarkOakStairsBlock> block = std::make_shared<DarkOakStairsBlock>();
    block->facing = DarkOakStairsBlock::FACING_EAST;
    block->half = DarkOakStairsBlock::HALF_BOTTOM;
    block->shape = DarkOakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkOakStairsBlock::WATERLOGGED_FALSE;
    registry[8163] = block;
  }

  { // ID: 8344
    std::shared_ptr<DarkPrismarineBlock> block = std::make_shared<DarkPrismarineBlock>();
    registry[8344] = block;
  }

  { // ID: 8505
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_NORTH;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8505] = block;
  }

  { // ID: 8506
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_NORTH;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8506] = block;
  }

  { // ID: 8507
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_NORTH;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8507] = block;
  }

  { // ID: 8508
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_NORTH;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8508] = block;
  }

  { // ID: 8509
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_NORTH;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8509] = block;
  }

  { // ID: 8510
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_NORTH;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8510] = block;
  }

  { // ID: 8511
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_NORTH;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8511] = block;
  }

  { // ID: 8512
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_NORTH;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8512] = block;
  }

  { // ID: 8513
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_NORTH;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8513] = block;
  }

  { // ID: 8514
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_NORTH;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8514] = block;
  }

  { // ID: 8515
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_NORTH;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8515] = block;
  }

  { // ID: 8516
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_NORTH;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8516] = block;
  }

  { // ID: 8517
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_NORTH;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8517] = block;
  }

  { // ID: 8518
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_NORTH;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8518] = block;
  }

  { // ID: 8519
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_NORTH;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8519] = block;
  }

  { // ID: 8520
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_NORTH;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8520] = block;
  }

  { // ID: 8521
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_NORTH;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8521] = block;
  }

  { // ID: 8522
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_NORTH;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8522] = block;
  }

  { // ID: 8523
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_NORTH;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8523] = block;
  }

  { // ID: 8524
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_NORTH;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8524] = block;
  }

  { // ID: 8525
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_SOUTH;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8525] = block;
  }

  { // ID: 8526
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_SOUTH;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8526] = block;
  }

  { // ID: 8527
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_SOUTH;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8527] = block;
  }

  { // ID: 8528
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_SOUTH;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8528] = block;
  }

  { // ID: 8529
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_SOUTH;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8529] = block;
  }

  { // ID: 8530
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_SOUTH;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8530] = block;
  }

  { // ID: 8531
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_SOUTH;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8531] = block;
  }

  { // ID: 8532
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_SOUTH;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8532] = block;
  }

  { // ID: 8533
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_SOUTH;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8533] = block;
  }

  { // ID: 8534
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_SOUTH;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8534] = block;
  }

  { // ID: 8535
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_SOUTH;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8535] = block;
  }

  { // ID: 8536
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_SOUTH;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8536] = block;
  }

  { // ID: 8537
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_SOUTH;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8537] = block;
  }

  { // ID: 8538
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_SOUTH;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8538] = block;
  }

  { // ID: 8539
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_SOUTH;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8539] = block;
  }

  { // ID: 8540
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_SOUTH;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8540] = block;
  }

  { // ID: 8541
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_SOUTH;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8541] = block;
  }

  { // ID: 8542
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_SOUTH;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8542] = block;
  }

  { // ID: 8543
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_SOUTH;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8543] = block;
  }

  { // ID: 8544
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_SOUTH;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8544] = block;
  }

  { // ID: 8545
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_WEST;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8545] = block;
  }

  { // ID: 8546
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_WEST;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8546] = block;
  }

  { // ID: 8547
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_WEST;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8547] = block;
  }

  { // ID: 8548
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_WEST;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8548] = block;
  }

  { // ID: 8549
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_WEST;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8549] = block;
  }

  { // ID: 8550
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_WEST;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8550] = block;
  }

  { // ID: 8551
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_WEST;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8551] = block;
  }

  { // ID: 8552
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_WEST;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8552] = block;
  }

  { // ID: 8553
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_WEST;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8553] = block;
  }

  { // ID: 8554
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_WEST;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8554] = block;
  }

  { // ID: 8555
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_WEST;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8555] = block;
  }

  { // ID: 8556
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_WEST;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8556] = block;
  }

  { // ID: 8557
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_WEST;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8557] = block;
  }

  { // ID: 8558
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_WEST;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8558] = block;
  }

  { // ID: 8559
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_WEST;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8559] = block;
  }

  { // ID: 8560
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_WEST;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8560] = block;
  }

  { // ID: 8561
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_WEST;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8561] = block;
  }

  { // ID: 8562
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_WEST;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8562] = block;
  }

  { // ID: 8563
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_WEST;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8563] = block;
  }

  { // ID: 8564
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_WEST;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8564] = block;
  }

  { // ID: 8565
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_EAST;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8565] = block;
  }

  { // ID: 8566
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_EAST;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8566] = block;
  }

  { // ID: 8567
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_EAST;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8567] = block;
  }

  { // ID: 8568
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_EAST;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8568] = block;
  }

  { // ID: 8569
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_EAST;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8569] = block;
  }

  { // ID: 8570
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_EAST;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8570] = block;
  }

  { // ID: 8571
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_EAST;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8571] = block;
  }

  { // ID: 8572
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_EAST;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8572] = block;
  }

  { // ID: 8573
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_EAST;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8573] = block;
  }

  { // ID: 8574
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_EAST;
    block->half = DarkPrismarineStairsBlock::HALF_TOP;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8574] = block;
  }

  { // ID: 8575
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_EAST;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8575] = block;
  }

  { // ID: 8576
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_EAST;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8576] = block;
  }

  { // ID: 8577
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_EAST;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8577] = block;
  }

  { // ID: 8578
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_EAST;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8578] = block;
  }

  { // ID: 8579
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_EAST;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8579] = block;
  }

  { // ID: 8580
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_EAST;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8580] = block;
  }

  { // ID: 8581
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_EAST;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8581] = block;
  }

  { // ID: 8582
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_EAST;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8582] = block;
  }

  { // ID: 8583
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_EAST;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_TRUE;
    registry[8583] = block;
  }

  { // ID: 8584
    std::shared_ptr<DarkPrismarineStairsBlock> block = std::make_shared<DarkPrismarineStairsBlock>();
    block->facing = DarkPrismarineStairsBlock::FACING_EAST;
    block->half = DarkPrismarineStairsBlock::HALF_BOTTOM;
    block->shape = DarkPrismarineStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DarkPrismarineStairsBlock::WATERLOGGED_FALSE;
    registry[8584] = block;
  }

  { // ID: 8597
    std::shared_ptr<DarkPrismarineSlabBlock> block = std::make_shared<DarkPrismarineSlabBlock>();
    block->type = DarkPrismarineSlabBlock::TYPE_TOP;
    block->waterlogged = DarkPrismarineSlabBlock::WATERLOGGED_TRUE;
    registry[8597] = block;
  }

  { // ID: 8598
    std::shared_ptr<DarkPrismarineSlabBlock> block = std::make_shared<DarkPrismarineSlabBlock>();
    block->type = DarkPrismarineSlabBlock::TYPE_TOP;
    block->waterlogged = DarkPrismarineSlabBlock::WATERLOGGED_FALSE;
    registry[8598] = block;
  }

  { // ID: 8599
    std::shared_ptr<DarkPrismarineSlabBlock> block = std::make_shared<DarkPrismarineSlabBlock>();
    block->type = DarkPrismarineSlabBlock::TYPE_BOTTOM;
    block->waterlogged = DarkPrismarineSlabBlock::WATERLOGGED_TRUE;
    registry[8599] = block;
  }

  { // ID: 8600
    std::shared_ptr<DarkPrismarineSlabBlock> block = std::make_shared<DarkPrismarineSlabBlock>();
    block->type = DarkPrismarineSlabBlock::TYPE_BOTTOM;
    block->waterlogged = DarkPrismarineSlabBlock::WATERLOGGED_FALSE;
    registry[8600] = block;
  }

  { // ID: 8601
    std::shared_ptr<DarkPrismarineSlabBlock> block = std::make_shared<DarkPrismarineSlabBlock>();
    block->type = DarkPrismarineSlabBlock::TYPE_DOUBLE;
    block->waterlogged = DarkPrismarineSlabBlock::WATERLOGGED_TRUE;
    registry[8601] = block;
  }

  { // ID: 8602
    std::shared_ptr<DarkPrismarineSlabBlock> block = std::make_shared<DarkPrismarineSlabBlock>();
    block->type = DarkPrismarineSlabBlock::TYPE_DOUBLE;
    block->waterlogged = DarkPrismarineSlabBlock::WATERLOGGED_FALSE;
    registry[8602] = block;
  }

  { // ID: 9071
    std::shared_ptr<DarkOakSlabBlock> block = std::make_shared<DarkOakSlabBlock>();
    block->type = DarkOakSlabBlock::TYPE_TOP;
    block->waterlogged = DarkOakSlabBlock::WATERLOGGED_TRUE;
    registry[9071] = block;
  }

  { // ID: 9072
    std::shared_ptr<DarkOakSlabBlock> block = std::make_shared<DarkOakSlabBlock>();
    block->type = DarkOakSlabBlock::TYPE_TOP;
    block->waterlogged = DarkOakSlabBlock::WATERLOGGED_FALSE;
    registry[9072] = block;
  }

  { // ID: 9073
    std::shared_ptr<DarkOakSlabBlock> block = std::make_shared<DarkOakSlabBlock>();
    block->type = DarkOakSlabBlock::TYPE_BOTTOM;
    block->waterlogged = DarkOakSlabBlock::WATERLOGGED_TRUE;
    registry[9073] = block;
  }

  { // ID: 9074
    std::shared_ptr<DarkOakSlabBlock> block = std::make_shared<DarkOakSlabBlock>();
    block->type = DarkOakSlabBlock::TYPE_BOTTOM;
    block->waterlogged = DarkOakSlabBlock::WATERLOGGED_FALSE;
    registry[9074] = block;
  }

  { // ID: 9075
    std::shared_ptr<DarkOakSlabBlock> block = std::make_shared<DarkOakSlabBlock>();
    block->type = DarkOakSlabBlock::TYPE_DOUBLE;
    block->waterlogged = DarkOakSlabBlock::WATERLOGGED_TRUE;
    registry[9075] = block;
  }

  { // ID: 9076
    std::shared_ptr<DarkOakSlabBlock> block = std::make_shared<DarkOakSlabBlock>();
    block->type = DarkOakSlabBlock::TYPE_DOUBLE;
    block->waterlogged = DarkOakSlabBlock::WATERLOGGED_FALSE;
    registry[9076] = block;
  }

  { // ID: 9299
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_NORTH;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_TRUE;
    block->open = DarkOakFenceGateBlock::OPEN_TRUE;
    block->powered = DarkOakFenceGateBlock::POWERED_TRUE;
    registry[9299] = block;
  }

  { // ID: 9300
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_NORTH;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_TRUE;
    block->open = DarkOakFenceGateBlock::OPEN_TRUE;
    block->powered = DarkOakFenceGateBlock::POWERED_FALSE;
    registry[9300] = block;
  }

  { // ID: 9301
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_NORTH;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_TRUE;
    block->open = DarkOakFenceGateBlock::OPEN_FALSE;
    block->powered = DarkOakFenceGateBlock::POWERED_TRUE;
    registry[9301] = block;
  }

  { // ID: 9302
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_NORTH;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_TRUE;
    block->open = DarkOakFenceGateBlock::OPEN_FALSE;
    block->powered = DarkOakFenceGateBlock::POWERED_FALSE;
    registry[9302] = block;
  }

  { // ID: 9303
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_NORTH;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_FALSE;
    block->open = DarkOakFenceGateBlock::OPEN_TRUE;
    block->powered = DarkOakFenceGateBlock::POWERED_TRUE;
    registry[9303] = block;
  }

  { // ID: 9304
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_NORTH;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_FALSE;
    block->open = DarkOakFenceGateBlock::OPEN_TRUE;
    block->powered = DarkOakFenceGateBlock::POWERED_FALSE;
    registry[9304] = block;
  }

  { // ID: 9305
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_NORTH;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_FALSE;
    block->open = DarkOakFenceGateBlock::OPEN_FALSE;
    block->powered = DarkOakFenceGateBlock::POWERED_TRUE;
    registry[9305] = block;
  }

  { // ID: 9306
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_NORTH;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_FALSE;
    block->open = DarkOakFenceGateBlock::OPEN_FALSE;
    block->powered = DarkOakFenceGateBlock::POWERED_FALSE;
    registry[9306] = block;
  }

  { // ID: 9307
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_SOUTH;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_TRUE;
    block->open = DarkOakFenceGateBlock::OPEN_TRUE;
    block->powered = DarkOakFenceGateBlock::POWERED_TRUE;
    registry[9307] = block;
  }

  { // ID: 9308
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_SOUTH;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_TRUE;
    block->open = DarkOakFenceGateBlock::OPEN_TRUE;
    block->powered = DarkOakFenceGateBlock::POWERED_FALSE;
    registry[9308] = block;
  }

  { // ID: 9309
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_SOUTH;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_TRUE;
    block->open = DarkOakFenceGateBlock::OPEN_FALSE;
    block->powered = DarkOakFenceGateBlock::POWERED_TRUE;
    registry[9309] = block;
  }

  { // ID: 9310
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_SOUTH;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_TRUE;
    block->open = DarkOakFenceGateBlock::OPEN_FALSE;
    block->powered = DarkOakFenceGateBlock::POWERED_FALSE;
    registry[9310] = block;
  }

  { // ID: 9311
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_SOUTH;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_FALSE;
    block->open = DarkOakFenceGateBlock::OPEN_TRUE;
    block->powered = DarkOakFenceGateBlock::POWERED_TRUE;
    registry[9311] = block;
  }

  { // ID: 9312
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_SOUTH;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_FALSE;
    block->open = DarkOakFenceGateBlock::OPEN_TRUE;
    block->powered = DarkOakFenceGateBlock::POWERED_FALSE;
    registry[9312] = block;
  }

  { // ID: 9313
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_SOUTH;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_FALSE;
    block->open = DarkOakFenceGateBlock::OPEN_FALSE;
    block->powered = DarkOakFenceGateBlock::POWERED_TRUE;
    registry[9313] = block;
  }

  { // ID: 9314
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_SOUTH;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_FALSE;
    block->open = DarkOakFenceGateBlock::OPEN_FALSE;
    block->powered = DarkOakFenceGateBlock::POWERED_FALSE;
    registry[9314] = block;
  }

  { // ID: 9315
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_WEST;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_TRUE;
    block->open = DarkOakFenceGateBlock::OPEN_TRUE;
    block->powered = DarkOakFenceGateBlock::POWERED_TRUE;
    registry[9315] = block;
  }

  { // ID: 9316
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_WEST;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_TRUE;
    block->open = DarkOakFenceGateBlock::OPEN_TRUE;
    block->powered = DarkOakFenceGateBlock::POWERED_FALSE;
    registry[9316] = block;
  }

  { // ID: 9317
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_WEST;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_TRUE;
    block->open = DarkOakFenceGateBlock::OPEN_FALSE;
    block->powered = DarkOakFenceGateBlock::POWERED_TRUE;
    registry[9317] = block;
  }

  { // ID: 9318
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_WEST;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_TRUE;
    block->open = DarkOakFenceGateBlock::OPEN_FALSE;
    block->powered = DarkOakFenceGateBlock::POWERED_FALSE;
    registry[9318] = block;
  }

  { // ID: 9319
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_WEST;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_FALSE;
    block->open = DarkOakFenceGateBlock::OPEN_TRUE;
    block->powered = DarkOakFenceGateBlock::POWERED_TRUE;
    registry[9319] = block;
  }

  { // ID: 9320
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_WEST;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_FALSE;
    block->open = DarkOakFenceGateBlock::OPEN_TRUE;
    block->powered = DarkOakFenceGateBlock::POWERED_FALSE;
    registry[9320] = block;
  }

  { // ID: 9321
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_WEST;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_FALSE;
    block->open = DarkOakFenceGateBlock::OPEN_FALSE;
    block->powered = DarkOakFenceGateBlock::POWERED_TRUE;
    registry[9321] = block;
  }

  { // ID: 9322
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_WEST;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_FALSE;
    block->open = DarkOakFenceGateBlock::OPEN_FALSE;
    block->powered = DarkOakFenceGateBlock::POWERED_FALSE;
    registry[9322] = block;
  }

  { // ID: 9323
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_EAST;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_TRUE;
    block->open = DarkOakFenceGateBlock::OPEN_TRUE;
    block->powered = DarkOakFenceGateBlock::POWERED_TRUE;
    registry[9323] = block;
  }

  { // ID: 9324
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_EAST;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_TRUE;
    block->open = DarkOakFenceGateBlock::OPEN_TRUE;
    block->powered = DarkOakFenceGateBlock::POWERED_FALSE;
    registry[9324] = block;
  }

  { // ID: 9325
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_EAST;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_TRUE;
    block->open = DarkOakFenceGateBlock::OPEN_FALSE;
    block->powered = DarkOakFenceGateBlock::POWERED_TRUE;
    registry[9325] = block;
  }

  { // ID: 9326
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_EAST;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_TRUE;
    block->open = DarkOakFenceGateBlock::OPEN_FALSE;
    block->powered = DarkOakFenceGateBlock::POWERED_FALSE;
    registry[9326] = block;
  }

  { // ID: 9327
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_EAST;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_FALSE;
    block->open = DarkOakFenceGateBlock::OPEN_TRUE;
    block->powered = DarkOakFenceGateBlock::POWERED_TRUE;
    registry[9327] = block;
  }

  { // ID: 9328
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_EAST;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_FALSE;
    block->open = DarkOakFenceGateBlock::OPEN_TRUE;
    block->powered = DarkOakFenceGateBlock::POWERED_FALSE;
    registry[9328] = block;
  }

  { // ID: 9329
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_EAST;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_FALSE;
    block->open = DarkOakFenceGateBlock::OPEN_FALSE;
    block->powered = DarkOakFenceGateBlock::POWERED_TRUE;
    registry[9329] = block;
  }

  { // ID: 9330
    std::shared_ptr<DarkOakFenceGateBlock> block = std::make_shared<DarkOakFenceGateBlock>();
    block->facing = DarkOakFenceGateBlock::FACING_EAST;
    block->in_wall = DarkOakFenceGateBlock::IN_WALL_FALSE;
    block->open = DarkOakFenceGateBlock::OPEN_FALSE;
    block->powered = DarkOakFenceGateBlock::POWERED_FALSE;
    registry[9330] = block;
  }

  { // ID: 9491
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_TRUE;
    block->north = DarkOakFenceBlock::NORTH_TRUE;
    block->south = DarkOakFenceBlock::SOUTH_TRUE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_TRUE;
    block->west = DarkOakFenceBlock::WEST_TRUE;
    registry[9491] = block;
  }

  { // ID: 9492
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_TRUE;
    block->north = DarkOakFenceBlock::NORTH_TRUE;
    block->south = DarkOakFenceBlock::SOUTH_TRUE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_TRUE;
    block->west = DarkOakFenceBlock::WEST_FALSE;
    registry[9492] = block;
  }

  { // ID: 9493
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_TRUE;
    block->north = DarkOakFenceBlock::NORTH_TRUE;
    block->south = DarkOakFenceBlock::SOUTH_TRUE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_FALSE;
    block->west = DarkOakFenceBlock::WEST_TRUE;
    registry[9493] = block;
  }

  { // ID: 9494
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_TRUE;
    block->north = DarkOakFenceBlock::NORTH_TRUE;
    block->south = DarkOakFenceBlock::SOUTH_TRUE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_FALSE;
    block->west = DarkOakFenceBlock::WEST_FALSE;
    registry[9494] = block;
  }

  { // ID: 9495
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_TRUE;
    block->north = DarkOakFenceBlock::NORTH_TRUE;
    block->south = DarkOakFenceBlock::SOUTH_FALSE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_TRUE;
    block->west = DarkOakFenceBlock::WEST_TRUE;
    registry[9495] = block;
  }

  { // ID: 9496
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_TRUE;
    block->north = DarkOakFenceBlock::NORTH_TRUE;
    block->south = DarkOakFenceBlock::SOUTH_FALSE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_TRUE;
    block->west = DarkOakFenceBlock::WEST_FALSE;
    registry[9496] = block;
  }

  { // ID: 9497
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_TRUE;
    block->north = DarkOakFenceBlock::NORTH_TRUE;
    block->south = DarkOakFenceBlock::SOUTH_FALSE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_FALSE;
    block->west = DarkOakFenceBlock::WEST_TRUE;
    registry[9497] = block;
  }

  { // ID: 9498
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_TRUE;
    block->north = DarkOakFenceBlock::NORTH_TRUE;
    block->south = DarkOakFenceBlock::SOUTH_FALSE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_FALSE;
    block->west = DarkOakFenceBlock::WEST_FALSE;
    registry[9498] = block;
  }

  { // ID: 9499
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_TRUE;
    block->north = DarkOakFenceBlock::NORTH_FALSE;
    block->south = DarkOakFenceBlock::SOUTH_TRUE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_TRUE;
    block->west = DarkOakFenceBlock::WEST_TRUE;
    registry[9499] = block;
  }

  { // ID: 9500
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_TRUE;
    block->north = DarkOakFenceBlock::NORTH_FALSE;
    block->south = DarkOakFenceBlock::SOUTH_TRUE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_TRUE;
    block->west = DarkOakFenceBlock::WEST_FALSE;
    registry[9500] = block;
  }

  { // ID: 9501
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_TRUE;
    block->north = DarkOakFenceBlock::NORTH_FALSE;
    block->south = DarkOakFenceBlock::SOUTH_TRUE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_FALSE;
    block->west = DarkOakFenceBlock::WEST_TRUE;
    registry[9501] = block;
  }

  { // ID: 9502
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_TRUE;
    block->north = DarkOakFenceBlock::NORTH_FALSE;
    block->south = DarkOakFenceBlock::SOUTH_TRUE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_FALSE;
    block->west = DarkOakFenceBlock::WEST_FALSE;
    registry[9502] = block;
  }

  { // ID: 9503
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_TRUE;
    block->north = DarkOakFenceBlock::NORTH_FALSE;
    block->south = DarkOakFenceBlock::SOUTH_FALSE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_TRUE;
    block->west = DarkOakFenceBlock::WEST_TRUE;
    registry[9503] = block;
  }

  { // ID: 9504
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_TRUE;
    block->north = DarkOakFenceBlock::NORTH_FALSE;
    block->south = DarkOakFenceBlock::SOUTH_FALSE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_TRUE;
    block->west = DarkOakFenceBlock::WEST_FALSE;
    registry[9504] = block;
  }

  { // ID: 9505
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_TRUE;
    block->north = DarkOakFenceBlock::NORTH_FALSE;
    block->south = DarkOakFenceBlock::SOUTH_FALSE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_FALSE;
    block->west = DarkOakFenceBlock::WEST_TRUE;
    registry[9505] = block;
  }

  { // ID: 9506
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_TRUE;
    block->north = DarkOakFenceBlock::NORTH_FALSE;
    block->south = DarkOakFenceBlock::SOUTH_FALSE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_FALSE;
    block->west = DarkOakFenceBlock::WEST_FALSE;
    registry[9506] = block;
  }

  { // ID: 9507
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_FALSE;
    block->north = DarkOakFenceBlock::NORTH_TRUE;
    block->south = DarkOakFenceBlock::SOUTH_TRUE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_TRUE;
    block->west = DarkOakFenceBlock::WEST_TRUE;
    registry[9507] = block;
  }

  { // ID: 9508
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_FALSE;
    block->north = DarkOakFenceBlock::NORTH_TRUE;
    block->south = DarkOakFenceBlock::SOUTH_TRUE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_TRUE;
    block->west = DarkOakFenceBlock::WEST_FALSE;
    registry[9508] = block;
  }

  { // ID: 9509
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_FALSE;
    block->north = DarkOakFenceBlock::NORTH_TRUE;
    block->south = DarkOakFenceBlock::SOUTH_TRUE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_FALSE;
    block->west = DarkOakFenceBlock::WEST_TRUE;
    registry[9509] = block;
  }

  { // ID: 9510
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_FALSE;
    block->north = DarkOakFenceBlock::NORTH_TRUE;
    block->south = DarkOakFenceBlock::SOUTH_TRUE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_FALSE;
    block->west = DarkOakFenceBlock::WEST_FALSE;
    registry[9510] = block;
  }

  { // ID: 9511
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_FALSE;
    block->north = DarkOakFenceBlock::NORTH_TRUE;
    block->south = DarkOakFenceBlock::SOUTH_FALSE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_TRUE;
    block->west = DarkOakFenceBlock::WEST_TRUE;
    registry[9511] = block;
  }

  { // ID: 9512
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_FALSE;
    block->north = DarkOakFenceBlock::NORTH_TRUE;
    block->south = DarkOakFenceBlock::SOUTH_FALSE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_TRUE;
    block->west = DarkOakFenceBlock::WEST_FALSE;
    registry[9512] = block;
  }

  { // ID: 9513
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_FALSE;
    block->north = DarkOakFenceBlock::NORTH_TRUE;
    block->south = DarkOakFenceBlock::SOUTH_FALSE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_FALSE;
    block->west = DarkOakFenceBlock::WEST_TRUE;
    registry[9513] = block;
  }

  { // ID: 9514
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_FALSE;
    block->north = DarkOakFenceBlock::NORTH_TRUE;
    block->south = DarkOakFenceBlock::SOUTH_FALSE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_FALSE;
    block->west = DarkOakFenceBlock::WEST_FALSE;
    registry[9514] = block;
  }

  { // ID: 9515
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_FALSE;
    block->north = DarkOakFenceBlock::NORTH_FALSE;
    block->south = DarkOakFenceBlock::SOUTH_TRUE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_TRUE;
    block->west = DarkOakFenceBlock::WEST_TRUE;
    registry[9515] = block;
  }

  { // ID: 9516
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_FALSE;
    block->north = DarkOakFenceBlock::NORTH_FALSE;
    block->south = DarkOakFenceBlock::SOUTH_TRUE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_TRUE;
    block->west = DarkOakFenceBlock::WEST_FALSE;
    registry[9516] = block;
  }

  { // ID: 9517
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_FALSE;
    block->north = DarkOakFenceBlock::NORTH_FALSE;
    block->south = DarkOakFenceBlock::SOUTH_TRUE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_FALSE;
    block->west = DarkOakFenceBlock::WEST_TRUE;
    registry[9517] = block;
  }

  { // ID: 9518
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_FALSE;
    block->north = DarkOakFenceBlock::NORTH_FALSE;
    block->south = DarkOakFenceBlock::SOUTH_TRUE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_FALSE;
    block->west = DarkOakFenceBlock::WEST_FALSE;
    registry[9518] = block;
  }

  { // ID: 9519
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_FALSE;
    block->north = DarkOakFenceBlock::NORTH_FALSE;
    block->south = DarkOakFenceBlock::SOUTH_FALSE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_TRUE;
    block->west = DarkOakFenceBlock::WEST_TRUE;
    registry[9519] = block;
  }

  { // ID: 9520
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_FALSE;
    block->north = DarkOakFenceBlock::NORTH_FALSE;
    block->south = DarkOakFenceBlock::SOUTH_FALSE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_TRUE;
    block->west = DarkOakFenceBlock::WEST_FALSE;
    registry[9520] = block;
  }

  { // ID: 9521
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_FALSE;
    block->north = DarkOakFenceBlock::NORTH_FALSE;
    block->south = DarkOakFenceBlock::SOUTH_FALSE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_FALSE;
    block->west = DarkOakFenceBlock::WEST_TRUE;
    registry[9521] = block;
  }

  { // ID: 9522
    std::shared_ptr<DarkOakFenceBlock> block = std::make_shared<DarkOakFenceBlock>();
    block->east = DarkOakFenceBlock::EAST_FALSE;
    block->north = DarkOakFenceBlock::NORTH_FALSE;
    block->south = DarkOakFenceBlock::SOUTH_FALSE;
    block->waterlogged = DarkOakFenceBlock::WATERLOGGED_FALSE;
    block->west = DarkOakFenceBlock::WEST_FALSE;
    registry[9522] = block;
  }

  { // ID: 9811
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_NORTH;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9811] = block;
  }

  { // ID: 9812
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_NORTH;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9812] = block;
  }

  { // ID: 9813
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_NORTH;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9813] = block;
  }

  { // ID: 9814
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_NORTH;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9814] = block;
  }

  { // ID: 9815
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_NORTH;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9815] = block;
  }

  { // ID: 9816
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_NORTH;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9816] = block;
  }

  { // ID: 9817
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_NORTH;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9817] = block;
  }

  { // ID: 9818
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_NORTH;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9818] = block;
  }

  { // ID: 9819
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_NORTH;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9819] = block;
  }

  { // ID: 9820
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_NORTH;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9820] = block;
  }

  { // ID: 9821
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_NORTH;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9821] = block;
  }

  { // ID: 9822
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_NORTH;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9822] = block;
  }

  { // ID: 9823
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_NORTH;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9823] = block;
  }

  { // ID: 9824
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_NORTH;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9824] = block;
  }

  { // ID: 9825
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_NORTH;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9825] = block;
  }

  { // ID: 9826
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_NORTH;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9826] = block;
  }

  { // ID: 9827
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_SOUTH;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9827] = block;
  }

  { // ID: 9828
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_SOUTH;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9828] = block;
  }

  { // ID: 9829
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_SOUTH;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9829] = block;
  }

  { // ID: 9830
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_SOUTH;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9830] = block;
  }

  { // ID: 9831
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_SOUTH;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9831] = block;
  }

  { // ID: 9832
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_SOUTH;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9832] = block;
  }

  { // ID: 9833
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_SOUTH;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9833] = block;
  }

  { // ID: 9834
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_SOUTH;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9834] = block;
  }

  { // ID: 9835
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_SOUTH;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9835] = block;
  }

  { // ID: 9836
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_SOUTH;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9836] = block;
  }

  { // ID: 9837
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_SOUTH;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9837] = block;
  }

  { // ID: 9838
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_SOUTH;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9838] = block;
  }

  { // ID: 9839
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_SOUTH;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9839] = block;
  }

  { // ID: 9840
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_SOUTH;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9840] = block;
  }

  { // ID: 9841
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_SOUTH;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9841] = block;
  }

  { // ID: 9842
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_SOUTH;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9842] = block;
  }

  { // ID: 9843
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_WEST;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9843] = block;
  }

  { // ID: 9844
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_WEST;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9844] = block;
  }

  { // ID: 9845
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_WEST;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9845] = block;
  }

  { // ID: 9846
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_WEST;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9846] = block;
  }

  { // ID: 9847
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_WEST;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9847] = block;
  }

  { // ID: 9848
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_WEST;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9848] = block;
  }

  { // ID: 9849
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_WEST;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9849] = block;
  }

  { // ID: 9850
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_WEST;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9850] = block;
  }

  { // ID: 9851
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_WEST;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9851] = block;
  }

  { // ID: 9852
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_WEST;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9852] = block;
  }

  { // ID: 9853
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_WEST;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9853] = block;
  }

  { // ID: 9854
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_WEST;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9854] = block;
  }

  { // ID: 9855
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_WEST;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9855] = block;
  }

  { // ID: 9856
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_WEST;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9856] = block;
  }

  { // ID: 9857
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_WEST;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9857] = block;
  }

  { // ID: 9858
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_WEST;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9858] = block;
  }

  { // ID: 9859
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_EAST;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9859] = block;
  }

  { // ID: 9860
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_EAST;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9860] = block;
  }

  { // ID: 9861
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_EAST;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9861] = block;
  }

  { // ID: 9862
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_EAST;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9862] = block;
  }

  { // ID: 9863
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_EAST;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9863] = block;
  }

  { // ID: 9864
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_EAST;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9864] = block;
  }

  { // ID: 9865
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_EAST;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9865] = block;
  }

  { // ID: 9866
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_EAST;
    block->half = DarkOakDoorBlock::HALF_UPPER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9866] = block;
  }

  { // ID: 9867
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_EAST;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9867] = block;
  }

  { // ID: 9868
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_EAST;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9868] = block;
  }

  { // ID: 9869
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_EAST;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9869] = block;
  }

  { // ID: 9870
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_EAST;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_LEFT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9870] = block;
  }

  { // ID: 9871
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_EAST;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9871] = block;
  }

  { // ID: 9872
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_EAST;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_TRUE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9872] = block;
  }

  { // ID: 9873
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_EAST;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_TRUE;
    registry[9873] = block;
  }

  { // ID: 9874
    std::shared_ptr<DarkOakDoorBlock> block = std::make_shared<DarkOakDoorBlock>();
    block->facing = DarkOakDoorBlock::FACING_EAST;
    block->half = DarkOakDoorBlock::HALF_LOWER;
    block->hinge = DarkOakDoorBlock::HINGE_RIGHT;
    block->open = DarkOakDoorBlock::OPEN_FALSE;
    block->powered = DarkOakDoorBlock::POWERED_FALSE;
    registry[9874] = block;
  }

  { // ID: 10104
    std::shared_ptr<DirtPathBlock> block = std::make_shared<DirtPathBlock>();
    registry[10104] = block;
  }

  { // ID: 10378
    std::shared_ptr<DriedKelpBlockBlock> block = std::make_shared<DriedKelpBlockBlock>();
    registry[10378] = block;
  }

  { // ID: 10391
    std::shared_ptr<DeadTubeCoralBlockBlock> block = std::make_shared<DeadTubeCoralBlockBlock>();
    registry[10391] = block;
  }

  { // ID: 10392
    std::shared_ptr<DeadBrainCoralBlockBlock> block = std::make_shared<DeadBrainCoralBlockBlock>();
    registry[10392] = block;
  }

  { // ID: 10393
    std::shared_ptr<DeadBubbleCoralBlockBlock> block = std::make_shared<DeadBubbleCoralBlockBlock>();
    registry[10393] = block;
  }

  { // ID: 10394
    std::shared_ptr<DeadFireCoralBlockBlock> block = std::make_shared<DeadFireCoralBlockBlock>();
    registry[10394] = block;
  }

  { // ID: 10395
    std::shared_ptr<DeadHornCoralBlockBlock> block = std::make_shared<DeadHornCoralBlockBlock>();
    registry[10395] = block;
  }

  { // ID: 10401
    std::shared_ptr<DeadTubeCoralBlock> block = std::make_shared<DeadTubeCoralBlock>();
    block->waterlogged = DeadTubeCoralBlock::WATERLOGGED_TRUE;
    registry[10401] = block;
  }

  { // ID: 10402
    std::shared_ptr<DeadTubeCoralBlock> block = std::make_shared<DeadTubeCoralBlock>();
    block->waterlogged = DeadTubeCoralBlock::WATERLOGGED_FALSE;
    registry[10402] = block;
  }

  { // ID: 10403
    std::shared_ptr<DeadBrainCoralBlock> block = std::make_shared<DeadBrainCoralBlock>();
    block->waterlogged = DeadBrainCoralBlock::WATERLOGGED_TRUE;
    registry[10403] = block;
  }

  { // ID: 10404
    std::shared_ptr<DeadBrainCoralBlock> block = std::make_shared<DeadBrainCoralBlock>();
    block->waterlogged = DeadBrainCoralBlock::WATERLOGGED_FALSE;
    registry[10404] = block;
  }

  { // ID: 10405
    std::shared_ptr<DeadBubbleCoralBlock> block = std::make_shared<DeadBubbleCoralBlock>();
    block->waterlogged = DeadBubbleCoralBlock::WATERLOGGED_TRUE;
    registry[10405] = block;
  }

  { // ID: 10406
    std::shared_ptr<DeadBubbleCoralBlock> block = std::make_shared<DeadBubbleCoralBlock>();
    block->waterlogged = DeadBubbleCoralBlock::WATERLOGGED_FALSE;
    registry[10406] = block;
  }

  { // ID: 10407
    std::shared_ptr<DeadFireCoralBlock> block = std::make_shared<DeadFireCoralBlock>();
    block->waterlogged = DeadFireCoralBlock::WATERLOGGED_TRUE;
    registry[10407] = block;
  }

  { // ID: 10408
    std::shared_ptr<DeadFireCoralBlock> block = std::make_shared<DeadFireCoralBlock>();
    block->waterlogged = DeadFireCoralBlock::WATERLOGGED_FALSE;
    registry[10408] = block;
  }

  { // ID: 10409
    std::shared_ptr<DeadHornCoralBlock> block = std::make_shared<DeadHornCoralBlock>();
    block->waterlogged = DeadHornCoralBlock::WATERLOGGED_TRUE;
    registry[10409] = block;
  }

  { // ID: 10410
    std::shared_ptr<DeadHornCoralBlock> block = std::make_shared<DeadHornCoralBlock>();
    block->waterlogged = DeadHornCoralBlock::WATERLOGGED_FALSE;
    registry[10410] = block;
  }

  { // ID: 10421
    std::shared_ptr<DeadTubeCoralFanBlock> block = std::make_shared<DeadTubeCoralFanBlock>();
    block->waterlogged = DeadTubeCoralFanBlock::WATERLOGGED_TRUE;
    registry[10421] = block;
  }

  { // ID: 10422
    std::shared_ptr<DeadTubeCoralFanBlock> block = std::make_shared<DeadTubeCoralFanBlock>();
    block->waterlogged = DeadTubeCoralFanBlock::WATERLOGGED_FALSE;
    registry[10422] = block;
  }

  { // ID: 10423
    std::shared_ptr<DeadBrainCoralFanBlock> block = std::make_shared<DeadBrainCoralFanBlock>();
    block->waterlogged = DeadBrainCoralFanBlock::WATERLOGGED_TRUE;
    registry[10423] = block;
  }

  { // ID: 10424
    std::shared_ptr<DeadBrainCoralFanBlock> block = std::make_shared<DeadBrainCoralFanBlock>();
    block->waterlogged = DeadBrainCoralFanBlock::WATERLOGGED_FALSE;
    registry[10424] = block;
  }

  { // ID: 10425
    std::shared_ptr<DeadBubbleCoralFanBlock> block = std::make_shared<DeadBubbleCoralFanBlock>();
    block->waterlogged = DeadBubbleCoralFanBlock::WATERLOGGED_TRUE;
    registry[10425] = block;
  }

  { // ID: 10426
    std::shared_ptr<DeadBubbleCoralFanBlock> block = std::make_shared<DeadBubbleCoralFanBlock>();
    block->waterlogged = DeadBubbleCoralFanBlock::WATERLOGGED_FALSE;
    registry[10426] = block;
  }

  { // ID: 10427
    std::shared_ptr<DeadFireCoralFanBlock> block = std::make_shared<DeadFireCoralFanBlock>();
    block->waterlogged = DeadFireCoralFanBlock::WATERLOGGED_TRUE;
    registry[10427] = block;
  }

  { // ID: 10428
    std::shared_ptr<DeadFireCoralFanBlock> block = std::make_shared<DeadFireCoralFanBlock>();
    block->waterlogged = DeadFireCoralFanBlock::WATERLOGGED_FALSE;
    registry[10428] = block;
  }

  { // ID: 10429
    std::shared_ptr<DeadHornCoralFanBlock> block = std::make_shared<DeadHornCoralFanBlock>();
    block->waterlogged = DeadHornCoralFanBlock::WATERLOGGED_TRUE;
    registry[10429] = block;
  }

  { // ID: 10430
    std::shared_ptr<DeadHornCoralFanBlock> block = std::make_shared<DeadHornCoralFanBlock>();
    block->waterlogged = DeadHornCoralFanBlock::WATERLOGGED_FALSE;
    registry[10430] = block;
  }

  { // ID: 10441
    std::shared_ptr<DeadTubeCoralWallFanBlock> block = std::make_shared<DeadTubeCoralWallFanBlock>();
    block->facing = DeadTubeCoralWallFanBlock::FACING_NORTH;
    block->waterlogged = DeadTubeCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10441] = block;
  }

  { // ID: 10442
    std::shared_ptr<DeadTubeCoralWallFanBlock> block = std::make_shared<DeadTubeCoralWallFanBlock>();
    block->facing = DeadTubeCoralWallFanBlock::FACING_NORTH;
    block->waterlogged = DeadTubeCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10442] = block;
  }

  { // ID: 10443
    std::shared_ptr<DeadTubeCoralWallFanBlock> block = std::make_shared<DeadTubeCoralWallFanBlock>();
    block->facing = DeadTubeCoralWallFanBlock::FACING_SOUTH;
    block->waterlogged = DeadTubeCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10443] = block;
  }

  { // ID: 10444
    std::shared_ptr<DeadTubeCoralWallFanBlock> block = std::make_shared<DeadTubeCoralWallFanBlock>();
    block->facing = DeadTubeCoralWallFanBlock::FACING_SOUTH;
    block->waterlogged = DeadTubeCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10444] = block;
  }

  { // ID: 10445
    std::shared_ptr<DeadTubeCoralWallFanBlock> block = std::make_shared<DeadTubeCoralWallFanBlock>();
    block->facing = DeadTubeCoralWallFanBlock::FACING_WEST;
    block->waterlogged = DeadTubeCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10445] = block;
  }

  { // ID: 10446
    std::shared_ptr<DeadTubeCoralWallFanBlock> block = std::make_shared<DeadTubeCoralWallFanBlock>();
    block->facing = DeadTubeCoralWallFanBlock::FACING_WEST;
    block->waterlogged = DeadTubeCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10446] = block;
  }

  { // ID: 10447
    std::shared_ptr<DeadTubeCoralWallFanBlock> block = std::make_shared<DeadTubeCoralWallFanBlock>();
    block->facing = DeadTubeCoralWallFanBlock::FACING_EAST;
    block->waterlogged = DeadTubeCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10447] = block;
  }

  { // ID: 10448
    std::shared_ptr<DeadTubeCoralWallFanBlock> block = std::make_shared<DeadTubeCoralWallFanBlock>();
    block->facing = DeadTubeCoralWallFanBlock::FACING_EAST;
    block->waterlogged = DeadTubeCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10448] = block;
  }

  { // ID: 10449
    std::shared_ptr<DeadBrainCoralWallFanBlock> block = std::make_shared<DeadBrainCoralWallFanBlock>();
    block->facing = DeadBrainCoralWallFanBlock::FACING_NORTH;
    block->waterlogged = DeadBrainCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10449] = block;
  }

  { // ID: 10450
    std::shared_ptr<DeadBrainCoralWallFanBlock> block = std::make_shared<DeadBrainCoralWallFanBlock>();
    block->facing = DeadBrainCoralWallFanBlock::FACING_NORTH;
    block->waterlogged = DeadBrainCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10450] = block;
  }

  { // ID: 10451
    std::shared_ptr<DeadBrainCoralWallFanBlock> block = std::make_shared<DeadBrainCoralWallFanBlock>();
    block->facing = DeadBrainCoralWallFanBlock::FACING_SOUTH;
    block->waterlogged = DeadBrainCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10451] = block;
  }

  { // ID: 10452
    std::shared_ptr<DeadBrainCoralWallFanBlock> block = std::make_shared<DeadBrainCoralWallFanBlock>();
    block->facing = DeadBrainCoralWallFanBlock::FACING_SOUTH;
    block->waterlogged = DeadBrainCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10452] = block;
  }

  { // ID: 10453
    std::shared_ptr<DeadBrainCoralWallFanBlock> block = std::make_shared<DeadBrainCoralWallFanBlock>();
    block->facing = DeadBrainCoralWallFanBlock::FACING_WEST;
    block->waterlogged = DeadBrainCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10453] = block;
  }

  { // ID: 10454
    std::shared_ptr<DeadBrainCoralWallFanBlock> block = std::make_shared<DeadBrainCoralWallFanBlock>();
    block->facing = DeadBrainCoralWallFanBlock::FACING_WEST;
    block->waterlogged = DeadBrainCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10454] = block;
  }

  { // ID: 10455
    std::shared_ptr<DeadBrainCoralWallFanBlock> block = std::make_shared<DeadBrainCoralWallFanBlock>();
    block->facing = DeadBrainCoralWallFanBlock::FACING_EAST;
    block->waterlogged = DeadBrainCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10455] = block;
  }

  { // ID: 10456
    std::shared_ptr<DeadBrainCoralWallFanBlock> block = std::make_shared<DeadBrainCoralWallFanBlock>();
    block->facing = DeadBrainCoralWallFanBlock::FACING_EAST;
    block->waterlogged = DeadBrainCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10456] = block;
  }

  { // ID: 10457
    std::shared_ptr<DeadBubbleCoralWallFanBlock> block = std::make_shared<DeadBubbleCoralWallFanBlock>();
    block->facing = DeadBubbleCoralWallFanBlock::FACING_NORTH;
    block->waterlogged = DeadBubbleCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10457] = block;
  }

  { // ID: 10458
    std::shared_ptr<DeadBubbleCoralWallFanBlock> block = std::make_shared<DeadBubbleCoralWallFanBlock>();
    block->facing = DeadBubbleCoralWallFanBlock::FACING_NORTH;
    block->waterlogged = DeadBubbleCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10458] = block;
  }

  { // ID: 10459
    std::shared_ptr<DeadBubbleCoralWallFanBlock> block = std::make_shared<DeadBubbleCoralWallFanBlock>();
    block->facing = DeadBubbleCoralWallFanBlock::FACING_SOUTH;
    block->waterlogged = DeadBubbleCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10459] = block;
  }

  { // ID: 10460
    std::shared_ptr<DeadBubbleCoralWallFanBlock> block = std::make_shared<DeadBubbleCoralWallFanBlock>();
    block->facing = DeadBubbleCoralWallFanBlock::FACING_SOUTH;
    block->waterlogged = DeadBubbleCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10460] = block;
  }

  { // ID: 10461
    std::shared_ptr<DeadBubbleCoralWallFanBlock> block = std::make_shared<DeadBubbleCoralWallFanBlock>();
    block->facing = DeadBubbleCoralWallFanBlock::FACING_WEST;
    block->waterlogged = DeadBubbleCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10461] = block;
  }

  { // ID: 10462
    std::shared_ptr<DeadBubbleCoralWallFanBlock> block = std::make_shared<DeadBubbleCoralWallFanBlock>();
    block->facing = DeadBubbleCoralWallFanBlock::FACING_WEST;
    block->waterlogged = DeadBubbleCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10462] = block;
  }

  { // ID: 10463
    std::shared_ptr<DeadBubbleCoralWallFanBlock> block = std::make_shared<DeadBubbleCoralWallFanBlock>();
    block->facing = DeadBubbleCoralWallFanBlock::FACING_EAST;
    block->waterlogged = DeadBubbleCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10463] = block;
  }

  { // ID: 10464
    std::shared_ptr<DeadBubbleCoralWallFanBlock> block = std::make_shared<DeadBubbleCoralWallFanBlock>();
    block->facing = DeadBubbleCoralWallFanBlock::FACING_EAST;
    block->waterlogged = DeadBubbleCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10464] = block;
  }

  { // ID: 10465
    std::shared_ptr<DeadFireCoralWallFanBlock> block = std::make_shared<DeadFireCoralWallFanBlock>();
    block->facing = DeadFireCoralWallFanBlock::FACING_NORTH;
    block->waterlogged = DeadFireCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10465] = block;
  }

  { // ID: 10466
    std::shared_ptr<DeadFireCoralWallFanBlock> block = std::make_shared<DeadFireCoralWallFanBlock>();
    block->facing = DeadFireCoralWallFanBlock::FACING_NORTH;
    block->waterlogged = DeadFireCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10466] = block;
  }

  { // ID: 10467
    std::shared_ptr<DeadFireCoralWallFanBlock> block = std::make_shared<DeadFireCoralWallFanBlock>();
    block->facing = DeadFireCoralWallFanBlock::FACING_SOUTH;
    block->waterlogged = DeadFireCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10467] = block;
  }

  { // ID: 10468
    std::shared_ptr<DeadFireCoralWallFanBlock> block = std::make_shared<DeadFireCoralWallFanBlock>();
    block->facing = DeadFireCoralWallFanBlock::FACING_SOUTH;
    block->waterlogged = DeadFireCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10468] = block;
  }

  { // ID: 10469
    std::shared_ptr<DeadFireCoralWallFanBlock> block = std::make_shared<DeadFireCoralWallFanBlock>();
    block->facing = DeadFireCoralWallFanBlock::FACING_WEST;
    block->waterlogged = DeadFireCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10469] = block;
  }

  { // ID: 10470
    std::shared_ptr<DeadFireCoralWallFanBlock> block = std::make_shared<DeadFireCoralWallFanBlock>();
    block->facing = DeadFireCoralWallFanBlock::FACING_WEST;
    block->waterlogged = DeadFireCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10470] = block;
  }

  { // ID: 10471
    std::shared_ptr<DeadFireCoralWallFanBlock> block = std::make_shared<DeadFireCoralWallFanBlock>();
    block->facing = DeadFireCoralWallFanBlock::FACING_EAST;
    block->waterlogged = DeadFireCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10471] = block;
  }

  { // ID: 10472
    std::shared_ptr<DeadFireCoralWallFanBlock> block = std::make_shared<DeadFireCoralWallFanBlock>();
    block->facing = DeadFireCoralWallFanBlock::FACING_EAST;
    block->waterlogged = DeadFireCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10472] = block;
  }

  { // ID: 10473
    std::shared_ptr<DeadHornCoralWallFanBlock> block = std::make_shared<DeadHornCoralWallFanBlock>();
    block->facing = DeadHornCoralWallFanBlock::FACING_NORTH;
    block->waterlogged = DeadHornCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10473] = block;
  }

  { // ID: 10474
    std::shared_ptr<DeadHornCoralWallFanBlock> block = std::make_shared<DeadHornCoralWallFanBlock>();
    block->facing = DeadHornCoralWallFanBlock::FACING_NORTH;
    block->waterlogged = DeadHornCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10474] = block;
  }

  { // ID: 10475
    std::shared_ptr<DeadHornCoralWallFanBlock> block = std::make_shared<DeadHornCoralWallFanBlock>();
    block->facing = DeadHornCoralWallFanBlock::FACING_SOUTH;
    block->waterlogged = DeadHornCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10475] = block;
  }

  { // ID: 10476
    std::shared_ptr<DeadHornCoralWallFanBlock> block = std::make_shared<DeadHornCoralWallFanBlock>();
    block->facing = DeadHornCoralWallFanBlock::FACING_SOUTH;
    block->waterlogged = DeadHornCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10476] = block;
  }

  { // ID: 10477
    std::shared_ptr<DeadHornCoralWallFanBlock> block = std::make_shared<DeadHornCoralWallFanBlock>();
    block->facing = DeadHornCoralWallFanBlock::FACING_WEST;
    block->waterlogged = DeadHornCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10477] = block;
  }

  { // ID: 10478
    std::shared_ptr<DeadHornCoralWallFanBlock> block = std::make_shared<DeadHornCoralWallFanBlock>();
    block->facing = DeadHornCoralWallFanBlock::FACING_WEST;
    block->waterlogged = DeadHornCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10478] = block;
  }

  { // ID: 10479
    std::shared_ptr<DeadHornCoralWallFanBlock> block = std::make_shared<DeadHornCoralWallFanBlock>();
    block->facing = DeadHornCoralWallFanBlock::FACING_EAST;
    block->waterlogged = DeadHornCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10479] = block;
  }

  { // ID: 10480
    std::shared_ptr<DeadHornCoralWallFanBlock> block = std::make_shared<DeadHornCoralWallFanBlock>();
    block->facing = DeadHornCoralWallFanBlock::FACING_EAST;
    block->waterlogged = DeadHornCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10480] = block;
  }

  { // ID: 11590
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_NORTH;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11590] = block;
  }

  { // ID: 11591
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_NORTH;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11591] = block;
  }

  { // ID: 11592
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_NORTH;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11592] = block;
  }

  { // ID: 11593
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_NORTH;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11593] = block;
  }

  { // ID: 11594
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_NORTH;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11594] = block;
  }

  { // ID: 11595
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_NORTH;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11595] = block;
  }

  { // ID: 11596
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_NORTH;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11596] = block;
  }

  { // ID: 11597
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_NORTH;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11597] = block;
  }

  { // ID: 11598
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_NORTH;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11598] = block;
  }

  { // ID: 11599
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_NORTH;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11599] = block;
  }

  { // ID: 11600
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_NORTH;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11600] = block;
  }

  { // ID: 11601
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_NORTH;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11601] = block;
  }

  { // ID: 11602
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_NORTH;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11602] = block;
  }

  { // ID: 11603
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_NORTH;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11603] = block;
  }

  { // ID: 11604
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_NORTH;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11604] = block;
  }

  { // ID: 11605
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_NORTH;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11605] = block;
  }

  { // ID: 11606
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_NORTH;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11606] = block;
  }

  { // ID: 11607
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_NORTH;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11607] = block;
  }

  { // ID: 11608
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_NORTH;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11608] = block;
  }

  { // ID: 11609
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_NORTH;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11609] = block;
  }

  { // ID: 11610
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_SOUTH;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11610] = block;
  }

  { // ID: 11611
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_SOUTH;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11611] = block;
  }

  { // ID: 11612
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_SOUTH;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11612] = block;
  }

  { // ID: 11613
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_SOUTH;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11613] = block;
  }

  { // ID: 11614
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_SOUTH;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11614] = block;
  }

  { // ID: 11615
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_SOUTH;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11615] = block;
  }

  { // ID: 11616
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_SOUTH;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11616] = block;
  }

  { // ID: 11617
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_SOUTH;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11617] = block;
  }

  { // ID: 11618
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_SOUTH;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11618] = block;
  }

  { // ID: 11619
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_SOUTH;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11619] = block;
  }

  { // ID: 11620
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_SOUTH;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11620] = block;
  }

  { // ID: 11621
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_SOUTH;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11621] = block;
  }

  { // ID: 11622
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_SOUTH;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11622] = block;
  }

  { // ID: 11623
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_SOUTH;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11623] = block;
  }

  { // ID: 11624
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_SOUTH;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11624] = block;
  }

  { // ID: 11625
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_SOUTH;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11625] = block;
  }

  { // ID: 11626
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_SOUTH;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11626] = block;
  }

  { // ID: 11627
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_SOUTH;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11627] = block;
  }

  { // ID: 11628
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_SOUTH;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11628] = block;
  }

  { // ID: 11629
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_SOUTH;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11629] = block;
  }

  { // ID: 11630
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_WEST;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11630] = block;
  }

  { // ID: 11631
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_WEST;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11631] = block;
  }

  { // ID: 11632
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_WEST;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11632] = block;
  }

  { // ID: 11633
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_WEST;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11633] = block;
  }

  { // ID: 11634
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_WEST;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11634] = block;
  }

  { // ID: 11635
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_WEST;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11635] = block;
  }

  { // ID: 11636
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_WEST;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11636] = block;
  }

  { // ID: 11637
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_WEST;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11637] = block;
  }

  { // ID: 11638
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_WEST;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11638] = block;
  }

  { // ID: 11639
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_WEST;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11639] = block;
  }

  { // ID: 11640
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_WEST;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11640] = block;
  }

  { // ID: 11641
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_WEST;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11641] = block;
  }

  { // ID: 11642
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_WEST;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11642] = block;
  }

  { // ID: 11643
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_WEST;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11643] = block;
  }

  { // ID: 11644
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_WEST;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11644] = block;
  }

  { // ID: 11645
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_WEST;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11645] = block;
  }

  { // ID: 11646
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_WEST;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11646] = block;
  }

  { // ID: 11647
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_WEST;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11647] = block;
  }

  { // ID: 11648
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_WEST;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11648] = block;
  }

  { // ID: 11649
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_WEST;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11649] = block;
  }

  { // ID: 11650
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_EAST;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11650] = block;
  }

  { // ID: 11651
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_EAST;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11651] = block;
  }

  { // ID: 11652
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_EAST;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11652] = block;
  }

  { // ID: 11653
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_EAST;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11653] = block;
  }

  { // ID: 11654
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_EAST;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11654] = block;
  }

  { // ID: 11655
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_EAST;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11655] = block;
  }

  { // ID: 11656
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_EAST;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11656] = block;
  }

  { // ID: 11657
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_EAST;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11657] = block;
  }

  { // ID: 11658
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_EAST;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11658] = block;
  }

  { // ID: 11659
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_EAST;
    block->half = DioriteStairsBlock::HALF_TOP;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11659] = block;
  }

  { // ID: 11660
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_EAST;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11660] = block;
  }

  { // ID: 11661
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_EAST;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11661] = block;
  }

  { // ID: 11662
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_EAST;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11662] = block;
  }

  { // ID: 11663
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_EAST;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11663] = block;
  }

  { // ID: 11664
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_EAST;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11664] = block;
  }

  { // ID: 11665
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_EAST;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11665] = block;
  }

  { // ID: 11666
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_EAST;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11666] = block;
  }

  { // ID: 11667
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_EAST;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11667] = block;
  }

  { // ID: 11668
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_EAST;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_TRUE;
    registry[11668] = block;
  }

  { // ID: 11669
    std::shared_ptr<DioriteStairsBlock> block = std::make_shared<DioriteStairsBlock>();
    block->facing = DioriteStairsBlock::FACING_EAST;
    block->half = DioriteStairsBlock::HALF_BOTTOM;
    block->shape = DioriteStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DioriteStairsBlock::WATERLOGGED_FALSE;
    registry[11669] = block;
  }

  { // ID: 11742
    std::shared_ptr<DioriteSlabBlock> block = std::make_shared<DioriteSlabBlock>();
    block->type = DioriteSlabBlock::TYPE_TOP;
    block->waterlogged = DioriteSlabBlock::WATERLOGGED_TRUE;
    registry[11742] = block;
  }

  { // ID: 11743
    std::shared_ptr<DioriteSlabBlock> block = std::make_shared<DioriteSlabBlock>();
    block->type = DioriteSlabBlock::TYPE_TOP;
    block->waterlogged = DioriteSlabBlock::WATERLOGGED_FALSE;
    registry[11743] = block;
  }

  { // ID: 11744
    std::shared_ptr<DioriteSlabBlock> block = std::make_shared<DioriteSlabBlock>();
    block->type = DioriteSlabBlock::TYPE_BOTTOM;
    block->waterlogged = DioriteSlabBlock::WATERLOGGED_TRUE;
    registry[11744] = block;
  }

  { // ID: 11745
    std::shared_ptr<DioriteSlabBlock> block = std::make_shared<DioriteSlabBlock>();
    block->type = DioriteSlabBlock::TYPE_BOTTOM;
    block->waterlogged = DioriteSlabBlock::WATERLOGGED_FALSE;
    registry[11745] = block;
  }

  { // ID: 11746
    std::shared_ptr<DioriteSlabBlock> block = std::make_shared<DioriteSlabBlock>();
    block->type = DioriteSlabBlock::TYPE_DOUBLE;
    block->waterlogged = DioriteSlabBlock::WATERLOGGED_TRUE;
    registry[11746] = block;
  }

  { // ID: 11747
    std::shared_ptr<DioriteSlabBlock> block = std::make_shared<DioriteSlabBlock>();
    block->type = DioriteSlabBlock::TYPE_DOUBLE;
    block->waterlogged = DioriteSlabBlock::WATERLOGGED_FALSE;
    registry[11747] = block;
  }

  { // ID: 15636
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15636] = block;
  }

  { // ID: 15637
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15637] = block;
  }

  { // ID: 15638
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15638] = block;
  }

  { // ID: 15639
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15639] = block;
  }

  { // ID: 15640
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15640] = block;
  }

  { // ID: 15641
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15641] = block;
  }

  { // ID: 15642
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15642] = block;
  }

  { // ID: 15643
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15643] = block;
  }

  { // ID: 15644
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15644] = block;
  }

  { // ID: 15645
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15645] = block;
  }

  { // ID: 15646
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15646] = block;
  }

  { // ID: 15647
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15647] = block;
  }

  { // ID: 15648
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15648] = block;
  }

  { // ID: 15649
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15649] = block;
  }

  { // ID: 15650
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15650] = block;
  }

  { // ID: 15651
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15651] = block;
  }

  { // ID: 15652
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15652] = block;
  }

  { // ID: 15653
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15653] = block;
  }

  { // ID: 15654
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15654] = block;
  }

  { // ID: 15655
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15655] = block;
  }

  { // ID: 15656
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15656] = block;
  }

  { // ID: 15657
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15657] = block;
  }

  { // ID: 15658
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15658] = block;
  }

  { // ID: 15659
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15659] = block;
  }

  { // ID: 15660
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15660] = block;
  }

  { // ID: 15661
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15661] = block;
  }

  { // ID: 15662
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15662] = block;
  }

  { // ID: 15663
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15663] = block;
  }

  { // ID: 15664
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15664] = block;
  }

  { // ID: 15665
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15665] = block;
  }

  { // ID: 15666
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15666] = block;
  }

  { // ID: 15667
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15667] = block;
  }

  { // ID: 15668
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15668] = block;
  }

  { // ID: 15669
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15669] = block;
  }

  { // ID: 15670
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15670] = block;
  }

  { // ID: 15671
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15671] = block;
  }

  { // ID: 15672
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15672] = block;
  }

  { // ID: 15673
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15673] = block;
  }

  { // ID: 15674
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15674] = block;
  }

  { // ID: 15675
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15675] = block;
  }

  { // ID: 15676
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15676] = block;
  }

  { // ID: 15677
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15677] = block;
  }

  { // ID: 15678
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15678] = block;
  }

  { // ID: 15679
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15679] = block;
  }

  { // ID: 15680
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15680] = block;
  }

  { // ID: 15681
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15681] = block;
  }

  { // ID: 15682
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15682] = block;
  }

  { // ID: 15683
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15683] = block;
  }

  { // ID: 15684
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15684] = block;
  }

  { // ID: 15685
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15685] = block;
  }

  { // ID: 15686
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15686] = block;
  }

  { // ID: 15687
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15687] = block;
  }

  { // ID: 15688
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15688] = block;
  }

  { // ID: 15689
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15689] = block;
  }

  { // ID: 15690
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15690] = block;
  }

  { // ID: 15691
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15691] = block;
  }

  { // ID: 15692
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15692] = block;
  }

  { // ID: 15693
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15693] = block;
  }

  { // ID: 15694
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15694] = block;
  }

  { // ID: 15695
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15695] = block;
  }

  { // ID: 15696
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15696] = block;
  }

  { // ID: 15697
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15697] = block;
  }

  { // ID: 15698
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15698] = block;
  }

  { // ID: 15699
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15699] = block;
  }

  { // ID: 15700
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15700] = block;
  }

  { // ID: 15701
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15701] = block;
  }

  { // ID: 15702
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15702] = block;
  }

  { // ID: 15703
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15703] = block;
  }

  { // ID: 15704
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15704] = block;
  }

  { // ID: 15705
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15705] = block;
  }

  { // ID: 15706
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15706] = block;
  }

  { // ID: 15707
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15707] = block;
  }

  { // ID: 15708
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15708] = block;
  }

  { // ID: 15709
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15709] = block;
  }

  { // ID: 15710
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15710] = block;
  }

  { // ID: 15711
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15711] = block;
  }

  { // ID: 15712
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15712] = block;
  }

  { // ID: 15713
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15713] = block;
  }

  { // ID: 15714
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15714] = block;
  }

  { // ID: 15715
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15715] = block;
  }

  { // ID: 15716
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15716] = block;
  }

  { // ID: 15717
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15717] = block;
  }

  { // ID: 15718
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15718] = block;
  }

  { // ID: 15719
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15719] = block;
  }

  { // ID: 15720
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15720] = block;
  }

  { // ID: 15721
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15721] = block;
  }

  { // ID: 15722
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15722] = block;
  }

  { // ID: 15723
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15723] = block;
  }

  { // ID: 15724
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15724] = block;
  }

  { // ID: 15725
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15725] = block;
  }

  { // ID: 15726
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15726] = block;
  }

  { // ID: 15727
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15727] = block;
  }

  { // ID: 15728
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15728] = block;
  }

  { // ID: 15729
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15729] = block;
  }

  { // ID: 15730
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15730] = block;
  }

  { // ID: 15731
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15731] = block;
  }

  { // ID: 15732
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15732] = block;
  }

  { // ID: 15733
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15733] = block;
  }

  { // ID: 15734
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15734] = block;
  }

  { // ID: 15735
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15735] = block;
  }

  { // ID: 15736
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15736] = block;
  }

  { // ID: 15737
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15737] = block;
  }

  { // ID: 15738
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15738] = block;
  }

  { // ID: 15739
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15739] = block;
  }

  { // ID: 15740
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15740] = block;
  }

  { // ID: 15741
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15741] = block;
  }

  { // ID: 15742
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15742] = block;
  }

  { // ID: 15743
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_NONE;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15743] = block;
  }

  { // ID: 15744
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15744] = block;
  }

  { // ID: 15745
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15745] = block;
  }

  { // ID: 15746
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15746] = block;
  }

  { // ID: 15747
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15747] = block;
  }

  { // ID: 15748
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15748] = block;
  }

  { // ID: 15749
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15749] = block;
  }

  { // ID: 15750
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15750] = block;
  }

  { // ID: 15751
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15751] = block;
  }

  { // ID: 15752
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15752] = block;
  }

  { // ID: 15753
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15753] = block;
  }

  { // ID: 15754
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15754] = block;
  }

  { // ID: 15755
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15755] = block;
  }

  { // ID: 15756
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15756] = block;
  }

  { // ID: 15757
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15757] = block;
  }

  { // ID: 15758
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15758] = block;
  }

  { // ID: 15759
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15759] = block;
  }

  { // ID: 15760
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15760] = block;
  }

  { // ID: 15761
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15761] = block;
  }

  { // ID: 15762
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15762] = block;
  }

  { // ID: 15763
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15763] = block;
  }

  { // ID: 15764
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15764] = block;
  }

  { // ID: 15765
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15765] = block;
  }

  { // ID: 15766
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15766] = block;
  }

  { // ID: 15767
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15767] = block;
  }

  { // ID: 15768
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15768] = block;
  }

  { // ID: 15769
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15769] = block;
  }

  { // ID: 15770
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15770] = block;
  }

  { // ID: 15771
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15771] = block;
  }

  { // ID: 15772
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15772] = block;
  }

  { // ID: 15773
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15773] = block;
  }

  { // ID: 15774
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15774] = block;
  }

  { // ID: 15775
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15775] = block;
  }

  { // ID: 15776
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15776] = block;
  }

  { // ID: 15777
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15777] = block;
  }

  { // ID: 15778
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15778] = block;
  }

  { // ID: 15779
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15779] = block;
  }

  { // ID: 15780
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15780] = block;
  }

  { // ID: 15781
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15781] = block;
  }

  { // ID: 15782
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15782] = block;
  }

  { // ID: 15783
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15783] = block;
  }

  { // ID: 15784
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15784] = block;
  }

  { // ID: 15785
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15785] = block;
  }

  { // ID: 15786
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15786] = block;
  }

  { // ID: 15787
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15787] = block;
  }

  { // ID: 15788
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15788] = block;
  }

  { // ID: 15789
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15789] = block;
  }

  { // ID: 15790
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15790] = block;
  }

  { // ID: 15791
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15791] = block;
  }

  { // ID: 15792
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15792] = block;
  }

  { // ID: 15793
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15793] = block;
  }

  { // ID: 15794
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15794] = block;
  }

  { // ID: 15795
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15795] = block;
  }

  { // ID: 15796
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15796] = block;
  }

  { // ID: 15797
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15797] = block;
  }

  { // ID: 15798
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15798] = block;
  }

  { // ID: 15799
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15799] = block;
  }

  { // ID: 15800
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15800] = block;
  }

  { // ID: 15801
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15801] = block;
  }

  { // ID: 15802
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15802] = block;
  }

  { // ID: 15803
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15803] = block;
  }

  { // ID: 15804
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15804] = block;
  }

  { // ID: 15805
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15805] = block;
  }

  { // ID: 15806
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15806] = block;
  }

  { // ID: 15807
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15807] = block;
  }

  { // ID: 15808
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15808] = block;
  }

  { // ID: 15809
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15809] = block;
  }

  { // ID: 15810
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15810] = block;
  }

  { // ID: 15811
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15811] = block;
  }

  { // ID: 15812
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15812] = block;
  }

  { // ID: 15813
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15813] = block;
  }

  { // ID: 15814
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15814] = block;
  }

  { // ID: 15815
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15815] = block;
  }

  { // ID: 15816
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15816] = block;
  }

  { // ID: 15817
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15817] = block;
  }

  { // ID: 15818
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15818] = block;
  }

  { // ID: 15819
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15819] = block;
  }

  { // ID: 15820
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15820] = block;
  }

  { // ID: 15821
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15821] = block;
  }

  { // ID: 15822
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15822] = block;
  }

  { // ID: 15823
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15823] = block;
  }

  { // ID: 15824
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15824] = block;
  }

  { // ID: 15825
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15825] = block;
  }

  { // ID: 15826
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15826] = block;
  }

  { // ID: 15827
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15827] = block;
  }

  { // ID: 15828
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15828] = block;
  }

  { // ID: 15829
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15829] = block;
  }

  { // ID: 15830
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15830] = block;
  }

  { // ID: 15831
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15831] = block;
  }

  { // ID: 15832
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15832] = block;
  }

  { // ID: 15833
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15833] = block;
  }

  { // ID: 15834
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15834] = block;
  }

  { // ID: 15835
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15835] = block;
  }

  { // ID: 15836
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15836] = block;
  }

  { // ID: 15837
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15837] = block;
  }

  { // ID: 15838
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15838] = block;
  }

  { // ID: 15839
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15839] = block;
  }

  { // ID: 15840
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15840] = block;
  }

  { // ID: 15841
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15841] = block;
  }

  { // ID: 15842
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15842] = block;
  }

  { // ID: 15843
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15843] = block;
  }

  { // ID: 15844
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15844] = block;
  }

  { // ID: 15845
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15845] = block;
  }

  { // ID: 15846
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15846] = block;
  }

  { // ID: 15847
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15847] = block;
  }

  { // ID: 15848
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15848] = block;
  }

  { // ID: 15849
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15849] = block;
  }

  { // ID: 15850
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15850] = block;
  }

  { // ID: 15851
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_LOW;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15851] = block;
  }

  { // ID: 15852
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15852] = block;
  }

  { // ID: 15853
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15853] = block;
  }

  { // ID: 15854
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15854] = block;
  }

  { // ID: 15855
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15855] = block;
  }

  { // ID: 15856
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15856] = block;
  }

  { // ID: 15857
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15857] = block;
  }

  { // ID: 15858
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15858] = block;
  }

  { // ID: 15859
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15859] = block;
  }

  { // ID: 15860
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15860] = block;
  }

  { // ID: 15861
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15861] = block;
  }

  { // ID: 15862
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15862] = block;
  }

  { // ID: 15863
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15863] = block;
  }

  { // ID: 15864
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15864] = block;
  }

  { // ID: 15865
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15865] = block;
  }

  { // ID: 15866
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15866] = block;
  }

  { // ID: 15867
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15867] = block;
  }

  { // ID: 15868
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15868] = block;
  }

  { // ID: 15869
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15869] = block;
  }

  { // ID: 15870
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15870] = block;
  }

  { // ID: 15871
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15871] = block;
  }

  { // ID: 15872
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15872] = block;
  }

  { // ID: 15873
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15873] = block;
  }

  { // ID: 15874
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15874] = block;
  }

  { // ID: 15875
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15875] = block;
  }

  { // ID: 15876
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15876] = block;
  }

  { // ID: 15877
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15877] = block;
  }

  { // ID: 15878
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15878] = block;
  }

  { // ID: 15879
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15879] = block;
  }

  { // ID: 15880
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15880] = block;
  }

  { // ID: 15881
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15881] = block;
  }

  { // ID: 15882
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15882] = block;
  }

  { // ID: 15883
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15883] = block;
  }

  { // ID: 15884
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15884] = block;
  }

  { // ID: 15885
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15885] = block;
  }

  { // ID: 15886
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15886] = block;
  }

  { // ID: 15887
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_NONE;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15887] = block;
  }

  { // ID: 15888
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15888] = block;
  }

  { // ID: 15889
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15889] = block;
  }

  { // ID: 15890
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15890] = block;
  }

  { // ID: 15891
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15891] = block;
  }

  { // ID: 15892
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15892] = block;
  }

  { // ID: 15893
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15893] = block;
  }

  { // ID: 15894
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15894] = block;
  }

  { // ID: 15895
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15895] = block;
  }

  { // ID: 15896
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15896] = block;
  }

  { // ID: 15897
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15897] = block;
  }

  { // ID: 15898
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15898] = block;
  }

  { // ID: 15899
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15899] = block;
  }

  { // ID: 15900
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15900] = block;
  }

  { // ID: 15901
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15901] = block;
  }

  { // ID: 15902
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15902] = block;
  }

  { // ID: 15903
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15903] = block;
  }

  { // ID: 15904
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15904] = block;
  }

  { // ID: 15905
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15905] = block;
  }

  { // ID: 15906
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15906] = block;
  }

  { // ID: 15907
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15907] = block;
  }

  { // ID: 15908
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15908] = block;
  }

  { // ID: 15909
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15909] = block;
  }

  { // ID: 15910
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15910] = block;
  }

  { // ID: 15911
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15911] = block;
  }

  { // ID: 15912
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15912] = block;
  }

  { // ID: 15913
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15913] = block;
  }

  { // ID: 15914
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15914] = block;
  }

  { // ID: 15915
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15915] = block;
  }

  { // ID: 15916
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15916] = block;
  }

  { // ID: 15917
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15917] = block;
  }

  { // ID: 15918
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15918] = block;
  }

  { // ID: 15919
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15919] = block;
  }

  { // ID: 15920
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15920] = block;
  }

  { // ID: 15921
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15921] = block;
  }

  { // ID: 15922
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15922] = block;
  }

  { // ID: 15923
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_LOW;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15923] = block;
  }

  { // ID: 15924
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15924] = block;
  }

  { // ID: 15925
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15925] = block;
  }

  { // ID: 15926
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15926] = block;
  }

  { // ID: 15927
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15927] = block;
  }

  { // ID: 15928
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15928] = block;
  }

  { // ID: 15929
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15929] = block;
  }

  { // ID: 15930
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15930] = block;
  }

  { // ID: 15931
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15931] = block;
  }

  { // ID: 15932
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15932] = block;
  }

  { // ID: 15933
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15933] = block;
  }

  { // ID: 15934
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15934] = block;
  }

  { // ID: 15935
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_NONE;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15935] = block;
  }

  { // ID: 15936
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15936] = block;
  }

  { // ID: 15937
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15937] = block;
  }

  { // ID: 15938
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15938] = block;
  }

  { // ID: 15939
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15939] = block;
  }

  { // ID: 15940
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15940] = block;
  }

  { // ID: 15941
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15941] = block;
  }

  { // ID: 15942
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15942] = block;
  }

  { // ID: 15943
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15943] = block;
  }

  { // ID: 15944
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15944] = block;
  }

  { // ID: 15945
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15945] = block;
  }

  { // ID: 15946
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15946] = block;
  }

  { // ID: 15947
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_LOW;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15947] = block;
  }

  { // ID: 15948
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15948] = block;
  }

  { // ID: 15949
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15949] = block;
  }

  { // ID: 15950
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15950] = block;
  }

  { // ID: 15951
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15951] = block;
  }

  { // ID: 15952
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15952] = block;
  }

  { // ID: 15953
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_TRUE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15953] = block;
  }

  { // ID: 15954
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15954] = block;
  }

  { // ID: 15955
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15955] = block;
  }

  { // ID: 15956
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_TRUE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15956] = block;
  }

  { // ID: 15957
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_NONE;
    registry[15957] = block;
  }

  { // ID: 15958
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_LOW;
    registry[15958] = block;
  }

  { // ID: 15959
    std::shared_ptr<DioriteWallBlock> block = std::make_shared<DioriteWallBlock>();
    block->east = DioriteWallBlock::EAST_TALL;
    block->north = DioriteWallBlock::NORTH_TALL;
    block->south = DioriteWallBlock::SOUTH_TALL;
    block->up = DioriteWallBlock::UP_FALSE;
    block->waterlogged = DioriteWallBlock::WATERLOGGED_FALSE;
    block->west = DioriteWallBlock::WEST_TALL;
    registry[15959] = block;
  }

  { // ID: 18913
    std::shared_ptr<DeepslateCopperOreBlock> block = std::make_shared<DeepslateCopperOreBlock>();
    registry[18913] = block;
  }

  { // ID: 19658
    std::shared_ptr<DripstoneBlockBlock> block = std::make_shared<DripstoneBlockBlock>();
    registry[19658] = block;
  }

  { // ID: 19778
    std::shared_ptr<DeepslateBlock> block = std::make_shared<DeepslateBlock>();
    block->axis = DeepslateBlock::AXIS_X;
    registry[19778] = block;
  }

  { // ID: 19779
    std::shared_ptr<DeepslateBlock> block = std::make_shared<DeepslateBlock>();
    block->axis = DeepslateBlock::AXIS_Y;
    registry[19779] = block;
  }

  { // ID: 19780
    std::shared_ptr<DeepslateBlock> block = std::make_shared<DeepslateBlock>();
    block->axis = DeepslateBlock::AXIS_Z;
    registry[19780] = block;
  }

  { // ID: 20603
    std::shared_ptr<DeepslateTilesBlock> block = std::make_shared<DeepslateTilesBlock>();
    registry[20603] = block;
  }

  { // ID: 20604
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_NORTH;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20604] = block;
  }

  { // ID: 20605
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_NORTH;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20605] = block;
  }

  { // ID: 20606
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_NORTH;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20606] = block;
  }

  { // ID: 20607
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_NORTH;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20607] = block;
  }

  { // ID: 20608
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_NORTH;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20608] = block;
  }

  { // ID: 20609
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_NORTH;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20609] = block;
  }

  { // ID: 20610
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_NORTH;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20610] = block;
  }

  { // ID: 20611
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_NORTH;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20611] = block;
  }

  { // ID: 20612
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_NORTH;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20612] = block;
  }

  { // ID: 20613
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_NORTH;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20613] = block;
  }

  { // ID: 20614
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_NORTH;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20614] = block;
  }

  { // ID: 20615
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_NORTH;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20615] = block;
  }

  { // ID: 20616
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_NORTH;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20616] = block;
  }

  { // ID: 20617
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_NORTH;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20617] = block;
  }

  { // ID: 20618
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_NORTH;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20618] = block;
  }

  { // ID: 20619
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_NORTH;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20619] = block;
  }

  { // ID: 20620
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_NORTH;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20620] = block;
  }

  { // ID: 20621
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_NORTH;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20621] = block;
  }

  { // ID: 20622
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_NORTH;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20622] = block;
  }

  { // ID: 20623
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_NORTH;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20623] = block;
  }

  { // ID: 20624
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_SOUTH;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20624] = block;
  }

  { // ID: 20625
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_SOUTH;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20625] = block;
  }

  { // ID: 20626
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_SOUTH;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20626] = block;
  }

  { // ID: 20627
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_SOUTH;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20627] = block;
  }

  { // ID: 20628
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_SOUTH;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20628] = block;
  }

  { // ID: 20629
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_SOUTH;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20629] = block;
  }

  { // ID: 20630
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_SOUTH;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20630] = block;
  }

  { // ID: 20631
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_SOUTH;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20631] = block;
  }

  { // ID: 20632
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_SOUTH;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20632] = block;
  }

  { // ID: 20633
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_SOUTH;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20633] = block;
  }

  { // ID: 20634
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_SOUTH;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20634] = block;
  }

  { // ID: 20635
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_SOUTH;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20635] = block;
  }

  { // ID: 20636
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_SOUTH;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20636] = block;
  }

  { // ID: 20637
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_SOUTH;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20637] = block;
  }

  { // ID: 20638
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_SOUTH;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20638] = block;
  }

  { // ID: 20639
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_SOUTH;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20639] = block;
  }

  { // ID: 20640
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_SOUTH;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20640] = block;
  }

  { // ID: 20641
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_SOUTH;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20641] = block;
  }

  { // ID: 20642
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_SOUTH;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20642] = block;
  }

  { // ID: 20643
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_SOUTH;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20643] = block;
  }

  { // ID: 20644
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_WEST;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20644] = block;
  }

  { // ID: 20645
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_WEST;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20645] = block;
  }

  { // ID: 20646
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_WEST;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20646] = block;
  }

  { // ID: 20647
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_WEST;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20647] = block;
  }

  { // ID: 20648
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_WEST;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20648] = block;
  }

  { // ID: 20649
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_WEST;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20649] = block;
  }

  { // ID: 20650
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_WEST;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20650] = block;
  }

  { // ID: 20651
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_WEST;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20651] = block;
  }

  { // ID: 20652
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_WEST;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20652] = block;
  }

  { // ID: 20653
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_WEST;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20653] = block;
  }

  { // ID: 20654
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_WEST;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20654] = block;
  }

  { // ID: 20655
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_WEST;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20655] = block;
  }

  { // ID: 20656
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_WEST;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20656] = block;
  }

  { // ID: 20657
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_WEST;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20657] = block;
  }

  { // ID: 20658
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_WEST;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20658] = block;
  }

  { // ID: 20659
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_WEST;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20659] = block;
  }

  { // ID: 20660
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_WEST;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20660] = block;
  }

  { // ID: 20661
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_WEST;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20661] = block;
  }

  { // ID: 20662
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_WEST;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20662] = block;
  }

  { // ID: 20663
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_WEST;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20663] = block;
  }

  { // ID: 20664
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_EAST;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20664] = block;
  }

  { // ID: 20665
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_EAST;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20665] = block;
  }

  { // ID: 20666
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_EAST;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20666] = block;
  }

  { // ID: 20667
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_EAST;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20667] = block;
  }

  { // ID: 20668
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_EAST;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20668] = block;
  }

  { // ID: 20669
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_EAST;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20669] = block;
  }

  { // ID: 20670
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_EAST;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20670] = block;
  }

  { // ID: 20671
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_EAST;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20671] = block;
  }

  { // ID: 20672
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_EAST;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20672] = block;
  }

  { // ID: 20673
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_EAST;
    block->half = DeepslateTileStairsBlock::HALF_TOP;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20673] = block;
  }

  { // ID: 20674
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_EAST;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20674] = block;
  }

  { // ID: 20675
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_EAST;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20675] = block;
  }

  { // ID: 20676
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_EAST;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20676] = block;
  }

  { // ID: 20677
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_EAST;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20677] = block;
  }

  { // ID: 20678
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_EAST;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20678] = block;
  }

  { // ID: 20679
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_EAST;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20679] = block;
  }

  { // ID: 20680
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_EAST;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20680] = block;
  }

  { // ID: 20681
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_EAST;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20681] = block;
  }

  { // ID: 20682
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_EAST;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_TRUE;
    registry[20682] = block;
  }

  { // ID: 20683
    std::shared_ptr<DeepslateTileStairsBlock> block = std::make_shared<DeepslateTileStairsBlock>();
    block->facing = DeepslateTileStairsBlock::FACING_EAST;
    block->half = DeepslateTileStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateTileStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateTileStairsBlock::WATERLOGGED_FALSE;
    registry[20683] = block;
  }

  { // ID: 20684
    std::shared_ptr<DeepslateTileSlabBlock> block = std::make_shared<DeepslateTileSlabBlock>();
    block->type = DeepslateTileSlabBlock::TYPE_TOP;
    block->waterlogged = DeepslateTileSlabBlock::WATERLOGGED_TRUE;
    registry[20684] = block;
  }

  { // ID: 20685
    std::shared_ptr<DeepslateTileSlabBlock> block = std::make_shared<DeepslateTileSlabBlock>();
    block->type = DeepslateTileSlabBlock::TYPE_TOP;
    block->waterlogged = DeepslateTileSlabBlock::WATERLOGGED_FALSE;
    registry[20685] = block;
  }

  { // ID: 20686
    std::shared_ptr<DeepslateTileSlabBlock> block = std::make_shared<DeepslateTileSlabBlock>();
    block->type = DeepslateTileSlabBlock::TYPE_BOTTOM;
    block->waterlogged = DeepslateTileSlabBlock::WATERLOGGED_TRUE;
    registry[20686] = block;
  }

  { // ID: 20687
    std::shared_ptr<DeepslateTileSlabBlock> block = std::make_shared<DeepslateTileSlabBlock>();
    block->type = DeepslateTileSlabBlock::TYPE_BOTTOM;
    block->waterlogged = DeepslateTileSlabBlock::WATERLOGGED_FALSE;
    registry[20687] = block;
  }

  { // ID: 20688
    std::shared_ptr<DeepslateTileSlabBlock> block = std::make_shared<DeepslateTileSlabBlock>();
    block->type = DeepslateTileSlabBlock::TYPE_DOUBLE;
    block->waterlogged = DeepslateTileSlabBlock::WATERLOGGED_TRUE;
    registry[20688] = block;
  }

  { // ID: 20689
    std::shared_ptr<DeepslateTileSlabBlock> block = std::make_shared<DeepslateTileSlabBlock>();
    block->type = DeepslateTileSlabBlock::TYPE_DOUBLE;
    block->waterlogged = DeepslateTileSlabBlock::WATERLOGGED_FALSE;
    registry[20689] = block;
  }

  { // ID: 20690
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20690] = block;
  }

  { // ID: 20691
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20691] = block;
  }

  { // ID: 20692
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20692] = block;
  }

  { // ID: 20693
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20693] = block;
  }

  { // ID: 20694
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20694] = block;
  }

  { // ID: 20695
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20695] = block;
  }

  { // ID: 20696
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20696] = block;
  }

  { // ID: 20697
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20697] = block;
  }

  { // ID: 20698
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20698] = block;
  }

  { // ID: 20699
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20699] = block;
  }

  { // ID: 20700
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20700] = block;
  }

  { // ID: 20701
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20701] = block;
  }

  { // ID: 20702
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20702] = block;
  }

  { // ID: 20703
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20703] = block;
  }

  { // ID: 20704
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20704] = block;
  }

  { // ID: 20705
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20705] = block;
  }

  { // ID: 20706
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20706] = block;
  }

  { // ID: 20707
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20707] = block;
  }

  { // ID: 20708
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20708] = block;
  }

  { // ID: 20709
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20709] = block;
  }

  { // ID: 20710
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20710] = block;
  }

  { // ID: 20711
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20711] = block;
  }

  { // ID: 20712
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20712] = block;
  }

  { // ID: 20713
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20713] = block;
  }

  { // ID: 20714
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20714] = block;
  }

  { // ID: 20715
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20715] = block;
  }

  { // ID: 20716
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20716] = block;
  }

  { // ID: 20717
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20717] = block;
  }

  { // ID: 20718
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20718] = block;
  }

  { // ID: 20719
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20719] = block;
  }

  { // ID: 20720
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20720] = block;
  }

  { // ID: 20721
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20721] = block;
  }

  { // ID: 20722
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20722] = block;
  }

  { // ID: 20723
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20723] = block;
  }

  { // ID: 20724
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20724] = block;
  }

  { // ID: 20725
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20725] = block;
  }

  { // ID: 20726
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20726] = block;
  }

  { // ID: 20727
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20727] = block;
  }

  { // ID: 20728
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20728] = block;
  }

  { // ID: 20729
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20729] = block;
  }

  { // ID: 20730
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20730] = block;
  }

  { // ID: 20731
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20731] = block;
  }

  { // ID: 20732
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20732] = block;
  }

  { // ID: 20733
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20733] = block;
  }

  { // ID: 20734
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20734] = block;
  }

  { // ID: 20735
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20735] = block;
  }

  { // ID: 20736
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20736] = block;
  }

  { // ID: 20737
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20737] = block;
  }

  { // ID: 20738
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20738] = block;
  }

  { // ID: 20739
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20739] = block;
  }

  { // ID: 20740
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20740] = block;
  }

  { // ID: 20741
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20741] = block;
  }

  { // ID: 20742
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20742] = block;
  }

  { // ID: 20743
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20743] = block;
  }

  { // ID: 20744
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20744] = block;
  }

  { // ID: 20745
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20745] = block;
  }

  { // ID: 20746
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20746] = block;
  }

  { // ID: 20747
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20747] = block;
  }

  { // ID: 20748
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20748] = block;
  }

  { // ID: 20749
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20749] = block;
  }

  { // ID: 20750
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20750] = block;
  }

  { // ID: 20751
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20751] = block;
  }

  { // ID: 20752
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20752] = block;
  }

  { // ID: 20753
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20753] = block;
  }

  { // ID: 20754
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20754] = block;
  }

  { // ID: 20755
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20755] = block;
  }

  { // ID: 20756
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20756] = block;
  }

  { // ID: 20757
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20757] = block;
  }

  { // ID: 20758
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20758] = block;
  }

  { // ID: 20759
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20759] = block;
  }

  { // ID: 20760
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20760] = block;
  }

  { // ID: 20761
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20761] = block;
  }

  { // ID: 20762
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20762] = block;
  }

  { // ID: 20763
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20763] = block;
  }

  { // ID: 20764
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20764] = block;
  }

  { // ID: 20765
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20765] = block;
  }

  { // ID: 20766
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20766] = block;
  }

  { // ID: 20767
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20767] = block;
  }

  { // ID: 20768
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20768] = block;
  }

  { // ID: 20769
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20769] = block;
  }

  { // ID: 20770
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20770] = block;
  }

  { // ID: 20771
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20771] = block;
  }

  { // ID: 20772
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20772] = block;
  }

  { // ID: 20773
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20773] = block;
  }

  { // ID: 20774
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20774] = block;
  }

  { // ID: 20775
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20775] = block;
  }

  { // ID: 20776
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20776] = block;
  }

  { // ID: 20777
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20777] = block;
  }

  { // ID: 20778
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20778] = block;
  }

  { // ID: 20779
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20779] = block;
  }

  { // ID: 20780
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20780] = block;
  }

  { // ID: 20781
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20781] = block;
  }

  { // ID: 20782
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20782] = block;
  }

  { // ID: 20783
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20783] = block;
  }

  { // ID: 20784
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20784] = block;
  }

  { // ID: 20785
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20785] = block;
  }

  { // ID: 20786
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20786] = block;
  }

  { // ID: 20787
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20787] = block;
  }

  { // ID: 20788
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20788] = block;
  }

  { // ID: 20789
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20789] = block;
  }

  { // ID: 20790
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20790] = block;
  }

  { // ID: 20791
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20791] = block;
  }

  { // ID: 20792
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20792] = block;
  }

  { // ID: 20793
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20793] = block;
  }

  { // ID: 20794
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20794] = block;
  }

  { // ID: 20795
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20795] = block;
  }

  { // ID: 20796
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20796] = block;
  }

  { // ID: 20797
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_NONE;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20797] = block;
  }

  { // ID: 20798
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20798] = block;
  }

  { // ID: 20799
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20799] = block;
  }

  { // ID: 20800
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20800] = block;
  }

  { // ID: 20801
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20801] = block;
  }

  { // ID: 20802
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20802] = block;
  }

  { // ID: 20803
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20803] = block;
  }

  { // ID: 20804
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20804] = block;
  }

  { // ID: 20805
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20805] = block;
  }

  { // ID: 20806
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20806] = block;
  }

  { // ID: 20807
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20807] = block;
  }

  { // ID: 20808
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20808] = block;
  }

  { // ID: 20809
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20809] = block;
  }

  { // ID: 20810
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20810] = block;
  }

  { // ID: 20811
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20811] = block;
  }

  { // ID: 20812
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20812] = block;
  }

  { // ID: 20813
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20813] = block;
  }

  { // ID: 20814
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20814] = block;
  }

  { // ID: 20815
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20815] = block;
  }

  { // ID: 20816
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20816] = block;
  }

  { // ID: 20817
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20817] = block;
  }

  { // ID: 20818
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20818] = block;
  }

  { // ID: 20819
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20819] = block;
  }

  { // ID: 20820
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20820] = block;
  }

  { // ID: 20821
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20821] = block;
  }

  { // ID: 20822
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20822] = block;
  }

  { // ID: 20823
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20823] = block;
  }

  { // ID: 20824
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20824] = block;
  }

  { // ID: 20825
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20825] = block;
  }

  { // ID: 20826
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20826] = block;
  }

  { // ID: 20827
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20827] = block;
  }

  { // ID: 20828
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20828] = block;
  }

  { // ID: 20829
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20829] = block;
  }

  { // ID: 20830
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20830] = block;
  }

  { // ID: 20831
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20831] = block;
  }

  { // ID: 20832
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20832] = block;
  }

  { // ID: 20833
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20833] = block;
  }

  { // ID: 20834
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20834] = block;
  }

  { // ID: 20835
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20835] = block;
  }

  { // ID: 20836
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20836] = block;
  }

  { // ID: 20837
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20837] = block;
  }

  { // ID: 20838
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20838] = block;
  }

  { // ID: 20839
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20839] = block;
  }

  { // ID: 20840
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20840] = block;
  }

  { // ID: 20841
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20841] = block;
  }

  { // ID: 20842
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20842] = block;
  }

  { // ID: 20843
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20843] = block;
  }

  { // ID: 20844
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20844] = block;
  }

  { // ID: 20845
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20845] = block;
  }

  { // ID: 20846
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20846] = block;
  }

  { // ID: 20847
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20847] = block;
  }

  { // ID: 20848
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20848] = block;
  }

  { // ID: 20849
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20849] = block;
  }

  { // ID: 20850
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20850] = block;
  }

  { // ID: 20851
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20851] = block;
  }

  { // ID: 20852
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20852] = block;
  }

  { // ID: 20853
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20853] = block;
  }

  { // ID: 20854
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20854] = block;
  }

  { // ID: 20855
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20855] = block;
  }

  { // ID: 20856
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20856] = block;
  }

  { // ID: 20857
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20857] = block;
  }

  { // ID: 20858
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20858] = block;
  }

  { // ID: 20859
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20859] = block;
  }

  { // ID: 20860
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20860] = block;
  }

  { // ID: 20861
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20861] = block;
  }

  { // ID: 20862
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20862] = block;
  }

  { // ID: 20863
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20863] = block;
  }

  { // ID: 20864
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20864] = block;
  }

  { // ID: 20865
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20865] = block;
  }

  { // ID: 20866
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20866] = block;
  }

  { // ID: 20867
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20867] = block;
  }

  { // ID: 20868
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20868] = block;
  }

  { // ID: 20869
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20869] = block;
  }

  { // ID: 20870
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20870] = block;
  }

  { // ID: 20871
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20871] = block;
  }

  { // ID: 20872
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20872] = block;
  }

  { // ID: 20873
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20873] = block;
  }

  { // ID: 20874
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20874] = block;
  }

  { // ID: 20875
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20875] = block;
  }

  { // ID: 20876
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20876] = block;
  }

  { // ID: 20877
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20877] = block;
  }

  { // ID: 20878
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20878] = block;
  }

  { // ID: 20879
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20879] = block;
  }

  { // ID: 20880
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20880] = block;
  }

  { // ID: 20881
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20881] = block;
  }

  { // ID: 20882
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20882] = block;
  }

  { // ID: 20883
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20883] = block;
  }

  { // ID: 20884
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20884] = block;
  }

  { // ID: 20885
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20885] = block;
  }

  { // ID: 20886
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20886] = block;
  }

  { // ID: 20887
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20887] = block;
  }

  { // ID: 20888
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20888] = block;
  }

  { // ID: 20889
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20889] = block;
  }

  { // ID: 20890
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20890] = block;
  }

  { // ID: 20891
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20891] = block;
  }

  { // ID: 20892
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20892] = block;
  }

  { // ID: 20893
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20893] = block;
  }

  { // ID: 20894
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20894] = block;
  }

  { // ID: 20895
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20895] = block;
  }

  { // ID: 20896
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20896] = block;
  }

  { // ID: 20897
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20897] = block;
  }

  { // ID: 20898
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20898] = block;
  }

  { // ID: 20899
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20899] = block;
  }

  { // ID: 20900
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20900] = block;
  }

  { // ID: 20901
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20901] = block;
  }

  { // ID: 20902
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20902] = block;
  }

  { // ID: 20903
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20903] = block;
  }

  { // ID: 20904
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20904] = block;
  }

  { // ID: 20905
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_LOW;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20905] = block;
  }

  { // ID: 20906
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20906] = block;
  }

  { // ID: 20907
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20907] = block;
  }

  { // ID: 20908
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20908] = block;
  }

  { // ID: 20909
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20909] = block;
  }

  { // ID: 20910
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20910] = block;
  }

  { // ID: 20911
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20911] = block;
  }

  { // ID: 20912
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20912] = block;
  }

  { // ID: 20913
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20913] = block;
  }

  { // ID: 20914
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20914] = block;
  }

  { // ID: 20915
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20915] = block;
  }

  { // ID: 20916
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20916] = block;
  }

  { // ID: 20917
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20917] = block;
  }

  { // ID: 20918
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20918] = block;
  }

  { // ID: 20919
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20919] = block;
  }

  { // ID: 20920
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20920] = block;
  }

  { // ID: 20921
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20921] = block;
  }

  { // ID: 20922
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20922] = block;
  }

  { // ID: 20923
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20923] = block;
  }

  { // ID: 20924
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20924] = block;
  }

  { // ID: 20925
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20925] = block;
  }

  { // ID: 20926
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20926] = block;
  }

  { // ID: 20927
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20927] = block;
  }

  { // ID: 20928
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20928] = block;
  }

  { // ID: 20929
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20929] = block;
  }

  { // ID: 20930
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20930] = block;
  }

  { // ID: 20931
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20931] = block;
  }

  { // ID: 20932
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20932] = block;
  }

  { // ID: 20933
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20933] = block;
  }

  { // ID: 20934
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20934] = block;
  }

  { // ID: 20935
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20935] = block;
  }

  { // ID: 20936
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20936] = block;
  }

  { // ID: 20937
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20937] = block;
  }

  { // ID: 20938
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20938] = block;
  }

  { // ID: 20939
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20939] = block;
  }

  { // ID: 20940
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20940] = block;
  }

  { // ID: 20941
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_NONE;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20941] = block;
  }

  { // ID: 20942
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20942] = block;
  }

  { // ID: 20943
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20943] = block;
  }

  { // ID: 20944
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20944] = block;
  }

  { // ID: 20945
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20945] = block;
  }

  { // ID: 20946
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20946] = block;
  }

  { // ID: 20947
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20947] = block;
  }

  { // ID: 20948
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20948] = block;
  }

  { // ID: 20949
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20949] = block;
  }

  { // ID: 20950
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20950] = block;
  }

  { // ID: 20951
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20951] = block;
  }

  { // ID: 20952
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20952] = block;
  }

  { // ID: 20953
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20953] = block;
  }

  { // ID: 20954
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20954] = block;
  }

  { // ID: 20955
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20955] = block;
  }

  { // ID: 20956
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20956] = block;
  }

  { // ID: 20957
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20957] = block;
  }

  { // ID: 20958
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20958] = block;
  }

  { // ID: 20959
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20959] = block;
  }

  { // ID: 20960
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20960] = block;
  }

  { // ID: 20961
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20961] = block;
  }

  { // ID: 20962
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20962] = block;
  }

  { // ID: 20963
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20963] = block;
  }

  { // ID: 20964
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20964] = block;
  }

  { // ID: 20965
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20965] = block;
  }

  { // ID: 20966
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20966] = block;
  }

  { // ID: 20967
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20967] = block;
  }

  { // ID: 20968
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20968] = block;
  }

  { // ID: 20969
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20969] = block;
  }

  { // ID: 20970
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20970] = block;
  }

  { // ID: 20971
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20971] = block;
  }

  { // ID: 20972
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20972] = block;
  }

  { // ID: 20973
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20973] = block;
  }

  { // ID: 20974
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20974] = block;
  }

  { // ID: 20975
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20975] = block;
  }

  { // ID: 20976
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20976] = block;
  }

  { // ID: 20977
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_LOW;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20977] = block;
  }

  { // ID: 20978
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20978] = block;
  }

  { // ID: 20979
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20979] = block;
  }

  { // ID: 20980
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20980] = block;
  }

  { // ID: 20981
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20981] = block;
  }

  { // ID: 20982
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20982] = block;
  }

  { // ID: 20983
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20983] = block;
  }

  { // ID: 20984
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20984] = block;
  }

  { // ID: 20985
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20985] = block;
  }

  { // ID: 20986
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20986] = block;
  }

  { // ID: 20987
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20987] = block;
  }

  { // ID: 20988
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20988] = block;
  }

  { // ID: 20989
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_NONE;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20989] = block;
  }

  { // ID: 20990
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20990] = block;
  }

  { // ID: 20991
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20991] = block;
  }

  { // ID: 20992
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20992] = block;
  }

  { // ID: 20993
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20993] = block;
  }

  { // ID: 20994
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20994] = block;
  }

  { // ID: 20995
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20995] = block;
  }

  { // ID: 20996
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20996] = block;
  }

  { // ID: 20997
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[20997] = block;
  }

  { // ID: 20998
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[20998] = block;
  }

  { // ID: 20999
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[20999] = block;
  }

  { // ID: 21000
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[21000] = block;
  }

  { // ID: 21001
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_LOW;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[21001] = block;
  }

  { // ID: 21002
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[21002] = block;
  }

  { // ID: 21003
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[21003] = block;
  }

  { // ID: 21004
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[21004] = block;
  }

  { // ID: 21005
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[21005] = block;
  }

  { // ID: 21006
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[21006] = block;
  }

  { // ID: 21007
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_TRUE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[21007] = block;
  }

  { // ID: 21008
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[21008] = block;
  }

  { // ID: 21009
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[21009] = block;
  }

  { // ID: 21010
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[21010] = block;
  }

  { // ID: 21011
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_NONE;
    registry[21011] = block;
  }

  { // ID: 21012
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_LOW;
    registry[21012] = block;
  }

  { // ID: 21013
    std::shared_ptr<DeepslateTileWallBlock> block = std::make_shared<DeepslateTileWallBlock>();
    block->east = DeepslateTileWallBlock::EAST_TALL;
    block->north = DeepslateTileWallBlock::NORTH_TALL;
    block->south = DeepslateTileWallBlock::SOUTH_TALL;
    block->up = DeepslateTileWallBlock::UP_FALSE;
    block->waterlogged = DeepslateTileWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateTileWallBlock::WEST_TALL;
    registry[21013] = block;
  }

  { // ID: 21014
    std::shared_ptr<DeepslateBricksBlock> block = std::make_shared<DeepslateBricksBlock>();
    registry[21014] = block;
  }

  { // ID: 21015
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_NORTH;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21015] = block;
  }

  { // ID: 21016
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_NORTH;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21016] = block;
  }

  { // ID: 21017
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_NORTH;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21017] = block;
  }

  { // ID: 21018
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_NORTH;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21018] = block;
  }

  { // ID: 21019
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_NORTH;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21019] = block;
  }

  { // ID: 21020
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_NORTH;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21020] = block;
  }

  { // ID: 21021
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_NORTH;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21021] = block;
  }

  { // ID: 21022
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_NORTH;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21022] = block;
  }

  { // ID: 21023
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_NORTH;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21023] = block;
  }

  { // ID: 21024
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_NORTH;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21024] = block;
  }

  { // ID: 21025
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_NORTH;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21025] = block;
  }

  { // ID: 21026
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_NORTH;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21026] = block;
  }

  { // ID: 21027
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_NORTH;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21027] = block;
  }

  { // ID: 21028
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_NORTH;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21028] = block;
  }

  { // ID: 21029
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_NORTH;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21029] = block;
  }

  { // ID: 21030
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_NORTH;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21030] = block;
  }

  { // ID: 21031
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_NORTH;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21031] = block;
  }

  { // ID: 21032
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_NORTH;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21032] = block;
  }

  { // ID: 21033
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_NORTH;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21033] = block;
  }

  { // ID: 21034
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_NORTH;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21034] = block;
  }

  { // ID: 21035
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_SOUTH;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21035] = block;
  }

  { // ID: 21036
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_SOUTH;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21036] = block;
  }

  { // ID: 21037
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_SOUTH;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21037] = block;
  }

  { // ID: 21038
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_SOUTH;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21038] = block;
  }

  { // ID: 21039
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_SOUTH;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21039] = block;
  }

  { // ID: 21040
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_SOUTH;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21040] = block;
  }

  { // ID: 21041
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_SOUTH;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21041] = block;
  }

  { // ID: 21042
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_SOUTH;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21042] = block;
  }

  { // ID: 21043
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_SOUTH;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21043] = block;
  }

  { // ID: 21044
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_SOUTH;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21044] = block;
  }

  { // ID: 21045
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_SOUTH;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21045] = block;
  }

  { // ID: 21046
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_SOUTH;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21046] = block;
  }

  { // ID: 21047
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_SOUTH;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21047] = block;
  }

  { // ID: 21048
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_SOUTH;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21048] = block;
  }

  { // ID: 21049
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_SOUTH;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21049] = block;
  }

  { // ID: 21050
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_SOUTH;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21050] = block;
  }

  { // ID: 21051
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_SOUTH;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21051] = block;
  }

  { // ID: 21052
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_SOUTH;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21052] = block;
  }

  { // ID: 21053
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_SOUTH;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21053] = block;
  }

  { // ID: 21054
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_SOUTH;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21054] = block;
  }

  { // ID: 21055
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_WEST;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21055] = block;
  }

  { // ID: 21056
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_WEST;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21056] = block;
  }

  { // ID: 21057
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_WEST;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21057] = block;
  }

  { // ID: 21058
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_WEST;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21058] = block;
  }

  { // ID: 21059
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_WEST;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21059] = block;
  }

  { // ID: 21060
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_WEST;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21060] = block;
  }

  { // ID: 21061
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_WEST;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21061] = block;
  }

  { // ID: 21062
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_WEST;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21062] = block;
  }

  { // ID: 21063
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_WEST;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21063] = block;
  }

  { // ID: 21064
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_WEST;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21064] = block;
  }

  { // ID: 21065
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_WEST;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21065] = block;
  }

  { // ID: 21066
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_WEST;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21066] = block;
  }

  { // ID: 21067
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_WEST;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21067] = block;
  }

  { // ID: 21068
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_WEST;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21068] = block;
  }

  { // ID: 21069
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_WEST;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21069] = block;
  }

  { // ID: 21070
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_WEST;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21070] = block;
  }

  { // ID: 21071
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_WEST;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21071] = block;
  }

  { // ID: 21072
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_WEST;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21072] = block;
  }

  { // ID: 21073
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_WEST;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21073] = block;
  }

  { // ID: 21074
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_WEST;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21074] = block;
  }

  { // ID: 21075
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_EAST;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21075] = block;
  }

  { // ID: 21076
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_EAST;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21076] = block;
  }

  { // ID: 21077
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_EAST;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21077] = block;
  }

  { // ID: 21078
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_EAST;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21078] = block;
  }

  { // ID: 21079
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_EAST;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21079] = block;
  }

  { // ID: 21080
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_EAST;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21080] = block;
  }

  { // ID: 21081
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_EAST;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21081] = block;
  }

  { // ID: 21082
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_EAST;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21082] = block;
  }

  { // ID: 21083
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_EAST;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21083] = block;
  }

  { // ID: 21084
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_EAST;
    block->half = DeepslateBrickStairsBlock::HALF_TOP;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21084] = block;
  }

  { // ID: 21085
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_EAST;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21085] = block;
  }

  { // ID: 21086
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_EAST;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21086] = block;
  }

  { // ID: 21087
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_EAST;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21087] = block;
  }

  { // ID: 21088
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_EAST;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21088] = block;
  }

  { // ID: 21089
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_EAST;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21089] = block;
  }

  { // ID: 21090
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_EAST;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21090] = block;
  }

  { // ID: 21091
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_EAST;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21091] = block;
  }

  { // ID: 21092
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_EAST;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21092] = block;
  }

  { // ID: 21093
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_EAST;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_TRUE;
    registry[21093] = block;
  }

  { // ID: 21094
    std::shared_ptr<DeepslateBrickStairsBlock> block = std::make_shared<DeepslateBrickStairsBlock>();
    block->facing = DeepslateBrickStairsBlock::FACING_EAST;
    block->half = DeepslateBrickStairsBlock::HALF_BOTTOM;
    block->shape = DeepslateBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = DeepslateBrickStairsBlock::WATERLOGGED_FALSE;
    registry[21094] = block;
  }

  { // ID: 21095
    std::shared_ptr<DeepslateBrickSlabBlock> block = std::make_shared<DeepslateBrickSlabBlock>();
    block->type = DeepslateBrickSlabBlock::TYPE_TOP;
    block->waterlogged = DeepslateBrickSlabBlock::WATERLOGGED_TRUE;
    registry[21095] = block;
  }

  { // ID: 21096
    std::shared_ptr<DeepslateBrickSlabBlock> block = std::make_shared<DeepslateBrickSlabBlock>();
    block->type = DeepslateBrickSlabBlock::TYPE_TOP;
    block->waterlogged = DeepslateBrickSlabBlock::WATERLOGGED_FALSE;
    registry[21096] = block;
  }

  { // ID: 21097
    std::shared_ptr<DeepslateBrickSlabBlock> block = std::make_shared<DeepslateBrickSlabBlock>();
    block->type = DeepslateBrickSlabBlock::TYPE_BOTTOM;
    block->waterlogged = DeepslateBrickSlabBlock::WATERLOGGED_TRUE;
    registry[21097] = block;
  }

  { // ID: 21098
    std::shared_ptr<DeepslateBrickSlabBlock> block = std::make_shared<DeepslateBrickSlabBlock>();
    block->type = DeepslateBrickSlabBlock::TYPE_BOTTOM;
    block->waterlogged = DeepslateBrickSlabBlock::WATERLOGGED_FALSE;
    registry[21098] = block;
  }

  { // ID: 21099
    std::shared_ptr<DeepslateBrickSlabBlock> block = std::make_shared<DeepslateBrickSlabBlock>();
    block->type = DeepslateBrickSlabBlock::TYPE_DOUBLE;
    block->waterlogged = DeepslateBrickSlabBlock::WATERLOGGED_TRUE;
    registry[21099] = block;
  }

  { // ID: 21100
    std::shared_ptr<DeepslateBrickSlabBlock> block = std::make_shared<DeepslateBrickSlabBlock>();
    block->type = DeepslateBrickSlabBlock::TYPE_DOUBLE;
    block->waterlogged = DeepslateBrickSlabBlock::WATERLOGGED_FALSE;
    registry[21100] = block;
  }

  { // ID: 21101
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21101] = block;
  }

  { // ID: 21102
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21102] = block;
  }

  { // ID: 21103
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21103] = block;
  }

  { // ID: 21104
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21104] = block;
  }

  { // ID: 21105
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21105] = block;
  }

  { // ID: 21106
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21106] = block;
  }

  { // ID: 21107
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21107] = block;
  }

  { // ID: 21108
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21108] = block;
  }

  { // ID: 21109
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21109] = block;
  }

  { // ID: 21110
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21110] = block;
  }

  { // ID: 21111
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21111] = block;
  }

  { // ID: 21112
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21112] = block;
  }

  { // ID: 21113
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21113] = block;
  }

  { // ID: 21114
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21114] = block;
  }

  { // ID: 21115
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21115] = block;
  }

  { // ID: 21116
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21116] = block;
  }

  { // ID: 21117
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21117] = block;
  }

  { // ID: 21118
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21118] = block;
  }

  { // ID: 21119
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21119] = block;
  }

  { // ID: 21120
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21120] = block;
  }

  { // ID: 21121
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21121] = block;
  }

  { // ID: 21122
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21122] = block;
  }

  { // ID: 21123
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21123] = block;
  }

  { // ID: 21124
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21124] = block;
  }

  { // ID: 21125
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21125] = block;
  }

  { // ID: 21126
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21126] = block;
  }

  { // ID: 21127
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21127] = block;
  }

  { // ID: 21128
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21128] = block;
  }

  { // ID: 21129
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21129] = block;
  }

  { // ID: 21130
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21130] = block;
  }

  { // ID: 21131
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21131] = block;
  }

  { // ID: 21132
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21132] = block;
  }

  { // ID: 21133
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21133] = block;
  }

  { // ID: 21134
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21134] = block;
  }

  { // ID: 21135
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21135] = block;
  }

  { // ID: 21136
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21136] = block;
  }

  { // ID: 21137
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21137] = block;
  }

  { // ID: 21138
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21138] = block;
  }

  { // ID: 21139
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21139] = block;
  }

  { // ID: 21140
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21140] = block;
  }

  { // ID: 21141
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21141] = block;
  }

  { // ID: 21142
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21142] = block;
  }

  { // ID: 21143
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21143] = block;
  }

  { // ID: 21144
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21144] = block;
  }

  { // ID: 21145
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21145] = block;
  }

  { // ID: 21146
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21146] = block;
  }

  { // ID: 21147
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21147] = block;
  }

  { // ID: 21148
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21148] = block;
  }

  { // ID: 21149
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21149] = block;
  }

  { // ID: 21150
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21150] = block;
  }

  { // ID: 21151
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21151] = block;
  }

  { // ID: 21152
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21152] = block;
  }

  { // ID: 21153
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21153] = block;
  }

  { // ID: 21154
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21154] = block;
  }

  { // ID: 21155
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21155] = block;
  }

  { // ID: 21156
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21156] = block;
  }

  { // ID: 21157
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21157] = block;
  }

  { // ID: 21158
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21158] = block;
  }

  { // ID: 21159
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21159] = block;
  }

  { // ID: 21160
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21160] = block;
  }

  { // ID: 21161
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21161] = block;
  }

  { // ID: 21162
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21162] = block;
  }

  { // ID: 21163
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21163] = block;
  }

  { // ID: 21164
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21164] = block;
  }

  { // ID: 21165
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21165] = block;
  }

  { // ID: 21166
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21166] = block;
  }

  { // ID: 21167
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21167] = block;
  }

  { // ID: 21168
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21168] = block;
  }

  { // ID: 21169
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21169] = block;
  }

  { // ID: 21170
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21170] = block;
  }

  { // ID: 21171
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21171] = block;
  }

  { // ID: 21172
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21172] = block;
  }

  { // ID: 21173
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21173] = block;
  }

  { // ID: 21174
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21174] = block;
  }

  { // ID: 21175
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21175] = block;
  }

  { // ID: 21176
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21176] = block;
  }

  { // ID: 21177
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21177] = block;
  }

  { // ID: 21178
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21178] = block;
  }

  { // ID: 21179
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21179] = block;
  }

  { // ID: 21180
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21180] = block;
  }

  { // ID: 21181
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21181] = block;
  }

  { // ID: 21182
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21182] = block;
  }

  { // ID: 21183
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21183] = block;
  }

  { // ID: 21184
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21184] = block;
  }

  { // ID: 21185
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21185] = block;
  }

  { // ID: 21186
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21186] = block;
  }

  { // ID: 21187
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21187] = block;
  }

  { // ID: 21188
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21188] = block;
  }

  { // ID: 21189
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21189] = block;
  }

  { // ID: 21190
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21190] = block;
  }

  { // ID: 21191
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21191] = block;
  }

  { // ID: 21192
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21192] = block;
  }

  { // ID: 21193
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21193] = block;
  }

  { // ID: 21194
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21194] = block;
  }

  { // ID: 21195
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21195] = block;
  }

  { // ID: 21196
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21196] = block;
  }

  { // ID: 21197
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21197] = block;
  }

  { // ID: 21198
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21198] = block;
  }

  { // ID: 21199
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21199] = block;
  }

  { // ID: 21200
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21200] = block;
  }

  { // ID: 21201
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21201] = block;
  }

  { // ID: 21202
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21202] = block;
  }

  { // ID: 21203
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21203] = block;
  }

  { // ID: 21204
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21204] = block;
  }

  { // ID: 21205
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21205] = block;
  }

  { // ID: 21206
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21206] = block;
  }

  { // ID: 21207
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21207] = block;
  }

  { // ID: 21208
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_NONE;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21208] = block;
  }

  { // ID: 21209
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21209] = block;
  }

  { // ID: 21210
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21210] = block;
  }

  { // ID: 21211
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21211] = block;
  }

  { // ID: 21212
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21212] = block;
  }

  { // ID: 21213
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21213] = block;
  }

  { // ID: 21214
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21214] = block;
  }

  { // ID: 21215
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21215] = block;
  }

  { // ID: 21216
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21216] = block;
  }

  { // ID: 21217
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21217] = block;
  }

  { // ID: 21218
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21218] = block;
  }

  { // ID: 21219
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21219] = block;
  }

  { // ID: 21220
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21220] = block;
  }

  { // ID: 21221
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21221] = block;
  }

  { // ID: 21222
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21222] = block;
  }

  { // ID: 21223
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21223] = block;
  }

  { // ID: 21224
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21224] = block;
  }

  { // ID: 21225
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21225] = block;
  }

  { // ID: 21226
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21226] = block;
  }

  { // ID: 21227
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21227] = block;
  }

  { // ID: 21228
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21228] = block;
  }

  { // ID: 21229
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21229] = block;
  }

  { // ID: 21230
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21230] = block;
  }

  { // ID: 21231
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21231] = block;
  }

  { // ID: 21232
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21232] = block;
  }

  { // ID: 21233
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21233] = block;
  }

  { // ID: 21234
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21234] = block;
  }

  { // ID: 21235
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21235] = block;
  }

  { // ID: 21236
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21236] = block;
  }

  { // ID: 21237
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21237] = block;
  }

  { // ID: 21238
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21238] = block;
  }

  { // ID: 21239
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21239] = block;
  }

  { // ID: 21240
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21240] = block;
  }

  { // ID: 21241
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21241] = block;
  }

  { // ID: 21242
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21242] = block;
  }

  { // ID: 21243
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21243] = block;
  }

  { // ID: 21244
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21244] = block;
  }

  { // ID: 21245
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21245] = block;
  }

  { // ID: 21246
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21246] = block;
  }

  { // ID: 21247
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21247] = block;
  }

  { // ID: 21248
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21248] = block;
  }

  { // ID: 21249
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21249] = block;
  }

  { // ID: 21250
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21250] = block;
  }

  { // ID: 21251
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21251] = block;
  }

  { // ID: 21252
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21252] = block;
  }

  { // ID: 21253
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21253] = block;
  }

  { // ID: 21254
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21254] = block;
  }

  { // ID: 21255
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21255] = block;
  }

  { // ID: 21256
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21256] = block;
  }

  { // ID: 21257
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21257] = block;
  }

  { // ID: 21258
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21258] = block;
  }

  { // ID: 21259
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21259] = block;
  }

  { // ID: 21260
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21260] = block;
  }

  { // ID: 21261
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21261] = block;
  }

  { // ID: 21262
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21262] = block;
  }

  { // ID: 21263
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21263] = block;
  }

  { // ID: 21264
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21264] = block;
  }

  { // ID: 21265
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21265] = block;
  }

  { // ID: 21266
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21266] = block;
  }

  { // ID: 21267
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21267] = block;
  }

  { // ID: 21268
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21268] = block;
  }

  { // ID: 21269
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21269] = block;
  }

  { // ID: 21270
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21270] = block;
  }

  { // ID: 21271
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21271] = block;
  }

  { // ID: 21272
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21272] = block;
  }

  { // ID: 21273
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21273] = block;
  }

  { // ID: 21274
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21274] = block;
  }

  { // ID: 21275
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21275] = block;
  }

  { // ID: 21276
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21276] = block;
  }

  { // ID: 21277
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21277] = block;
  }

  { // ID: 21278
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21278] = block;
  }

  { // ID: 21279
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21279] = block;
  }

  { // ID: 21280
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21280] = block;
  }

  { // ID: 21281
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21281] = block;
  }

  { // ID: 21282
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21282] = block;
  }

  { // ID: 21283
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21283] = block;
  }

  { // ID: 21284
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21284] = block;
  }

  { // ID: 21285
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21285] = block;
  }

  { // ID: 21286
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21286] = block;
  }

  { // ID: 21287
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21287] = block;
  }

  { // ID: 21288
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21288] = block;
  }

  { // ID: 21289
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21289] = block;
  }

  { // ID: 21290
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21290] = block;
  }

  { // ID: 21291
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21291] = block;
  }

  { // ID: 21292
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21292] = block;
  }

  { // ID: 21293
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21293] = block;
  }

  { // ID: 21294
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21294] = block;
  }

  { // ID: 21295
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21295] = block;
  }

  { // ID: 21296
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21296] = block;
  }

  { // ID: 21297
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21297] = block;
  }

  { // ID: 21298
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21298] = block;
  }

  { // ID: 21299
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21299] = block;
  }

  { // ID: 21300
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21300] = block;
  }

  { // ID: 21301
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21301] = block;
  }

  { // ID: 21302
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21302] = block;
  }

  { // ID: 21303
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21303] = block;
  }

  { // ID: 21304
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21304] = block;
  }

  { // ID: 21305
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21305] = block;
  }

  { // ID: 21306
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21306] = block;
  }

  { // ID: 21307
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21307] = block;
  }

  { // ID: 21308
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21308] = block;
  }

  { // ID: 21309
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21309] = block;
  }

  { // ID: 21310
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21310] = block;
  }

  { // ID: 21311
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21311] = block;
  }

  { // ID: 21312
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21312] = block;
  }

  { // ID: 21313
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21313] = block;
  }

  { // ID: 21314
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21314] = block;
  }

  { // ID: 21315
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21315] = block;
  }

  { // ID: 21316
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_LOW;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21316] = block;
  }

  { // ID: 21317
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21317] = block;
  }

  { // ID: 21318
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21318] = block;
  }

  { // ID: 21319
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21319] = block;
  }

  { // ID: 21320
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21320] = block;
  }

  { // ID: 21321
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21321] = block;
  }

  { // ID: 21322
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21322] = block;
  }

  { // ID: 21323
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21323] = block;
  }

  { // ID: 21324
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21324] = block;
  }

  { // ID: 21325
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21325] = block;
  }

  { // ID: 21326
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21326] = block;
  }

  { // ID: 21327
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21327] = block;
  }

  { // ID: 21328
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21328] = block;
  }

  { // ID: 21329
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21329] = block;
  }

  { // ID: 21330
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21330] = block;
  }

  { // ID: 21331
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21331] = block;
  }

  { // ID: 21332
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21332] = block;
  }

  { // ID: 21333
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21333] = block;
  }

  { // ID: 21334
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21334] = block;
  }

  { // ID: 21335
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21335] = block;
  }

  { // ID: 21336
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21336] = block;
  }

  { // ID: 21337
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21337] = block;
  }

  { // ID: 21338
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21338] = block;
  }

  { // ID: 21339
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21339] = block;
  }

  { // ID: 21340
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21340] = block;
  }

  { // ID: 21341
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21341] = block;
  }

  { // ID: 21342
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21342] = block;
  }

  { // ID: 21343
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21343] = block;
  }

  { // ID: 21344
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21344] = block;
  }

  { // ID: 21345
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21345] = block;
  }

  { // ID: 21346
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21346] = block;
  }

  { // ID: 21347
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21347] = block;
  }

  { // ID: 21348
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21348] = block;
  }

  { // ID: 21349
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21349] = block;
  }

  { // ID: 21350
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21350] = block;
  }

  { // ID: 21351
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21351] = block;
  }

  { // ID: 21352
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_NONE;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21352] = block;
  }

  { // ID: 21353
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21353] = block;
  }

  { // ID: 21354
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21354] = block;
  }

  { // ID: 21355
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21355] = block;
  }

  { // ID: 21356
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21356] = block;
  }

  { // ID: 21357
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21357] = block;
  }

  { // ID: 21358
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21358] = block;
  }

  { // ID: 21359
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21359] = block;
  }

  { // ID: 21360
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21360] = block;
  }

  { // ID: 21361
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21361] = block;
  }

  { // ID: 21362
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21362] = block;
  }

  { // ID: 21363
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21363] = block;
  }

  { // ID: 21364
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21364] = block;
  }

  { // ID: 21365
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21365] = block;
  }

  { // ID: 21366
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21366] = block;
  }

  { // ID: 21367
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21367] = block;
  }

  { // ID: 21368
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21368] = block;
  }

  { // ID: 21369
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21369] = block;
  }

  { // ID: 21370
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21370] = block;
  }

  { // ID: 21371
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21371] = block;
  }

  { // ID: 21372
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21372] = block;
  }

  { // ID: 21373
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21373] = block;
  }

  { // ID: 21374
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21374] = block;
  }

  { // ID: 21375
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21375] = block;
  }

  { // ID: 21376
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21376] = block;
  }

  { // ID: 21377
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21377] = block;
  }

  { // ID: 21378
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21378] = block;
  }

  { // ID: 21379
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21379] = block;
  }

  { // ID: 21380
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21380] = block;
  }

  { // ID: 21381
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21381] = block;
  }

  { // ID: 21382
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21382] = block;
  }

  { // ID: 21383
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21383] = block;
  }

  { // ID: 21384
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21384] = block;
  }

  { // ID: 21385
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21385] = block;
  }

  { // ID: 21386
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21386] = block;
  }

  { // ID: 21387
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21387] = block;
  }

  { // ID: 21388
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_LOW;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21388] = block;
  }

  { // ID: 21389
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21389] = block;
  }

  { // ID: 21390
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21390] = block;
  }

  { // ID: 21391
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21391] = block;
  }

  { // ID: 21392
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21392] = block;
  }

  { // ID: 21393
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21393] = block;
  }

  { // ID: 21394
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21394] = block;
  }

  { // ID: 21395
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21395] = block;
  }

  { // ID: 21396
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21396] = block;
  }

  { // ID: 21397
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21397] = block;
  }

  { // ID: 21398
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21398] = block;
  }

  { // ID: 21399
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21399] = block;
  }

  { // ID: 21400
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_NONE;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21400] = block;
  }

  { // ID: 21401
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21401] = block;
  }

  { // ID: 21402
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21402] = block;
  }

  { // ID: 21403
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21403] = block;
  }

  { // ID: 21404
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21404] = block;
  }

  { // ID: 21405
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21405] = block;
  }

  { // ID: 21406
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21406] = block;
  }

  { // ID: 21407
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21407] = block;
  }

  { // ID: 21408
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21408] = block;
  }

  { // ID: 21409
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21409] = block;
  }

  { // ID: 21410
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21410] = block;
  }

  { // ID: 21411
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21411] = block;
  }

  { // ID: 21412
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_LOW;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21412] = block;
  }

  { // ID: 21413
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21413] = block;
  }

  { // ID: 21414
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21414] = block;
  }

  { // ID: 21415
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21415] = block;
  }

  { // ID: 21416
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21416] = block;
  }

  { // ID: 21417
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21417] = block;
  }

  { // ID: 21418
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_TRUE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21418] = block;
  }

  { // ID: 21419
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21419] = block;
  }

  { // ID: 21420
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21420] = block;
  }

  { // ID: 21421
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_TRUE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21421] = block;
  }

  { // ID: 21422
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_NONE;
    registry[21422] = block;
  }

  { // ID: 21423
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_LOW;
    registry[21423] = block;
  }

  { // ID: 21424
    std::shared_ptr<DeepslateBrickWallBlock> block = std::make_shared<DeepslateBrickWallBlock>();
    block->east = DeepslateBrickWallBlock::EAST_TALL;
    block->north = DeepslateBrickWallBlock::NORTH_TALL;
    block->south = DeepslateBrickWallBlock::SOUTH_TALL;
    block->up = DeepslateBrickWallBlock::UP_FALSE;
    block->waterlogged = DeepslateBrickWallBlock::WATERLOGGED_FALSE;
    block->west = DeepslateBrickWallBlock::WEST_TALL;
    registry[21424] = block;
  }
}