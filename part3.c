#include "types.h"
#include "stat.h"
#include "user.h"

void
dummyLoop()
{
  int i;
  // Simulate a CPU-intensive task
  sleep(3);
  for (i = 0; i < 1000000; i++)
    ;
  ps();
}

int
main(void)
{
  int pid;

  for (int i = 0; i < 10; i++) {
    pid = fork();
    if (pid < 0) {
      printf(1, "Fork failed\n");
      exit();
    }
    if (pid == 0) {

      // Child process
      dummyLoop();
      exit();
    }
    else
    {
       ps();
       wait();
    }
  }


  exit();
}

