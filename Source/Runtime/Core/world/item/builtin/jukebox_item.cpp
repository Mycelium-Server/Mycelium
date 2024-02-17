
#include "jukebox_item.h"

#include "../../block/builtin/jukebox_block.h"

JukeboxItem::JukeboxItem() = default;
JukeboxItem::~JukeboxItem() = default;

int JukeboxItem::getID() const {
  return 267;
}

std::shared_ptr<Item> JukeboxItem::clone() const {
  return std::make_shared<JukeboxItem>();
}

int JukeboxItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return JukeboxBlock().getId();
}