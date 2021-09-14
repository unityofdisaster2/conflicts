#include <stdio.h>


int factorial(int number);

int main(int argc, char const *argv[])
{
	printf("%d\n", factorial(5));
	return 0;
}

int factorial(int number) {
	if(number <= 2) {
		printf("%d\n",number);
		return number;
	} else {
		return number*factorial(number-1);
	}
}