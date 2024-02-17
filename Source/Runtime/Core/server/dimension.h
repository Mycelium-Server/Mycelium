#pragma once

#include <string>

#include "../NBT.h"

class World;

struct Dimension {
  std::string name;
  std::string type;
  int64_t seed;
  bool isFlat;
  bool isDebug;
  World* world;
};

enum Dimensions {
  OVERWORLD = 0,
  THE_NETHER = 1,
  THE_END = 2
};

const extern std::vector<Dimension> m_default_dimensions;