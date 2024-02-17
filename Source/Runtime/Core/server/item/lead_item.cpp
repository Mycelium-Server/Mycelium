
#include "lead_item.h"

LeadItem::LeadItem() = default;
LeadItem::~LeadItem() = default;

int LeadItem::getID() const {
  return 1020;
}

std::shared_ptr<Item> LeadItem::clone() const {
  return std::make_shared<LeadItem>();
}
