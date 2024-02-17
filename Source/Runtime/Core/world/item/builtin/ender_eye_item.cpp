
#include "ender_eye_item.h"

EnderEyeItem::EnderEyeItem() = default;
EnderEyeItem::~EnderEyeItem() = default;

int EnderEyeItem::getID() const {
  return 910;
}

std::shared_ptr<Item> EnderEyeItem::clone() const {
  return std::make_shared<EnderEyeItem>();
}
