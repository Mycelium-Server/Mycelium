

#include "mangrove_propagule_block.h"

MangrovePropaguleBlock::MangrovePropaguleBlock() = default;
MangrovePropaguleBlock::~MangrovePropaguleBlock() = default;

short MangrovePropaguleBlock::getId() const {
  return 34 + waterlogged * 1 + stage * 2 + hanging * 4 + age * 8;
}

std::shared_ptr<Block> MangrovePropaguleBlock::clone() const {
  std::shared_ptr<MangrovePropaguleBlock> copy = std::make_shared<MangrovePropaguleBlock>();
  copy->age = age;
  copy->hanging = hanging;
  copy->stage = stage;
  copy->waterlogged = waterlogged;
  return copy;
}
