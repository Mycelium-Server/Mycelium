
#include "spruce_button_item.h"

#include "../block/spruce_button_block.h"

SpruceButtonItem::SpruceButtonItem() = default;
SpruceButtonItem::~SpruceButtonItem() = default;

int SpruceButtonItem::getID() const {
  return 635;
}

std::shared_ptr<Item> SpruceButtonItem::clone() const {
  return std::make_shared<SpruceButtonItem>();
}

int SpruceButtonItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SpruceButtonBlock().getId();
}