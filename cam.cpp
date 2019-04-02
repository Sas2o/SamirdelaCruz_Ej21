#include <iostream>
#include <random>
#include <stdlib.h>

int main(){
  int i;
  float x=0;
  float y=0;
  float tetha;
  srand48(2);
  for (i=0;i<1000;i++){  
    tetha = drand48()*2*3.1416;
    x += cos(tetha);
    y += sin(tetha);
    std::cout << x << " " << y << std::endl;
    
  }
  
  return 0;
}
