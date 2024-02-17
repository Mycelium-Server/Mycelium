
#include "dark_oak_button_item.h"

#include "../../block/builtin/dark_oak_button_block.h"

DarkOakButtonItem::DarkOakButtonItem() = default;
DarkOakButtonItem::~DarkOakButtonItem() = default;

int DarkOakButtonItem::getID() const {
  return 639;
}

std::shared_ptr<Item> DarkOakButtonItem::clone() const {
  return std::make_shared<DarkOakButtonItem>();
}

int DarkOakButtonItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DarkOakButtonBlock().getId();
}