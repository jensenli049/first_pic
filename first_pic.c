#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
  srand(time(NULL));
  char header[18] = "P6\n512 512\n255\n";
  int i, j, k, l, a = 255, b = 0, c = 0;
  printf("%s",header);

  for(i = 0; i < 256; i++)
    for(l = 0; l < 2; l++)
      for(j = 0; j < 256; j++)
	for(k=0; k<2; k++)
	  printf("%c%c%c", a,(b+i+j)%256,c+j);
}
