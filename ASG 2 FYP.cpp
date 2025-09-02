#include <stdio.h>
int main(){
	char name[100], language[100];
	puts("What is your name?");
	scanf("%[^\n]", name);
	getchar();
	puts("What is your favorite programming language?");
	scanf("%[^\n]", language);
	printf("Your name is %s, and your favorite programming language is %s.", name, language);
	return 0;
}
