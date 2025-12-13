#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	while(1)
	{
		static unsigned int a = 0;
		printf("a = %d\n", a);
		++a;
		sleep(1);
		if (a > 20) break;
	}
	return 0;
}
