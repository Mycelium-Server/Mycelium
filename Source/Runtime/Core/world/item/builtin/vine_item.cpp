
#include "vine_item.h"

#include "../../block/builtin/vine_block.h"

VineItem::VineItem() = default;
VineItem::~VineItem() = default;

int VineItem::getID() const {
  return 314;
}

std::shared_ptr<Item> VineItem::clone() const {
  return std::make_shared<VineItem>();
}

int VineItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return VineBlock().getId();
}