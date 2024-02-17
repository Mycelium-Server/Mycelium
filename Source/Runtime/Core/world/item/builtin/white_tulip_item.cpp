
#include "white_tulip_item.h"

#include "../../block/builtin/white_tulip_block.h"

WhiteTulipItem::WhiteTulipItem() = default;
WhiteTulipItem::~WhiteTulipItem() = default;

int WhiteTulipItem::getID() const {
  return 190;
}

std::shared_ptr<Item> WhiteTulipItem::clone() const {
  return std::make_shared<WhiteTulipItem>();
}

int WhiteTulipItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WhiteTulipBlock().getId();
}