
#include "note_block_item.h"

#include "../block/note_block_block.h"

NoteBlockItem::NoteBlockItem() = default;
NoteBlockItem::~NoteBlockItem() = default;

int NoteBlockItem::getID() const {
  return 631;
}

std::shared_ptr<Item> NoteBlockItem::clone() const {
  return std::make_shared<NoteBlockItem>();
}

int NoteBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return NoteBlockBlock().getId();
}