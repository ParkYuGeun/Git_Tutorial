<<<<<<< HEAD
#include<stdio.h>
int convcase(int ch) {
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch < 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return ch;
}

int main(void) {
	printf("문자 입력: ");
	char ch[100];
	fgets(ch,sizeof(ch),stdin);
	for(int i=0; i<strlen(ch);i++)

		putchar(convcase(ch[i]));
}
=======
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




>>>>>>> 7e921da9a6d30db492efe98d232a043e013edbb8
