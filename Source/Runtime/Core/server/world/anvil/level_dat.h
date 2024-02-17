#pragma once

#include "../../../NBT.h"
#include "../../../byte_buffer.h"
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
  int64_t borderSizeLerpTime = 0;
  double borderWarningBlocks = 5;
  double borderWarningTime = 15;
  int clearWeatherTime = 0;
  std::vector<CustomBossEvent> customBossEvents;
  std::vector<DataPack> dataPacks;
  int dataVersion = 0;
  int64_t dayTime = 0;
  Difficulty difficulty = Difficulty::NORMAL;
  bool difficultyLocked = false;
  std::optional<DragonFlightData> dragonFlight;
  GameRules gameRules;
  Gamemode gameType = Gamemode::SURVIVAL;
  bool hardcore = false;
  bool initialized = false;
  int64_t lastPlayed = 0;
  std::string levelName;
  bool mapFeatures = true;
  bool raining = false;
  int rainTime = 0;
  int64_t seed = 0;
  int64_t sizeOnDisk = 0;
  Vector3i spawn;
  bool thundering = false;
  int thunderTime = 0;
  int64_t time = 0;
  int version = 0;
  MinecraftVersion versionData;
  uuids::uuid wanderingTraderID;
  float wanderingTraderSpawnChance = 0;
  int wanderingTraderSpawnDelay = 0;
  bool wasModded = false;
};