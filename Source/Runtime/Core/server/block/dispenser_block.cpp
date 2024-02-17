

#include "dispenser_block.h"

DispenserBlock::DispenserBlock() = default;
DispenserBlock::~DispenserBlock() = default;

short DispenserBlock::getId() const {
  return 464 + triggered * 1 + facing * 2;
}

std::shared_ptr<Block> DispenserBlock::clone() const {
  std::shared_ptr<DispenserBlock> copy = std::make_shared<DispenserBlock>();
  copy->facing = facing;
  copy->triggered = triggered;
  return copy;
}
