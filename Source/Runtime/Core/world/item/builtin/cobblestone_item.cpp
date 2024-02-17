
#include "cobblestone_item.h"

#include "../../block/builtin/cobblestone_block.h"

CobblestoneItem::CobblestoneItem() = default;
CobblestoneItem::~CobblestoneItem() = default;

int CobblestoneItem::getID() const {
  return 22;
}

std::shared_ptr<Item> CobblestoneItem::clone() const {
  return std::make_shared<CobblestoneItem>();
}

int CobblestoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CobblestoneBlock().getId();
}