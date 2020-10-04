/*
Original Author: Ben Miller
Editors: Kelsey McRae, Malachi Parks
Section: CISC361-010
Assignment: Programming Assignment 3
Due Date: 10/4/2020
*/

#include "get_path.h"

void where(char *command, struct pathelement *p){
  char *ch;


  /*
  while (p) {       
    sprintf(cmd, "Searching: %s/%s", p->element, command);
    if (access(cmd, X_OK) == 0) {
	
    }
    p = p->next;
  }
  if (locFound != 0) {
    ch = malloc(strlen(cmd)+1);
    strcpy(ch, cmd);
    return ch;
  }
  else
    printf("\n");// prints new line character if nothing is found
  */
  if(command == NULL){//if there is no command given
	printf("\n");
	exit(0);
  }//if
  while(p){
	ch = malloc(strlen(p->element)+strlen(command)+1);//malloc size for ch
	printf("%s",ch); // print out path found
	free(ch); // free memory of ch
	p = p->next;
  }//while
}// where
