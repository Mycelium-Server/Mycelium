
#include "magenta_dye_item.h"

MagentaDyeItem::MagentaDyeItem() = default;
MagentaDyeItem::~MagentaDyeItem() = default;

int MagentaDyeItem::getID() const {
  return 851;
}

std::shared_ptr<Item> MagentaDyeItem::clone() const {
  return std::make_shared<MagentaDyeItem>();
}
