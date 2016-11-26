#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "palettes.h"


uint8_t get_element(pal sp, const char label){
  if(label == 'r'){
    return sp.r;
  }
  else if(label == 'g'){
    return sp.g;
  }
  else if(label == 'b'){
    return sp.b;
  }
  else{
  /* this should never happen. Compilers should fail before this point. */
  printf("error.\n");
  exit(1);
  }
}

int main(int argc, char *argv[]){
  // Default palette

  int i=0;
  uint8_t buf[3];
  while(i<64){
    buf[0]=get_element(palette[i], 'r');
    buf[1]=get_element(palette[i], 'g');
    buf[2]=get_element(palette[i], 'b');
    fwrite(buf,1,3,stdout);
    i = i + 1;
  }
return 0;
}
