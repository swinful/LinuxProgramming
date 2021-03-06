#include <stdlib.h>
#include <stdio.h>

/** Filename: chap11_system1.c
 *
 * Description: Simple program to cause the 'ps' command to run from within the
 * this program to create a new process.
 **/

int main() {

  /* In addition to the process started by running this code, another new
   * process will be created once the system command executes the command 
   *
   * "ps ax", which is the same thing that happends when "ps ax" is executed
   * from a shell.
   *
   **/

  int returned = system("ps axl&");
  printf("===>>> system returned: %d\n", returned);
  printf("===>>> Done.");
  return 0;
}
