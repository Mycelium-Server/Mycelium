
#include "acacia_trapdoor_item.h"

#include "../block/acacia_trapdoor_block.h"

AcaciaTrapdoorItem::AcaciaTrapdoorItem() = default;
AcaciaTrapdoorItem::~AcaciaTrapdoorItem() = default;

int AcaciaTrapdoorItem::getID() const {
  return 671;
}

std::shared_ptr<Item> AcaciaTrapdoorItem::clone() const {
  return std::make_shared<AcaciaTrapdoorItem>();
}

int AcaciaTrapdoorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return AcaciaTrapdoorBlock().getId();
}
