#pragma once

#include <memory>
#include <vector>

#include "block.h"

class BlockRegistry {
 public:
  static void init();
  static std::shared_ptr<Block> fromID(int);
  static std::shared_ptr<Block> newInstanceFromID(int);

 private:
  static void generateA();
  static void generateB();
  static void generateC();
  static void generateD();
  static void generateE();
  static void generateF();
  static void generateG();
  static void generateH();
  static void generateI();
  static void generateJ();
  static void generateK();
  static void generateL();
  static void generateM();
  static void generateN();
  static void generateO();
  static void generateP();
  static void generateQ();
  static void generateR();
  static void generateS();
  static void generateT();
  static void generateU();
  static void generateV();
  static void generateW();
  static void generateX();
  static void generateY();
  static void generateZ();

 private:
  static std::vector<std::shared_ptr<Block>> registry;
};
