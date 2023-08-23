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

#pragma once

#include <vector>

#include "byte_buffer.h"

class ConnectionContext;

class AbstractHandler {
 public:
  [[nodiscard]] virtual bool isInboundHandler() const = 0;
  [[nodiscard]] virtual bool isOutboundHandler() const = 0;
};

class InboundHandler : public AbstractHandler {
 public:
  [[nodiscard]] bool isInboundHandler() const override;
  [[nodiscard]] bool isOutboundHandler() const override;

 public:
  virtual bool onConnect(ConnectionContext*) = 0;
  virtual bool onDisconnect(ConnectionContext*) = 0;
  virtual bool decode(ConnectionContext*, void*, std::vector<void*>&) = 0;
};

class OutboundHandler : public AbstractHandler {
 public:
  [[nodiscard]] bool isInboundHandler() const override;
  [[nodiscard]] bool isOutboundHandler() const override;

 public:
  virtual bool encode(ConnectionContext*, void*, void*&) = 0;
};

class FinalHandler : public InboundHandler {
 public:
  bool decode(ConnectionContext*, void*, std::vector<void*>&) override;

 public:
  virtual void handle(ConnectionContext*, void*) = 0;
};