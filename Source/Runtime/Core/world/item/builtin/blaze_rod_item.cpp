
#include "blaze_rod_item.h"

BlazeRodItem::BlazeRodItem() = default;
BlazeRodItem::~BlazeRodItem() = default;

int BlazeRodItem::getID() const {
  return 898;
}

std::shared_ptr<Item> BlazeRodItem::clone() const {
  return std::make_shared<BlazeRodItem>();
}
