
#include "milk_bucket_item.h"

MilkBucketItem::MilkBucketItem() = default;
MilkBucketItem::~MilkBucketItem() = default;

int MilkBucketItem::getID() const {
  return 819;
}

std::shared_ptr<Item> MilkBucketItem::clone() const {
  return std::make_shared<MilkBucketItem>();
}
