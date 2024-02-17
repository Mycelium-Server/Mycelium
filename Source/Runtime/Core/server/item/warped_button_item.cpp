
#include "warped_button_item.h"

#include "../block/warped_button_block.h"

WarpedButtonItem::WarpedButtonItem() = default;
WarpedButtonItem::~WarpedButtonItem() = default;

int WarpedButtonItem::getID() const {
  return 642;
}

std::shared_ptr<Item> WarpedButtonItem::clone() const {
  return std::make_shared<WarpedButtonItem>();
}

int WarpedButtonItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WarpedButtonBlock().getId();
}
