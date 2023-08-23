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

#include <optional>
#include <string>

#include "../location.h"
#include "metadata/entity_metadata.h"

int createEntityID();

class Entity {
 public:
  Entity();
  explicit Entity(int);
  ~Entity();

 protected:
  explicit Entity(EntityMetadata* metadata);
  Entity(int, EntityMetadata* metadata);

 public:
  [[nodiscard]] int getEID() const;
  void setDisplayName(const std::string&);
  std::optional<std::string> getDisplayName();
  void setLocation(const Location&);
  Location& getLocation();
  [[nodiscard]] bool isOnGround() const;
  void setOnGround(bool);

  template <typename T = EntityMetadata>
  [[nodiscard]] T* getMetadata() const {
    return (T*) metadata;
  }

 public:
  Location location;
  AbstractEntityMetadata* metadata;

 private:
  bool onGround = false;
  int eid;
  std::optional<std::string> displayName;
};