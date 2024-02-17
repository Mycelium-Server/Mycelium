
#include "blue_bed_item.h"

#include "../../block/builtin/blue_bed_block.h"

BlueBedItem::BlueBedItem() = default;
BlueBedItem::~BlueBedItem() = default;

int BlueBedItem::getID() const {
  return 880;
}

std::shared_ptr<Item> BlueBedItem::clone() const {
  return std::make_shared<BlueBedItem>();
}

int BlueBedItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlueBedBlock().getId();
}