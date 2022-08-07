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

#include "event_loop_factory.h"

EventLoopFactory::EventLoopFactory() = default;
EventLoopFactory::~EventLoopFactory() = default;

void EventLoopFactory::init(unsigned int threadCount) {
  for (auto& eventLoop: eventLoops) {
    eventLoop->destroy();
  }
  eventLoops.resize(threadCount);
  for (auto& eventLoop: eventLoops) {
    eventLoop = nullptr;
  }
}

EventLoop* EventLoopFactory::next() {
  if (eventLoops.empty()) {
    return nullptr;
  }
  if (current >= eventLoops.size()) {
    current = 0;
  }
  if (!eventLoops[current]) {
    eventLoops[current] = new EventLoop;
  }
  return eventLoops[current++];
}

unsigned int EventLoopFactory::getMaxThreadCount() {
  return eventLoops.size();
}

std::vector<EventLoop*> EventLoopFactory::eventLoops;
unsigned int EventLoopFactory::current = 0;
