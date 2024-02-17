
#include "cyan_carpet_item.h"

#include "../../block/builtin/cyan_carpet_block.h"

CyanCarpetItem::CyanCarpetItem() = default;
CyanCarpetItem::~CyanCarpetItem() = default;

int CyanCarpetItem::getID() const {
  return 407;
}

std::shared_ptr<Item> CyanCarpetItem::clone() const {
  return std::make_shared<CyanCarpetItem>();
}

int CyanCarpetItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CyanCarpetBlock().getId();
}