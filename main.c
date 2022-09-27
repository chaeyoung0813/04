#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	
	printf("input second : ");
	scanf("%d",&x);
	
	printf("the time for %d is %d : %d : %d", x, x/3600, (x%3600)/60, x%60);
	
	return 0;
}
