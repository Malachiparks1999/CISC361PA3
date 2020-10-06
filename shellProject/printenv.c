#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

extern **environ; // used to access enviroment

void printenv(char *envVar){
	if(envVar == NULL){//no arguments given
		for(int i=0; environ[i] != NULL; i++){
			printf("%ls\n",environ[i]);
		}//for
	}//if
	else{// argument given
		printf("%s\n",getenv(envVar));
	}//else
}//printenv
	
// define in sh.h
