/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
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

#include "ice_block.h"
#include "infested_chiseled_stone_bricks_block.h"
#include "infested_cobblestone_block.h"
#include "infested_cracked_stone_bricks_block.h"
#include "infested_deepslate_block.h"
#include "infested_mossy_stone_bricks_block.h"
#include "infested_stone_block.h"
#include "infested_stone_bricks_block.h"
#include "iron_bars_block.h"
#include "iron_block_block.h"
#include "iron_door_block.h"
#include "iron_ore_block.h"
#include "iron_trapdoor_block.h"

void BlockRegistry::generateI() {

  { // ID: 112
    std::shared_ptr<IronOreBlock> block = std::make_shared<IronOreBlock>();
    registry[112] = block;
  }

  { // ID: 1682
    std::shared_ptr<IronBlockBlock> block = std::make_shared<IronBlockBlock>();
    registry[1682] = block;
  }

  { // ID: 4114
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_NORTH;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4114] = block;
  }

  { // ID: 4115
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_NORTH;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4115] = block;
  }

  { // ID: 4116
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_NORTH;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4116] = block;
  }

  { // ID: 4117
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_NORTH;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4117] = block;
  }

  { // ID: 4118
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_NORTH;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4118] = block;
  }

  { // ID: 4119
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_NORTH;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4119] = block;
  }

  { // ID: 4120
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_NORTH;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4120] = block;
  }

  { // ID: 4121
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_NORTH;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4121] = block;
  }

  { // ID: 4122
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_NORTH;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4122] = block;
  }

  { // ID: 4123
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_NORTH;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4123] = block;
  }

  { // ID: 4124
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_NORTH;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4124] = block;
  }

  { // ID: 4125
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_NORTH;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4125] = block;
  }

  { // ID: 4126
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_NORTH;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4126] = block;
  }

  { // ID: 4127
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_NORTH;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4127] = block;
  }

  { // ID: 4128
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_NORTH;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4128] = block;
  }

  { // ID: 4129
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_NORTH;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4129] = block;
  }

  { // ID: 4130
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_SOUTH;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4130] = block;
  }

  { // ID: 4131
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_SOUTH;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4131] = block;
  }

  { // ID: 4132
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_SOUTH;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4132] = block;
  }

  { // ID: 4133
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_SOUTH;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4133] = block;
  }

  { // ID: 4134
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_SOUTH;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4134] = block;
  }

  { // ID: 4135
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_SOUTH;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4135] = block;
  }

  { // ID: 4136
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_SOUTH;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4136] = block;
  }

  { // ID: 4137
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_SOUTH;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4137] = block;
  }

  { // ID: 4138
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_SOUTH;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4138] = block;
  }

  { // ID: 4139
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_SOUTH;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4139] = block;
  }

  { // ID: 4140
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_SOUTH;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4140] = block;
  }

  { // ID: 4141
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_SOUTH;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4141] = block;
  }

  { // ID: 4142
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_SOUTH;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4142] = block;
  }

  { // ID: 4143
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_SOUTH;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4143] = block;
  }

  { // ID: 4144
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_SOUTH;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4144] = block;
  }

  { // ID: 4145
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_SOUTH;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4145] = block;
  }

  { // ID: 4146
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_WEST;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4146] = block;
  }

  { // ID: 4147
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_WEST;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4147] = block;
  }

  { // ID: 4148
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_WEST;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4148] = block;
  }

  { // ID: 4149
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_WEST;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4149] = block;
  }

  { // ID: 4150
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_WEST;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4150] = block;
  }

  { // ID: 4151
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_WEST;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4151] = block;
  }

  { // ID: 4152
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_WEST;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4152] = block;
  }

  { // ID: 4153
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_WEST;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4153] = block;
  }

  { // ID: 4154
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_WEST;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4154] = block;
  }

  { // ID: 4155
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_WEST;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4155] = block;
  }

  { // ID: 4156
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_WEST;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4156] = block;
  }

  { // ID: 4157
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_WEST;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4157] = block;
  }

  { // ID: 4158
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_WEST;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4158] = block;
  }

  { // ID: 4159
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_WEST;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4159] = block;
  }

  { // ID: 4160
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_WEST;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4160] = block;
  }

  { // ID: 4161
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_WEST;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4161] = block;
  }

  { // ID: 4162
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_EAST;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4162] = block;
  }

  { // ID: 4163
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_EAST;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4163] = block;
  }

  { // ID: 4164
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_EAST;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4164] = block;
  }

  { // ID: 4165
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_EAST;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4165] = block;
  }

  { // ID: 4166
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_EAST;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4166] = block;
  }

  { // ID: 4167
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_EAST;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4167] = block;
  }

  { // ID: 4168
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_EAST;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4168] = block;
  }

  { // ID: 4169
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_EAST;
    block->half = IronDoorBlock::HALF_UPPER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4169] = block;
  }

  { // ID: 4170
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_EAST;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4170] = block;
  }

  { // ID: 4171
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_EAST;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4171] = block;
  }

  { // ID: 4172
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_EAST;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4172] = block;
  }

  { // ID: 4173
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_EAST;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_LEFT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4173] = block;
  }

  { // ID: 4174
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_EAST;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4174] = block;
  }

  { // ID: 4175
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_EAST;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_TRUE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4175] = block;
  }

  { // ID: 4176
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_EAST;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_TRUE;
    registry[4176] = block;
  }

  { // ID: 4177
    std::shared_ptr<IronDoorBlock> block = std::make_shared<IronDoorBlock>();
    block->facing = IronDoorBlock::FACING_EAST;
    block->half = IronDoorBlock::HALF_LOWER;
    block->hinge = IronDoorBlock::HINGE_RIGHT;
    block->open = IronDoorBlock::OPEN_FALSE;
    block->powered = IronDoorBlock::POWERED_FALSE;
    registry[4177] = block;
  }

  { // ID: 4238
    std::shared_ptr<IceBlock> block = std::make_shared<IceBlock>();
    registry[4238] = block;
  }

  { // ID: 4874
    std::shared_ptr<InfestedStoneBlock> block = std::make_shared<InfestedStoneBlock>();
    registry[4874] = block;
  }

  { // ID: 4875
    std::shared_ptr<InfestedCobblestoneBlock> block = std::make_shared<InfestedCobblestoneBlock>();
    registry[4875] = block;
  }

  { // ID: 4876
    std::shared_ptr<InfestedStoneBricksBlock> block = std::make_shared<InfestedStoneBricksBlock>();
    registry[4876] = block;
  }

  { // ID: 4877
    std::shared_ptr<InfestedMossyStoneBricksBlock> block = std::make_shared<InfestedMossyStoneBricksBlock>();
    registry[4877] = block;
  }

  { // ID: 4878
    std::shared_ptr<InfestedCrackedStoneBricksBlock> block = std::make_shared<InfestedCrackedStoneBricksBlock>();
    registry[4878] = block;
  }

  { // ID: 4879
    std::shared_ptr<InfestedChiseledStoneBricksBlock> block = std::make_shared<InfestedChiseledStoneBricksBlock>();
    registry[4879] = block;
  }

  { // ID: 5072
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_TRUE;
    block->north = IronBarsBlock::NORTH_TRUE;
    block->south = IronBarsBlock::SOUTH_TRUE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_TRUE;
    block->west = IronBarsBlock::WEST_TRUE;
    registry[5072] = block;
  }

  { // ID: 5073
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_TRUE;
    block->north = IronBarsBlock::NORTH_TRUE;
    block->south = IronBarsBlock::SOUTH_TRUE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_TRUE;
    block->west = IronBarsBlock::WEST_FALSE;
    registry[5073] = block;
  }

  { // ID: 5074
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_TRUE;
    block->north = IronBarsBlock::NORTH_TRUE;
    block->south = IronBarsBlock::SOUTH_TRUE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_FALSE;
    block->west = IronBarsBlock::WEST_TRUE;
    registry[5074] = block;
  }

  { // ID: 5075
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_TRUE;
    block->north = IronBarsBlock::NORTH_TRUE;
    block->south = IronBarsBlock::SOUTH_TRUE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_FALSE;
    block->west = IronBarsBlock::WEST_FALSE;
    registry[5075] = block;
  }

  { // ID: 5076
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_TRUE;
    block->north = IronBarsBlock::NORTH_TRUE;
    block->south = IronBarsBlock::SOUTH_FALSE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_TRUE;
    block->west = IronBarsBlock::WEST_TRUE;
    registry[5076] = block;
  }

  { // ID: 5077
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_TRUE;
    block->north = IronBarsBlock::NORTH_TRUE;
    block->south = IronBarsBlock::SOUTH_FALSE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_TRUE;
    block->west = IronBarsBlock::WEST_FALSE;
    registry[5077] = block;
  }

  { // ID: 5078
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_TRUE;
    block->north = IronBarsBlock::NORTH_TRUE;
    block->south = IronBarsBlock::SOUTH_FALSE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_FALSE;
    block->west = IronBarsBlock::WEST_TRUE;
    registry[5078] = block;
  }

  { // ID: 5079
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_TRUE;
    block->north = IronBarsBlock::NORTH_TRUE;
    block->south = IronBarsBlock::SOUTH_FALSE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_FALSE;
    block->west = IronBarsBlock::WEST_FALSE;
    registry[5079] = block;
  }

  { // ID: 5080
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_TRUE;
    block->north = IronBarsBlock::NORTH_FALSE;
    block->south = IronBarsBlock::SOUTH_TRUE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_TRUE;
    block->west = IronBarsBlock::WEST_TRUE;
    registry[5080] = block;
  }

  { // ID: 5081
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_TRUE;
    block->north = IronBarsBlock::NORTH_FALSE;
    block->south = IronBarsBlock::SOUTH_TRUE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_TRUE;
    block->west = IronBarsBlock::WEST_FALSE;
    registry[5081] = block;
  }

  { // ID: 5082
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_TRUE;
    block->north = IronBarsBlock::NORTH_FALSE;
    block->south = IronBarsBlock::SOUTH_TRUE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_FALSE;
    block->west = IronBarsBlock::WEST_TRUE;
    registry[5082] = block;
  }

  { // ID: 5083
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_TRUE;
    block->north = IronBarsBlock::NORTH_FALSE;
    block->south = IronBarsBlock::SOUTH_TRUE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_FALSE;
    block->west = IronBarsBlock::WEST_FALSE;
    registry[5083] = block;
  }

  { // ID: 5084
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_TRUE;
    block->north = IronBarsBlock::NORTH_FALSE;
    block->south = IronBarsBlock::SOUTH_FALSE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_TRUE;
    block->west = IronBarsBlock::WEST_TRUE;
    registry[5084] = block;
  }

  { // ID: 5085
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_TRUE;
    block->north = IronBarsBlock::NORTH_FALSE;
    block->south = IronBarsBlock::SOUTH_FALSE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_TRUE;
    block->west = IronBarsBlock::WEST_FALSE;
    registry[5085] = block;
  }

  { // ID: 5086
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_TRUE;
    block->north = IronBarsBlock::NORTH_FALSE;
    block->south = IronBarsBlock::SOUTH_FALSE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_FALSE;
    block->west = IronBarsBlock::WEST_TRUE;
    registry[5086] = block;
  }

  { // ID: 5087
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_TRUE;
    block->north = IronBarsBlock::NORTH_FALSE;
    block->south = IronBarsBlock::SOUTH_FALSE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_FALSE;
    block->west = IronBarsBlock::WEST_FALSE;
    registry[5087] = block;
  }

  { // ID: 5088
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_FALSE;
    block->north = IronBarsBlock::NORTH_TRUE;
    block->south = IronBarsBlock::SOUTH_TRUE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_TRUE;
    block->west = IronBarsBlock::WEST_TRUE;
    registry[5088] = block;
  }

  { // ID: 5089
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_FALSE;
    block->north = IronBarsBlock::NORTH_TRUE;
    block->south = IronBarsBlock::SOUTH_TRUE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_TRUE;
    block->west = IronBarsBlock::WEST_FALSE;
    registry[5089] = block;
  }

  { // ID: 5090
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_FALSE;
    block->north = IronBarsBlock::NORTH_TRUE;
    block->south = IronBarsBlock::SOUTH_TRUE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_FALSE;
    block->west = IronBarsBlock::WEST_TRUE;
    registry[5090] = block;
  }

  { // ID: 5091
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_FALSE;
    block->north = IronBarsBlock::NORTH_TRUE;
    block->south = IronBarsBlock::SOUTH_TRUE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_FALSE;
    block->west = IronBarsBlock::WEST_FALSE;
    registry[5091] = block;
  }

  { // ID: 5092
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_FALSE;
    block->north = IronBarsBlock::NORTH_TRUE;
    block->south = IronBarsBlock::SOUTH_FALSE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_TRUE;
    block->west = IronBarsBlock::WEST_TRUE;
    registry[5092] = block;
  }

  { // ID: 5093
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_FALSE;
    block->north = IronBarsBlock::NORTH_TRUE;
    block->south = IronBarsBlock::SOUTH_FALSE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_TRUE;
    block->west = IronBarsBlock::WEST_FALSE;
    registry[5093] = block;
  }

  { // ID: 5094
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_FALSE;
    block->north = IronBarsBlock::NORTH_TRUE;
    block->south = IronBarsBlock::SOUTH_FALSE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_FALSE;
    block->west = IronBarsBlock::WEST_TRUE;
    registry[5094] = block;
  }

  { // ID: 5095
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_FALSE;
    block->north = IronBarsBlock::NORTH_TRUE;
    block->south = IronBarsBlock::SOUTH_FALSE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_FALSE;
    block->west = IronBarsBlock::WEST_FALSE;
    registry[5095] = block;
  }

  { // ID: 5096
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_FALSE;
    block->north = IronBarsBlock::NORTH_FALSE;
    block->south = IronBarsBlock::SOUTH_TRUE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_TRUE;
    block->west = IronBarsBlock::WEST_TRUE;
    registry[5096] = block;
  }

  { // ID: 5097
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_FALSE;
    block->north = IronBarsBlock::NORTH_FALSE;
    block->south = IronBarsBlock::SOUTH_TRUE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_TRUE;
    block->west = IronBarsBlock::WEST_FALSE;
    registry[5097] = block;
  }

  { // ID: 5098
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_FALSE;
    block->north = IronBarsBlock::NORTH_FALSE;
    block->south = IronBarsBlock::SOUTH_TRUE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_FALSE;
    block->west = IronBarsBlock::WEST_TRUE;
    registry[5098] = block;
  }

  { // ID: 5099
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_FALSE;
    block->north = IronBarsBlock::NORTH_FALSE;
    block->south = IronBarsBlock::SOUTH_TRUE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_FALSE;
    block->west = IronBarsBlock::WEST_FALSE;
    registry[5099] = block;
  }

  { // ID: 5100
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_FALSE;
    block->north = IronBarsBlock::NORTH_FALSE;
    block->south = IronBarsBlock::SOUTH_FALSE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_TRUE;
    block->west = IronBarsBlock::WEST_TRUE;
    registry[5100] = block;
  }

  { // ID: 5101
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_FALSE;
    block->north = IronBarsBlock::NORTH_FALSE;
    block->south = IronBarsBlock::SOUTH_FALSE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_TRUE;
    block->west = IronBarsBlock::WEST_FALSE;
    registry[5101] = block;
  }

  { // ID: 5102
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_FALSE;
    block->north = IronBarsBlock::NORTH_FALSE;
    block->south = IronBarsBlock::SOUTH_FALSE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_FALSE;
    block->west = IronBarsBlock::WEST_TRUE;
    registry[5102] = block;
  }

  { // ID: 5103
    std::shared_ptr<IronBarsBlock> block = std::make_shared<IronBarsBlock>();
    block->east = IronBarsBlock::EAST_FALSE;
    block->north = IronBarsBlock::NORTH_FALSE;
    block->south = IronBarsBlock::SOUTH_FALSE;
    block->waterlogged = IronBarsBlock::WATERLOGGED_FALSE;
    block->west = IronBarsBlock::WEST_FALSE;
    registry[5103] = block;
  }

  { // ID: 8278
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_NORTH;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8278] = block;
  }

  { // ID: 8279
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_NORTH;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8279] = block;
  }

  { // ID: 8280
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_NORTH;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8280] = block;
  }

  { // ID: 8281
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_NORTH;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8281] = block;
  }

  { // ID: 8282
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_NORTH;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8282] = block;
  }

  { // ID: 8283
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_NORTH;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8283] = block;
  }

  { // ID: 8284
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_NORTH;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8284] = block;
  }

  { // ID: 8285
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_NORTH;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8285] = block;
  }

  { // ID: 8286
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_NORTH;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8286] = block;
  }

  { // ID: 8287
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_NORTH;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8287] = block;
  }

  { // ID: 8288
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_NORTH;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8288] = block;
  }

  { // ID: 8289
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_NORTH;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8289] = block;
  }

  { // ID: 8290
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_NORTH;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8290] = block;
  }

  { // ID: 8291
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_NORTH;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8291] = block;
  }

  { // ID: 8292
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_NORTH;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8292] = block;
  }

  { // ID: 8293
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_NORTH;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8293] = block;
  }

  { // ID: 8294
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_SOUTH;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8294] = block;
  }

  { // ID: 8295
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_SOUTH;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8295] = block;
  }

  { // ID: 8296
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_SOUTH;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8296] = block;
  }

  { // ID: 8297
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_SOUTH;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8297] = block;
  }

  { // ID: 8298
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_SOUTH;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8298] = block;
  }

  { // ID: 8299
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_SOUTH;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8299] = block;
  }

  { // ID: 8300
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_SOUTH;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8300] = block;
  }

  { // ID: 8301
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_SOUTH;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8301] = block;
  }

  { // ID: 8302
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_SOUTH;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8302] = block;
  }

  { // ID: 8303
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_SOUTH;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8303] = block;
  }

  { // ID: 8304
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_SOUTH;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8304] = block;
  }

  { // ID: 8305
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_SOUTH;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8305] = block;
  }

  { // ID: 8306
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_SOUTH;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8306] = block;
  }

  { // ID: 8307
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_SOUTH;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8307] = block;
  }

  { // ID: 8308
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_SOUTH;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8308] = block;
  }

  { // ID: 8309
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_SOUTH;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8309] = block;
  }

  { // ID: 8310
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_WEST;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8310] = block;
  }

  { // ID: 8311
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_WEST;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8311] = block;
  }

  { // ID: 8312
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_WEST;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8312] = block;
  }

  { // ID: 8313
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_WEST;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8313] = block;
  }

  { // ID: 8314
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_WEST;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8314] = block;
  }

  { // ID: 8315
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_WEST;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8315] = block;
  }

  { // ID: 8316
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_WEST;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8316] = block;
  }

  { // ID: 8317
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_WEST;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8317] = block;
  }

  { // ID: 8318
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_WEST;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8318] = block;
  }

  { // ID: 8319
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_WEST;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8319] = block;
  }

  { // ID: 8320
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_WEST;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8320] = block;
  }

  { // ID: 8321
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_WEST;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8321] = block;
  }

  { // ID: 8322
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_WEST;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8322] = block;
  }

  { // ID: 8323
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_WEST;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8323] = block;
  }

  { // ID: 8324
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_WEST;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8324] = block;
  }

  { // ID: 8325
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_WEST;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8325] = block;
  }

  { // ID: 8326
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_EAST;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8326] = block;
  }

  { // ID: 8327
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_EAST;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8327] = block;
  }

  { // ID: 8328
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_EAST;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8328] = block;
  }

  { // ID: 8329
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_EAST;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8329] = block;
  }

  { // ID: 8330
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_EAST;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8330] = block;
  }

  { // ID: 8331
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_EAST;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8331] = block;
  }

  { // ID: 8332
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_EAST;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8332] = block;
  }

  { // ID: 8333
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_EAST;
    block->half = IronTrapdoorBlock::HALF_TOP;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8333] = block;
  }

  { // ID: 8334
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_EAST;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8334] = block;
  }

  { // ID: 8335
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_EAST;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8335] = block;
  }

  { // ID: 8336
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_EAST;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8336] = block;
  }

  { // ID: 8337
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_EAST;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_TRUE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8337] = block;
  }

  { // ID: 8338
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_EAST;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8338] = block;
  }

  { // ID: 8339
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_EAST;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8339] = block;
  }

  { // ID: 8340
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_EAST;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_TRUE;
    registry[8340] = block;
  }

  { // ID: 8341
    std::shared_ptr<IronTrapdoorBlock> block = std::make_shared<IronTrapdoorBlock>();
    block->facing = IronTrapdoorBlock::FACING_EAST;
    block->half = IronTrapdoorBlock::HALF_BOTTOM;
    block->open = IronTrapdoorBlock::OPEN_FALSE;
    block->powered = IronTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = IronTrapdoorBlock::WATERLOGGED_FALSE;
    registry[8341] = block;
  }

  { // ID: 21428
    std::shared_ptr<InfestedDeepslateBlock> block = std::make_shared<InfestedDeepslateBlock>();
    block->axis = InfestedDeepslateBlock::AXIS_X;
    registry[21428] = block;
  }

  { // ID: 21429
    std::shared_ptr<InfestedDeepslateBlock> block = std::make_shared<InfestedDeepslateBlock>();
    block->axis = InfestedDeepslateBlock::AXIS_Y;
    registry[21429] = block;
  }

  { // ID: 21430
    std::shared_ptr<InfestedDeepslateBlock> block = std::make_shared<InfestedDeepslateBlock>();
    block->axis = InfestedDeepslateBlock::AXIS_Z;
    registry[21430] = block;
  }
}