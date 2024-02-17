
#include "acacia_planks_item.h"

#include "../../block/builtin/acacia_planks_block.h"

AcaciaPlanksItem::AcaciaPlanksItem() = default;
AcaciaPlanksItem::~AcaciaPlanksItem() = default;

int AcaciaPlanksItem::getID() const {
  return 27;
}

std::shared_ptr<Item> AcaciaPlanksItem::clone() const {
  return std::make_shared<AcaciaPlanksItem>();
}

int AcaciaPlanksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return AcaciaPlanksBlock().getId();
}
