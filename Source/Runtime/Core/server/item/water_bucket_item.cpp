
#include "water_bucket_item.h"

WaterBucketItem::WaterBucketItem() = default;
WaterBucketItem::~WaterBucketItem() = default;

int WaterBucketItem::getID() const {
  return 814;
}

std::shared_ptr<Item> WaterBucketItem::clone() const {
  return std::make_shared<WaterBucketItem>();
}
