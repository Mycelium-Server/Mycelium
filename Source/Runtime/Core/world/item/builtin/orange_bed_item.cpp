
#include "orange_bed_item.h"

#include "../../block/builtin/orange_bed_block.h"

OrangeBedItem::OrangeBedItem() = default;
OrangeBedItem::~OrangeBedItem() = default;

int OrangeBedItem::getID() const {
  return 870;
}

std::shared_ptr<Item> OrangeBedItem::clone() const {
  return std::make_shared<OrangeBedItem>();
}

int OrangeBedItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OrangeBedBlock().getId();
}
