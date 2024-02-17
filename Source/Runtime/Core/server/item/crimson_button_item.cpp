
#include "crimson_button_item.h"

#include "../block/crimson_button_block.h"

CrimsonButtonItem::CrimsonButtonItem() = default;
CrimsonButtonItem::~CrimsonButtonItem() = default;

int CrimsonButtonItem::getID() const {
  return 641;
}

std::shared_ptr<Item> CrimsonButtonItem::clone() const {
  return std::make_shared<CrimsonButtonItem>();
}

int CrimsonButtonItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CrimsonButtonBlock().getId();
}