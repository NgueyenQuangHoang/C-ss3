#include<stdio.h>

int main(){
    float Pi = 3.14;
    float r ;
    printf("nhap ban kinh; ");
    scanf("%f", &r);
    float chuvi = 2 * Pi * r;
    float dientich = Pi * r * r;
    printf("chu vi la: %f(cm), dien tich la: %f(cm2)",chuvi,dientich);
return 0;
}