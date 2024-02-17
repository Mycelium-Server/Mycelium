
#include "command_block_minecart_item.h"

CommandBlockMinecartItem::CommandBlockMinecartItem() = default;
CommandBlockMinecartItem::~CommandBlockMinecartItem() = default;

int CommandBlockMinecartItem::getID() const {
  return 1022;
}

std::shared_ptr<Item> CommandBlockMinecartItem::clone() const {
  return std::make_shared<CommandBlockMinecartItem>();
}
