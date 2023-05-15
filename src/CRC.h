#pragma once
//
//    FILE: CRC.h
//  AUTHOR: Rob Tillaart
// VERSION: 0.3.3
// PURPOSE: Arduino library for CRC8, CRC12, CRC16, CRC32, CRC64
//     URL: https://github.com/RobTillaart/CRC
//

#include "CRC8.h"
#include "CRC12.h"
#include "CRC16.h"
#include "CRC32.h"
#include "CRC64.h"
#include "CrcFastReverse.h"
#include "CrcParameters.h"
#include <Arduino.h>

#define CRC_LIB_VERSION       (F("0.3.3"))

uint8_t crc8(
    const uint8_t *array, size_t length,
    uint8_t polynome = CRC8_POLYNOME,
    uint8_t initial  = CRC8_INITIAL,
    uint8_t xorOut   = CRC8_XOR_OUT,
    bool reverseIn   = CRC8_REF_IN,
    bool reverseOut  = CRC8_REF_OUT);

uint16_t crc12(
    const uint8_t *array, size_t length,
    uint16_t polynome = CRC12_POLYNOME,
    uint16_t initial  = CRC12_INITIAL,
    uint16_t xorOut   = CRC12_XOR_OUT,
    bool reverseIn    = CRC12_REF_IN,
    bool reverseOut   = CRC12_REF_OUT);

uint16_t crc16(
    const uint8_t *array, size_t length,
    uint16_t polynome = CRC16_POLYNOME,
    uint16_t initial  = CRC16_INITIAL,
    uint16_t xorOut   = CRC16_XOR_OUT,
    bool reverseIn    = CRC16_REF_IN,
    bool reverseOut   = CRC16_REF_OUT);

uint32_t crc32(
    const uint8_t *array, size_t length,
    uint32_t polynome = CRC32_POLYNOME,
    uint32_t initial  = CRC32_INITIAL,
    uint32_t xorOut   = CRC32_XOR_OUT,
    bool reverseIn    = CRC32_REF_IN,
    bool reverseOut   = CRC32_REF_OUT);

uint64_t crc64(
    const uint8_t *array, size_t length,
    uint64_t polynome = CRC64_POLYNOME,
    uint64_t initial  = CRC64_INITIAL,
    uint64_t xorOut   = CRC64_XOR_OUT,
    bool reverseIn    = CRC64_REF_IN,
    bool reverseOut   = CRC64_REF_OUT);

uint8_t yieldCrc8(
    const uint8_t *array, size_t length,
    size_t yieldPeriod = CRC_DEFAULT_YIELD_PERIOD,
    uint8_t polynome   = CRC8_POLYNOME,
    uint8_t initial    = CRC8_INITIAL,
    uint8_t xorOut     = CRC8_XOR_OUT,
    bool reverseIn     = CRC8_REF_IN,
    bool reverseOut    = CRC8_REF_OUT);

uint16_t yieldCrc12(
    const uint8_t *array, size_t length,
    size_t yieldPeriod = CRC_DEFAULT_YIELD_PERIOD,
    uint16_t polynome  = CRC12_POLYNOME,
    uint16_t initial   = CRC12_INITIAL,
    uint16_t xorOut    = CRC12_XOR_OUT,
    bool reverseIn     = CRC12_REF_IN,
    bool reverseOut    = CRC12_REF_OUT);

uint16_t yieldCrc16(
    const uint8_t *array, size_t length,
    size_t yieldPeriod = CRC_DEFAULT_YIELD_PERIOD,
    uint16_t polynome  = CRC16_POLYNOME,
    uint16_t initial   = CRC16_INITIAL,
    uint16_t xorOut    = CRC16_XOR_OUT,
    bool reverseIn     = CRC16_REF_IN,
    bool reverseOut    = CRC16_REF_OUT);

uint32_t yieldCrc32(
    const uint8_t *array, size_t length,
    size_t yieldPeriod = CRC_DEFAULT_YIELD_PERIOD,
    uint32_t polynome  = CRC32_POLYNOME,
    uint32_t initial   = CRC32_INITIAL,
    uint32_t xorOut    = CRC32_XOR_OUT,
    bool reverseIn     = CRC32_REF_IN,
    bool reverseOut    = CRC32_REF_OUT);

uint64_t yieldCrc64(
    const uint8_t *array, size_t length,
    size_t yieldPeriod = CRC_DEFAULT_YIELD_PERIOD,
    uint64_t polynome  = CRC64_POLYNOME,
    uint64_t initial   = CRC64_INITIAL,
    uint64_t xorOut    = CRC64_XOR_OUT,
    bool reverseIn     = CRC64_REF_IN,
    bool reverseOut    = CRC64_REF_OUT);
