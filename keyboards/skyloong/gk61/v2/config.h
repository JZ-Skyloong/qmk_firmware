/* Copyright 2021 JZ-Skyloong (@JZ-Skyloong)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
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
#ifdef RGB_MATRIX_ENABLE
#define DRIVER_COUNT 1
#define RGB_MATRIX_LED_COUNT 64
#define ISSI_GLOBALCURRENT 200
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS  //Enable frame effects
#define RGB_MATRIX_KEYPRESSES  //Reacts to keypress
#define RGB_DISABLE_WHEN_USB_SUSPENDED   //turn off effects when suspended
#endif

#ifdef IS31FL3743A
/*
 * RGB matrix driver config (IS31FL3743A)
 *
 * This is a 7-bit address, that gets left-shifted and bit 0
 * set to 0 for write, 1 for read (as per I2C protocol)
 * The address will vary depending on your wiring:
 * 00 <-> GND
 * 01 <-> SCL
 * 10 <-> SDA
 * 11 <-> VCC
 * ADDR1 represents A1:A0 of the 7-bit address.
 * ADDR2 represents A3:A2 of the 7-bit address.
 * The result is: 0b010(ADDR2)(ADDR1)
 */
#define __flash  PROGMEM
#endif

