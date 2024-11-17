#include <stdio.h>
/* copy input to output; 2nd version */
main()
{
int c;
while ((c = getchar()) != EOF) // the assignment returns the value assigned
putchar(c);
}