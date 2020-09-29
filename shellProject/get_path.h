/*
Original Author: Ben Miller
Editors: Kelsey McRae, Malachi Parks
Section: CISC361-010
Assignment: Programming Assignment 3
Due Date: 10/4/2020
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/* function prototype.  It returns a pointer to a linked list for the path
   elements. */
struct pathelement *get_path();

struct pathelement
{
  char *element;			/* a dir in the path */
  struct pathelement *next;		/* pointer to next node */
};

