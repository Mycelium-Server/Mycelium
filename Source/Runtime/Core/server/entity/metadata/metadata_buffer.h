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
  void writeByte(uint8_t, uint8_t);
  void writeVarInt(uint8_t, int);
  void writeFloat(uint8_t, float);
  void writeString(uint8_t, const std::string&);
  void writeChat(uint8_t, const std::string&);
  void writeOptChat(uint8_t, const std::optional<std::string>&);
  void writeItem(uint8_t, const ItemStack&);
  void writeBool(uint8_t, bool);
  void writeRotation(uint8_t, float, float, float);
  void writePosition(uint8_t, const BlockPosition&);
  void writeOptPosition(uint8_t, const std::optional<BlockPosition>&);
  void writeDirection(uint8_t, const Direction&);
  void writeOptUUID(uint8_t, const std::optional<uuids::uuid>&);
  void writeOptBlockID(uint8_t, int);
  void writeNBT(uint8_t, const std::shared_ptr<NBT_Component>&);
  void writeParticle(uint8_t, AbstractParticle*);
  void writeVillagerData(uint8_t, const VillagerData&);
  void writeOptVarInt(uint8_t, const std::optional<int>&);
  void writePose(uint8_t, const Pose&);
  void writeCatVariant(uint8_t, const CatVariant&);
  void writeFrogVariant(uint8_t, const FrogVariant&);
  void writePaintingVariant(uint8_t, const PaintingVariant&);

  ByteBuffer& finalize();

 public:
  ByteBuffer& buf;
};