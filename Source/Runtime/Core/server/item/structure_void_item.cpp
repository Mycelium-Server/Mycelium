
#include "structure_void_item.h"

#include "../block/structure_void_block.h"

StructureVoidItem::StructureVoidItem() = default;
StructureVoidItem::~StructureVoidItem() = default;

int StructureVoidItem::getID() const {
  return 473;
}

std::shared_ptr<Item> StructureVoidItem::clone() const {
  return std::make_shared<StructureVoidItem>();
}

int StructureVoidItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StructureVoidBlock().getId();
}