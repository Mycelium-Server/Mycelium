
#include "jungle_wood_item.h"

#include "../../block/builtin/jungle_wood_block.h"

JungleWoodItem::JungleWoodItem() = default;
JungleWoodItem::~JungleWoodItem() = default;

int JungleWoodItem::getID() const {
  return 136;
}

std::shared_ptr<Item> JungleWoodItem::clone() const {
  return std::make_shared<JungleWoodItem>();
}

int JungleWoodItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return JungleWoodBlock().getId();
}