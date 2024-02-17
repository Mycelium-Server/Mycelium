
#include "birch_button_item.h"

#include "../../block/builtin/birch_button_block.h"

BirchButtonItem::BirchButtonItem() = default;
BirchButtonItem::~BirchButtonItem() = default;

int BirchButtonItem::getID() const {
  return 636;
}

std::shared_ptr<Item> BirchButtonItem::clone() const {
  return std::make_shared<BirchButtonItem>();
}

int BirchButtonItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BirchButtonBlock().getId();
}