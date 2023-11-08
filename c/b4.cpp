#include <stdio.h>
int main(){
	int a, b, c;
	int max, min;
	printf("nhap so a, b, c : ");
	scanf("%d %d %d",&a,&b,&c);
	max = a;
	min = a;
	if (max < b) max = b;
	if (max < c) max = c;
	if (min > b) min = b;
	if (min > c) min = c;
	printf("min : %d \n max : %d",min,max);
}
