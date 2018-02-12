#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
  int fd = open("first.ppm", O_CREAT | O_WRONLY, 0644);
  char buffer[512];
  char * header = "P3\n512 512\n255\n";
  int i, j, k, l, a = 255, b = 0, c = 0;
  write(fd, header, strlen(header));

  for(i = 0; i < 256; i++)
    for(l = 0; l < 2; l++){
      for(j = 0; j < 256; j++)
	for(k=0; k<2; k++){
	  sprintf(buffer,"%d %d %d ", a,(b+i+j)%256,c+j);
	  write(fd, buffer, strlen(buffer));
	}
      sprintf(buffer,"\n");
      write(fd, buffer, strlen(buffer));
    }
}
