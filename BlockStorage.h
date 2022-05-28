#ifndef MYCELIUM_BLOCKSTORAGE_H
#define MYCELIUM_BLOCKSTORAGE_H

#include "BitStorage.h"
#include <utility>
#include <vector>
#include <map>
#include <memory>

class BlockStorage {
public:
    BlockStorage() {
        Block air;
        palette.push_back(air);
        raw_to_block[minecraft_air] = air;
        storage = create_storage(4);
    }

    void set(int x, int y, int z, const Block& block) {
        int id = get_index(block);
        storage->set(index(x, y, z), id);
    }

    Block get(int x, int y, int z) {
        return get(index(x, y, z));
    }

    Block get(int index) {
        int id = storage->get(index);

        if(storage->get_bits_per_entry() > 8)
            return raw_to_block[(BlockState)id];
        else return palette[id];
    }

    void write(ByteBuffer& buf) {
        packet_log << "> ### Block States ###\n>> Bits Per Entry: " << storage->get_bits_per_entry() << "\n";

        buf.writeByte(storage->get_bits_per_entry());

        if(storage->get_bits_per_entry() <= 8) {
            buf.writeVarInt((int)palette.size());
            packet_log << ">> [ARRAY] Palette (Length: "<<palette.size()<<")\n";
            for (Block& state : palette) {
                packet_log << ">>> "<<state.block_state<<"\n";
                buf.writeVarInt((int)state.block_state);
            }
        }

        packet_log << ">> [ARRAY] Data (Length: "<<storage->get_data().size()<<")\n";
        for(long long ll : storage->get_data()) packet_log << ">>> "<<ll<<"\n";

        storage->write(buf);
    }

    int get_index(const Block& block) {
        raw_to_block[block.block_state] = block;
        if(storage->get_bits_per_entry() > 8) {
            return block.block_state;
        }
        int id = get_index_of(block);
        if(id == -1) {
            if(palette.size() >= (1 << storage->get_bits_per_entry())) {
                resize(storage->get_bits_per_entry() + 1);
                return get_index(block);
            }
            palette.push_back(block);
            id = (int)palette.size() - 1;
        }
        return id;
    }

    void resize(int new_size) {
        new_size = fix_bits_per_entry(new_size);
        std::shared_ptr<BitStorage> new_storage = create_storage(new_size);

        for(int i = 0; i < 16*16*16; ++i) {
            int new_id = new_size > 8 ? (int)raw_to_block[(BlockState)storage->get(i)].block_state : storage->get(i);
            new_storage->set(i, new_id);
        }

        this->storage = new_storage;
    }

    int get_data_length() {
        int length = 1;
        if(storage->get_bits_per_entry() <= 8) {
            length += sizeofVarInt(palette.size());
            for(auto& state : palette) {
                length += sizeofVarInt((int)state.block_state);
            }
        }
        return length + storage->get_data_length();
    }

private:
    BlockStorage(std::vector<Block> palette, std::map<BlockState, Block> raw_to_block, std::shared_ptr<BitStorage>  storage)
        : palette(std::move(palette)), raw_to_block(std::move(raw_to_block)), storage(std::move(storage)) {}

    int get_index_of(const Block& block) {
        for(int i = 0; i < palette.size(); i++) {
            if(palette[i].equals(block)) return i;
        }
        return -1;
    }

    std::shared_ptr<BitStorage> create_storage(int bits) {
        return std::make_shared<BitStorage>(bits, 16*16*16);
    }

    static int index(int x, int y, int z) {
        return y << 8 | z << 4 | x;
    }

    static int fix_bits_per_entry(int new_size) {
        if(new_size < 4) return 4;
        if(new_size < 9) return new_size;
        return 15;
    }

private:
    std::vector<Block> palette;
    std::map<BlockState, Block> raw_to_block;
    std::shared_ptr<BitStorage> storage;

};

#endif //MYCELIUM_BLOCKSTORAGE_H
