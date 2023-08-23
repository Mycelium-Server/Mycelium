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

class FoxMetadata : public AnimalMetadata {
 public:
  FoxMetadata();
  ~FoxMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isSnow = false;
  bool isSitting = false;
  bool isCrouching = false;
  bool isInterested = false;
  bool isPouncing = false;
  bool isSleeping = false;
  bool isFaceplanted = false;
  bool isDefending = false;
  std::optional<uuids::uuid> firstUUID;
  std::optional<uuids::uuid> secondUUID;
};