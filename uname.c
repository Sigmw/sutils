#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/utsname.h>

int main(int argc, char *argv[]) {
  struct utsname u;
  if (uname(&u) == -1) {
    perror("uname");
    return 0;
  }
  int flag = 1;
  for (int i = 1; i < argc; i++) {
    if (!(strcmp(argv[i], "-a"))) {
      printf("%s %s %s %s %s\n", u.sysname, u.nodename, u.release, u.version,
             u.machine);
      flag = 0;
    }
    if (!(strcmp(argv[i], "-r"))) {
      printf("%s\n", u.release);
      flag = 0;
    }
    if (!(strcmp(argv[i], "-n"))) {
      printf("%s\n", u.nodename);
      flag = 0;
    }
    if (!(strcmp(argv[i], "-m"))) {
      printf("%s\n", u.machine);
      flag = 0;
    }
    if (!(strcmp(argv[i], "-v"))) {
      printf("%s\n", u.version);
      flag = 0;
    }
    if (!(strcmp(argv[i], "-s"))) {
      printf("%s\n", u.sysname);
      flag = 0;
    }
  }
  if (flag) {
    printf("usage: uname [-a -r -n -m -v -s]\n");
    exit(1);
  }
  return 0;
}
