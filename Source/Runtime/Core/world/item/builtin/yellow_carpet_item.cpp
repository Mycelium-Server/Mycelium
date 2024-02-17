
#include "yellow_carpet_item.h"

#include "../../block/builtin/yellow_carpet_block.h"

YellowCarpetItem::YellowCarpetItem() = default;
YellowCarpetItem::~YellowCarpetItem() = default;

int YellowCarpetItem::getID() const {
  return 402;
}

std::shared_ptr<Item> YellowCarpetItem::clone() const {
  return std::make_shared<YellowCarpetItem>();
}

int YellowCarpetItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return YellowCarpetBlock().getId();
}
