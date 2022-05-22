#ifndef MYCELIUM_PALETTE_H
#define MYCELIUM_PALETTE_H

#include <cstdint>
#include <map>
#include <cmath>
#include <memory>
#include "BlockState.h"
#include "ByteBuffer.h"

uint32_t get_global_palette_id_from_state(BlockState state) { return (uint32_t)state; }
BlockState get_state_from_global_palette_id(uint32_t value) { return (BlockState)value; }

class Palette {
public:
    virtual uint32_t id_for_state(BlockState state) = 0;
    virtual BlockState state_for_id(uint32_t id) = 0;
    virtual signed char get_bits_per_block() = 0;
    virtual void read(ByteBuffer& buf) = 0;
    virtual void write(ByteBuffer& buf) = 0;
};

class IndirectPalette : public Palette {
    std::map<uint32_t, BlockState> id_to_state;
    std::map<BlockState, uint32_t> state_to_id;
    signed char bits_per_block;

public:
    explicit IndirectPalette(signed char pal_bits_per_block) : bits_per_block(pal_bits_per_block) {}

    uint32_t id_for_state(BlockState state) override { return state_to_id[state]; }
    BlockState state_for_id(uint32_t id) override { return id_to_state[id]; }
    signed char get_bits_per_block() override { return bits_per_block; }

    void read(ByteBuffer& buf) override {
        int length = buf.readVarInt();
        for(int id = 0; id < length; id++) {
            uint32_t state_id = buf.readVarInt();
            BlockState state = get_state_from_global_palette_id(state_id);
            id_to_state[id] = state;
            state_to_id[state] = id;
        }
    }

    void write(ByteBuffer& buf) override {
        buf.writeVarInt((int)id_to_state.size());
        for(auto state : id_to_state) {
            uint32_t state_id = get_global_palette_id_from_state(state.second);
            buf.writeVarInt((int)state_id);
        }
    }

};

class DirectPalette : public Palette {
public:
    DirectPalette() = default;

    uint32_t id_for_state(BlockState state) override {
        return get_global_palette_id_from_state(state);
    }

    BlockState state_for_id(uint32_t id) override {
        return get_state_from_global_palette_id(id);
    }

    signed char get_bits_per_block() override {
        return ceil(log2(total_number_of_states));
    }

    void read(ByteBuffer &buf) override {}
    void write(ByteBuffer &buf) override {}

};

std::shared_ptr<Palette> get_palette(signed char bits_per_block) {
    if(bits_per_block <= 4) return std::make_shared<IndirectPalette>(4);
    if(bits_per_block <= 8) return std::make_shared<IndirectPalette>(bits_per_block);
    return std::make_shared<DirectPalette>();
}

#endif //MYCELIUM_PALETTE_H
