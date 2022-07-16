#include "ByteBuffer.h"

ByteBuffer::ByteBuffer() {}

ByteBuffer::ByteBuffer(const unsigned char* data, size_t len) {
    this->data = std::vector<unsigned char>(data, data+len);
    writerIdx = len;
}

unsigned char ByteBuffer::readByte() {
    if(readerIdx >= writerIdx) return 0;
    return data[readerIdx++];
}

void ByteBuffer::writeByte(unsigned char b) {
    ensureWritableBytes(1);
    data[writerIdx++] = b;
}

short ByteBuffer::readShort() {
    short res = 0;
    for(int i = 0; i < sizeof(res); i++) {
        res <<= 8;
        res |= readByte();
    }
    return res;
}

void ByteBuffer::writeShort(short value) {
    ensureWritableBytes(sizeof(value));
    int shift = sizeof(value) * 8;
    for(int i = 0; i < sizeof(value); i++) {
        shift -= 8;
        data[writerIdx++] = (value & (0xFF << shift)) >> shift;
    }
}

int ByteBuffer::readInt() {
    int32_t i = 0;
    for(int j = 0; j < 4; j++) {
        i <<= 8;
        i |= readByte();
    }
    return i;
}

void ByteBuffer::writeInt(int value) {
    ensureWritableBytes(sizeof(value));
    int shift = sizeof(value) * 8;
    for(int i = 0; i < sizeof(value); i++) {
        shift -= 8;
        data[writerIdx++] = (value & (0xFF << shift)) >> shift;
    }
}

long long ByteBuffer::readLong() {
    long long res = 0;
    for(int i = 0; i < sizeof(res); i++) {
        res <<= 8;
        res |= readByte();
    }
    return res;
}

void ByteBuffer::writeLong(long long value) {
    ensureWritableBytes(sizeof(value));
    int shift = sizeof(value) * 8;
    for(int i = 0; i < sizeof(value); i++) {
        shift -= 8;
        data[writerIdx++] = (value & ((long long)0xFF << shift)) >> shift;
    }
}

std::string ByteBuffer::readString() {
    int len = readInt();
    return std::string((char*)readBytes(len).data(), len);
}

void ByteBuffer::writeString(std::string str) {
    writeInt(str.size());
    writeBytes((unsigned char*)str.data(), str.size());
}

int ByteBuffer::readVarInt() {
    int value = 0;
    int position = 0;
    unsigned char current;
    while(1) {
        current = readByte();
        value |= (current & 0x7F) << position;
        if((current & 0x80) == 0) break;
        position += 7;
        if(position >= 32) return 0;
    }
    return value;
}

void ByteBuffer::writeVarInt(int value) {
    while(1) {
        if((value & ~((int)0x7F)) == 0) {
            writeByte(value & 0xFF);
            return;
        }
        writeByte(((value & 0x7F) | 0x80) & 0xFF);
        value = ((unsigned int)value) >> 7;
    }
}

long long ByteBuffer::readVarLong() {
    long long value = 0;
    int position = 0;
    unsigned char current;
    while(1) {
        current = readByte();
        value |= ((long long)(current & 0x7F)) << position;
        if((current & 0x80) == 0) break;
        position += 7;
        if(position >= 64) return 0;
    }
    return value;
}

void ByteBuffer::writeVarLong(long long value) {
    while(1) {
        if((value & ~((long long)0x7F)) == 0) {
            writeByte(value & 0xFF);
            return;
        }
        writeByte(((value & 0x7F) | 0x80) & 0xFF);
        value = ((unsigned long long)value) >> 7;
    }
}

std::vector<unsigned char> ByteBuffer::readBytes(size_t n) {
    std::vector<unsigned char> dst;
    dst.resize(n);
    for(size_t i = 0; i < n; i++)
        dst[i] = readByte();
    return dst;
}

void ByteBuffer::writeBytes(std::vector<unsigned char> data) {
    writeBytes(data.data(), data.size());
}

void ByteBuffer::writeBytes(const unsigned char* data, size_t n) {
    ensureWritableBytes(n);
    for(size_t i = 0; i < n; i++) {
        this->data[writerIdx++] = data[i];
    }
}

void ByteBuffer::writeBytes(ByteBuffer& buf, size_t s) {
    ensureWritableBytes(s);
    for(size_t i = 0; i < s; i++)
        data[writerIdx++] = buf.readByte();
}

void ByteBuffer::writeBytes(ByteBuffer& buf) {
    writeBytes(buf, buf.readableBytes());
}

void ByteBuffer::ensureWritableBytes(size_t n) {
    if(data.size() < n + writerIdx)
        data.resize(writerIdx + n);
}

size_t ByteBuffer::readableBytes() {
    return writerIdx - readerIdx;
}

size_t ByteBuffer::length() {
    return data.size();
}