#pragma once

#include <vector>
#include <string>
#include <iostream>

class ByteBuffer {
public:
    ByteBuffer();
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

    std::vector<unsigned char> readBytes(size_t);
    void writeBytes(std::vector<unsigned char>);
    void writeBytes(const unsigned char*, size_t);
    void writeBytes(ByteBuffer&, size_t);
    void writeBytes(ByteBuffer&);

    void ensureWritableBytes(size_t);
    size_t readableBytes();
    size_t length();

public:
    size_t readerIdx = 0;
    size_t writerIdx = 0;

    std::vector<unsigned char> data;
};