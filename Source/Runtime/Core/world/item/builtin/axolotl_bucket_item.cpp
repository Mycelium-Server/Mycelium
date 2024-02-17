
#include "axolotl_bucket_item.h"

AxolotlBucketItem::AxolotlBucketItem() = default;
AxolotlBucketItem::~AxolotlBucketItem() = default;

int AxolotlBucketItem::getID() const {
  return 824;
}

std::shared_ptr<Item> AxolotlBucketItem::clone() const {
  return std::make_shared<AxolotlBucketItem>();
}
