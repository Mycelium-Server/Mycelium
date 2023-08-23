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

#include "entity_metadata.h"

class LivingEntityMetadata : public EntityMetadata {
 public:
  LivingEntityMetadata();
  ~LivingEntityMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isHandActive = false;
  bool offhand = false;
  bool inRiptideSpinAttack = false;
  float health = 1.0;
  int potionEffectColor = 0;
  bool ambientPotionEffect = false;
  int numArrows = 0;
  int numBeeStingers = 0;
  std::optional<BlockPosition> bedLocation = {};
};