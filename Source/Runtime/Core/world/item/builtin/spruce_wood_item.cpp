
#include "spruce_wood_item.h"

#include "../../block/builtin/spruce_wood_block.h"

SpruceWoodItem::SpruceWoodItem() = default;
SpruceWoodItem::~SpruceWoodItem() = default;

int SpruceWoodItem::getID() const {
  return 134;
}

std::shared_ptr<Item> SpruceWoodItem::clone() const {
  return std::make_shared<SpruceWoodItem>();
}

int SpruceWoodItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SpruceWoodBlock().getId();
}