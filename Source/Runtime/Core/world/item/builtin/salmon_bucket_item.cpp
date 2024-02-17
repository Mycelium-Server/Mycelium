
#include "salmon_bucket_item.h"

SalmonBucketItem::SalmonBucketItem() = default;
SalmonBucketItem::~SalmonBucketItem() = default;

int SalmonBucketItem::getID() const {
  return 821;
}

std::shared_ptr<Item> SalmonBucketItem::clone() const {
  return std::make_shared<SalmonBucketItem>();
}
