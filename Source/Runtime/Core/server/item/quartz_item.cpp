
#include "quartz_item.h"

QuartzItem::QuartzItem() = default;
QuartzItem::~QuartzItem() = default;

int QuartzItem::getID() const {
  return 725;
}

std::shared_ptr<Item> QuartzItem::clone() const {
  return std::make_shared<QuartzItem>();
}
