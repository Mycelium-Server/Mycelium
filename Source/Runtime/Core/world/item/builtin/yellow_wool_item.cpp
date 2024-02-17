
#include "yellow_wool_item.h"

#include "../../block/builtin/yellow_wool_block.h"

YellowWoolItem::YellowWoolItem() = default;
YellowWoolItem::~YellowWoolItem() = default;

int YellowWoolItem::getID() const {
  return 171;
}

std::shared_ptr<Item> YellowWoolItem::clone() const {
  return std::make_shared<YellowWoolItem>();
}

int YellowWoolItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return YellowWoolBlock().getId();
}