#include "NBT.h"

std::string nbt_read_name(ByteBuffer& buf) {
    int length = buf.readByte() << 8 | buf.readByte();
    std::string name;
    for(int i = 0; i < length; i++) name += (char)buf.readByte();
    return name;
}

std::shared_ptr<NBT_Component> nbt_read_raw_data(ByteBuffer& buf, int type) {
    switch(type) {
        case 1: {
            return std::make_shared<TAG_Byte>(buf.readByte());
        }

        case 2: {
            return std::make_shared<TAG_Short>(buf.readShort());
        }

        case 3: {
            return std::make_shared<TAG_Int>(buf.readInt());
        }

        case 4: {
            return std::make_shared<TAG_Long>(buf.readLong());
        }

        case 5: {
            return std::make_shared<TAG_Float>(buf.readFloat());
        }

        case 6: {
            return std::make_shared<TAG_Double>(buf.readDouble());
        }

        case 7: {
            int length = buf.readInt();
            std::vector<unsigned char> bytes = buf.readBytes(length);
            return std::make_shared<TAG_Byte_Array>(bytes.size(), bytes.data());
        }

        case 8: {
            int length = buf.readByte() << 8 | buf.readByte();
            std::string name;
            for(int i = 0; i < length; i++) name += (char)buf.readByte();
            return std::make_shared<TAG_String>(name);
        }

        case 9: {
            int list_type = buf.readByte();
            int length = buf.readInt();
            NBT_Components components;
            components.resize(length);
            for(int i = 0; i < length; i++) {
                components[i] = nbt_read_raw_data(buf, list_type);
            }
            return std::make_shared<TAG_List>((TAG_TypeID)list_type, components);
        }

        case 10: {
            NBT_Components components;
            while(true) {
                std::shared_ptr<NBT_Component> component = read_nbt(buf);
                if(component->getType() == Type_TAG_End) return std::make_shared<TAG_Compound>(components);
                components.push_back(component);
            }
        }

        case 11: {
            int length = buf.readInt();
            std::vector<int> ints;
            ints.resize(length);
            for(int i = 0; i < length; i++) ints[i] = buf.readInt();
            return std::make_shared<TAG_Int_Array>(ints.size(), ints.data());
        }

        case 12: {
            int length = buf.readInt();
            std::vector<long long> longs;
            longs.resize(length);
            for(int i = 0; i < length; i++) longs[i] = buf.readLong();
            return std::make_shared<TAG_Long_Array>(longs.size(), longs.data());
        }

        default: {
            return nullptr;
        }
    }
}

std::shared_ptr<NBT_Component> read_nbt(ByteBuffer& buf) {
    int type = buf.readByte();
    if(type == 0) return std::make_shared<TAG_End>();
    std::string name = nbt_read_name(buf);
    std::shared_ptr<NBT_Component> component = nbt_read_raw_data(buf, type);
    component->name = name;
    return component;
}

// TODO: json -> nbt impl