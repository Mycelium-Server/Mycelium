
#include "chiseled_sandstone_item.h"

#include "../../block/builtin/chiseled_sandstone_block.h"

ChiseledSandstoneItem::ChiseledSandstoneItem() = default;
ChiseledSandstoneItem::~ChiseledSandstoneItem() = default;

int ChiseledSandstoneItem::getID() const {
  return 157;
}

std::shared_ptr<Item> ChiseledSandstoneItem::clone() const {
  return std::make_shared<ChiseledSandstoneItem>();
}

int ChiseledSandstoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ChiseledSandstoneBlock().getId();
}