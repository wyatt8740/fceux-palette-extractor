/* derived from two headers in FCEUX sourcecode:
   src/palette.h and src/palettes/palettes.h */

typedef struct {
        uint8_t r,g,b;
} pal;

#define EMPTY_PALETTE_1 {0,0,0},
#define EMPTY_PALETTE_4 EMPTY_PALETTE_1 EMPTY_PALETTE_1 EMPTY_PALETTE_1 EMPTY_PALETTE_1
#define EMPTY_PALETTE_16 EMPTY_PALETTE_4 EMPTY_PALETTE_4 EMPTY_PALETTE_4 EMPTY_PALETTE_4
#define EMPTY_PALETTE_64 EMPTY_PALETTE_16 EMPTY_PALETTE_16 EMPTY_PALETTE_16 EMPTY_PALETTE_16
#define EMPTY_PALETTE_DEEMPH_X_7 EMPTY_PALETTE_64 EMPTY_PALETTE_64 EMPTY_PALETTE_64 EMPTY_PALETTE_64 EMPTY_PALETTE_64 EMPTY_PALETTE_64 EMPTY_PALETTE_64

pal palette[512] = {
/* default*/
/*        { 0x1D<<2, 0x1D<<2, 0x1D<<2 },
        { 0x09<<2, 0x06<<2, 0x23<<2 },
        { 0x00<<2, 0x00<<2, 0x2A<<2 },
        { 0x11<<2, 0x00<<2, 0x27<<2 },
        { 0x23<<2, 0x00<<2, 0x1D<<2 },
        { 0x2A<<2, 0x00<<2, 0x04<<2 },
        { 0x29<<2, 0x00<<2, 0x00<<2 },
        { 0x1F<<2, 0x02<<2, 0x00<<2 },
        { 0x10<<2, 0x0B<<2, 0x00<<2 },
        { 0x00<<2, 0x11<<2, 0x00<<2 },
        { 0x00<<2, 0x14<<2, 0x00<<2 },
        { 0x00<<2, 0x0F<<2, 0x05<<2 },
        { 0x06<<2, 0x0F<<2, 0x17<<2 },
        { 0x00<<2, 0x00<<2, 0x00<<2 },
        { 0x00<<2, 0x00<<2, 0x00<<2 },
        { 0x00<<2, 0x00<<2, 0x00<<2 },
        { 0x2F<<2, 0x2F<<2, 0x2F<<2 },
        { 0x00<<2, 0x1C<<2, 0x3B<<2 },
        { 0x08<<2, 0x0E<<2, 0x3B<<2 },
        { 0x20<<2, 0x00<<2, 0x3C<<2 },
        { 0x2F<<2, 0x00<<2, 0x2F<<2 },
        { 0x39<<2, 0x00<<2, 0x16<<2 },
        { 0x36<<2, 0x0A<<2, 0x00<<2 },
        { 0x32<<2, 0x13<<2, 0x03<<2 },
        { 0x22<<2, 0x1C<<2, 0x00<<2 },
        { 0x00<<2, 0x25<<2, 0x00<<2 },
        { 0x00<<2, 0x2A<<2, 0x00<<2 },
        { 0x00<<2, 0x24<<2, 0x0E<<2 },
        { 0x00<<2, 0x20<<2, 0x22<<2 },
        { 0x00<<2, 0x00<<2, 0x00<<2 },
        { 0x00<<2, 0x00<<2, 0x00<<2 },
        { 0x00<<2, 0x00<<2, 0x00<<2 },
        { 0x3F<<2, 0x3F<<2, 0x3F<<2 },
        { 0x0F<<2, 0x2F<<2, 0x3F<<2 },
        { 0x17<<2, 0x25<<2, 0x3F<<2 },
        { 0x33<<2, 0x22<<2, 0x3F<<2 },
        { 0x3D<<2, 0x1E<<2, 0x3F<<2 },
        { 0x3F<<2, 0x1D<<2, 0x2D<<2 },
        { 0x3F<<2, 0x1D<<2, 0x18<<2 },
        { 0x3F<<2, 0x26<<2, 0x0E<<2 },
        { 0x3C<<2, 0x2F<<2, 0x0F<<2 },
        { 0x20<<2, 0x34<<2, 0x04<<2 },
        { 0x13<<2, 0x37<<2, 0x12<<2 },
        { 0x16<<2, 0x3E<<2, 0x26<<2 },
        { 0x00<<2, 0x3A<<2, 0x36<<2 },
        { 0x1E<<2, 0x1E<<2, 0x1E<<2 },
        { 0x00<<2, 0x00<<2, 0x00<<2 },
        { 0x00<<2, 0x00<<2, 0x00<<2 },
        { 0x3F<<2, 0x3F<<2, 0x3F<<2 },
        { 0x2A<<2, 0x39<<2, 0x3F<<2 },
        { 0x31<<2, 0x35<<2, 0x3F<<2 },
        { 0x35<<2, 0x32<<2, 0x3F<<2 },
        { 0x3F<<2, 0x31<<2, 0x3F<<2 },
        { 0x3F<<2, 0x31<<2, 0x36<<2 },
        { 0x3F<<2, 0x2F<<2, 0x2C<<2 },
        { 0x3F<<2, 0x36<<2, 0x2A<<2 },
        { 0x3F<<2, 0x39<<2, 0x28<<2 },
        { 0x38<<2, 0x3F<<2, 0x28<<2 },
        { 0x2A<<2, 0x3C<<2, 0x2F<<2 },
        { 0x2C<<2, 0x3F<<2, 0x33<<2 },
        { 0x27<<2, 0x3F<<2, 0x3C<<2 },
        { 0x31<<2, 0x31<<2, 0x31<<2 },
        { 0x00<<2, 0x00<<2, 0x00<<2 },
        { 0x00<<2, 0x00<<2, 0x00<<2 },*/

/* slightly better but too dark: */
/*
        {0x5C, 0x5C, 0x5C},
        {0x00, 0x20, 0x74},
        {0x00, 0x00, 0x98},
        {0x30, 0x00, 0x84},
        {0x58, 0x00, 0x68},
        {0x68, 0x00, 0x30},
        {0x60, 0x00, 0x00},
        {0x48, 0x10, 0x00},
        {0x28, 0x18, 0x00},
        {0x20, 0x28, 0x00},
        {0x00, 0x40, 0x00},
        {0x00, 0x38, 0x30},
        {0x00, 0x38, 0x48},
        {0x00, 0x00, 0x00},
        {0x10, 0x10, 0x10},
        {0x10, 0x10, 0x10},
        {0xAA, 0xAA, 0xAA},
        {0x18, 0x54, 0xBC},
        {0x28, 0x30, 0xF8},
        {0x68, 0x20, 0xD8},
        {0xA8, 0x00, 0xB8},
        {0xB8, 0x14, 0x5C},
        {0xB8, 0x18, 0x10},
        {0x8C, 0x38, 0x0C},
        {0x60, 0x50, 0x00},
        {0x3C, 0x60, 0x00},
        {0x00, 0x78, 0x00},
        {0x00, 0x70, 0x4C},
        {0x00, 0x70, 0x80},
        {0xFF, 0xFF, 0x10},
        {0x10, 0xFF, 0xFF},
        {0x10, 0x10, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {0x4C, 0x9C, 0xEC},
        {0x78, 0x80, 0xFF},
        {0xAC, 0x70, 0xFF},
        {0xE0, 0x60, 0xF0},
        {0xFC, 0x68, 0xA4},
        {0xFF, 0x70, 0x68},
        {0xE2, 0x92, 0x38},
        {0xBB, 0xAB, 0x00},
        {0x7E, 0xC2, 0x1C},
        {0x40, 0xD0, 0x30},
        {0x28, 0xC4, 0x80},
        {0x20, 0xB8, 0xC0},
        {0x48, 0x48, 0x48},
        {0x10, 0x10, 0x10},
        {0x10, 0x10, 0x10},
        {0xFF, 0xFF, 0xFF},
        {0xB4, 0xD4, 0xFF},
        {0xC0, 0xC8, 0xFF},
        {0xD8, 0xC4, 0xFF},
        {0xF0, 0xC0, 0xFF},
        {0xFF, 0xC4, 0xD8},
        {0xFF, 0xC8, 0xC0},
        {0xF8, 0xD4, 0xAC},
        {0xE8, 0xE0, 0x98},
        {0xD0, 0xE8, 0xA0},
        {0xB8, 0xF0, 0xA8},
        {0xA8, 0xE8, 0xD0},
        {0xA8, 0xE0, 0xE8},
        {0xB2, 0xB2, 0xB2},
        {0x10, 0xFF, 0x10},
        {0xFF, 0x10, 0x10},
*/



/* luke's .16+ palette */
        {0x60, 0x60, 0x60},
        {0x00, 0x00, 0x70},
        {0x14, 0x00, 0x80},
        {0x2C, 0x00, 0x6E},
        {0x4A, 0x00, 0x4E},
        {0x6C, 0x00, 0x18},
        {0x5A, 0x03, 0x02},
        {0x51, 0x18, 0x00},
        {0x34, 0x24, 0x00},
        {0x00, 0x34, 0x00},
        {0x00, 0x32, 0x00},
        {0x00, 0x34, 0x20},
        {0x00, 0x2C, 0x78},
        {0x00, 0x00, 0x00},
        {0x02, 0x02, 0x02},
        {0x02, 0x02, 0x02},
        {0xC4, 0xC4, 0xC4},
        {0x00, 0x58, 0xDE},
        {0x30, 0x1F, 0xFC},
        {0x7F, 0x14, 0xE0},
        {0xA8, 0x00, 0xB0},
        {0xC0, 0x06, 0x5C},
        {0xC0, 0x2B, 0x0E},
        {0xA6, 0x40, 0x10},
        {0x6F, 0x61, 0x00},
        {0x30, 0x80, 0x00},
        {0x00, 0x7C, 0x00},
        {0x00, 0x7C, 0x3C},
        {0x00, 0x6E, 0x84},
        {0x14, 0x14, 0x14},
        {0x04, 0x04, 0x04},
        {0x04, 0x04, 0x04},
        {0xF0, 0xF0, 0xF0},
        {0x4C, 0xAA, 0xFF},
        {0x6F, 0x73, 0xF5},
        {0xB0, 0x70, 0xFF},
        {0xDA, 0x5A, 0xFF},
        {0xF0, 0x60, 0xC0},
        {0xF8, 0x83, 0x6D},
        {0xD0, 0x90, 0x30},
        {0xD4, 0xC0, 0x30},
        {0x66, 0xD0, 0x00},
        {0x26, 0xDD, 0x1A},
        {0x2E, 0xC8, 0x66},
        {0x34, 0xC2, 0xBE},
        {0x54, 0x54, 0x54},
        {0x06, 0x06, 0x06},
        {0x06, 0x06, 0x06},
        {0xFF, 0xFF, 0xFF},
        {0xB6, 0xDA, 0xFF},
        {0xC8, 0xCA, 0xFF},
        {0xDA, 0xC2, 0xFF},
        {0xF0, 0xBE, 0xFF},
        {0xFC, 0xBC, 0xEE},
        {0xFF, 0xD0, 0xB4},
        {0xFF, 0xDA, 0x90},
        {0xEC, 0xEC, 0x92},
        {0xDC, 0xF6, 0x9E},
        {0xB8, 0xFF, 0xA2},
        {0xAE, 0xEA, 0xBE},
        {0x9E, 0xEF, 0xEF},
        {0xBE, 0xBE, 0xBE},
        {0x08, 0x08, 0x08},
        {0x08, 0x08, 0x08},


/* always leave the following line un-commented: */
EMPTY_PALETTE_DEEMPH_X_7
};
