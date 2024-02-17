
#include "dirt_path_item.h"

#include "../../block/builtin/dirt_path_block.h"

DirtPathItem::DirtPathItem() = default;
DirtPathItem::~DirtPathItem() = default;

int DirtPathItem::getID() const {
  return 416;
}

std::shared_ptr<Item> DirtPathItem::clone() const {
  return std::make_shared<DirtPathItem>();
}

int DirtPathItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DirtPathBlock().getId();
}