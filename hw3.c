#include<stdio.h>
int main(void) {
	int num;
	int total=1;
	int result;
	printf("Please enter a number:");
	scanf("%d", &num);
	for (int i = 2;i < num;i++) {
		result = num % i;
		total *= result;
	}
	if (total == 0)
		printf("it is not a prime number");
	else
		printf("it is a prime number");
}