#include <stdio.h>
int main(){
	float diemtoan;
	float diemvan;
	float diemanh;
	printf("nhap diem thi diemtoan, diemvan, diemanh : ");
	scanf("%f %f %f" ,&diemtoan,&diemvan,&diemanh);
	printf("diemtoan : %.2f \n diemvan : %.2f \n diemanh : %.2f \n",diemtoan,diemvan,diemanh);
	float diemtong = diemtoan + diemvan + diemanh, diemtrungbinh = (diemtoan + diemvan + diemanh) / 3;
	printf("diemtong %2.f \n diemtrungbinh %2.f",diemtong,diemtrungbinh);
}
