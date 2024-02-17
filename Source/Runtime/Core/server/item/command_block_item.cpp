
#include "command_block_item.h"

#include "../block/command_block_block.h"

CommandBlockItem::CommandBlockItem() = default;
CommandBlockItem::~CommandBlockItem() = default;

int CommandBlockItem::getID() const {
  return 347;
}

std::shared_ptr<Item> CommandBlockItem::clone() const {
  return std::make_shared<CommandBlockItem>();
}

int CommandBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CommandBlockBlock().getId();
}
