#include<stdio.h>

int main(){
    printf("nhap do dai day(Cm): ");
    float b;
    scanf("%f",&b);
    printf("nhap chieu cao(Cm): ");
    float h;
    scanf("%f",&h);
    float s = (b * h) / 2;
    printf("dien tich hinh tam giac la: %.2f(Cm)",s);
}
