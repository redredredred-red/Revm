#ifndef rfragbaseh
#define rfragbaseh
#include "rwrite.h"
#include "../memory/memu.h"
#include "rmakepointer.h"
void rfragbase(int typeaddr,int i1,int i2,int i3){
  if(typeaddr==1){
    rwrite(mem[i1].dat,mem[i2].dat);
  }
  if(typeaddr==2){
    rmakepointer(mem[i1].dat);
  }
}
#endif
