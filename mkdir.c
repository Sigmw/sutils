#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

static void
mkdirp (const char *dir)
{
  char tmp[256];
  char *p = NULL;
  size_t len;

  snprintf (tmp, sizeof (tmp), "%s", dir);
  len = strlen (tmp);
  if (tmp[len - 1] == '/')
    tmp[len - 1] = 0;
  for (p = tmp + 1; *p; p++)
    if (*p == '/')
      {
        *p = 0;
        mkdir (tmp, S_IRWXU);
        *p = '/';
      }
  mkdir (tmp, S_IRWXU);
}
static void
handle (char *buffer)
{
  if (mkdir (buffer, 0700))
    {
      if (chdir (buffer))
        {
          perror (buffer);
        }
    }
}
int
main (int argc, char *argv[])
{
  if (argc == 1)
    {
      printf ("usage: mkdir [-p] [directory]\n");
      exit (1);
    }
  char *buffer = argv[2];
  if (strcmp ("-p", argv[1]))
    {
      buffer = argv[1];
      handle (buffer);
      mkdir (buffer, 0700);
    }
  else
    {
      mkdirp (buffer);
      if (argc != 3)
        {
          printf ("usage: mkdir [-p] [directory]\n");
          exit (1);
        }
    }
}
