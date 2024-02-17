
#include "polished_granite_item.h"

#include "../../block/builtin/polished_granite_block.h"

PolishedGraniteItem::PolishedGraniteItem() = default;
PolishedGraniteItem::~PolishedGraniteItem() = default;

int PolishedGraniteItem::getID() const {
  return 3;
}

std::shared_ptr<Item> PolishedGraniteItem::clone() const {
  return std::make_shared<PolishedGraniteItem>();
}

int PolishedGraniteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedGraniteBlock().getId();
}