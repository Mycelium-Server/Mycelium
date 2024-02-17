
#include "wet_sponge_item.h"

#include "../../block/builtin/wet_sponge_block.h"

WetSpongeItem::WetSpongeItem() = default;
WetSpongeItem::~WetSpongeItem() = default;

int WetSpongeItem::getID() const {
  return 152;
}

std::shared_ptr<Item> WetSpongeItem::clone() const {
  return std::make_shared<WetSpongeItem>();
}

int WetSpongeItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WetSpongeBlock().getId();
}