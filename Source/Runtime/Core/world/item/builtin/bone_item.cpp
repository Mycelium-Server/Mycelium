
#include "bone_item.h"

BoneItem::BoneItem() = default;
BoneItem::~BoneItem() = default;

int BoneItem::getID() const {
  return 866;
}

std::shared_ptr<Item> BoneItem::clone() const {
  return std::make_shared<BoneItem>();
}
