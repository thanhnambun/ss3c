#include <stdio.h>
int main (){
    int old, yearofbirth;
    printf("nhap nam sinh  \n");
    scanf("%d",&yearofbirth);
    old = 2023 - yearofbirth;
    if (old%2==0) {printf("old is even");}
    else{printf("old is odd");}
}
