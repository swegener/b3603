/* Copyright (C) 2015 Baruch Even
 *
 * This file is part of the B3603 alternative firmware.
 *
 *  B3603 alternative firmware is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  B3603 alternative firmware is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with B3603 alternative firmware.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

extern uint8_t uart_read_buf[64];
extern uint8_t uart_read_len;
extern uint8_t read_newline;

void uart_init(void);
uint8_t uart_write_ready(void);
uint8_t uart_read_available(void);
void uart_write_ch(const char ch);
void uart_write_str(const char *str);
void uart_write_int(uint16_t val);
void uart_write_fixed_point(uint16_t val);
void uart_write_from_buf(void);
void uart_read_to_buf(void);
