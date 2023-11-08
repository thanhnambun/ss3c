#include <stdio.h>
int main(){
	int n, a, b, c, d;
	printf("nhap so n : "); 
	scanf("%d",&n);
	d = n; 
	c = (n/10); 
	b = (n/100);
	a = (n/1000); 
	int total = (a + b + c +d), reverse = (d*1000 + c*100 + b*10 +a) ; 
	printf("total %d \n reverse  %d \n",&total,&reverse); 
}
