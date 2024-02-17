
#include "echo_shard_item.h"

EchoShardItem::EchoShardItem() = default;
EchoShardItem::~EchoShardItem() = default;

int EchoShardItem::getID() const {
  return 1151;
}

std::shared_ptr<Item> EchoShardItem::clone() const {
  return std::make_shared<EchoShardItem>();
}
