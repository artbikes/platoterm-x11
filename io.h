/**
 * PLATOTerm64 - A PLATO Terminal for the Commodore 64
 * Based on Steve Peltz's PAD
 * 
 * Author: Thomas Cherryhomes <thom.cherryhomes at gmail dot com>
 *
 * io.h - Input/output functions (serial/ethernet)
 */

#ifndef IO_H
#define IO_H

#define XON  0x11
#define XOFF 0x13
void io_init();
void io_done();
void io_main();
void io_replay();
void io_replay_clear();
void io_send_byte();
#endif /* IO_H */
