
#include "azalea_item.h"

#include "../../block/builtin/azalea_block.h"

AzaleaItem::AzaleaItem() = default;
AzaleaItem::~AzaleaItem() = default;

int AzaleaItem::getID() const {
  return 162;
}

std::shared_ptr<Item> AzaleaItem::clone() const {
  return std::make_shared<AzaleaItem>();
}

int AzaleaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return AzaleaBlock().getId();
}
