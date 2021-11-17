#include<stdio.h>
#include<math.h>
double stddev(int* data[]);
int main(void) {
	int n1,n2,n3,n4,n5;
	printf("enter 5real numbers:");
	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
	int* nums[5] = { &n1,&n2,&n3,&n4,&n5 };
	printf("%f",stddev(nums));

	
	
}
double stddev(int* data[])
{
	int i;
	double sum = 0.0;
	for (i = 0; i < 5; i++)
		sum += (data[i] - data[2]) * (data[i] - data[2]);
	return sqrt(sum / 5);
}




