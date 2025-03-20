#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
	char *dst;
	char *src = "hello world";
//	char *random = "irrelevant information";
	strcpy(dst, src);
	printf("src:%s\n", src);
	printf("dst:%s\n", dst);
	return 0;
}