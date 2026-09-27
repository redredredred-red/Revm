#ifndef rwriteh
#define rwriteh
#include "../memory/memu.h"
void rwrite(int adr,int value){
   if(mem[adr].ispointer==0){
     mem[adr].dat=value;
   } else {
     mem[adr].pointedadr=value;
   }
}
#endif
