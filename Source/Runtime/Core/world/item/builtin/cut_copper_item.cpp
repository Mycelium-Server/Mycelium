
#include "cut_copper_item.h"

#include "../../block/builtin/cut_copper_block.h"

CutCopperItem::CutCopperItem() = default;
CutCopperItem::~CutCopperItem() = default;

int CutCopperItem::getID() const {
  return 76;
}

std::shared_ptr<Item> CutCopperItem::clone() const {
  return std::make_shared<CutCopperItem>();
}

int CutCopperItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CutCopperBlock().getId();
}
