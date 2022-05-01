#include <pwd.h>
#include <stdio.h>
#include <unistd.h>

int
main ()
{
  struct passwd *pw;
  uid_t uid;
  uid = getuid ();
  pw = getpwuid (uid);
  puts (pw->pw_name);
}
