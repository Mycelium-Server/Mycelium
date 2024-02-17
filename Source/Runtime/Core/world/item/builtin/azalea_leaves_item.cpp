
#include "azalea_leaves_item.h"

#include "../../block/builtin/azalea_leaves_block.h"

AzaleaLeavesItem::AzaleaLeavesItem() = default;
AzaleaLeavesItem::~AzaleaLeavesItem() = default;

int AzaleaLeavesItem::getID() const {
  return 149;
}

std::shared_ptr<Item> AzaleaLeavesItem::clone() const {
  return std::make_shared<AzaleaLeavesItem>();
}

int AzaleaLeavesItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return AzaleaLeavesBlock().getId();
}