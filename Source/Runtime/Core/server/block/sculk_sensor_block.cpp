

#include "sculk_sensor_block.h"

SculkSensorBlock::SculkSensorBlock() = default;
SculkSensorBlock::~SculkSensorBlock() = default;

short SculkSensorBlock::getId() const {
  return 18673 + waterlogged * 1 + sculk_sensor_phase * 2 + power * 6;
}

std::shared_ptr<Block> SculkSensorBlock::clone() const {
  std::shared_ptr<SculkSensorBlock> copy = std::make_shared<SculkSensorBlock>();
  copy->power = power;
  copy->sculk_sensor_phase = sculk_sensor_phase;
  copy->waterlogged = waterlogged;
  return copy;
}
