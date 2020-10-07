/*
Original Author: Ben Miller
Editors: Kelsey McRae, Malachi Parks
Section: CISC361-010
Assignment: Programming Assignment 3
Due Date: 10/4/2020
*/

#include <stdlib.h>
#include <stdio.h>

extern char **environ;

int setEnv(char *envVarName, char *envVarValue){
	if(envVarName == NULL){//no arguments given
        	for(int i=0; environ[i] != NULL; i++){
			printf("%s\n",environ[i]);
                }//for
		return 0;
        }//if
	if(envVarName != NULL && envVarValue == NULL){//empty string
		setenv(envVarName,"",1);
		return 0;
	}//if
	if(envVarName != NULL && envVarValue != NULL){//value
		setenv(envVarName,envVarValue,1);
		return 0;
	}//if
	return -1;
}//setenv

//use printenv in shell.c if arg is null
