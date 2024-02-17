
#include "moss_carpet_item.h"

#include "../block/moss_carpet_block.h"

MossCarpetItem::MossCarpetItem() = default;
MossCarpetItem::~MossCarpetItem() = default;

int MossCarpetItem::getID() const {
  return 208;
}

std::shared_ptr<Item> MossCarpetItem::clone() const {
  return std::make_shared<MossCarpetItem>();
}

int MossCarpetItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MossCarpetBlock().getId();
}
