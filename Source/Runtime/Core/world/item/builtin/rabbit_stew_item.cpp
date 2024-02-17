
#include "rabbit_stew_item.h"

RabbitStewItem::RabbitStewItem() = default;
RabbitStewItem::~RabbitStewItem() = default;

int RabbitStewItem::getID() const {
  return 1012;
}

std::shared_ptr<Item> RabbitStewItem::clone() const {
  return std::make_shared<RabbitStewItem>();
}
