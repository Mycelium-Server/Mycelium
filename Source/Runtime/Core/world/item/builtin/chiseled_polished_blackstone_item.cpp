
#include "chiseled_polished_blackstone_item.h"

#include "../../block/builtin/chiseled_polished_blackstone_block.h"

ChiseledPolishedBlackstoneItem::ChiseledPolishedBlackstoneItem() = default;
ChiseledPolishedBlackstoneItem::~ChiseledPolishedBlackstoneItem() = default;

int ChiseledPolishedBlackstoneItem::getID() const {
  return 1119;
}

std::shared_ptr<Item> ChiseledPolishedBlackstoneItem::clone() const {
  return std::make_shared<ChiseledPolishedBlackstoneItem>();
}

int ChiseledPolishedBlackstoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ChiseledPolishedBlackstoneBlock().getId();
}
