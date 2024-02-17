
#include "mangrove_propagule_item.h"

#include "../block/mangrove_propagule_block.h"

MangrovePropaguleItem::MangrovePropaguleItem() = default;
MangrovePropaguleItem::~MangrovePropaguleItem() = default;

int MangrovePropaguleItem::getID() const {
  return 38;
}

std::shared_ptr<Item> MangrovePropaguleItem::clone() const {
  return std::make_shared<MangrovePropaguleItem>();
}

int MangrovePropaguleItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MangrovePropaguleBlock().getId();
}