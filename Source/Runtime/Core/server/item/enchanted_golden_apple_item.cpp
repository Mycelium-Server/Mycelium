
#include "enchanted_golden_apple_item.h"

EnchantedGoldenAppleItem::EnchantedGoldenAppleItem() = default;
EnchantedGoldenAppleItem::~EnchantedGoldenAppleItem() = default;

int EnchantedGoldenAppleItem::getID() const {
  return 803;
}

std::shared_ptr<Item> EnchantedGoldenAppleItem::clone() const {
  return std::make_shared<EnchantedGoldenAppleItem>();
}
