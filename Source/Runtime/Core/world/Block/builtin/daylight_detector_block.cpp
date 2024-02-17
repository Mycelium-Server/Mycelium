

#include "daylight_detector_block.h"

DaylightDetectorBlock::DaylightDetectorBlock() = default;
DaylightDetectorBlock::~DaylightDetectorBlock() = default;

short DaylightDetectorBlock::getId() const {
  return 7311 + power * 1 + inverted * 16;
}

std::shared_ptr<Block> DaylightDetectorBlock::clone() const {
  std::shared_ptr<DaylightDetectorBlock> copy = std::make_shared<DaylightDetectorBlock>();
  copy->inverted = inverted;
  copy->power = power;
  return copy;
}
