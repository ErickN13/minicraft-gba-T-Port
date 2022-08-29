#include "images.h"

/* This artwork was made by Markus Persson in December 2011 */
const u8 sprite_tileset[32 * 160] = {
    // Slime

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x32, 0x22,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x22, 0x23, 0x00, 0x00,

    0x00, 0x03, 0x22, 0x22,
    0x00, 0x32, 0x24, 0x22,
    0x00, 0x32, 0x22, 0x22,
    0x00, 0x32, 0x22, 0x22,
    0x00, 0x03, 0x32, 0x22,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x22, 0x22, 0x30, 0x00,
    0x22, 0x22, 0x23, 0x00,
    0x22, 0x22, 0x23, 0x00,
    0x22, 0x22, 0x23, 0x00,
    0x22, 0x23, 0x30, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x22,
    0x00, 0x00, 0x32, 0x22,
    0x00, 0x00, 0x32, 0x42,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x22, 0x30, 0x00, 0x00,
    0x22, 0x23, 0x00, 0x00,
    0x22, 0x23, 0x00, 0x00,

    0x00, 0x03, 0x22, 0x42,
    0x00, 0x03, 0x22, 0x22,
    0x00, 0x03, 0x22, 0x22,
    0x00, 0x03, 0x22, 0x22,
    0x00, 0x00, 0x32, 0x22,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x22, 0x22, 0x30, 0x00,
    0x22, 0x22, 0x30, 0x00,
    0x22, 0x22, 0x30, 0x00,
    0x22, 0x22, 0x30, 0x00,
    0x22, 0x23, 0x00, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    // Zombie/Player

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x03, 0x33, 0x33,
    0x00, 0x03, 0x33, 0x13,
    0x00, 0x32, 0x31, 0x31,
    0x00, 0x32, 0x33, 0x11,

    0x00, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x31, 0x33, 0x00, 0x00,
    0x13, 0x13, 0x30, 0x00,
    0x11, 0x32, 0x23, 0x00,

    0x00, 0x03, 0x33, 0x33,
    0x00, 0x00, 0x32, 0x22,
    0x00, 0x00, 0x32, 0x23,
    0x00, 0x00, 0x03, 0x22,
    0x00, 0x00, 0x03, 0x22,
    0x00, 0x00, 0x03, 0x22,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x00, 0x00,

    0x33, 0x22, 0x23, 0x00,
    0x23, 0x11, 0x23, 0x00,
    0x23, 0x11, 0x30, 0x00,
    0x32, 0x33, 0x00, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x30, 0x00, 0x00, 0x00,
    0x30, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x03, 0x33, 0x33,
    0x00, 0x32, 0x31, 0x33,
    0x00, 0x32, 0x33, 0x11,

    0x00, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x33, 0x13, 0x00, 0x00,
    0x11, 0x33, 0x00, 0x00,

    0x00, 0x32, 0x33, 0x33,
    0x00, 0x03, 0x32, 0x22,
    0x00, 0x00, 0x32, 0x22,
    0x00, 0x00, 0x33, 0x22,
    0x00, 0x00, 0x03, 0x22,
    0x00, 0x00, 0x03, 0x22,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x00, 0x00,

    0x33, 0x22, 0x30, 0x00,
    0x22, 0x22, 0x13, 0x00,
    0x32, 0x31, 0x13, 0x00,
    0x32, 0x33, 0x30, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x30, 0x00, 0x00, 0x00,
    0x30, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x33, 0x13,
    0x00, 0x00, 0x03, 0x11,

    0x00, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x31, 0x13, 0x00, 0x00,
    0x13, 0x13, 0x00, 0x00,
    0x11, 0x13, 0x00, 0x00,
    0x11, 0x30, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x00, 0x32,
    0x00, 0x00, 0x00, 0x32,
    0x00, 0x00, 0x00, 0x31,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x00, 0x32,
    0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x00,

    0x33, 0x00, 0x00, 0x00,
    0x23, 0x00, 0x00, 0x00,
    0x23, 0x00, 0x00, 0x00,
    0x13, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x23, 0x00, 0x00, 0x00,
    0x30, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x33, 0x13,
    0x00, 0x00, 0x33, 0x11,

    0x00, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x31, 0x13, 0x00, 0x00,
    0x13, 0x13, 0x00, 0x00,
    0x11, 0x13, 0x00, 0x00,
    0x11, 0x33, 0x00, 0x00,

    0x00, 0x00, 0x33, 0x33,
    0x00, 0x03, 0x12, 0x22,
    0x00, 0x03, 0x12, 0x32,
    0x00, 0x00, 0x33, 0x22,
    0x00, 0x00, 0x32, 0x23,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x33, 0x31, 0x30, 0x00,
    0x23, 0x21, 0x30, 0x00,
    0x23, 0x33, 0x00, 0x00,
    0x22, 0x30, 0x00, 0x00,
    0x22, 0x30, 0x00, 0x00,
    0x32, 0x23, 0x00, 0x00,
    0x03, 0x33, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x33, 0x13,
    0x00, 0x00, 0x33, 0x11,

    0x00, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x31, 0x13, 0x00, 0x00,
    0x13, 0x13, 0x00, 0x00,
    0x11, 0x13, 0x00, 0x00,
    0x11, 0x33, 0x00, 0x00,

    0x00, 0x03, 0x13, 0x33,
    0x00, 0x03, 0x12, 0x32,
    0x00, 0x00, 0x33, 0x32,
    0x00, 0x00, 0x03, 0x22,
    0x00, 0x00, 0x03, 0x22,
    0x00, 0x00, 0x32, 0x23,
    0x00, 0x00, 0x33, 0x30,
    0x00, 0x00, 0x00, 0x00,

    0x33, 0x33, 0x00, 0x00,
    0x22, 0x21, 0x30, 0x00,
    0x23, 0x21, 0x30, 0x00,
    0x22, 0x33, 0x00, 0x00,
    0x32, 0x23, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    // Player swimming

    // animation 1
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x03, 0x33, 0x33,
    0x00, 0x03, 0x33, 0x13,
    0x00, 0x32, 0x31, 0x31,
    0x05, 0x32, 0x33, 0x11,

    0x00, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x31, 0x33, 0x50, 0x00,
    0x13, 0x13, 0x35, 0x00,
    0x11, 0x32, 0x23, 0x50,

    0x00, 0x56, 0x67, 0x77,
    0x00, 0x05, 0x56, 0x66,
    0x00, 0x00, 0x05, 0x55,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x77, 0x76, 0x65, 0x00,
    0x66, 0x65, 0x50, 0x00,
    0x55, 0x50, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x03, 0x33, 0x33,
    0x00, 0x32, 0x31, 0x33,
    0x05, 0x32, 0x33, 0x11,

    0x00, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x33, 0x33, 0x50, 0x00,
    0x33, 0x13, 0x65, 0x00,
    0x11, 0x33, 0x76, 0x50,

    0x00, 0x56, 0x67, 0x77,
    0x00, 0x05, 0x56, 0x66,
    0x00, 0x00, 0x05, 0x55,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x77, 0x76, 0x65, 0x00,
    0x66, 0x65, 0x50, 0x00,
    0x55, 0x50, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x05, 0x33, 0x33,
    0x00, 0x56, 0x33, 0x13,
    0x05, 0x67, 0x73, 0x11,

    0x00, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x31, 0x13, 0x00, 0x00,
    0x13, 0x13, 0x50, 0x00,
    0x11, 0x13, 0x65, 0x00,
    0x11, 0x37, 0x76, 0x50,

    0x00, 0x56, 0x67, 0x77,
    0x00, 0x05, 0x56, 0x66,
    0x00, 0x00, 0x05, 0x55,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x77, 0x76, 0x65, 0x00,
    0x66, 0x65, 0x50, 0x00,
    0x55, 0x50, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x05, 0x33, 0x33,
    0x00, 0x56, 0x33, 0x13,
    0x05, 0x67, 0x33, 0x11,

    0x00, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x31, 0x13, 0x00, 0x00,
    0x13, 0x13, 0x50, 0x00,
    0x11, 0x13, 0x65, 0x00,
    0x11, 0x33, 0x76, 0x50,

    0x00, 0x56, 0x67, 0x77,
    0x00, 0x05, 0x56, 0x66,
    0x00, 0x00, 0x05, 0x55,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x77, 0x76, 0x65, 0x00,
    0x66, 0x65, 0x50, 0x00,
    0x55, 0x50, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x05, 0x33, 0x33,
    0x00, 0x56, 0x33, 0x13,
    0x05, 0x67, 0x33, 0x11,

    0x00, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x31, 0x13, 0x00, 0x00,
    0x13, 0x13, 0x50, 0x00,
    0x11, 0x13, 0x65, 0x00,
    0x11, 0x33, 0x76, 0x50,

    0x00, 0x56, 0x67, 0x77,
    0x00, 0x05, 0x56, 0x66,
    0x00, 0x00, 0x05, 0x55,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x77, 0x76, 0x65, 0x00,
    0x66, 0x65, 0x50, 0x00,
    0x55, 0x50, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    // animation 2
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x03, 0x33, 0x33,
    0x00, 0x03, 0x33, 0x13,
    0x00, 0x32, 0x31, 0x31,
    0x00, 0x32, 0x33, 0x11,

    0x00, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x31, 0x33, 0x00, 0x00,
    0x13, 0x13, 0x30, 0x00,
    0x11, 0x32, 0x23, 0x00,

    0x00, 0x05, 0x56, 0x66,
    0x00, 0x00, 0x05, 0x55,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x66, 0x65, 0x50, 0x00,
    0x55, 0x50, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x03, 0x33, 0x33,
    0x00, 0x32, 0x31, 0x33,
    0x00, 0x32, 0x33, 0x11,

    0x00, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x33, 0x13, 0x50, 0x00,
    0x11, 0x33, 0x65, 0x00,

    0x00, 0x05, 0x56, 0x66,
    0x00, 0x00, 0x05, 0x55,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x66, 0x65, 0x50, 0x00,
    0x55, 0x50, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x05, 0x33, 0x13,
    0x00, 0x56, 0x63, 0x11,

    0x00, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x31, 0x13, 0x00, 0x00,
    0x13, 0x13, 0x00, 0x00,
    0x11, 0x13, 0x50, 0x00,
    0x11, 0x36, 0x65, 0x00,

    0x00, 0x05, 0x56, 0x66,
    0x00, 0x00, 0x05, 0x55,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x66, 0x65, 0x50, 0x00,
    0x55, 0x50, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x05, 0x33, 0x13,
    0x00, 0x56, 0x33, 0x11,

    0x00, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x31, 0x13, 0x00, 0x00,
    0x13, 0x13, 0x00, 0x00,
    0x11, 0x13, 0x50, 0x00,
    0x11, 0x33, 0x65, 0x00,

    0x00, 0x05, 0x56, 0x66,
    0x00, 0x00, 0x05, 0x55,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x66, 0x65, 0x50, 0x00,
    0x55, 0x50, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x05, 0x33, 0x13,
    0x00, 0x56, 0x33, 0x11,

    0x00, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x31, 0x13, 0x00, 0x00,
    0x13, 0x13, 0x00, 0x00,
    0x11, 0x13, 0x50, 0x00,
    0x11, 0x33, 0x65, 0x00,

    0x00, 0x05, 0x56, 0x66,
    0x00, 0x00, 0x05, 0x55,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x66, 0x65, 0x50, 0x00,
    0x55, 0x50, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    // Player carrying furniture

    0x00, 0x03, 0x30, 0x00,
    0x00, 0x31, 0x13, 0x33,
    0x00, 0x31, 0x13, 0x33,
    0x00, 0x32, 0x33, 0x33,
    0x00, 0x32, 0x33, 0x33,
    0x00, 0x32, 0x33, 0x13,
    0x00, 0x03, 0x31, 0x31,
    0x00, 0x00, 0x33, 0x11,

    0x00, 0x03, 0x30, 0x00,
    0x33, 0x31, 0x13, 0x00,
    0x33, 0x31, 0x13, 0x00,
    0x33, 0x33, 0x23, 0x00,
    0x33, 0x33, 0x23, 0x00,
    0x31, 0x33, 0x23, 0x00,
    0x13, 0x13, 0x30, 0x00,
    0x11, 0x33, 0x00, 0x00,

    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x32, 0x22,
    0x00, 0x00, 0x32, 0x23,
    0x00, 0x00, 0x03, 0x22,
    0x00, 0x00, 0x03, 0x22,
    0x00, 0x00, 0x03, 0x22,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x00, 0x00,

    0x33, 0x23, 0x00, 0x00,
    0x22, 0x23, 0x00, 0x00,
    0x22, 0x30, 0x00, 0x00,
    0x32, 0x30, 0x00, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x30, 0x00, 0x00, 0x00,
    0x30, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x03, 0x30, 0x00,
    0x00, 0x31, 0x13, 0x33,
    0x00, 0x31, 0x13, 0x33,
    0x00, 0x32, 0x33, 0x33,
    0x00, 0x32, 0x33, 0x33,
    0x00, 0x32, 0x33, 0x33,
    0x00, 0x03, 0x31, 0x33,
    0x00, 0x00, 0x33, 0x11,

    0x00, 0x03, 0x30, 0x00,
    0x33, 0x31, 0x13, 0x00,
    0x33, 0x31, 0x13, 0x00,
    0x33, 0x33, 0x23, 0x00,
    0x33, 0x33, 0x23, 0x00,
    0x33, 0x33, 0x23, 0x00,
    0x33, 0x13, 0x30, 0x00,
    0x11, 0x33, 0x00, 0x00,

    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x32, 0x22,
    0x00, 0x00, 0x32, 0x22,
    0x00, 0x00, 0x33, 0x22,
    0x00, 0x00, 0x03, 0x22,
    0x00, 0x00, 0x03, 0x22,
    0x00, 0x00, 0x03, 0x33,
    0x00, 0x00, 0x00, 0x00,

    0x33, 0x23, 0x00, 0x00,
    0x22, 0x23, 0x00, 0x00,
    0x32, 0x30, 0x00, 0x00,
    0x32, 0x30, 0x00, 0x00,
    0x33, 0x30, 0x00, 0x00,
    0x30, 0x00, 0x00, 0x00,
    0x30, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x31,
    0x00, 0x00, 0x33, 0x31,
    0x00, 0x00, 0x33, 0x32,
    0x00, 0x00, 0x33, 0x32,
    0x00, 0x00, 0x33, 0x32,
    0x00, 0x00, 0x03, 0x32,

    0x30, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x13, 0x30, 0x00, 0x00,
    0x13, 0x33, 0x00, 0x00,
    0x23, 0x13, 0x00, 0x00,
    0x23, 0x13, 0x00, 0x00,
    0x23, 0x13, 0x00, 0x00,
    0x23, 0x30, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x00, 0x32,
    0x00, 0x00, 0x00, 0x32,
    0x00, 0x00, 0x00, 0x32,
    0x00, 0x00, 0x00, 0x32,
    0x00, 0x00, 0x00, 0x32,
    0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x00,

    0x33, 0x00, 0x00, 0x00,
    0x23, 0x00, 0x00, 0x00,
    0x23, 0x00, 0x00, 0x00,
    0x23, 0x00, 0x00, 0x00,
    0x23, 0x00, 0x00, 0x00,
    0x23, 0x00, 0x00, 0x00,
    0x30, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x31,
    0x00, 0x00, 0x33, 0x31,
    0x00, 0x00, 0x33, 0x32,
    0x00, 0x00, 0x33, 0x32,
    0x00, 0x00, 0x33, 0x32,
    0x00, 0x00, 0x03, 0x32,

    0x30, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x13, 0x30, 0x00, 0x00,
    0x13, 0x33, 0x00, 0x00,
    0x23, 0x13, 0x00, 0x00,
    0x23, 0x13, 0x00, 0x00,
    0x23, 0x13, 0x00, 0x00,
    0x23, 0x30, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x00, 0x32,
    0x00, 0x00, 0x00, 0x32,
    0x00, 0x00, 0x33, 0x22,
    0x00, 0x00, 0x32, 0x23,
    0x00, 0x00, 0x33, 0x33,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x33, 0x00, 0x00, 0x00,
    0x23, 0x00, 0x00, 0x00,
    0x23, 0x30, 0x00, 0x00,
    0x22, 0x30, 0x00, 0x00,
    0x22, 0x30, 0x00, 0x00,
    0x32, 0x23, 0x00, 0x00,
    0x03, 0x33, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x31,
    0x00, 0x00, 0x33, 0x31,
    0x00, 0x00, 0x33, 0x32,
    0x00, 0x00, 0x33, 0x32,
    0x00, 0x00, 0x33, 0x32,
    0x00, 0x00, 0x03, 0x32,

    0x30, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x13, 0x30, 0x00, 0x00,
    0x13, 0x33, 0x00, 0x00,
    0x23, 0x13, 0x00, 0x00,
    0x23, 0x13, 0x00, 0x00,
    0x23, 0x13, 0x00, 0x00,
    0x23, 0x30, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x00, 0x32,
    0x00, 0x00, 0x03, 0x32,
    0x00, 0x00, 0x03, 0x22,
    0x00, 0x00, 0x03, 0x22,
    0x00, 0x00, 0x32, 0x23,
    0x00, 0x00, 0x33, 0x30,
    0x00, 0x00, 0x00, 0x00,

    0x33, 0x00, 0x00, 0x00,
    0x23, 0x00, 0x00, 0x00,
    0x23, 0x00, 0x00, 0x00,
    0x22, 0x33, 0x00, 0x00,
    0x32, 0x23, 0x00, 0x00,
    0x33, 0x33, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    // Player swimming carrying furniture

    // animation 1
    0x00, 0x03, 0x30, 0x00,
    0x00, 0x31, 0x13, 0x33,
    0x00, 0x31, 0x13, 0x33,
    0x00, 0x32, 0x33, 0x33,
    0x00, 0x32, 0x33, 0x33,
    0x00, 0x32, 0x33, 0x13,
    0x00, 0x53, 0x31, 0x31,
    0x05, 0x67, 0x33, 0x11,

    0x00, 0x03, 0x30, 0x00,
    0x33, 0x31, 0x13, 0x00,
    0x33, 0x31, 0x13, 0x00,
    0x33, 0x33, 0x23, 0x00,
    0x33, 0x33, 0x23, 0x00,
    0x31, 0x33, 0x23, 0x00,
    0x13, 0x13, 0x35, 0x00,
    0x11, 0x33, 0x76, 0x50,

    0x00, 0x56, 0x67, 0x77,
    0x00, 0x05, 0x56, 0x66,
    0x00, 0x00, 0x05, 0x55,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x77, 0x76, 0x65, 0x00,
    0x66, 0x65, 0x50, 0x00,
    0x55, 0x50, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x03, 0x30, 0x00,
    0x00, 0x31, 0x13, 0x33,
    0x00, 0x31, 0x13, 0x33,
    0x00, 0x32, 0x33, 0x33,
    0x00, 0x32, 0x33, 0x33,
    0x00, 0x32, 0x33, 0x33,
    0x00, 0x53, 0x31, 0x33,
    0x05, 0x67, 0x33, 0x11,

    0x00, 0x03, 0x30, 0x00,
    0x33, 0x31, 0x13, 0x00,
    0x33, 0x31, 0x13, 0x00,
    0x33, 0x33, 0x23, 0x00,
    0x33, 0x33, 0x23, 0x00,
    0x33, 0x33, 0x23, 0x00,
    0x33, 0x13, 0x35, 0x00,
    0x11, 0x33, 0x76, 0x50,

    0x00, 0x56, 0x67, 0x77,
    0x00, 0x05, 0x56, 0x66,
    0x00, 0x00, 0x05, 0x55,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x77, 0x76, 0x65, 0x00,
    0x66, 0x65, 0x50, 0x00,
    0x55, 0x50, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x31,
    0x00, 0x00, 0x33, 0x31,
    0x00, 0x00, 0x33, 0x32,
    0x00, 0x05, 0x33, 0x32,
    0x00, 0x56, 0x33, 0x32,
    0x05, 0x67, 0x73, 0x32,

    0x30, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x13, 0x30, 0x00, 0x00,
    0x13, 0x33, 0x00, 0x00,
    0x23, 0x13, 0x00, 0x00,
    0x23, 0x13, 0x50, 0x00,
    0x23, 0x13, 0x65, 0x00,
    0x23, 0x37, 0x76, 0x50,

    0x00, 0x56, 0x67, 0x77,
    0x00, 0x05, 0x56, 0x66,
    0x00, 0x00, 0x05, 0x55,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x77, 0x76, 0x65, 0x00,
    0x66, 0x65, 0x50, 0x00,
    0x55, 0x50, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x31,
    0x00, 0x00, 0x33, 0x31,
    0x00, 0x00, 0x33, 0x32,
    0x00, 0x05, 0x33, 0x32,
    0x00, 0x56, 0x33, 0x32,
    0x05, 0x67, 0x73, 0x32,

    0x30, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x13, 0x30, 0x00, 0x00,
    0x13, 0x33, 0x00, 0x00,
    0x23, 0x13, 0x00, 0x00,
    0x23, 0x13, 0x50, 0x00,
    0x23, 0x13, 0x65, 0x00,
    0x23, 0x37, 0x76, 0x50,

    0x00, 0x56, 0x67, 0x77,
    0x00, 0x05, 0x56, 0x66,
    0x00, 0x00, 0x05, 0x55,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x77, 0x76, 0x65, 0x00,
    0x66, 0x65, 0x50, 0x00,
    0x55, 0x50, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x31,
    0x00, 0x00, 0x33, 0x31,
    0x00, 0x00, 0x33, 0x32,
    0x00, 0x05, 0x33, 0x32,
    0x00, 0x56, 0x33, 0x32,
    0x05, 0x67, 0x73, 0x32,

    0x30, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x13, 0x30, 0x00, 0x00,
    0x13, 0x33, 0x00, 0x00,
    0x23, 0x13, 0x00, 0x00,
    0x23, 0x13, 0x50, 0x00,
    0x23, 0x13, 0x65, 0x00,
    0x23, 0x37, 0x76, 0x50,

    0x00, 0x56, 0x67, 0x77,
    0x00, 0x05, 0x56, 0x66,
    0x00, 0x00, 0x05, 0x55,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x77, 0x76, 0x65, 0x00,
    0x66, 0x65, 0x50, 0x00,
    0x55, 0x50, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    // animation 2
    0x00, 0x03, 0x30, 0x00,
    0x00, 0x31, 0x13, 0x33,
    0x00, 0x31, 0x13, 0x33,
    0x00, 0x32, 0x33, 0x33,
    0x00, 0x32, 0x33, 0x33,
    0x00, 0x32, 0x33, 0x13,
    0x00, 0x03, 0x31, 0x31,
    0x00, 0x56, 0x33, 0x11,

    0x00, 0x03, 0x30, 0x00,
    0x33, 0x31, 0x13, 0x00,
    0x33, 0x31, 0x13, 0x00,
    0x33, 0x33, 0x23, 0x00,
    0x33, 0x33, 0x23, 0x00,
    0x31, 0x33, 0x23, 0x00,
    0x13, 0x13, 0x30, 0x00,
    0x11, 0x33, 0x65, 0x00,

    0x00, 0x05, 0x56, 0x66,
    0x00, 0x00, 0x05, 0x55,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x66, 0x65, 0x50, 0x00,
    0x55, 0x50, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x03, 0x30, 0x00,
    0x00, 0x31, 0x13, 0x33,
    0x00, 0x31, 0x13, 0x33,
    0x00, 0x32, 0x33, 0x33,
    0x00, 0x32, 0x33, 0x33,
    0x00, 0x32, 0x33, 0x33,
    0x00, 0x03, 0x31, 0x33,
    0x00, 0x56, 0x33, 0x11,

    0x00, 0x03, 0x30, 0x00,
    0x33, 0x31, 0x13, 0x00,
    0x33, 0x31, 0x13, 0x00,
    0x33, 0x33, 0x23, 0x00,
    0x33, 0x33, 0x23, 0x00,
    0x33, 0x33, 0x23, 0x00,
    0x33, 0x13, 0x30, 0x00,
    0x11, 0x33, 0x65, 0x00,

    0x00, 0x05, 0x56, 0x66,
    0x00, 0x00, 0x05, 0x55,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x66, 0x65, 0x50, 0x00,
    0x55, 0x50, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x31,
    0x00, 0x00, 0x33, 0x31,
    0x00, 0x00, 0x33, 0x32,
    0x00, 0x00, 0x33, 0x32,
    0x00, 0x05, 0x33, 0x32,
    0x00, 0x56, 0x63, 0x32,

    0x30, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x13, 0x30, 0x00, 0x00,
    0x13, 0x33, 0x00, 0x00,
    0x23, 0x13, 0x00, 0x00,
    0x23, 0x13, 0x00, 0x00,
    0x23, 0x13, 0x50, 0x00,
    0x23, 0x36, 0x65, 0x00,

    0x00, 0x05, 0x56, 0x66,
    0x00, 0x00, 0x05, 0x55,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x66, 0x65, 0x50, 0x00,
    0x55, 0x50, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x31,
    0x00, 0x00, 0x33, 0x31,
    0x00, 0x00, 0x33, 0x32,
    0x00, 0x00, 0x33, 0x32,
    0x00, 0x05, 0x33, 0x32,
    0x00, 0x56, 0x63, 0x32,

    0x30, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x13, 0x30, 0x00, 0x00,
    0x13, 0x33, 0x00, 0x00,
    0x23, 0x13, 0x00, 0x00,
    0x23, 0x13, 0x00, 0x00,
    0x23, 0x13, 0x50, 0x00,
    0x23, 0x36, 0x65, 0x00,

    0x00, 0x05, 0x56, 0x66,
    0x00, 0x00, 0x05, 0x55,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x66, 0x65, 0x50, 0x00,
    0x55, 0x50, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x33,
    0x00, 0x00, 0x03, 0x31,
    0x00, 0x00, 0x33, 0x31,
    0x00, 0x00, 0x33, 0x32,
    0x00, 0x00, 0x33, 0x32,
    0x00, 0x05, 0x33, 0x32,
    0x00, 0x56, 0x63, 0x32,

    0x30, 0x00, 0x00, 0x00,
    0x33, 0x00, 0x00, 0x00,
    0x13, 0x30, 0x00, 0x00,
    0x13, 0x33, 0x00, 0x00,
    0x23, 0x13, 0x00, 0x00,
    0x23, 0x13, 0x00, 0x00,
    0x23, 0x13, 0x50, 0x00,
    0x23, 0x36, 0x65, 0x00,

    0x00, 0x05, 0x56, 0x66,
    0x00, 0x00, 0x05, 0x55,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x66, 0x65, 0x50, 0x00,
    0x55, 0x50, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    // Furniture

    // Workbench
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x11,
    0x00, 0x00, 0x12, 0x22,
    0x00, 0x01, 0x22, 0x22,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x11, 0x11, 0x11, 0x10,
    0x22, 0x22, 0x21, 0x10,
    0x22, 0x22, 0x12, 0x10,

    0x00, 0x11, 0x11, 0x11,
    0x00, 0x13, 0x12, 0x22,
    0x00, 0x13, 0x31, 0x22,
    0x00, 0x13, 0x33, 0x12,
    0x00, 0x13, 0x33, 0x31,
    0x00, 0x13, 0x33, 0x33,
    0x00, 0x11, 0x11, 0x11,
    0x00, 0x00, 0x00, 0x00,

    0x11, 0x11, 0x12, 0x10,
    0x22, 0x13, 0x11, 0x10,
    0x21, 0x33, 0x13, 0x10,
    0x13, 0x33, 0x13, 0x10,
    0x33, 0x33, 0x13, 0x10,
    0x33, 0x33, 0x11, 0x00,
    0x11, 0x11, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00,

    // Furnace
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x44,
    0x00, 0x00, 0x00, 0x44,
    0x00, 0x00, 0x04, 0x44,
    0x00, 0x00, 0x45, 0x44,
    0x00, 0x04, 0x55, 0x55,
    0x00, 0x04, 0x44, 0x44,
    0x00, 0x45, 0x55, 0x55,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x44, 0x44, 0x44, 0x00,
    0x55, 0x55, 0x54, 0x40,
    0x55, 0x55, 0x44, 0x40,
    0x44, 0x44, 0x44, 0x40,
    0x55, 0x55, 0x44, 0x40,

    0x00, 0x45, 0x56, 0x66,
    0x00, 0x45, 0x65, 0x55,
    0x00, 0x45, 0x55, 0x44,
    0x00, 0x45, 0x55, 0x44,
    0x00, 0x45, 0x55, 0x66,
    0x00, 0x45, 0x55, 0x55,
    0x00, 0x44, 0x44, 0x44,
    0x00, 0x00, 0x00, 0x00,

    0x66, 0x55, 0x44, 0x40,
    0x55, 0x65, 0x44, 0x40,
    0x45, 0x55, 0x44, 0x40,
    0x45, 0x55, 0x44, 0x40,
    0x65, 0x55, 0x44, 0x40,
    0x55, 0x55, 0x44, 0x00,
    0x44, 0x44, 0x40, 0x00,
    0x00, 0x00, 0x00, 0x00,

    // Oven
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x44,
    0x00, 0x00, 0x47, 0x77,
    0x00, 0x04, 0x77, 0x77,
    0x00, 0x47, 0x77, 0x77,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x44, 0x00, 0x00, 0x00,
    0x77, 0x40, 0x00, 0x00,
    0x77, 0x74, 0x00, 0x00,
    0x77, 0x77, 0x40, 0x00,

    0x00, 0x47, 0x78, 0x88,
    0x00, 0x47, 0x87, 0x77,
    0x00, 0x48, 0x77, 0x44,
    0x00, 0x47, 0x74, 0x44,
    0x00, 0x47, 0x44, 0x44,
    0x00, 0x47, 0x48, 0x88,
    0x00, 0x44, 0x44, 0x44,
    0x00, 0x00, 0x00, 0x00,

    0x88, 0x77, 0x40, 0x00,
    0x77, 0x87, 0x40, 0x00,
    0x47, 0x78, 0x40, 0x00,
    0x44, 0x77, 0x40, 0x00,
    0x44, 0x47, 0x40, 0x00,
    0x88, 0x47, 0x40, 0x00,
    0x44, 0x44, 0x40, 0x00,
    0x00, 0x00, 0x00, 0x00,

    // Anvil
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x44,
    0x00, 0x04, 0x45, 0x55,
    0x00, 0x45, 0x55, 0x55,
    0x00, 0x44, 0x45, 0x55,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x44, 0x44, 0x40, 0x00,
    0x55, 0x55, 0x40, 0x00,
    0x55, 0x45, 0x40, 0x00,
    0x55, 0x55, 0x40, 0x00,

    0x00, 0x49, 0x94, 0x44,
    0x00, 0x49, 0x99, 0x99,
    0x00, 0x04, 0x49, 0x99,
    0x00, 0x00, 0x04, 0x44,
    0x00, 0x00, 0x00, 0x44,
    0x00, 0x00, 0x04, 0x44,
    0x00, 0x00, 0x44, 0x44,
    0x00, 0x00, 0x00, 0x00,

    0x44, 0x44, 0x40, 0x00,
    0x99, 0x99, 0x40, 0x00,
    0x99, 0x99, 0x40, 0x00,
    0x44, 0x44, 0x40, 0x00,
    0x44, 0x40, 0x00, 0x00,
    0x44, 0x44, 0x00, 0x00,
    0x44, 0x44, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    // Chest
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xaa, 0xaa,
    0x00, 0x0a, 0xbb, 0xbb,
    0x00, 0xab, 0xbb, 0xbb,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0xaa, 0xaa, 0xaa, 0x00,
    0xbb, 0xbb, 0xba, 0xa0,
    0xbb, 0xbb, 0xaa, 0xa0,

    0x00, 0xac, 0xcc, 0xcc,
    0x00, 0xaa, 0xaa, 0xaa,
    0x00, 0xac, 0xcc, 0xab,
    0x00, 0xac, 0xcc, 0xac,
    0x00, 0xac, 0xcc, 0xaa,
    0x00, 0xac, 0xcc, 0xcc,
    0x00, 0xaa, 0xaa, 0xaa,
    0x00, 0x00, 0x00, 0x00,

    0xcc, 0xcc, 0xaa, 0xa0,
    0xaa, 0xaa, 0xac, 0xa0,
    0xac, 0xcc, 0xac, 0xa0,
    0xac, 0xcc, 0xac, 0xa0,
    0xac, 0xcc, 0xac, 0xa0,
    0xcc, 0xcc, 0xaa, 0x00,
    0xaa, 0xaa, 0xa0, 0x00,
    0x00, 0x00, 0x00, 0x00,

    // Lantern
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x99,
    0x00, 0x00, 0x09, 0x44,
    0x00, 0x00, 0x94, 0x44,
    0x00, 0x09, 0x99, 0x99,
    0x00, 0x09, 0x00, 0x40,
    0x00, 0x09, 0x00, 0x4d,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x99, 0x99, 0x99, 0x00,
    0x44, 0x44, 0x94, 0x00,
    0x44, 0x49, 0x04, 0x00,
    0x99, 0x90, 0x04, 0x00,
    0x00, 0x90, 0x04, 0x00,
    0xd0, 0x90, 0x04, 0x00,

    0x00, 0x09, 0x00, 0x4d,
    0x00, 0x09, 0x00, 0x4d,
    0x00, 0x09, 0x00, 0x4d,
    0x00, 0x09, 0x04, 0x4d,
    0x00, 0x09, 0x44, 0x44,
    0x00, 0x09, 0x99, 0x99,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0xd0, 0x90, 0x04, 0x00,
    0xd0, 0x90, 0x04, 0x00,
    0xd4, 0x94, 0x44, 0x00,
    0xd4, 0x94, 0x40, 0x00,
    0x44, 0x94, 0x00, 0x00,
    0x99, 0x90, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    // Smash Particle

    0x00, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00,
    0x00, 0x44, 0x00, 0x00,
    0x00, 0x44, 0x44, 0x00,
    0x00, 0x04, 0x44, 0x44,
    0x00, 0x04, 0x44, 0x44,
    0x00, 0x00, 0x44, 0x44,
    0x00, 0x00, 0x44, 0x44,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x40,
    0x00, 0x00, 0x44, 0x00,
    0x00, 0x44, 0x44, 0x00,
    0x44, 0x44, 0x40, 0x00,
    0x44, 0x44, 0x40, 0x00,
    0x44, 0x44, 0x00, 0x00,
    0x44, 0x44, 0x00, 0x00,

    0x00, 0x00, 0x44, 0x44,
    0x00, 0x00, 0x44, 0x44,
    0x00, 0x04, 0x44, 0x44,
    0x00, 0x04, 0x44, 0x44,
    0x00, 0x44, 0x44, 0x00,
    0x00, 0x44, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x44, 0x44, 0x00, 0x00,
    0x44, 0x44, 0x00, 0x00,
    0x44, 0x44, 0x40, 0x00,
    0x44, 0x44, 0x40, 0x00,
    0x00, 0x44, 0x44, 0x00,
    0x00, 0x00, 0x44, 0x00,
    0x00, 0x00, 0x00, 0x40,
    0x00, 0x00, 0x00, 0x00,

    // Attack Particle

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x44,
    0x00, 0x00, 0x44, 0x44,
    0x00, 0x04, 0x44, 0x44,
    0x00, 0x44, 0x40, 0x00,
    0x04, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x00,
    0x44, 0x00, 0x00, 0x00,
    0x44, 0x44, 0x00, 0x00,
    0x44, 0x44, 0x40, 0x00,
    0x00, 0x04, 0x44, 0x00,
    0x00, 0x00, 0x00, 0x40,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x00,
    0x00, 0x00, 0x40, 0x00,
    0x00, 0x04, 0x40, 0x00,
    0x00, 0x44, 0x40, 0x00,
    0x00, 0x44, 0x00, 0x00,
    0x04, 0x44, 0x00, 0x00,
    0x04, 0x44, 0x00, 0x00,

    0x04, 0x44, 0x00, 0x00,
    0x04, 0x44, 0x00, 0x00,
    0x00, 0x44, 0x00, 0x00,
    0x00, 0x44, 0x40, 0x00,
    0x00, 0x04, 0x40, 0x00,
    0x00, 0x00, 0x40, 0x00,
    0x00, 0x00, 0x04, 0x00,
    0x00, 0x00, 0x00, 0x00,
};

const u8 font_sprite_tileset[32 * 10] = {
    // 0
    0x05, 0x55, 0x55, 0x00,
    0x55, 0x66, 0x65, 0x50,
    0x55, 0x60, 0x05, 0x56,
    0x55, 0x65, 0x05, 0x56,
    0x55, 0x60, 0x65, 0x56,
    0x55, 0x60, 0x05, 0x56,
    0x05, 0x55, 0x55, 0x66,
    0x00, 0x66, 0x66, 0x60,

    // 1
    0x00, 0x05, 0x00, 0x00,
    0x00, 0x55, 0x60, 0x00,
    0x05, 0x55, 0x60, 0x00,
    0x00, 0x55, 0x60, 0x00,
    0x00, 0x55, 0x60, 0x00,
    0x00, 0x55, 0x60, 0x00,
    0x55, 0x55, 0x55, 0x00,
    0x06, 0x66, 0x66, 0x60,

    // 2
    0x05, 0x55, 0x55, 0x00,
    0x55, 0x66, 0x65, 0x50,
    0x06, 0x60, 0x55, 0x66,
    0x00, 0x05, 0x56, 0x60,
    0x00, 0x55, 0x66, 0x00,
    0x05, 0x56, 0x60, 0x00,
    0x55, 0x55, 0x55, 0x50,
    0x06, 0x66, 0x66, 0x66,

    // 3
    0x05, 0x55, 0x55, 0x00,
    0x55, 0x66, 0x65, 0x50,
    0x06, 0x60, 0x05, 0x56,
    0x00, 0x00, 0x55, 0x66,
    0x00, 0x00, 0x05, 0x50,
    0x55, 0x00, 0x05, 0x56,
    0x05, 0x55, 0x55, 0x66,
    0x00, 0x66, 0x66, 0x60,

    // 4
    0x55, 0x00, 0x05, 0x50,
    0x55, 0x60, 0x05, 0x56,
    0x55, 0x60, 0x05, 0x56,
    0x55, 0x55, 0x55, 0x56,
    0x06, 0x66, 0x65, 0x56,
    0x00, 0x00, 0x05, 0x56,
    0x00, 0x00, 0x05, 0x56,
    0x00, 0x00, 0x00, 0x66,

    // 5
    0x55, 0x55, 0x55, 0x50,
    0x55, 0x66, 0x66, 0x66,
    0x55, 0x60, 0x00, 0x00,
    0x55, 0x55, 0x55, 0x00,
    0x06, 0x66, 0x65, 0x50,
    0x55, 0x00, 0x05, 0x56,
    0x05, 0x55, 0x55, 0x66,
    0x00, 0x66, 0x66, 0x60,

    // 6
    0x05, 0x55, 0x55, 0x00,
    0x55, 0x66, 0x65, 0x50,
    0x55, 0x60, 0x00, 0x66,
    0x55, 0x55, 0x55, 0x00,
    0x55, 0x66, 0x65, 0x50,
    0x55, 0x60, 0x05, 0x56,
    0x05, 0x55, 0x55, 0x66,
    0x00, 0x66, 0x66, 0x60,

    // 7
    0x55, 0x55, 0x55, 0x50,
    0x06, 0x66, 0x65, 0x56,
    0x00, 0x00, 0x55, 0x66,
    0x00, 0x05, 0x56, 0x60,
    0x00, 0x55, 0x66, 0x00,
    0x00, 0x55, 0x60, 0x00,
    0x00, 0x55, 0x60, 0x00,
    0x00, 0x06, 0x60, 0x00,

    // 8
    0x05, 0x55, 0x55, 0x00,
    0x55, 0x66, 0x65, 0x50,
    0x55, 0x60, 0x05, 0x56,
    0x05, 0x55, 0x55, 0x66,
    0x55, 0x66, 0x65, 0x50,
    0x55, 0x60, 0x05, 0x56,
    0x05, 0x55, 0x55, 0x66,
    0x00, 0x66, 0x66, 0x60,

    // 9
    0x05, 0x55, 0x55, 0x00,
    0x55, 0x66, 0x65, 0x50,
    0x55, 0x60, 0x05, 0x56,
    0x05, 0x55, 0x55, 0x56,
    0x00, 0x66, 0x65, 0x56,
    0x55, 0x00, 0x05, 0x56,
    0x05, 0x55, 0x55, 0x66,
    0x00, 0x66, 0x66, 0x60
};
