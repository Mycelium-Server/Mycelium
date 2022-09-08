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

#include "../../../byte_buffer.h"
#include "../../direction.h"
#include "../../itemstack.h"
#include "../../location.h"
#include "../../particle/particle.h"
#include "cat_variant.h"
#include "frog_variant.h"
#include "painting_variant.h"
#include "pose.h"
#include "villager_data.h"

class MetadataBuffer {
 public:
  explicit MetadataBuffer(ByteBuffer&);
  ~MetadataBuffer();

 public:
  void writeByte(unsigned char, unsigned char);
  void writeVarInt(unsigned char, int);
  void writeFloat(unsigned char, float);
  void writeString(unsigned char, const std::string&);
  void writeChat(unsigned char, const std::string&);
  void writeOptChat(unsigned char, const std::optional<std::string>&);
  void writeItem(unsigned char, const ItemStack&);
  void writeBool(unsigned char, bool);
  void writeRotation(unsigned char, float, float, float);
  void writePosition(unsigned char, const BlockPosition&);
  void writeOptPosition(unsigned char, const std::optional<BlockPosition>&);
  void writeDirection(unsigned char, const Direction&);
  void writeOptUUID(unsigned char, const std::optional<uuids::uuid>&);
  void writeOptBlockID(unsigned char, int);
  void writeNBT(unsigned char, const std::shared_ptr<NBT_Component>&);
  void writeParticle(unsigned char, AbstractParticle*);
  void writeVillagerData(unsigned char, const VillagerData&);
  void writeOptVarInt(unsigned char, const std::optional<int>&);
  void writePose(unsigned char, const Pose&);
  void writeCatVariant(unsigned char, const CatVariant&);
  void writeFrogVariant(unsigned char, const FrogVariant&);
  void writePaintingVariant(unsigned char, const PaintingVariant&);

  ByteBuffer& finalize();

 public:
  ByteBuffer& buf;
};