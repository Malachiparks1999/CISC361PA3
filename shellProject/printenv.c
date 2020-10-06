/*
Editors: Kelsey McRae, Malachi Parks
Section: CISC361-010
Assignment: Programming Assignment 3
Due Date: 10/7/2020
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

extern char **environ; // used to access enviroment

void printenv(char *envVar){
	if(envVar == NULL){//no arguments given
		for(int i=0; environ[i] != NULL; i++){
			printf("%s\n",environ[i]);
		}//for
	}//if
	else{// argument given
		printf("%s\n",getenv(envVar));
	}//else
}//printenv

