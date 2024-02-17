
#include "chiseled_deepslate_item.h"

#include "../../block/builtin/chiseled_deepslate_block.h"

ChiseledDeepslateItem::ChiseledDeepslateItem() = default;
ChiseledDeepslateItem::~ChiseledDeepslateItem() = default;

int ChiseledDeepslateItem::getID() const {
  return 305;
}

std::shared_ptr<Item> ChiseledDeepslateItem::clone() const {
  return std::make_shared<ChiseledDeepslateItem>();
}

int ChiseledDeepslateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ChiseledDeepslateBlock().getId();
}