
#include "stripped_crimson_hyphae_item.h"

#include "../../block/builtin/stripped_crimson_hyphae_block.h"

StrippedCrimsonHyphaeItem::StrippedCrimsonHyphaeItem() = default;
StrippedCrimsonHyphaeItem::~StrippedCrimsonHyphaeItem() = default;

int StrippedCrimsonHyphaeItem::getID() const {
  return 131;
}

std::shared_ptr<Item> StrippedCrimsonHyphaeItem::clone() const {
  return std::make_shared<StrippedCrimsonHyphaeItem>();
}

int StrippedCrimsonHyphaeItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StrippedCrimsonHyphaeBlock().getId();
}