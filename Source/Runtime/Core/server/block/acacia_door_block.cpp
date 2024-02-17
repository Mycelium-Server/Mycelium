

#include "acacia_door_block.h"

AcaciaDoorBlock::AcaciaDoorBlock() = default;
AcaciaDoorBlock::~AcaciaDoorBlock() = default;

short AcaciaDoorBlock::getId() const {
  return 9747 + powered * 1 + open * 2 + hinge * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> AcaciaDoorBlock::clone() const {
  std::shared_ptr<AcaciaDoorBlock> copy = std::make_shared<AcaciaDoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->hinge = hinge;
  copy->open = open;
  copy->powered = powered;
  return copy;
}
