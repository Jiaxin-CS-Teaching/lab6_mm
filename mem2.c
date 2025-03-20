#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
	char *dst;
	while(1)
  {
		dst = malloc(4096);   // simple demo, but bad use of malloc
    usleep(1);
  }
	return 0;
}