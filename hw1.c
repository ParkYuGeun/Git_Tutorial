# include <stdio.h>

int main(void) {
	int num1, num2, result;
	printf("두 정수를 입력하세요:");
	scanf("%d", &num1);
	scanf("%d", &num2);
	result = num1 & num2;
	printf("%d & %d = %d\n",num1,num2,result);
	result = num1 | num2;
	printf("%d | %d = %d\n", num1, num2, result);
	result = num1 ^ num2;
	printf("%d ^ %d = %d\n", num1, num2, result);

}