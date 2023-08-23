/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

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