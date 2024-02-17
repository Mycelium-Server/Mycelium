
#include "magenta_bed_item.h"

#include "../block/magenta_bed_block.h"

MagentaBedItem::MagentaBedItem() = default;
MagentaBedItem::~MagentaBedItem() = default;

int MagentaBedItem::getID() const {
  return 871;
}

std::shared_ptr<Item> MagentaBedItem::clone() const {
  return std::make_shared<MagentaBedItem>();
}

int MagentaBedItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MagentaBedBlock().getId();
}