#pragma once

#include "block.h"

class NoteBlockBlock : public Block {
 public:
  NoteBlockBlock();
  ~NoteBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    INSTRUMENT_HARP = 0,
    INSTRUMENT_BASEDRUM = 1,
    INSTRUMENT_SNARE = 2,
    INSTRUMENT_HAT = 3,
    INSTRUMENT_BASS = 4,
    INSTRUMENT_FLUTE = 5,
    INSTRUMENT_BELL = 6,
    INSTRUMENT_GUITAR = 7,
    INSTRUMENT_CHIME = 8,
    INSTRUMENT_XYLOPHONE = 9,
    INSTRUMENT_IRON_XYLOPHONE = 10,
    INSTRUMENT_COW_BELL = 11,
    INSTRUMENT_DIDGERIDOO = 12,
    INSTRUMENT_BIT = 13,
    INSTRUMENT_BANJO = 14,
    INSTRUMENT_PLING = 15,
  } instrument = INSTRUMENT_HARP;

  enum {
    NOTE_0 = 0,
    NOTE_1 = 1,
    NOTE_2 = 2,
    NOTE_3 = 3,
    NOTE_4 = 4,
    NOTE_5 = 5,
    NOTE_6 = 6,
    NOTE_7 = 7,
    NOTE_8 = 8,
    NOTE_9 = 9,
    NOTE_10 = 10,
    NOTE_11 = 11,
    NOTE_12 = 12,
    NOTE_13 = 13,
    NOTE_14 = 14,
    NOTE_15 = 15,
    NOTE_16 = 16,
    NOTE_17 = 17,
    NOTE_18 = 18,
    NOTE_19 = 19,
    NOTE_20 = 20,
    NOTE_21 = 21,
    NOTE_22 = 22,
    NOTE_23 = 23,
    NOTE_24 = 24,
  } note = NOTE_0;

  enum {
    POWERED_TRUE = 0,
    POWERED_FALSE = 1,
  } powered = POWERED_FALSE;

};
