
#include "purple_bed_item.h"

#include "../../block/builtin/purple_bed_block.h"

PurpleBedItem::PurpleBedItem() = default;
PurpleBedItem::~PurpleBedItem() = default;

int PurpleBedItem::getID() const {
  return 879;
}

std::shared_ptr<Item> PurpleBedItem::clone() const {
  return std::make_shared<PurpleBedItem>();
}

int PurpleBedItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PurpleBedBlock().getId();
}