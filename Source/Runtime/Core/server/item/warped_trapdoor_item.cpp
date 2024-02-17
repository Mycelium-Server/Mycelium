
#include "warped_trapdoor_item.h"

#include "../block/warped_trapdoor_block.h"

WarpedTrapdoorItem::WarpedTrapdoorItem() = default;
WarpedTrapdoorItem::~WarpedTrapdoorItem() = default;

int WarpedTrapdoorItem::getID() const {
  return 675;
}

std::shared_ptr<Item> WarpedTrapdoorItem::clone() const {
  return std::make_shared<WarpedTrapdoorItem>();
}

int WarpedTrapdoorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WarpedTrapdoorBlock().getId();
}