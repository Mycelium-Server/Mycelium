

#include "cocoa_block.h"

CocoaBlock::CocoaBlock() = default;
CocoaBlock::~CocoaBlock() = default;

short CocoaBlock::getId() const {
  return 5749 + facing * 1 + age * 4;
}

std::shared_ptr<Block> CocoaBlock::clone() const {
  std::shared_ptr<CocoaBlock> copy = std::make_shared<CocoaBlock>();
  copy->age = age;
  copy->facing = facing;
  return copy;
}
