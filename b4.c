#include<stdio.h>

int main(){
    float toan;
    float van;
    float anh;
    printf("nhap diem toan: \n");
    scanf("%f",&toan);
    printf("nhap diem van: \n");
    scanf("%f",&van);
    printf("nhap diem anh: \n");
    scanf("%f",&anh);
    float tong = (toan + van + anh)/3;
    printf("tong trung binh 3 mon: %.2f",tong);
}