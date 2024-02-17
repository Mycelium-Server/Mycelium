
#include "nautilus_shell_item.h"

NautilusShellItem::NautilusShellItem() = default;
NautilusShellItem::~NautilusShellItem() = default;

int NautilusShellItem::getID() const {
  return 1076;
}

std::shared_ptr<Item> NautilusShellItem::clone() const {
  return std::make_shared<NautilusShellItem>();
}
