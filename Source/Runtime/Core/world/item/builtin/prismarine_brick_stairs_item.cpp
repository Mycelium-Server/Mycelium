
#include "prismarine_brick_stairs_item.h"

#include "../../block/builtin/prismarine_brick_stairs_block.h"

PrismarineBrickStairsItem::PrismarineBrickStairsItem() = default;
PrismarineBrickStairsItem::~PrismarineBrickStairsItem() = default;

int PrismarineBrickStairsItem::getID() const {
  return 459;
}

std::shared_ptr<Item> PrismarineBrickStairsItem::clone() const {
  return std::make_shared<PrismarineBrickStairsItem>();
}

int PrismarineBrickStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PrismarineBrickStairsBlock().getId();
}