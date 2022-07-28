#pragma once

#include "../../../ByteBuffer.h"
#include "../../location.h"
#include "../../direction.h"
#include "villager_data.h"
#include "pose.h"

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
    // TODO: void writeItem(unsigned char, ItemStack*);
    void writeBool(unsigned char, bool);
    void writeRotation(unsigned char, float, float, float);
    void writePosition(unsigned char, const ProtocolPosition&);
    void writeOptPosition(unsigned char, const std::optional<ProtocolPosition>&);
    void writeDirection(unsigned char, const Direction&);
    void writeOptUUID(unsigned char, const std::optional<uuids::uuid>&);
    void writeOptBlockID(unsigned char, int);
    void writeNBT(unsigned char, const std::shared_ptr<NBT_Component>&);
    // TODO: void writeParticle(unsigned char, Particle*);
    void writeVillagerData(unsigned char, const VillagerData&);
    void writeOptVarInt(unsigned char, const std::optional<int>&);
    void writePose(unsigned char, const Pose&);
    // TODO: void writeCatVariant(unsigned char, const CatVariant&);
    // TODO: void writeFrogVariant(unsigned char, const FrogVariant&);
    // TODO: void writePaintingVariant(unsigned char, const PaintingVariant&);

    ByteBuffer& finalize();

public:
    ByteBuffer& buf;

};