
#include "hopper_item.h"

#include "../../block/builtin/hopper_block.h"

HopperItem::HopperItem() = default;
HopperItem::~HopperItem() = default;

int HopperItem::getID() const {
  return 618;
}

std::shared_ptr<Item> HopperItem::clone() const {
  return std::make_shared<HopperItem>();
}

int HopperItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return HopperBlock().getId();
}
