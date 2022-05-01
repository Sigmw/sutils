#include <dirent.h>
#include <stdio.h>

int
main (int argc, char *argv[])
{
  char *path;
  if (argc < 2)
    path = ".";
  else
    path = argv[1];
  DIR *d;
  struct dirent *dir;
  d = opendir (path);
  if (d == NULL)
    {
      perror (path);
      return 1;
    }
  while ((dir = readdir (d)) != NULL)
    {
      printf ("%s\n", dir->d_name);
    }
  closedir (d);
  return 0;
}
