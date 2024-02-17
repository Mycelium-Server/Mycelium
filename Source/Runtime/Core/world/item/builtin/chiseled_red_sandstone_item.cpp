
#include "chiseled_red_sandstone_item.h"

#include "../../block/builtin/chiseled_red_sandstone_block.h"

ChiseledRedSandstoneItem::ChiseledRedSandstoneItem() = default;
ChiseledRedSandstoneItem::~ChiseledRedSandstoneItem() = default;

int ChiseledRedSandstoneItem::getID() const {
  return 463;
}

std::shared_ptr<Item> ChiseledRedSandstoneItem::clone() const {
  return std::make_shared<ChiseledRedSandstoneItem>();
}

int ChiseledRedSandstoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ChiseledRedSandstoneBlock().getId();
}
