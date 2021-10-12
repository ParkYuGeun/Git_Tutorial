#include<stdio.h>
//void filter(int num) {
//	if (num == 1) {
//		printf("%d",num);
//		return;
//	}
//	int f1 = num % 2;
//	printf("%d",f1);
//	filter(num / 2);
//}

void filter(int n) {
    if (n < 2)  
        printf("%d", n);
    else {
        filter(n / 2);
        printf("%d", n % 2);
    }
}
int main(void) {
	int num;
	printf("please enter a number:");
	scanf("%d", &num);
	filter(num);

}