
#include "phantom_membrane_item.h"

PhantomMembraneItem::PhantomMembraneItem() = default;
PhantomMembraneItem::~PhantomMembraneItem() = default;

int PhantomMembraneItem::getID() const {
  return 1075;
}

std::shared_ptr<Item> PhantomMembraneItem::clone() const {
  return std::make_shared<PhantomMembraneItem>();
}
