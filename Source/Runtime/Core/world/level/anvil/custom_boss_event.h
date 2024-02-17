#pragma once

#include <vector>

#include "../../../uuid.h"

struct CustomBossEvent {
  std::string id;
  std::vector<uuids::uuid> players;
  std::string color;
  bool createWorldFog = false;
  bool darkenScreen = false;
  int max = 0;
  int value = 0;
  std::string name;
  std::string overlay;
  bool playBossMusic = false;
  bool visible = false;
};