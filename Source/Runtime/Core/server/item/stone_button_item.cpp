
#include "stone_button_item.h"

#include "../block/stone_button_block.h"

StoneButtonItem::StoneButtonItem() = default;
StoneButtonItem::~StoneButtonItem() = default;

int StoneButtonItem::getID() const {
  return 632;
}

std::shared_ptr<Item> StoneButtonItem::clone() const {
  return std::make_shared<StoneButtonItem>();
}

int StoneButtonItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StoneButtonBlock().getId();
}