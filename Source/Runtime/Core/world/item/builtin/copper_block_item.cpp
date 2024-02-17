
#include "copper_block_item.h"

#include "../../block/builtin/copper_block_block.h"

CopperBlockItem::CopperBlockItem() = default;
CopperBlockItem::~CopperBlockItem() = default;

int CopperBlockItem::getID() const {
  return 69;
}

std::shared_ptr<Item> CopperBlockItem::clone() const {
  return std::make_shared<CopperBlockItem>();
}

int CopperBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CopperBlockBlock().getId();
}
