#ifndef rsetkeyh
#define rsetkeyh
#include "../memory/memu.h"
void rsetkey(int addr,int Key){
  mem[addr].key=Key;
}
#endif
