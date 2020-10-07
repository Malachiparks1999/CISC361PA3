/*
Editors: Kelsey McRae, Malachi Parks
Section: CISC361-010
Assignment: Programming Assignment 3
Due Date: 10/8/2020
*/

#include <signal.h>

void sigIntHandler(int sigNum){
	signal(SIGINT, sigintHandler);
	printf("^C does not exit shell\n");
	fflush(stdout);
}//sigInt Handler
