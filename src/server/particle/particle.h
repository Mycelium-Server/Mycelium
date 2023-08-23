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

#include "../../byte_buffer.h"

#define DECL_DEFAULT_PARTICLE(className)      \
  class className : public AbstractParticle { \
   public:                                    \
    className();                              \
    ~className() override;                    \
                                              \
   public:                                    \
    void writeData(ByteBuffer&) override;     \
    [[nodiscard]] int getParticleID()         \
        const override;                       \
  };

#define DEF_DEFAULT_PARTICLE(className, particleID) \
  className::className() = default;                 \
  className::~className() = default;                \
                                                    \
  void className::writeData(ByteBuffer&) {}         \
                                                    \
  int className::getParticleID() const {            \
    return particleID;                              \
  }

class AbstractParticle {
 public:
  AbstractParticle();
  virtual ~AbstractParticle();

 public:
  virtual void write(ByteBuffer&);
  virtual void writeData(ByteBuffer&) = 0;
  [[nodiscard]] virtual int getParticleID() const = 0;
};