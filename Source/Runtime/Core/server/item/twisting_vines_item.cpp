
#include "twisting_vines_item.h"

#include "../block/twisting_vines_block.h"

TwistingVinesItem::TwistingVinesItem() = default;
TwistingVinesItem::~TwistingVinesItem() = default;

int TwistingVinesItem::getID() const {
  return 205;
}

std::shared_ptr<Item> TwistingVinesItem::clone() const {
  return std::make_shared<TwistingVinesItem>();
}

int TwistingVinesItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return TwistingVinesBlock().getId();
}