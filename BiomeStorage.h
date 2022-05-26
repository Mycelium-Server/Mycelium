#ifndef MYCELIUM_BIOMESTORAGE_H
#define MYCELIUM_BIOMESTORAGE_H

#include <map>
#include <vector>
#include "Biome.h"

class BiomeStorage {
public:
    BiomeStorage() {
        for(int i = 0; i < total_count_of_biomes; i++) {
            Biome biome(i);
            palette.push_back(biome);
            raw_to_biome[biome.get_id()] = biome;
        }
        storage = std::make_shared<BitStorage>(6, 4*4*4);
    }

    void set(int x, int y, int z, const Biome& biome) {
        int id = get_index(biome);
        storage->set(index(x, y, z), id);
    }

    void set(int index, const Biome& biome) {
        int id = get_index(biome);
        storage->set(index, id);
    }

    Biome get(int x, int y, int z) {
        return get(index(x, y, z));
    }

    Biome get(int index) {
        int id = storage->get(index);
        if(storage->get_bits_per_entry() > 8) return raw_to_biome[id];
        else return palette[id];
    }

    void write(ByteBuffer& buf) {
        packet_log << "> ### Biomes ###\n>> Bits Per Entry: "<<storage->get_bits_per_entry()<<"\n";
        buf.writeByte(storage->get_bits_per_entry());
        if(storage->get_bits_per_entry() <= 8) {
            buf.writeVarInt((int)palette.size());
            packet_log << ">> [ARRAY] Palette (Length: "<<palette.size()<<")\n";
            for(Biome biome : palette) {
                packet_log << ">>> "<<biome.get_id()<<"\n";
                buf.writeVarInt(biome.get_id());
            }
        }
        storage->write(buf);

        packet_log << ">> [ARRAY] Data (Length: "<<storage->get_data().size()<<")\n";
        for(long long ll : storage->get_data()) packet_log << ">>> "<<ll<<"\n";
    }

    int get_index(const Biome& biome) {
        if(storage->get_bits_per_entry() > 8) {
            int raw = biome.get_id();
            raw_to_biome[raw] = biome;
            return raw;
        }
        int id = get_index_of(biome);
        if(id == -1) {
            if(palette.size() >= (1 << storage->get_bits_per_entry())) {
                resize(storage->get_bits_per_entry() + 1);
                return get_index(biome);
            }
            palette.push_back(biome);
            id = (int)palette.size() - 1;
        }
        return id;
    }

    int get_data_length() {
        int length = 1;
        if(storage->get_bits_per_entry() <= 8) {
            length += sizeofVarInt(palette.size());
            for(auto& biome : palette) length += sizeofVarInt(biome.get_id());
        }
        return length + storage->get_data_length();
    }

private:
    int get_index_of(const Biome& biome) {
        for(int i = 0; i < palette.size(); i++) {
            if(palette[i].equals(biome)) return i;
        }
        return -1;
    }

    void resize(int new_size) {
        new_size = fix_bits_per_entry(new_size);
        std::shared_ptr<BitStorage> new_storage = std::make_shared<BitStorage>(new_size, 4*4*4);

        for(int i = 0; i < 4*4*4; ++i) {
            int new_id = new_size > 8 ? palette[storage->get(i)].get_id() : storage->get(i);
            new_storage->set(i, new_id);
        }
        storage = new_storage;
    }

    static int index(int x, int y, int z) {
        return y << 4 | z << 2 | x;
    }

    static int fix_bits_per_entry(int new_size) {
        if(new_size < 4) return 4;
        if(new_size < 9) return new_size;
        return 15;
    }

private:
    std::vector<Biome> palette;
    std::map<int, Biome> raw_to_biome;
    std::shared_ptr<BitStorage> storage;

};

#endif //MYCELIUM_BIOMESTORAGE_H
