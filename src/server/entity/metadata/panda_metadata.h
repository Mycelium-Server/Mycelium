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

#include "animal_metadata.h"

class PandaMetadata : public AnimalMetadata {
 public:
  PandaMetadata();
  ~PandaMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  int breedTimer = 0;
  int sneezeTimer = 0;
  int eatTimer = 0;
  uint8_t mainGene = 0;
  uint8_t hiddenGene = 0;
  bool isSneezing = false;
  bool isRolling = false;
  bool isSitting = false;
  bool isOnBack = false;
};