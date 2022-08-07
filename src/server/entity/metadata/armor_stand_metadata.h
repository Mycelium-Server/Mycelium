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

#include "living_entity_metadata.h"

class ArmorStandMetadata : public LivingEntityMetadata {
 public:
  ArmorStandMetadata();
  ~ArmorStandMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer &) override;

 public:
  bool isSmall = false;
  bool hasArms = false;
  bool hasNoBasePlate = false;
  bool isMarker = false;
  Rotation3f headRotation;
  Rotation3f bodyRotation;
  Rotation3f leftArmRotation;
  Rotation3f rightArmRotation;
  Rotation3f leftLegRotation;
  Rotation3f rightLegRotation;
};