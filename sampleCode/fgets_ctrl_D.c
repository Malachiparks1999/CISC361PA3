#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#define MAXLINE 128

void main(void)
{
  char	buf[MAXLINE];	
  pid_t	pid;
  char  *status;

  printf("> ");  /* print prompt */

again:
  while ((status = fgets(buf, MAXLINE, stdin)) != NULL) {
    if (buf[strlen(buf) - 1] == '\n')
      buf[strlen(buf) - 1] = 0; /* replace newline with null */

    printf("%s\n", buf);

    if (strcmp(buf, "exit") == 0)
      exit(1);

    printf("> ");
  }
  if (status == NULL) {
    printf("^D\n");
    printf("Use \"exit\" to leave tcsh.\n");
    printf("> ");
    goto again;
  } else
    printf("what did I read???\n> ");
}
