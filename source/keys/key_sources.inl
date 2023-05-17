/*
 * Copyright (c) 2019-2022 shchmue
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* EristaMasterKekSource */
static const u8 master_kek_sources[KB_FIRMWARE_VERSION_MAX - KB_FIRMWARE_VERSION_620 + 1][0x10] __attribute__((aligned(4))) = {
    {0x37, 0x4B, 0x77, 0x29, 0x59, 0xB4, 0x04, 0x30, 0x81, 0xF6, 0xE5, 0x8C, 0x6D, 0x36, 0x17, 0x9A}, //6.2.0
    {0x9A, 0x3E, 0xA9, 0xAB, 0xFD, 0x56, 0x46, 0x1C, 0x9B, 0xF6, 0x48, 0x7F, 0x5C, 0xFA, 0x09, 0x5C}, //7.0.0
    {0xDE, 0xDC, 0xE3, 0x39, 0x30, 0x88, 0x16, 0xF8, 0xAE, 0x97, 0xAD, 0xEC, 0x64, 0x2D, 0x41, 0x41}, //8.1.0
    {0x1A, 0xEC, 0x11, 0x82, 0x2B, 0x32, 0x38, 0x7A, 0x2B, 0xED, 0xBA, 0x01, 0x47, 0x7E, 0x3B, 0x67}, //9.0.0
    {0x30, 0x3F, 0x02, 0x7E, 0xD8, 0x38, 0xEC, 0xD7, 0x93, 0x25, 0x34, 0xB5, 0x30, 0xEB, 0xCA, 0x7A}, //9.1.0
    {0x84, 0x67, 0xB6, 0x7F, 0x13, 0x11, 0xAE, 0xE6, 0x58, 0x9B, 0x19, 0xAF, 0x13, 0x6C, 0x80, 0x7A}, //12.1.0
    {0x68, 0x3B, 0xCA, 0x54, 0xB8, 0x6F, 0x92, 0x48, 0xC3, 0x05, 0x76, 0x87, 0x88, 0x70, 0x79, 0x23}, //13.0.0
    {0xF0, 0x13, 0x37, 0x9A, 0xD5, 0x63, 0x51, 0xC3, 0xB4, 0x96, 0x35, 0xBC, 0x9C, 0xE8, 0x76, 0x81}, //14.0.0
    {0x6E, 0x77, 0x86, 0xAC, 0x83, 0x0A, 0x8D, 0x3E, 0x7D, 0xB7, 0x66, 0xA0, 0x22, 0xB7, 0x6E, 0x67}, //15.0.0
    {0x99, 0x22, 0x09, 0x57, 0xA7, 0xF9, 0x5E, 0x94, 0xFE, 0x78, 0x7F, 0x41, 0xD6, 0xE7, 0x56, 0xE6}, //16.0.0
}; //!TODO: Update on mkey changes.


/* Production Master Key Vectors. */
static const u8 master_key_vectors[KB_FIRMWARE_VERSION_MAX + 1][0x10] __attribute__((aligned(4))) = {
    {0x0C, 0xF0, 0x59, 0xAC, 0x85, 0xF6, 0x26, 0x65, 0xE1, 0xE9, 0x19, 0x55, 0xE6, 0xF2, 0x67, 0x3D}, /* Zeroes encrypted with Master Key 00. */
    {0x29, 0x4C, 0x04, 0xC8, 0xEB, 0x10, 0xED, 0x9D, 0x51, 0x64, 0x97, 0xFB, 0xF3, 0x4D, 0x50, 0xDD}, /* Master key 00 encrypted with Master key 01. */
    {0xDE, 0xCF, 0xEB, 0xEB, 0x10, 0xAE, 0x74, 0xD8, 0xAD, 0x7C, 0xF4, 0x9E, 0x62, 0xE0, 0xE8, 0x72}, /* Master key 01 encrypted with Master key 02. */
    {0x0A, 0x0D, 0xDF, 0x34, 0x22, 0x06, 0x6C, 0xA4, 0xE6, 0xB1, 0xEC, 0x71, 0x85, 0xCA, 0x4E, 0x07}, /* Master key 02 encrypted with Master key 03. */
    {0x6E, 0x7D, 0x2D, 0xC3, 0x0F, 0x59, 0xC8, 0xFA, 0x87, 0xA8, 0x2E, 0xD5, 0x89, 0x5E, 0xF3, 0xE9}, /* Master key 03 encrypted with Master key 04. */
    {0xEB, 0xF5, 0x6F, 0x83, 0x61, 0x9E, 0xF8, 0xFA, 0xE0, 0x87, 0xD7, 0xA1, 0x4E, 0x25, 0x36, 0xEE}, /* Master key 04 encrypted with Master key 05. */
    {0x1E, 0x1E, 0x22, 0xC0, 0x5A, 0x33, 0x3C, 0xB9, 0x0B, 0xA9, 0x03, 0x04, 0xBA, 0xDB, 0x07, 0x57}, /* Master key 05 encrypted with Master key 06. */
    {0xA4, 0xD4, 0x52, 0x6F, 0xD1, 0xE4, 0x36, 0xAA, 0x9F, 0xCB, 0x61, 0x27, 0x1C, 0x67, 0x65, 0x1F}, /* Master key 06 encrypted with Master key 07. */
    {0xEA, 0x60, 0xB3, 0xEA, 0xCE, 0x8F, 0x24, 0x46, 0x7D, 0x33, 0x9C, 0xD1, 0xBC, 0x24, 0x98, 0x29}, /* Master key 07 encrypted with Master key 08. */
    {0x4D, 0xD9, 0x98, 0x42, 0x45, 0x0D, 0xB1, 0x3C, 0x52, 0x0C, 0x9A, 0x44, 0xBB, 0xAD, 0xAF, 0x80}, /* Master key 08 encrypted with Master key 09. */
    {0xB8, 0x96, 0x9E, 0x4A, 0x00, 0x0D, 0xD6, 0x28, 0xB3, 0xD1, 0xDB, 0x68, 0x5F, 0xFB, 0xE1, 0x2A}, /* Master key 09 encrypted with Master key 0A. */
    {0xC1, 0x8D, 0x16, 0xBB, 0x2A, 0xE4, 0x1D, 0xD4, 0xC2, 0xC1, 0xB6, 0x40, 0x94, 0x35, 0x63, 0x98}, /* Master key 0A encrypted with Master key 0B. */
    {0xA3, 0x24, 0x65, 0x75, 0xEA, 0xCC, 0x6E, 0x8D, 0xFB, 0x5A, 0x16, 0x50, 0x74, 0xD2, 0x15, 0x06}, /* Master key 0B encrypted with Master key 0C. */
    {0x83, 0x67, 0xAF, 0x01, 0xCF, 0x93, 0xA1, 0xAB, 0x80, 0x45, 0xF7, 0x3F, 0x72, 0xFD, 0x3B, 0x38}, /* Master key 0C encrypted with Master key 0D. */
    {0xB1, 0x81, 0xA6, 0x0D, 0x72, 0xC7, 0xEE, 0x15, 0x21, 0xF3, 0xC0, 0xB5, 0x6B, 0x61, 0x6D, 0xE7}, /* Master key 0D encrypted with Master key 0E. */
    {0xAF, 0x11, 0x4C, 0x67, 0x17, 0x7A, 0x52, 0x43, 0xF7, 0x70, 0x2F, 0xC7, 0xEF, 0x81, 0x72, 0x16}, /* Master key 0E encrypted with Master key 0F. */
}; //!TODO: Update on mkey changes.


/* Development Master Key Vectors. */
static const u8 master_key_vectors_dev[KB_FIRMWARE_VERSION_MAX + 1][0x10] __attribute__((aligned(4))) = {
    {0x46, 0x22, 0xB4, 0x51, 0x9A, 0x7E, 0xA7, 0x7F, 0x62, 0xA1, 0x1F, 0x8F, 0xC5, 0x3A, 0xDB, 0xFE}, /* Zeroes encrypted with Master Key 00. */
    {0x39, 0x33, 0xF9, 0x31, 0xBA, 0xE4, 0xA7, 0x21, 0x2C, 0xDD, 0xB7, 0xD8, 0xB4, 0x4E, 0x37, 0x23}, /* Master key 00 encrypted with Master key 01. */
    {0x97, 0x29, 0xB0, 0x32, 0x43, 0x14, 0x8C, 0xA6, 0x85, 0xE9, 0x5A, 0x94, 0x99, 0x39, 0xAC, 0x5D}, /* Master key 01 encrypted with Master key 02. */
    {0x2C, 0xCA, 0x9C, 0x31, 0x1E, 0x07, 0xB0, 0x02, 0x97, 0x0A, 0xD8, 0x03, 0xA2, 0x76, 0x3F, 0xA3}, /* Master key 02 encrypted with Master key 03. */
    {0x9B, 0x84, 0x76, 0x14, 0x72, 0x94, 0x52, 0xCB, 0x54, 0x92, 0x9B, 0xC4, 0x8C, 0x5B, 0x0F, 0xBA}, /* Master key 03 encrypted with Master key 04. */
    {0x78, 0xD5, 0xF1, 0x20, 0x3D, 0x16, 0xE9, 0x30, 0x32, 0x27, 0x34, 0x6F, 0xCF, 0xE0, 0x27, 0xDC}, /* Master key 04 encrypted with Master key 05. */
    {0x6F, 0xD2, 0x84, 0x1D, 0x05, 0xEC, 0x40, 0x94, 0x5F, 0x18, 0xB3, 0x81, 0x09, 0x98, 0x8D, 0x4E}, /* Master key 05 encrypted with Master key 06. */
    {0x37, 0xAF, 0xAB, 0x35, 0x79, 0x09, 0xD9, 0x48, 0x29, 0xD2, 0xDB, 0xA5, 0xA5, 0xF5, 0x30, 0x19}, /* Master key 06 encrypted with Master key 07. */
    {0xEC, 0xE1, 0x46, 0x89, 0x37, 0xFD, 0xD2, 0x15, 0x8C, 0x3F, 0x24, 0x82, 0xEF, 0x49, 0x68, 0x04}, /* Master key 07 encrypted with Master key 08. */
    {0x43, 0x3D, 0xC5, 0x3B, 0xEF, 0x91, 0x02, 0x21, 0x61, 0x54, 0x63, 0x8A, 0x35, 0xE7, 0xCA, 0xEE}, /* Master key 08 encrypted with Master key 09. */
    {0x6C, 0x2E, 0xCD, 0xB3, 0x34, 0x61, 0x77, 0xF5, 0xF9, 0xB1, 0xDD, 0x61, 0x98, 0x19, 0x3E, 0xD4}, /* Master key 09 encrypted with Master key 0A. */
    {0x21, 0x88, 0x6B, 0x10, 0x9E, 0x83, 0xD6, 0x52, 0xAB, 0x08, 0xDB, 0x6D, 0x39, 0xFF, 0x1C, 0x9C}, /* Master key 0A encrypted with Master key 0B. */
    {0x8A, 0xCE, 0xC4, 0x7F, 0xBE, 0x08, 0x61, 0x88, 0xD3, 0x73, 0x64, 0x51, 0xE2, 0xB6, 0x53, 0x15}, /* Master key 0B encrypted with Master key 0C. */
    {0x08, 0xE0, 0xF4, 0xBE, 0xAA, 0x6E, 0x5A, 0xC3, 0xA6, 0xBC, 0xFE, 0xB9, 0xE2, 0xA3, 0x24, 0x12}, /* Master key 0C encrypted with Master key 0D. */
    {0xD6, 0x80, 0x98, 0xC0, 0xFA, 0xC7, 0x13, 0xCB, 0x93, 0xD2, 0x0B, 0x82, 0x4C, 0xA1, 0x7B, 0x8D}, /* Master key 0D encrypted with Master key 0E. */
    {0x78, 0x66, 0x19, 0xBD, 0x86, 0xE7, 0xC1, 0x09, 0x9B, 0x6F, 0x92, 0xB2, 0x58, 0x7D, 0xCF, 0x26}, /* Master key 0E encrypted with Master key 0F. */
}; //!TODO: Update on mkey changes.


static const u8 mariko_key_vectors[][0x10] __attribute__((aligned(4))) = {
    {0x20, 0x9E, 0x97, 0xAE, 0xAF, 0x7E, 0x6A, 0xF6, 0x9E, 0xF5, 0xA7, 0x17, 0x2F, 0xF4, 0x49, 0xA6}, /* Zeroes encrypted with AES Class Key 00. */
    {0x83, 0x1C, 0xC7, 0x7F, 0xB8, 0xB2, 0x66, 0x16, 0xFC, 0x6B, 0x81, 0xBB, 0xF6, 0x05, 0x07, 0x49}, /* Zeroes encrypted with AES Class Key 01. */
    {0x61, 0x19, 0xBA, 0x39, 0x6D, 0xFA, 0xF4, 0x63, 0x27, 0x8E, 0x9E, 0xB1, 0xEA, 0xD4, 0x65, 0xCC}, /* Zeroes encrypted with AES Class Key 02. */
    {0x6C, 0xDB, 0x10, 0xD4, 0x14, 0x3A, 0xBD, 0x22, 0xC9, 0xCC, 0xEF, 0xE4, 0xA0, 0x94, 0x85, 0x87}, /* Zeroes encrypted with AES Class Key 03. */
    {0xD3, 0x40, 0xC7, 0x86, 0xDC, 0x77, 0x50, 0x7C, 0x01, 0x56, 0x11, 0xDE, 0x18, 0xDF, 0x30, 0xCA}, /* Zeroes encrypted with AES Class Key 04. */
    {0xC4, 0x8B, 0xD7, 0x5A, 0x22, 0x6C, 0xF7, 0x85, 0xE4, 0xC0, 0x68, 0xFC, 0xB4, 0xD8, 0x76, 0x6C}, /* Zeroes encrypted with AES Class Key 05. */
    {0x83, 0x86, 0xEF, 0xE6, 0x6B, 0x38, 0x24, 0xD3, 0xC9, 0xB0, 0xE7, 0x03, 0x59, 0xC8, 0x54, 0xB9}, /* Zeroes encrypted with AES Class Key 06. */
    {0xDA, 0xC0, 0xD3, 0x27, 0x1D, 0x35, 0xAB, 0x4B, 0x01, 0x63, 0x90, 0xED, 0x1B, 0x5D, 0xA7, 0x6C}, /* Zeroes encrypted with AES Class Key 07. */
    {0x96, 0x75, 0x0E, 0x4F, 0xF5, 0x1A, 0xAF, 0xD4, 0x30, 0x73, 0x8C, 0x61, 0x03, 0xE5, 0xF7, 0x80}, /* Zeroes encrypted with AES Class Key 08. */
    {0x74, 0xF2, 0x1D, 0xA1, 0x4C, 0x48, 0x91, 0xE6, 0xE0, 0xD5, 0x19, 0x42, 0x2A, 0x2B, 0x5D, 0xF8}, /* Zeroes encrypted with AES Class Key 09. */
    {0x7D, 0xA6, 0xFE, 0xDA, 0xF9, 0xEF, 0x83, 0xD8, 0x29, 0x40, 0x24, 0x6D, 0x70, 0x8D, 0x99, 0x93}, /* Zeroes encrypted with AES Class Key 0A. */
    {0xF6, 0x71, 0xAD, 0xC3, 0xCD, 0xD4, 0x2F, 0x37, 0xAB, 0x50, 0x1C, 0x9B, 0xAF, 0x3B, 0xE6, 0xC3}, /* Zeroes encrypted with AES Class Key 0B. */
    {0x01, 0x96, 0x59, 0x07, 0x62, 0xF4, 0xF4, 0x2D, 0x13, 0x60, 0xD8, 0x03, 0xFB, 0xF0, 0xAE, 0xC8}, /* Zeroes encrypted with Mariko KEK. */
    {0x95, 0x48, 0xC1, 0x59, 0x0F, 0x84, 0x19, 0xC4, 0xAB, 0x69, 0x05, 0x88, 0x01, 0x31, 0x52, 0x59}, /* Zeroes encrypted with Mariko BEK. */
};

static const u8 package2_key_source[0x10] __attribute__((aligned(4))) = {
    0xFB, 0x8B, 0x6A, 0x9C, 0x79, 0x00, 0xC8, 0x49, 0xEF, 0xD2, 0x4D, 0x85, 0x4D, 0x30, 0xA0, 0xC7};
static const u8 titlekek_source[0x10] __attribute__((aligned(4))) = {
    0x1E, 0xDC, 0x7B, 0x3B, 0x60, 0xE6, 0xB4, 0xD8, 0x78, 0xB8, 0x17, 0x15, 0x98, 0x5E, 0x62, 0x9B};

static const u8 keyblob_key_sources[][0x10] __attribute__((aligned(4))) = {
    {0xDF, 0x20, 0x6F, 0x59, 0x44, 0x54, 0xEF, 0xDC, 0x70, 0x74, 0x48, 0x3B, 0x0D, 0xED, 0x9F, 0xD3}, //1.0.0
    {0x0C, 0x25, 0x61, 0x5D, 0x68, 0x4C, 0xEB, 0x42, 0x1C, 0x23, 0x79, 0xEA, 0x82, 0x25, 0x12, 0xAC}, //3.0.0
    {0x33, 0x76, 0x85, 0xEE, 0x88, 0x4A, 0xAE, 0x0A, 0xC2, 0x8A, 0xFD, 0x7D, 0x63, 0xC0, 0x43, 0x3B}, //3.0.1
    {0x2D, 0x1F, 0x48, 0x80, 0xED, 0xEC, 0xED, 0x3E, 0x3C, 0xF2, 0x48, 0xB5, 0x65, 0x7D, 0xF7, 0xBE}, //4.0.0
    {0xBB, 0x5A, 0x01, 0xF9, 0x88, 0xAF, 0xF5, 0xFC, 0x6C, 0xFF, 0x07, 0x9E, 0x13, 0x3C, 0x39, 0x80}, //5.0.0
    {0xD8, 0xCC, 0xE1, 0x26, 0x6A, 0x35, 0x3F, 0xCC, 0x20, 0xF3, 0x2D, 0x3B, 0x51, 0x7D, 0xE9, 0xC0}  //6.0.0
};
static const u8 keyblob_mac_key_source[0x10] __attribute__((aligned(4))) = {
    0x59, 0xC7, 0xFB, 0x6F, 0xBE, 0x9B, 0xBE, 0x87, 0x65, 0x6B, 0x15, 0xC0, 0x53, 0x73, 0x36, 0xA5};

/* Device Master Key Source Kek Source. */
static const u8 master_key_source[0x10] __attribute__((aligned(4))) = {
    0xD8, 0xA2, 0x41, 0x0A, 0xC6, 0xC5, 0x90, 0x01, 0xC6, 0x1D, 0x6A, 0x26, 0x7C, 0x51, 0x3F, 0x3C};

static const u8 per_console_key_source[0x10] __attribute__((aligned(4))) = {
    0x4F, 0x02, 0x5F, 0x0E, 0xB6, 0x6D, 0x11, 0x0E, 0xDC, 0x32, 0x7D, 0x41, 0x86, 0xC2, 0xF4, 0x78};


/* Device Master Key Source Kek Source. */
static const u8 device_master_key_source_kek_source[0x10] __attribute__((aligned(4))) = {
    0x0C, 0x91, 0x09, 0xDB, 0x93, 0x93, 0x07, 0x81, 0x07, 0x3C, 0xC4, 0x16, 0x22, 0x7C, 0x6C, 0x28};


/* Mariko Production Master Kek Source. */
static const u8 mariko_master_kek_sources[KB_FIRMWARE_VERSION_MAX - KB_FIRMWARE_VERSION_600 + 1][0x10] __attribute__((aligned(4))) = {
    {0x77, 0x60, 0x5A, 0xD2, 0xEE, 0x6E, 0xF8, 0x3C, 0x3F, 0x72, 0xE2, 0x59, 0x9D, 0xAC, 0x5E, 0x56}, // 6.0.0.
    {0x1E, 0x80, 0xB8, 0x17, 0x3E, 0xC0, 0x60, 0xAA, 0x11, 0xBE, 0x1A, 0x4A, 0xA6, 0x6F, 0xE4, 0xAE}, // 6.2.0.
    {0x94, 0x08, 0x67, 0xBD, 0x0A, 0x00, 0x38, 0x84, 0x11, 0xD3, 0x1A, 0xDB, 0xDD, 0x8D, 0xF1, 0x8A}, // 7.0.0.
    {0x5C, 0x24, 0xE3, 0xB8, 0xB4, 0xF7, 0x00, 0xC2, 0x3C, 0xFD, 0x0A, 0xCE, 0x13, 0xC3, 0xDC, 0x23}, // 8.1.0.
    {0x86, 0x69, 0xF0, 0x09, 0x87, 0xC8, 0x05, 0xAE, 0xB5, 0x7B, 0x48, 0x74, 0xDE, 0x62, 0xA6, 0x13}, // 9.0.0.
    {0x0E, 0x44, 0x0C, 0xED, 0xB4, 0x36, 0xC0, 0x3F, 0xAA, 0x1D, 0xAE, 0xBF, 0x62, 0xB1, 0x09, 0x82}, // 9.1.0.
    {0xE5, 0x41, 0xAC, 0xEC, 0xD1, 0xA7, 0xD1, 0xAB, 0xED, 0x03, 0x77, 0xF1, 0x27, 0xCA, 0xF8, 0xF1}, // 12.1.0.
    {0x52, 0x71, 0x9B, 0xDF, 0xA7, 0x8B, 0x61, 0xD8, 0xD5, 0x85, 0x11, 0xE4, 0x8E, 0x4F, 0x74, 0xC6}, // 13.0.0.
    {0xD2, 0x68, 0xC6, 0x53, 0x9D, 0x94, 0xF9, 0xA8, 0xA5, 0xA8, 0xA7, 0xC8, 0x8F, 0x53, 0x4B, 0x7A}, // 14.0.0.
    {0xEC, 0x61, 0xBC, 0x82, 0x1E, 0x0F, 0x5A, 0xC3, 0x2B, 0x64, 0x3F, 0x9D, 0xD6, 0x19, 0x22, 0x2D}, // 15.0.0.
    {0xA5, 0xEC, 0x16, 0x39, 0x1A, 0x30, 0x16, 0x08, 0x2E, 0xCF, 0x09, 0x6F, 0x5E, 0x7C, 0xEE, 0xA9}, // 16.0.0.
}; //!TODO: Update on mkey changes.


/* Mariko Development Master Kek Source. */
static const u8 mariko_master_kek_sources_dev[KB_FIRMWARE_VERSION_MAX - KB_FIRMWARE_VERSION_600 + 1][0x10] __attribute__((aligned(4))) = {
    {0x32, 0xC0, 0x97, 0x6B, 0x63, 0x6D, 0x44, 0x64, 0xF2, 0x3A, 0xA5, 0xC0, 0xDE, 0x46, 0xCC, 0xE9}, // 6.0.0.
    {0xCC, 0x97, 0x4C, 0x46, 0x2A, 0x0C, 0xB0, 0xA6, 0xC9, 0xC0, 0xB7, 0xBE, 0x30, 0x2E, 0xC3, 0x68}, // 6.2.0.
    {0x86, 0xBD, 0x1D, 0x76, 0x50, 0xDF, 0x6D, 0xFA, 0x2C, 0x7D, 0x33, 0x22, 0xAB, 0xF1, 0x82, 0x18}, // 7.0.0.
    {0xA3, 0xB1, 0xE0, 0xA9, 0x58, 0xA2, 0x26, 0x7F, 0x40, 0xBF, 0x5B, 0xBB, 0x87, 0x33, 0x0B, 0x66}, // 8.1.0.
    {0x82, 0x72, 0x91, 0x65, 0x40, 0x3B, 0x9D, 0x66, 0x60, 0xD0, 0x1B, 0x3D, 0x4D, 0xA5, 0x70, 0xE1}, // 9.0.0.
    {0xF9, 0x37, 0xCF, 0x9A, 0xBD, 0x86, 0xBB, 0xA9, 0x9C, 0x9E, 0x03, 0xC4, 0xFC, 0xBC, 0x3B, 0xCE}, // 9.1.0.
    {0x75, 0x2D, 0x2E, 0xF3, 0x2F, 0x3F, 0xFE, 0x65, 0xF4, 0xA9, 0x83, 0xB4, 0xED, 0x42, 0x63, 0xBA}, // 12.1.0.
    {0x4D, 0x5A, 0xB2, 0xC9, 0xE9, 0xE4, 0x4E, 0xA4, 0xD3, 0xBF, 0x94, 0x12, 0x36, 0x30, 0xD0, 0x7F}, // 13.0.0.
    {0xEC, 0x5E, 0xB5, 0x11, 0xD5, 0x43, 0x1E, 0x6A, 0x4E, 0x54, 0x6F, 0xD4, 0xD3, 0x22, 0xCE, 0x87}, // 14.0.0.
    {0x18, 0xA5, 0x6F, 0xEF, 0x72, 0x11, 0x62, 0xC5, 0x1A, 0x14, 0xF1, 0x8C, 0x21, 0x83, 0x27, 0xB7}, // 15.0.0.
    {0x3A, 0x9C, 0xF0, 0x39, 0x70, 0x23, 0xF6, 0xAF, 0x71, 0x44, 0x60, 0xF4, 0x6D, 0xED, 0xA1, 0xD6}, // 16.0.0.
}; //!TODO: Update on mkey changes.