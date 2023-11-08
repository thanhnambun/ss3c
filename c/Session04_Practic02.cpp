#include <stdio.h>
int main(){
	float html, css, javascript;
	printf("nhap diem html,css, javascript cua sinh vien : ");
	scanf("%f %f %f",&html,&css,&javascript);
	float avgmark = (html + css + javascript)/3;
	if (avgmark < 5 ) {printf("hoc sinh yeu");}
	else {if (avgmark<7) {printf("hoc sinh trung binh");}
	else{if (avgmark<8) {printf("hoc sinh kha");}
	else{if (avgmark<9) {printf("hoc sinh gioi");}
	else {if (avgmark<10) {printf("hoc sinh xuat sac");}
	}
	}
    }
	}
}
