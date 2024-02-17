

#include "block_registry.h"

#include "zombie_head_block.h"
#include "zombie_wall_head_block.h"

void BlockRegistry::generateZ() {

  { // ID: 7147
    std::shared_ptr<ZombieHeadBlock> block = std::make_shared<ZombieHeadBlock>();
    block->rotation = ZombieHeadBlock::ROTATION_0;
    registry[7147] = block;
  }

  { // ID: 7148
    std::shared_ptr<ZombieHeadBlock> block = std::make_shared<ZombieHeadBlock>();
    block->rotation = ZombieHeadBlock::ROTATION_1;
    registry[7148] = block;
  }

  { // ID: 7149
    std::shared_ptr<ZombieHeadBlock> block = std::make_shared<ZombieHeadBlock>();
    block->rotation = ZombieHeadBlock::ROTATION_2;
    registry[7149] = block;
  }

  { // ID: 7150
    std::shared_ptr<ZombieHeadBlock> block = std::make_shared<ZombieHeadBlock>();
    block->rotation = ZombieHeadBlock::ROTATION_3;
    registry[7150] = block;
  }

  { // ID: 7151
    std::shared_ptr<ZombieHeadBlock> block = std::make_shared<ZombieHeadBlock>();
    block->rotation = ZombieHeadBlock::ROTATION_4;
    registry[7151] = block;
  }

  { // ID: 7152
    std::shared_ptr<ZombieHeadBlock> block = std::make_shared<ZombieHeadBlock>();
    block->rotation = ZombieHeadBlock::ROTATION_5;
    registry[7152] = block;
  }

  { // ID: 7153
    std::shared_ptr<ZombieHeadBlock> block = std::make_shared<ZombieHeadBlock>();
    block->rotation = ZombieHeadBlock::ROTATION_6;
    registry[7153] = block;
  }

  { // ID: 7154
    std::shared_ptr<ZombieHeadBlock> block = std::make_shared<ZombieHeadBlock>();
    block->rotation = ZombieHeadBlock::ROTATION_7;
    registry[7154] = block;
  }

  { // ID: 7155
    std::shared_ptr<ZombieHeadBlock> block = std::make_shared<ZombieHeadBlock>();
    block->rotation = ZombieHeadBlock::ROTATION_8;
    registry[7155] = block;
  }

  { // ID: 7156
    std::shared_ptr<ZombieHeadBlock> block = std::make_shared<ZombieHeadBlock>();
    block->rotation = ZombieHeadBlock::ROTATION_9;
    registry[7156] = block;
  }

  { // ID: 7157
    std::shared_ptr<ZombieHeadBlock> block = std::make_shared<ZombieHeadBlock>();
    block->rotation = ZombieHeadBlock::ROTATION_10;
    registry[7157] = block;
  }

  { // ID: 7158
    std::shared_ptr<ZombieHeadBlock> block = std::make_shared<ZombieHeadBlock>();
    block->rotation = ZombieHeadBlock::ROTATION_11;
    registry[7158] = block;
  }

  { // ID: 7159
    std::shared_ptr<ZombieHeadBlock> block = std::make_shared<ZombieHeadBlock>();
    block->rotation = ZombieHeadBlock::ROTATION_12;
    registry[7159] = block;
  }

  { // ID: 7160
    std::shared_ptr<ZombieHeadBlock> block = std::make_shared<ZombieHeadBlock>();
    block->rotation = ZombieHeadBlock::ROTATION_13;
    registry[7160] = block;
  }

  { // ID: 7161
    std::shared_ptr<ZombieHeadBlock> block = std::make_shared<ZombieHeadBlock>();
    block->rotation = ZombieHeadBlock::ROTATION_14;
    registry[7161] = block;
  }

  { // ID: 7162
    std::shared_ptr<ZombieHeadBlock> block = std::make_shared<ZombieHeadBlock>();
    block->rotation = ZombieHeadBlock::ROTATION_15;
    registry[7162] = block;
  }

  { // ID: 7163
    std::shared_ptr<ZombieWallHeadBlock> block = std::make_shared<ZombieWallHeadBlock>();
    block->facing = ZombieWallHeadBlock::FACING_NORTH;
    registry[7163] = block;
  }

  { // ID: 7164
    std::shared_ptr<ZombieWallHeadBlock> block = std::make_shared<ZombieWallHeadBlock>();
    block->facing = ZombieWallHeadBlock::FACING_SOUTH;
    registry[7164] = block;
  }

  { // ID: 7165
    std::shared_ptr<ZombieWallHeadBlock> block = std::make_shared<ZombieWallHeadBlock>();
    block->facing = ZombieWallHeadBlock::FACING_WEST;
    registry[7165] = block;
  }

  { // ID: 7166
    std::shared_ptr<ZombieWallHeadBlock> block = std::make_shared<ZombieWallHeadBlock>();
    block->facing = ZombieWallHeadBlock::FACING_EAST;
    registry[7166] = block;
  }
}