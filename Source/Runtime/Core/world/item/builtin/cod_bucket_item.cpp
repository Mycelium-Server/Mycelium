
#include "cod_bucket_item.h"

CodBucketItem::CodBucketItem() = default;
CodBucketItem::~CodBucketItem() = default;

int CodBucketItem::getID() const {
  return 822;
}

std::shared_ptr<Item> CodBucketItem::clone() const {
  return std::make_shared<CodBucketItem>();
}
