
#include "magenta_wool_item.h"

#include "../block/magenta_wool_block.h"

MagentaWoolItem::MagentaWoolItem() = default;
MagentaWoolItem::~MagentaWoolItem() = default;

int MagentaWoolItem::getID() const {
  return 169;
}

std::shared_ptr<Item> MagentaWoolItem::clone() const {
  return std::make_shared<MagentaWoolItem>();
}

int MagentaWoolItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MagentaWoolBlock().getId();
}