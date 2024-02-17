
#include "item_registry.h"

void ItemRegistry::init() {
  registry.resize(1152);
  generateA();
  generateB();
  generateC();
  generateD();
  generateE();
  generateF();
  generateG();
  generateH();
  generateI();
  generateJ();
  generateK();
  generateL();
  generateM();
  generateN();
  generateO();
  generateP();
  generateQ();
  generateR();
  generateS();
  generateT();
  generateU();
  generateV();
  generateW();
  generateX();
  generateY();
  generateZ();
}

std::shared_ptr<Item> ItemRegistry::fromID(int id) {
  if (id < 0 || id >= registry.size()) {
    return registry[0];
  }
  return registry[id];
}

std::shared_ptr<Item> ItemRegistry::newInstanceFromID(int id) {
  return fromID(id)->clone();
}

std::vector<std::shared_ptr<Item>> ItemRegistry::registry;
