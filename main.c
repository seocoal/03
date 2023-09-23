#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int a;
	int b;
	
	printf("Enter the numerator: ");
	scanf("%i", &a);
	
	printf("Enter the denominator: ");
	scanf("%i", &b);
	
	printf("The result of the division is %f\n", (double)a/(double)b );
	
	return 0;
}
