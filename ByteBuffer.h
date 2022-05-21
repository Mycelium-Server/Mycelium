#ifndef SERVER_CORE_BYTEBUFFER_H
#define SERVER_CORE_BYTEBUFFER_H

#include <cinttypes>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

const int SEGMENT_BITS = 0x7F;
const int CONTINUE_BIT = 0x80;

typedef unsigned char byte_t;

unsigned int sizeofVarInt(int value) {
    unsigned int i = 0;
    while(true) {
        i++;
        if((value & ~SEGMENT_BITS) == 0) {
            return i;
        }

        value = (int)(((unsigned int) value) >> 7);
    }
}

unsigned int sizeofVarLong(long value) {
    int i = 0;
    while(true) {
        i++;
        if((value & ~((long) SEGMENT_BITS)) == 0) {
            return i;
        }

        value = (long)(((unsigned long) value) >> 7);
    }
}

union UUID_t {
    struct {
        uint64_t a;
        uint64_t b;
    };
    __uint128_t value;

    explicit UUID_t(__uint128_t value) : value(value) {}
    UUID_t(uint64_t a, uint64_t b) : a(a), b(b) {}
};

union Location_t {
    struct {
        int64_t x : 26;
        int64_t z : 26;
        int64_t y : 12;
    };
    int64_t l;

    explicit Location_t(int64_t l) : l(l) {}
    Location_t(int32_t x, int16_t y, int32_t z) : x(x & 0x3FFFFFF), z(z & 0x3FFFFFF), y(y & 0xFFF) {}
};

class ByteBuffer {
public:
    ByteBuffer() = default;
    ByteBuffer(byte_t* data, unsigned int length) {
        for(int i = 0; i < length; i++) {
            bytes.push_back(data[i]);
        }
    }

    ByteBuffer(unsigned int length) {
        bytes.resize(length);
    }

    byte_t readByte() {
        if(position >= bytes.size()) return 0;
        return bytes[position++];
    }

    int readVarInt() {
        int value = 0;
        int pos = 0;
        byte_t currentByte;

        while(true) {
            currentByte = readByte();
            value |= (currentByte & SEGMENT_BITS) << pos;
            if((currentByte & CONTINUE_BIT) == 0) break;
            pos += 7;
            if(pos >= 32) {
                printf("[Err] VarInt is too big\n");
                return 0;
            }
        }
        return value;
    }

    long readVarLong() {
        long value = 0;
        int pos = 0;
        byte_t currentByte;
        while(true) {
            currentByte = readByte();
            value |= (currentByte & SEGMENT_BITS) << pos;
            if((currentByte & CONTINUE_BIT) == 0) break;
            pos += 7;
            if(pos >= 64) {
                printf("[Err] VarLong is too big\n");
                return 0;
            }
        }
        return value;
    }

    std::string readString() {
        int len = readVarInt();
        std::string buf;
        while(len > 0) {
            len--;
            buf += (char)readByte();
        }
        return buf;
    }

    unsigned short readUnsignedShort() {
        unsigned short value = (unsigned char)readByte();
        value <<= 8;
        value |= (unsigned char)readByte();
        return value;
    }

    void reset() {
        position = 0;
    }

    [[nodiscard]] byte_t* remainingData() const {
        if(position == bytes.size()) return nullptr;
        auto* dst = (byte_t*)malloc(bytes.size()-position);
        memcpy(dst, bytes.data()+position, bytes.size()-position);
        return dst;
    }

    void writeByte(byte_t b) {
        if(position >= bytes.size())
            bytes.resize(position+1);
        bytes[position++] = b;
    }

    void writeVarInt(int value) {
        while(true) {
            if((value & ~SEGMENT_BITS) == 0) {
                writeByte(value);
                return;
            }

            writeByte((value & SEGMENT_BITS) | CONTINUE_BIT);
            value = (int)(((unsigned int) value) >> 7);
        }
    }

    void writeVarLong(long value) {
        while(true) {
            if((value & ~((long) SEGMENT_BITS)) == 0) {
                writeByte(value);
                return;
            }

            writeByte((value & SEGMENT_BITS) | CONTINUE_BIT);
            value = (long)(((unsigned long) value) >> 7);
        }
    }

    void writeString(const std::string& value) {
        writeVarInt((int)value.length());
        for(char i : value) {
            writeByte(i);
        }
    }

    void writeUUID(UUID_t uuid) {
        writeUnsignedLong(uuid.a);
        writeUnsignedLong(uuid.b);
    }

    void writeInt(int32_t value) {
        writeByte((value & 0xFF000000) >> (3*8));
        writeByte((value & 0x00FF0000) >> (2*8));
        writeByte((value & 0x0000FF00) >> (1*8));
        writeByte((value & 0x000000FF));
    }

    void writeBoolean(bool value) {
        writeByte(value? 0x01 : 0x00);
    }

    void writeUnsignedByte(uint8_t value) {
        writeByte(value);
    }

    void writeByteBuffer(ByteBuffer& buf) {
        bytes.resize(std::max(bytes.size(), buf.bytes.size()+position));
        for(unsigned char byte : buf.bytes) {
            writeByte(byte);
        }
    }

    void writeShort(int16_t value) {
        writeByte((value & 0xFF00) >> 8);
        writeByte(value & 0x00FF);
    }

    long readLong() {
        long l = 0;
        for(int i = 0; i < 8; i++) {
            l <<= 8;
            l |= readByte();
        }
        return l;
    }

    void writeLong(int64_t value) {
        writeByte((value & 0xFF00000000000000) >> (7*8));
        writeByte((value & 0x00FF000000000000) >> (6*8));
        writeByte((value & 0x0000FF0000000000) >> (5*8));
        writeByte((value & 0x000000FF00000000) >> (4*8));
        writeByte((value & 0x00000000FF000000) >> (3*8));
        writeByte((value & 0x0000000000FF0000) >> (2*8));
        writeByte((value & 0x000000000000FF00) >> (1*8));
        writeByte((value & 0x00000000000000FF));
    }

    void writeUnsignedLong(uint64_t value) {
        writeByte((value & 0xFF00000000000000) >> (7*8));
        writeByte((value & 0x00FF000000000000) >> (6*8));
        writeByte((value & 0x0000FF0000000000) >> (5*8));
        writeByte((value & 0x000000FF00000000) >> (4*8));
        writeByte((value & 0x00000000FF000000) >> (3*8));
        writeByte((value & 0x0000000000FF0000) >> (2*8));
        writeByte((value & 0x000000000000FF00) >> (1*8));
        writeByte((value & 0x00000000000000FF));
    }

    void writeFloat(float value) {
        union {
            float f;
            struct {
                uint32_t mantissa: 23;
                uint32_t exponent : 8;
                uint32_t sign : 1;
            };
        } raw{};
        raw.f = value;
        uint32_t dst = raw.sign;
        for(int k = 7; k >= 0; k--) {
            dst <<= 1;
            if ((raw.exponent >> k) & 1)
                dst += 1;
        }
        for(int k = 22; k >= 0; k--) {
            dst <<= 1;
            if ((raw.mantissa >> k) & 1)
                dst += 1;
        }
        writeInt((int32_t)dst);
    }

    void writeDouble(double value) {
        union {
            double d;
            struct {
                uint64_t mantissa : 52;
                uint64_t exponent : 11;
                uint64_t sign : 1;
            };
        } raw{};
        raw.d = value;
        uint64_t dst = raw.sign;
        for(int k = 10; k >= 0; k--) {
            dst <<= 1;
            if ((raw.exponent >> k) & 1)
                dst += 1;
        }
        for(int k = 51; k >= 0; k--) {
            dst <<= 1;
            if ((raw.mantissa >> k) & 1)
                dst += 1;
        }
        writeLong((int64_t)dst);
    }

    void writeUnsignedShort(unsigned short value) {
        writeByte((value & 0xFF00) >> 8);
        writeByte((value & 0x00FF));
    }

public:
    std::vector<byte_t> bytes;
    unsigned int position = 0;
};

#endif //SERVER_CORE_BYTEBUFFER_H
