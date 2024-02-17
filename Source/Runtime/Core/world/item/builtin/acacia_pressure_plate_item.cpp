
#include "acacia_pressure_plate_item.h"

#include "../../block/builtin/acacia_pressure_plate_block.h"

AcaciaPressurePlateItem::AcaciaPressurePlateItem() = default;
AcaciaPressurePlateItem::~AcaciaPressurePlateItem() = default;

int AcaciaPressurePlateItem::getID() const {
  return 651;
}

std::shared_ptr<Item> AcaciaPressurePlateItem::clone() const {
  return std::make_shared<AcaciaPressurePlateItem>();
}

int AcaciaPressurePlateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return AcaciaPressurePlateBlock().getId();
}
