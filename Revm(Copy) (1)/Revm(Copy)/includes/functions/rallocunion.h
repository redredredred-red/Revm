#ifndef rallocunionh
#define rallocunionh
#include "../memory/memu.h"
void rallocunion(int addr, int Key){
  mem[addr].key=Key;
  mem[addr+1].key=Key;
  mem[addr+2].key=Key;
  mem[addr+3].key=Key;
  mem[addr+4].key=Key;
  mem[addr+5].key=Key;
  mem[addr+6].key=Key;
  mem[addr+7].key=Key;
  mem[addr+8].key=Key;
  mem[addr+9].key=Key;
}
#endif
