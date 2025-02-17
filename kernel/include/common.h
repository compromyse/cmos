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

#ifndef __common_h
#define __common_h

#define ALWAYS_INLINE __attribute__((always_inline)) inline
#define PACKED __attribute__((packed))
#define NORETURN __attribute__((noreturn))
#define ALIGNED(x) __attribute__((aligned(x)))

#define KiB 1024
#define MiB (KiB * KiB)

#define ASSERT_NOT_REACHED()                                                  \
  {                                                                           \
    printk("ASSERTION FAILED",                                                \
           "[%s]:%lu SHOULD NOT BE REACHED.",                                 \
           __func__,                                                          \
           __LINE__);                                                         \
    /* TODO: We should probably remove this exit() eventually */              \
    exit();                                                                   \
    halt();                                                                   \
  }

#define ASSERT(condition)                                                     \
  {                                                                           \
    if (!(condition)) {                                                       \
      printk("ASSERTION FAILED",                                              \
             "[%s]:%lu IS RENDERED FALSE.",                                   \
             __func__,                                                        \
             __LINE__);                                                       \
      /* TODO: We should probably remove this exit() eventually */            \
      exit();                                                                 \
      halt();                                                                 \
    }                                                                         \
  }

#endif
