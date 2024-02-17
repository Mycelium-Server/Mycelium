
#include "cooked_rabbit_item.h"

CookedRabbitItem::CookedRabbitItem() = default;
CookedRabbitItem::~CookedRabbitItem() = default;

int CookedRabbitItem::getID() const {
  return 1011;
}

std::shared_ptr<Item> CookedRabbitItem::clone() const {
  return std::make_shared<CookedRabbitItem>();
}
