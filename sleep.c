#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void
usage (void)
{
  printf ("usage: sleep [seconds...]\n");
  exit (1);
}
int
main (int argc, char *argv[])
{
  if (argc != 2)
    usage ();
  int secs = atoi (argv[1]);
  if (!(atoi (argv[1])))
    usage ();
  sleep (secs);
}
