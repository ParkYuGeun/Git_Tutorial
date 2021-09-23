# include <stdio.h>

int main(void) {
	double km, mile;
	printf("Please enter Killometers:");
	scanf("%lf", &km);
	mile = km/1.609;
	printf("%.1fkm is equal to %.1f miles.",km,mile);
	return 0;
}
