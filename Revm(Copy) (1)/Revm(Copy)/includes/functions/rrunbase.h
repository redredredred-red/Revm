#ifndef rrunbaseh
#define rrunbaseh
#include "../memory/memu.h"
#include "rwrite.h"
#include "rmakepointer.h"
#include "rdestroyptr.h"
void rrunbase(int addr){
  while(1){
    if(mem[addr].dat == 0){           // NULL terminator
      return;                         // function done
    }
    if(mem[addr].dat == 1){
      if(mem[addr+1].key==mem[addr+3].dat){
      rwrite(mem[addr+1].dat, mem[addr+2].dat);
      }
      addr +=4;                      // move past this instruction
    }
    if(mem[addr].dat==2){
      if(mem[addr+1].key==mem[addr+2].dat){
        rmakepointer(addr+1);
      }
      addr+=3;
    }
    if(mem[addr].dat==3){
      if(mem[addr+1].key==mem[addr+2].dat){
        rdestroyptr(addr+1);
      }
      addr+=3;
    }
    if(mem[addr].dat==4){
      if(mem[addr+1].key==mem[addr+2].dat){
        rrunbase(addr+1);
      }
      addr+=3;
    }
  }
}
#endif
