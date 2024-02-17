
#include "dark_oak_trapdoor_item.h"

#include "../../block/builtin/dark_oak_trapdoor_block.h"

DarkOakTrapdoorItem::DarkOakTrapdoorItem() = default;
DarkOakTrapdoorItem::~DarkOakTrapdoorItem() = default;

int DarkOakTrapdoorItem::getID() const {
  return 672;
}

std::shared_ptr<Item> DarkOakTrapdoorItem::clone() const {
  return std::make_shared<DarkOakTrapdoorItem>();
}

int DarkOakTrapdoorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DarkOakTrapdoorBlock().getId();
}