
#include "orange_tulip_item.h"

#include "../../block/builtin/orange_tulip_block.h"

OrangeTulipItem::OrangeTulipItem() = default;
OrangeTulipItem::~OrangeTulipItem() = default;

int OrangeTulipItem::getID() const {
  return 189;
}

std::shared_ptr<Item> OrangeTulipItem::clone() const {
  return std::make_shared<OrangeTulipItem>();
}

int OrangeTulipItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OrangeTulipBlock().getId();
}