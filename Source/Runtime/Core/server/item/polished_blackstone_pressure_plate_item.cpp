
#include "polished_blackstone_pressure_plate_item.h"

#include "../block/polished_blackstone_pressure_plate_block.h"

PolishedBlackstonePressurePlateItem::PolishedBlackstonePressurePlateItem() = default;
PolishedBlackstonePressurePlateItem::~PolishedBlackstonePressurePlateItem() = default;

int PolishedBlackstonePressurePlateItem::getID() const {
  return 644;
}

std::shared_ptr<Item> PolishedBlackstonePressurePlateItem::clone() const {
  return std::make_shared<PolishedBlackstonePressurePlateItem>();
}

int PolishedBlackstonePressurePlateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedBlackstonePressurePlateBlock().getId();
}
