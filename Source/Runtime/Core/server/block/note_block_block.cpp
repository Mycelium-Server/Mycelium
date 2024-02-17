

#include "note_block_block.h"

NoteBlockBlock::NoteBlockBlock() = default;
NoteBlockBlock::~NoteBlockBlock() = default;

short NoteBlockBlock::getId() const {
  return 479 + powered * 1 + note * 2 + instrument * 50;
}

std::shared_ptr<Block> NoteBlockBlock::clone() const {
  std::shared_ptr<NoteBlockBlock> copy = std::make_shared<NoteBlockBlock>();
  copy->instrument = instrument;
  copy->note = note;
  copy->powered = powered;
  return copy;
}
