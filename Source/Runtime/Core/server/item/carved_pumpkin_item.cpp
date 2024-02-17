
#include "carved_pumpkin_item.h"

#include "../block/carved_pumpkin_block.h"

CarvedPumpkinItem::CarvedPumpkinItem() = default;
CarvedPumpkinItem::~CarvedPumpkinItem() = default;

int CarvedPumpkinItem::getID() const {
  return 278;
}

std::shared_ptr<Item> CarvedPumpkinItem::clone() const {
  return std::make_shared<CarvedPumpkinItem>();
}

int CarvedPumpkinItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CarvedPumpkinBlock().getId();
}
