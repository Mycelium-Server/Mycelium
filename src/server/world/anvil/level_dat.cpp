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

#include "level_dat.h"

#define assert(expr)                                \
  if (!(expr)) {                                    \
    std::cerr << "assertion failed at " << __FILE__ \
              << ":" << __LINE__ << " ("            \
              << #expr << ")" << std::endl;         \
    exit(-1);                                       \
  }

LevelDat::LevelDat() = default;
LevelDat::~LevelDat() = default;

void LevelDat::read(ByteBuffer& buf) {
  std::shared_ptr<NBT_Component> nbt = read_nbt(buf);
  assert(nbt->getType() == Type_TAG_Compound);
  std::shared_ptr<TAG_Compound>
      rootTag = std::static_pointer_cast<TAG_Compound>(nbt);
  for (auto& child: rootTag->tags) {
    if (child->name == "Data") {
      assert(nbt->getType() == Type_TAG_Compound);
      read(std::static_pointer_cast<TAG_Compound>(child));
      return;
    }
  }

  std::cerr << "Couldn't find `Data` tag" << std::endl;
  exit(-1);
}

void LevelDat::read(const std::shared_ptr<TAG_Compound>& tag) {
  for (auto& child: tag->tags) {
    if (child->name == "allowCommands") {

      assert(child->getType() == Type_TAG_Byte);
      allowCommands = std::static_pointer_cast<TAG_Byte>(child)->value;

    } else if (child->name == "BorderCenterX") {

      assert(child->getType() == Type_TAG_Double);
      borderCenterX = std::static_pointer_cast<TAG_Double>(child)->value;

    } else if (child->name == "BorderCenterZ") {

      assert(child->getType() == Type_TAG_Double);
      borderCenterZ = std::static_pointer_cast<TAG_Double>(child)->value;

    } else if (child->name == "BorderDamagePerBlock") {

      assert(child->getType() == Type_TAG_Double);
      borderDamagePerBlock = std::static_pointer_cast<TAG_Double>(child)->value;

    } else if (child->name == "BorderSize") {

      assert(child->getType() == Type_TAG_Double);
      borderSize = std::static_pointer_cast<TAG_Double>(child)->value;

    } else if (child->name == "BorderSafeZone") {

      assert(child->getType() == Type_TAG_Double);
      borderSafeZone = std::static_pointer_cast<TAG_Double>(child)->value;

    } else if (child->name == "BorderSizeLerpTarget") {

      assert(child->getType() == Type_TAG_Double);
      borderSizeLerpTarget = std::static_pointer_cast<TAG_Double>(child)->value;

    } else if (child->name == "BorderSizeLerpTime") {

      assert(child->getType() == Type_TAG_Long);
      borderSizeLerpTime = std::static_pointer_cast<TAG_Long>(child)->value;

    } else if (child->name == "BorderWarningBlocks") {

      assert(child->getType() == Type_TAG_Double);
      borderWarningBlocks = std::static_pointer_cast<TAG_Double>(child)->value;

    } else if (child->name == "BorderWarningTime") {

      assert(child->getType() == Type_TAG_Double);
      borderWarningTime = std::static_pointer_cast<TAG_Double>(child)->value;

    } else if (child->name == "clearWeatherTime") {

      assert(child->getType() == Type_TAG_Int);
      clearWeatherTime = std::static_pointer_cast<TAG_Int>(child)->value;

    } else if (child->name == "CustomBossEvents") {

      assert(child->getType() == Type_TAG_Compound);
      std::shared_ptr<TAG_Compound>
          compound = std::static_pointer_cast<TAG_Compound>(child);

      for (auto& cbeChild: compound->tags) {
        assert(cbeChild->getType() == Type_TAG_Compound);
        std::shared_ptr<TAG_Compound>
            cbeCompound = std::static_pointer_cast<TAG_Compound>(child);

        CustomBossEvent cbe;
        cbe.id = cbeCompound->name;

        for (auto& component: cbeCompound->tags) {
          if (component->name == "Players") {

            assert(component->getType() == Type_TAG_List);
            std::shared_ptr<TAG_List>
                listTag = std::static_pointer_cast<TAG_List>(component);

            assert(listTag->type == Type_TAG_Int_Array);
            for (auto& rawUuidTag: listTag->tags) {
              std::shared_ptr<TAG_Int_Array>
                  uuidTag = std::static_pointer_cast<TAG_Int_Array>(rawUuidTag);
              cbe.players.emplace_back((uuids::uuid::value_type(&)[16]) uuidTag->array);
            }

          } else if (component->name == "Color") {

            assert(component->getType() == Type_TAG_String);
            cbe.color = std::static_pointer_cast<TAG_String>(component)->value;

          } else if (component->name == "CreateWorldFog") {

            assert(component->getType() == Type_TAG_Byte);
            cbe.createWorldFog = std::static_pointer_cast<TAG_Byte>(component)->value;

          } else if (component->name == "DarkenScreen") {

            assert(component->getType() == Type_TAG_Byte);
            cbe.darkenScreen = std::static_pointer_cast<TAG_Byte>(component)->value;

          } else if (component->name == "Max") {

            assert(component->getType() == Type_TAG_Int);
            cbe.max = std::static_pointer_cast<TAG_Int>(component)->value;

          } else if (component->name == "Value") {

            assert(component->getType() == Type_TAG_Int);
            cbe.value = std::static_pointer_cast<TAG_Int>(component)->value;

          } else if (component->name == "Name") {

            assert(component->getType() == Type_TAG_String);
            cbe.name = std::static_pointer_cast<TAG_String>(component)->value;

          } else if (component->name == "Overlay") {

            assert(component->getType() == Type_TAG_String);
            std::string value = std::static_pointer_cast<TAG_String>(component)->value;
            assert(
                value == "progress" ||
                value == "notched_6" ||
                value == "notched_10" ||
                value == "notched_12" ||
                value == "notched_20")
                cbe.overlay = value;

          } else if (component->name == "PlayBossMusic") {

            assert(component->getType() == Type_TAG_Byte);
            cbe.playBossMusic = std::static_pointer_cast<TAG_Byte>(component)->value;

          } else if (component->name == "Visible") {

            assert(component->getType() == Type_TAG_Byte);
            cbe.visible = std::static_pointer_cast<TAG_Byte>(component)->value;
          }
        }

        customBossEvents.push_back(cbe);
      }

    } else if (child->name == "DataPacks") {

      assert(child->getType() == Type_TAG_Compound);
      std::shared_ptr<TAG_Compound>
          dataPacksTag = std::static_pointer_cast<TAG_Compound>(child);

      for (auto& dpChild: dataPacksTag->tags) {
        if (dpChild->name == "Disabled") {

          assert(dpChild->getType() == Type_TAG_List);
          std::shared_ptr<TAG_List>
              disabledTag = std::static_pointer_cast<TAG_List>(dpChild);
          assert(disabledTag->type == Type_TAG_String || disabledTag->tags.empty());

          for (auto& dpTag: disabledTag->tags) {
            DataPack dp;
            dp.enabled = false;
            dp.data = std::static_pointer_cast<TAG_String>(dpTag)->value;
            dataPacks.push_back(dp);
          }

        } else if (dpChild->name == "Enabled") {

          assert(dpChild->getType() == Type_TAG_List);
          std::shared_ptr<TAG_List>
              enabledTag = std::static_pointer_cast<TAG_List>(dpChild);
          assert(enabledTag->type == Type_TAG_String || enabledTag->tags.empty());

          for (auto& dpTag: enabledTag->tags) {
            DataPack dp;
            dp.enabled = true;
            dp.data = std::static_pointer_cast<TAG_String>(dpTag)->value;
            dataPacks.push_back(dp);
          }
        }
      }

    } else if (child->name == "DataVersion") {

      assert(child->getType() == Type_TAG_Int);
      dataVersion = std::static_pointer_cast<TAG_Int>(child)->value;

    } else if (child->name == "DayTime") {

      assert(child->getType() == Type_TAG_Long);
      dayTime = std::static_pointer_cast<TAG_Long>(child)->value;

    } else if (child->name == "Difficulty") {

      assert(child->getType() == Type_TAG_Byte);
      difficulty = (Difficulty) std::static_pointer_cast<TAG_Byte>(child)->value;

    } else if (child->name == "DifficultyLocked") {

      assert(child->getType() == Type_TAG_Byte);
      difficultyLocked = std::static_pointer_cast<TAG_Byte>(child)->value;

    } else if (child->name == "DimensionData") {

      // TODO: Dimension data

    } else if (child->name == "GameRules") {

      assert(child->getType() == Type_TAG_Compound);
      std::shared_ptr<TAG_Compound>
          grCompound = std::static_pointer_cast<TAG_Compound>(child);

      GameRules gr;

      for (auto& gameRuleTag: grCompound->tags) {
        assert(gameRuleTag->getType() == Type_TAG_String);
        gr[gameRuleTag->name] = std::static_pointer_cast<TAG_String>(gameRuleTag)->value;
      }

      gameRules = gr;
    } else if (child->name == "GameType") {

      assert(child->getType() == Type_TAG_Int);
      gameType = (Gamemode) std::static_pointer_cast<TAG_Int>(child)->value;

    } else if (child->name == "hardcore") {

      assert(child->getType() == Type_TAG_Byte);
      hardcore = std::static_pointer_cast<TAG_Byte>(child)->value;

    } else if (child->name == "initialized") {

      assert(child->getType() == Type_TAG_Byte);
      initialized = std::static_pointer_cast<TAG_Byte>(child)->value;

    } else if (child->name == "LastPlayed") {

      assert(child->getType() == Type_TAG_Long);
      lastPlayed = std::static_pointer_cast<TAG_Long>(child)->value;

    } else if (child->name == "LevelName") {

      assert(child->getType() == Type_TAG_String);
      levelName = std::static_pointer_cast<TAG_String>(child)->value;

    } else if (child->name == "MapFeatures") {

      assert(child->getType() == Type_TAG_Byte);
      mapFeatures = std::static_pointer_cast<TAG_Byte>(child)->value;

    } else if (child->name == "Player") {

      // TODO: player.dat format

    } else if (child->name == "raining") {

      assert(child->getType() == Type_TAG_Byte);
      raining = std::static_pointer_cast<TAG_Byte>(child)->value;

    } else if (child->name == "rainTime") {

      assert(child->getType() == Type_TAG_Int);
      rainTime = std::static_pointer_cast<TAG_Int>(child)->value;

    } else if (child->name == "RandomSeed") {

      assert(child->getType() == Type_TAG_Long);
      seed = std::static_pointer_cast<TAG_Long>(child)->value;

    } else if (child->name == "SizeOnDisk") {

      assert(child->getType() == Type_TAG_Long);
      sizeOnDisk = std::static_pointer_cast<TAG_Long>(child)->value;

    } else if (child->name == "SpawnX") {

      assert(child->getType() == Type_TAG_Int);
      spawn.x = std::static_pointer_cast<TAG_Int>(child)->value;

    } else if (child->name == "SpawnY") {

      assert(child->getType() == Type_TAG_Int);
      spawn.y = std::static_pointer_cast<TAG_Int>(child)->value;

    } else if (child->name == "SpawnZ") {

      assert(child->getType() == Type_TAG_Int);
      spawn.z = std::static_pointer_cast<TAG_Int>(child)->value;

    } else if (child->name == "thundering") {

      assert(child->getType() == Type_TAG_Byte);
      thundering = std::static_pointer_cast<TAG_Byte>(child)->value;

    } else if (child->name == "thunderTime") {

      assert(child->getType() == Type_TAG_Int);
      thunderTime = std::static_pointer_cast<TAG_Int>(child)->value;

    } else if (child->name == "Time") {

      assert(child->getType() == Type_TAG_Long);
      time = std::static_pointer_cast<TAG_Long>(child)->value;

    } else if (child->name == "version") {

      assert(child->getType() == Type_TAG_Int);
      version = std::static_pointer_cast<TAG_Int>(child)->value;

    } else if (child->name == "Version") {

      assert(child->getType() == Type_TAG_Compound);
      std::shared_ptr<TAG_Compound>
          versionCompound = std::static_pointer_cast<TAG_Compound>(child);

      MinecraftVersion mv;

      for (auto& component: versionCompound->tags) {
        if (component->name == "Id") {

          assert(component->getType() == Type_TAG_Int);
          mv.id = std::static_pointer_cast<TAG_Int>(component)->value;

        } else if (component->name == "Name") {

          assert(component->getType() == Type_TAG_String);
          mv.name = std::static_pointer_cast<TAG_String>(component)->value;

        } else if (component->name == "Series") {

          assert(component->getType() == Type_TAG_String);
          mv.series = std::static_pointer_cast<TAG_String>(component)->value;

        } else if (component->name == "Snapshot") {

          assert(component->getType() == Type_TAG_Byte);
          mv.snapshot = std::static_pointer_cast<TAG_Byte>(component)->value;
        }
      }

      versionData = mv;

    } else if (child->name == "WanderingTraderId") {

      assert(child->getType() == Type_TAG_Int_Array);
      wanderingTraderID = {(uuids::uuid::value_type(&)[16])
                               std::static_pointer_cast<TAG_Int_Array>(child)
                                   ->array};

    } else if (child->name == "WanderingTraderSpawnChance") {

      assert(child->getType() == Type_TAG_Int);
      wanderingTraderSpawnChance = ((float) std::static_pointer_cast<TAG_Int>(child)->value) / 10.f;

    } else if (child->name == "WanderingTraderSpawnDelay") {

      assert(child->getType() == Type_TAG_Int);
      wanderingTraderSpawnDelay = std::static_pointer_cast<TAG_Int>(child)->value;

    } else if (child->name == "WasModded") {

      assert(child->getType() == Type_TAG_Byte);
      wasModded = std::static_pointer_cast<TAG_Byte>(child)->value;
    }
  }

  assert(dataVersion >= 3117 && dataVersion <= 3120);
}

void LevelDat::write(ByteBuffer& buf) {
  // TODO: write
}
