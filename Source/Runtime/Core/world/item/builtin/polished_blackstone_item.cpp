
#include "polished_blackstone_item.h"

#include "../../block/builtin/polished_blackstone_block.h"

PolishedBlackstoneItem::PolishedBlackstoneItem() = default;
PolishedBlackstoneItem::~PolishedBlackstoneItem() = default;

int PolishedBlackstoneItem::getID() const {
  return 1116;
}

std::shared_ptr<Item> PolishedBlackstoneItem::clone() const {
  return std::make_shared<PolishedBlackstoneItem>();
}

int PolishedBlackstoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedBlackstoneBlock().getId();
}