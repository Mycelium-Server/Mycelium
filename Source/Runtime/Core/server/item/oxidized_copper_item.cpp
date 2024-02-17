
#include "oxidized_copper_item.h"

#include "../block/oxidized_copper_block.h"

OxidizedCopperItem::OxidizedCopperItem() = default;
OxidizedCopperItem::~OxidizedCopperItem() = default;

int OxidizedCopperItem::getID() const {
  return 75;
}

std::shared_ptr<Item> OxidizedCopperItem::clone() const {
  return std::make_shared<OxidizedCopperItem>();
}

int OxidizedCopperItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OxidizedCopperBlock().getId();
}