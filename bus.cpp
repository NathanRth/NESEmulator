#include "bus.h"

Bus::Bus()
{
    for(auto e : ram) { e = 0x00; }

    cpu.connectToBus(this);
}

void Bus::write(uint16_t addr, uint8_t data)
{
    if(addr < 0xFFFF)
        ram[addr] = data;
}

uint8_t Bus::read(uint16_t addr, bool readonly)
{
    if(addr < 0xFFFF)
        return ram[addr];
    return 0x00;
}
