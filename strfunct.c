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

char * nstrncat(char *here, char *move, size_t n){
  int x;
  int y = strlen(here);
  for (x = 0 ; x < n; x++){
    here[y + x] = move[x];
  }
  return here;
}

int nstrcmp(char *s1, char *s2){
  int x;
  int y;
  if (strlen(s1) < strlen(s2))
    y = strlen(s1);
  else
    y = strlen(s2);
  for (x = 0; x < y; x++){
    if(s1[x] < s2[x] || s2[x] < s1[x]){
      return s1[x] - s2[x];
    }
  }
  return 0;
}

char *nstrchr( char *s, char c){
  int x ;
  for(x = 0; x < strlen(s); x++){
    if (s[x] == c){
      return s[x];
    }
  }
  return 0;
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
  char a[] = "string";
  char b[] = "int";
  printf("Before : %s \n", a);
  printf("After custom cat: %s \n", nstrncat(a,b,2));
  printf("B: %s \n", b);
  printf("Custom Compare: %d\n", nstrcmp(x,b));
  printf("Regular Compare: %d\n",strcmp(x,b));
  char h = "t";
  printf("Custom char finder: %d\n", nstrchr(a,h));
  printf("Regular char finder: %d\n", strchr(a,h));
  return 0;
}
  
