
#include "ancient_debris_item.h"

#include "../../block/builtin/ancient_debris_block.h"

AncientDebrisItem::AncientDebrisItem() = default;
AncientDebrisItem::~AncientDebrisItem() = default;

int AncientDebrisItem::getID() const {
  return 61;
}

std::shared_ptr<Item> AncientDebrisItem::clone() const {
  return std::make_shared<AncientDebrisItem>();
}

int AncientDebrisItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return AncientDebrisBlock().getId();
}
