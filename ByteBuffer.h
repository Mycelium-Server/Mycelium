#ifndef SERVER_CORE_BYTEBUFFER_H
#define SERVER_CORE_BYTEBUFFER_H

#include <cinttypes>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>

#ifndef WIN32
using std::max;
#endif

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

struct UUID_t {
    uint64_t a = 0;
    uint64_t b = 0;

    explicit UUID_t(const std::string& str) {
        if(str.size() != 32) {
            fprintf(stderr, "UUID_t: uuid string length should be 32\n");
            return;
        }
        char* end;
        a = strtoull(str.substr(00, 16).c_str(), &end, 16);
        b = strtoull(str.substr(16, 32).c_str(), &end, 16);
    }
    UUID_t() = default;
    UUID_t(uint64_t a, uint64_t b) : a(a), b(b) {}
};

union Location_t {
    struct {
        int64_t y : 12;
        int64_t z : 26;
        int64_t x : 26;
    };
    int64_t l;

    explicit Location_t() : l(0) {}
    explicit Location_t(int64_t l) : l(l) {}
    Location_t(int32_t x, int16_t y, int32_t z) : x(x & 0x3FFFFFF), z(z & 0x3FFFFFF), y(y & 0xFFF) {}

    Location_t operator+(Location_t loc) const {
        return {(int32_t)(loc.x+x), (int16_t)(loc.y+y), (int32_t)(loc.z+z) };
    }
};

class ByteBuffer {
public:
    ByteBuffer() = default;
    ByteBuffer(const byte_t* data, unsigned int length) {
        bytes.resize(length);
        reset();
        for(int i = 0; i < length; i++) {
            writeByte(data[i]);
        }
        reset();
    }

    explicit ByteBuffer(const std::string& str) {
        bytes.resize(str.size());
        reset();
        for(char i : str) {
            writeByte(i);
        }
        reset();
    }

    ByteBuffer(unsigned int length) {
        bytes.resize(length);
    }

    byte_t readByte() {
        if(position >= bytes.size()) return 0;
        return bytes[position++];
    }

    bool readBoolean() {
        return readByte();
    }

    signed char readSignedByte() {
        return (char)readByte();
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

    short readShort() {
        auto value = (short)readByte();
        value <<= 8;
        value |= readByte();
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
        writeRawString(value);
    }

    void writeRawString(const std::string& value) {
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
        bytes.resize(max(bytes.size(), buf.bytes.size()+position));
        for(unsigned char byte : buf.bytes) {
            writeByte(byte);
        }
    }

    void writeShort(int16_t value) {
        writeByte((value & 0xFF00) >> 8);
        writeByte(value & 0x00FF);
    }

    int readInt() {
        int32_t i = 0;
        for(int j = 0; j < 4; j++) {
            i <<= 8;
            i |= readByte();
        }
        return i;
    }

    ByteBuffer readBytes(unsigned int bytes) {
        ByteBuffer dst;
        for(int i = 0; i < bytes; i++) {
            dst.bytes.push_back(readByte());
        }
        return dst;
    }

    long long readLong() {
        long long l = 0;
        for(int i = 0; i < 8; i++) {
            l <<= 8;
            l |= readByte();
        }
        return l;
    }

    long readUDLong() {
        long l = 0;
        for(int i = 7; i >= 0; i--) {
            l <<= 8;
            l |= readByte();
        }
        return l;
    }

    void writeLong(int64_t value) {
        writeByte(((uint64_t)value & 0xFF00000000000000) >> (7*8));
        writeByte(((uint64_t)value & 0x00FF000000000000) >> (6*8));
        writeByte(((uint64_t)value & 0x0000FF0000000000) >> (5*8));
        writeByte(((uint64_t)value & 0x000000FF00000000) >> (4*8));
        writeByte(((uint64_t)value & 0x00000000FF000000) >> (3*8));
        writeByte(((uint64_t)value & 0x0000000000FF0000) >> (2*8));
        writeByte(((uint64_t)value & 0x000000000000FF00) >> (1*8));
        writeByte(((uint64_t)value & 0x00000000000000FF));
    }

    unsigned char reverse(unsigned char b) {
        b = (b & 0xF0) >> 4 | (b & 0x0F) << 4;
        b = (b & 0xCC) >> 2 | (b & 0x33) << 2;
        b = (b & 0xAA) >> 1 | (b & 0x55) << 1;
        return b;
    }

    void writeLongUD(int64_t value) {
        writeByte(reverse(((uint64_t)value & 0x00000000000000FF)));
        writeByte(reverse(((uint64_t)value & 0x000000000000FF00) >> (1*8)));
        writeByte(reverse(((uint64_t)value & 0x0000000000FF0000) >> (2*8)));
        writeByte(reverse(((uint64_t)value & 0x00000000FF000000) >> (3*8)));
        writeByte(reverse(((uint64_t)value & 0x000000FF00000000) >> (4*8)));
        writeByte(reverse(((uint64_t)value & 0x0000FF0000000000) >> (5*8)));
        writeByte(reverse(((uint64_t)value & 0x00FF000000000000) >> (6*8)));
        writeByte(reverse(((uint64_t)value & 0xFF00000000000000) >> (7*8)));
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

    double readDouble() {
        uint64_t buf = readLong();
        double x;
        memcpy(&x, &buf, sizeof(double));
        return x;
    }

    float readFloat() {
        uint32_t buf = readInt();
        float x;
        memcpy(&x, &buf, sizeof(float));
        return x;
    }

    void writeUnsignedShort(unsigned short value) {
        writeByte((value & 0xFF00) >> 8);
        writeByte((value & 0x00FF));
    }

    ByteBuffer subBuffer(int start, int end) {
        ByteBuffer dst;
        for(int i = start; i < end; i++) dst.bytes.push_back(bytes[i]);
        return dst;
    }

    ByteBuffer ensureLength(unsigned int length) {
        while(bytes.size() < length) bytes.push_back(0);
        return *this;
    }

    ByteBuffer trim() {
        int start = 0;
        int end = bytes.size() - 1;
        for(; start < bytes.size(); start++) {
            if(bytes[start] != 0) break;
        }
        for(; end >= start; end--) {
            if(bytes[end] != 0) break;
        }
        return subBuffer(start, end+1);
    }

    ByteBuffer trimEnd() {
        int end = bytes.size() - 1;
        for(; end >= 0; end--) {
            if(bytes[end] != 0) break;
        }
        return subBuffer(0, end+1);
    }

    ByteBuffer trimBegin() {
        int start = 0;
        for(; start < bytes.size(); start++) {
            if(bytes[start] != 0) break;
        }
        return subBuffer(start, (int)bytes.size());
    }

    byte_t operator[](int idx) {
        return bytes[idx];
    }

    void discard(const std::vector<char>& symbols) {
        while(true) {
            char b = (char)readByte();
            bool d = false;
            for(char t : symbols) {
                if(t == b) {
                    d = true;
                    break;
                }
            }
            if(!d) break;
        }
        position--;
    }

public:
    std::vector<byte_t> bytes;
    unsigned int position = 0;
};

#endif //SERVER_CORE_BYTEBUFFER_H
