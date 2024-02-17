
#include "polished_diorite_item.h"

#include "../../block/builtin/polished_diorite_block.h"

PolishedDioriteItem::PolishedDioriteItem() = default;
PolishedDioriteItem::~PolishedDioriteItem() = default;

int PolishedDioriteItem::getID() const {
  return 5;
}

std::shared_ptr<Item> PolishedDioriteItem::clone() const {
  return std::make_shared<PolishedDioriteItem>();
}

int PolishedDioriteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedDioriteBlock().getId();
}