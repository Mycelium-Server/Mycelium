
#include "oxidized_cut_copper_item.h"

#include "../../block/builtin/oxidized_cut_copper_block.h"

OxidizedCutCopperItem::OxidizedCutCopperItem() = default;
OxidizedCutCopperItem::~OxidizedCutCopperItem() = default;

int OxidizedCutCopperItem::getID() const {
  return 79;
}

std::shared_ptr<Item> OxidizedCutCopperItem::clone() const {
  return std::make_shared<OxidizedCutCopperItem>();
}

int OxidizedCutCopperItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OxidizedCutCopperBlock().getId();
}