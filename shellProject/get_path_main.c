#include "get_path.h"

main()
{
  char cmd[64];
  struct pathelement *p, *erase;
  
  /*
  p = get_path();
  while (p) {         // WHERE
    sprintf(cmd, "%s/gcc", p->element);
    if (access(cmd, X_OK) == 0)
      printf("[%s]\n", cmd);
    p = p->next;
  }
  */
  printf("----------\n");

  p = get_path();
  erase = p;//used for erasing
  while (p) {         // WHICH
    sprintf(cmd, "%s/gcc", p->element);
    if (access(cmd, X_OK) == 0) {
      printf("[%s]\n", cmd);
      while(p){//used for freeing
	printf("Freeing memory\n");
	erase = p;
	p = p->next;
	free(erase);
      }//while
      free(p);
      break;
    }
    erase = p;
    p = p->next;
    free(erase);
  }
}
