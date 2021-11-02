#include <stdio.h>
#include "header.h"

void main()
{
	char *src = "hello";
	printf("<< %s",src);
	char	*dest = toupper(src);
	printf(">> %s",dest);

	return 0;
}
