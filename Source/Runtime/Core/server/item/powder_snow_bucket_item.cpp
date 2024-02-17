
#include "powder_snow_bucket_item.h"

PowderSnowBucketItem::PowderSnowBucketItem() = default;
PowderSnowBucketItem::~PowderSnowBucketItem() = default;

int PowderSnowBucketItem::getID() const {
  return 816;
}

std::shared_ptr<Item> PowderSnowBucketItem::clone() const {
  return std::make_shared<PowderSnowBucketItem>();
}
