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

#include "cat_variant.h"
#include "tameable_animal_metadata.h"

class CatMetadata : public TameableAnimalMetadata {
 public:
  CatMetadata();
  ~CatMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  CatVariant type = CatVariant::CAT_BLACK;
  bool isLying = false;
  bool isRelaxed = false;
  int collarColor = 14;
};