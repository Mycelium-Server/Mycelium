
#include "pumpkin_item.h"

#include "../block/pumpkin_block.h"

PumpkinItem::PumpkinItem() = default;
PumpkinItem::~PumpkinItem() = default;

int PumpkinItem::getID() const {
  return 277;
}

std::shared_ptr<Item> PumpkinItem::clone() const {
  return std::make_shared<PumpkinItem>();
}

int PumpkinItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PumpkinBlock().getId();
}