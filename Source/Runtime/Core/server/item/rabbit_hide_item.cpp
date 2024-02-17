
#include "rabbit_hide_item.h"

RabbitHideItem::RabbitHideItem() = default;
RabbitHideItem::~RabbitHideItem() = default;

int RabbitHideItem::getID() const {
  return 1014;
}

std::shared_ptr<Item> RabbitHideItem::clone() const {
  return std::make_shared<RabbitHideItem>();
}
