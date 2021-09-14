#include <stdio.h>


int factorial(int number);

int main(int argc, char const *argv[])
{
	printf("%d\n", factorial(5));
	return 0;
}

int factorial(int number) {
	int result = 1;
	for(int i = number; i > 0 ; i--) {
		result *= i;
	}
	return result;
}