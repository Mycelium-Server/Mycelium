
#include "rabbit_item.h"

RabbitItem::RabbitItem() = default;
RabbitItem::~RabbitItem() = default;

int RabbitItem::getID() const {
  return 1010;
}

std::shared_ptr<Item> RabbitItem::clone() const {
  return std::make_shared<RabbitItem>();
}
