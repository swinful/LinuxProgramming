#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/** Filename: chap11_fork.c
 *  Book: Wrox - Beginning Linux Programming 4th Ed, 
 *        by Neil Matthew, Richard Stones
 *
 * Description: 
 *
 * -swinful
 **/

int main() {

  pid_t forked_pid;
  printf("<*> Parent Process (PID=%d)\n", getpid());
  sleep(3);

  printf("Calling fork() ...\n");
  sleep(3);
  forked_pid = fork();
  printf("Forked ..., with (pid = %d)\n", forked_pid);
  sleep(3);
  printf("<**> Child Process (PID=%d)\n", getpid());
  sleep(3);

  // pid_t pid;
  // char *message;
  // int n;

  // printf("fork program starting...\n");
  // pid = fork();
  // switch(pid) {
  //   case -1:
  //     perror("fork failed");
  //     exit(1);
  //   case 0:
  //     message = "This is the child";
  //     n = 5;
  //     break;
  //   default:
  //     message = "This is the parent";
  //     n = 3;
  //     break;
  // }

  // for(; n > 0; n--) {
  //   puts(message);
  //   sleep(1);
  // }

  return 0;
}

