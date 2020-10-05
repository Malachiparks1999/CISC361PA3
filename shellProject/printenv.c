#include <stdlib.h>
#include <stdio.h>

extern *environ; // used to access enviroment

void printenv(char *envVar){
	if(envVar == NULL){//no arguments given
		while(environ){
			printf("%s\n",environ);
		}//while
	}//if
	else{ argument given
		printf("%s\n",getenv(envVar));
	}//else
}//printenv
	
// define in sh.h
