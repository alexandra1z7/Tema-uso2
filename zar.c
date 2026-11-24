#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int main() 
{
	srand(time(NULL));
	int x=rand()%6+1;
	int y=rand()%6+1;
	printf("Dau cu zaru %d %d", x, y);
	if(x==6 && y==5)
	printf(" n-am nevoie de servici");
	else if (x==6 && y==6)
		printf(" ca mine nu se mai naste");
	printf("\n");
	return 0;
}
