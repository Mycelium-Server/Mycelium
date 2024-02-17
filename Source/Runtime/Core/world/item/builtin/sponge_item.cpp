
#include "sponge_item.h"

#include "../../block/builtin/sponge_block.h"

SpongeItem::SpongeItem() = default;
SpongeItem::~SpongeItem() = default;

int SpongeItem::getID() const {
  return 151;
}

std::shared_ptr<Item> SpongeItem::clone() const {
  return std::make_shared<SpongeItem>();
}

int SpongeItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SpongeBlock().getId();
}