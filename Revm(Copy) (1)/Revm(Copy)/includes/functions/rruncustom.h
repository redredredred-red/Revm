#ifndef rruncustomh
#define rruncustomh
#include "../memory/memu.h"
#include "rrunbase.h"
void rruncustom(int addr){
  while(1){
    if(mem[addr].dat==0){
      return;
    } else {
      rrunbase(addr);
      // Skip past this entire function to find the next NULL
      while(mem[addr].dat != 0){
        addr++;  // move until we hit NULL
      }
      addr++;  // move past NULL to next function
    }
  }
}
#endif
