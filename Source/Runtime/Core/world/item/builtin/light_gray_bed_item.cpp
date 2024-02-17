
#include "light_gray_bed_item.h"

#include "../../block/builtin/light_gray_bed_block.h"

LightGrayBedItem::LightGrayBedItem() = default;
LightGrayBedItem::~LightGrayBedItem() = default;

int LightGrayBedItem::getID() const {
  return 877;
}

std::shared_ptr<Item> LightGrayBedItem::clone() const {
  return std::make_shared<LightGrayBedItem>();
}

int LightGrayBedItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightGrayBedBlock().getId();
}