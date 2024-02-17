
#include "spruce_sign_item.h"

#include "../../block/builtin/spruce_sign_block.h"

SpruceSignItem::SpruceSignItem() = default;
SpruceSignItem::~SpruceSignItem() = default;

int SpruceSignItem::getID() const {
  return 805;
}

std::shared_ptr<Item> SpruceSignItem::clone() const {
  return std::make_shared<SpruceSignItem>();
}

int SpruceSignItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SpruceSignBlock().getId();
}
