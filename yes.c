#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
  if (argc == 1)
    {
      printf ("usage: yes [word]\n");
      exit (1);
    }
  const char *s = argv[1];
  while (1)
    {
      puts (s);
    }
}
