/*
* Created by yuikonnu on 02/11/2018.
*/

#include "keys.h"

namespace xe {
namespace crypto {
namespace keys {

const uint8_t cpuRomKey[16] = {
        0xDD, 0x88, 0xAD, 0xC, 0x9E, 0xD6, 0x69, 0xE7, 0xB5, 0x67, 0x94, 0xFB, 0x68, 0x56, 0x3E, 0xFA};

const uint8_t masterManufacturingKeyDevKit[0x390] = {
        0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xCB, 0xB9, 0x93, 0xCD, 0xC1, 0x7D, 0x10, 0xB5, 0x85, 0xBC, 0x65, 0x7C, 0xE8, 0x7C, 0xB2, 0xDF,
        0x64, 0x55, 0xE9, 0x9D, 0x9E, 0xDA, 0x7F, 0x46, 0x82, 0xD0, 0x15, 0x69, 0xBC, 0x98, 0x3D, 0x83,
        0x07, 0xCC, 0xDE, 0x8C, 0x3A, 0x52, 0xC1, 0x28, 0xF0, 0xF0, 0xEC, 0x95, 0x24, 0xAF, 0xD6, 0x3D,
        0xBB, 0xD4, 0x82, 0x11, 0x2E, 0xF7, 0x1F, 0xB4, 0x1C, 0x95, 0xA7, 0x94, 0x82, 0x9F, 0x34, 0x6D,
        0xF7, 0x20, 0xA2, 0x11, 0xBF, 0xB8, 0xA9, 0x67, 0xE4, 0x25, 0x0E, 0x4B, 0x5D, 0x3C, 0x7F, 0x33,
        0xC4, 0xB5, 0x65, 0x15, 0x49, 0xFA, 0xAB, 0xD8, 0xFF, 0xF3, 0x4E, 0xD6, 0x0F, 0x37, 0x8E, 0x4F,
        0x9B, 0xFE, 0x5C, 0x4E, 0x7B, 0xE7, 0xBA, 0x02, 0xF3, 0x4A, 0x56, 0x4E, 0xE4, 0xAD, 0x37, 0x8D,
        0xAA, 0x15, 0x90, 0x2F, 0xE2, 0xF5, 0xF9, 0x1B, 0x6F, 0x49, 0xBA, 0x10, 0xB2, 0x1C, 0xE1, 0x8C,
        0x9F, 0x82, 0x5D, 0x88, 0x3C, 0x0E, 0xC0, 0x1F, 0x88, 0x48, 0xEC, 0x10, 0xC3, 0x57, 0x76, 0x94,
        0xF6, 0xE2, 0xDF, 0xB6, 0xD1, 0x50, 0xAE, 0x2E, 0x1C, 0xE2, 0xB7, 0xE0, 0xD0, 0x5A, 0xD3, 0x79,
        0x7E, 0x1F, 0x8C, 0xC7, 0xC1, 0x32, 0xF0, 0xC5, 0x7C, 0xC3, 0x14, 0x04, 0x5A, 0xCE, 0xC3, 0x53,
        0xD8, 0x4F, 0x2D, 0xD7, 0xF9, 0x8B, 0xC9, 0x9A, 0xB7, 0xD7, 0x97, 0x06, 0xFB, 0x94, 0xF3, 0x0A,
        0xC2, 0x4B, 0xC1, 0x34, 0x53, 0x78, 0xFD, 0x31, 0xCE, 0x73, 0x10, 0xF4, 0x52, 0x90, 0x80, 0xE8,
        0x52, 0xA2, 0xE4, 0xF9, 0x7E, 0x13, 0xDB, 0xCC, 0x65, 0x62, 0x6E, 0xB5, 0xEC, 0x6F, 0x33, 0x74,
        0x54, 0xFD, 0xEF, 0x39, 0xCE, 0xF8, 0xA2, 0x8B, 0xAD, 0x3D, 0xDF, 0x22, 0x4E, 0xDB, 0x35, 0x18,
        0x65, 0x71, 0x9D, 0xC9, 0xB7, 0xA0, 0x57, 0x4C, 0xE3, 0x6E, 0x83, 0x96, 0x7E, 0x75, 0x36, 0x2A,
        0xE1, 0x44, 0xB4, 0x2C, 0x5D, 0x11, 0x59, 0x19, 0x27, 0x5C, 0x52, 0x17, 0x46, 0x14, 0x89, 0xBB,
        0x40, 0x0A, 0xF3, 0xFC, 0xCB, 0x37, 0xF6, 0x0E, 0x86, 0xE8, 0x77, 0xF0, 0x7A, 0x41, 0xAE, 0xF4,
        0x1A, 0x96, 0xC4, 0xF4, 0x4A, 0xCE, 0xB3, 0x48, 0x06, 0x61, 0xFD, 0x35, 0xF6, 0xFF, 0xA9, 0xAB,
        0x40, 0x4F, 0x5F, 0x9A, 0x04, 0x1C, 0xA4, 0xE8, 0x86, 0x48, 0x17, 0xDD, 0x2B, 0x04, 0xF9, 0x51,
        0x54, 0xEC, 0x73, 0x17, 0x7D, 0xAC, 0x42, 0x76, 0x83, 0xC5, 0xD2, 0x5D, 0x58, 0xF6, 0x69, 0x12,
        0x54, 0x7A, 0xB3, 0xA1, 0x42, 0xDA, 0xD4, 0x16, 0x04, 0x89, 0xB3, 0xD0, 0x23, 0x97, 0x6C, 0x4B,
        0xD2, 0x87, 0x30, 0x4D, 0x41, 0x01, 0x99, 0xDA, 0x6E, 0x4B, 0x87, 0x75, 0x85, 0x0D, 0x97, 0xB8,
        0x3D, 0x9B, 0xA8, 0x96, 0x0F, 0xF9, 0x8F, 0x7C, 0xF7, 0xA2, 0x25, 0x8C, 0x77, 0x9F, 0x83, 0xDE,
        0xF4, 0x79, 0xAD, 0x0B, 0x39, 0xF1, 0x7B, 0xFD, 0xF5, 0xA5, 0x5C, 0x38, 0x14, 0xB9, 0x59, 0x17,
        0x49, 0xFD, 0xFF, 0xF8, 0xDC, 0xFB, 0x9D, 0x22, 0x4D, 0x0D, 0xC7, 0xFB, 0xE9, 0x53, 0x0F, 0xAA,
        0xF0, 0x82, 0xF7, 0xB0, 0x74, 0x2D, 0xE4, 0xF1, 0x8A, 0x68, 0xED, 0x1C, 0x4D, 0x14, 0x87, 0x66,
        0x49, 0xA5, 0x23, 0x84, 0x87, 0x89, 0x75, 0x04, 0x9F, 0x5E, 0x63, 0x6D, 0x79, 0x3B, 0x97, 0x67,
        0x2E, 0x8B, 0x01, 0xB4, 0x8A, 0x29, 0xB2, 0xC3, 0xEB, 0x3E, 0x95, 0xE7, 0xB0, 0xCE, 0xD8, 0x81,
        0xD3, 0xD7, 0xC3, 0xCC, 0xC6, 0x21, 0xCD, 0x05, 0x11, 0xE9, 0x6C, 0xF1, 0x4B, 0xE3, 0x05, 0x8D,
        0x51, 0xE3, 0x6B, 0xA1, 0xA5, 0x0D, 0x29, 0xC9, 0xBE, 0x85, 0x5F, 0xDC, 0xE9, 0xDD, 0x23, 0x96,
        0xF5, 0x44, 0x22, 0x58, 0xE9, 0x08, 0x57, 0xB2, 0xEB, 0x1D, 0xA3, 0x14, 0xBB, 0x47, 0xC2, 0xDF,
        0xEB, 0x83, 0x22, 0xC8, 0x3E, 0x0B, 0x90, 0xBB, 0x1A, 0x3D, 0x8C, 0x0F, 0x84, 0x0D, 0xB1, 0x27,
        0x80, 0x07, 0x4D, 0x53, 0x32, 0x25, 0x4E, 0xB4, 0x04, 0x9A, 0xFA, 0xA0, 0x51, 0x81, 0x1F, 0x4D,
        0x11, 0xB9, 0xD8, 0xA2, 0xDC, 0x89, 0xCC, 0xDB, 0xAE, 0xEB, 0xFE, 0x23, 0xF9, 0xFF, 0xC6, 0x72,
        0x2A, 0xDF, 0x95, 0x11, 0x58, 0x13, 0x18, 0x9A, 0x04, 0x30, 0x0F, 0xE8, 0xC7, 0x58, 0xA6, 0x36,
        0xE3, 0x48, 0x4C, 0xBA, 0x53, 0xC8, 0x2C, 0x4F, 0xAD, 0x2E, 0x8C, 0x3E, 0x3B, 0x4E, 0xF0, 0xB6,
        0x38, 0x51, 0xCD, 0x16, 0x2C, 0x91, 0xE2, 0xB9, 0x03, 0x06, 0x77, 0xE0, 0x17, 0xBA, 0x48, 0x32,
        0xE1, 0xAF, 0x75, 0x88, 0xD6, 0x01, 0x11, 0x3C, 0x9E, 0xDD, 0x04, 0xF9, 0x03, 0x5E, 0x65, 0x25,
        0x7E, 0x67, 0xC5, 0xB9, 0x5F, 0xFB, 0xB4, 0xFD, 0xA5, 0x16, 0xC3, 0xB2, 0xFA, 0x6A, 0x57, 0xE9,
        0xA2, 0xFB, 0xC8, 0xB2, 0x26, 0xA0, 0xFD, 0x53, 0x4E, 0x6E, 0x3D, 0x7A, 0xB8, 0x7B, 0x90, 0xBA,
        0xDB, 0xFE, 0xAA, 0xA5, 0xE8, 0xA7, 0xBE, 0x17, 0xDE, 0x09, 0x2F, 0xFD, 0x46, 0x37, 0x5F, 0xC6,
        0xA0, 0x57, 0x4F, 0xCA, 0xF8, 0x1E, 0x98, 0xA0, 0xB1, 0x9B, 0x48, 0xBD, 0x88, 0xB8, 0x5A, 0x44,
        0x86, 0x6E, 0x17, 0xAD, 0xAF, 0xB0, 0xF8, 0xAD, 0x14, 0xE9, 0x97, 0x9E, 0x50, 0xD2, 0x64, 0xEF,
        0xC9, 0xB2, 0x01, 0x23, 0x06, 0xC6, 0x77, 0x2D, 0x47, 0x7F, 0x0E, 0x9A, 0x75, 0xDF, 0x3B, 0x00,
        0x37, 0xE5, 0x2D, 0x33, 0x2E, 0xC1, 0x33, 0x59, 0xB6, 0x9B, 0x9D, 0xF6, 0x32, 0x97, 0x59, 0x09,
        0xE1, 0x42, 0x47, 0xC1, 0x18, 0xB3, 0x71, 0x30, 0xD4, 0x58, 0xEA, 0x93, 0x46, 0x93, 0x6D, 0x0E,
        0xA3, 0x82, 0xC1, 0x90, 0x9B, 0x5A, 0xE5, 0x21, 0x9C, 0xBE, 0x6C, 0xB8, 0x7C, 0xDA, 0x81, 0xEA,
        0x7D, 0xB2, 0x1A, 0x3A, 0xD6, 0x1F, 0x89, 0x26, 0x5F, 0xED, 0xBA, 0x27, 0x05, 0xEA, 0xC1, 0x42,
        0xB9, 0x1F, 0x98, 0xC5, 0x55, 0x6E, 0xB3, 0x58, 0x46, 0x89, 0xCE, 0xF5, 0x4F, 0xE7, 0x02, 0xCA,
        0x9F, 0x30, 0x7C, 0x0E, 0x19, 0xCB, 0x11, 0xCF, 0xCE, 0x44, 0x79, 0xE0, 0xC0, 0x12, 0x27, 0x92,
        0x04, 0xE1, 0x47, 0x00, 0x14, 0x8C, 0x02, 0xED, 0x12, 0x6B, 0x2E, 0xC3, 0x19, 0x46, 0xD2, 0x1A,
        0xD4, 0x07, 0xDA, 0x69, 0xA4, 0x16, 0xC9, 0xD3, 0xE3, 0x79, 0x66, 0xE9, 0xE8, 0x4C, 0x59, 0x23,
        0x11, 0x29, 0xFB, 0x17, 0x62, 0x0D, 0x45, 0x20, 0xDF, 0xB7, 0x78, 0xBD, 0xC8, 0xE4, 0x8D, 0xB3,
        0xE1, 0x32, 0x9B, 0xDB, 0x50, 0x2B, 0x22, 0xAA, 0xE3, 0xC4, 0x31, 0x22, 0xEE, 0xDE, 0x92, 0x55,
        0x5F, 0xD1, 0xDE, 0x4D, 0xB5, 0x4A, 0x43, 0x11, 0xDF, 0x77, 0x8F, 0x3D, 0x62, 0x97, 0x33, 0x55
};

};
};
};