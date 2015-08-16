#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/** Filename: chap11_execlp.c
 *  Book: Wrox - Beginning Linux Programming 4th Ed, 
 *        by Neil Matthew, Richard Stones
 *
 * Description: 
 *
 * -swinful
 **/

int main() {

  printf("Running ps with execlp\n");
  /**
   * arg1: The filename of file to be executed.
   * arg2: The program name to be executed.
   * arg3: The program arguments.
   * arg4: The null terminator.
   **/
  execlp("ps", "ps", "axl", 0);

  printf("Done.\n");

  exit(0);
}

