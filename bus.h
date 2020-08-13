#ifndef BUS_H
#define BUS_H

#include <cstdint>
#include <array>

#include "cpu6502.h"

class Bus
{
public:
    Bus();

public:
    cpu6502 cpu;

    std::array<uint8_t, 64*1024> ram;

public:
    void write(uint16_t addr, uint8_t data);
    uint8_t read(uint16_t addr, bool readonly = false);
};

#endif // CPUBUS_H
