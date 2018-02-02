#include <stdio.h>
#include <stdlib.h>

int main(){
  char header[18] = "P6\n400 400\n255\n";
  char ppm[3600] = {0};
  int i, r;
  
  memset(ppm, header, sizeof(header));
  srand(time(NULL));
  r = rand() % 256;
  
  for(i = 0; i < 3600; i++){
    sprintf("%s%c%c%c", 255, 255, 0); 
    
  };
}

int close_rand(int num){
    int r = rand() % 10;
    int a = rand() % 2;
    if(a)
      return num + r;
    return num - r;
}

