
#include "cut_red_sandstone_item.h"

#include "../../block/builtin/cut_red_sandstone_block.h"

CutRedSandstoneItem::CutRedSandstoneItem() = default;
CutRedSandstoneItem::~CutRedSandstoneItem() = default;

int CutRedSandstoneItem::getID() const {
  return 464;
}

std::shared_ptr<Item> CutRedSandstoneItem::clone() const {
  return std::make_shared<CutRedSandstoneItem>();
}

int CutRedSandstoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CutRedSandstoneBlock().getId();
}