
#include "cocoa_beans_item.h"

CocoaBeansItem::CocoaBeansItem() = default;
CocoaBeansItem::~CocoaBeansItem() = default;

int CocoaBeansItem::getID() const {
  return 848;
}

std::shared_ptr<Item> CocoaBeansItem::clone() const {
  return std::make_shared<CocoaBeansItem>();
}
