/*
Original Author: Ben Miller
Editors: Kelsey McRae, Malachi Parks
Section: CISC361-010
Assignment: Programming Assignment 3
Due Date: 10/7/2020
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

void cd(char *dir){
	char *cwd, *newcwd; // hold the cwd and new cwd
	cwd = getcwd(NULL,0);//setting up CWD
	int length = strlen(cwd)+strlen(dir)+1;
	newcwd = malloc(sizeof(char)*length);
	if(dir != NULL){//if directory exists
		if(access(newcwd,F_OK) !=0){//is a file
			if (ENOENT == errno && strcmp(dir,"-") != 0) {
				printf("%s does not exists",dir);
				free(cwd);
				free(newcwd);
			}//if
			if (ENOTDIR == errno){
				printf("%s is not a directory",dir);
				free(cwd);
				free(newcwd);
			}//if
			if (strcmp(dir,"-") == 0){ // trying to move to prev directory
				chdir("..");
				free(cwd);
				free(newcwd);
			}//if
			else{//file is directory and exists
				chdir(newcwd);//changes to new directory
				free(cwd);
				free(newcwd);
			}//else
		}//if
	}//if
	else{
		chdir("home");
		free(cwd);
		free(newcwd);
	}//else
}//cd
