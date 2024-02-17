
#include "budding_amethyst_item.h"

#include "../../block/builtin/budding_amethyst_block.h"

BuddingAmethystItem::BuddingAmethystItem() = default;
BuddingAmethystItem::~BuddingAmethystItem() = default;

int BuddingAmethystItem::getID() const {
  return 67;
}

std::shared_ptr<Item> BuddingAmethystItem::clone() const {
  return std::make_shared<BuddingAmethystItem>();
}

int BuddingAmethystItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BuddingAmethystBlock().getId();
}
