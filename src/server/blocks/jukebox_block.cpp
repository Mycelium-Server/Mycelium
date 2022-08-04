#include "jukebox_block.h"

JukeboxBlock::JukeboxBlock() = default;
JukeboxBlock::~JukeboxBlock() = default;

short JukeboxBlock::getId() const {
  if (has_record == HAS_RECORD_TRUE) return 4273;
  if (has_record == HAS_RECORD_FALSE) return 4274;
  return 4274;
}
