/*
Editors: Kelsey McRae, Malachi Parks
Section: CISC361-010
Assignment: Programming Assignment 3
Due Date: 10/8/2020
*/

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

void sigIntHandler(int sigNum){
	signal(SIGINT, sigIntHandler);
	printf("\n^C does not exit shell\n");
	fflush(stdout);
}//sigInt Handler
