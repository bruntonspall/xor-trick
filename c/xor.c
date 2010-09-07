#include <stdio.h>

void swap(char *a, char *b) {
  *a ^= *b;
  *b ^= *a;
  *a ^= *b;
}

int main(int argc, char* argv[]) {
  char a = 7;
  char b = 3;
  printf("A=%d and B=%d\n", a, b);
  swap(&a,&b);
  printf("A=%d and B=%d\n", a, b);
}
