
#include "prismarine_shard_item.h"

PrismarineShardItem::PrismarineShardItem() = default;
PrismarineShardItem::~PrismarineShardItem() = default;

int PrismarineShardItem::getID() const {
  return 1008;
}

std::shared_ptr<Item> PrismarineShardItem::clone() const {
  return std::make_shared<PrismarineShardItem>();
}
