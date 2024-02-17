
#include "bucket_item.h"

BucketItem::BucketItem() = default;
BucketItem::~BucketItem() = default;

int BucketItem::getID() const {
  return 813;
}

std::shared_ptr<Item> BucketItem::clone() const {
  return std::make_shared<BucketItem>();
}
