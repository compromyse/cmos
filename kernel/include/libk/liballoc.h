/*
 * bubbl
 * Copyright (C) 2025  Raghuram Subramani <raghus2247@gmail.com>
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

#ifndef __libk_liballoc_h
#define __libk_liballoc_h

#include <stddef.h>
#include <stdint.h>

namespace LibAlloc
{

class Block
{
public:
  Block *m_next;
  uint32_t m_size;

public:
  void initialize(uint32_t size);

  void *get_chunk(void);
};

bool initialized(void);
void initialize(void);

}

#endif
