
#include "slime_ball_item.h"

SlimeBallItem::SlimeBallItem() = default;
SlimeBallItem::~SlimeBallItem() = default;

int SlimeBallItem::getID() const {
  return 831;
}

std::shared_ptr<Item> SlimeBallItem::clone() const {
  return std::make_shared<SlimeBallItem>();
}
