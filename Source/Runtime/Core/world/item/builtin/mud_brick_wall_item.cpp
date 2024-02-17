
#include "mud_brick_wall_item.h"

#include "../../block/builtin/mud_brick_wall_block.h"

MudBrickWallItem::MudBrickWallItem() = default;
MudBrickWallItem::~MudBrickWallItem() = default;

int MudBrickWallItem::getID() const {
  return 357;
}

std::shared_ptr<Item> MudBrickWallItem::clone() const {
  return std::make_shared<MudBrickWallItem>();
}

int MudBrickWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MudBrickWallBlock().getId();
}