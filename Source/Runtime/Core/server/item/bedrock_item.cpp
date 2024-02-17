
#include "bedrock_item.h"

#include "../block/bedrock_block.h"

BedrockItem::BedrockItem() = default;
BedrockItem::~BedrockItem() = default;

int BedrockItem::getID() const {
  return 39;
}

std::shared_ptr<Item> BedrockItem::clone() const {
  return std::make_shared<BedrockItem>();
}

int BedrockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BedrockBlock().getId();
}