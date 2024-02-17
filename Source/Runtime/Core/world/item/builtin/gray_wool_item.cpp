
#include "gray_wool_item.h"

#include "../../block/builtin/gray_wool_block.h"

GrayWoolItem::GrayWoolItem() = default;
GrayWoolItem::~GrayWoolItem() = default;

int GrayWoolItem::getID() const {
  return 174;
}

std::shared_ptr<Item> GrayWoolItem::clone() const {
  return std::make_shared<GrayWoolItem>();
}

int GrayWoolItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GrayWoolBlock().getId();
}