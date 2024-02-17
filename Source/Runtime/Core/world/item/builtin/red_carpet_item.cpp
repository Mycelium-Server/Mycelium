
#include "red_carpet_item.h"

#include "../../block/builtin/red_carpet_block.h"

RedCarpetItem::RedCarpetItem() = default;
RedCarpetItem::~RedCarpetItem() = default;

int RedCarpetItem::getID() const {
  return 412;
}

std::shared_ptr<Item> RedCarpetItem::clone() const {
  return std::make_shared<RedCarpetItem>();
}

int RedCarpetItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedCarpetBlock().getId();
}