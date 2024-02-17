
#include "dandelion_item.h"

#include "../block/dandelion_block.h"

DandelionItem::DandelionItem() = default;
DandelionItem::~DandelionItem() = default;

int DandelionItem::getID() const {
  return 183;
}

std::shared_ptr<Item> DandelionItem::clone() const {
  return std::make_shared<DandelionItem>();
}

int DandelionItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DandelionBlock().getId();
}