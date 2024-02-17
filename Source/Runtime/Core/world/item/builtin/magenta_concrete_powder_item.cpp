
#include "magenta_concrete_powder_item.h"

#include "../../block/builtin/magenta_concrete_powder_block.h"

MagentaConcretePowderItem::MagentaConcretePowderItem() = default;
MagentaConcretePowderItem::~MagentaConcretePowderItem() = default;

int MagentaConcretePowderItem::getID() const {
  return 525;
}

std::shared_ptr<Item> MagentaConcretePowderItem::clone() const {
  return std::make_shared<MagentaConcretePowderItem>();
}

int MagentaConcretePowderItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MagentaConcretePowderBlock().getId();
}