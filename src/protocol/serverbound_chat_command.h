/*
 * Mycelium
 * Copyright (C) 2022  JNNGL
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

#pragma once

#include "packet.h"

class ServerboundChatCommand : public ServerboundPacket {
 public:
  struct SignedCommandArgument {
    std::string argument;
    ByteBuffer signature;
  };

 public:
  ServerboundChatCommand();
  ~ServerboundChatCommand();

 public:
  void read(ByteBuffer&) override;
  ServerboundPacket* createInstance() override;
  [[nodiscard]] int getPacketID() const override;
  void handle(ConnectionContext*) override;

 public:
  std::string command;
  uint64_t timestamp = 0;
  uint64_t salt = 0;
  std::vector<SignedCommandArgument> arguments;
  bool signedPreview = false;
};