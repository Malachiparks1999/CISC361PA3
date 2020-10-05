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

void cd(char *dir){
	char *cwd, *newcwd; // hold the cwd and new cwd
	if(dir != NULL){//if directory exists
		if(strcmp(dir,"-") == 0){//change to prev directory
			chdir("..");
		}//if
		if(access(dir,D_OK) == 0){//if file is directory
			cwd = getcwd(NULL,0);
			int length = strlen((cwd)+strlen(dir)+1);
			newcwd = malloc(sizeof(char)*length);
			chdir(newcwd);//changes to new cwd
		}//if
		else{
			printf("%s is not a directory",dir);
		}//else
	}//if
	else{
		chdir("home");
	}//else
}//cd
