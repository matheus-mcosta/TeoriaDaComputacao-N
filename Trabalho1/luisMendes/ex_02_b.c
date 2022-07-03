#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
  int c = atoi(argv[0]), d;
  int a = 0, b = 0;

  d = c;
  while (!(c % 2)){ a ++; c / 2; } 
  c --;
  b = c / 2;

  return 0;
}

