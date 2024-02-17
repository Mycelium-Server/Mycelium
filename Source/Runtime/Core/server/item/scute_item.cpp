
#include "scute_item.h"

ScuteItem::ScuteItem() = default;
ScuteItem::~ScuteItem() = default;

int ScuteItem::getID() const {
  return 715;
}

std::shared_ptr<Item> ScuteItem::clone() const {
  return std::make_shared<ScuteItem>();
}
