
#include "green_wool_item.h"

#include "../block/green_wool_block.h"

GreenWoolItem::GreenWoolItem() = default;
GreenWoolItem::~GreenWoolItem() = default;

int GreenWoolItem::getID() const {
  return 180;
}

std::shared_ptr<Item> GreenWoolItem::clone() const {
  return std::make_shared<GreenWoolItem>();
}

int GreenWoolItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GreenWoolBlock().getId();
}