
#include "structure_block_item.h"

#include "../../block/builtin/structure_block_block.h"

StructureBlockItem::StructureBlockItem() = default;
StructureBlockItem::~StructureBlockItem() = default;

int StructureBlockItem::getID() const {
  return 712;
}

std::shared_ptr<Item> StructureBlockItem::clone() const {
  return std::make_shared<StructureBlockItem>();
}

int StructureBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StructureBlockBlock().getId();
}