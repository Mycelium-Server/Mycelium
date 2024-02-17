
#include "rabbit_foot_item.h"

RabbitFootItem::RabbitFootItem() = default;
RabbitFootItem::~RabbitFootItem() = default;

int RabbitFootItem::getID() const {
  return 1013;
}

std::shared_ptr<Item> RabbitFootItem::clone() const {
  return std::make_shared<RabbitFootItem>();
}
