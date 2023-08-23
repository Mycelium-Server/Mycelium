/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#include "block_registry.h"

#include "nether_brick_fence_block.h"
#include "nether_brick_slab_block.h"
#include "nether_brick_stairs_block.h"
#include "nether_brick_wall_block.h"
#include "nether_bricks_block.h"
#include "nether_gold_ore_block.h"
#include "nether_portal_block.h"
#include "nether_quartz_ore_block.h"
#include "nether_sprouts_block.h"
#include "nether_wart_block.h"
#include "nether_wart_block_block.h"
#include "netherite_block_block.h"
#include "netherrack_block.h"
#include "note_block_block.h"

void BlockRegistry::generateN() {

  { // ID: 116
    std::shared_ptr<NetherGoldOreBlock> block = std::make_shared<NetherGoldOreBlock>();
    registry[116] = block;
  }

  { // ID: 479
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[479] = block;
  }

  { // ID: 480
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[480] = block;
  }

  { // ID: 481
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[481] = block;
  }

  { // ID: 482
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[482] = block;
  }

  { // ID: 483
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[483] = block;
  }

  { // ID: 484
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[484] = block;
  }

  { // ID: 485
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[485] = block;
  }

  { // ID: 486
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[486] = block;
  }

  { // ID: 487
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[487] = block;
  }

  { // ID: 488
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[488] = block;
  }

  { // ID: 489
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[489] = block;
  }

  { // ID: 490
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[490] = block;
  }

  { // ID: 491
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[491] = block;
  }

  { // ID: 492
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[492] = block;
  }

  { // ID: 493
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[493] = block;
  }

  { // ID: 494
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[494] = block;
  }

  { // ID: 495
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[495] = block;
  }

  { // ID: 496
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[496] = block;
  }

  { // ID: 497
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[497] = block;
  }

  { // ID: 498
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[498] = block;
  }

  { // ID: 499
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[499] = block;
  }

  { // ID: 500
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[500] = block;
  }

  { // ID: 501
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[501] = block;
  }

  { // ID: 502
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[502] = block;
  }

  { // ID: 503
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[503] = block;
  }

  { // ID: 504
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[504] = block;
  }

  { // ID: 505
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[505] = block;
  }

  { // ID: 506
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[506] = block;
  }

  { // ID: 507
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[507] = block;
  }

  { // ID: 508
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[508] = block;
  }

  { // ID: 509
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[509] = block;
  }

  { // ID: 510
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[510] = block;
  }

  { // ID: 511
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[511] = block;
  }

  { // ID: 512
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[512] = block;
  }

  { // ID: 513
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[513] = block;
  }

  { // ID: 514
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[514] = block;
  }

  { // ID: 515
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[515] = block;
  }

  { // ID: 516
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[516] = block;
  }

  { // ID: 517
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[517] = block;
  }

  { // ID: 518
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[518] = block;
  }

  { // ID: 519
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[519] = block;
  }

  { // ID: 520
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[520] = block;
  }

  { // ID: 521
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[521] = block;
  }

  { // ID: 522
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[522] = block;
  }

  { // ID: 523
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[523] = block;
  }

  { // ID: 524
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[524] = block;
  }

  { // ID: 525
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[525] = block;
  }

  { // ID: 526
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[526] = block;
  }

  { // ID: 527
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[527] = block;
  }

  { // ID: 528
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HARP;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[528] = block;
  }

  { // ID: 529
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[529] = block;
  }

  { // ID: 530
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[530] = block;
  }

  { // ID: 531
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[531] = block;
  }

  { // ID: 532
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[532] = block;
  }

  { // ID: 533
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[533] = block;
  }

  { // ID: 534
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[534] = block;
  }

  { // ID: 535
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[535] = block;
  }

  { // ID: 536
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[536] = block;
  }

  { // ID: 537
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[537] = block;
  }

  { // ID: 538
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[538] = block;
  }

  { // ID: 539
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[539] = block;
  }

  { // ID: 540
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[540] = block;
  }

  { // ID: 541
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[541] = block;
  }

  { // ID: 542
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[542] = block;
  }

  { // ID: 543
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[543] = block;
  }

  { // ID: 544
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[544] = block;
  }

  { // ID: 545
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[545] = block;
  }

  { // ID: 546
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[546] = block;
  }

  { // ID: 547
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[547] = block;
  }

  { // ID: 548
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[548] = block;
  }

  { // ID: 549
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[549] = block;
  }

  { // ID: 550
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[550] = block;
  }

  { // ID: 551
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[551] = block;
  }

  { // ID: 552
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[552] = block;
  }

  { // ID: 553
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[553] = block;
  }

  { // ID: 554
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[554] = block;
  }

  { // ID: 555
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[555] = block;
  }

  { // ID: 556
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[556] = block;
  }

  { // ID: 557
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[557] = block;
  }

  { // ID: 558
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[558] = block;
  }

  { // ID: 559
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[559] = block;
  }

  { // ID: 560
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[560] = block;
  }

  { // ID: 561
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[561] = block;
  }

  { // ID: 562
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[562] = block;
  }

  { // ID: 563
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[563] = block;
  }

  { // ID: 564
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[564] = block;
  }

  { // ID: 565
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[565] = block;
  }

  { // ID: 566
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[566] = block;
  }

  { // ID: 567
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[567] = block;
  }

  { // ID: 568
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[568] = block;
  }

  { // ID: 569
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[569] = block;
  }

  { // ID: 570
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[570] = block;
  }

  { // ID: 571
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[571] = block;
  }

  { // ID: 572
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[572] = block;
  }

  { // ID: 573
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[573] = block;
  }

  { // ID: 574
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[574] = block;
  }

  { // ID: 575
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[575] = block;
  }

  { // ID: 576
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[576] = block;
  }

  { // ID: 577
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[577] = block;
  }

  { // ID: 578
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASEDRUM;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[578] = block;
  }

  { // ID: 579
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[579] = block;
  }

  { // ID: 580
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[580] = block;
  }

  { // ID: 581
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[581] = block;
  }

  { // ID: 582
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[582] = block;
  }

  { // ID: 583
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[583] = block;
  }

  { // ID: 584
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[584] = block;
  }

  { // ID: 585
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[585] = block;
  }

  { // ID: 586
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[586] = block;
  }

  { // ID: 587
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[587] = block;
  }

  { // ID: 588
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[588] = block;
  }

  { // ID: 589
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[589] = block;
  }

  { // ID: 590
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[590] = block;
  }

  { // ID: 591
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[591] = block;
  }

  { // ID: 592
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[592] = block;
  }

  { // ID: 593
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[593] = block;
  }

  { // ID: 594
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[594] = block;
  }

  { // ID: 595
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[595] = block;
  }

  { // ID: 596
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[596] = block;
  }

  { // ID: 597
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[597] = block;
  }

  { // ID: 598
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[598] = block;
  }

  { // ID: 599
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[599] = block;
  }

  { // ID: 600
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[600] = block;
  }

  { // ID: 601
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[601] = block;
  }

  { // ID: 602
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[602] = block;
  }

  { // ID: 603
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[603] = block;
  }

  { // ID: 604
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[604] = block;
  }

  { // ID: 605
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[605] = block;
  }

  { // ID: 606
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[606] = block;
  }

  { // ID: 607
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[607] = block;
  }

  { // ID: 608
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[608] = block;
  }

  { // ID: 609
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[609] = block;
  }

  { // ID: 610
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[610] = block;
  }

  { // ID: 611
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[611] = block;
  }

  { // ID: 612
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[612] = block;
  }

  { // ID: 613
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[613] = block;
  }

  { // ID: 614
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[614] = block;
  }

  { // ID: 615
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[615] = block;
  }

  { // ID: 616
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[616] = block;
  }

  { // ID: 617
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[617] = block;
  }

  { // ID: 618
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[618] = block;
  }

  { // ID: 619
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[619] = block;
  }

  { // ID: 620
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[620] = block;
  }

  { // ID: 621
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[621] = block;
  }

  { // ID: 622
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[622] = block;
  }

  { // ID: 623
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[623] = block;
  }

  { // ID: 624
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[624] = block;
  }

  { // ID: 625
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[625] = block;
  }

  { // ID: 626
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[626] = block;
  }

  { // ID: 627
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[627] = block;
  }

  { // ID: 628
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_SNARE;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[628] = block;
  }

  { // ID: 629
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[629] = block;
  }

  { // ID: 630
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[630] = block;
  }

  { // ID: 631
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[631] = block;
  }

  { // ID: 632
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[632] = block;
  }

  { // ID: 633
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[633] = block;
  }

  { // ID: 634
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[634] = block;
  }

  { // ID: 635
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[635] = block;
  }

  { // ID: 636
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[636] = block;
  }

  { // ID: 637
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[637] = block;
  }

  { // ID: 638
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[638] = block;
  }

  { // ID: 639
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[639] = block;
  }

  { // ID: 640
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[640] = block;
  }

  { // ID: 641
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[641] = block;
  }

  { // ID: 642
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[642] = block;
  }

  { // ID: 643
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[643] = block;
  }

  { // ID: 644
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[644] = block;
  }

  { // ID: 645
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[645] = block;
  }

  { // ID: 646
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[646] = block;
  }

  { // ID: 647
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[647] = block;
  }

  { // ID: 648
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[648] = block;
  }

  { // ID: 649
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[649] = block;
  }

  { // ID: 650
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[650] = block;
  }

  { // ID: 651
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[651] = block;
  }

  { // ID: 652
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[652] = block;
  }

  { // ID: 653
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[653] = block;
  }

  { // ID: 654
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[654] = block;
  }

  { // ID: 655
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[655] = block;
  }

  { // ID: 656
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[656] = block;
  }

  { // ID: 657
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[657] = block;
  }

  { // ID: 658
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[658] = block;
  }

  { // ID: 659
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[659] = block;
  }

  { // ID: 660
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[660] = block;
  }

  { // ID: 661
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[661] = block;
  }

  { // ID: 662
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[662] = block;
  }

  { // ID: 663
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[663] = block;
  }

  { // ID: 664
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[664] = block;
  }

  { // ID: 665
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[665] = block;
  }

  { // ID: 666
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[666] = block;
  }

  { // ID: 667
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[667] = block;
  }

  { // ID: 668
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[668] = block;
  }

  { // ID: 669
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[669] = block;
  }

  { // ID: 670
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[670] = block;
  }

  { // ID: 671
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[671] = block;
  }

  { // ID: 672
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[672] = block;
  }

  { // ID: 673
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[673] = block;
  }

  { // ID: 674
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[674] = block;
  }

  { // ID: 675
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[675] = block;
  }

  { // ID: 676
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[676] = block;
  }

  { // ID: 677
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[677] = block;
  }

  { // ID: 678
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_HAT;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[678] = block;
  }

  { // ID: 679
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[679] = block;
  }

  { // ID: 680
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[680] = block;
  }

  { // ID: 681
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[681] = block;
  }

  { // ID: 682
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[682] = block;
  }

  { // ID: 683
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[683] = block;
  }

  { // ID: 684
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[684] = block;
  }

  { // ID: 685
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[685] = block;
  }

  { // ID: 686
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[686] = block;
  }

  { // ID: 687
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[687] = block;
  }

  { // ID: 688
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[688] = block;
  }

  { // ID: 689
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[689] = block;
  }

  { // ID: 690
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[690] = block;
  }

  { // ID: 691
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[691] = block;
  }

  { // ID: 692
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[692] = block;
  }

  { // ID: 693
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[693] = block;
  }

  { // ID: 694
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[694] = block;
  }

  { // ID: 695
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[695] = block;
  }

  { // ID: 696
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[696] = block;
  }

  { // ID: 697
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[697] = block;
  }

  { // ID: 698
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[698] = block;
  }

  { // ID: 699
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[699] = block;
  }

  { // ID: 700
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[700] = block;
  }

  { // ID: 701
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[701] = block;
  }

  { // ID: 702
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[702] = block;
  }

  { // ID: 703
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[703] = block;
  }

  { // ID: 704
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[704] = block;
  }

  { // ID: 705
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[705] = block;
  }

  { // ID: 706
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[706] = block;
  }

  { // ID: 707
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[707] = block;
  }

  { // ID: 708
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[708] = block;
  }

  { // ID: 709
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[709] = block;
  }

  { // ID: 710
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[710] = block;
  }

  { // ID: 711
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[711] = block;
  }

  { // ID: 712
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[712] = block;
  }

  { // ID: 713
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[713] = block;
  }

  { // ID: 714
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[714] = block;
  }

  { // ID: 715
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[715] = block;
  }

  { // ID: 716
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[716] = block;
  }

  { // ID: 717
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[717] = block;
  }

  { // ID: 718
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[718] = block;
  }

  { // ID: 719
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[719] = block;
  }

  { // ID: 720
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[720] = block;
  }

  { // ID: 721
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[721] = block;
  }

  { // ID: 722
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[722] = block;
  }

  { // ID: 723
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[723] = block;
  }

  { // ID: 724
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[724] = block;
  }

  { // ID: 725
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[725] = block;
  }

  { // ID: 726
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[726] = block;
  }

  { // ID: 727
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[727] = block;
  }

  { // ID: 728
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BASS;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[728] = block;
  }

  { // ID: 729
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[729] = block;
  }

  { // ID: 730
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[730] = block;
  }

  { // ID: 731
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[731] = block;
  }

  { // ID: 732
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[732] = block;
  }

  { // ID: 733
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[733] = block;
  }

  { // ID: 734
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[734] = block;
  }

  { // ID: 735
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[735] = block;
  }

  { // ID: 736
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[736] = block;
  }

  { // ID: 737
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[737] = block;
  }

  { // ID: 738
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[738] = block;
  }

  { // ID: 739
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[739] = block;
  }

  { // ID: 740
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[740] = block;
  }

  { // ID: 741
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[741] = block;
  }

  { // ID: 742
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[742] = block;
  }

  { // ID: 743
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[743] = block;
  }

  { // ID: 744
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[744] = block;
  }

  { // ID: 745
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[745] = block;
  }

  { // ID: 746
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[746] = block;
  }

  { // ID: 747
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[747] = block;
  }

  { // ID: 748
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[748] = block;
  }

  { // ID: 749
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[749] = block;
  }

  { // ID: 750
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[750] = block;
  }

  { // ID: 751
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[751] = block;
  }

  { // ID: 752
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[752] = block;
  }

  { // ID: 753
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[753] = block;
  }

  { // ID: 754
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[754] = block;
  }

  { // ID: 755
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[755] = block;
  }

  { // ID: 756
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[756] = block;
  }

  { // ID: 757
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[757] = block;
  }

  { // ID: 758
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[758] = block;
  }

  { // ID: 759
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[759] = block;
  }

  { // ID: 760
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[760] = block;
  }

  { // ID: 761
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[761] = block;
  }

  { // ID: 762
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[762] = block;
  }

  { // ID: 763
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[763] = block;
  }

  { // ID: 764
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[764] = block;
  }

  { // ID: 765
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[765] = block;
  }

  { // ID: 766
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[766] = block;
  }

  { // ID: 767
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[767] = block;
  }

  { // ID: 768
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[768] = block;
  }

  { // ID: 769
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[769] = block;
  }

  { // ID: 770
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[770] = block;
  }

  { // ID: 771
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[771] = block;
  }

  { // ID: 772
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[772] = block;
  }

  { // ID: 773
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[773] = block;
  }

  { // ID: 774
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[774] = block;
  }

  { // ID: 775
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[775] = block;
  }

  { // ID: 776
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[776] = block;
  }

  { // ID: 777
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[777] = block;
  }

  { // ID: 778
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_FLUTE;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[778] = block;
  }

  { // ID: 779
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[779] = block;
  }

  { // ID: 780
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[780] = block;
  }

  { // ID: 781
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[781] = block;
  }

  { // ID: 782
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[782] = block;
  }

  { // ID: 783
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[783] = block;
  }

  { // ID: 784
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[784] = block;
  }

  { // ID: 785
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[785] = block;
  }

  { // ID: 786
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[786] = block;
  }

  { // ID: 787
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[787] = block;
  }

  { // ID: 788
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[788] = block;
  }

  { // ID: 789
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[789] = block;
  }

  { // ID: 790
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[790] = block;
  }

  { // ID: 791
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[791] = block;
  }

  { // ID: 792
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[792] = block;
  }

  { // ID: 793
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[793] = block;
  }

  { // ID: 794
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[794] = block;
  }

  { // ID: 795
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[795] = block;
  }

  { // ID: 796
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[796] = block;
  }

  { // ID: 797
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[797] = block;
  }

  { // ID: 798
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[798] = block;
  }

  { // ID: 799
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[799] = block;
  }

  { // ID: 800
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[800] = block;
  }

  { // ID: 801
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[801] = block;
  }

  { // ID: 802
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[802] = block;
  }

  { // ID: 803
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[803] = block;
  }

  { // ID: 804
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[804] = block;
  }

  { // ID: 805
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[805] = block;
  }

  { // ID: 806
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[806] = block;
  }

  { // ID: 807
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[807] = block;
  }

  { // ID: 808
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[808] = block;
  }

  { // ID: 809
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[809] = block;
  }

  { // ID: 810
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[810] = block;
  }

  { // ID: 811
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[811] = block;
  }

  { // ID: 812
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[812] = block;
  }

  { // ID: 813
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[813] = block;
  }

  { // ID: 814
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[814] = block;
  }

  { // ID: 815
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[815] = block;
  }

  { // ID: 816
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[816] = block;
  }

  { // ID: 817
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[817] = block;
  }

  { // ID: 818
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[818] = block;
  }

  { // ID: 819
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[819] = block;
  }

  { // ID: 820
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[820] = block;
  }

  { // ID: 821
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[821] = block;
  }

  { // ID: 822
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[822] = block;
  }

  { // ID: 823
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[823] = block;
  }

  { // ID: 824
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[824] = block;
  }

  { // ID: 825
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[825] = block;
  }

  { // ID: 826
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[826] = block;
  }

  { // ID: 827
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[827] = block;
  }

  { // ID: 828
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BELL;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[828] = block;
  }

  { // ID: 829
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[829] = block;
  }

  { // ID: 830
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[830] = block;
  }

  { // ID: 831
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[831] = block;
  }

  { // ID: 832
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[832] = block;
  }

  { // ID: 833
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[833] = block;
  }

  { // ID: 834
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[834] = block;
  }

  { // ID: 835
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[835] = block;
  }

  { // ID: 836
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[836] = block;
  }

  { // ID: 837
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[837] = block;
  }

  { // ID: 838
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[838] = block;
  }

  { // ID: 839
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[839] = block;
  }

  { // ID: 840
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[840] = block;
  }

  { // ID: 841
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[841] = block;
  }

  { // ID: 842
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[842] = block;
  }

  { // ID: 843
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[843] = block;
  }

  { // ID: 844
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[844] = block;
  }

  { // ID: 845
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[845] = block;
  }

  { // ID: 846
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[846] = block;
  }

  { // ID: 847
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[847] = block;
  }

  { // ID: 848
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[848] = block;
  }

  { // ID: 849
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[849] = block;
  }

  { // ID: 850
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[850] = block;
  }

  { // ID: 851
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[851] = block;
  }

  { // ID: 852
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[852] = block;
  }

  { // ID: 853
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[853] = block;
  }

  { // ID: 854
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[854] = block;
  }

  { // ID: 855
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[855] = block;
  }

  { // ID: 856
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[856] = block;
  }

  { // ID: 857
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[857] = block;
  }

  { // ID: 858
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[858] = block;
  }

  { // ID: 859
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[859] = block;
  }

  { // ID: 860
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[860] = block;
  }

  { // ID: 861
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[861] = block;
  }

  { // ID: 862
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[862] = block;
  }

  { // ID: 863
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[863] = block;
  }

  { // ID: 864
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[864] = block;
  }

  { // ID: 865
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[865] = block;
  }

  { // ID: 866
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[866] = block;
  }

  { // ID: 867
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[867] = block;
  }

  { // ID: 868
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[868] = block;
  }

  { // ID: 869
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[869] = block;
  }

  { // ID: 870
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[870] = block;
  }

  { // ID: 871
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[871] = block;
  }

  { // ID: 872
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[872] = block;
  }

  { // ID: 873
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[873] = block;
  }

  { // ID: 874
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[874] = block;
  }

  { // ID: 875
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[875] = block;
  }

  { // ID: 876
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[876] = block;
  }

  { // ID: 877
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[877] = block;
  }

  { // ID: 878
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_GUITAR;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[878] = block;
  }

  { // ID: 879
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[879] = block;
  }

  { // ID: 880
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[880] = block;
  }

  { // ID: 881
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[881] = block;
  }

  { // ID: 882
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[882] = block;
  }

  { // ID: 883
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[883] = block;
  }

  { // ID: 884
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[884] = block;
  }

  { // ID: 885
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[885] = block;
  }

  { // ID: 886
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[886] = block;
  }

  { // ID: 887
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[887] = block;
  }

  { // ID: 888
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[888] = block;
  }

  { // ID: 889
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[889] = block;
  }

  { // ID: 890
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[890] = block;
  }

  { // ID: 891
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[891] = block;
  }

  { // ID: 892
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[892] = block;
  }

  { // ID: 893
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[893] = block;
  }

  { // ID: 894
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[894] = block;
  }

  { // ID: 895
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[895] = block;
  }

  { // ID: 896
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[896] = block;
  }

  { // ID: 897
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[897] = block;
  }

  { // ID: 898
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[898] = block;
  }

  { // ID: 899
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[899] = block;
  }

  { // ID: 900
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[900] = block;
  }

  { // ID: 901
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[901] = block;
  }

  { // ID: 902
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[902] = block;
  }

  { // ID: 903
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[903] = block;
  }

  { // ID: 904
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[904] = block;
  }

  { // ID: 905
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[905] = block;
  }

  { // ID: 906
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[906] = block;
  }

  { // ID: 907
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[907] = block;
  }

  { // ID: 908
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[908] = block;
  }

  { // ID: 909
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[909] = block;
  }

  { // ID: 910
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[910] = block;
  }

  { // ID: 911
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[911] = block;
  }

  { // ID: 912
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[912] = block;
  }

  { // ID: 913
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[913] = block;
  }

  { // ID: 914
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[914] = block;
  }

  { // ID: 915
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[915] = block;
  }

  { // ID: 916
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[916] = block;
  }

  { // ID: 917
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[917] = block;
  }

  { // ID: 918
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[918] = block;
  }

  { // ID: 919
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[919] = block;
  }

  { // ID: 920
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[920] = block;
  }

  { // ID: 921
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[921] = block;
  }

  { // ID: 922
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[922] = block;
  }

  { // ID: 923
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[923] = block;
  }

  { // ID: 924
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[924] = block;
  }

  { // ID: 925
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[925] = block;
  }

  { // ID: 926
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[926] = block;
  }

  { // ID: 927
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[927] = block;
  }

  { // ID: 928
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_CHIME;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[928] = block;
  }

  { // ID: 929
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[929] = block;
  }

  { // ID: 930
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[930] = block;
  }

  { // ID: 931
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[931] = block;
  }

  { // ID: 932
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[932] = block;
  }

  { // ID: 933
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[933] = block;
  }

  { // ID: 934
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[934] = block;
  }

  { // ID: 935
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[935] = block;
  }

  { // ID: 936
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[936] = block;
  }

  { // ID: 937
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[937] = block;
  }

  { // ID: 938
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[938] = block;
  }

  { // ID: 939
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[939] = block;
  }

  { // ID: 940
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[940] = block;
  }

  { // ID: 941
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[941] = block;
  }

  { // ID: 942
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[942] = block;
  }

  { // ID: 943
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[943] = block;
  }

  { // ID: 944
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[944] = block;
  }

  { // ID: 945
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[945] = block;
  }

  { // ID: 946
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[946] = block;
  }

  { // ID: 947
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[947] = block;
  }

  { // ID: 948
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[948] = block;
  }

  { // ID: 949
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[949] = block;
  }

  { // ID: 950
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[950] = block;
  }

  { // ID: 951
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[951] = block;
  }

  { // ID: 952
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[952] = block;
  }

  { // ID: 953
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[953] = block;
  }

  { // ID: 954
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[954] = block;
  }

  { // ID: 955
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[955] = block;
  }

  { // ID: 956
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[956] = block;
  }

  { // ID: 957
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[957] = block;
  }

  { // ID: 958
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[958] = block;
  }

  { // ID: 959
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[959] = block;
  }

  { // ID: 960
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[960] = block;
  }

  { // ID: 961
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[961] = block;
  }

  { // ID: 962
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[962] = block;
  }

  { // ID: 963
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[963] = block;
  }

  { // ID: 964
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[964] = block;
  }

  { // ID: 965
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[965] = block;
  }

  { // ID: 966
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[966] = block;
  }

  { // ID: 967
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[967] = block;
  }

  { // ID: 968
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[968] = block;
  }

  { // ID: 969
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[969] = block;
  }

  { // ID: 970
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[970] = block;
  }

  { // ID: 971
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[971] = block;
  }

  { // ID: 972
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[972] = block;
  }

  { // ID: 973
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[973] = block;
  }

  { // ID: 974
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[974] = block;
  }

  { // ID: 975
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[975] = block;
  }

  { // ID: 976
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[976] = block;
  }

  { // ID: 977
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[977] = block;
  }

  { // ID: 978
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[978] = block;
  }

  { // ID: 979
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[979] = block;
  }

  { // ID: 980
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[980] = block;
  }

  { // ID: 981
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[981] = block;
  }

  { // ID: 982
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[982] = block;
  }

  { // ID: 983
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[983] = block;
  }

  { // ID: 984
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[984] = block;
  }

  { // ID: 985
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[985] = block;
  }

  { // ID: 986
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[986] = block;
  }

  { // ID: 987
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[987] = block;
  }

  { // ID: 988
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[988] = block;
  }

  { // ID: 989
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[989] = block;
  }

  { // ID: 990
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[990] = block;
  }

  { // ID: 991
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[991] = block;
  }

  { // ID: 992
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[992] = block;
  }

  { // ID: 993
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[993] = block;
  }

  { // ID: 994
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[994] = block;
  }

  { // ID: 995
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[995] = block;
  }

  { // ID: 996
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[996] = block;
  }

  { // ID: 997
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[997] = block;
  }

  { // ID: 998
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[998] = block;
  }

  { // ID: 999
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[999] = block;
  }

  { // ID: 1000
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1000] = block;
  }

  { // ID: 1001
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1001] = block;
  }

  { // ID: 1002
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1002] = block;
  }

  { // ID: 1003
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1003] = block;
  }

  { // ID: 1004
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1004] = block;
  }

  { // ID: 1005
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1005] = block;
  }

  { // ID: 1006
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1006] = block;
  }

  { // ID: 1007
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1007] = block;
  }

  { // ID: 1008
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1008] = block;
  }

  { // ID: 1009
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1009] = block;
  }

  { // ID: 1010
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1010] = block;
  }

  { // ID: 1011
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1011] = block;
  }

  { // ID: 1012
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1012] = block;
  }

  { // ID: 1013
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1013] = block;
  }

  { // ID: 1014
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1014] = block;
  }

  { // ID: 1015
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1015] = block;
  }

  { // ID: 1016
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1016] = block;
  }

  { // ID: 1017
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1017] = block;
  }

  { // ID: 1018
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1018] = block;
  }

  { // ID: 1019
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1019] = block;
  }

  { // ID: 1020
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1020] = block;
  }

  { // ID: 1021
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1021] = block;
  }

  { // ID: 1022
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1022] = block;
  }

  { // ID: 1023
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1023] = block;
  }

  { // ID: 1024
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1024] = block;
  }

  { // ID: 1025
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1025] = block;
  }

  { // ID: 1026
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1026] = block;
  }

  { // ID: 1027
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1027] = block;
  }

  { // ID: 1028
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_IRON_XYLOPHONE;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1028] = block;
  }

  { // ID: 1029
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1029] = block;
  }

  { // ID: 1030
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1030] = block;
  }

  { // ID: 1031
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1031] = block;
  }

  { // ID: 1032
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1032] = block;
  }

  { // ID: 1033
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1033] = block;
  }

  { // ID: 1034
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1034] = block;
  }

  { // ID: 1035
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1035] = block;
  }

  { // ID: 1036
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1036] = block;
  }

  { // ID: 1037
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1037] = block;
  }

  { // ID: 1038
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1038] = block;
  }

  { // ID: 1039
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1039] = block;
  }

  { // ID: 1040
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1040] = block;
  }

  { // ID: 1041
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1041] = block;
  }

  { // ID: 1042
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1042] = block;
  }

  { // ID: 1043
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1043] = block;
  }

  { // ID: 1044
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1044] = block;
  }

  { // ID: 1045
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1045] = block;
  }

  { // ID: 1046
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1046] = block;
  }

  { // ID: 1047
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1047] = block;
  }

  { // ID: 1048
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1048] = block;
  }

  { // ID: 1049
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1049] = block;
  }

  { // ID: 1050
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1050] = block;
  }

  { // ID: 1051
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1051] = block;
  }

  { // ID: 1052
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1052] = block;
  }

  { // ID: 1053
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1053] = block;
  }

  { // ID: 1054
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1054] = block;
  }

  { // ID: 1055
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1055] = block;
  }

  { // ID: 1056
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1056] = block;
  }

  { // ID: 1057
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1057] = block;
  }

  { // ID: 1058
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1058] = block;
  }

  { // ID: 1059
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1059] = block;
  }

  { // ID: 1060
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1060] = block;
  }

  { // ID: 1061
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1061] = block;
  }

  { // ID: 1062
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1062] = block;
  }

  { // ID: 1063
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1063] = block;
  }

  { // ID: 1064
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1064] = block;
  }

  { // ID: 1065
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1065] = block;
  }

  { // ID: 1066
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1066] = block;
  }

  { // ID: 1067
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1067] = block;
  }

  { // ID: 1068
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1068] = block;
  }

  { // ID: 1069
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1069] = block;
  }

  { // ID: 1070
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1070] = block;
  }

  { // ID: 1071
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1071] = block;
  }

  { // ID: 1072
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1072] = block;
  }

  { // ID: 1073
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1073] = block;
  }

  { // ID: 1074
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1074] = block;
  }

  { // ID: 1075
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1075] = block;
  }

  { // ID: 1076
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1076] = block;
  }

  { // ID: 1077
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1077] = block;
  }

  { // ID: 1078
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_COW_BELL;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1078] = block;
  }

  { // ID: 1079
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1079] = block;
  }

  { // ID: 1080
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1080] = block;
  }

  { // ID: 1081
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1081] = block;
  }

  { // ID: 1082
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1082] = block;
  }

  { // ID: 1083
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1083] = block;
  }

  { // ID: 1084
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1084] = block;
  }

  { // ID: 1085
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1085] = block;
  }

  { // ID: 1086
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1086] = block;
  }

  { // ID: 1087
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1087] = block;
  }

  { // ID: 1088
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1088] = block;
  }

  { // ID: 1089
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1089] = block;
  }

  { // ID: 1090
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1090] = block;
  }

  { // ID: 1091
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1091] = block;
  }

  { // ID: 1092
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1092] = block;
  }

  { // ID: 1093
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1093] = block;
  }

  { // ID: 1094
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1094] = block;
  }

  { // ID: 1095
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1095] = block;
  }

  { // ID: 1096
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1096] = block;
  }

  { // ID: 1097
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1097] = block;
  }

  { // ID: 1098
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1098] = block;
  }

  { // ID: 1099
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1099] = block;
  }

  { // ID: 1100
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1100] = block;
  }

  { // ID: 1101
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1101] = block;
  }

  { // ID: 1102
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1102] = block;
  }

  { // ID: 1103
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1103] = block;
  }

  { // ID: 1104
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1104] = block;
  }

  { // ID: 1105
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1105] = block;
  }

  { // ID: 1106
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1106] = block;
  }

  { // ID: 1107
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1107] = block;
  }

  { // ID: 1108
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1108] = block;
  }

  { // ID: 1109
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1109] = block;
  }

  { // ID: 1110
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1110] = block;
  }

  { // ID: 1111
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1111] = block;
  }

  { // ID: 1112
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1112] = block;
  }

  { // ID: 1113
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1113] = block;
  }

  { // ID: 1114
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1114] = block;
  }

  { // ID: 1115
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1115] = block;
  }

  { // ID: 1116
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1116] = block;
  }

  { // ID: 1117
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1117] = block;
  }

  { // ID: 1118
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1118] = block;
  }

  { // ID: 1119
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1119] = block;
  }

  { // ID: 1120
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1120] = block;
  }

  { // ID: 1121
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1121] = block;
  }

  { // ID: 1122
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1122] = block;
  }

  { // ID: 1123
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1123] = block;
  }

  { // ID: 1124
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1124] = block;
  }

  { // ID: 1125
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1125] = block;
  }

  { // ID: 1126
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1126] = block;
  }

  { // ID: 1127
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1127] = block;
  }

  { // ID: 1128
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_DIDGERIDOO;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1128] = block;
  }

  { // ID: 1129
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1129] = block;
  }

  { // ID: 1130
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1130] = block;
  }

  { // ID: 1131
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1131] = block;
  }

  { // ID: 1132
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1132] = block;
  }

  { // ID: 1133
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1133] = block;
  }

  { // ID: 1134
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1134] = block;
  }

  { // ID: 1135
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1135] = block;
  }

  { // ID: 1136
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1136] = block;
  }

  { // ID: 1137
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1137] = block;
  }

  { // ID: 1138
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1138] = block;
  }

  { // ID: 1139
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1139] = block;
  }

  { // ID: 1140
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1140] = block;
  }

  { // ID: 1141
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1141] = block;
  }

  { // ID: 1142
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1142] = block;
  }

  { // ID: 1143
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1143] = block;
  }

  { // ID: 1144
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1144] = block;
  }

  { // ID: 1145
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1145] = block;
  }

  { // ID: 1146
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1146] = block;
  }

  { // ID: 1147
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1147] = block;
  }

  { // ID: 1148
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1148] = block;
  }

  { // ID: 1149
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1149] = block;
  }

  { // ID: 1150
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1150] = block;
  }

  { // ID: 1151
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1151] = block;
  }

  { // ID: 1152
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1152] = block;
  }

  { // ID: 1153
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1153] = block;
  }

  { // ID: 1154
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1154] = block;
  }

  { // ID: 1155
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1155] = block;
  }

  { // ID: 1156
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1156] = block;
  }

  { // ID: 1157
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1157] = block;
  }

  { // ID: 1158
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1158] = block;
  }

  { // ID: 1159
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1159] = block;
  }

  { // ID: 1160
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1160] = block;
  }

  { // ID: 1161
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1161] = block;
  }

  { // ID: 1162
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1162] = block;
  }

  { // ID: 1163
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1163] = block;
  }

  { // ID: 1164
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1164] = block;
  }

  { // ID: 1165
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1165] = block;
  }

  { // ID: 1166
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1166] = block;
  }

  { // ID: 1167
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1167] = block;
  }

  { // ID: 1168
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1168] = block;
  }

  { // ID: 1169
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1169] = block;
  }

  { // ID: 1170
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1170] = block;
  }

  { // ID: 1171
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1171] = block;
  }

  { // ID: 1172
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1172] = block;
  }

  { // ID: 1173
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1173] = block;
  }

  { // ID: 1174
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1174] = block;
  }

  { // ID: 1175
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1175] = block;
  }

  { // ID: 1176
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1176] = block;
  }

  { // ID: 1177
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1177] = block;
  }

  { // ID: 1178
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BIT;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1178] = block;
  }

  { // ID: 1179
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1179] = block;
  }

  { // ID: 1180
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1180] = block;
  }

  { // ID: 1181
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1181] = block;
  }

  { // ID: 1182
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1182] = block;
  }

  { // ID: 1183
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1183] = block;
  }

  { // ID: 1184
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1184] = block;
  }

  { // ID: 1185
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1185] = block;
  }

  { // ID: 1186
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1186] = block;
  }

  { // ID: 1187
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1187] = block;
  }

  { // ID: 1188
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1188] = block;
  }

  { // ID: 1189
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1189] = block;
  }

  { // ID: 1190
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1190] = block;
  }

  { // ID: 1191
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1191] = block;
  }

  { // ID: 1192
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1192] = block;
  }

  { // ID: 1193
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1193] = block;
  }

  { // ID: 1194
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1194] = block;
  }

  { // ID: 1195
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1195] = block;
  }

  { // ID: 1196
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1196] = block;
  }

  { // ID: 1197
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1197] = block;
  }

  { // ID: 1198
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1198] = block;
  }

  { // ID: 1199
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1199] = block;
  }

  { // ID: 1200
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1200] = block;
  }

  { // ID: 1201
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1201] = block;
  }

  { // ID: 1202
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1202] = block;
  }

  { // ID: 1203
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1203] = block;
  }

  { // ID: 1204
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1204] = block;
  }

  { // ID: 1205
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1205] = block;
  }

  { // ID: 1206
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1206] = block;
  }

  { // ID: 1207
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1207] = block;
  }

  { // ID: 1208
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1208] = block;
  }

  { // ID: 1209
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1209] = block;
  }

  { // ID: 1210
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1210] = block;
  }

  { // ID: 1211
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1211] = block;
  }

  { // ID: 1212
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1212] = block;
  }

  { // ID: 1213
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1213] = block;
  }

  { // ID: 1214
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1214] = block;
  }

  { // ID: 1215
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1215] = block;
  }

  { // ID: 1216
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1216] = block;
  }

  { // ID: 1217
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1217] = block;
  }

  { // ID: 1218
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1218] = block;
  }

  { // ID: 1219
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1219] = block;
  }

  { // ID: 1220
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1220] = block;
  }

  { // ID: 1221
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1221] = block;
  }

  { // ID: 1222
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1222] = block;
  }

  { // ID: 1223
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1223] = block;
  }

  { // ID: 1224
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1224] = block;
  }

  { // ID: 1225
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1225] = block;
  }

  { // ID: 1226
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1226] = block;
  }

  { // ID: 1227
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1227] = block;
  }

  { // ID: 1228
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_BANJO;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1228] = block;
  }

  { // ID: 1229
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1229] = block;
  }

  { // ID: 1230
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_0;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1230] = block;
  }

  { // ID: 1231
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1231] = block;
  }

  { // ID: 1232
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_1;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1232] = block;
  }

  { // ID: 1233
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1233] = block;
  }

  { // ID: 1234
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_2;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1234] = block;
  }

  { // ID: 1235
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1235] = block;
  }

  { // ID: 1236
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_3;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1236] = block;
  }

  { // ID: 1237
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1237] = block;
  }

  { // ID: 1238
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_4;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1238] = block;
  }

  { // ID: 1239
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1239] = block;
  }

  { // ID: 1240
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_5;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1240] = block;
  }

  { // ID: 1241
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1241] = block;
  }

  { // ID: 1242
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_6;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1242] = block;
  }

  { // ID: 1243
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1243] = block;
  }

  { // ID: 1244
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_7;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1244] = block;
  }

  { // ID: 1245
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1245] = block;
  }

  { // ID: 1246
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_8;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1246] = block;
  }

  { // ID: 1247
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1247] = block;
  }

  { // ID: 1248
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_9;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1248] = block;
  }

  { // ID: 1249
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1249] = block;
  }

  { // ID: 1250
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_10;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1250] = block;
  }

  { // ID: 1251
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1251] = block;
  }

  { // ID: 1252
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_11;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1252] = block;
  }

  { // ID: 1253
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1253] = block;
  }

  { // ID: 1254
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_12;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1254] = block;
  }

  { // ID: 1255
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1255] = block;
  }

  { // ID: 1256
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_13;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1256] = block;
  }

  { // ID: 1257
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1257] = block;
  }

  { // ID: 1258
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_14;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1258] = block;
  }

  { // ID: 1259
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1259] = block;
  }

  { // ID: 1260
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_15;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1260] = block;
  }

  { // ID: 1261
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1261] = block;
  }

  { // ID: 1262
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_16;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1262] = block;
  }

  { // ID: 1263
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1263] = block;
  }

  { // ID: 1264
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_17;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1264] = block;
  }

  { // ID: 1265
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1265] = block;
  }

  { // ID: 1266
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_18;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1266] = block;
  }

  { // ID: 1267
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1267] = block;
  }

  { // ID: 1268
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_19;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1268] = block;
  }

  { // ID: 1269
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1269] = block;
  }

  { // ID: 1270
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_20;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1270] = block;
  }

  { // ID: 1271
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1271] = block;
  }

  { // ID: 1272
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_21;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1272] = block;
  }

  { // ID: 1273
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1273] = block;
  }

  { // ID: 1274
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_22;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1274] = block;
  }

  { // ID: 1275
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1275] = block;
  }

  { // ID: 1276
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_23;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1276] = block;
  }

  { // ID: 1277
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_TRUE;
    registry[1277] = block;
  }

  { // ID: 1278
    std::shared_ptr<NoteBlockBlock> block = std::make_shared<NoteBlockBlock>();
    block->instrument = NoteBlockBlock::INSTRUMENT_PLING;
    block->note = NoteBlockBlock::NOTE_24;
    block->powered = NoteBlockBlock::POWERED_FALSE;
    registry[1278] = block;
  }

  { // ID: 4308
    std::shared_ptr<NetherrackBlock> block = std::make_shared<NetherrackBlock>();
    registry[4308] = block;
  }

  { // ID: 4323
    std::shared_ptr<NetherPortalBlock> block = std::make_shared<NetherPortalBlock>();
    block->axis = NetherPortalBlock::AXIS_X;
    registry[4323] = block;
  }

  { // ID: 4324
    std::shared_ptr<NetherPortalBlock> block = std::make_shared<NetherPortalBlock>();
    block->axis = NetherPortalBlock::AXIS_Z;
    registry[4324] = block;
  }

  { // ID: 5602
    std::shared_ptr<NetherBricksBlock> block = std::make_shared<NetherBricksBlock>();
    registry[5602] = block;
  }

  { // ID: 5603
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_TRUE;
    block->north = NetherBrickFenceBlock::NORTH_TRUE;
    block->south = NetherBrickFenceBlock::SOUTH_TRUE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickFenceBlock::WEST_TRUE;
    registry[5603] = block;
  }

  { // ID: 5604
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_TRUE;
    block->north = NetherBrickFenceBlock::NORTH_TRUE;
    block->south = NetherBrickFenceBlock::SOUTH_TRUE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickFenceBlock::WEST_FALSE;
    registry[5604] = block;
  }

  { // ID: 5605
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_TRUE;
    block->north = NetherBrickFenceBlock::NORTH_TRUE;
    block->south = NetherBrickFenceBlock::SOUTH_TRUE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickFenceBlock::WEST_TRUE;
    registry[5605] = block;
  }

  { // ID: 5606
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_TRUE;
    block->north = NetherBrickFenceBlock::NORTH_TRUE;
    block->south = NetherBrickFenceBlock::SOUTH_TRUE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickFenceBlock::WEST_FALSE;
    registry[5606] = block;
  }

  { // ID: 5607
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_TRUE;
    block->north = NetherBrickFenceBlock::NORTH_TRUE;
    block->south = NetherBrickFenceBlock::SOUTH_FALSE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickFenceBlock::WEST_TRUE;
    registry[5607] = block;
  }

  { // ID: 5608
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_TRUE;
    block->north = NetherBrickFenceBlock::NORTH_TRUE;
    block->south = NetherBrickFenceBlock::SOUTH_FALSE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickFenceBlock::WEST_FALSE;
    registry[5608] = block;
  }

  { // ID: 5609
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_TRUE;
    block->north = NetherBrickFenceBlock::NORTH_TRUE;
    block->south = NetherBrickFenceBlock::SOUTH_FALSE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickFenceBlock::WEST_TRUE;
    registry[5609] = block;
  }

  { // ID: 5610
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_TRUE;
    block->north = NetherBrickFenceBlock::NORTH_TRUE;
    block->south = NetherBrickFenceBlock::SOUTH_FALSE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickFenceBlock::WEST_FALSE;
    registry[5610] = block;
  }

  { // ID: 5611
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_TRUE;
    block->north = NetherBrickFenceBlock::NORTH_FALSE;
    block->south = NetherBrickFenceBlock::SOUTH_TRUE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickFenceBlock::WEST_TRUE;
    registry[5611] = block;
  }

  { // ID: 5612
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_TRUE;
    block->north = NetherBrickFenceBlock::NORTH_FALSE;
    block->south = NetherBrickFenceBlock::SOUTH_TRUE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickFenceBlock::WEST_FALSE;
    registry[5612] = block;
  }

  { // ID: 5613
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_TRUE;
    block->north = NetherBrickFenceBlock::NORTH_FALSE;
    block->south = NetherBrickFenceBlock::SOUTH_TRUE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickFenceBlock::WEST_TRUE;
    registry[5613] = block;
  }

  { // ID: 5614
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_TRUE;
    block->north = NetherBrickFenceBlock::NORTH_FALSE;
    block->south = NetherBrickFenceBlock::SOUTH_TRUE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickFenceBlock::WEST_FALSE;
    registry[5614] = block;
  }

  { // ID: 5615
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_TRUE;
    block->north = NetherBrickFenceBlock::NORTH_FALSE;
    block->south = NetherBrickFenceBlock::SOUTH_FALSE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickFenceBlock::WEST_TRUE;
    registry[5615] = block;
  }

  { // ID: 5616
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_TRUE;
    block->north = NetherBrickFenceBlock::NORTH_FALSE;
    block->south = NetherBrickFenceBlock::SOUTH_FALSE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickFenceBlock::WEST_FALSE;
    registry[5616] = block;
  }

  { // ID: 5617
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_TRUE;
    block->north = NetherBrickFenceBlock::NORTH_FALSE;
    block->south = NetherBrickFenceBlock::SOUTH_FALSE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickFenceBlock::WEST_TRUE;
    registry[5617] = block;
  }

  { // ID: 5618
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_TRUE;
    block->north = NetherBrickFenceBlock::NORTH_FALSE;
    block->south = NetherBrickFenceBlock::SOUTH_FALSE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickFenceBlock::WEST_FALSE;
    registry[5618] = block;
  }

  { // ID: 5619
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_FALSE;
    block->north = NetherBrickFenceBlock::NORTH_TRUE;
    block->south = NetherBrickFenceBlock::SOUTH_TRUE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickFenceBlock::WEST_TRUE;
    registry[5619] = block;
  }

  { // ID: 5620
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_FALSE;
    block->north = NetherBrickFenceBlock::NORTH_TRUE;
    block->south = NetherBrickFenceBlock::SOUTH_TRUE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickFenceBlock::WEST_FALSE;
    registry[5620] = block;
  }

  { // ID: 5621
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_FALSE;
    block->north = NetherBrickFenceBlock::NORTH_TRUE;
    block->south = NetherBrickFenceBlock::SOUTH_TRUE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickFenceBlock::WEST_TRUE;
    registry[5621] = block;
  }

  { // ID: 5622
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_FALSE;
    block->north = NetherBrickFenceBlock::NORTH_TRUE;
    block->south = NetherBrickFenceBlock::SOUTH_TRUE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickFenceBlock::WEST_FALSE;
    registry[5622] = block;
  }

  { // ID: 5623
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_FALSE;
    block->north = NetherBrickFenceBlock::NORTH_TRUE;
    block->south = NetherBrickFenceBlock::SOUTH_FALSE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickFenceBlock::WEST_TRUE;
    registry[5623] = block;
  }

  { // ID: 5624
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_FALSE;
    block->north = NetherBrickFenceBlock::NORTH_TRUE;
    block->south = NetherBrickFenceBlock::SOUTH_FALSE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickFenceBlock::WEST_FALSE;
    registry[5624] = block;
  }

  { // ID: 5625
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_FALSE;
    block->north = NetherBrickFenceBlock::NORTH_TRUE;
    block->south = NetherBrickFenceBlock::SOUTH_FALSE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickFenceBlock::WEST_TRUE;
    registry[5625] = block;
  }

  { // ID: 5626
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_FALSE;
    block->north = NetherBrickFenceBlock::NORTH_TRUE;
    block->south = NetherBrickFenceBlock::SOUTH_FALSE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickFenceBlock::WEST_FALSE;
    registry[5626] = block;
  }

  { // ID: 5627
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_FALSE;
    block->north = NetherBrickFenceBlock::NORTH_FALSE;
    block->south = NetherBrickFenceBlock::SOUTH_TRUE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickFenceBlock::WEST_TRUE;
    registry[5627] = block;
  }

  { // ID: 5628
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_FALSE;
    block->north = NetherBrickFenceBlock::NORTH_FALSE;
    block->south = NetherBrickFenceBlock::SOUTH_TRUE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickFenceBlock::WEST_FALSE;
    registry[5628] = block;
  }

  { // ID: 5629
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_FALSE;
    block->north = NetherBrickFenceBlock::NORTH_FALSE;
    block->south = NetherBrickFenceBlock::SOUTH_TRUE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickFenceBlock::WEST_TRUE;
    registry[5629] = block;
  }

  { // ID: 5630
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_FALSE;
    block->north = NetherBrickFenceBlock::NORTH_FALSE;
    block->south = NetherBrickFenceBlock::SOUTH_TRUE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickFenceBlock::WEST_FALSE;
    registry[5630] = block;
  }

  { // ID: 5631
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_FALSE;
    block->north = NetherBrickFenceBlock::NORTH_FALSE;
    block->south = NetherBrickFenceBlock::SOUTH_FALSE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickFenceBlock::WEST_TRUE;
    registry[5631] = block;
  }

  { // ID: 5632
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_FALSE;
    block->north = NetherBrickFenceBlock::NORTH_FALSE;
    block->south = NetherBrickFenceBlock::SOUTH_FALSE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickFenceBlock::WEST_FALSE;
    registry[5632] = block;
  }

  { // ID: 5633
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_FALSE;
    block->north = NetherBrickFenceBlock::NORTH_FALSE;
    block->south = NetherBrickFenceBlock::SOUTH_FALSE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickFenceBlock::WEST_TRUE;
    registry[5633] = block;
  }

  { // ID: 5634
    std::shared_ptr<NetherBrickFenceBlock> block = std::make_shared<NetherBrickFenceBlock>();
    block->east = NetherBrickFenceBlock::EAST_FALSE;
    block->north = NetherBrickFenceBlock::NORTH_FALSE;
    block->south = NetherBrickFenceBlock::SOUTH_FALSE;
    block->waterlogged = NetherBrickFenceBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickFenceBlock::WEST_FALSE;
    registry[5634] = block;
  }

  { // ID: 5635
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_NORTH;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5635] = block;
  }

  { // ID: 5636
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_NORTH;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5636] = block;
  }

  { // ID: 5637
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_NORTH;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5637] = block;
  }

  { // ID: 5638
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_NORTH;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5638] = block;
  }

  { // ID: 5639
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_NORTH;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5639] = block;
  }

  { // ID: 5640
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_NORTH;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5640] = block;
  }

  { // ID: 5641
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_NORTH;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5641] = block;
  }

  { // ID: 5642
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_NORTH;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5642] = block;
  }

  { // ID: 5643
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_NORTH;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5643] = block;
  }

  { // ID: 5644
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_NORTH;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5644] = block;
  }

  { // ID: 5645
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_NORTH;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5645] = block;
  }

  { // ID: 5646
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_NORTH;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5646] = block;
  }

  { // ID: 5647
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_NORTH;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5647] = block;
  }

  { // ID: 5648
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_NORTH;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5648] = block;
  }

  { // ID: 5649
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_NORTH;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5649] = block;
  }

  { // ID: 5650
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_NORTH;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5650] = block;
  }

  { // ID: 5651
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_NORTH;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5651] = block;
  }

  { // ID: 5652
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_NORTH;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5652] = block;
  }

  { // ID: 5653
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_NORTH;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5653] = block;
  }

  { // ID: 5654
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_NORTH;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5654] = block;
  }

  { // ID: 5655
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_SOUTH;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5655] = block;
  }

  { // ID: 5656
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_SOUTH;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5656] = block;
  }

  { // ID: 5657
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_SOUTH;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5657] = block;
  }

  { // ID: 5658
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_SOUTH;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5658] = block;
  }

  { // ID: 5659
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_SOUTH;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5659] = block;
  }

  { // ID: 5660
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_SOUTH;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5660] = block;
  }

  { // ID: 5661
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_SOUTH;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5661] = block;
  }

  { // ID: 5662
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_SOUTH;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5662] = block;
  }

  { // ID: 5663
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_SOUTH;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5663] = block;
  }

  { // ID: 5664
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_SOUTH;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5664] = block;
  }

  { // ID: 5665
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_SOUTH;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5665] = block;
  }

  { // ID: 5666
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_SOUTH;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5666] = block;
  }

  { // ID: 5667
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_SOUTH;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5667] = block;
  }

  { // ID: 5668
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_SOUTH;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5668] = block;
  }

  { // ID: 5669
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_SOUTH;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5669] = block;
  }

  { // ID: 5670
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_SOUTH;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5670] = block;
  }

  { // ID: 5671
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_SOUTH;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5671] = block;
  }

  { // ID: 5672
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_SOUTH;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5672] = block;
  }

  { // ID: 5673
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_SOUTH;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5673] = block;
  }

  { // ID: 5674
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_SOUTH;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5674] = block;
  }

  { // ID: 5675
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_WEST;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5675] = block;
  }

  { // ID: 5676
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_WEST;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5676] = block;
  }

  { // ID: 5677
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_WEST;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5677] = block;
  }

  { // ID: 5678
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_WEST;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5678] = block;
  }

  { // ID: 5679
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_WEST;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5679] = block;
  }

  { // ID: 5680
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_WEST;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5680] = block;
  }

  { // ID: 5681
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_WEST;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5681] = block;
  }

  { // ID: 5682
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_WEST;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5682] = block;
  }

  { // ID: 5683
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_WEST;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5683] = block;
  }

  { // ID: 5684
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_WEST;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5684] = block;
  }

  { // ID: 5685
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_WEST;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5685] = block;
  }

  { // ID: 5686
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_WEST;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5686] = block;
  }

  { // ID: 5687
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_WEST;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5687] = block;
  }

  { // ID: 5688
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_WEST;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5688] = block;
  }

  { // ID: 5689
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_WEST;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5689] = block;
  }

  { // ID: 5690
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_WEST;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5690] = block;
  }

  { // ID: 5691
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_WEST;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5691] = block;
  }

  { // ID: 5692
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_WEST;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5692] = block;
  }

  { // ID: 5693
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_WEST;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5693] = block;
  }

  { // ID: 5694
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_WEST;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5694] = block;
  }

  { // ID: 5695
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_EAST;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5695] = block;
  }

  { // ID: 5696
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_EAST;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5696] = block;
  }

  { // ID: 5697
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_EAST;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5697] = block;
  }

  { // ID: 5698
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_EAST;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5698] = block;
  }

  { // ID: 5699
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_EAST;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5699] = block;
  }

  { // ID: 5700
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_EAST;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5700] = block;
  }

  { // ID: 5701
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_EAST;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5701] = block;
  }

  { // ID: 5702
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_EAST;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5702] = block;
  }

  { // ID: 5703
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_EAST;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5703] = block;
  }

  { // ID: 5704
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_EAST;
    block->half = NetherBrickStairsBlock::HALF_TOP;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5704] = block;
  }

  { // ID: 5705
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_EAST;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5705] = block;
  }

  { // ID: 5706
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_EAST;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5706] = block;
  }

  { // ID: 5707
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_EAST;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5707] = block;
  }

  { // ID: 5708
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_EAST;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5708] = block;
  }

  { // ID: 5709
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_EAST;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5709] = block;
  }

  { // ID: 5710
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_EAST;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5710] = block;
  }

  { // ID: 5711
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_EAST;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5711] = block;
  }

  { // ID: 5712
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_EAST;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5712] = block;
  }

  { // ID: 5713
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_EAST;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_TRUE;
    registry[5713] = block;
  }

  { // ID: 5714
    std::shared_ptr<NetherBrickStairsBlock> block = std::make_shared<NetherBrickStairsBlock>();
    block->facing = NetherBrickStairsBlock::FACING_EAST;
    block->half = NetherBrickStairsBlock::HALF_BOTTOM;
    block->shape = NetherBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = NetherBrickStairsBlock::WATERLOGGED_FALSE;
    registry[5714] = block;
  }

  { // ID: 5715
    std::shared_ptr<NetherWartBlock> block = std::make_shared<NetherWartBlock>();
    block->age = NetherWartBlock::AGE_0;
    registry[5715] = block;
  }

  { // ID: 5716
    std::shared_ptr<NetherWartBlock> block = std::make_shared<NetherWartBlock>();
    block->age = NetherWartBlock::AGE_1;
    registry[5716] = block;
  }

  { // ID: 5717
    std::shared_ptr<NetherWartBlock> block = std::make_shared<NetherWartBlock>();
    block->age = NetherWartBlock::AGE_2;
    registry[5717] = block;
  }

  { // ID: 5718
    std::shared_ptr<NetherWartBlock> block = std::make_shared<NetherWartBlock>();
    block->age = NetherWartBlock::AGE_3;
    registry[5718] = block;
  }

  { // ID: 7344
    std::shared_ptr<NetherQuartzOreBlock> block = std::make_shared<NetherQuartzOreBlock>();
    registry[7344] = block;
  }

  { // ID: 9137
    std::shared_ptr<NetherBrickSlabBlock> block = std::make_shared<NetherBrickSlabBlock>();
    block->type = NetherBrickSlabBlock::TYPE_TOP;
    block->waterlogged = NetherBrickSlabBlock::WATERLOGGED_TRUE;
    registry[9137] = block;
  }

  { // ID: 9138
    std::shared_ptr<NetherBrickSlabBlock> block = std::make_shared<NetherBrickSlabBlock>();
    block->type = NetherBrickSlabBlock::TYPE_TOP;
    block->waterlogged = NetherBrickSlabBlock::WATERLOGGED_FALSE;
    registry[9138] = block;
  }

  { // ID: 9139
    std::shared_ptr<NetherBrickSlabBlock> block = std::make_shared<NetherBrickSlabBlock>();
    block->type = NetherBrickSlabBlock::TYPE_BOTTOM;
    block->waterlogged = NetherBrickSlabBlock::WATERLOGGED_TRUE;
    registry[9139] = block;
  }

  { // ID: 9140
    std::shared_ptr<NetherBrickSlabBlock> block = std::make_shared<NetherBrickSlabBlock>();
    block->type = NetherBrickSlabBlock::TYPE_BOTTOM;
    block->waterlogged = NetherBrickSlabBlock::WATERLOGGED_FALSE;
    registry[9140] = block;
  }

  { // ID: 9141
    std::shared_ptr<NetherBrickSlabBlock> block = std::make_shared<NetherBrickSlabBlock>();
    block->type = NetherBrickSlabBlock::TYPE_DOUBLE;
    block->waterlogged = NetherBrickSlabBlock::WATERLOGGED_TRUE;
    registry[9141] = block;
  }

  { // ID: 9142
    std::shared_ptr<NetherBrickSlabBlock> block = std::make_shared<NetherBrickSlabBlock>();
    block->type = NetherBrickSlabBlock::TYPE_DOUBLE;
    block->waterlogged = NetherBrickSlabBlock::WATERLOGGED_FALSE;
    registry[9142] = block;
  }

  { // ID: 10135
    std::shared_ptr<NetherWartBlockBlock> block = std::make_shared<NetherWartBlockBlock>();
    registry[10135] = block;
  }

  { // ID: 14016
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14016] = block;
  }

  { // ID: 14017
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14017] = block;
  }

  { // ID: 14018
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14018] = block;
  }

  { // ID: 14019
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14019] = block;
  }

  { // ID: 14020
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14020] = block;
  }

  { // ID: 14021
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14021] = block;
  }

  { // ID: 14022
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14022] = block;
  }

  { // ID: 14023
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14023] = block;
  }

  { // ID: 14024
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14024] = block;
  }

  { // ID: 14025
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14025] = block;
  }

  { // ID: 14026
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14026] = block;
  }

  { // ID: 14027
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14027] = block;
  }

  { // ID: 14028
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14028] = block;
  }

  { // ID: 14029
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14029] = block;
  }

  { // ID: 14030
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14030] = block;
  }

  { // ID: 14031
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14031] = block;
  }

  { // ID: 14032
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14032] = block;
  }

  { // ID: 14033
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14033] = block;
  }

  { // ID: 14034
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14034] = block;
  }

  { // ID: 14035
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14035] = block;
  }

  { // ID: 14036
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14036] = block;
  }

  { // ID: 14037
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14037] = block;
  }

  { // ID: 14038
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14038] = block;
  }

  { // ID: 14039
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14039] = block;
  }

  { // ID: 14040
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14040] = block;
  }

  { // ID: 14041
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14041] = block;
  }

  { // ID: 14042
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14042] = block;
  }

  { // ID: 14043
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14043] = block;
  }

  { // ID: 14044
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14044] = block;
  }

  { // ID: 14045
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14045] = block;
  }

  { // ID: 14046
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14046] = block;
  }

  { // ID: 14047
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14047] = block;
  }

  { // ID: 14048
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14048] = block;
  }

  { // ID: 14049
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14049] = block;
  }

  { // ID: 14050
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14050] = block;
  }

  { // ID: 14051
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14051] = block;
  }

  { // ID: 14052
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14052] = block;
  }

  { // ID: 14053
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14053] = block;
  }

  { // ID: 14054
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14054] = block;
  }

  { // ID: 14055
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14055] = block;
  }

  { // ID: 14056
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14056] = block;
  }

  { // ID: 14057
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14057] = block;
  }

  { // ID: 14058
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14058] = block;
  }

  { // ID: 14059
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14059] = block;
  }

  { // ID: 14060
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14060] = block;
  }

  { // ID: 14061
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14061] = block;
  }

  { // ID: 14062
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14062] = block;
  }

  { // ID: 14063
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14063] = block;
  }

  { // ID: 14064
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14064] = block;
  }

  { // ID: 14065
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14065] = block;
  }

  { // ID: 14066
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14066] = block;
  }

  { // ID: 14067
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14067] = block;
  }

  { // ID: 14068
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14068] = block;
  }

  { // ID: 14069
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14069] = block;
  }

  { // ID: 14070
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14070] = block;
  }

  { // ID: 14071
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14071] = block;
  }

  { // ID: 14072
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14072] = block;
  }

  { // ID: 14073
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14073] = block;
  }

  { // ID: 14074
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14074] = block;
  }

  { // ID: 14075
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14075] = block;
  }

  { // ID: 14076
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14076] = block;
  }

  { // ID: 14077
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14077] = block;
  }

  { // ID: 14078
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14078] = block;
  }

  { // ID: 14079
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14079] = block;
  }

  { // ID: 14080
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14080] = block;
  }

  { // ID: 14081
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14081] = block;
  }

  { // ID: 14082
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14082] = block;
  }

  { // ID: 14083
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14083] = block;
  }

  { // ID: 14084
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14084] = block;
  }

  { // ID: 14085
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14085] = block;
  }

  { // ID: 14086
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14086] = block;
  }

  { // ID: 14087
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14087] = block;
  }

  { // ID: 14088
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14088] = block;
  }

  { // ID: 14089
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14089] = block;
  }

  { // ID: 14090
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14090] = block;
  }

  { // ID: 14091
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14091] = block;
  }

  { // ID: 14092
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14092] = block;
  }

  { // ID: 14093
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14093] = block;
  }

  { // ID: 14094
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14094] = block;
  }

  { // ID: 14095
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14095] = block;
  }

  { // ID: 14096
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14096] = block;
  }

  { // ID: 14097
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14097] = block;
  }

  { // ID: 14098
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14098] = block;
  }

  { // ID: 14099
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14099] = block;
  }

  { // ID: 14100
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14100] = block;
  }

  { // ID: 14101
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14101] = block;
  }

  { // ID: 14102
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14102] = block;
  }

  { // ID: 14103
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14103] = block;
  }

  { // ID: 14104
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14104] = block;
  }

  { // ID: 14105
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14105] = block;
  }

  { // ID: 14106
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14106] = block;
  }

  { // ID: 14107
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14107] = block;
  }

  { // ID: 14108
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14108] = block;
  }

  { // ID: 14109
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14109] = block;
  }

  { // ID: 14110
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14110] = block;
  }

  { // ID: 14111
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14111] = block;
  }

  { // ID: 14112
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14112] = block;
  }

  { // ID: 14113
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14113] = block;
  }

  { // ID: 14114
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14114] = block;
  }

  { // ID: 14115
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14115] = block;
  }

  { // ID: 14116
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14116] = block;
  }

  { // ID: 14117
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14117] = block;
  }

  { // ID: 14118
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14118] = block;
  }

  { // ID: 14119
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14119] = block;
  }

  { // ID: 14120
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14120] = block;
  }

  { // ID: 14121
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14121] = block;
  }

  { // ID: 14122
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14122] = block;
  }

  { // ID: 14123
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_NONE;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14123] = block;
  }

  { // ID: 14124
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14124] = block;
  }

  { // ID: 14125
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14125] = block;
  }

  { // ID: 14126
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14126] = block;
  }

  { // ID: 14127
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14127] = block;
  }

  { // ID: 14128
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14128] = block;
  }

  { // ID: 14129
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14129] = block;
  }

  { // ID: 14130
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14130] = block;
  }

  { // ID: 14131
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14131] = block;
  }

  { // ID: 14132
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14132] = block;
  }

  { // ID: 14133
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14133] = block;
  }

  { // ID: 14134
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14134] = block;
  }

  { // ID: 14135
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14135] = block;
  }

  { // ID: 14136
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14136] = block;
  }

  { // ID: 14137
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14137] = block;
  }

  { // ID: 14138
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14138] = block;
  }

  { // ID: 14139
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14139] = block;
  }

  { // ID: 14140
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14140] = block;
  }

  { // ID: 14141
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14141] = block;
  }

  { // ID: 14142
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14142] = block;
  }

  { // ID: 14143
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14143] = block;
  }

  { // ID: 14144
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14144] = block;
  }

  { // ID: 14145
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14145] = block;
  }

  { // ID: 14146
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14146] = block;
  }

  { // ID: 14147
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14147] = block;
  }

  { // ID: 14148
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14148] = block;
  }

  { // ID: 14149
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14149] = block;
  }

  { // ID: 14150
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14150] = block;
  }

  { // ID: 14151
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14151] = block;
  }

  { // ID: 14152
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14152] = block;
  }

  { // ID: 14153
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14153] = block;
  }

  { // ID: 14154
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14154] = block;
  }

  { // ID: 14155
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14155] = block;
  }

  { // ID: 14156
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14156] = block;
  }

  { // ID: 14157
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14157] = block;
  }

  { // ID: 14158
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14158] = block;
  }

  { // ID: 14159
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14159] = block;
  }

  { // ID: 14160
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14160] = block;
  }

  { // ID: 14161
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14161] = block;
  }

  { // ID: 14162
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14162] = block;
  }

  { // ID: 14163
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14163] = block;
  }

  { // ID: 14164
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14164] = block;
  }

  { // ID: 14165
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14165] = block;
  }

  { // ID: 14166
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14166] = block;
  }

  { // ID: 14167
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14167] = block;
  }

  { // ID: 14168
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14168] = block;
  }

  { // ID: 14169
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14169] = block;
  }

  { // ID: 14170
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14170] = block;
  }

  { // ID: 14171
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14171] = block;
  }

  { // ID: 14172
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14172] = block;
  }

  { // ID: 14173
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14173] = block;
  }

  { // ID: 14174
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14174] = block;
  }

  { // ID: 14175
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14175] = block;
  }

  { // ID: 14176
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14176] = block;
  }

  { // ID: 14177
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14177] = block;
  }

  { // ID: 14178
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14178] = block;
  }

  { // ID: 14179
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14179] = block;
  }

  { // ID: 14180
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14180] = block;
  }

  { // ID: 14181
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14181] = block;
  }

  { // ID: 14182
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14182] = block;
  }

  { // ID: 14183
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14183] = block;
  }

  { // ID: 14184
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14184] = block;
  }

  { // ID: 14185
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14185] = block;
  }

  { // ID: 14186
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14186] = block;
  }

  { // ID: 14187
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14187] = block;
  }

  { // ID: 14188
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14188] = block;
  }

  { // ID: 14189
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14189] = block;
  }

  { // ID: 14190
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14190] = block;
  }

  { // ID: 14191
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14191] = block;
  }

  { // ID: 14192
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14192] = block;
  }

  { // ID: 14193
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14193] = block;
  }

  { // ID: 14194
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14194] = block;
  }

  { // ID: 14195
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14195] = block;
  }

  { // ID: 14196
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14196] = block;
  }

  { // ID: 14197
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14197] = block;
  }

  { // ID: 14198
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14198] = block;
  }

  { // ID: 14199
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14199] = block;
  }

  { // ID: 14200
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14200] = block;
  }

  { // ID: 14201
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14201] = block;
  }

  { // ID: 14202
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14202] = block;
  }

  { // ID: 14203
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14203] = block;
  }

  { // ID: 14204
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14204] = block;
  }

  { // ID: 14205
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14205] = block;
  }

  { // ID: 14206
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14206] = block;
  }

  { // ID: 14207
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14207] = block;
  }

  { // ID: 14208
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14208] = block;
  }

  { // ID: 14209
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14209] = block;
  }

  { // ID: 14210
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14210] = block;
  }

  { // ID: 14211
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14211] = block;
  }

  { // ID: 14212
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14212] = block;
  }

  { // ID: 14213
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14213] = block;
  }

  { // ID: 14214
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14214] = block;
  }

  { // ID: 14215
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14215] = block;
  }

  { // ID: 14216
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14216] = block;
  }

  { // ID: 14217
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14217] = block;
  }

  { // ID: 14218
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14218] = block;
  }

  { // ID: 14219
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14219] = block;
  }

  { // ID: 14220
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14220] = block;
  }

  { // ID: 14221
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14221] = block;
  }

  { // ID: 14222
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14222] = block;
  }

  { // ID: 14223
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14223] = block;
  }

  { // ID: 14224
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14224] = block;
  }

  { // ID: 14225
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14225] = block;
  }

  { // ID: 14226
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14226] = block;
  }

  { // ID: 14227
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14227] = block;
  }

  { // ID: 14228
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14228] = block;
  }

  { // ID: 14229
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14229] = block;
  }

  { // ID: 14230
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14230] = block;
  }

  { // ID: 14231
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_LOW;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14231] = block;
  }

  { // ID: 14232
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14232] = block;
  }

  { // ID: 14233
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14233] = block;
  }

  { // ID: 14234
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14234] = block;
  }

  { // ID: 14235
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14235] = block;
  }

  { // ID: 14236
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14236] = block;
  }

  { // ID: 14237
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14237] = block;
  }

  { // ID: 14238
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14238] = block;
  }

  { // ID: 14239
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14239] = block;
  }

  { // ID: 14240
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14240] = block;
  }

  { // ID: 14241
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14241] = block;
  }

  { // ID: 14242
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14242] = block;
  }

  { // ID: 14243
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14243] = block;
  }

  { // ID: 14244
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14244] = block;
  }

  { // ID: 14245
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14245] = block;
  }

  { // ID: 14246
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14246] = block;
  }

  { // ID: 14247
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14247] = block;
  }

  { // ID: 14248
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14248] = block;
  }

  { // ID: 14249
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14249] = block;
  }

  { // ID: 14250
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14250] = block;
  }

  { // ID: 14251
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14251] = block;
  }

  { // ID: 14252
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14252] = block;
  }

  { // ID: 14253
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14253] = block;
  }

  { // ID: 14254
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14254] = block;
  }

  { // ID: 14255
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14255] = block;
  }

  { // ID: 14256
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14256] = block;
  }

  { // ID: 14257
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14257] = block;
  }

  { // ID: 14258
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14258] = block;
  }

  { // ID: 14259
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14259] = block;
  }

  { // ID: 14260
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14260] = block;
  }

  { // ID: 14261
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14261] = block;
  }

  { // ID: 14262
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14262] = block;
  }

  { // ID: 14263
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14263] = block;
  }

  { // ID: 14264
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14264] = block;
  }

  { // ID: 14265
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14265] = block;
  }

  { // ID: 14266
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14266] = block;
  }

  { // ID: 14267
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_NONE;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14267] = block;
  }

  { // ID: 14268
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14268] = block;
  }

  { // ID: 14269
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14269] = block;
  }

  { // ID: 14270
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14270] = block;
  }

  { // ID: 14271
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14271] = block;
  }

  { // ID: 14272
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14272] = block;
  }

  { // ID: 14273
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14273] = block;
  }

  { // ID: 14274
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14274] = block;
  }

  { // ID: 14275
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14275] = block;
  }

  { // ID: 14276
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14276] = block;
  }

  { // ID: 14277
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14277] = block;
  }

  { // ID: 14278
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14278] = block;
  }

  { // ID: 14279
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14279] = block;
  }

  { // ID: 14280
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14280] = block;
  }

  { // ID: 14281
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14281] = block;
  }

  { // ID: 14282
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14282] = block;
  }

  { // ID: 14283
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14283] = block;
  }

  { // ID: 14284
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14284] = block;
  }

  { // ID: 14285
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14285] = block;
  }

  { // ID: 14286
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14286] = block;
  }

  { // ID: 14287
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14287] = block;
  }

  { // ID: 14288
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14288] = block;
  }

  { // ID: 14289
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14289] = block;
  }

  { // ID: 14290
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14290] = block;
  }

  { // ID: 14291
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14291] = block;
  }

  { // ID: 14292
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14292] = block;
  }

  { // ID: 14293
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14293] = block;
  }

  { // ID: 14294
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14294] = block;
  }

  { // ID: 14295
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14295] = block;
  }

  { // ID: 14296
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14296] = block;
  }

  { // ID: 14297
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14297] = block;
  }

  { // ID: 14298
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14298] = block;
  }

  { // ID: 14299
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14299] = block;
  }

  { // ID: 14300
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14300] = block;
  }

  { // ID: 14301
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14301] = block;
  }

  { // ID: 14302
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14302] = block;
  }

  { // ID: 14303
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_LOW;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14303] = block;
  }

  { // ID: 14304
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14304] = block;
  }

  { // ID: 14305
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14305] = block;
  }

  { // ID: 14306
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14306] = block;
  }

  { // ID: 14307
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14307] = block;
  }

  { // ID: 14308
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14308] = block;
  }

  { // ID: 14309
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14309] = block;
  }

  { // ID: 14310
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14310] = block;
  }

  { // ID: 14311
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14311] = block;
  }

  { // ID: 14312
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14312] = block;
  }

  { // ID: 14313
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14313] = block;
  }

  { // ID: 14314
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14314] = block;
  }

  { // ID: 14315
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_NONE;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14315] = block;
  }

  { // ID: 14316
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14316] = block;
  }

  { // ID: 14317
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14317] = block;
  }

  { // ID: 14318
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14318] = block;
  }

  { // ID: 14319
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14319] = block;
  }

  { // ID: 14320
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14320] = block;
  }

  { // ID: 14321
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14321] = block;
  }

  { // ID: 14322
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14322] = block;
  }

  { // ID: 14323
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14323] = block;
  }

  { // ID: 14324
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14324] = block;
  }

  { // ID: 14325
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14325] = block;
  }

  { // ID: 14326
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14326] = block;
  }

  { // ID: 14327
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_LOW;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14327] = block;
  }

  { // ID: 14328
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14328] = block;
  }

  { // ID: 14329
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14329] = block;
  }

  { // ID: 14330
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14330] = block;
  }

  { // ID: 14331
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14331] = block;
  }

  { // ID: 14332
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14332] = block;
  }

  { // ID: 14333
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_TRUE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14333] = block;
  }

  { // ID: 14334
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14334] = block;
  }

  { // ID: 14335
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14335] = block;
  }

  { // ID: 14336
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_TRUE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14336] = block;
  }

  { // ID: 14337
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_NONE;
    registry[14337] = block;
  }

  { // ID: 14338
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_LOW;
    registry[14338] = block;
  }

  { // ID: 14339
    std::shared_ptr<NetherBrickWallBlock> block = std::make_shared<NetherBrickWallBlock>();
    block->east = NetherBrickWallBlock::EAST_TALL;
    block->north = NetherBrickWallBlock::NORTH_TALL;
    block->south = NetherBrickWallBlock::SOUTH_TALL;
    block->up = NetherBrickWallBlock::UP_FALSE;
    block->waterlogged = NetherBrickWallBlock::WATERLOGGED_FALSE;
    block->west = NetherBrickWallBlock::WEST_TALL;
    registry[14339] = block;
  }

  { // ID: 16183
    std::shared_ptr<NetherSproutsBlock> block = std::make_shared<NetherSproutsBlock>();
    registry[16183] = block;
  }

  { // ID: 17035
    std::shared_ptr<NetheriteBlockBlock> block = std::make_shared<NetheriteBlockBlock>();
    registry[17035] = block;
  }
}