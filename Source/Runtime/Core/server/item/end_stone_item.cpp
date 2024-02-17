
#include "end_stone_item.h"

#include "../block/end_stone_block.h"

EndStoneItem::EndStoneItem() = default;
EndStoneItem::~EndStoneItem() = default;

int EndStoneItem::getID() const {
  return 332;
}

std::shared_ptr<Item> EndStoneItem::clone() const {
  return std::make_shared<EndStoneItem>();
}

int EndStoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return EndStoneBlock().getId();
}