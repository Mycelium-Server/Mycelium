#pragma once

#include <string>

enum ChatMode {
  ENABLED = 0,
  COMMANDS_ONLY = 1,
  HIDDEN = 2,
};

enum MainHand {
  LEFT = 0,
  RIGHT = 1
};

union SkinParts {
  struct {
    uint8_t capeEnabled : 1;
    uint8_t jacketEnabled : 1;
    uint8_t leftSleeveEnabled : 1;
    uint8_t rightSleeveEnabled : 1;
    uint8_t leftPantsLegEnabled : 1;
    uint8_t rightPantsLegEnabled : 1;
    uint8_t hatEnabled : 1;
    uint8_t unused : 1;
  };

  uint8_t value;
};

struct ClientSettings {
  std::string locale;
  uint8_t viewDistance = 0;
  ChatMode chatMode = (ChatMode) 0;
  bool chatColors = false;
  SkinParts displayedSkinParts;
  MainHand mainHand = (MainHand) 0;
  bool enableTextFiltering = false;
  bool allowServerListings = false;
};