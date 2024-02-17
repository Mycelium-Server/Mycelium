
#include "cornflower_item.h"

#include "../../block/builtin/cornflower_block.h"

CornflowerItem::CornflowerItem() = default;
CornflowerItem::~CornflowerItem() = default;

int CornflowerItem::getID() const {
  return 193;
}

std::shared_ptr<Item> CornflowerItem::clone() const {
  return std::make_shared<CornflowerItem>();
}

int CornflowerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CornflowerBlock().getId();
}
