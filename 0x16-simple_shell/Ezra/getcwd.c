/* CELEBG03

   This example determines the working directory.

 */
#include <unistd.h>
#include <stdio.h>

void main(void) 
{
  char cwd[256];

  if (chdir("/tmp") != 0)
    perror("chdir() error()");
  else i
  {
    if (getcwd(cwd, sizeof(cwd)) == NULL)
      perror("getcwd() error");
    else
      printf("current working directory is: %s\n", cwd);
  }
}
