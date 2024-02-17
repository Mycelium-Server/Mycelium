
#include "light_blue_wool_item.h"

#include "../block/light_blue_wool_block.h"

LightBlueWoolItem::LightBlueWoolItem() = default;
LightBlueWoolItem::~LightBlueWoolItem() = default;

int LightBlueWoolItem::getID() const {
  return 170;
}

std::shared_ptr<Item> LightBlueWoolItem::clone() const {
  return std::make_shared<LightBlueWoolItem>();
}

int LightBlueWoolItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightBlueWoolBlock().getId();
}
