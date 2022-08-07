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

#include "../entity/entity.h"
#include "../location.h"
#include "particle.h"

class VibrationParticle : public AbstractParticle {
 public:
  VibrationParticle();
  ~VibrationParticle() override;

 public:
  void writeData(ByteBuffer&) override;
  [[nodiscard]] int getParticleID() const override;

 public:
  std::string positionSourceType;
  ProtocolPosition blockPosition {};
  Entity* entity = nullptr;
  float entityEyeHeight = 0;// TODO: Move to Entity class
  int ticks = 0;
};