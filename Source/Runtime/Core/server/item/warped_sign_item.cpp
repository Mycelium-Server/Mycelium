
#include "warped_sign_item.h"

#include "../block/warped_sign_block.h"

WarpedSignItem::WarpedSignItem() = default;
WarpedSignItem::~WarpedSignItem() = default;

int WarpedSignItem::getID() const {
  return 812;
}

std::shared_ptr<Item> WarpedSignItem::clone() const {
  return std::make_shared<WarpedSignItem>();
}

int WarpedSignItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WarpedSignBlock().getId();
}