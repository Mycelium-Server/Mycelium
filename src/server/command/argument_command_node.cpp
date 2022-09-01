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

#include "argument_command_node.h"

#include <utility>

ArgumentCommandNode::ArgumentCommandNode() = default;
ArgumentCommandNode::~ArgumentCommandNode() {
  delete parser;
}

ArgumentCommandNode::ArgumentCommandNode(std::string name, ArgumentParser* parser)
    : name(std::move(name)),
      parser(parser) {}

void ArgumentCommandNode::writeOptional(ByteBuffer& buf) const {
  buf.writeString(name);
  buf.writeVarInt(parser->getID());
  parser->writeProperties(buf);
}

CommandNode::NodeType ArgumentCommandNode::getType() const {
  return CommandNode::ARGUMENT;
}
