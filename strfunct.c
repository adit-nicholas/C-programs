#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nstrlen(char A[]){
  int x = 0;
  while(A[x] != 0){
    x++;
  }
  return x;
}

char * nstrcpy(char *here, char *move){
  int x;
  for (x = 0; x < strlen(here); x++){
    here[x]  = move[x];
  }
  return here;
}

int main(){
  char y[] = "string";
  char x[] = "int";
  printf("string is %d characters long(strlen)\n", strlen(y));
  printf("string is %d characters long(custom)\n", nstrlen(y));
  printf("Used to point at %d\n", y);
  printf("Before: %s\n", y);
  printf("Points to %d\n", strcpy(y,x));
  printf("Now: %s\n", y);
  
}
