

#include "jukebox_block.h"

JukeboxBlock::JukeboxBlock() = default;
JukeboxBlock::~JukeboxBlock() = default;

short JukeboxBlock::getId() const {
  return 4273 + has_record * 1;
}

std::shared_ptr<Block> JukeboxBlock::clone() const {
  std::shared_ptr<JukeboxBlock> copy = std::make_shared<JukeboxBlock>();
  copy->has_record = has_record;
  return copy;
}
