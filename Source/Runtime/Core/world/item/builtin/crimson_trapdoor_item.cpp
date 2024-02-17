
#include "crimson_trapdoor_item.h"

#include "../../block/builtin/crimson_trapdoor_block.h"

CrimsonTrapdoorItem::CrimsonTrapdoorItem() = default;
CrimsonTrapdoorItem::~CrimsonTrapdoorItem() = default;

int CrimsonTrapdoorItem::getID() const {
  return 674;
}

std::shared_ptr<Item> CrimsonTrapdoorItem::clone() const {
  return std::make_shared<CrimsonTrapdoorItem>();
}

int CrimsonTrapdoorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CrimsonTrapdoorBlock().getId();
}