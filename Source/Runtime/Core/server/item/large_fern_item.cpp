
#include "large_fern_item.h"

#include "../block/large_fern_block.h"

LargeFernItem::LargeFernItem() = default;
LargeFernItem::~LargeFernItem() = default;

int LargeFernItem::getID() const {
  return 422;
}

std::shared_ptr<Item> LargeFernItem::clone() const {
  return std::make_shared<LargeFernItem>();
}

int LargeFernItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LargeFernBlock().getId();
}
