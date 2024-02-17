
#include "player_head_item.h"

#include "../../block/builtin/player_head_block.h"

PlayerHeadItem::PlayerHeadItem() = default;
PlayerHeadItem::~PlayerHeadItem() = default;

int PlayerHeadItem::getID() const {
  return 998;
}

std::shared_ptr<Item> PlayerHeadItem::clone() const {
  return std::make_shared<PlayerHeadItem>();
}

int PlayerHeadItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PlayerHeadBlock().getId();
}
