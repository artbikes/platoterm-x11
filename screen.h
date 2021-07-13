/**
 * PLATOTerm64 - A PLATO Terminal for the Commodore 64
 * Based on Steve Peltz's PAD
 * 
 * Author: Thomas Cherryhomes <thom.cherryhomes at gmail dot com>
 *
 * screen.h - Display output functions
 */

#ifndef SCREEN_H
#define SCREEN_H
#include "protocol.h"

void screen_init();
void screen_main();
void screen_beep();
void screen_block_draw();
void screen_done();
void screen_dot_draw();
void screen_line_draw();
void screen_char_draw();
void screen_handle_client_message();
void screen_clear_colors();
void screen_background();
void screen_foreground();
void screen_clear();
void screen_wait();
void screen_tty_char();
void screen_paint();

#endif /* SCREEN_H */
