
#include "amethyst_cluster_item.h"

#include "../block/amethyst_cluster_block.h"

AmethystClusterItem::AmethystClusterItem() = default;
AmethystClusterItem::~AmethystClusterItem() = default;

int AmethystClusterItem::getID() const {
  return 1145;
}

std::shared_ptr<Item> AmethystClusterItem::clone() const {
  return std::make_shared<AmethystClusterItem>();
}

int AmethystClusterItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return AmethystClusterBlock().getId();
}