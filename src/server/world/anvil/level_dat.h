/*
 * Mycelium
 * Copyright (C) 2022  JNNGL
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

#include "../../../ByteBuffer.h"
#include "../../../NBT.h"
#include "../../difficulty.h"
#include "../../gamemode.h"
#include "../../gamerules.h"
#include "custom_boss_event.h"
#include "data_pack.h"
#include "dragon_flight_data.h"
#include "minecraft_version.h"

class LevelDat {
 public:
  LevelDat();
  ~LevelDat();

 public:
  void read(ByteBuffer&);
  void read(const std::shared_ptr<TAG_Compound>&);
  void write(ByteBuffer&);

 public:
  bool allowCommands = true;
  double borderCenterX = 0;
  double borderCenterZ = 0;
  double borderDamagePerBlock = 0.2;
  double borderSize = 60000000;
  double borderSafeZone = 5;
  double borderSizeLerpTarget = 60000000;
  long long borderSizeLerpTime = 0;
  double borderWarningBlocks = 5;
  double borderWarningTime = 15;
  int clearWeatherTime = 0;
  std::vector<CustomBossEvent> customBossEvents;
  std::vector<DataPack> dataPacks;
  int dataVersion = 0;
  long long dayTime = 0;
  Difficulty difficulty = Difficulty::NORMAL;
  bool difficultyLocked = false;
  std::optional<DragonFlightData> dragonFlight;
  GameRules gameRules;
  Gamemode gameType = Gamemode::SURVIVAL;
  bool hardcore = false;
  bool initialized = false;
  long long lastPlayed = 0;
  std::string levelName;
  bool mapFeatures = true;
  bool raining = false;
  int rainTime = 0;
  long long seed = 0;
  long long sizeOnDisk = 0;
  Vector3i spawn;
  bool thundering = false;
  int thunderTime = 0;
  long long time = 0;
  int version = 0;
  MinecraftVersion versionData;
  uuids::uuid wanderingTraderID;
  float wanderingTraderSpawnChance = 0;
  int wanderingTraderSpawnDelay = 0;
  bool wasModded = false;
};