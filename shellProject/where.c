/*
Original Author: Ben Miller
Editors: Kelsey McRae, Malachi Parks
Section: CISC361-010
Assignment: Programming Assignment 3
Due Date: 10/4/2020
*/

#include "get_path.h"

char *where(char *command, struct pathelement *p)
{
  char cmd[64], *ch;
  int  locFound; //how many times the executable is found

  while (p) {       
    sprintf(cmd, "%s/%s", p->element, command);
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
    return (char *) NULL;
}
