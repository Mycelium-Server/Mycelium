
#include "light_blue_bed_item.h"

#include "../block/light_blue_bed_block.h"

LightBlueBedItem::LightBlueBedItem() = default;
LightBlueBedItem::~LightBlueBedItem() = default;

int LightBlueBedItem::getID() const {
  return 872;
}

std::shared_ptr<Item> LightBlueBedItem::clone() const {
  return std::make_shared<LightBlueBedItem>();
}

int LightBlueBedItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightBlueBedBlock().getId();
}