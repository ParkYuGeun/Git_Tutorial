#include<stdio.h>
int main(void) {
	int arr[5];
	printf("5���� ������ �Է��ϼ���:");
	for (int i = 0;i < 5;i++) {
		scanf("%d", &arr[i]);
	}

	printf("¦�� ���: ");
	for(int i = 0;i < 5;i++)
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	printf("\n");
	printf("Ȧ�� ���: ");
		for (int i = 0;i < 5;i++)
			if (arr[i] % 2 != 0)
				printf("%d ", arr[i]);
		
	

	return 0;
}