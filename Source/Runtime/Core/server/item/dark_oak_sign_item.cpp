
#include "dark_oak_sign_item.h"

#include "../block/dark_oak_sign_block.h"

DarkOakSignItem::DarkOakSignItem() = default;
DarkOakSignItem::~DarkOakSignItem() = default;

int DarkOakSignItem::getID() const {
  return 809;
}

std::shared_ptr<Item> DarkOakSignItem::clone() const {
  return std::make_shared<DarkOakSignItem>();
}

int DarkOakSignItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DarkOakSignBlock().getId();
}