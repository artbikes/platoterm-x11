/**
 * PLATOTerm64 - A PLATO Terminal for the Commodore 64
 * Based on Steve Peltz's PAD
 * 
 * Author: Thomas Cherryhomes <thom.cherryhomes at gmail dot com>
 *
 * touch.c - Touchscreen functions
 */

#ifndef TOUCH_H
#define TOUCH_H

#include "protocol.h"
void touch_allow();
void touch_init();
void touch_main();
void touch_done();
void handle_mouse();


#endif /* TOUCH_H */
