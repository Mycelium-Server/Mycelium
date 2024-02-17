
#include "light_gray_wool_item.h"

#include "../../block/builtin/light_gray_wool_block.h"

LightGrayWoolItem::LightGrayWoolItem() = default;
LightGrayWoolItem::~LightGrayWoolItem() = default;

int LightGrayWoolItem::getID() const {
  return 175;
}

std::shared_ptr<Item> LightGrayWoolItem::clone() const {
  return std::make_shared<LightGrayWoolItem>();
}

int LightGrayWoolItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightGrayWoolBlock().getId();
}
