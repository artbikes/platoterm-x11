/**
 * PLATOTerm64 - A PLATO Terminal for the Commodore 64
 * Based on Steve Peltz's PAD
 * 
 * Author: Thomas Cherryhomes <thom.cherryhomes at gmail dot com>
 *
 * terminal.c - Terminal state functions
 */

#ifndef TERMINAL_H
#define TERMINAL_H

#include "protocol.h"
void terminal_init();
void terminal_initial_position();
void terminal_set_tty();
unsigned char terminal_get_features();
unsigned char terminal_get_type();
unsigned char terminal_get_subtype();
unsigned char terminal_get_load_file();
unsigned char terminal_get_configuration();
unsigned short terminal_get_char_address();
padByte terminal_mem_read();
void terminal_char_load();
void terminal_mem_load();
void terminal_ext_allow();
void terminal_ext_out();
padByte terminal_ext_in();
void terminal_set_ext_in();
void terminal_set_ext_out();
void terminal_mode_5();
void terminal_mode_6();
void terminal_mode_7();
#endif
