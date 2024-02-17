
#include "oak_trapdoor_item.h"

#include "../../block/builtin/oak_trapdoor_block.h"

OakTrapdoorItem::OakTrapdoorItem() = default;
OakTrapdoorItem::~OakTrapdoorItem() = default;

int OakTrapdoorItem::getID() const {
  return 667;
}

std::shared_ptr<Item> OakTrapdoorItem::clone() const {
  return std::make_shared<OakTrapdoorItem>();
}

int OakTrapdoorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OakTrapdoorBlock().getId();
}