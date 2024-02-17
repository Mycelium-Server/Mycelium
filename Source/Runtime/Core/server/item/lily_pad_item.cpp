
#include "lily_pad_item.h"

#include "../block/lily_pad_block.h"

LilyPadItem::LilyPadItem() = default;
LilyPadItem::~LilyPadItem() = default;

int LilyPadItem::getID() const {
  return 320;
}

std::shared_ptr<Item> LilyPadItem::clone() const {
  return std::make_shared<LilyPadItem>();
}

int LilyPadItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LilyPadBlock().getId();
}