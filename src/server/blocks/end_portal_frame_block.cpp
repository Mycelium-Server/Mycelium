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

#include "end_portal_frame_block.h"

EndPortalFrameBlock::EndPortalFrameBlock() = default;
EndPortalFrameBlock::~EndPortalFrameBlock() = default;

short EndPortalFrameBlock::getId() const {
  if (eye == EYE_TRUE && facing == FACING_NORTH) return 5737;
  if (eye == EYE_TRUE && facing == FACING_SOUTH) return 5738;
  if (eye == EYE_TRUE && facing == FACING_WEST) return 5739;
  if (eye == EYE_TRUE && facing == FACING_EAST) return 5740;
  if (eye == EYE_FALSE && facing == FACING_NORTH) return 5741;
  if (eye == EYE_FALSE && facing == FACING_SOUTH) return 5742;
  if (eye == EYE_FALSE && facing == FACING_WEST) return 5743;
  if (eye == EYE_FALSE && facing == FACING_EAST) return 5744;
  return 5741;
}
