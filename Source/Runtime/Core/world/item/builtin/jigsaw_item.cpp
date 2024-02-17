
#include "jigsaw_item.h"

#include "../../block/builtin/jigsaw_block.h"

JigsawItem::JigsawItem() = default;
JigsawItem::~JigsawItem() = default;

int JigsawItem::getID() const {
  return 713;
}

std::shared_ptr<Item> JigsawItem::clone() const {
  return std::make_shared<JigsawItem>();
}

int JigsawItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return JigsawBlock().getId();
}