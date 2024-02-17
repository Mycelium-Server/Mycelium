
#include "mud_bricks_item.h"

#include "../../block/builtin/mud_bricks_block.h"

MudBricksItem::MudBricksItem() = default;
MudBricksItem::~MudBricksItem() = default;

int MudBricksItem::getID() const {
  return 300;
}

std::shared_ptr<Item> MudBricksItem::clone() const {
  return std::make_shared<MudBricksItem>();
}

int MudBricksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MudBricksBlock().getId();
}