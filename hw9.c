#include<stdio.h>
typedef struct info
{
	char name[20];
	char country[20];
	int population;
}Info;

int main(void) {
	Info con[3];
	for (int i = 0;i < 3;i++) {
		printf("Name:");
		scanf("%s",con[i].name);
		printf("Country:");
		scanf("%s", con[i].country);
		printf("population:");
		scanf("%d", &con[i].population);
	}
	for (int i = 0;i < 3;i++) {
		printf("%d. %s in %s with a population of %d people \n",
			i,con[i].name,con[i].country,con[i].population);
		
	}
}