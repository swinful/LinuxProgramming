#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/** Filename: chap11_wait.c
 *  Book: Wrox - Beginning Linux Programming 4th Ed, 
 *        by Neil Matthew, Richard Stones
 *
 * Description: 
 *
 * -swinful
 **/

int main() {

  pid_t pid;
  char *message;
  int n;
  int exit_code;

  printf("fork program starting...\n");
  pid = fork();
  switch(pid) {
    case -1:
      perror("fork failed");
      exit(1);
    case 0:
      message = "This is the child";
      n = 15;
      exit_code = 37;
      break;
    default:
      message = "This is the parent";
      n = 3;
      exit_code = 0;
      break;
  }

  for(; n > 0; n--) {
    puts(message);
    sleep(1);
  }

  if ( pid != 0 ) { /* We are in the parent process */
    int stat_val;
    pid_t child_pid;

    /**
     * This will suspend execution of parent process until status information is
     * evailable for the child process
     **/
    child_pid = wait(&stat_val);

    printf("Child has finished: PID = %d\n", child_pid);
    if ( WIFEXITED(stat_val) ) {
      printf("Child exited with code %d\n", WEXITSTATUS(stat_val));
    } else {
      printf("Child terminated abnormally\n");
    }
  }

  exit(exit_code);
}

