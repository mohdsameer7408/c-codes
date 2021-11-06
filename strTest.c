#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* lastLetters(char* s) {
  int l = strlen(s);
  char* st = malloc(sizeof(char) * 3);
  st[0] = s[l - 1];
  st[1] = ' ';
  st[2] = s[l - 2];
  return st;
}

void main() {
  char s[6] = "Hello\0";
  printf("%s", lastLetters(s));
}