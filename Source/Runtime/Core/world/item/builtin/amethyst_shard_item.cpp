
#include "amethyst_shard_item.h"

AmethystShardItem::AmethystShardItem() = default;
AmethystShardItem::~AmethystShardItem() = default;

int AmethystShardItem::getID() const {
  return 726;
}

std::shared_ptr<Item> AmethystShardItem::clone() const {
  return std::make_shared<AmethystShardItem>();
}
