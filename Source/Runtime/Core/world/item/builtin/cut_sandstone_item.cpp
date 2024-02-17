
#include "cut_sandstone_item.h"

#include "../../block/builtin/cut_sandstone_block.h"

CutSandstoneItem::CutSandstoneItem() = default;
CutSandstoneItem::~CutSandstoneItem() = default;

int CutSandstoneItem::getID() const {
  return 158;
}

std::shared_ptr<Item> CutSandstoneItem::clone() const {
  return std::make_shared<CutSandstoneItem>();
}

int CutSandstoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CutSandstoneBlock().getId();
}
