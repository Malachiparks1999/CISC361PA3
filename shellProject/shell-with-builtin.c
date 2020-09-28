/*
Editors: Kelsey McRae, Malachi Parks
Section: CISC361-010
Assignment: Programming Assignment 3
Due Date: 10/4/2020
*/

#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#define MAXLINE 128

int
main(void)
{
	char	buf[MAXLINE];	/* from apue.h */
	pid_t	pid;
	char    *ptr;
	int		status;

	printf(">> ");	/* print prompt (printf requires %% to print %) */
	while (fgets(buf, MAXLINE, stdin) != NULL) {
		if (buf[strlen(buf) - 1] == '\n')
			buf[strlen(buf) - 1] = 0; /* replace newline with null */
                if (strcmp(buf, "pwd") == 0) {   /* built-in command pwd */
	          ptr = getcwd(NULL, 0);
                  printf("CWD = [%s]\n", ptr);
                  free(ptr);
	        }
		else {
		  if ((pid = fork()) < 0) {
			printf("fork error");
		  } else if (pid == 0) {		/* child */
			execlp(buf, buf, (char *)0);
			printf("couldn't execute: %s", buf);
			exit(127);
		  }

		  /* parent */
		  if ((pid = waitpid(pid, &status, 0)) < 0)
			printf("waitpid error");
/**
                  if (WIFEXITED(status)) S&R p. 239 
                    printf("child terminates with (%d)\n", WEXITSTATUS(status));
**/
                }
		printf(">> ");
	}
	exit(0);
}
