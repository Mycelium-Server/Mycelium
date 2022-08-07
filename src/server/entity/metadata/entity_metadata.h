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

#include "metadata.h"
#include "pose.h"

class EntityMetadata : public AbstractEntityMetadata {
 public:
  EntityMetadata();
  ~EntityMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  union {
    struct {
      unsigned char isOnFire : 1;
      unsigned char isCrouching : 1;
      unsigned char unused : 1;
      unsigned char isSprinting : 1;
      unsigned char isSwimming : 1;
      unsigned char isInvisible : 1;
      unsigned char isGlowing : 1;
      unsigned char isFlying : 1;
    };
    unsigned char value = 0;
  } bitfield {};
  int airTicks = 300;
  std::optional<std::string> customName;
  bool customNameVisible = false;
  bool isSilent = false;
  bool hasNoGravity = false;
  Pose pose = Pose::STANDING;
  int frozenTicks = 0;
};