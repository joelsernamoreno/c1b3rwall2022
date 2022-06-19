/*
 *  Hello World Gnome
 *
 *  This example is used to:
 *    1.- Open window to run in Gnome operating systems (ALT+F2)
 *    2.- Write text string "gedit" and run the program
 *    3.- Write text string Hello World in the program
 *
 *  http://www.github.com/joelsernamoreno/ http://www.twitter.com/JoelSernaMoreno/
 *  http://www.github.com/ernesto-xload/ http://www.twitter.com/ernesto_xload/
 *
 *  Version:    1.0
 *  Design:   Ernesto Sanchez
 *  Implementation: Joel Serna & Ernesto Sanchez
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#define kbd_es_es
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.delay(5000);
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_F2, MOD_ALT_LEFT);
  delay(1000);
  DigiKeyboard.println(F("gedit"));
  delay(3000);
  DigiKeyboard.println(F("Hello World!"));
  while(1);
}
