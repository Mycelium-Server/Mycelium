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

#include <deque>
#include <functional>
#include <string>
#include <unordered_map>

#include "handler.h"

using handler_callback = std::function<bool(AbstractHandler*, int)>;

class Pipeline {
 public:
  void addLast(const std::string&, AbstractHandler*);
  void addFirst(const std::string&, AbstractHandler*);
  void addAfter(const std::string&, const std::string&, AbstractHandler*);
  void addBefore(const std::string&, const std::string&, AbstractHandler*);
  void insert(int idx, const std::string&, AbstractHandler*);
  void remove(const std::string&);
  int indexOf(const std::string&);
  void replace(const std::string&, AbstractHandler*);
  void forEach(const handler_callback&, int start, int end);
  void forEach(const handler_callback&, int start);
  void forEach(const handler_callback&);
  AbstractHandler* get(int);
  AbstractHandler* get(const std::string&);
  std::unordered_map<std::string, AbstractHandler*>& handlers();

 private:
  std::unordered_map<std::string, AbstractHandler*> pipeline;
  std::deque<std::string> order;
};