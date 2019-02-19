#include <stdio.h>

int main( void )
{
	int i, a;
	a = 0;
	for( i = 0; i < 5; i++ ) {
		a += i;
	}

	printf("Hello world.\n");
	printf("%d\n", a);

	return 0;
}
