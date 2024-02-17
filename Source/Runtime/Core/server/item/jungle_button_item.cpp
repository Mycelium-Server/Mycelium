
#include "jungle_button_item.h"

#include "../block/jungle_button_block.h"

JungleButtonItem::JungleButtonItem() = default;
JungleButtonItem::~JungleButtonItem() = default;

int JungleButtonItem::getID() const {
  return 637;
}

std::shared_ptr<Item> JungleButtonItem::clone() const {
  return std::make_shared<JungleButtonItem>();
}

int JungleButtonItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return JungleButtonBlock().getId();
}