
#include "farmland_item.h"

#include "../../block/builtin/farmland_block.h"

FarmlandItem::FarmlandItem() = default;
FarmlandItem::~FarmlandItem() = default;

int FarmlandItem::getID() const {
  return 258;
}

std::shared_ptr<Item> FarmlandItem::clone() const {
  return std::make_shared<FarmlandItem>();
}

int FarmlandItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return FarmlandBlock().getId();
}
