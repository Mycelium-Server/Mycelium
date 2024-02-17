#pragma once

#include <string>

struct MinecraftVersion {
  int id = 0;
  std::string name;
  std::string series;
  bool snapshot = false;
};