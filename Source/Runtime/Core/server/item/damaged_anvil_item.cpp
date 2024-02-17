
#include "damaged_anvil_item.h"

#include "../block/damaged_anvil_block.h"

DamagedAnvilItem::DamagedAnvilItem() = default;
DamagedAnvilItem::~DamagedAnvilItem() = default;

int DamagedAnvilItem::getID() const {
  return 373;
}

std::shared_ptr<Item> DamagedAnvilItem::clone() const {
  return std::make_shared<DamagedAnvilItem>();
}

int DamagedAnvilItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DamagedAnvilBlock().getId();
}