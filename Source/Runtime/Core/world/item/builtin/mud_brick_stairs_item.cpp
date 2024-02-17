
#include "mud_brick_stairs_item.h"

#include "../../block/builtin/mud_brick_stairs_block.h"

MudBrickStairsItem::MudBrickStairsItem() = default;
MudBrickStairsItem::~MudBrickStairsItem() = default;

int MudBrickStairsItem::getID() const {
  return 318;
}

std::shared_ptr<Item> MudBrickStairsItem::clone() const {
  return std::make_shared<MudBrickStairsItem>();
}

int MudBrickStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MudBrickStairsBlock().getId();
}