#include <stdio.h>
int main(){
	int number;
	printf("nhap tu ban phim so : ");
	scanf("%d",&number);
	if (number%2==0){printf("%dla so chan \n",&number);}
	else {printf("%dla so le \n",&number);}
}
