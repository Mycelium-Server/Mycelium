
#include "shulker_shell_item.h"

ShulkerShellItem::ShulkerShellItem() = default;
ShulkerShellItem::~ShulkerShellItem() = default;

int ShulkerShellItem::getID() const {
  return 1054;
}

std::shared_ptr<Item> ShulkerShellItem::clone() const {
  return std::make_shared<ShulkerShellItem>();
}
