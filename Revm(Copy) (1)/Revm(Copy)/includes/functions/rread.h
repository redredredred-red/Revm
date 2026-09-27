int rread(int adr){
  if(mem[adr].ispointer==1){
    return mem[mem[adr].pointedaddr].dat;
  } else {
    return mem[adr].dat;
  }
}
