#pragma once

#include "../../../location.h"

struct DragonFlightData {
  char x;
  char y;
  char z;
  std::vector<int> gateways;
  bool dragonKilled = false;
  uuids::uuid dragonUUID;
  bool previouslyKilled = false;
};