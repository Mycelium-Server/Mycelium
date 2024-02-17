
#include "suspicious_stew_item.h"

SuspiciousStewItem::SuspiciousStewItem() = default;
SuspiciousStewItem::~SuspiciousStewItem() = default;

int SuspiciousStewItem::getID() const {
  return 1079;
}

std::shared_ptr<Item> SuspiciousStewItem::clone() const {
  return std::make_shared<SuspiciousStewItem>();
}
