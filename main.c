#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("%lx\n",strtol("A", (char**)NULL, 16));
	printf("%ld\n",strtol("10", (char**)NULL, 0));
	printf("%ld\n",strtol("072", (char**)NULL, 0));
}

