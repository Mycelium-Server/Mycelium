
#include "grass_block_item.h"

#include "../../block/builtin/grass_block_block.h"

GrassBlockItem::GrassBlockItem() = default;
GrassBlockItem::~GrassBlockItem() = default;

int GrassBlockItem::getID() const {
  return 14;
}

std::shared_ptr<Item> GrassBlockItem::clone() const {
  return std::make_shared<GrassBlockItem>();
}

int GrassBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GrassBlockBlock().getId();
}