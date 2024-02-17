
#include "tropical_fish_bucket_item.h"

TropicalFishBucketItem::TropicalFishBucketItem() = default;
TropicalFishBucketItem::~TropicalFishBucketItem() = default;

int TropicalFishBucketItem::getID() const {
  return 823;
}

std::shared_ptr<Item> TropicalFishBucketItem::clone() const {
  return std::make_shared<TropicalFishBucketItem>();
}
