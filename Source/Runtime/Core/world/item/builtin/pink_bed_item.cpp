
#include "pink_bed_item.h"

#include "../../block/builtin/pink_bed_block.h"

PinkBedItem::PinkBedItem() = default;
PinkBedItem::~PinkBedItem() = default;

int PinkBedItem::getID() const {
  return 875;
}

std::shared_ptr<Item> PinkBedItem::clone() const {
  return std::make_shared<PinkBedItem>();
}

int PinkBedItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PinkBedBlock().getId();
}