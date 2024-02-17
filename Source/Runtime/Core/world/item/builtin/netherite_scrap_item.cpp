
#include "netherite_scrap_item.h"

NetheriteScrapItem::NetheriteScrapItem() = default;
NetheriteScrapItem::~NetheriteScrapItem() = default;

int NetheriteScrapItem::getID() const {
  return 734;
}

std::shared_ptr<Item> NetheriteScrapItem::clone() const {
  return std::make_shared<NetheriteScrapItem>();
}
