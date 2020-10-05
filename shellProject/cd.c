/*
Original Author: Ben Miller
Editors: Kelsey McRae, Malachi Parks
Section: CISC361-010
Assignment: Programming Assignment 3
Due Date: 10/4/2020
*/

#include <unistd.h>

void cd(char *dir){
	if(dir != NULL){//if directory exists
		if(access(
	}//if
	else{
		printf("%s does not exist\n",dir);
	}//else
}//cd
