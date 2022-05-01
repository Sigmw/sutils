#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc < 2)
    exit(0);
  int flag = strcmp(argv[1], "-n");
  int i = flag ? 1 : 2;
  for (; i < argc; i++) {
    printf("%s ", argv[i]);
  }
  if (flag)
    putchar('\n');
}
