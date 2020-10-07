#include <stdio.h>

main()
{
  int c;

  printf("Enter characters, one at at time if you like,\n");
  printf("or in strings.  Enter Ctrl-d when you want to stop.\n");

  c = getchar();
  while (c != EOF)
  {
    putchar(c);     /* Echo the character */
    c = getchar();  /* Get next character */
  }
  printf("[%d]\n", c);
}
