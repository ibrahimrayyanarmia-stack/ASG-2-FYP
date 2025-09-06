#include <stdio.h>

int main(){
	int a, b, c, d;
	a = 3;
	b = 5;
	printf("Given that a rectangle has a width of %d and a length of %d, it's area would be %d.\n", a, b, a*b);
	puts("Try it yourself. Input the rectangle's width.");
	scanf("%d", &c);
	puts("Input the rectangle's length.");
	scanf("%d", &d);
	printf("Given that a rectangle has a width of %d and a length of %d, it's area would be %d.", c, d, c*d);
	return 0;
}
