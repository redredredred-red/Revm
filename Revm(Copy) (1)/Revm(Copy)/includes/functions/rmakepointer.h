#ifndef rmakepointerh
#define rmakepointerh
#include "../memory/memu.h"
void rmakepointer(int addr){
  mem[addr].ispointer=1;
}
#endif
