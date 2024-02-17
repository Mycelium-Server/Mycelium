

#include "observer_block.h"

ObserverBlock::ObserverBlock() = default;
ObserverBlock::~ObserverBlock() = default;

short ObserverBlock::getId() const {
  return 10141 + powered * 1 + facing * 2;
}

std::shared_ptr<Block> ObserverBlock::clone() const {
  std::shared_ptr<ObserverBlock> copy = std::make_shared<ObserverBlock>();
  copy->facing = facing;
  copy->powered = powered;
  return copy;
}
