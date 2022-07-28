#pragma once

#include "uuid.h"
#include <vector>
#include <string>
#include <iostream>

struct ItemStack;

class ByteBuffer {
public:
    ByteBuffer();
    explicit ByteBuffer(size_t);
    explicit ByteBuffer(const std::vector<unsigned char>&);
    ByteBuffer(const unsigned char*, size_t);
    
public:
    unsigned char readByte();
    void writeByte(unsigned char);
    
    short readShort();
    void writeShort(short);

    int readInt();
    void writeInt(int);

    long long readLong();
    void writeLong(long long);

    std::string readString();
    void writeString(std::string);

    int readVarInt();
    void writeVarInt(int);

    long long readVarLong();
    void writeVarLong(long long);

    float readFloat();
    void writeFloat(float);

    double readDouble();
    void writeDouble(double);

    void writeItemStack(const ItemStack&);

    std::vector<unsigned char> readBytes(size_t);
    void writeBytes(std::vector<unsigned char>);
    void writeBytes(const unsigned char*, size_t);
    void writeBytes(ByteBuffer&, size_t);
    void writeBytes(ByteBuffer&);

    void writeUUID(const uuids::uuid&);

    void ensureWritableBytes(size_t);
    [[nodiscard]] size_t readableBytes() const;
    [[nodiscard]] size_t length() const;

public:
    size_t readerIdx = 0;
    size_t writerIdx = 0;

    std::vector<unsigned char> data;
};