
#include "jungle_trapdoor_item.h"

#include "../block/jungle_trapdoor_block.h"

JungleTrapdoorItem::JungleTrapdoorItem() = default;
JungleTrapdoorItem::~JungleTrapdoorItem() = default;

int JungleTrapdoorItem::getID() const {
  return 670;
}

std::shared_ptr<Item> JungleTrapdoorItem::clone() const {
  return std::make_shared<JungleTrapdoorItem>();
}

int JungleTrapdoorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return JungleTrapdoorBlock().getId();
}