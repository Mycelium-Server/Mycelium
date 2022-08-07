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

class ServerboundHandshake : public ServerboundPacket {
 public:
  enum NextState {
    STATUS = 1,
    LOGIN = 2
  };

 public:
  ServerboundHandshake();
  ~ServerboundHandshake();

 public:
  void read(ByteBuffer&) override;
  ServerboundPacket* createInstance() override;
  [[nodiscard]] int getPacketID() const override;
  void handle(ConnectionContext* ctx) override;

 public:
  int protocolVersion = 0;
  std::string serverAddress;
  unsigned short serverPort = 0;
  NextState nextState = (NextState) 0;
};