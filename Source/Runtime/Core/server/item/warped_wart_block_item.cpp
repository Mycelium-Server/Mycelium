
#include "warped_wart_block_item.h"

#include "../block/warped_wart_block_block.h"

WarpedWartBlockItem::WarpedWartBlockItem() = default;
WarpedWartBlockItem::~WarpedWartBlockItem() = default;

int WarpedWartBlockItem::getID() const {
  return 470;
}

std::shared_ptr<Item> WarpedWartBlockItem::clone() const {
  return std::make_shared<WarpedWartBlockItem>();
}

int WarpedWartBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WarpedWartBlockBlock().getId();
}