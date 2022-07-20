#pragma once

#include <cstdlib>
#include <string>
#include <utility>
#include <vector>
#include <memory>
#include "ByteBuffer.h"

enum TAG_TypeID {
    Type_TAG_End = 0,
    Type_TAG_Byte = 1,
    Type_TAG_Short = 2,
    Type_TAG_Int = 3,
    Type_TAG_Long = 4,
    Type_TAG_Float = 5,
    Type_TAG_Double = 6,
    Type_TAG_Byte_Array = 7,
    Type_TAG_String = 8,
    Type_TAG_List = 9,
    Type_TAG_Compound = 10,
    Type_TAG_Int_Array = 11,
    Type_TAG_Long_Array = 12,
    Type_TAG_Undefined = 13
};

class NBT_Component {
public:
    NBT_Component() = default;
    explicit NBT_Component(std::string  name) : name(std::move(name)) {}
    NBT_Component(const NBT_Component&) = default;
    NBT_Component(NBT_Component&&) = default;

public:
    virtual ByteBuffer asByteBuffer() = 0;
    virtual ByteBuffer payload() = 0;
    virtual TAG_TypeID getType() = 0;

public:
    std::string name;

};

class TAG_Empty : public NBT_Component {
public:
    ByteBuffer asByteBuffer() override { return{}; }
    ByteBuffer payload() override { return{}; }
    TAG_TypeID getType() override { return Type_TAG_Undefined; }

};

class TAG_End : public NBT_Component {
public:
    ByteBuffer asByteBuffer() override {
        return {1};
    }

    ByteBuffer payload() override {
        return {};
    }

    TAG_TypeID getType() override {
        return Type_TAG_End;
    }

};

class TAG_Byte : public NBT_Component {
public:
    TAG_Byte(const std::string& name, signed char value) : NBT_Component(name), value(value) {}
    explicit TAG_Byte(signed char value) : TAG_Byte("", value) {}

    ByteBuffer asByteBuffer() override {
        unsigned int size = 1 + 2 + name.length() + 1;
        ByteBuffer buf(size);
        buf.writeByte(Type_TAG_Byte); // Type
        buf.writeByte((name.length() & 0xFF00) >> 4); // Length of Name (byte 1)
        buf.writeByte( name.length() & 0xFF        ); // Length of Name (byte 2)
        for(char i : name) buf.writeByte(i); // Name
        buf.writeByte(value); // Payload
        return buf;
    }

    ByteBuffer payload() override {
        ByteBuffer buf(1);
        buf.writeByte(value);
        return buf;
    }

    TAG_TypeID getType() override {
        return Type_TAG_Byte;
    }

public:
    signed char value;
};

class TAG_Short : public NBT_Component {
public:
    TAG_Short(const std::string& name, int16_t value) : NBT_Component(name), value(value) {}
    explicit TAG_Short(int16_t value) : TAG_Short("", value) {}

    ByteBuffer asByteBuffer() override {
        unsigned int size = 1 + 2 + name.length() + 2;
        ByteBuffer buf(size);
        buf.writeByte(Type_TAG_Short); // Type
        buf.writeByte((name.length() & 0xFF00) >> 4); // Length of Name (byte 1)
        buf.writeByte( name.length() & 0xFF        ); // Length of Name (byte 2)
        for(char i : name) buf.writeByte(i); // Name
        buf.writeShort(value); // Payload
        return buf;
    }

    ByteBuffer payload() override {
        ByteBuffer buf(2);
        buf.writeShort(value);
        return buf;
    }

    TAG_TypeID getType() override {
        return Type_TAG_Short;
    }

public:
    int16_t value;
};

class TAG_Int : public NBT_Component {
public:
    TAG_Int(const std::string& name, int32_t value) : NBT_Component(name), value(value) {}
    explicit TAG_Int(int32_t value) : TAG_Int("", value) {}

    ByteBuffer asByteBuffer() override {
        unsigned int size = 1 + 2 + name.length() + 4;
        ByteBuffer buf(size);
        buf.writeByte(Type_TAG_Int); // Type
        buf.writeByte((name.length() & 0xFF00) >> 4); // Length of Name (byte 1)
        buf.writeByte( name.length() & 0xFF        ); // Length of Name (byte 2)
        for(char i : name) buf.writeByte(i); // Name
        buf.writeInt(value); // Payload
        return buf;
    }

    ByteBuffer payload() override {
        ByteBuffer buf(4);
        buf.writeInt(value);
        return buf;
    }

    TAG_TypeID getType() override {
        return Type_TAG_Int;
    }

public:
    int32_t value;
};

class TAG_Long : public NBT_Component {
public:
    TAG_Long(const std::string& name, int64_t value) : NBT_Component(name), value(value) {}
    explicit TAG_Long(int64_t value) : TAG_Long("", value) {}

    ByteBuffer asByteBuffer() override {
        unsigned int size = 1 + 2 + name.length() + 8;
        ByteBuffer buf(size);
        buf.writeByte(Type_TAG_Long); // Type
        buf.writeByte((name.length() & 0xFF00) >> 4); // Length of Name (byte 1)
        buf.writeByte( name.length() & 0xFF        ); // Length of Name (byte 2)
        for(char i : name) buf.writeByte(i); // Name
        buf.writeLong(value); // Payload
        return buf;
    }

    ByteBuffer payload() override {
        ByteBuffer buf(8);
        buf.writeLong(value);
        return buf;
    }

    TAG_TypeID getType() override {
        return Type_TAG_Long;
    }

public:
    int64_t value;
};

class TAG_Float : public NBT_Component {
public:
    TAG_Float(const std::string& name, float value) : NBT_Component(name), value(value) {}
    explicit TAG_Float(float value) : TAG_Float("", value) {}

    ByteBuffer asByteBuffer() override {
        unsigned int size = 1 + 2 + name.length() + 4;
        ByteBuffer buf(size);
        buf.writeByte(Type_TAG_Float); // Type
        buf.writeByte((name.length() & 0xFF00) >> 4); // Length of Name (byte 1)
        buf.writeByte( name.length() & 0xFF        ); // Length of Name (byte 2)
        for(char i : name) buf.writeByte(i); // Name
        buf.writeFloat(value); // Payload
        return buf;
    }

    ByteBuffer payload() override {
        ByteBuffer buf(4);
        buf.writeFloat(value);
        return buf;
    }

    TAG_TypeID getType() override {
        return Type_TAG_Float;
    }

public:
    float value;
};

class TAG_Double : public NBT_Component {
public:
    TAG_Double(const std::string& name, double value) : NBT_Component(name), value(value) {}
    explicit TAG_Double(double value) : TAG_Double("", value) {}

    ByteBuffer asByteBuffer() override {
        unsigned int size = 1 + 2 + name.length() + 8;
        ByteBuffer buf(size);
        buf.writeByte(Type_TAG_Double); // Type
        buf.writeByte((name.length() & 0xFF00) >> 4); // Length of Name (byte 1)
        buf.writeByte( name.length() & 0xFF        ); // Length of Name (byte 2)
        for(char i : name) buf.writeByte(i); // Name
        buf.writeDouble(value); // Payload
        return buf;
    }

    ByteBuffer payload() override {
        ByteBuffer buf(8);
        buf.writeDouble(value);
        return buf;
    }

    TAG_TypeID getType() override {
        return Type_TAG_Double;
    }

public:
    double value;
};

class TAG_Byte_Array : public NBT_Component {
public:
    TAG_Byte_Array(const std::string& name, int32_t size, unsigned char* arr) : NBT_Component(name), array_length(size), array(arr) {}
    explicit TAG_Byte_Array(int32_t size, unsigned char* arr) : TAG_Byte_Array("", size, arr) {}

    ByteBuffer asByteBuffer() override {
        unsigned int size = 1 + 2 + name.length() + 4 + array_length;
        ByteBuffer buf(size);
        buf.writeByte(Type_TAG_Byte_Array); // Type
        buf.writeByte((name.length() & 0xFF00) >> 4); // Length of Name (byte 1)
        buf.writeByte( name.length() & 0xFF        ); // Length of Name (byte 2)
        for(char i : name) buf.writeByte(i); // Name
        buf.writeInt(array_length); // Length prefix
        for(int i = 0; i < array_length; i++) buf.writeByte(array[i]); // Array
        return buf;
    }

    ByteBuffer payload() override {
        unsigned int size = array_length + 4;
        ByteBuffer buf(size);
        buf.writeInt(array_length); // Length prefix
        for(int i = 0; i < array_length; i++) buf.writeByte(array[i]); // Array
        return buf;
    }

    TAG_TypeID getType() override {
        return Type_TAG_Byte_Array;
    }

public:
    int32_t array_length;
    unsigned char* array;
};

class TAG_String : public NBT_Component {
public:
    TAG_String(const std::string& name, std::string value) : NBT_Component(name), value(std::move(value)) {}
    explicit TAG_String(std::string value) : TAG_String("", std::move(value)) {}

    ByteBuffer asByteBuffer() override {
        unsigned int size = 1 + 2 + name.length() + 2 + value.length();
        ByteBuffer buf(size);
        buf.writeByte(Type_TAG_String); // Type
        buf.writeByte((name.length() & 0xFF00) >> 4); // Length of Name (byte 1)
        buf.writeByte( name.length() & 0xFF        ); // Length of Name (byte 2)
        for(char i : name) buf.writeByte(i); // Name
        buf.writeShort((short) value.length()); // Length prefix
        for(char i : value) buf.writeByte(i); // String
        return buf;
    }

    ByteBuffer payload() override {
        unsigned int size = value.length() + 2;
        ByteBuffer buf(size);
        buf.writeShort((short) value.length()); // Length prefix
        for(char i : value) buf.writeByte(i); // String
        return buf;
    }

    TAG_TypeID getType() override {
        return Type_TAG_String;
    }

public:
    std::string value;
};

class TAG_List : public NBT_Component {
public:
    TAG_List(const std::string& name, TAG_TypeID type, std::vector<std::shared_ptr<NBT_Component>> tags)
        : NBT_Component(name), type(type), tags(std::move(tags)) {}
    explicit TAG_List(TAG_TypeID type, std::vector<std::shared_ptr<NBT_Component>> tags) : TAG_List("", type, std::move(tags)) {}

    ByteBuffer asByteBuffer() override {
        unsigned int size = 1 + 2 + name.length() + 1 + 4;
        std::vector<ByteBuffer> payloads;
        for(auto & tag : tags) {
            ByteBuffer payload = tag->payload();
            size += payload.readableBytes();
            payloads.push_back(payload);
        }
        ByteBuffer buf(size);
        buf.writeByte(Type_TAG_List); // Type
        buf.writeByte((name.length() & 0xFF00) >> 4); // Length of Name (byte 1)
        buf.writeByte( name.length() & 0xFF        ); // Length of Name (byte 2)
        for(char i : name) buf.writeByte(i); // Name
        buf.writeByte(type); // Tags Type ID
        buf.writeInt((int)tags.size()); // Length
        for(ByteBuffer payload : payloads) {
            buf.writeBytes(payload);
        }
        return buf;
    }

    ByteBuffer payload() override {
        unsigned int size = 1 + 4;
        std::vector<ByteBuffer> payloads;
        for(auto& tag : tags) {
            ByteBuffer payload = tag->payload();
            size += payload.readableBytes();
            payloads.push_back(payload);
        }
        ByteBuffer buf(size);
        buf.writeByte(type); // Tags Type ID
        buf.writeInt((int)tags.size()); // Length
        for(ByteBuffer payload : payloads) {
            buf.writeBytes(payload);
        }
        return buf;
    }

    TAG_TypeID getType() override {
        return Type_TAG_List;
    }

public:
    TAG_TypeID type;
    std::vector<std::shared_ptr<NBT_Component>> tags;
};

class TAG_Compound : public NBT_Component {
public:
    TAG_Compound(const std::string& name, std::vector<std::shared_ptr<NBT_Component>> tags)
            : NBT_Component(name), tags(std::move(tags)) {}
    explicit TAG_Compound(std::vector<std::shared_ptr<NBT_Component>> tags) : TAG_Compound("", std::move(tags)) {}

    ByteBuffer asByteBuffer() override {
        unsigned int size = 1 + 2 + name.length();
        std::vector<ByteBuffer> payloads;
        for(auto& tag : tags) {
            ByteBuffer payload = tag->asByteBuffer();
            size += payload.readableBytes();
            payloads.push_back(payload);
        }
        {
            TAG_End end;
            ByteBuffer payload = end.asByteBuffer();
            size += payload.readableBytes();
            payloads.push_back(payload);
        }
        ByteBuffer buf(size);
        buf.writeByte(Type_TAG_Compound); // Type
        buf.writeByte((name.length() & 0xFF00) >> 4); // Length of Name (byte 1)
        buf.writeByte( name.length() & 0xFF        ); // Length of Name (byte 2)
        for(char i : name) buf.writeByte(i); // Name
        for(ByteBuffer payload : payloads) {
            buf.writeBytes(payload);
        }
        return buf;
    }

    ByteBuffer payload() override {
        unsigned int size = 0;
        std::vector<ByteBuffer> payloads;
        for(auto& tag : tags) {
            ByteBuffer payload = tag->asByteBuffer();
            size += payload.readableBytes();
            payloads.push_back(payload);
        }
        {
            TAG_End end;
            ByteBuffer payload = end.asByteBuffer();
            size += payload.readableBytes();
            payloads.push_back(payload);
        }
        ByteBuffer buf(size);
        for(ByteBuffer payload : payloads) {
            buf.writeBytes(payload);
        }
        return buf;
    }

    TAG_TypeID getType() override {
        return Type_TAG_Compound;
    }

public:
    std::vector<std::shared_ptr<NBT_Component>> tags;
};

class TAG_Int_Array : public NBT_Component {
public:
    TAG_Int_Array(const std::string& name, int32_t size, int* arr) : NBT_Component(name), array_length(size), array(arr) {}
    explicit TAG_Int_Array(int32_t size, int* arr) : TAG_Int_Array("", size, arr) {}

    ByteBuffer asByteBuffer() override {
        unsigned int size = 1 + 2 + name.length() + 4 + array_length*4;
        ByteBuffer buf(size);
        buf.writeByte(Type_TAG_Int_Array); // Type
        buf.writeByte((name.length() & 0xFF00) >> 4); // Length of Name (byte 1)
        buf.writeByte( name.length() & 0xFF        ); // Length of Name (byte 2)
        for(char i : name) buf.writeByte(i); // Name
        buf.writeInt(array_length); // Length prefix
        for(int i = 0; i < array_length; i++) buf.writeInt(array[i]); // Array
        return buf;
    }

    ByteBuffer payload() override {
        unsigned int size = array_length*4 + 4;
        ByteBuffer buf(size);
        buf.writeInt(array_length); // Length prefix
        for(int i = 0; i < array_length; i++) buf.writeInt(array[i]); // Array
        return buf;
    }

    TAG_TypeID getType() override {
        return Type_TAG_Int_Array;
    }

public:
    int32_t array_length;
    int* array;
};

class TAG_Long_Array : public NBT_Component {
public:
    TAG_Long_Array(const std::string& name, int32_t size, long long* arr) : NBT_Component(name), array_length(size), array(arr) {}
    explicit TAG_Long_Array(int32_t size, long long* arr) : TAG_Long_Array("", size, arr) {}

    ByteBuffer asByteBuffer() override {
        unsigned int size = 1 + 2 + name.length() + 4 + array_length*8;
        ByteBuffer buf(size);
        buf.writeByte(Type_TAG_Long_Array); // Type
        buf.writeByte((name.length() & 0xFF00) >> 4); // Length of Name (byte 1)
        buf.writeByte( name.length() & 0xFF        ); // Length of Name (byte 2)
        for(char i : name) buf.writeByte(i); // Name
        buf.writeInt(array_length); // Length prefix
        for(int i = 0; i < array_length; i++) buf.writeLong(array[i]); // Array
        return buf;
    }

    ByteBuffer payload() override {
        unsigned int size = array_length*8 + 4;
        ByteBuffer buf(size);
        buf.writeInt(array_length); // Length prefix
        for(int i = 0; i < array_length; i++) buf.writeLong(array[i]); // Array
        return buf;
    }

    TAG_TypeID getType() override {
        return Type_TAG_Long_Array;
    }

public:
    int32_t array_length;
    long long* array;
};


typedef std::vector<std::shared_ptr<NBT_Component>> NBT_Components;

std::string nbt_read_name(ByteBuffer& buf);
std::shared_ptr<NBT_Component> nbt_read_raw_data(ByteBuffer& buf, int type);
std::shared_ptr<NBT_Component> read_nbt(ByteBuffer&);