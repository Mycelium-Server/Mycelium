
#include "polished_basalt_item.h"

#include "../../block/builtin/polished_basalt_block.h"

PolishedBasaltItem::PolishedBasaltItem() = default;
PolishedBasaltItem::~PolishedBasaltItem() = default;

int PolishedBasaltItem::getID() const {
  return 284;
}

std::shared_ptr<Item> PolishedBasaltItem::clone() const {
  return std::make_shared<PolishedBasaltItem>();
}

int PolishedBasaltItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedBasaltBlock().getId();
}