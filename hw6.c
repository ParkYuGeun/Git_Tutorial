#include<stdio.h>
int main(void) {
	int arr1[] = {1, 2, 3, 4, 5, 6};
	int arr2[] = { 7, 8, 9, 10, 11, 12 };

	int* ptr1 = arr2;
	int* ptr2 = arr1;
	for (int i = 0;i < 6;i++) {
		printf("%d ", arr1[i]);
	}

	printf("\n");
	for (int i = 0;i < 6;i++) {
		printf("%d ", arr2[i]);
	}

	int temp;
	for (int i = 0;i < 6;i++) {
		temp = (*ptr1);
		(*ptr1) = (*ptr2);
		(*ptr2) = temp;
		ptr1++;
		ptr2++;
	}

	printf("\nafter swap\n");
	for (int i = 0;i < 6;i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int i = 0;i < 6;i++) {
		printf("%d ", arr2[i]);
	}
	

}