#ifndef rdestroyptrh
#define rdestroyptrh
#include "../memory/memu.h"
void rdestroyptr(int addr){
  mem[addr].ispointer=0;
}
#endif
