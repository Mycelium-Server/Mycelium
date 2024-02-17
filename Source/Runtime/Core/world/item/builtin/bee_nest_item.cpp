
#include "bee_nest_item.h"

#include "../../block/builtin/bee_nest_block.h"

BeeNestItem::BeeNestItem() = default;
BeeNestItem::~BeeNestItem() = default;

int BeeNestItem::getID() const {
  return 1106;
}

std::shared_ptr<Item> BeeNestItem::clone() const {
  return std::make_shared<BeeNestItem>();
}

int BeeNestItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BeeNestBlock().getId();
}