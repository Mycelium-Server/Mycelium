
#include "magenta_concrete_item.h"

#include "../block/magenta_concrete_block.h"

MagentaConcreteItem::MagentaConcreteItem() = default;
MagentaConcreteItem::~MagentaConcreteItem() = default;

int MagentaConcreteItem::getID() const {
  return 509;
}

std::shared_ptr<Item> MagentaConcreteItem::clone() const {
  return std::make_shared<MagentaConcreteItem>();
}

int MagentaConcreteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MagentaConcreteBlock().getId();
}