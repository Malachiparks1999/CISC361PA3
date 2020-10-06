/*
Editors: Kelsey McRae, Malachi Parks
Section: CISC361-010
Assignment: Programming Assignment 3
Due Date: 10/7/2020
*/

#include <stdlib.h>
#include <stdio.h>
#include <signal.h>

int killProc(int passedPID, char *killtype){
	int sig = atoi(killtype) - 45;
	int exist = kill(passedPID,0);
	if(exist == -1){//does not  exist
		return -1;
	}//if
	if(killtype == NULL){//killed in passed command
		kill(passedPID,9);
		return 0;
	}//
	else{//selected kill type
		kill(passedPID,sig);
		return 0;
	}//else
}//kill

//add definition to sh.h
